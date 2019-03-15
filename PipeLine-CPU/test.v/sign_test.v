`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:57:00 12/26/2017 
// Design Name: 
// Module Name:    sign_test 
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
module sign_test(
	input [31:0] A,
	input [31:0] B
    );
	reg [31:0] HI;
	reg [31:0] LO;
	//wire [31:0] A;
	//wire [31:0] B;
	reg [63:0] C;
	reg [63:0] result;
	
	initial begin
		HI = -2;
		LO = -2;
	end
	
	always @* begin
		result = HI * LO - $signed(A) * $signed(B);
		//C = A * B;
	end


endmodule
