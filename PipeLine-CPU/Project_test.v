`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:59:19 12/27/2017
// Design Name:   mips
// Module Name:   C:/Users/yang/Desktop/ForJiZu/P6/P6_test.v
// Project Name:  P6
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

module P6_test;

	// Inputs
	reg clk;
	reg reset;

	// Instantiate the Unit Under Test (UUT)
	mips uut (
		.clk(clk), 
		.reset(reset)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 1;

		// Wait 100 ns for global reset to finish
		#10;
		reset =0;
        
		// Add stimulus here

	end
	
	always #5 begin
		clk = ~clk;
	end
	
	//always #700 begin
		//reset = 1;
		//#50 reset = 0;
	//end
      
endmodule

