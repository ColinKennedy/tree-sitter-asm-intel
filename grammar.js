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

        conflicts: $ => [ [$.instruction] ],

        rules: {
            module: $ => repeat($._statement),

            _statement: $ => choice(
                $.comment,
                $.instruction,
            ),

            comment: $ => seq("#", /.*/),

            instruction: $ => seq($.mnemonic, comma_separated($._operand)),

            mnemonic: $ => /\w+/,

            _operand: $ => choice(
                $.register,
                $._constant,
            ),

            register: $ => /\w+/,

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
            integer: $ => prec(2, /-?([0-9][0-9_]*|0x[0-9A-Fa-f][0-9A-Fa-f_]*)/),
        }
    }
)

function comma_separated(rule) {
  return optional(seq(rule, repeat(seq(",", rule))));
}

