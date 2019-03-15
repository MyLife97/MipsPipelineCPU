`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:58:37 12/28/2017 
// Design Name: 
// Module Name:    mod_dmtender 
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
module mod_dmtender(
    input [1:0] addr,
    input [31:0] dm_data,
    input [2:0] dmtender_type,
    output reg [31:0] dm_out
    );
	//0 nothing    1 half & zero    2 half & sign    3 byte & zero    4 byte & sign
	always @* begin
		case(dmtender_type)
			3'b000: begin
				dm_out = dm_data;
			end
			
			3'b001: begin
				if(addr == 0) begin
					dm_out = {{16'b0} , dm_data[15:0]};
				end
				
				else if(addr == 2) begin
					dm_out = {{16'b0} , dm_data[31:16]};
				end
			end
				
			3'b010: begin
				if(addr == 0) begin
					if(dm_data[15] == 0)
						dm_out = {{16'b0} , dm_data[15:0]};
					else
						dm_out = {{16{1'b1}} , dm_data[15:0]};
				end
				
				else if(addr == 2) begin
					if(dm_data[31] == 0)
						dm_out = {{16'b0} , dm_data[31:16]};
					else
						dm_out = {{16{1'b1}} , dm_data[31:16]};
				end
			end
				
			3'b011: begin
				if(addr == 0) begin
					dm_out = {24'b0 , dm_data[7:0]};
				end
				
				else if(addr == 1) begin
					dm_out = {24'b0 , dm_data[15:8]};
				end
				
				else if(addr == 2) begin
					dm_out = {24'b0 , dm_data[23:16]};
				end
				
				else begin
					dm_out = {24'b0 , dm_data[31:24]};
				end
			end
			
			3'b100: begin
				if(addr == 0) begin
					if(dm_data[7] == 0)
						dm_out = {24'b0 , dm_data[7:0]};
					else
						dm_out = {{24{1'b1}} , dm_data[7:0]};
				end
				
				else if(addr == 1) begin
					if(dm_data[15] == 0)
						dm_out = {24'b0 , dm_data[15:8]};
					else
						dm_out = {{24{1'b1}} , dm_data[15:8]};
				end
				
				else if(addr == 2) begin
					if(dm_data[23] == 0)
						dm_out = {24'b0 , dm_data[23:16]};
					else
						dm_out = {{24{1'b1}} , dm_data[23:16]};
				end
				
				else begin
					if(dm_data[31] == 0)
						dm_out = {24'b0 , dm_data[31:24]};
					else
						dm_out = {{24{1'b1}} , dm_data[31:24]};
				end
			end
		endcase
	end


endmodule
