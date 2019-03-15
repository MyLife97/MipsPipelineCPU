`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:40:27 12/27/2017 
// Design Name: 
// Module Name:    mod_be 
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
module mod_be(
    input [1:0] addr,
    input [1:0] store_type,
    output reg [3:0] BE
    );
	// store_type = 0 word
	// store_type = 1 half
	// store_type = 2 byte
	// BE 1可以写入 0不可写入
	always @* begin
		case(store_type)
			2'd0: begin
				BE = 4'b1111;
			end
			
			2'd1: begin
				if(addr == 0)
					BE = 4'b0011;
				else if(addr == 2)
					BE = 4'b1100;
			end
			
			2'd2: begin
				if(addr == 0)
					BE = 4'b0001;
				else if(addr == 1)
					BE = 4'b0010;
				else if(addr == 2)
					BE = 4'b0100;
				else
					BE = 4'b1000;
			end
		endcase
	end
	
	


endmodule
