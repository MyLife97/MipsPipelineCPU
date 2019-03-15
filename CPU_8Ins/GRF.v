`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:45:47 12/03/2017 
// Design Name: 
// Module Name:    GRF 
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
module GRF(
    input [4:0] Rs,
    input [4:0] Rt,
    input [4:0] Rd,
    input [31:0] Input,
	input [31:0] PC_Now,
	
    input RegDst,
    input WriteEn,
    input JL,
	
    input Reset,
	input clk,
	
    output [31:0] RsData,
    output [31:0] RtData
    );
	
	reg [31:0] reg_file [31:0];
	reg [31:0] reg_RsData;
	reg [31:0] reg_RtData;
	integer i;
	
	assign RsData = reg_RsData;
	assign RtData = reg_RtData;
	
	initial begin
		for(i = 0; i < 32; i = i + 1) begin
			reg_file[i] = 0;
		end
	end
	
	
	always @(posedge clk) begin
		if(Reset == 1) begin
			for(i = 0; i < 32; i = i + 1) begin
				reg_file[i] = 0;
			end
		end
		
		else begin
			if(WriteEn == 1) begin
				if(JL == 1) begin
					reg_file[31] = Input;
				end
				
				else begin
					if(RegDst == 0) begin
						if(Rt == 0)
							;
						else
							reg_file[Rt] = Input;
					end
					
					if(RegDst == 1) begin
						if(Rd == 0)
							;
						else
							reg_file[Rd] = Input;
					end
				end
			end
		end	
	end
	
	always @(reg_file[Rs] , reg_file[Rt]) begin
		reg_RsData = reg_file[Rs];
		reg_RtData = reg_file[Rt];
	end
	
	//output
	always @(posedge clk && Reset != 1) begin
		if(WriteEn == 1) begin
			if(JL == 1) begin
				$display ("@%h:$31 <= %h" , PC_Now , Input);
			end
			
			else begin
				if(RegDst == 0 && Rt != 0) begin
					$display ("@%h:$%d <= %h" , PC_Now , Rt , Input);
				end
				
				else if(RegDst == 1 && Rd != 0) begin
					$display ("@%h:$%d <= %h" , PC_Now , Rd , Input);
				end
			end
			
		end
	end
	


endmodule
