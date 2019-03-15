`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:45:30 11/06/2017
// Design Name:   splitter
// Module Name:   C:/Users/yang/Desktop/ForJiZu/Splitter/splitter_test.v
// Project Name:  Splitter
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: splitter
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module splitter_test;

	// Inputs
	reg [31:0] A;

	// Outputs
	wire [7:0] O1;
	wire [7:0] O2;
	wire [7:0] O3;
	wire [7:0] O4;

	// Instantiate the Unit Under Test (UUT)
	splitter uut (
		.A(A), 
		.O1(O1), 
		.O2(O2), 
		.O3(O3), 
		.O4(O4)
	);

	initial begin
		// Initialize Inputs
		A = 0;
		#100 A = 'h11111111;
		#100 A = 'h2222;
		#100 A = 'h3333;
		#100 A = 'h01020304;

		// Wait 100 ns for global reset to finis
        
		// Add stimulus here

	end
	
	
      
endmodule

