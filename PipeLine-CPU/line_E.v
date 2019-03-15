`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:35:56 12/13/2017 
// Design Name: 
// Module Name:    line_E 
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
module line_E(
	input clk,
	input reset,

	input [31:0] rs_data_in,
	input [31:0] rt_data_in,
	input [31:0] extend_imm_in,
	
	input [31:0] alu_result_m,
	input [31:0] grf_data_in,
	
	input [31:0] pc_in,
	input [31:0] ins_in,
	
	input stop,
	
	input [1:0] rs_data_e_to_alu_type,
	input [1:0] rt_data_e_to_alu_type,
	
	output [31:0] alu_result_out,
	output [31:0] rt_data_out,//转发后的
	
	output [31:0] pc_e,
	output [31:0] ins_e,
	
	output mult_busy,
	
	output [31:0] pc_e_plus8

    );
	wire [3:0] alu_ctr;
	wire alu_src;
	wire [31:0] A;
	wire [31:0] B;
	wire [31:0] alu_result;
	
	//reg_e
	wire [31:0] rs_data_e;
	wire [31:0] rt_data_e;
	wire [31:0] extend_imm;
	
	//A
	//assign A = rs_data_to_alu;
	wire [31:0] shift_amount;
	assign shift_amount = {{27{1'b0}} , ins_e[10:6]};
	wire A_sa;
	//mult
	wire [2:0] mult_ctr;
	wire [1:0] mult_write;
	wire [1:0] mult_move;
	wire mult_start;
	wire [31:0] HI;
	wire [31:0] LO;

	//mux
	wire [31:0] rs_data_to_alu;
	wire [31:0] rt_data_to_alu;
	
	//output
	//assign alu_result_out = alu_result;
	assign rt_data_out = rt_data_to_alu;
	assign pc_e_plus8 = pc_e + 8;
	
reg_E reg_e(
	.clk(clk),
	.reset(reset),
	.stop(stop),
	
	.rs_data_in(rs_data_in),
	.rt_data_in(rt_data_in),
	.extend_imm_in(extend_imm_in),
	
	.ins_in(ins_in),
	.pc_in(pc_in),
	
	.rs_data(rs_data_e),
	.rt_data(rt_data_e),
	.extend_imm(extend_imm),
	
	.ins_e(ins_e),
	.pc_e(pc_e)
);

mod_alu alu(
	.A(A),
	.B(B),
	.alu_ctr(alu_ctr),
	
	.result(alu_result)
);

mod_controller controller(
	.ins(ins_e),
	.mult_start(mult_start),
	.mult_write(mult_write),
	.mult_ctr(mult_ctr),
	.mult_move(mult_move),
	
	.A_sa(A_sa),
	
	.alu_ctr(alu_ctr),
	.alu_src(alu_src)
);
//alusrc 0 rt_data 1 extend_imm
mod_mux_2_32bit alu_input(
	.in_1(rt_data_to_alu),
	.in_2(extend_imm),
	.slc(alu_src),
	.out(B)
);

mod_mux_4_32bit mux_rs_data_e_to_alu(
	.in_1(rs_data_e),
	.in_2(alu_result_m),
	.in_3(grf_data_in),
	.slc(rs_data_e_to_alu_type),
	.out(rs_data_to_alu)
);

mod_mux_4_32bit mux_rt_data_e_to_alu(
	.in_1(rt_data_e),
	.in_2(alu_result_m),
	.in_3(grf_data_in),
	.slc(rt_data_e_to_alu_type),
	.out(rt_data_to_alu)
);

mod_mux_4_32bit mux_aluormult(
	.in_1(alu_result),
	.in_2(HI),
	.in_3(LO),
	.slc(mult_move),
	.out(alu_result_out)
);

mod_mux_2_32bit mux_AorSA(
	.in_1(rs_data_to_alu),
	.in_2(shift_amount),
	.slc(A_sa),
	.out(A)
);

mod_mult mult(
	.C(A),
	.D(B),
	.mult_ctr(mult_ctr),
	.mult_write(mult_write),
	.start(mult_start),
	.clk(clk),
	.HI(HI),//////
	.LO(LO),//////
	.mult_busy(mult_busy)
);
endmodule
