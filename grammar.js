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
        name: "asm_intel",

        rules: {
            program: $ => separated('\n', $._statement),

            _statement: $ => choice(
                $.comment,
                $.instruction,
            ),

            comment: $ => seq("#", /.*/),

            instruction: $ => seq($.mnemonic, separated(",", $._operand)),

            mnemonic: $ => /\w+/,

            _operand: $ => choice(
                $.register,
                $.pointer,
                $._constant,
            ),

            pointer: $ => seq(
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
                "PTR",
                $._deregister,
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
            _deregister: $ => seq(
                "[",
                seq(choice($.register, $.memory), repeat(seq(choice("-", "+", "*"), $.integer))),
                "]",
            ),

            memory: $ => /[0-9]x[0-9]+/,  // TODO: Make this real, later

            // TODO: registers may start with numbers. But so far I can't think
            // of any which do. Possibly change in the future, later
            //
            register: $ => /[^0-9]\w+/,

            _constant: $ => choice(
                $.float,
                $.integer,
            ),
            float: $ => choice(
                // A float has to be at least ``5.`` or ``.5``
                //
                /-?\d*\.\d+(e[-+]?\d+(\.\d*)?)?/,
                /-?\d+\.(\d+)?(e[-+]?\d+(\.\d*)?)?/,
            ),
            integer: $ => "16",
            // integer: $ => /-?([0-9][0-9_]*|0x[0-9A-Fa-f][0-9A-Fa-f_]*)/,
        }
    }
)


function separated(separator, rule) {
    return optional(seq(rule, repeat(seq(separator, rule)), optional(separator)))
}
