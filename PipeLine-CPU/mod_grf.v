`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:12:56 12/12/2017 
// Design Name: 
// Module Name:    mod_grf 
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
module mod_grf(
	input clk,
	input reset,
	
	input [4:0] rs,
	input [4:0] rt,
	
	input [4:0] grf_reg_in,
	input [31:0] grf_data_in,
	input [31:0] pc_now,
	
	input grf_write,
	
	output reg [31:0] rs_data,
	output reg [31:0] rt_data
	
	
    );
	integer i;
	reg [31:0] grf [31:0];

	initial begin
		for(i = 0; i < 31; i = i + 1) begin
			grf[i] = 0;
		end
	end
	
	always @(posedge clk) begin
		if(reset == 1) begin
			for(i = 0; i < 32; i = i + 1) begin
				grf[i] = 0;
			end
		end
		
		else begin
			//input grf_reg_in
			if(grf_write == 1) begin
				if(grf_reg_in != 0) begin
					grf[grf_reg_in] = grf_data_in;
					//$display("%d@%h: $%d <= %h", $time, pc_now, grf_reg_in ,grf_data_in);
				end
				if(!(grf_reg_in == 0 && grf_data_in == 0))
					$display("%d@%h: $%d <= %h", $time, pc_now, grf_reg_in ,grf_data_in);
				//$display("$%d <= %h", grf_reg_in ,grf_data_in);
			end
		end
	end

	//always @(rs , grf) begin
	always @* begin
		if(grf_write && grf_reg_in == rs && grf_reg_in != 0)
			rs_data = grf_data_in;
		else
			rs_data = grf[rs];
	end
	
	//always @(rt , grf) begin
	always @* begin
		if(grf_write && grf_reg_in == rt && grf_reg_in != 0)
			rt_data = grf_data_in;
		else
			rt_data = grf[rt];
	end
endmodule
