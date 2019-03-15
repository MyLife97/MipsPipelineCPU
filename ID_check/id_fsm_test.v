`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:55:12 10/24/2017
// Design Name:   id_fsm
// Module Name:   C:/Users/yang/Desktop/ForJiZu/ID_check/id_fsm_test.v
// Project Name:  ID_check
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: id_fsm
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module id_fsm_test;

	// Inputs
	reg [7:0] char;
	reg clk;

	// Outputs
	wire out;
	integer i;
	// Instantiate the Unit Under Test (UUT)
	id_fsm uut (
		.char(char), 
		.clk(clk), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		char = 0;
		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
	end
	
	always begin 
		#20 clk = ~clk;
	end
	

	
//	always begin
//		for(i = 0; i < 26; i = i + 1) begin
//			#50 char = "a" + i;
//			#50 char = "0" + i;
//		end
//	end
    
	always begin
		#20 char = "a";
		#20 char = "b";
		#20 char = "c";
		#20 char = "d";
		#20 char = "1";
		#20 char = "2";
		#20 char = "3";
		#20 char = "4";
		#20 char = "/";
	end
		
	
endmodule

