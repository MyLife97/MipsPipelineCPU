`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:06:46 12/13/2017 
// Design Name: 
// Module Name:    mod_mux 
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
module mod_mux_2_32bit(
	input [31:0] in_1,
	input [31:0] in_2,
	input slc,
	output reg [31:0] out
    );
	
	always @(in_1 , in_2 , slc) begin
		if(slc == 0) begin
			out = in_1;
		end
		
		if(slc == 1) begin
			out = in_2;
		end
	end

endmodule

module mod_mux_4_5bit(
	input [4:0] in_1,
	input [4:0] in_2,
	input [4:0] in_3,
	input [4:0] in_4,
	
	input [1:0] slc,
	
	output reg [4:0] out
    );
	
	always @(in_1 , in_2 , in_3 , in_4 , slc) begin
		if(slc == 0) begin
			out = in_1;
		end
		
		else if(slc == 1) begin
			out = in_2;
		end
		
		else if(slc == 2) begin
			out = in_3;
		end
		
		else begin
			out = in_4;
		end
	end

endmodule

module mod_mux_4_32bit(
	input [31:0] in_1,
	input [31:0] in_2,
	input [31:0] in_3,
	input [31:0] in_4,
	
	input [1:0] slc,
	
	output reg [31:0] out
	
    );

	always @(in_1 , in_2 , in_3 , in_4 , slc) begin
		if(slc == 0) begin
			out = in_1;
		end
		
		else if(slc == 1) begin
			out = in_2;
		end
		
		else if(slc == 2) begin
			out = in_3;
		end
		
		else begin
			out = in_4;
		end
	end

endmodule


module mod_mux_8_32bit(
	input [31:0] in_1,
	input [31:0] in_2,
	input [31:0] in_3,
	input [31:0] in_4,
	input [31:0] in_5,
	input [31:0] in_6,
	input [31:0] in_7,
	input [31:0] in_8,
	input [2:0] slc,
	
	output reg [31:0] out
    );
	
	always @(in_1 , in_2 , in_3 , in_4 , in_5 , in_6 , in_7 , in_8 , slc) begin
		if(slc == 0) begin
			out = in_1;
		end
		
		else if(slc == 1) begin
			out = in_2;
		end
		
		else if(slc == 2) begin
			out = in_3;
		end
		
		else if(slc == 3) begin
			out = in_4;
		end
		
		else if(slc == 4) begin
			out = in_5;
		end

		else if(slc == 5) begin
			out = in_6;
		end
		
		else if(slc == 6) begin
			out = in_7;
		end		
		
		else begin
			out = in_8;
		end
	end


endmodule

