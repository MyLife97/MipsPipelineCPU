`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:08:57 12/03/2017
// Design Name:   Extender
// Module Name:   C:/Users/yang/Desktop/ForJiZu/CPU_8Ins/Extender_test.v
// Project Name:  CPU_8Ins
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Extender
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Extender_test;

	// Inputs
	reg [15:0] Immediate;
	reg ExtendType;

	// Outputs
	wire [31:0] Result;

	// Instantiate the Unit Under Test (UUT)
	Extender uut (
		.Immediate(Immediate), 
		.ExtendType(ExtendType), 
		.Result(Result)
	);

	initial begin
		// Initialize Inputs
		Immediate = 0;
		ExtendType = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
	
	always #100 begin
		Immediate = Immediate + 'hffff;
		ExtendType = ~ExtendType;
	end
      
endmodule

