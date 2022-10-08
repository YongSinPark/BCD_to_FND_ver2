`timescale 1ns / 1ps

module BCD_to_FND(
    input [2:0] i_digit_select,
    input i_enable,
    input [3:0] i_value,
    output [3:0] o_digit,
    output [7:0] o_fnd_font
    );

    Digit_select_decoder Digit_select_decoder(
        .i_digit_select(i_digit_select),
        .i_enable(i_enable),
        .o_digit(o_digit)
    );

    BCD_to_FND_decoder BCD_to_FND_decoder(
        .i_value(i_value),
        .i_enable(i_enable),
        .o_fnd_font(o_fnd_font)
    );

endmodule