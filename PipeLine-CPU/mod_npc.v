`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:13:51 12/12/2017 
// Design Name: 
// Module Name:    mod_npc 
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
module mod_npc(
	input [31:0] ins,
	input [31:0] pc_now,
	input [31:0] extend_imm,
	input [31:0] jr_offset,
	
	input npc_branch,
	input npc_jump,
	input npc_jr,
	
	input AequalsB,
	input AnotequalsB,
	input Alessthan0,
	input Alessequals0,
	input Agreaterthan0,
	input Agreaterequals0,
	
	input npc_bne,
	input npc_blez,
	input npc_bltz,
	input npc_bgtz,
	input npc_bgez,
	
	output reg [31:0] pc_next,
	output reg npc_on
    );
	wire [31:0] jump_offset;
	wire [31:0] branch_offset;
	wire [31:0] pc_plus8;
	
	assign jump_offset = {pc_now[31:28] , ins[25:0] , {2{1'b0}}};
	assign pc_plus8 = pc_now + 8;
	assign branch_offset = pc_now + 4 + {extend_imm[29:0] , {2{1'b0}}};
	
	
	always @* begin
		//jr jalr
		if(npc_jr == 1) begin
			npc_on = 1;
			pc_next = jr_offset;
		end
		//j jal
		else if(npc_jump == 1) begin
			npc_on = 1;
			pc_next = jump_offset;
		end
		//B
		else if(npc_branch && AequalsB || npc_bne && AnotequalsB || npc_blez && Alessequals0 
		      || npc_bltz && Alessthan0 || npc_bgtz && Agreaterthan0 || npc_bgez && Agreaterequals0) begin
			npc_on = 1;
			pc_next = branch_offset;
		end
		//
		else begin
			npc_on = 0;
			pc_next = 0;
		end
	end


endmodule
