`timescale 1ns / 1ps

`define beq 6'b000100
`define jr 6'b001000
`define addu 6'b100001
`define subu 6'b100011
`define ori 6'b001101
`define lw 6'b100011
`define sw 6'b101011
`define jal 6'b000011
`define lui 6'b001111
`define j 6'b000010
`define r 6'b000000
`define addi 6'b001000

`define lb 6'b100000
`define lbu 6'b100100
`define lh 6'b100001
`define lhu 6'b100101
`define sh 6'b101001
`define sb 6'b101000
`define add 6'b100000
`define sub 6'b100010
`define andd 6'b100100
`define orr 6'b100101
`define xorr 6'b100110
`define norr 6'b100111

`define sllv 6'b000100
`define srlv 6'b000110 // ins_[6] = 0   rotrv = 1
`define srav 6'b000111
`define slt 6'b101010
`define sltu 6'b101011

`define sll 6'b000000
`define srl 6'b000010
`define sra 6'b000011

`define addiu 6'b001001
`define andi 6'b001100
`define ori 6'b001101
`define xori 6'b001110
`define slti 6'b001010
`define sltiu 6'b001011

`define mult 6'b011000
`define multu 6'b011001
`define div 6'b011010
`define divu 6'b011011

`define mfhi 6'b010000
`define mflo 6'b010010
`define mthi 6'b010001
`define mtlo 6'b010011

`define bne 6'b000101
`define blez 6'b000110
`define bgtz 6'b000111 
`define bltz 6'b000001 // ins_[16] == 0
`define bgez 6'b000001 // ins_[16] == 1

