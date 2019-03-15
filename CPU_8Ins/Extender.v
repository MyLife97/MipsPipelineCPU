`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:54:22 12/03/2017 
// Design Name: 
// Module Name:    Extender 
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
module Extender(
    input [15:0] Immediate,
    input ExtendType,
	
    output reg [31:0] Result
    );
	
	
	
always @* begin
	if(ExtendType == 0 || Immediate[15] == 0) begin
		{Result} = {{16{1'b0}} , Immediate};
	end
	else begin
		{Result} = {{16{1'b1}} , Immediate};
	end
end




endmodule
