`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:38:43 10/24/2017 
// Design Name: 
// Module Name:    id_fsm 
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
module id_fsm(
    input [7:0] char,
    input clk,
    output out
    );

	reg [7:0] char_now;
	reg letter; //用于判断是否输入为字母
	reg number; //有字母时，判断是否输入为数字
	
	initial begin
	letter <= 0;
	number <= 0;
	end
	
	assign out = number;
	
	always @(posedge clk) begin
		char_now = char;
		if(char_now >= "a" && char_now <= "z" || char_now >= "A" && char_now <="Z") begin
			letter <= 1;
			number <= 0;
		end
		
		else if(char_now >= "0" && char_now <= "9") begin
			if(letter == 1 || number == 1) begin
				letter <= 0;
				number <= 1;
			end
		end
		
		else begin
			letter <= 0;
			number <= 0;
		end
		
	end


endmodule
