`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:18:50 12/27/2017 
// Design Name: 
// Module Name:    mod_mult 
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
module mod_mult(
    input [31:0] C,
    input [31:0] D,
    input [2:0] mult_ctr,
	input [1:0] mult_write,
    input start,
	input clk,
    output reg [31:0] HI,
    output reg [31:0] LO,
    output mult_busy
    );
	reg [31:0] C_mem;
	reg [31:0] D_mem;
	
	reg busy;
	reg [2:0] last_ctr;
	integer cycle;
	assign mult_busy = busy || start;
	
	initial begin
		HI = 0;
		LO = 0;
	end
	// 0 mult      1 DIV     2 multu     3 divu   
	
	always @(posedge clk) begin
		if(start == 1) begin
			C_mem = C;
			D_mem = D;
		
			case(mult_ctr)
				3'd0:begin
					cycle = 6;
					last_ctr = 0;
				end
				
				3'd1: begin
					cycle = 11;
					last_ctr = 1;
				end
				
				3'd2: begin
					cycle = 6;
					last_ctr = 2;
				end
				
				3'd3: begin
					cycle = 11;
					last_ctr = 3;
				end
			endcase
		end
	end
	
	always @(posedge clk) begin
		if(cycle != 0) begin
			cycle = cycle - 1;
			busy = 1;
			
			if(cycle == 0) begin
				case(last_ctr)
					3'd0:begin
						{HI , LO} = $signed(C_mem) * $signed(D_mem);
					end
					
					3'd1: begin
						HI = $signed(C_mem) % $signed(D_mem);
						LO = $signed(C_mem) / $signed(D_mem);
					end
					
					3'd2: begin
						{HI , LO} = C_mem * D_mem;
					end
					
					3'd3: begin
						HI = C_mem % D_mem;
						LO = C_mem / D_mem;
					end
				endcase
				
				busy = 0;
			end
		end
	end
	
	always @(posedge clk) begin
		if(mult_write == 1)
			HI = C;
		else if(mult_write == 2)
			LO = C;
	end
endmodule	

/*
	always @(posedge clk) begin
		if(start == 1) begin
			case(mult_ctr)
				3'd0:begin
					cycle = 5;
					{HI , LO} = $signed(C) * $signed(D);
				end
				
				3'd1: begin
					cycle = 10;
					HI = $signed(C) % $signed(D);
					LO = $signed(C) / $signed(D);
				end
				
				3'd2: begin
					cycle = 5;
					{HI , LO} = C * D;
				end
				
				3'd3: begin
					cycle = 10;
					HI = C % D;
					LO = C / D;
				end
			endcase
		end
	end
	
	always @(posedge clk) begin
		if(cycle != 0) begin
			cycle = cycle - 1;
			busy = 1;
		end
		
		else begin
			busy = 0;
		end
	end
	
	*/
	
	/*
	always @(posedge start) begin
		case(mult_ctr)
			3'd0:begin
				cycle = 5;
				{HI , LO} = $signed(C) * $signed(D);
			end
			
			3'd1: begin
				cycle = 10;
				HI = $signed(C) % $signed(D);
				LO = $signed(C) / $signed(D);
			end
			
			3'd2: begin
				cycle = 5;
				{HI , LO} = C * D;
			end
			
			3'd3: begin
				cycle = 10;
				HI = C % D;
				LO = C / D;
			end
		endcase
	end
	
	always @(posedge clk) begin
		if(cycle != 0) begin
			cycle = cycle - 1;
			busy = 1;
		end
		
		else begin
			busy = 0;
		end
	end
	*/



