`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:33:10 12/03/2017 
// Design Name: 
// Module Name:    Mux 
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
module Mux_1bit(
    input [31:0] In0,
    input [31:0] In1,
    input Slc,
    output reg [31:0] Out
    );

always @(In0 , In1 , Slc) begin
	case(Slc)
		0:Out = In0;
		1:Out = In1;
		default:Out = {32{1'b0}};
	endcase	
end

endmodule
//////////////////////////
/*
module Mux_2bit(
    input [31:0] In0,
    input [31:0] In1,
    input [31:0] In2,
    input [31:0] In3,
    input [1:0] Slc,
    output reg [31:0] Out
    );

always @(In0 , In1 , In2 , In3 , Slc) begin
	case(Slc)
		0:Out = In0;
		1:Out = In1;
		2:Out = In2;
		3:Out = In3;
		default:Out = {32{1'b0}};
	endcase	
end

endmodule
//////////////////////////

module Mux_3bit(
    input [31:0] In0,
    input [31:0] In1,
    input [31:0] In2,
    input [31:0] In3,
    input [31:0] In4,
    input [31:0] In5,
    input [31:0] In6,
    input [31:0] In7,
    input [2:0] Slc,
    output reg [31:0] Out
    );

always @(In0 , In1 , In2 , In3 , In4 , In5 , In6 , In7 , Slc) begin
	case(Slc)
		0:Out = In0;
		1:Out = In1;
		2:Out = In2;
		3:Out = In3;
		4:Out = In4;
		5:Out = In5;
		6:Out = In6;
		7:Out = In7;
		default:Out = {32{1'b0}};
	endcase
	
end

endmodule
//////////////////////////

module Mux_4bit(
    input [31:0] In0,
    input [31:0] In1,
    input [31:0] In2,
    input [31:0] In3,
    input [31:0] In4,
    input [31:0] In5,
    input [31:0] In6,
    input [31:0] In7,
    input [31:0] In8,
    input [31:0] In9,
    input [31:0] In10,
    input [31:0] In11,
    input [31:0] In12,
    input [31:0] In13,
    input [31:0] In14,
    input [31:0] In15,	
    input [3:0] Slc,
    output reg [31:0] Out
    );

always @(In0 , In1 , In2 , In3 , In4 , In5 , In6 , In7 ,
In8 , In9 , In10 , In11 , In12 , In13 , In14 , In15 , Slc) begin
	case(Slc)
		0:Out = In0;
		1:Out = In1;
		2:Out = In2;
		3:Out = In3;
		4:Out = In4;
		5:Out = In5;
		6:Out = In6;
		7:Out = In7;
		8:Out = In8;
		9:Out = In9;
		10:Out = In10;
		11:Out = In11;
		12:Out = In12;
		13:Out = In13;
		14:Out = In14;
		15:Out = In15;		
		default:Out = {32{1'b0}};
	endcase
	
end

endmodule
*/