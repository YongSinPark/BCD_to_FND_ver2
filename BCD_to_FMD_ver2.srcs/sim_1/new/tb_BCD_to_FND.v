`timescale 1ns / 1ps

module tb_BCD_to_FND();
    reg [2:0] i_digit_select;
    reg i_enable;
    reg [3:0] i_value;
    wire [3:0] o_digit;
    wire [7:0] o_fnd_font;

    BCD_to_FND dut(
        .i_digit_select(i_digit_select),
        .i_enable(i_enable),
        .i_value(i_value),
        .o_digit(o_digit),
        .o_fnd_font(o_fnd_font)
    );


    initial begin
        #00 i_enable = 1'b0; i_value = 4'h9; i_digit_select = 2'b01;
        #10 i_enable = 1'b1; i_value = 4'h7; i_digit_select = 2'b10;
        #10 i_enable = 1'b0; i_value = 4'h6; i_digit_select = 2'b11;

        #10 $finish;
    end

endmodule

