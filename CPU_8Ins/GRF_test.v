`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:24:01 12/03/2017
// Design Name:   GRF
// Module Name:   C:/Users/yang/Desktop/ForJiZu/CPU_8Ins/GRF_test.v
// Project Name:  CPU_8Ins
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: GRF
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module GRF_test;

	// Inputs
	reg [4:0] Rs;
	reg [4:0] Rt;
	reg [4:0] Rd;
	reg [31:0] Input;
	reg RegDst;
	reg WriteEn;
	reg JL;
	reg Reset;
	reg clk;

	// Outputs
	wire [31:0] RsData;
	wire [31:0] RtData;

	// Instantiate the Unit Under Test (UUT)
	GRF uut (
		.Rs(Rs), 
		.Rt(Rt), 
		.Rd(Rd), 
		.Input(Input), 
		.RegDst(RegDst), 
		.WriteEn(WriteEn), 
		.JL(JL), 
		.Reset(Reset), 
		.clk(clk), 
		.RsData(RsData), 
		.RtData(RtData)
	);

	initial begin
		// Initialize Inputs
		Rs = 0;
		Rt = 0;
		Rd = 0;
		Input = 0;
		RegDst = 0;
		WriteEn = 0;
		JL = 0;
		Reset = 0;
		clk = 0;

		// Wait 100 ns for global reset to finish
        
		// Add stimulus here

	end
	
	always #10 begin
		clk = ~clk;
		Input = Input + 1;
	end
	
	always #20 begin
		Rs = Rs + 1;
		Rt = Rt - 1;
	end
	
	always #200 begin
		JL = ~JL;
	end
	
	always #400 begin
		Reset = ~Reset;
	end
	
	always #100 begin
		WriteEn = ~WriteEn;
	end
	
      
endmodule

