`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:14:17 12/12/2017 
// Design Name: 
// Module Name:    mod_dm 
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
module mod_dm(
	input clk,
	input reset,

	input [31:0] address,
	input [31:0] dm_data_in,
	input [31:0] pc_now,
	
	input dm_write,
	
	input [3:0] BE,
	
	output reg [31:0] dm_data_out
    );
	
	reg [31:0] ram [4095:0] ;
	integer i;
	
	wire [31:0] address_temp;
	
	
	
	initial begin
		for(i = 0; i < 4096; i = i + 1) begin
			ram[i] = 0;
		end
	end
	
	always @(posedge clk)begin
		if(reset == 1) begin
			for(i = 0 ; i < 4096; i = i + 1) begin
				ram[i] = 0;
			end
		end
		
		else begin
			// input 
			if(dm_write == 1) begin
				
				if(BE == 4'b1111) begin
					ram[address[13:2]] = dm_data_in;
					$display("%d@%h: *%h <= %h", $time, pc_now, {address[31:2] , {2{1'b0}}} , ram[address[13:2]]);
				end
				
				else if(BE == 4'b0011) begin
					ram[address[13:2]][15:0] = dm_data_in[15:0];
					$display("%d@%h: *%h <= %h", $time, pc_now, {address[31:2] , {2{1'b0}}} , ram[address[13:2]]);
				end
				
				else if(BE == 4'b1100) begin
					ram[address[13:2]][31:16] = dm_data_in[15:0];
					$display("%d@%h: *%h <= %h", $time, pc_now, {address[31:2] , {2{1'b0}}} , ram[address[13:2]]);
				end
				
				else if(BE == 4'b0001) begin
					ram[address[13:2]][7:0] = dm_data_in[7:0];
					$display("%d@%h: *%h <= %h", $time, pc_now, {address[31:2] , {2{1'b0}}} , ram[address[13:2]]);
				end
				
				else if(BE == 4'b0010) begin
					ram[address[13:2]][15:8] = dm_data_in[7:0];
					$display("%d@%h: *%h <= %h", $time, pc_now, {address[31:2] , {2{1'b0}}} , ram[address[13:2]]);
				end
				
				else if(BE == 4'b0100) begin
					ram[address[13:2]][23:16] = dm_data_in[7:0];
					$display("%d@%h: *%h <= %h", $time, pc_now, {address[31:2] , {2{1'b0}}} , ram[address[13:2]]);
				end
				
				else if(BE == 4'b1000) begin
					ram[address[13:2]][31:24] = dm_data_in[7:0];
					$display("%d@%h: *%h <= %h", $time, pc_now, {address[31:2] , {2{1'b0}}} , ram[address[13:2]]);
				end
				
				//$display("*%h <= %h", address , dm_data_in);
				
			end
		end
	end
	
	//always @(ram , address) begin
	always @* begin
		dm_data_out = ram[address[13:2]];
	end


endmodule
