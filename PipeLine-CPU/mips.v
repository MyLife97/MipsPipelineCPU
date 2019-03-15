`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:10:17 12/12/2017 
// Design Name: 
// Module Name:    mips 
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
module mips(
	input clk,
	input reset
    );
	
	wire [31:0] pc_next;
	wire npc_on;
	wire [31:0] ins_f;
	wire [31:0] pc_f;
	
	wire [31:0] ins_d;
	wire [31:0] pc_d;
	
	wire [31:0] ins_e;
	wire [31:0] pc_e;
	
	wire [31:0] ins_m;
	wire [31:0] pc_m;
	
	wire [31:0] ins_w;
	wire [31:0] pc_w;
	
	//d
	wire [31:0] grf_data_in;
	wire grf_write;
	wire [2:0] rs_data_d_to_reg_type;
	wire [2:0] rt_data_d_to_reg_type;
	wire [1:0] rs_data_e_to_alu_type;
	wire [1:0] rt_data_e_to_alu_type;
	wire rt_data_m_to_dm_type;
	
	wire [31:0] rs_data_to_reg;
	wire [31:0] rt_data_to_reg;
	wire [31:0] extend_imm_out;
	
	wire[31:0] alu_result_m;
	//e
	wire [31:0] alu_result_out_e;
	wire [31:0] rt_data_out_e;
	//d
	wire [31:0] dm_data_out;
	
	wire[31:0] pc_e_plus8;
	wire[31:0] pc_m_plus8;
	//w
	wire [1:0] grf_dst;
	
	//hazard
	wire stop;
	wire mult_busy;
	
	


line_F line_f(
	.clk(clk),
	.reset(reset),
	.pc_next(pc_next),
	.npc_on(npc_on),
	.ins(ins_f),
	.pc_now(pc_f),
	.stop(stop)
);

line_D line_d(
	.clk(clk),
	.reset(reset),

	.ins_in(ins_f),
	.pc_in(pc_f),
	
	.stop(stop),
	
	.grf_data_in(grf_data_in),
	.grf_write(grf_write),
	.grf_dst(grf_dst),
	.pc_w(pc_w),
	.ins_w(ins_w),
	
	.rs_data_d_to_reg_type(rs_data_d_to_reg_type),
	.rt_data_d_to_reg_type(rt_data_d_to_reg_type),
	
	.alu_result_m(alu_result_m),
	
	.rs_data_to_reg(rs_data_to_reg),
	.rt_data_to_reg(rt_data_to_reg),
	
	.extend_imm_out(extend_imm_out),
	
	.pc_next(pc_next),
	.npc_on(npc_on),
	
	.pc_e_plus8(pc_e_plus8),
	.pc_m_plus8(pc_m_plus8),
	
	.pc_e(pc_d),
	.ins_e(ins_d)
);
line_E line_e(
	.clk(clk),
	.reset(reset),
	
	.stop(stop),
	.mult_busy(mult_busy),

	.rs_data_in(rs_data_to_reg),
	.rt_data_in(rt_data_to_reg),
	.extend_imm_in(extend_imm_out),
	
	.rs_data_e_to_alu_type(rs_data_e_to_alu_type),
	.rt_data_e_to_alu_type(rt_data_e_to_alu_type),
	
	.pc_in(pc_d),
	.ins_in(ins_d),
	
	.alu_result_out(alu_result_out_e),
	.rt_data_out(rt_data_out_e),
	.alu_result_m(alu_result_m),
	.grf_data_in(grf_data_in),
	
	.pc_e(pc_e),
	.ins_e(ins_e),
	.pc_e_plus8(pc_e_plus8)
);
line_M line_m(
	.clk(clk),
	.reset(reset),
	
	.ins_in(ins_e),
	.pc_in(pc_e),
	
	.alu_result_in(alu_result_out_e),
	.rt_data_in(rt_data_out_e),
	
	
	.rt_data_m_to_dm_type(rt_data_m_to_dm_type),
	
	.dm_data_out(dm_data_out),
	.alu_result_m(alu_result_m),
	.ins_w(ins_m),
	.pc_w(pc_m),
	.grf_data_in(grf_data_in),
	
	.pc_m_plus8(pc_m_plus8)
);
line_W line_w(
	.clk(clk),
	.reset(reset),

	.ins_in(ins_m),
	.pc_in(pc_m),
	.alu_result_in(alu_result_m),
	.dm_data_in(dm_data_out),
	
	.grf_data_in(grf_data_in),
	.grf_write(grf_write),
	.grf_dst(grf_dst),
	.pc_w(pc_w),
	.ins_w(ins_w)
);

mod_hazard hazard(
	.ins_d(ins_d),
	.ins_e(ins_e),
	.ins_m(ins_m),
	.ins_w(ins_w),
	.mult_busy(mult_busy),
	
	.stop(stop),
	.rs_data_d_to_reg_type(rs_data_d_to_reg_type),
	.rt_data_d_to_reg_type(rt_data_d_to_reg_type),
	.rs_data_e_to_alu_type(rs_data_e_to_alu_type),
	.rt_data_e_to_alu_type(rt_data_e_to_alu_type),
	.rt_data_m_to_dm_type(rt_data_m_to_dm_type)
);

endmodule
