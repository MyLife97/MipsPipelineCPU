`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:25:01 12/13/2017 
// Design Name: 
// Module Name:    reg_E 
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
module reg_E(
	input clk,
	input reset,
	input stop,
	
	input [31:0] rs_data_in,
	input [31:0] rt_data_in,
	input [31:0] extend_imm_in,
	
	input [31:0] ins_in,
	input [31:0] pc_in,
	
	output reg [31:0] rs_data,
	output reg[31:0] rt_data,
	output reg[31:0] extend_imm,
	
	output reg[31:0] ins_e,
	output reg[31:0] pc_e
    );

	always @(posedge clk) begin
		if(reset == 0 && stop == 0) begin
			rs_data = rs_data_in;
			rt_data = rt_data_in;
			extend_imm = extend_imm_in;
			
			ins_e = ins_in;
			pc_e = pc_in;
		end
		
		else begin
			rs_data = 0;
			rt_data = 0;
			extend_imm = 0;
			
			ins_e = 0;
			pc_e = 0;
		end
	end

endmodule
