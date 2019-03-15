`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:42:56 12/03/2017 
// Design Name: 
// Module Name:    ALU 
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
module ALU(
    input [31:0] A,
    input [31:0] B,
    input [3:0] ALU_Ctr,
	
    output [31:0] Result,
	output AequalsB,
	
	output AlessB
    );
	reg [31:0]reg_Result;
	reg reg_AequalsB;
	reg reg_AlessB;
	
	assign Result = reg_Result;
	assign AequalsB = reg_AequalsB;
	assign AlessB = reg_AlessB;
	
	always @* begin
		if(ALU_Ctr == 0)begin
			reg_Result = A + B;
		end
		
		if(ALU_Ctr == 1)begin
			reg_Result = A - B;
		end
		
		if(ALU_Ctr == 2)begin
			reg_Result = A & B;
		end
		
		if(ALU_Ctr == 3)begin
			reg_Result = A | B;
		end
		
		if(A == B) begin
			reg_AequalsB = 1;
		end
		
		else begin
			reg_AequalsB = 0;
		end
		
		if(A < B) begin
			reg_AlessB = 1;
		end
		
		else begin
			reg_AlessB = 0;
		end
	end
	
	



endmodule
