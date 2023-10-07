// Copyright (C) 2023 Colin Kennedy
// This file is part of tree-sitter-asm-intel <https://github.com/ColinKennedy/tree-sitter-asm-intel>.
//
// tree-sitter-asm-intel is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// tree-sitter-asm-intel is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with tree-sitter-asm-intel, see <http://www.gnu.org/licenses/>.


module.exports = grammar(
    {
        name: "asm",

        extras: $ => [
            $.comment,
            /[\s\f\uFEFF\u2060\u200B]|\\\r?\n/,
        ],

        rules: {
            program: $ => separated('\n', $._statement),

            _statement: $ => choice(
                $.comment,
                $.label,
                seq(optional($.label), alias($.call_instruction, $.instruction)),
                seq(optional($.label), $.instruction),
                $._macro,
            ),

            comment: $ => /(\/\/|#|;).*/,

            segment_prefix: $ => seq($.segment, ":"),
            segment: $ => choice("cs", "ds", "es", "fs", "gs", "ss"),  // TODO: Make this more generic, later

            label: $ => /[\w\-\.]+:/,

            call_instruction: $ => seq(
                alias("call", $.mnemonic),
                alias($._any_text, $.identifier),
            ),

            _any_text: $ => /[^\n]+/,

            instruction: $ => choice(
                $._normal_instruction,
                $._gcc_pseudo_op,
            ),

            _normal_instruction: $ => seq(
                $.mnemonic,
                repeat(seq(optional(","), $._operand)),
            ),

            _gcc_pseudo_op: $ => seq(
                alias($.gcc_mnemonic, $.gcc_directive),
                separated_space_or_comma(
                    choice(
                        $._constant,
                        $.identifier,
                    )
                )
            ),

            _macro: $ => seq(
                $.nasm_macro,
                repeat(choice($._operand, $.operator)),
            ),

            operator: $ => choice(
                "!=",
                "*",
                "+",
                "-",
                "/",
                "<=",
                "==",
                ">=",
            ),

            nasm_macro: $ => seq(/%+/, $._identifier),

            gcc_mnemonic: $ => /\.[\-_\w]+/,  // Reference: https://sourceware.org/binutils/docs/as/Pseudo-Ops.html
            directive: $ => $.identifier,

            mnemonic: $ => /\w+/,

            _operand: $ => seq(
                optional($.width),
                choice(
                    $.pointer,
                    $.register,
                    $._constant,
                    $.identifier,
                ),
            ),

            width: $ => seq(
                choice(
                    "BYTE",
                    "DWORD",
                    "QWORD",
                    "WORD",
                    "byte",
                    "dword",
                    "qword",
                    "word",
                ),
                optional(choice("PTR", "ptr")),
            ),

            // Assembly deregisters can take the form:
            //
            // - SIZE PTR [base]
            // - SIZE PTR [base + index]
            // - SIZE PTR [base + index * scale]
            // - SIZE PTR [base + index * scale + displacement]
            //
            // This accounts for all of these
            //
            pointer: $ => prec(
                2,
                seq(
                    optional($.integer),  // Some conventions do `DWORD PTR -8[rbp]`
                    "[",
                    optional($.segment_prefix),
                    choice(
                        seq(
                            choice($.register, $.hexadecimal, $.integer),
                            repeat(
                                seq(
                                    choice("-", "+", "*"),
                                    choice($.integer, $.hexadecimal)
                                )
                            ),
                        ),
                    ),
                    "]",
                ),
            ),

            // Reference: https://github.com/bearcove/tree-sitter-x86asm/blob/9b0fab1092a2fe01e285ea4c892faa08b43cf125/grammar.js#L168-L169
            hexadecimal: $ => choice(
                /[0-9a-fA-F]{3,}h/,
                /\$0[0-9a-fA-F]{2,}/,
                /0[xh][0-9a-fA-F]+/
            ),

            // Reference: https://github.com/bearcove/tree-sitter-x86asm/blob/9b0fab1092a2fe01e285ea4c892faa08b43cf125/grammar.js#L173
            binary: $ => choice(/[01_]+[by]/, /0[by][01_]+/),

            // Reference: https://github.com/bearcove/tree-sitter-x86asm/blob/9b0fab1092a2fe01e285ea4c892faa08b43cf125/grammar.js#L171C1-L171C64
            octal: $ => choice(/[0-7]+[qo]/, /0[oq][0-7]+/),

            // TODO: I can't remember if registers can start with a number. But
            // so far I can't think of any which do. Possibly remove the
            // `[a-zA-Z]` in the future, later
            //
            register: $ => choice(
                /[abcd][lh]/,
                /[er]?[abcd]x/,
                /[er]?[ds]i/,
                /[er]?[sb]p/,
                /r(8|9|10|11|12|13|14|15)/,
                /[xy]mm[0-7]/,
                "rip",
            ),

            _constant: $ => choice(
                $.binary,
                $.float,
                $.hexadecimal,
                $.integer,
                $.octal,
                $.string,
            ),
            float: $ => choice(
                // A float has to be at least ``5.`` or ``.5``
                /-?\d*\.\d+(e[-+]?\d+(\.\d*)?)?/,
                /-?\d+\.(\d+)?(e[-+]?\d+(\.\d*)?)?/,
            ),

            integer: $ => /-?([0-9]+d|0d[0-9]+|[0-9]+)/,  // TODO: Check if this can be simplified

            string: $ => choice(/"[^"]*"/, /'[^']*'/),

            _identifier: $ => /[\w\.\-_\(\)<>@\$]+/,
            identifier: $ => $._identifier,
        }
    }
)


function separated_space_or_comma(rule) {
    separator = choice(",", " ")

    return optional(seq(rule, repeat(seq(separator, rule)), optional(separator)))
}

function separated(separator, rule) {
    return optional(seq(rule, repeat(seq(separator, rule)), optional(separator)))
}
