`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:26:51 12/13/2017 
// Design Name: 
// Module Name:    mod_hazard 
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

`define op 31:26
`define func 5:0
`define rs 25:21
`define rt 20:16
`define rd 15:11

module mod_hazard(
	input [31:0] ins_d,
	input [31:0] ins_e,
	input [31:0] ins_m,
	input [31:0] ins_w,
	
	input mult_busy,
	
	output reg stop,
	output reg [2:0] rs_data_d_to_reg_type,
	output reg [2:0] rt_data_d_to_reg_type,
	output reg [1:0] rs_data_e_to_alu_type,
	output reg [1:0] rt_data_e_to_alu_type,
	output reg [0:0] rt_data_m_to_dm_type
    );
	wire [4:0] rs_d;
	wire [4:0] rt_d;
	wire [4:0] rs_e;
	wire [4:0] rt_e;
	wire [4:0] rs_m;
	wire [4:0] rt_m;
	
	wire [4:0] rd_e;
	wire [4:0] rd_m;
	wire [4:0] rd_w;
	
	reg cal_r_e_write;
	reg cal_i_e_write;
	reg mult_move_e_write;
	reg load_e_write;
	reg load_m_write;
	
	
	//reg cal_r_w_write;
	//reg cal_i_w_write;
	//reg load_w_write;
	
	reg cal_r_d;
	reg cal_r_e;
	reg cal_r_m;
	reg cal_r_w;
	
	reg cal_i_d;
	reg cal_i_e;
	reg cal_i_m;
	reg cal_i_w;
	
	reg load_d;
	reg load_e;
	reg load_m;
	reg load_w;
	
	reg store_d;
	reg store_e;
	reg store_m;
	reg store_w;
	
	reg mult_move_d;
	reg mult_move_e;
	reg mult_move_m;
	reg mult_move_w;
	
	reg mult_to_d;
	reg mult_to_e;
	reg mult_to_m;
	reg mult_to_w;
	
	reg mult_count_d;
	reg mult_count_e;
	reg mult_count_m;
	reg mult_count_w;
	
	reg branch_rsrt_d;
	reg branch_rsrt_e;
	reg branch_rsrt_m;
	reg branch_rsrt_w;
	
	reg branch_rs_d;
	reg branch_rs_e;
	reg branch_rs_m;
	reg branch_rs_w;
	
	
	//w是否写入grf
	//reg w_write;
	
	
	
	
	assign rs_d = ins_d[`rs];
	assign rs_m = ins_m[`rs];
	assign rs_e = ins_e[`rs];
	
	
	assign rt_d = ins_d[`rt];
	assign rt_e = ins_e[`rt];
	assign rt_m = ins_m[`rt];
	assign rt_w = ins_w[`rt];
	
	assign rd_e = ins_e[`rd];
	assign rd_m = ins_m[`rd];
	assign rd_w = ins_w[`rd];
	
	//用于判断暂停
	//always @(ins_d , ins_e , ins_m , ins_w) begin
	always @* begin
		cal_r_e_write = 0;
		cal_i_e_write = 0;
		mult_move_e_write = 0;
		load_e_write = 0;
		load_m_write = 0;
		//add addu sub subu and or xor nor sllv srlv srav slt sltu sll srl sra
		if(ins_e[`op] == `r &&(ins_e[`func] == `addu || ins_e[`func] == `subu || ins_e[`func] == `add
		|| ins_e[`func] == `sub || ins_e[`func] == `andd || ins_e[`func] == `orr || ins_e[`func] == `xorr
		|| ins_e[`func] == `norr || ins_e[`func] == `sllv || ins_e[`func] == `srlv || ins_e[`func] == `srav
		|| ins_e[`func] == `slt || ins_e[`func] == `sltu || ins_e[`func] == `sll || ins_e[`func] == `srl
		|| ins_e[`func] == `sra))
		   cal_r_e_write = 1;
		//lui addi addiu andi ori xori slti sltiu
		if(ins_e[`op] == `ori || ins_e[`op] == `lui || ins_e[`op] == `addi || ins_e[`op] == `addiu
		 || ins_e[`op] == `andi || ins_e[`op] == `xori || ins_e[`op] == `slti || ins_e[`op] == `sltiu)
			cal_i_e_write = 1;
			
		if(ins_e[`op] == `r && (ins_e[`func] == `mfhi || ins_e[`func] == `mflo))
			mult_move_e_write = 1;
			
		if(ins_e[`op] == `lw || ins_e[`op] == `lh || ins_e[`op] == `lhu || ins_e[`op] == `lb || ins_e[`op] == `lbu)
			load_e_write = 1;
			
		if(ins_m[`op] == `lw || ins_m[`op] == `lh || ins_m[`op] == `lhu || ins_m[`op] == `lb || ins_m[`op] == `lbu)
			load_m_write = 1;
	end
	
	//always @(ins_d , ins_e , ins_m , ins_w) begin
	always @* begin
		stop = 0;
		//beq & bne
		if((ins_d[`op] == `beq || ins_d[`op] == `bne)&& cal_r_e_write && (rs_d == rd_e || rt_d == rd_e) && rd_e != 0)
			stop = 1;
		if((ins_d[`op] == `beq || ins_d[`op] == `bne)&& cal_i_e_write && (rs_d == rt_e || rt_d == rt_e) && rt_e != 0)
			stop = 1;
		if((ins_d[`op] == `beq || ins_d[`op] == `bne)&& mult_move_e_write && (rs_d == rd_e || rt_d == rd_e) && rd_e != 0)
			stop = 1;
		if((ins_d[`op] == `beq || ins_d[`op] == `bne)&& load_e_write && (rs_d == rt_e || rt_d == rt_e) && rt_e != 0)
			stop = 1;
		if((ins_d[`op] == `beq || ins_d[`op] == `bne)&& load_m_write && (rs_d == rt_m || rt_d == rt_m) && rt_m != 0)
			stop = 1;
		//jr & jalr
		if((ins_d[`op] == `r && (ins_d[`func] == `jr || ins_d[`func] == `jalr) 
		|| ins_d[`op] == `blez || ins_d[`op] == `bltz || ins_d[`op] == `bgez || ins_d[`op] == `bgtz) 
		&& cal_r_e_write && (rs_d == rd_e) && rd_e != 0)
			stop = 1;
			
		if((ins_d[`op] == `r && (ins_d[`func] == `jr || ins_d[`func] == `jalr) 
		|| ins_d[`op] == `blez || ins_d[`op] == `bltz || ins_d[`op] == `bgez || ins_d[`op] == `bgtz)
		&& cal_i_e_write && (rs_d == rt_e) && rt_e != 0)
			stop = 1;
			
		if((ins_d[`op] == `r && (ins_d[`func] == `jr || ins_d[`func] == `jalr) 
		|| ins_d[`op] == `blez || ins_d[`op] == `bltz || ins_d[`op] == `bgez || ins_d[`op] == `bgtz)
		&& mult_move_e_write && (rs_d == rd_e) && rd_e != 0)
			stop = 1;
			
		if((ins_d[`op] == `r && (ins_d[`func] == `jr || ins_d[`func] == `jalr) 
		|| ins_d[`op] == `blez || ins_d[`op] == `bltz || ins_d[`op] == `bgez || ins_d[`op] == `bgtz)
		&& load_m_write && rs_d == rt_m && rt_m != 0)
			stop = 1;			
			
		if((ins_d[`op] == `r && (ins_d[`func] == `jr || ins_d[`func] == `jalr) 
		|| ins_d[`op] == `blez || ins_d[`op] == `bltz || ins_d[`op] == `bgez || ins_d[`op] == `bgtz)
		&& load_e_write && (rs_d == rt_e) && rt_e != 0)
			stop = 1;
		
		//load E
		if((cal_r_d || mult_count_d) && load_e_write && (rs_d == rt_e || rt_d == rt_e) && rt_e != 0)
			stop = 1;
		if((cal_i_d || mult_to_d) && load_e_write && rs_d == rt_e && rt_e != 0)
			stop = 1;
		if(load_d && load_e_write && rs_d == rt_e && rt_e != 0)
			stop = 1;
		if(store_d && load_e_write && rs_d == rt_e && rt_e != 0)
			stop = 1;
		//mult
		if(mult_busy && (mult_count_d || mult_move_d || mult_to_d))
			stop = 1;

	end
	
	//always @(ins_d , ins_e , ins_m , ins_w) begin
	always @* begin
		cal_r_d = 0;
		cal_r_e = 0;
		cal_r_m = 0;
		cal_r_w = 0;

		cal_i_d = 0;
		cal_i_e = 0;
		cal_i_m = 0;
		cal_i_w = 0;
		
		load_d = 0;
		load_e = 0;
		load_m = 0;
		load_w = 0;
		
		store_d = 0;
		store_e = 0;
		store_m = 0;
		store_w = 0;
		
		mult_move_d = 0;
		mult_move_e = 0;
		mult_move_m = 0;
		mult_move_w = 0;
	
		mult_to_d = 0;
		mult_to_e = 0;
		mult_to_m = 0;
		mult_to_w = 0;	
	
		mult_count_d = 0;
		mult_count_e = 0;
		mult_count_m = 0;
		mult_count_w = 0;
		
		branch_rsrt_d = 0;
		branch_rsrt_e = 0;
		branch_rsrt_m = 0;
		branch_rsrt_w = 0;
		
		branch_rs_d = 0;
		branch_rs_e = 0;
		branch_rs_m = 0;
		branch_rs_w = 0;		

		//cal_r
		if(ins_d[`op] == `r &&(ins_d[`func] == `addu || ins_d[`func] == `subu || ins_d[`func] == `add
		|| ins_d[`func] == `sub || ins_d[`func] == `andd || ins_d[`func] == `orr || ins_d[`func] == `xorr
		|| ins_d[`func] == `norr|| ins_d[`func] == `sllv || ins_d[`func] == `srlv|| ins_d[`func] == `srav
		|| ins_d[`func] == `slt || ins_d[`func] == `sltu || ins_d[`func] == `sll || ins_d[`func] == `srl
		|| ins_d[`func] == `sra))
			cal_r_d = 1;
		if(ins_e[`op] == `r &&(ins_e[`func] == `addu || ins_e[`func] == `subu || ins_e[`func] == `add
		|| ins_e[`func] == `sub || ins_e[`func] == `andd || ins_e[`func] == `orr || ins_e[`func] == `xorr
		|| ins_e[`func] == `norr|| ins_e[`func] == `sllv || ins_e[`func] == `srlv|| ins_e[`func] == `srav
		|| ins_e[`func] == `slt || ins_e[`func] == `sltu || ins_e[`func] == `sll || ins_e[`func] == `srl
		|| ins_e[`func] == `sra))
			cal_r_e = 1;
		if(ins_m[`op] == `r &&(ins_m[`func] == `addu || ins_m[`func] == `subu || ins_m[`func] == `add
		|| ins_m[`func] == `sub || ins_m[`func] == `andd || ins_m[`func] == `orr || ins_m[`func] == `xorr
		|| ins_m[`func] == `norr|| ins_m[`func] == `sllv || ins_m[`func] == `srlv|| ins_m[`func] == `srav
		|| ins_m[`func] == `slt || ins_m[`func] == `sltu || ins_m[`func] == `sll || ins_m[`func] == `srl
		|| ins_m[`func] == `sra))
			cal_r_m = 1;
		if(ins_w[`op] == `r &&(ins_w[`func] == `addu || ins_w[`func] == `subu || ins_w[`func] == `add
		|| ins_w[`func] == `sub || ins_w[`func] == `andd || ins_w[`func] == `orr || ins_w[`func] == `xorr
		|| ins_w[`func] == `norr|| ins_w[`func] == `sllv || ins_w[`func] == `srlv|| ins_w[`func] == `srav
		|| ins_w[`func] == `slt || ins_w[`func] == `sltu || ins_w[`func] == `sll || ins_w[`func] == `srl
		|| ins_w[`func] == `sra))
			cal_r_w = 1;
		//cal_i
		if(ins_d[`op] == `ori || ins_d[`op] == `lui || ins_d[`op] == `addi || ins_d[`op] == `addiu
		 || ins_d[`op] == `andi || ins_d[`op] == `xori || ins_d[`op] == `slti || ins_d[`op] == `sltiu)
			cal_i_d = 1;
		if(ins_m[`op] == `ori || ins_m[`op] == `lui || ins_m[`op] == `addi || ins_m[`op] == `addiu
		 || ins_m[`op] == `andi || ins_m[`op] == `xori || ins_m[`op] == `slti || ins_m[`op] == `sltiu)
			cal_i_m = 1;
		if(ins_e[`op] == `ori || ins_e[`op] == `lui || ins_e[`op] == `addi || ins_e[`op] == `addiu
		 || ins_e[`op] == `andi || ins_e[`op] == `xori || ins_e[`op] == `slti || ins_e[`op] == `sltiu)
			cal_i_e = 1;
		if(ins_w[`op] == `ori || ins_w[`op] == `lui || ins_w[`op] == `addi || ins_w[`op] == `addiu
		 || ins_w[`op] == `andi || ins_w[`op] == `xori || ins_w[`op] == `slti || ins_w[`op] == `sltiu)
			cal_i_w = 1;
		//load
		if(ins_d[`op] == `lw || ins_d[`op] == `lh || ins_d[`op] == `lhu || ins_d[`op] == `lb || ins_d[`op] == `lbu)
			load_d = 1;
		if(ins_e[`op] == `lw || ins_e[`op] == `lh || ins_e[`op] == `lhu || ins_e[`op] == `lb || ins_e[`op] == `lbu)
			load_e = 1;
		if(ins_m[`op] == `lw || ins_m[`op] == `lh || ins_m[`op] == `lhu || ins_m[`op] == `lb || ins_m[`op] == `lbu)
			load_m = 1;
		if(ins_w[`op] == `lw || ins_w[`op] == `lh || ins_w[`op] == `lhu || ins_w[`op] == `lb || ins_w[`op] == `lbu)
			load_w = 1;
		//store
		if(ins_d[`op] == `sw || ins_d[`op] == `sh || ins_d[`op] == `sb)
			store_d = 1;
		if(ins_e[`op] == `sw || ins_e[`op] == `sh || ins_e[`op] == `sb)
			store_e = 1;
		if(ins_m[`op] == `sw || ins_m[`op] == `sh || ins_m[`op] == `sb)
			store_m = 1;
		if(ins_w[`op] == `sw || ins_w[`op] == `sh || ins_w[`op] == `sb)
			store_w = 1;
		//mult_move
		if(ins_d[`op] == `r && (ins_d[`func] == `mfhi || ins_d[`func] == `mflo))
			mult_move_d = 1;
		if(ins_e[`op] == `r && (ins_e[`func] == `mfhi || ins_e[`func] == `mflo))
			mult_move_e = 1;
		if(ins_m[`op] == `r && (ins_m[`func] == `mfhi || ins_m[`func] == `mflo))
			mult_move_m = 1;
		if(ins_w[`op] == `r && (ins_w[`func] == `mfhi || ins_w[`func] == `mflo))
			mult_move_w = 1;
		//mult_count
		if(ins_d[`op] == `r && (ins_d[`func] == `mult || ins_d[`func] == `div || ins_d[`func] == `multu || ins_d[`func] == `divu))
			mult_count_d = 1;
		if(ins_e[`op] == `r && (ins_e[`func] == `mult || ins_e[`func] == `div || ins_e[`func] == `multu || ins_e[`func] == `divu))
			mult_count_e = 1;
		if(ins_m[`op] == `r && (ins_m[`func] == `mult || ins_m[`func] == `div || ins_m[`func] == `multu || ins_m[`func] == `divu))
			mult_count_m = 1;
		if(ins_w[`op] == `r && (ins_w[`func] == `mult || ins_w[`func] == `div || ins_w[`func] == `multu || ins_w[`func] == `divu))
			mult_count_w = 1;
		//mult_to
		if(ins_d[`op] == `r && (ins_d[`func] == `mthi || ins_d[`func] == `mtlo))
			mult_to_d = 1;
		if(ins_e[`op] == `r && (ins_e[`func] == `mthi || ins_e[`func] == `mtlo))
			mult_to_e = 1;
		if(ins_m[`op] == `r && (ins_m[`func] == `mthi || ins_m[`func] == `mtlo))
			mult_to_m = 1;
		if(ins_w[`op] == `r && (ins_w[`func] == `mthi || ins_w[`func] == `mtlo))
			mult_to_w = 1;
		//branch_rsrt
		if(ins_d[`op] == `beq || ins_d[`op] == `bne)
			branch_rsrt_d = 1;
		if(ins_e[`op] == `beq || ins_e[`op] == `bne)
			branch_rsrt_e = 1;
		if(ins_m[`op] == `beq || ins_m[`op] == `bne)
			branch_rsrt_m = 1;
		if(ins_w[`op] == `beq || ins_w[`op] == `bne)
			branch_rsrt_w = 1;
		//branch_rs
		if(ins_d[`op] == `blez || ins_d[`op] == `bltz || ins_d[`op] == `bgez || ins_d[`op] == `bgtz)
			branch_rs_d = 1;
		if(ins_e[`op] == `blez || ins_e[`op] == `bltz || ins_e[`op] == `bgez || ins_e[`op] == `bgtz)
			branch_rs_e = 1;
		if(ins_m[`op] == `blez || ins_m[`op] == `bltz || ins_m[`op] == `bgez || ins_m[`op] == `bgtz)
			branch_rs_m = 1;
		if(ins_w[`op] == `blez || ins_w[`op] == `bltz || ins_w[`op] == `bgez || ins_w[`op] == `bgtz)
			branch_rs_w = 1;
	end
	//转发
	//rs_data_d_to_reg
	always @* begin
		rs_data_d_to_reg_type = 0;
		if((branch_rsrt_d || branch_rs_d || (ins_d[`op] == `r && (ins_d[`func] == `jr || ins_d[`func] == `jalr))
		|| cal_r_d || cal_i_d || mult_count_d || mult_to_d || load_d || store_d) && ins_e[`op] == `jal && ins_d[`rs] == 5'd31)
			rs_data_d_to_reg_type = 1;
		else if((branch_rsrt_d || branch_rs_d || (ins_d[`op] == `r && (ins_d[`func] == `jr || ins_d[`func] == `jalr))
		|| cal_r_d || cal_i_d || mult_count_d || mult_to_d || load_d || store_d) && (ins_e[`op] == `r && ins_e[`func] == `jalr) && ins_d[`rs] == ins_e[`rd] && ins_d[`rs] != 0)
			rs_data_d_to_reg_type = 1;
		else if((branch_rsrt_d || branch_rs_d || (ins_d[`op] == `r && (ins_d[`func] == `jr || ins_d[`func] == `jalr))
		|| cal_r_d || cal_i_d || mult_count_d || mult_to_d || load_d || store_d) && ins_m[`op] == `jal && ins_d[`rs] == 5'd31)
			rs_data_d_to_reg_type = 2;
		else if((branch_rsrt_d || branch_rs_d || (ins_d[`op] == `r && (ins_d[`func] == `jr || ins_d[`func] == `jalr))
		|| cal_r_d || cal_i_d || mult_count_d || mult_to_d || load_d || store_d) && (ins_m[`op] == `r && ins_m[`func] == `jalr) && ins_d[`rs] == ins_m[`rd] && ins_d[`rs] != 0)
			rs_data_d_to_reg_type = 2;
		else if((branch_rsrt_d || branch_rs_d || (ins_d[`op] == `r && (ins_d[`func] == `jr || ins_d[`func] == `jalr)))&& cal_r_m && ins_d[`rs] == ins_m[`rd] && ins_d[`rs] != 0)
			rs_data_d_to_reg_type = 3;
		else if((branch_rsrt_d || branch_rs_d || (ins_d[`op] == `r && (ins_d[`func] == `jr || ins_d[`func] == `jalr)))&& cal_i_m && ins_d[`rs] == ins_m[`rt] && ins_d[`rs] != 0)
			rs_data_d_to_reg_type = 3;
		else if((branch_rsrt_d || branch_rs_d || (ins_d[`op] == `r && (ins_d[`func] == `jr || ins_d[`func] == `jalr)))&& mult_move_m && ins_d[`rs] == ins_m[`rd] && ins_d[`rs] != 0)
			rs_data_d_to_reg_type = 3;	
	end

	//rt_data_d_to_reg
	always @* begin
		rt_data_d_to_reg_type = 0;
		if((branch_rsrt_d || cal_r_d || mult_count_d) && ins_e[`op] == `jal && ins_d[`rt] == 5'd31)
			rt_data_d_to_reg_type = 1;
		else if((branch_rsrt_d || cal_r_d || mult_count_d) && (ins_e[`op] == `r && ins_e[`func] == `jalr) && ins_d[`rt] == ins_e[`rd] && ins_d[`rt] != 0)
			rt_data_d_to_reg_type = 1;
		else if((branch_rsrt_d || cal_r_d || mult_count_d) && ins_m[`op] == `jal && ins_d[`rt] == 5'd31)
			rt_data_d_to_reg_type = 2;
		else if((branch_rsrt_d || cal_r_d || mult_count_d) && (ins_m[`op] == `r && ins_m[`func] == `jalr) && ins_d[`rt] == ins_m[`rd] && ins_d[`rt] != 0)
			rt_data_d_to_reg_type = 2;
		else if(branch_rsrt_d && cal_r_m && ins_d[`rt] == ins_m[`rd] && ins_d[`rt] != 0)
			rt_data_d_to_reg_type = 3;
		else if(branch_rsrt_d && cal_i_m && ins_d[`rt] == ins_m[`rt] && ins_d[`rt] != 0)
			rt_data_d_to_reg_type = 3;
		else if(branch_rsrt_d && mult_move_m && ins_d[`rt] == ins_m[`rd] && ins_d[`rt] != 0)
			rs_data_d_to_reg_type = 3;
	end
	
	//rs_data_e_to_alu_type
	always @* begin
		rs_data_e_to_alu_type = 0;
		
		if((cal_r_e || cal_i_e || load_e || store_e || mult_count_e || mult_to_e) && cal_r_m && ins_e[`rs] == ins_m[`rd] && ins_e[`rs] != 0)
			rs_data_e_to_alu_type = 1;
		else if((cal_r_e || cal_i_e || load_e || store_e || mult_count_e || mult_to_e) && cal_i_m && ins_e[`rs] == ins_m[`rt] && ins_e[`rs] != 0)
			rs_data_e_to_alu_type = 1;
		else if((cal_r_e || cal_i_e || load_e || store_e || mult_count_e || mult_to_e) && mult_move_m && ins_e[`rs] == ins_m[`rd] && ins_e[`rs] != 0)
			rs_data_e_to_alu_type = 1;
		else if((cal_r_e || cal_i_e || load_e || store_e || mult_count_e || mult_to_e) && cal_r_w && ins_e[`rs] == ins_w[`rd] && ins_e[`rs] != 0)
			rs_data_e_to_alu_type = 2;
		else if((cal_r_e || cal_i_e || load_e || store_e || mult_count_e || mult_to_e) && cal_i_w && ins_e[`rs] == ins_w[`rt] && ins_e[`rs] != 0)
			rs_data_e_to_alu_type = 2;
		else if((cal_r_e || cal_i_e || load_e || store_e || mult_count_e || mult_to_e) && mult_move_w && ins_e[`rs] == ins_w[`rd] && ins_e[`rs] != 0)
			rs_data_e_to_alu_type = 2;
		else if((cal_r_e || cal_i_e || load_e || store_e || mult_count_e || mult_to_e) && load_w && ins_e[`rs] == ins_w[`rt] && ins_e[`rs] != 0)
			rs_data_e_to_alu_type = 2;
		else if((cal_r_e || cal_i_e || load_e || store_e || mult_count_e || mult_to_e) && ins_w[`op] == `jal && ins_e[`rs] == 5'd31)
			rs_data_e_to_alu_type = 2;
		else if((cal_r_e || cal_i_e || load_e || store_e || mult_count_e || mult_to_e) && ins_w[`op] == `r && ins_w[`func] == `jalr && ins_e[`rs] == ins_w[`rd] && ins_e[`rs] != 0)
			rs_data_e_to_alu_type = 2;
	end
	
	//rt_data_e_to_alu_type
	always @* begin
		rt_data_e_to_alu_type = 0;
		if((cal_r_e || mult_count_e || store_e) && cal_r_m && ins_e[`rt] == ins_m[`rd] && ins_e[`rt] != 0)
			rt_data_e_to_alu_type = 1;
		else if((cal_r_e || mult_count_e || store_e) && cal_i_m && ins_e[`rt] == ins_m[`rt] && ins_e[`rt] != 0)
			rt_data_e_to_alu_type = 1;
		else if((cal_r_e || mult_count_e || store_e) && mult_move_m && ins_e[`rt] == ins_m[`rd] && ins_e[`rt] != 0)
			rt_data_e_to_alu_type = 1;
		else if((cal_r_e || mult_count_e || store_e) && cal_r_w && ins_e[`rt] == ins_w[`rd] && ins_e[`rt] != 0)
			rt_data_e_to_alu_type = 2;
		else if((cal_r_e || mult_count_e || store_e) && cal_i_w && ins_e[`rt] == ins_w[`rt] && ins_e[`rt] != 0)
			rt_data_e_to_alu_type = 2;
		else if((cal_r_e || mult_count_e || store_e) && mult_move_w && ins_e[`rt] == ins_w[`rd] && ins_e[`rt] != 0)
			rt_data_e_to_alu_type = 2;
		else if((cal_r_e || mult_count_e || store_e) && load_w && ins_e[`rt] == ins_w[`rt] && ins_e[`rt] != 0)
			rt_data_e_to_alu_type = 2;
		else if((cal_r_e || mult_count_e || store_e) && ins_w[`op] == `jal && ins_e[`rt] == 5'd31)
			rt_data_e_to_alu_type = 2;
		else if((cal_r_e || mult_count_e || store_e) && (ins_w[`op] == `r && ins_w[`func] == `jalr) && ins_e[`rt] == ins_w[`rd] && ins_e[`rt] != 0)
			rt_data_e_to_alu_type = 2;
	end
	
	//always @(ins_d , ins_e , ins_m , ins_w) begin
	always @* begin
		rt_data_m_to_dm_type = 0;
		if(store_m && cal_r_w && ins_m[`rt] == ins_w[`rd] && ins_m[`rt] != 0)
			rt_data_m_to_dm_type = 1;
		else if(store_m && cal_i_w && ins_m[`rt] == ins_w[`rt] && ins_m[`rt] != 0)
			rt_data_m_to_dm_type = 1;
		else if(store_m && mult_move_w && ins_m[`rt] == ins_w[`rd] && ins_m[`rt] != 0)
			rt_data_m_to_dm_type = 1;
		else if(store_m && load_w && ins_m[`rt] == ins_w[`rt] && ins_m[`rt] != 0)
			rt_data_m_to_dm_type = 1;
		else if(store_m && ins_w[`op] == `jal && ins_m[`rt] == 5'd31)
			rt_data_m_to_dm_type = 1;
		else if(store_m && (ins_w[`op] == `r && ins_w[`func] == `jalr) && ins_m[`rt] == ins_w[`rd] && ins_m[`rt] != 0)
			rt_data_m_to_dm_type = 1;
	end
	
endmodule
