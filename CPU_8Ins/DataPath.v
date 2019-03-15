`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:10:38 12/03/2017 
// Design Name: 
// Module Name:    DataPath 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module DataPath(
	input Reset,
	input clk,
	
    input MemWrite,
    input RegWrite,
    input MemToReg,
    input ExtendType,
    input AluSrc,
    input RegDst,
    input Branch,
    input Shift_16bit,
    input JL,
    input Halfword,
    input Byte,
    input J,
	input Jr,
	input [3:0] ALU_Ctr,
	
	input Sltiu,
	
	output [5:0] out_Op,
	output [5:0] out_Func
    );
wire [31:0] PC_Now;
wire [31:0] Instruction;

wire [5:0] Func;
wire [4:0] Rd;
wire [4:0] Rt;
wire [4:0] Rs;
wire [5:0] Op;
wire [15:0] Immediate;
wire [25:0] Jump_Offset;

wire [31:0]RegInput;
reg [31:0] reg_RegInput;

wire [31:0] RsData;
wire [31:0] RtData;

wire [31:0] A;
wire [31:0] B;
wire [31:0] ALU_Result;
wire AequalsB;
wire AlessB;

wire [31:0] dm_Address;
wire [31:0] dm_Data;
wire [31:0] dm_Output;

wire [31:0] Extend_Immediate;
wire [31:0] Extend_Immediate_shift;
wire [31:0] Extend;

wire [31:0] PC_Next;



//Instruction Translate
assign Func = Instruction[5:0];
assign Rd = Instruction[15:11];
assign Rt = Instruction[20:16];
assign Rs = Instruction[25:21];
assign Op = Instruction[31:26];
assign Immediate = Instruction[15:0];
assign Jump_Offset = Instruction[25:0];

assign out_Op = Instruction[31:26];
assign out_Func = Instruction[5:0];
//


//alu
assign A = RsData;


//shifter
assign Extend_Immediate_shift = {Extend_Immediate[15:0] , 16'b0};

//dm
assign dm_Address = ALU_Result;
assign dm_Data = RtData;

//reg input
assign RegInput = reg_RegInput;

always @(ALU_Result , dm_Address, dm_Output , MemToReg , Halfword , Byte , JL , PC_Now , Sltiu) begin
	if(Sltiu == 0) begin
		if(JL == 0) begin//jl
			if(MemToReg == 1) begin//mem
				if(Halfword == 1) begin//lh
					if(dm_Address[1] == 0) begin
						if(dm_Output[15] == 0)
							reg_RegInput = {{16{1'b0}},dm_Output[15:0]};
						else
							reg_RegInput = {{16{1'b1}},dm_Output[15:0]};
					end
					
					else if(dm_Address[1] == 1) begin
						if(dm_Output[31] == 0)
							reg_RegInput = {{16{1'b0}},dm_Output[31:16]};
						else
							reg_RegInput = {{16{1'b1}},dm_Output[31:16]};
					end
				end
				
				else if(Byte == 1) begin//lb
					if(dm_Address[1:0] == 2'b00) begin
						if(dm_Output[7] == 0)
							reg_RegInput = {{24{1'b0}},dm_Output[7:0]};
						else
							reg_RegInput = {{24{1'b1}},dm_Output[7:0]};
					end
					
					else if(dm_Address[1:0] == 2'b01) begin
						if(dm_Output[15] == 0)
							reg_RegInput = {{24{1'b0}},dm_Output[15:7]};
						else
							reg_RegInput = {{24{1'b1}},dm_Output[15:7]};
					end
					
					else if(dm_Address[1:0] == 2'b10) begin
						if(dm_Output[23] == 0)
							reg_RegInput = {{24{1'b0}},dm_Output[23:15]};
						else
							reg_RegInput = {{24{1'b1}},dm_Output[23:15]};
					end
					
					else if(dm_Address[1:0] == 2'b11) begin
						if(dm_Output[31] == 0)
							reg_RegInput = {{24{1'b0}},dm_Output[31:23]};
						else
							reg_RegInput = {{24{1'b1}},dm_Output[31:23]};
					end
				end
				
				else begin//lw
					reg_RegInput = dm_Output;
				end
			end

			else begin//alu
				reg_RegInput = ALU_Result;
			end
		end
			
			
		//jl
		else
			reg_RegInput = PC_Now + 4;
	end
	
	else begin
		if(AlessB == 0) begin
			reg_RegInput = 0;
		end
		
		else begin
			reg_RegInput = 1;
		end
	end
end
//




ALU alu(
	.A(A),
	.B(B),
	.ALU_Ctr(ALU_Ctr),
	
	.Result(ALU_Result),
	.AequalsB(AequalsB)
);

DM dm(
	.clk(clk),
	.Address(dm_Address),
	.Data(dm_Data),
	.WriteEn(MemWrite),
	.Reset(Reset),
	.PC_Now(PC_Now),
	
	.Output(dm_Output)
);

GRF grf(
	.Rs(Rs),
	.Rt(Rt),
	.Rd(Rd),
	.Input(RegInput),
	.PC_Now(PC_Now),
	
	.Reset(Reset),
	.clk(clk),
	
	.RegDst(RegDst),
	.WriteEn(RegWrite),
	.JL(JL),
	
	.RsData(RsData),
	.RtData(RtData)
);

IFU ifu(
	.clk(clk),
	.Reset(Reset),
	
	.PC_Next(PC_Next),
	
	.PC_Now(PC_Now),
	.Instruction(Instruction)
);
Extender extender(
	.ExtendType(ExtendType),
	.Immediate(Immediate),
	
	.Result(Extend_Immediate)
);

NPC npc(
	.Jump_Offset(Jump_Offset),
	.PC_Now(PC_Now),
	.Extend_Immediate(Extend_Immediate),
	.RsData(RsData),
	
	.AequalsB(AequalsB),
	.Branch(Branch),
	.J(J),
	.Jr(Jr),
	.JL(JL),
	
	
	.PC_Next(PC_Next)
);

Mux_1bit rtorimm(
	.In0(RtData),
	.In1(Extend),
	.Slc(AluSrc),
	.Out(B)
);

Mux_1bit extendorshift(
	.In0(Extend_Immediate),
	.In1(Extend_Immediate_shift),
	.Slc(Shift_16bit),
	.Out(Extend)
);





endmodule
