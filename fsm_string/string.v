`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:43:01 11/08/2017 
// Design Name: 
// Module Name:    string 
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
`define state0 0
`define state1 1
`define state2 2
`define state3 3



module string(
    input clk,
    input clr,
    input [7:0] in,
    output out
    );

	reg [1:0] state;
	reg result;
	
	initial begin
		state = 0;
		result = 0;
	end

	assign out = result;

	always @(posedge clr , posedge clk) begin
		if(clr == 1) begin
			state = 0;
			result = 0;
		end
		
		else begin
			case(state)
				`state0:
					if(in >= "0" && in <= "9") begin
						state = 1;
					end
					
					else begin
						state = 3;
					end
						
					
				`state1:
					if(in == "+" || in == "*") begin
						state = 2;
					end
					
					else begin
						state = 3;
					end
				
				`state2:
					if(in >= "0" && in <= "9") begin
						state = 1;
					end
					
					else begin
						state = 3;
					end
				
				`state3:;
				
			endcase
			
			case(state)
				`state0:
					result = 0;
				`state1:
					result = 1;
				`state2:
					result = 0;
				`state3:
					result = 0;
			endcase
		end
	end

endmodule
