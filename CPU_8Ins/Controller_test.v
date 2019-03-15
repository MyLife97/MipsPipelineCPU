`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:06:32 12/07/2017
// Design Name:   Controller
// Module Name:   C:/Users/yang/Desktop/ForJiZu/CPU_8Ins/Controller_test.v
// Project Name:  CPU_8Ins
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Controller
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Controller_test;

	// Inputs
	reg [5:0] Op;
	reg [5:0] Func;

	// Outputs
	wire out_MemWrite;
	wire out_RegWrite;
	wire out_MemToReg;
	wire out_ExtendType;
	wire out_AluSrc;
	wire out_RegDst;
	wire out_Branch;
	wire out_Shift_16bit;
	wire out_JL;
	wire out_Halfword;
	wire out_Byte;
	wire out_J;
	wire out_Jr;
	wire [3:0] out_ALU_Ctr;

	// Instantiate the Unit Under Test (UUT)
	Controller uut (
		.Op(Op), 
		.Func(Func), 
		.out_MemWrite(out_MemWrite), 
		.out_RegWrite(out_RegWrite), 
		.out_MemToReg(out_MemToReg), 
		.out_ExtendType(out_ExtendType), 
		.out_AluSrc(out_AluSrc), 
		.out_RegDst(out_RegDst), 
		.out_Branch(out_Branch), 
		.out_Shift_16bit(out_Shift_16bit), 
		.out_JL(out_JL), 
		.out_Halfword(out_Halfword), 
		.out_Byte(out_Byte), 
		.out_J(out_J), 
		.out_Jr(out_Jr), 
		.out_ALU_Ctr(out_ALU_Ctr)
	);

	initial begin
		// Initialize Inputs
		Op = 6'b111000;
		Func = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		Op = 6'b111111;
		// Add stimulus here

	end
      
endmodule

