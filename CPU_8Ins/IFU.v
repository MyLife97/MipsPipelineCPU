`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:23:44 12/03/2017 
// Design Name: 
// Module Name:    IFU 
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
module IFU(
    input [31:0] PC_Next,
	
    input Reset,
	input clk,
	
    output [31:0] PC_Now,
    output [31:0] Instruction
    );
	reg [31:0]reg_PC_Now;
	reg [31:0]reg_Instruction;
	reg [31:0] Rom [1023:0];//ROM
	
	initial begin
		$readmemh("code.txt" , Rom);
		reg_PC_Now = 'h3000;
	end
	
	
	
	
	assign PC_Now = reg_PC_Now;
	assign Instruction = reg_Instruction;

	
	always @(posedge clk) begin
		if(Reset == 1) begin
			reg_PC_Now = 'h3000;
			reg_Instruction = Rom[reg_PC_Now[11:2]];
		end
		
		else begin
			reg_PC_Now = PC_Next;
			reg_Instruction = Rom[reg_PC_Now[11:2]];
		end
		
	end
	
	
	



endmodule
