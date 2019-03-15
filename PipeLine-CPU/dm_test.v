`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:31:09 12/28/2017
// Design Name:   mod_dm
// Module Name:   C:/Users/yang/Desktop/ForJiZu/P6/dm_test.v
// Project Name:  P6
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: mod_dm
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module dm_test;

	// Inputs
	reg clk;
	reg reset;
	reg [31:0] address;
	reg [31:0] dm_data_in;
	reg [31:0] pc_now;
	reg dm_write;
	reg [3:0] BE;

	// Outputs
	wire [31:0] dm_data_out;

	// Instantiate the Unit Under Test (UUT)
	mod_dm uut (
		.clk(clk), 
		.reset(reset), 
		.address(address), 
		.dm_data_in(dm_data_in), 
		.pc_now(pc_now), 
		.dm_write(dm_write), 
		.BE(BE), 
		.dm_data_out(dm_data_out)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		address = 0;
		dm_data_in = 0;
		pc_now = 0;
		dm_write = 0;
		BE = 0;

		// Wait 100 ns for global reset to finish
		#100;
		
		dm_write = 1;
		dm_data_in = 32'h12345678;
		BE = 4'b0011;
		#50;
		BE = 4'b1000;
		#100;
		dm_write = 0;
        
		// Add stimulus here

	end
	
	always #10 begin
		clk = ~clk;
	end
      
endmodule

