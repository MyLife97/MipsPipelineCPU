`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:05:49 11/07/2017 
// Design Name: 
// Module Name:    gray 
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
module gray(
    input Clk,
    input Reset,
    input En,
    output [2:0] Output,
    output Overflow
    );
	
	reg [2:0] number=0;
	reg reg_overflow=0;
	reg [2:0] reg_output=0;
	integer i;
	
	assign Overflow = reg_overflow;
	assign Output = reg_output;
	
	always @(posedge Clk) begin
	
		if(Reset == 1) begin
			reg_overflow = 0;
			number = 0;
			reg_output = 0;
		end
		
		else begin
			if(En == 1) begin
				number = number + 1;
				
				if(number == 0) begin
					reg_overflow = 1;
				end
				
				for(i = 0; i < 2; i = i + 1) begin
					reg_output[i] = number[i]^number[i+1];
				end
				
				reg_output[2] = number[2];
				
			end
			
		end
				
	end

endmodule
