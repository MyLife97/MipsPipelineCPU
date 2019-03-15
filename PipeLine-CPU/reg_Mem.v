`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:39:17 12/13/2017 
// Design Name: 
// Module Name:    reg_MEM 
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
module reg_MEM(
	input clk,
	input reset,

	input [31:0] ins_in,
	input [31:0] pc_in,
	input [31:0] alu_result_in,
	input [31:0] rt_data_in,
	
	output reg [31:0] ins_m,
	output reg [31:0] pc_m,
	output reg [31:0] alu_result,
	output reg [31:0] rt_data
    );
	
	always @(posedge clk) begin
		if(reset == 0) begin
			ins_m = ins_in;
			pc_m = pc_in;
			alu_result = alu_result_in;
			rt_data = rt_data_in;
		end
		
		else begin
			ins_m = 0;
			pc_m = 0;
			alu_result = 0;
			rt_data = 0;
		end
	end


endmodule
