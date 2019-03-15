`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:53:23 12/05/2017
// Design Name:   mips
// Module Name:   C:/Users/yang/Desktop/ForJiZu/CPU_8Ins/mips_test.v
// Project Name:  CPU_8Ins
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: mips
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module mips_test;

	// Inputs
	reg clk;
	reg Reset;

	// Instantiate the Unit Under Test (UUT)
	mips uut (
		.clk(clk), 
		.reset(Reset)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		Reset = 1;
		
		#50 Reset = 0;
		
		#600 Reset = 1;
		
		#50 Reset = 0;
        
		// Add stimulus here

	end
	
	
	
	always #10 begin
		clk = ~clk;
	end
      
endmodule

