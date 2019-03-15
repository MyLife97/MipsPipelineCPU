`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:26:24 12/04/2017 
// Design Name: 
// Module Name:    Controller 
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
module Controller(
    input [5:0] Op,
	input [5:0] Func,
    output reg out_MemWrite,
    output reg out_RegWrite,
    output reg out_MemToReg,
    output reg out_ExtendType,
    output reg out_AluSrc,
    output reg out_RegDst,
    output reg out_Branch,
    output reg out_Shift_16bit,
    output reg out_JL,
    output reg out_Halfword,
    output reg out_Byte,
    output reg out_J,
	output reg out_Jr,
	output reg [3:0] out_ALU_Ctr,
	
	output reg out_Sltiu
    );
	reg R;
	reg lui;
	reg lw;
	reg sw;
	reg ori;
	reg beq;
	reg jal;
	reg lh;
	reg lb;
	reg sb;
	reg j;
	reg jr;
	
	reg sltiu;
	
	reg R_add;
	reg R_sub;
	reg R_and;
	reg R_or;
	reg R_jr;
	
	
	always @(Op , Func) begin
		R = 0;
		lui = 0;
		lw = 0;
		sw = 0;
		ori = 0;
		beq = 0;
		jal = 0;
		lh = 0;
		lb = 0;
		sb = 0;
		j = 0;
		jr = 0;
		
		sltiu = 0;
		
		R_add = 0;
		R_sub = 0;
		R_and = 0;
		R_or = 0;
		R_jr = 0;
	
		case(Op)
		6'b000000 : R = 1;
		6'b001111 : lui = 1;
		6'b100011 : lw = 1;
		6'b101011 : sw = 1;
		6'b001101 : ori = 1;
		6'b000100 : beq = 1;
		6'b000011 : jal = 1;
		6'b100001 : lh = 1;
		6'b100000 : lb = 1;
		6'b101000 : sb = 1;
		6'b000010 : j = 1;
		
		6'b001011 : sltiu = 1;
		endcase
		
		case(Func)
		6'b100001 : R_add = 1;
		6'b100011 : R_sub = 1;
		6'b100100 : R_and = 1;
		6'b100011 : R_or = 1;
		6'b001000 : R_jr = 1;
		endcase
		
		//MemWrite
	end
	
	always @(Op,Func) begin
		out_MemWrite = 0;
		out_RegWrite = 0;
		out_MemToReg = 0;
		out_ExtendType = 0;
		out_AluSrc = 0;
		out_RegDst = 0;
		out_Branch = 0;
		out_Shift_16bit = 0;
		out_JL = 0;
		out_Halfword = 0;
		out_Byte = 0;
		out_J = 0;
		out_ALU_Ctr = 0;
		out_Jr = 0;
		
		out_Sltiu = 0;
	
	
		if(sw || sb) begin
			out_MemWrite = 1;
		end
		
		if(R || lw || lui || ori || jal || lh || lb || sltiu) begin
			out_RegWrite = 1;
		end
		
		if(lw || lh || lb) begin
			out_MemToReg = 1;
		end
		
		if(beq || lw || sw || lh || lb || sb || sltiu) begin
			out_ExtendType = 1;
		end
		
		if(lw || sw || lui || ori || lh || lb || sb || sltiu) begin
			out_AluSrc = 1;
		end
		
		if(R) begin
			out_RegDst = 1;
		end
		
		if(beq) begin
			out_Branch = 1;
		end
		
		if(lui) begin
			out_Shift_16bit = 1;
		end
		
		if(jal) begin
			out_JL = 1;
		end
		
		if(lh) begin
			out_Halfword = 1;
		end
		
		if(sb || lb) begin
			out_Byte = 1;
		end
		
		if(j) begin
			out_J = 1;
		end
		//alu +0000
		if(R && R_add || lw || sw || lui || jal || lh || lb || sb || j) begin
			out_ALU_Ctr = 4'b0000;
		end
		//alu -0001
		if(R && R_sub || beq) begin
			out_ALU_Ctr = 4'b0001;
		end
		
		//alu &0010
		
		//alu |0011
		if(R && R_or || ori) begin
			out_ALU_Ctr = 4'b0011;
		end
		
		if(R && R_jr) begin
			out_Jr = 1;
		end
		
		if(sltiu) begin
			out_Sltiu = 1;
		end
	end
	

	



endmodule
