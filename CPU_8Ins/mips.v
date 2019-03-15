`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:20:20 12/04/2017 
// Design Name: 
// Module Name:    mips 
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
module mips(
    input clk,
    input reset
    );

	wire [5:0] Op;
	wire [5:0] Func;

    wire MemWrite;
    wire RegWrite;
    wire MemToReg;
    wire ExtendType;
    wire AluSrc;
    wire RegDst;
    wire Branch;
    wire Shift_16bit;
    wire JL;
    wire Halfword;
    wire Byte;
    wire J;
	wire Jr;
	wire [3:0] ALU_Ctr;
	
	wire Sltiu;

Controller controller(
	.Op(Op),
	.Func(Func),

	.out_MemWrite(MemWrite),
	.out_RegWrite(RegWrite),
	.out_MemToReg(MemToReg),
	.out_ExtendType(ExtendType),
	.out_AluSrc(AluSrc),
	.out_RegDst(RegDst),
	.out_Branch(Branch),
	.out_Shift_16bit(Shift_16bit),
	.out_JL(JL),
	.out_Halfword(Halfword),
	.out_Byte(Byte),
	.out_J(J),
	.out_Jr(Jr),
	.out_ALU_Ctr(ALU_Ctr),
	
	.out_Sltiu(Sltiu)
);

DataPath datapath(
	.out_Op(Op),
	.out_Func(Func),
	
	.clk(clk),
	.Reset(reset),
	
	.MemWrite(MemWrite),
	.RegWrite(RegWrite),
	.MemToReg(MemToReg),
	.ExtendType(ExtendType),
	.AluSrc(AluSrc),
	.RegDst(RegDst),
	.Branch(Branch),
	.Shift_16bit(Shift_16bit),
	.JL(JL),
	.Jr(Jr),
	.Halfword(Halfword),
	.Byte(Byte),
	.J(J),
	.ALU_Ctr(ALU_Ctr),
	
	.Sltiu(Sltiu)
	
);


endmodule
