`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:00:56 12/26/2017
// Design Name:   sign_test
// Module Name:   C:/Users/yang/Desktop/ForJiZu/P6/sign_test_test.v
// Project Name:  P6
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: sign_test
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module sign_test_test;

	// Outputs
	reg [31:0] A;
	reg [31:0] B;
	
	// Instantiate the Unit Under Test (UUT)
	sign_test uut (
		.A(A),
		.B(B)
	);

	initial begin
		// Initialize Inputs

		// Wait 100 ns for global reset to finish
		#100;
		A = 32'hffffffff;
		B = 32'hffffffff;
        
		// Add stimulus here

	end
      
endmodule