`define jalr 6'b001001
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:26:27 12/13/2017 
// Design Name: 
// Module Name:    mod_controller 
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
module mod_controller(
	input [31:0] ins,
	
	output reg [1:0] grf_dst,
	output reg grf_write,
	
	output reg extender_type,
	
	output reg npc_branch,
	output reg npc_jump,
	output reg npc_jr,
	
	//B
	output reg npc_bne,
	output reg npc_blez,
	output reg npc_bltz,
	output reg npc_bgtz,
	output reg npc_bgez,
	
	//mult
	output reg mult_start,
	output reg [2:0] mult_ctr,
	output reg [1:0] mult_write, // 0 nothing    1 hi      2 lo
	output reg [1:0] mult_move, // alu_result    1 hi      2 lo
	//alu
	output reg [3:0] alu_ctr,
	output reg alu_src,//0 rt , 1 extender 
	
	output reg dm_write,
	
	//
	output reg A_sa,
	
	output reg [1:0] store_type,
	output reg [2:0] dmtender_type,
	
	output reg [1:0] grf_data_in_type
    );
	
	wire [5:0] op;
	wire [5:0] func;
	
	//op
	reg r;
	reg ori;
	reg lui;
	reg lw;
	reg sw;
	reg beq;
	reg j;
	reg jal;
	reg addi;
	
	reg lb;
	reg lbu;
	reg lh;
	reg lhu;
	reg sh;
	reg sb;
	reg addiu;
	reg andi;
	reg xori;
	reg slti;
	reg sltiu;
	
	reg bne;
	reg blez;
	reg bgtz;
	reg bltz;
	reg bgez;

	//func
	reg r_addu;
	reg r_subu;
	reg r_jr;
	
	reg r_add;
	reg r_sub;
	reg r_and;
	reg r_or;
	reg r_xor;
	reg r_nor;
	reg r_sllv;
	reg r_srlv;
	reg r_srav;
	reg r_slt;
	reg r_sltu;
	reg r_sll;
	reg r_srl;
	reg r_sra;
	
	reg r_mult;
	reg r_multu;
	reg r_div;
	reg r_divu;
	reg r_mfhi;
	reg r_mflo;
	reg r_mthi;
	reg r_mtlo;
	
	reg r_jalr;
	
	
	assign op = ins[31:26];
	assign func = ins[5:0];
	
	//always @(op , func) begin
	always @* begin
		r = 0;
		ori = 0;
		lui = 0;
		lw = 0;
		sw = 0;
		beq = 0;
		j = 0;
		jal = 0;
		addi = 0;
		
		lb = 0;
		lbu = 0;
		lh = 0;
		lhu = 0;
		sh = 0;
		sb = 0;
		addiu = 0;
		andi = 0;
		ori = 0;
		xori = 0;
		slti = 0;
		sltiu = 0;
		
		bne = 0;
		blez = 0;
		bgtz = 0;
		bltz = 0;
		bgez = 0;
		
		
	
		case(op)
			`r: r = 1;
			`ori: ori = 1;
			`lui: lui = 1;
			`lw: lw = 1;
			`sw: sw = 1;
			`beq: beq = 1;
			`j: j = 1;
			`jal: jal = 1;
			`addi: addi = 1;
			
			`lb: lb = 1;
			`lbu: lbu = 1;
			`lh: lh = 1;
			`lhu: lhu = 1;
			`sh: sh = 1;
			`sb: sb = 1;
			`addiu: addiu = 1;
			`andi: andi = 1;
			`xori: xori = 1;
			`slti: slti = 1;
			`sltiu: sltiu = 1;
			
			`bne: bne = 1;
			`blez: blez = 1;
			`bgtz: bgtz = 1;
			`bltz: begin
				bltz = 1;
				bgez = 1;
			end
				
		endcase
		
		r_addu = 0;
		r_subu = 0;
		r_jr = 0;
		
		r_add = 0;
		r_sub = 0;
		r_and = 0;
		r_or = 0;
		r_xor = 0;
		r_nor = 0;
		r_sllv = 0;
		r_srlv = 0;
		r_srav = 0;
		r_slt = 0;
		r_sltu = 0;
		r_sll = 0;
		r_srl = 0;
		r_sra = 0;
		
		r_mult = 0;
		r_multu = 0;
		r_div = 0;
		r_divu = 0;
		r_mfhi = 0;
		r_mflo = 0;
		r_mthi = 0;
		r_mtlo = 0;
		
		r_jalr = 0;

		case(func)
			`addu: r_addu = 1;
			`subu: r_subu = 1;
			`jr: r_jr = 1;
			
			`add: r_add = 1;
			`sub: r_sub = 1;
			`andd: r_and = 1;
			`orr: r_or = 1;
			`xorr: r_xor = 1;
			`norr: r_nor = 1;
			`sllv: r_sllv = 1;
			`srlv: r_srlv = 1;
			`srav: r_srav = 1;
			`slt: r_slt = 1;
			`sltu: r_sltu = 1;
			`sll: r_sll = 1;
			`srl: r_srl = 1;
			`sra: r_sra = 1;
			
			`mult: r_mult = 1;
			`multu: r_multu = 1;
			`div: r_div = 1;
			`divu: r_divu = 1;
			`mfhi: r_mfhi = 1;
			`mflo: r_mflo = 1;
			`mthi: r_mthi = 1;
			`mtlo: r_mtlo = 1;
			
			`jalr: r_jalr = 1;

		endcase
	end
	
	//always @(op , func) begin
	always @* begin
		grf_dst = 0;
		grf_write = 0;
		extender_type = 0;
		npc_jump = 0;
		npc_jr = 0;
		alu_ctr = 0;
		alu_src = 0;  //0 rt  1 extender 
		dm_write = 0;
		grf_data_in_type = 0;
		
		mult_start = 0;
		mult_ctr = 0;
		mult_write = 0;
		mult_move = 0;
		store_type = 0;
		dmtender_type = 0;
		
		npc_branch = 0;
		npc_bne = 0;
		npc_blez = 0;
		npc_bgtz = 0;
		npc_bltz = 0;
		npc_bgez = 0;		
		
		A_sa = 0;
		
		//grf_dst 0 rt 1 rd 2 ra
		if(ori || lui || lw || addi || lw || lbu || lh ||
		   lhu || addiu || andi || ori || xori || slti || sltiu) begin
			grf_dst = 0;
		end
		
		else if(r && (r_addu || r_subu || r_add || r_sub ||
			    r_and || r_or || r_xor || r_nor || r_sllv ||
				r_srlv || r_srav || r_slt || r_sltu ||
				r_sll || r_srl || r_sra || r_jalr || r_mfhi || r_mflo)) begin
			grf_dst = 1;
		end
		
		else if(jal) begin
			grf_dst = 2;
		end
		
		//grf_write
		if(r && (r_addu || r_subu || r_add || r_sub || r_and || r_or || r_xor || r_nor || r_sllv || r_srlv || r_srav || r_slt || r_sltu || r_sll || r_srl || r_sra || r_jalr || r_mfhi || r_mflo)
		|| jal || lui || lw || addi || lb || lbu || lh || lhu || addiu || andi || ori || xori || slti || sltiu) begin
			grf_write = 1;
		end
		
		//extender_type
		if(lw || lh || lhu || lb || lbu || sw || sh || sb || beq || bne || blez || bgez || bltz || bgtz 
		|| addi || addiu || slti || sltiu) begin
			extender_type = 1;
		end
		
		//npc_branch
		if(beq) begin
			npc_branch = 1;
		end
		
		//npc_bne
		if(bne)
			npc_bne = 1;
		if(blez)
			npc_blez =1;
		if(bgtz)
			npc_bgtz = 1;
		if(bltz && ins[16] == 0)
			npc_bltz = 1;
		if(bgez && ins[16] == 1)
			npc_bgez = 1;
		
		
		//npc_jump
		if(j || jal) begin
			npc_jump = 1;
		end
		
		//npc_jr jalr
		if(r && (r_jr || r_jalr)) begin
			npc_jr = 1;
		end
		
		//alu_ctr
		//0+ 1- 2& 3| 4 shift16bit 5 Xor 6 Nor 7 sll 8srl 9 sra 10 slt 11 sltu
		if(r && (r_addu || r_add) || addi || addiu || lw || lh || lhu || lb || lbu || sw || sh || sb) begin
			alu_ctr = 4'd0;
		end
		
		else if(r && (r_subu || r_sub)) begin
			alu_ctr = 4'd1;
		end
		
		else if(r && r_and || andi) begin
			alu_ctr = 4'd2;
		end
		
		else if(r && r_or || ori) begin
			alu_ctr = 4'd3;
		end
		
		else if(lui) begin
			alu_ctr = 4'd4;
		end
		//xor
		else if(r && r_xor || xori)begin
			alu_ctr = 4'd5;
		end
		//nor
		else if(r && r_nor) begin
			alu_ctr = 4'd6;
		end
		//7 sll 
		else if(r && (r_sll || r_sllv)) begin
			alu_ctr = 4'd7;
		end
		//8srl 
		else if(r && (r_srl || r_srlv)) begin
			alu_ctr = 4'd8;
		end
		//9 sra 
		else if(r && (r_sra || r_srav)) begin
			alu_ctr = 4'd9;
		end
		//10 slt 
		else if(r && r_slt || slti) begin
			alu_ctr = 4'd10;
		end
		//11 sltu
		else if(r && r_sltu || sltiu) begin
			alu_ctr = 4'd11;
		end
		
		//alu_src 0 rt 1 extend_imm
		
		//lui ori addi addiu andi xori slti sltiu
		if(lui || ori || addi || addiu || andi || ori || xori || slti || sltiu 
		 || lw || lh || lhu || lb || lbu || sw || sh || sb) begin			//!!! lui
			alu_src = 1;
		end
		
		//dm_write
		if(sw || sh || sb) begin
			dm_write = 1;
		end
		//grf_data_in_type 0 alu_result 1 dm_data 2 pc+8
		if(r && (r_addu || r_subu || r_add || r_sub || r_and || r_or || r_xor || r_nor || r_sllv || r_srlv || r_srav || r_slt || r_sltu || r_sll || r_srl || r_sra)
		 || ori || lui || addi || addiu || andi || ori || xori || slti || sltiu) begin
			grf_data_in_type = 0;
		end
		
		else if(lw || lh || lhu || lb || lbu) begin
			grf_data_in_type = 1;
		end
		
		else if(jal || r && r_jalr) begin
			grf_data_in_type = 2;
		end
		
		//dmtender_type
		//0 nothing    1 half & zero    2 half & sign    3 byte & zero    4 byte & sign
		if(lw)
			dmtender_type = 0;
		else if(lhu)
			dmtender_type = 1;
		else if(lh)
			dmtender_type = 2;
		else if(lbu)
			dmtender_type = 3;
		else if(lb)
			dmtender_type = 4;
			
		//store_type
		if(sw)
			store_type = 0;
		else if(sh)
			store_type = 1;
		else if(sb)
			store_type = 2;
		
		
		
		
		
		//mult_start
		if(r && (r_mult || r_multu || r_div || r_divu)) begin
			mult_start = 1;
		end
		//mult_ctr 0 mult      1 DIV     2 multu     3 divu  
		if(r && r_mult) begin
			mult_ctr = 0;
		end
		
		else if(r && r_div) begin
			mult_ctr = 1;
		end
		
		else if(r && r_multu) begin
			mult_ctr = 2;
		end
		
		else if(r && r_divu) begin
			mult_ctr = 3;
		end
		
		//mult_write  0  nothing    1 hi     2 lo
		if(r && r_mthi)
			mult_write = 1;
		else if(r && r_mtlo)
			mult_write = 2;
		//mult_move    0   alu     1 hi     2 lo
		if(r && r_mfhi)
			mult_move = 1;
		else if(r && r_mflo)
			mult_move = 2;
			
		if(r && (r_sll || r_srl || r_sra))
			A_sa = 1;
		
	end


endmodule
