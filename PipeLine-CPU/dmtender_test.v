`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:48:21 12/28/2017
// Design Name:   mod_dmtender
// Module Name:   C:/Users/yang/Desktop/ForJiZu/P6/dmtender_test.v
// Project Name:  P6
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: mod_dmtender
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module dmtender_test;

	// Inputs
	reg [1:0] addr;
	reg [31:0] dm_data;
	reg [2:0] dmtender_type;

	// Outputs
	wire [31:0] dm_out;

	// Instantiate the Unit Under Test (UUT)
	mod_dmtender uut (
		.addr(addr), 
		.dm_data(dm_data), 
		.dmtender_type(dmtender_type), 
		.dm_out(dm_out)
	);

	initial begin
		// Initialize Inputs
		addr = 0;
		dm_data = 0;
		dmtender_type = 0;

		// Wait 100 ns for global reset to finish
		#100;
		
		dm_data = 32'hff345678;
		addr = 3;
		dmtender_type = 4;
        
		// Add stimulus here

	end
      
endmodule

