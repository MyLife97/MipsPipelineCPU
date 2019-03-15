`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:26:42 12/03/2017
// Design Name:   IFU
// Module Name:   C:/Users/yang/Desktop/ForJiZu/CPU_8Ins/IFU_test.v
// Project Name:  CPU_8Ins
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: IFU
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module IFU_test;

	// Inputs
	reg [31:0] PC_Next;
	reg Reset;
	reg clk;

	// Outputs
	wire [31:0] PC_Now;
	wire [31:0] Instruction;

	// Instantiate the Unit Under Test (UUT)
	IFU uut (
		.PC_Next(PC_Next), 
		.Reset(Reset), 
		.clk(clk), 
		.PC_Now(PC_Now), 
		.Instruction(Instruction)
	);

	initial begin
		// Initialize Inputs
		PC_Next = 0;
		Reset = 0;
		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
	
	always #50 begin
		clk = ~clk;
	end
	
	always #400 begin
		Reset = ~Reset;
	end
	
	always #80 begin
		PC_Next = PC_Next + 1;
	end
      
endmodule

