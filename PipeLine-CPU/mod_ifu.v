`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:13:09 12/12/2017 
// Design Name: 
// Module Name:    mod_ifu 
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
module mod_ifu(
	input clk,
	input reset,

	input [31:0] pc_next,
	input npc_on,
	input stop,
	
	
	output reg [31:0] ins,
	output reg [31:0] pc_now
    );
	
	wire [31:0] pc_for_im;
	assign pc_for_im = pc_now - 'h3000;
	
	reg [31:0] rom [0:4095];//???À≥–ÚÕ¸¡À
	
	initial begin
		pc_now = 32'h3000;
		$readmemh("code.txt",rom);
	end
	
	always @(posedge clk) begin
		if(reset == 0) begin
			//npc
			if(stop == 0) begin
				if(npc_on == 1) begin
					pc_now = pc_next;
				end
				//pc+4
				else begin
					pc_now = pc_now + 4;
				end
			end
		end
		
		else begin
			pc_now = 'h3000;
		end
	end
	
	always @* begin
		ins = rom[pc_for_im[13:2]];
	end
	
	
	



endmodule
