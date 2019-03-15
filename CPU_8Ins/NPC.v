`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:49:34 12/03/2017 
// Design Name: 
// Module Name:    NPC 
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
module NPC(
    input [25:0] Jump_Offset,
    input [31:0] PC_Now,
    input [31:0] Extend_Immediate,
	input [31:0] RsData,
	
    input AequalsB,
    input Branch,
	input JL,
	input J,
	input Jr,
    
    output [31:0] PC_Next
    );
reg [31:0] reg_PC_Next;
reg [31:0] reg_jump;
reg [31:0] reg_branch;
reg [31:0] reg_jr;
reg [31:0] reg_plus4;

assign PC_Next = reg_PC_Next;

always @* begin
	reg_jump = {PC_Now[31:28] , Jump_Offset , {2{1'b0}}};
	reg_jr = RsData;
	reg_plus4 = PC_Now + 4;
	reg_branch = {Extend_Immediate[29:0] , {2{1'b0}}} + reg_plus4;

	if(Jr == 1) begin
		reg_PC_Next = reg_jr;
	end
	
	else if(JL == 1 || J == 1) begin
		reg_PC_Next = reg_jump;
	end
	
	else if(Branch == 1 && AequalsB == 1) begin
		reg_PC_Next = reg_branch;
	end
	
	else begin
		reg_PC_Next = reg_plus4;
	end
end

endmodule
