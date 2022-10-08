`timescale 1ns / 1ps

module Digit_select_decoder(
    input [1:0] i_digit_select,
    input i_enable,
    output [3:0] o_digit
    );
    reg [3:0] r_digit;
    assign o_digit = r_digit;

    always @(i_digit_select, i_enable) begin
        if (i_enable) begin
            r_digit = 4'hf;
        end
        else begin
        case (i_digit_select)
            2'b00 : r_digit = 4'b1110;
            2'b01 : r_digit = 4'b1101;
            2'b10 : r_digit = 4'b1011;
            2'b11 : r_digit = 4'b0111;
        endcase
        end
    end
endmodule