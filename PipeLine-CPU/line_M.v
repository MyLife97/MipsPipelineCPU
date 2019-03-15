`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:36:04 12/13/2017 
// Design Name: 
// Module Name:    line_M 
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
module line_M(
	input clk,
	input reset,
	
	input [31:0] ins_in,
	input [31:0] pc_in,
	input [31:0] alu_result_in,
	input [31:0] rt_data_in,
	
	input [31:0] grf_data_in,
	input rt_data_m_to_dm_type,
	
	output [31:0] dm_data_out,
	output [31:0] ins_w,
	output [31:0] pc_w,
	output [31:0] alu_result_m,
	output [31:0] pc_m_plus8
    );
	//m
	wire [31:0] ins_m;
	wire [31:0] pc_m;
	wire [31:0] rt_data_m;
	
	wire [31:0] rt_data_to_dm;
	//BE
	wire [1:0] addr; // BE yong
	assign addr = alu_result_m[1:0];
	wire [3:0] BE;
	wire [1:0] store_type;
	
	//
	wire dm_write;
	
	assign ins_w = ins_m;
	assign pc_w = pc_m;
	assign pc_m_plus8 = pc_m + 8;
	

reg_MEM reg_mem(
	.clk(clk),
	.reset(reset),

	.ins_in(ins_in),
	.pc_in(pc_in),
	.alu_result_in(alu_result_in),
	.rt_data_in(rt_data_in),
	
	.ins_m(ins_m),
	.pc_m(pc_m),
	.alu_result(alu_result_m),
	.rt_data(rt_data_m)
);
	
mod_dm dm(
	.clk(clk),
	.reset(reset),
	
	.dm_write(dm_write),
	.BE(BE),
	
	.address(alu_result_m),
	.dm_data_in(rt_data_to_dm),
	.pc_now(pc_m),
	
	.dm_data_out(dm_data_out)
);

mod_controller controller(
	.ins(ins_m),
	.dm_write(dm_write),
	.store_type(store_type)
);

mod_mux_2_32bit mux_rt_data_m_to_dm(
	.in_1(rt_data_m),
	.in_2(grf_data_in),
	.slc(rt_data_m_to_dm_type),
	.out(rt_data_to_dm)
);

mod_be be(
	.addr(addr),
	.store_type(store_type), // ??????
	.BE(BE)
);

endmodule
