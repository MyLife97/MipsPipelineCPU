`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:25:29 12/13/2017 
// Design Name: 
// Module Name:    reg_WB 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module reg_WB(
	input clk,
	input reset,

	input [31:0] ins_in,
	input [31:0] pc_in,
	input [31:0] alu_result_in,
	input [31:0] dm_data_in,
	
	output reg [31:0] ins_w,
	output reg [31:0] pc_w,
	output reg [31:0] alu_result,
	output reg [31:0] dm_data
    );
	always @(posedge clk) begin
		if(reset == 0) begin
			ins_w = ins_in;
			pc_w = pc_in;
			alu_result = alu_result_in;
			dm_data = dm_data_in;
		end
		
		else begin
			ins_w = 0;
			pc_w = 0;
			alu_result = 0;
			dm_data = 0;
		end
	end
	


endmodule
