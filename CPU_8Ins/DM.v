`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:03:59 12/03/2017 
// Design Name: 
// Module Name:    DM 
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
module DM(
    input [31:0] Address,
    input [31:0] Data,
	input [31:0] PC_Now,
    input WriteEn,

    input Reset,
    input clk,
	
    output [31:0] Output
    );
	reg [31:0] Ram [1023:0];
	reg [31:0] reg_Output;
	integer i;
	
	assign Output = reg_Output;
	
	always @(posedge clk) begin
		if(Reset == 1) begin
			for(i = 0; i < 1023; i = i + 1) begin
				Ram[i] = 0;
			end
		end
		
		else begin
			if(WriteEn == 1) begin
				Ram[Address[11:2]] = Data;
			end
		end
	end
	
	always @(Ram[Address[11:2]]) begin
		reg_Output = Ram[Address[11:2]];
	end

	always @(posedge clk && Reset != 1) begin
		if(WriteEn == 1) begin
			$display ("@%h:*%h <= %h" , PC_Now , Address , Data);
		end
	end


endmodule
