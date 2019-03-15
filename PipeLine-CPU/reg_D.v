`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:24:55 12/13/2017 
// Design Name: 
// Module Name:    reg_D 
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
module reg_D(
	input [31:0] ins_in,
	input [31:0] pc_in,
	
	input clk,
	input reset,
	input stop,
	
	output reg [31:0] ins_d,
	output reg [31:0] pc_d
    );
	
	always @(posedge clk) begin
		/*
		if(stop == 0) begin
			if(reset == 0) begin
				ins_d = ins_in;
				pc_d = pc_in;
			end
			
			else begin
				ins_d = 0;
				pc_d = 0;
			end
		end
		*/
		
		if(reset == 0) begin
			if(stop == 0) begin
				ins_d = ins_in;
				pc_d = pc_in;
			end
		end
		
		else begin
			ins_d = 0;
			pc_d = 0;
		end
		
	end
	
	


endmodule
