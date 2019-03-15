`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:35:36 12/13/2017 
// Design Name: 
// Module Name:    line_F 
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
module line_F(
	input [31:0] pc_next,
	input npc_on,
	
	input clk,
	input reset,
	input stop,
	
	output [31:0] ins,
	output [31:0] pc_now
    );

mod_ifu ifu(
	.pc_next(pc_next),
	.npc_on(npc_on),
	
	.clk(clk),
	.reset(reset),
	.stop(stop),
	
	.ins(ins),
	.pc_now(pc_now)
);

endmodule
