`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:36:12 12/13/2017 
// Design Name: 
// Module Name:    line_W 
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
module line_W(
	input clk,
	input reset,

	input [31:0] ins_in,
	input [31:0] pc_in,
	input [31:0] alu_result_in,
	input [31:0] dm_data_in,
	
	output [31:0] grf_data_in, // !!!
	output grf_write,
	output [1:0] grf_dst,
	
	output [31:0] pc_w,
	output [31:0] ins_w
    );
	//w
	//wire [31:0] ins_w;
	//wire [31:0] pc_w;
	wire [31:0] alu_result;
	wire [31:0] dm_data;
	wire [1:0] grf_data_in_type;
	
	wire [31:0] pc_plus8;
	
	assign pc_plus8 = pc_w + 8;
	
	//dmtender
	wire [1:0] addr;
	wire [31:0] dm_out;
	wire [2:0] dmtender_type;
	
	assign addr = alu_result[1:0];
	
	
reg_WB reg_wb(
	.clk(clk),
	.reset(reset),
	
	.ins_in(ins_in),
	.pc_in(pc_in),
	.alu_result_in(alu_result_in),
	.dm_data_in(dm_data_in),
	
	.ins_w(ins_w),
	.pc_w(pc_w),
	.alu_result(alu_result),
	.dm_data(dm_data)
	
);

mod_controller controller(
	.ins(ins_w),
	.grf_write(grf_write),
	.grf_data_in_type(grf_data_in_type),
	.grf_dst(grf_dst),
	.dmtender_type(dmtender_type)
);

mod_mux_4_32bit grf_input(
	.in_1(alu_result),
	.in_2(dm_out),
	.in_3(pc_plus8),
	.slc(grf_data_in_type),
	.out(grf_data_in)
);

mod_dmtender dmtender(
	.addr(addr),
	.dm_data(dm_data),
	.dmtender_type(dmtender_type), // ??? ???
	.dm_out(dm_out)
);


endmodule
