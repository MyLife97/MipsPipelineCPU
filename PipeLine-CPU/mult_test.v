`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:53:50 12/28/2017
// Design Name:   mod_mult
// Module Name:   C:/Users/yang/Desktop/ForJiZu/P6/mult_test.v
// Project Name:  P6
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: mod_mult
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module mult_test;

	// Inputs
	reg [31:0] C;
	reg [31:0] D;
	reg [2:0] mult_ctr;
	reg start;
	reg clk;

	// Outputs
	wire [31:0] HI;
	wire [31:0] LO;
	wire busy;

	// Instantiate the Unit Under Test (UUT)
	mod_mult uut (
		.C(C), 
		.D(D), 
		.mult_ctr(mult_ctr), 
		.start(start), 
		.clk(clk), 
		.HI(HI), 
		.LO(LO), 
		.busy(busy)
	);

	initial begin
		// Initialize Inputs
		C = 0;
		D = 0;
		mult_ctr = 0;
		start = 0;
		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;
		
		C = 32'hffffffff;
		D = 32'hffff;
		mult_ctr = 3;
		
		#50;
		start = 1;
		
		#20;
		start = 0;
		
		
        
		// Add stimulus here

	end
	
	always #10 begin
		clk = ~clk;
	end
      
endmodule

