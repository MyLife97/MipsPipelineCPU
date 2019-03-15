`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:32:38 11/07/2017
// Design Name:   gray
// Module Name:   C:/Users/yang/Desktop/ForJiZu/Gray_Code/gray_test.v
// Project Name:  Gray_Code
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: gray
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module gray_test;

	// Inputs
	reg Clk;
	reg Reset;
	reg En;

	// Outputs
	wire [2:0] Output;
	wire Overflow;

	// Instantiate the Unit Under Test (UUT)
	gray uut (
		.Clk(Clk), 
		.Reset(Reset), 
		.En(En), 
		.Output(Output), 
		.Overflow(Overflow)
	);

	initial begin
		// Initialize Inputs
		Clk = 0;
		Reset = 0;
		En = 0;

		// Wait 100 ns for global reset to finish
        
		// Add stimulus here

	end
	
	always begin
		#20 Clk = ~Clk;
	end
	
	always begin
		#200 En = ~En;
	end
	
	always begin
		#800 Reset = ~Reset;
	end
	
	
	
	
      
endmodule

