`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:13:43 12/12/2017 
// Design Name: 
// Module Name:    mod_extender 
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
module mod_extender(
	input [15:0] imm,
	input extender_type,
	
	output reg [31:0] extend_imm
    );
	
	//always @(imm , extender_type) begin
	always @* begin
		//output
		if(extender_type == 0) begin
			extend_imm = {{16{1'b0}} , imm};
		end
		
		else if(extender_type == 1 && imm[15] == 0) begin
				extend_imm = {{16{1'b0}} , imm};
		end
			
		else begin
				extend_imm = {{16{1'b1}} , imm};
		end
	end
	
	


endmodule
