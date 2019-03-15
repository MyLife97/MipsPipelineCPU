`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:14:00 12/12/2017 
// Design Name: 
// Module Name:    mod_alu 
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
module mod_alu(
	input [31:0] A,
	input [31:0] B,
	input [3:0] alu_ctr,
	
	output reg [31:0] result//###
    );
	//reg [31:0] result;//###
	//assign result_fk = {{10{1'b0}} , result[21:2] , {2{1'b0}}};//###
	//assign result_fk = {{16{1'b0}} , result[15:0]};//###
	//always @(A , B , alu_ctr) begin
	always @* begin
		//output
		//0+ 1- 2& 3| 4 shift16bit 5 Xor 6 Nor 7 sll 8srl 9 sra 10 slt 11 sltu
		case(alu_ctr)
			4'd0: begin
				result = A + B;
			end
				
			4'd1: begin
				result = A - B;
			end
			
			4'd2: begin
				result = A & B;
			end
			
			4'd3: begin
				result = A | B;
			end
			
			4'd4: begin
				result = B << 16;
			end
			
			4'd5: begin
				result = A ^ B;
			end
			
			4'd6: begin
				result = ~(A | B);
			end
			//sll
			4'd7: begin
				result = B << A[4:0];
			end
			//srl
			4'd8: begin
				result = B >> A[4:0];
			end
			//sra
			4'd9: begin
				result = $signed($signed(B) >>> $signed(A[4:0]));
			end
			//slt
			4'd10: begin
				if($signed(A) < $signed(B))
					result = 1;
				else 
					result = 0;
			end
			//sltu
			4'd11: begin
				if(A < B)
					result = 1;
				else 
					result = 0;
			end
			
		endcase
		
	end


endmodule
