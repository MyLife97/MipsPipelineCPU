`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:35:45 12/13/2017 
// Design Name: 
// Module Name:    line_D 
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
module line_D(
	input clk,
	input reset,

	input [31:0] ins_in,
	input [31:0] pc_in,
	input stop,
	
	input [31:0] grf_data_in, // !!!
	input grf_write,
	input [1:0] grf_dst,
	input [31:0] pc_w,
	input [31:0] ins_w,
	
	input [2:0] rs_data_d_to_reg_type,
	input [2:0] rt_data_d_to_reg_type,
	
	input [31:0] pc_e_plus8,
	input [31:0] pc_m_plus8,
	input [31:0] alu_result_m,
	
	output [31:0] rs_data_to_reg,
	output [31:0] rt_data_to_reg,
	
	output [31:0] extend_imm_out,
	
	output [31:0] pc_next,
	output npc_on,
	
	
	output [31:0] pc_e,
	output [31:0] ins_e
    );
	//reg_d
	wire [31:0] ins_d;
	wire [31:0] pc_d;
	
	//grf
	wire [4:0] rs;
	wire [4:0] rt;
	wire [4:0] rd_write;
	wire [4:0] rt_write;
	
	reg AequalsB;
	reg AnotequalsB;
	reg Alessthan0;
	reg Alessequals0;
	reg Agreaterthan0;
	reg Agreaterequals0;
	
	wire [31:0] rs_data;
	wire [31:0] rt_data;
	
	wire [31:0] rs_data_d;
	wire [31:0] rt_data_d;
	
	wire [4:0] grf_reg_in;
	
	//controller
	//wire [1:0] grf_dst;
	//wire grf_write;
	
	wire extender_type;
	
	wire npc_branch;
	wire npc_jump;
	wire npc_jr;
	
	wire npc_bne;
	wire npc_blez;
	wire npc_bltz;
	wire npc_bgtz;
	wire npc_bgez;
	
	
	//extender
	wire [15:0] imm;
	wire [31:0] extend_imm;
	
	//npc
	
	//rs rt
	assign rs = ins_d[25:21];
	assign rt = ins_d[20:16];
	
	assign imm = ins_d[15:0];
	
	assign rt_write = ins_w[20:16];
	assign rd_write = ins_w[15:11];
	
	//output
	assign pc_e = pc_d;
	assign ins_e = ins_d;
	
	assign rs_data_d = rs_data;
	assign rt_data_d = rt_data;

	assign extend_imm_out = extend_imm;
	
	
	
	//AequalsB
	always @* begin
		Alessthan0 = 0;
		Alessequals0 = 0;
		Agreaterthan0 = 0;
		Agreaterequals0 = 0;
		
		if(rs_data_to_reg == rt_data_to_reg) begin
			AequalsB = 1;
			AnotequalsB = 0;
		end
		
		else begin
			AequalsB = 0;
			AnotequalsB = 1;
		end
		
		if($signed(rs_data_to_reg) < $signed(0))
			Alessthan0 = 1;
		if($signed(rs_data_to_reg) <= $signed(0))
			Alessequals0 = 1;
		if($signed(rs_data_to_reg) > $signed(0))
			Agreaterthan0 = 1;
		if($signed(rs_data_to_reg) >= $signed(0))
			Agreaterequals0 = 1;
			
	end
	
	
reg_D reg_d(
	.clk(clk),
	.reset(reset),
	.ins_in(ins_in),
	.pc_in(pc_in),
	.stop(stop),
	
	.ins_d(ins_d),
	.pc_d(pc_d)
);



mod_grf grf(
	.rs(rs),
	.rt(rt),
	.clk(clk),
	.reset(reset),
	
	.grf_write(grf_write),
	.grf_reg_in(grf_reg_in),
	.grf_data_in(grf_data_in),
	.pc_now(pc_w),
	
	.rs_data(rs_data),
	.rt_data(rt_data)
);


mod_extender extender(
	.extender_type(extender_type),
	.imm(imm),
	
	.extend_imm(extend_imm)
);


mod_npc npc(
	.ins(ins_d),
	.pc_now(pc_d),
	
	.extend_imm(extend_imm),
	.jr_offset(rs_data_to_reg),
	
	.npc_branch(npc_branch),
	.npc_jump(npc_jump),
	.AequalsB(AequalsB),
	.npc_jr(npc_jr),
	
	.AnotequalsB(AnotequalsB),
	.Alessthan0(Alessthan0),
	.Alessequals0(Alessequals0),
	.Agreaterthan0(Agreaterthan0),
	.Agreaterequals0(Agreaterequals0),
	
	.npc_bne(npc_bne),
	.npc_blez(npc_blez),
	.npc_bltz(npc_bltz),
	.npc_bgtz(npc_bgtz),
	.npc_bgez(npc_bgez),
	
	
	.pc_next(pc_next),
	.npc_on(npc_on)
);


mod_controller controller(
	.ins(ins_d),
	
	//.grf_dst(grf_dst),
	//.grf_write(grf_write),
	
	.extender_type(extender_type),
	//.extender_shift16bit(extender_shift16bit),
	.npc_branch(npc_branch),
	.npc_jump(npc_jump),
	
	.npc_bne(npc_bne),
	.npc_blez(npc_blez),
	.npc_bltz(npc_bltz),
	.npc_bgtz(npc_bgtz),
	.npc_bgez(npc_bgez),
	

	
	.npc_jr(npc_jr)
	
);

//0rt 1rd 2ra
mod_mux_4_5bit mux_reg_in(
	.in_1(rt_write),
	.in_2(rd_write),
	.in_3(5'd31),
	.slc(grf_dst),
	.out(grf_reg_in)
);
//rs
mod_mux_8_32bit mux_rs_data_d_to_reg(
	.in_1(rs_data_d),
	.in_2(pc_e_plus8),
	.in_3(pc_m_plus8),
	.in_4(alu_result_m),
	//.in_5(grf_data_in),
	.slc(rs_data_d_to_reg_type),
	.out(rs_data_to_reg)
);
//rt
mod_mux_8_32bit mux_rt_data_d_to_reg(
	.in_1(rt_data_d),
	.in_2(pc_e_plus8),
	.in_3(pc_m_plus8),
	.in_4(alu_result_m),
	//.in_5(grf_data_in),
	.slc(rt_data_d_to_reg_type),
	.out(rt_data_to_reg)
);

endmodule
