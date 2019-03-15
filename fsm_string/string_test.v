`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:47:20 11/08/2017
// Design Name:   string
// Module Name:   C:/Users/yang/Desktop/ForJiZu/fsm_string/string_test.v
// Project Name:  fsm_string
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: string
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module string_test;

	// Inputs
	reg clk;
	reg clr;
	reg [7:0] in;

	// Outputs
	wire out;

	// Instantiate the Unit Under Test (UUT)
	string uut (
		.clk(clk), 
		.clr(clr), 
		.in(in), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		clr = 0;
		in = 0;

		// Wait 100 ns for global reset to finish
        
		// Add stimulus here

	end
	
	always begin
		#20 clk = ~clk;
	end
	
	always begin 
		#405 clr = ~clr;
	end
	
	always begin
		 in = "1";
		#40 in = "+";
		#40 in = "+";
		#40 in = "1";
		#40 in = "+";
		#40 in = "1";
		#40;
	end
	
      
endmodule

