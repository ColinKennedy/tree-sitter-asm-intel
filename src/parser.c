#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 75
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 55
#define ALIAS_COUNT 0
#define TOKEN_COUNT 36
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LF = 1,
  sym_comment = 2,
  anon_sym_COMMA = 3,
  anon_sym_ = 4,
  sym_label = 5,
  sym_gcc_mnemonic = 6,
  sym_mnemonic = 7,
  anon_sym_BYTE = 8,
  anon_sym_DWORD = 9,
  anon_sym_QWORD = 10,
  anon_sym_WORD = 11,
  anon_sym_byte = 12,
  anon_sym_dword = 13,
  anon_sym_qword = 14,
  anon_sym_word = 15,
  anon_sym_PTR = 16,
  anon_sym_ptr = 17,
  anon_sym_LBRACK = 18,
  anon_sym_DASH = 19,
  anon_sym_PLUS = 20,
  anon_sym_STAR = 21,
  anon_sym_RBRACK = 22,
  aux_sym_hexadecimal_token1 = 23,
  aux_sym_hexadecimal_token2 = 24,
  aux_sym_hexadecimal_token3 = 25,
  aux_sym_binary_token1 = 26,
  aux_sym_binary_token2 = 27,
  aux_sym_octal_token1 = 28,
  aux_sym_octal_token2 = 29,
  sym_register = 30,
  aux_sym_float_token1 = 31,
  aux_sym_float_token2 = 32,
  sym_integer = 33,
  sym_string = 34,
  sym_identifier = 35,
  sym_program = 36,
  sym__statement = 37,
  sym_instruction = 38,
  sym__normal_instruction = 39,
  sym__gcc_pseudo_op = 40,
  sym__operand = 41,
  sym_pointer = 42,
  sym_pointer_width = 43,
  sym__deregister = 44,
  sym_hexadecimal = 45,
  sym_binary = 46,
  sym_octal = 47,
  sym__constant = 48,
  sym_float = 49,
  aux_sym_program_repeat1 = 50,
  aux_sym__normal_instruction_repeat1 = 51,
  aux_sym__normal_instruction_repeat2 = 52,
  aux_sym__gcc_pseudo_op_repeat1 = 53,
  aux_sym__deregister_repeat1 = 54,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [sym_comment] = "comment",
  [anon_sym_COMMA] = ",",
  [anon_sym_] = " ",
  [sym_label] = "label",
  [sym_gcc_mnemonic] = "mnemonic",
  [sym_mnemonic] = "mnemonic",
  [anon_sym_BYTE] = "BYTE",
  [anon_sym_DWORD] = "DWORD",
  [anon_sym_QWORD] = "QWORD",
  [anon_sym_WORD] = "WORD",
  [anon_sym_byte] = "byte",
  [anon_sym_dword] = "dword",
  [anon_sym_qword] = "qword",
  [anon_sym_word] = "word",
  [anon_sym_PTR] = "PTR",
  [anon_sym_ptr] = "ptr",
  [anon_sym_LBRACK] = "[",
  [anon_sym_DASH] = "-",
  [anon_sym_PLUS] = "+",
  [anon_sym_STAR] = "*",
  [anon_sym_RBRACK] = "]",
  [aux_sym_hexadecimal_token1] = "hexadecimal_token1",
  [aux_sym_hexadecimal_token2] = "hexadecimal_token2",
  [aux_sym_hexadecimal_token3] = "hexadecimal_token3",
  [aux_sym_binary_token1] = "binary_token1",
  [aux_sym_binary_token2] = "binary_token2",
  [aux_sym_octal_token1] = "octal_token1",
  [aux_sym_octal_token2] = "octal_token2",
  [sym_register] = "register",
  [aux_sym_float_token1] = "float_token1",
  [aux_sym_float_token2] = "float_token2",
  [sym_integer] = "integer",
  [sym_string] = "string",
  [sym_identifier] = "identifier",
  [sym_program] = "program",
  [sym__statement] = "_statement",
  [sym_instruction] = "instruction",
  [sym__normal_instruction] = "_normal_instruction",
  [sym__gcc_pseudo_op] = "_gcc_pseudo_op",
  [sym__operand] = "_operand",
  [sym_pointer] = "pointer",
  [sym_pointer_width] = "pointer_width",
  [sym__deregister] = "_deregister",
  [sym_hexadecimal] = "hexadecimal",
  [sym_binary] = "binary",
  [sym_octal] = "octal",
  [sym__constant] = "_constant",
  [sym_float] = "float",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym__normal_instruction_repeat1] = "_normal_instruction_repeat1",
  [aux_sym__normal_instruction_repeat2] = "_normal_instruction_repeat2",
  [aux_sym__gcc_pseudo_op_repeat1] = "_gcc_pseudo_op_repeat1",
  [aux_sym__deregister_repeat1] = "_deregister_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [sym_comment] = sym_comment,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_] = anon_sym_,
  [sym_label] = sym_label,
  [sym_gcc_mnemonic] = sym_mnemonic,
  [sym_mnemonic] = sym_mnemonic,
  [anon_sym_BYTE] = anon_sym_BYTE,
  [anon_sym_DWORD] = anon_sym_DWORD,
  [anon_sym_QWORD] = anon_sym_QWORD,
  [anon_sym_WORD] = anon_sym_WORD,
  [anon_sym_byte] = anon_sym_byte,
  [anon_sym_dword] = anon_sym_dword,
  [anon_sym_qword] = anon_sym_qword,
  [anon_sym_word] = anon_sym_word,
  [anon_sym_PTR] = anon_sym_PTR,
  [anon_sym_ptr] = anon_sym_ptr,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [aux_sym_hexadecimal_token1] = aux_sym_hexadecimal_token1,
  [aux_sym_hexadecimal_token2] = aux_sym_hexadecimal_token2,
  [aux_sym_hexadecimal_token3] = aux_sym_hexadecimal_token3,
  [aux_sym_binary_token1] = aux_sym_binary_token1,
  [aux_sym_binary_token2] = aux_sym_binary_token2,
  [aux_sym_octal_token1] = aux_sym_octal_token1,
  [aux_sym_octal_token2] = aux_sym_octal_token2,
  [sym_register] = sym_register,
  [aux_sym_float_token1] = aux_sym_float_token1,
  [aux_sym_float_token2] = aux_sym_float_token2,
  [sym_integer] = sym_integer,
  [sym_string] = sym_string,
  [sym_identifier] = sym_identifier,
  [sym_program] = sym_program,
  [sym__statement] = sym__statement,
  [sym_instruction] = sym_instruction,
  [sym__normal_instruction] = sym__normal_instruction,
  [sym__gcc_pseudo_op] = sym__gcc_pseudo_op,
  [sym__operand] = sym__operand,
  [sym_pointer] = sym_pointer,
  [sym_pointer_width] = sym_pointer_width,
  [sym__deregister] = sym__deregister,
  [sym_hexadecimal] = sym_hexadecimal,
  [sym_binary] = sym_binary,
  [sym_octal] = sym_octal,
  [sym__constant] = sym__constant,
  [sym_float] = sym_float,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym__normal_instruction_repeat1] = aux_sym__normal_instruction_repeat1,
  [aux_sym__normal_instruction_repeat2] = aux_sym__normal_instruction_repeat2,
  [aux_sym__gcc_pseudo_op_repeat1] = aux_sym__gcc_pseudo_op_repeat1,
  [aux_sym__deregister_repeat1] = aux_sym__deregister_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_gcc_mnemonic] = {
    .visible = true,
    .named = true,
  },
  [sym_mnemonic] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BYTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DWORD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QWORD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_WORD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_byte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dword] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_qword] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_word] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PTR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ptr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_hexadecimal_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_hexadecimal_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_hexadecimal_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_binary_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_binary_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_octal_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_octal_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_register] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_float_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_float_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym__normal_instruction] = {
    .visible = false,
    .named = true,
  },
  [sym__gcc_pseudo_op] = {
    .visible = false,
    .named = true,
  },
  [sym__operand] = {
    .visible = false,
    .named = true,
  },
  [sym_pointer] = {
    .visible = true,
    .named = true,
  },
  [sym_pointer_width] = {
    .visible = true,
    .named = true,
  },
  [sym__deregister] = {
    .visible = false,
    .named = true,
  },
  [sym_hexadecimal] = {
    .visible = true,
    .named = true,
  },
  [sym_binary] = {
    .visible = true,
    .named = true,
  },
  [sym_octal] = {
    .visible = true,
    .named = true,
  },
  [sym__constant] = {
    .visible = false,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__normal_instruction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__normal_instruction_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__gcc_pseudo_op_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__deregister_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 18,
  [25] = 25,
  [26] = 20,
  [27] = 27,
  [28] = 28,
  [29] = 27,
  [30] = 30,
  [31] = 28,
  [32] = 25,
  [33] = 22,
  [34] = 34,
  [35] = 19,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 37,
  [49] = 49,
  [50] = 50,
  [51] = 43,
  [52] = 36,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 47,
  [58] = 45,
  [59] = 59,
  [60] = 60,
  [61] = 42,
  [62] = 60,
  [63] = 38,
  [64] = 50,
  [65] = 41,
  [66] = 37,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 73,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < '<'
    ? (c < '-'
      ? (c < '('
        ? c == '$'
        : c <= ')')
      : (c <= '.' || (c >= '0' && c <= '9')))
    : (c <= '<' || (c < '_'
      ? (c < '@'
        ? c == '>'
        : c <= 'Z')
      : (c <= '_' || (c >= 'a' && c <= 'z')))));
}

static inline bool sym_identifier_character_set_2(int32_t c) {
  return (c < '<'
    ? (c < '-'
      ? (c < '('
        ? c == '$'
        : c <= ')')
      : (c <= '.' || (c >= '8' && c <= '9')))
    : (c <= '<' || (c < '_'
      ? (c < '@'
        ? c == '>'
        : c <= 'Z')
      : (c <= '_' || (c >= 'a' && c <= 'z')))));
}

static inline bool sym_identifier_character_set_3(int32_t c) {
  return (c < '<'
    ? (c < '-'
      ? (c < '('
        ? c == '$'
        : c <= ')')
      : (c <= '.' || (c >= '1' && c <= '9')))
    : (c <= '<' || (c < '_'
      ? (c < '@'
        ? c == '>'
        : c <= 'Z')
      : (c <= '_' || (c >= 'a' && c <= 'z')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(70);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(74);
      if (lookahead == '$') ADVANCE(10);
      if (lookahead == '*') ADVANCE(102);
      if (lookahead == '+') ADVANCE(101);
      if (lookahead == ',') ADVANCE(75);
      if (lookahead == '-') ADVANCE(100);
      if (lookahead == '.') ADVANCE(65);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '0') ADVANCE(29);
      if (lookahead == '1') ADVANCE(30);
      if (lookahead == 'B') ADVANCE(28);
      if (lookahead == 'D') ADVANCE(26);
      if (lookahead == 'P') ADVANCE(24);
      if (lookahead == 'Q') ADVANCE(27);
      if (lookahead == 'W') ADVANCE(17);
      if (lookahead == '[') ADVANCE(99);
      if (lookahead == ']') ADVANCE(103);
      if (lookahead == '_') ADVANCE(52);
      if (lookahead == 'b') ADVANCE(51);
      if (lookahead == 'd') ADVANCE(49);
      if (lookahead == 'p') ADVANCE(47);
      if (lookahead == 'q') ADVANCE(50);
      if (lookahead == 'w') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(55);
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(62);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(73);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == ':') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(73);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '$') ADVANCE(204);
      if (lookahead == '-') ADVANCE(203);
      if (lookahead == '.') ADVANCE(217);
      if (lookahead == '0') ADVANCE(169);
      if (lookahead == '1') ADVANCE(170);
      if (lookahead == 'B') ADVANCE(208);
      if (lookahead == 'D') ADVANCE(206);
      if (lookahead == 'Q') ADVANCE(207);
      if (lookahead == 'W') ADVANCE(205);
      if (lookahead == '[') ADVANCE(99);
      if (lookahead == '_') ADVANCE(214);
      if (lookahead == 'b') ADVANCE(213);
      if (lookahead == 'd') ADVANCE(211);
      if (lookahead == 'q') ADVANCE(212);
      if (lookahead == 'w') ADVANCE(210);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(175);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(225);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(174);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(215);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '$') ADVANCE(204);
      if (lookahead == '-') ADVANCE(203);
      if (lookahead == '.') ADVANCE(217);
      if (lookahead == '0') ADVANCE(169);
      if (lookahead == '1') ADVANCE(170);
      if (lookahead == '_') ADVANCE(214);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(175);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(174);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(223);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(200);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '$') ADVANCE(10);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '0') ADVANCE(183);
      if (lookahead == '[') ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(184);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(61);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(74);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(73);
      if (lookahead == ':') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 9:
      if (lookahead == '0') ADVANCE(185);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(187);
      END_STATE();
    case 10:
      if (lookahead == '0') ADVANCE(63);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(77);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == 'D') ADVANCE(87);
      END_STATE();
    case 14:
      if (lookahead == 'D') ADVANCE(83);
      END_STATE();
    case 15:
      if (lookahead == 'D') ADVANCE(85);
      END_STATE();
    case 16:
      if (lookahead == 'E') ADVANCE(81);
      END_STATE();
    case 17:
      if (lookahead == 'O') ADVANCE(21);
      END_STATE();
    case 18:
      if (lookahead == 'O') ADVANCE(22);
      END_STATE();
    case 19:
      if (lookahead == 'O') ADVANCE(23);
      END_STATE();
    case 20:
      if (lookahead == 'R') ADVANCE(97);
      END_STATE();
    case 21:
      if (lookahead == 'R') ADVANCE(13);
      END_STATE();
    case 22:
      if (lookahead == 'R') ADVANCE(14);
      END_STATE();
    case 23:
      if (lookahead == 'R') ADVANCE(15);
      END_STATE();
    case 24:
      if (lookahead == 'T') ADVANCE(20);
      END_STATE();
    case 25:
      if (lookahead == 'T') ADVANCE(16);
      END_STATE();
    case 26:
      if (lookahead == 'W') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(58);
      END_STATE();
    case 27:
      if (lookahead == 'W') ADVANCE(19);
      END_STATE();
    case 28:
      if (lookahead == 'Y') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(58);
      END_STATE();
    case 29:
      if (lookahead == '_') ADVANCE(52);
      if (lookahead == 'b') ADVANCE(113);
      if (lookahead == 'y') ADVANCE(117);
      if (lookahead == 'h' ||
          lookahead == 'x') ADVANCE(59);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(127);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(31);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(53);
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(58);
      END_STATE();
    case 30:
      if (lookahead == '_') ADVANCE(52);
      if (lookahead == 'b') ADVANCE(119);
      if (lookahead == 'y') ADVANCE(112);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(126);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(31);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(53);
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(58);
      END_STATE();
    case 31:
      if (lookahead == '_') ADVANCE(52);
      if (lookahead == 'b') ADVANCE(115);
      if (lookahead == 'y') ADVANCE(112);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(126);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(32);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(39);
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(38);
      END_STATE();
    case 32:
      if (lookahead == '_') ADVANCE(52);
      if (lookahead == 'h') ADVANCE(104);
      if (lookahead == 'b' ||
          lookahead == 'y') ADVANCE(112);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(126);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(33);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(54);
      END_STATE();
    case 33:
      if (lookahead == '_') ADVANCE(52);
      if (lookahead == 'b' ||
          lookahead == 'y') ADVANCE(112);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(126);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(33);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(54);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(95);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(91);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(93);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 38:
      if (lookahead == 'h') ADVANCE(104);
      END_STATE();
    case 39:
      if (lookahead == 'h') ADVANCE(104);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(54);
      END_STATE();
    case 40:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 41:
      if (lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 42:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 43:
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 44:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 45:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 46:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 48:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 49:
      if (lookahead == 'w') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(58);
      END_STATE();
    case 50:
      if (lookahead == 'w') ADVANCE(42);
      END_STATE();
    case 51:
      if (lookahead == 'y') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(58);
      END_STATE();
    case 52:
      if (lookahead == 'b' ||
          lookahead == 'y') ADVANCE(112);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(52);
      END_STATE();
    case 53:
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(39);
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(38);
      END_STATE();
    case 54:
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(54);
      END_STATE();
    case 55:
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(53);
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(58);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(38);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(110);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(108);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(156);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(58);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 65:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 66:
      if (eof) ADVANCE(70);
      if (lookahead == '\n') SKIP(66)
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(73);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 67:
      if (eof) ADVANCE(70);
      if (lookahead == '\n') ADVANCE(71);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '$') ADVANCE(204);
      if (lookahead == ',') ADVANCE(75);
      if (lookahead == '-') ADVANCE(203);
      if (lookahead == '.') ADVANCE(217);
      if (lookahead == '0') ADVANCE(169);
      if (lookahead == '1') ADVANCE(170);
      if (lookahead == 'B') ADVANCE(208);
      if (lookahead == 'D') ADVANCE(206);
      if (lookahead == 'Q') ADVANCE(207);
      if (lookahead == 'W') ADVANCE(205);
      if (lookahead == '[') ADVANCE(99);
      if (lookahead == '_') ADVANCE(214);
      if (lookahead == 'b') ADVANCE(213);
      if (lookahead == 'd') ADVANCE(211);
      if (lookahead == 'q') ADVANCE(212);
      if (lookahead == 'w') ADVANCE(210);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(175);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(67)
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(225);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(174);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(215);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 68:
      if (eof) ADVANCE(70);
      if (lookahead == '\n') ADVANCE(71);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '$') ADVANCE(204);
      if (lookahead == '-') ADVANCE(203);
      if (lookahead == '.') ADVANCE(217);
      if (lookahead == '0') ADVANCE(169);
      if (lookahead == '1') ADVANCE(170);
      if (lookahead == '_') ADVANCE(214);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(175);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(68)
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(174);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(223);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 69:
      if (eof) ADVANCE(70);
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == ' ') ADVANCE(76);
      if (lookahead == ',') ADVANCE(75);
      if (lookahead == '[') ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(69)
      END_STATE();
    case 70:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == ' ') ADVANCE(76);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == ':') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == ' ') ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == ':') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_gcc_mnemonic);
      if (lookahead == ':') ADVANCE(77);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_gcc_mnemonic);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_mnemonic);
      if (lookahead == ':') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_BYTE);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_BYTE);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_DWORD);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_DWORD);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_QWORD);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_QWORD);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_WORD);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_WORD);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_byte);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_byte);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_dword);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_dword);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_qword);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_qword);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_word);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_word);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_PTR);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_ptr);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_hexadecimal_token1);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_hexadecimal_token1);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_hexadecimal_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_hexadecimal_token1);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(225);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_hexadecimal_token2);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_hexadecimal_token2);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(225);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_hexadecimal_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_hexadecimal_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(111);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (lookahead == '_') ADVANCE(124);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(122);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(38);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (lookahead == '_') ADVANCE(125);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(123);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(209);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (lookahead == 'h') ADVANCE(104);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (lookahead == 'h') ADVANCE(107);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(225);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(124);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(125);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('2' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(38);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(209);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(225);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_binary_token2);
      if (lookahead == 'h') ADVANCE(104);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(124);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_binary_token2);
      if (lookahead == 'h') ADVANCE(107);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(125);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('2' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_binary_token2);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_binary_token2);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(125);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('2' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_octal_token1);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_octal_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(130);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_octal_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(131);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(225);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_octal_token1);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(225);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_octal_token2);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_octal_token2);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(131);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(225);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'D') ADVANCE(88);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'D') ADVANCE(84);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'D') ADVANCE(86);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'E') ADVANCE(82);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'O') ADVANCE(139);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'O') ADVANCE(140);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'R') ADVANCE(132);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'R') ADVANCE(133);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'R') ADVANCE(134);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'T') ADVANCE(135);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'd') ADVANCE(96);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'd') ADVANCE(92);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'd') ADVANCE(94);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'e') ADVANCE(90);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'h') ADVANCE(105);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'h') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'o') ADVANCE(151);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'o') ADVANCE(152);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'r') ADVANCE(142);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'r') ADVANCE(143);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'r') ADVANCE(144);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 't') ADVANCE(145);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(146);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(147);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == '.') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == '.') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == 'e') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == '.') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == '.') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == 'e') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_integer);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(165);
      if (lookahead == '_') ADVANCE(214);
      if (lookahead == 'b') ADVANCE(114);
      if (lookahead == 'd') ADVANCE(194);
      if (lookahead == 'y') ADVANCE(118);
      if (lookahead == 'h' ||
          lookahead == 'x') ADVANCE(221);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(128);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(171);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(182);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(220);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(165);
      if (lookahead == '_') ADVANCE(214);
      if (lookahead == 'b') ADVANCE(120);
      if (lookahead == 'd') ADVANCE(198);
      if (lookahead == 'y') ADVANCE(121);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(129);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(171);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(182);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(220);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(165);
      if (lookahead == '_') ADVANCE(214);
      if (lookahead == 'b') ADVANCE(116);
      if (lookahead == 'd') ADVANCE(192);
      if (lookahead == 'y') ADVANCE(121);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(129);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(172);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(178);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(177);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(209);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(165);
      if (lookahead == '_') ADVANCE(214);
      if (lookahead == 'd') ADVANCE(199);
      if (lookahead == 'h') ADVANCE(107);
      if (lookahead == 'b' ||
          lookahead == 'y') ADVANCE(121);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(129);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(173);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(180);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(179);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(165);
      if (lookahead == '_') ADVANCE(214);
      if (lookahead == 'd') ADVANCE(199);
      if (lookahead == 'b' ||
          lookahead == 'y') ADVANCE(121);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(129);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(173);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(180);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(179);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(165);
      if (lookahead == 'd') ADVANCE(198);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(129);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(220);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(165);
      if (lookahead == 'd') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(220);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(165);
      if (lookahead == 'd') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(180);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(165);
      if (lookahead == 'd') ADVANCE(199);
      if (lookahead == 'h') ADVANCE(107);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(129);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(179);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(165);
      if (lookahead == 'd') ADVANCE(199);
      if (lookahead == 'h') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(180);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(165);
      if (lookahead == 'd') ADVANCE(199);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(129);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(179);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(165);
      if (lookahead == 'd') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(180);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(165);
      if (lookahead == 'd') ADVANCE(192);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(129);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(177);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(209);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(165);
      if (lookahead == 'd') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(209);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'd') ADVANCE(196);
      if (lookahead == 'h' ||
          lookahead == 'x') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(58);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'd') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(58);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'd') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(187);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'd') ADVANCE(168);
      if (lookahead == 'h') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(187);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'd') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(187);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'd') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(38);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'h') ADVANCE(104);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'h') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(195);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'h') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'h') ADVANCE(107);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(225);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(209);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(195);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(38);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(38);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(209);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_integer);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(225);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+') ADVANCE(56);
      if (lookahead == '-') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+') ADVANCE(57);
      if (lookahead == '-') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(217);
      if (lookahead == '0') ADVANCE(176);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(180);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '0') ADVANCE(224);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(225);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(138);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'W') ADVANCE(136);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(154);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'W') ADVANCE(137);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Y') ADVANCE(141);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(154);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(107);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(225);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(150);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(148);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(154);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(149);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(153);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(154);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b' ||
          lookahead == 'y') ADVANCE(121);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(214);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('2' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(154);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(209);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(111);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(220);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(222);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(225);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 66},
  [2] = {.lex_state = 67},
  [3] = {.lex_state = 67},
  [4] = {.lex_state = 67},
  [5] = {.lex_state = 67},
  [6] = {.lex_state = 67},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 68},
  [10] = {.lex_state = 68},
  [11] = {.lex_state = 68},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 66},
  [14] = {.lex_state = 66},
  [15] = {.lex_state = 66},
  [16] = {.lex_state = 69},
  [17] = {.lex_state = 69},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 69},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 69},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 69},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 69},
  [35] = {.lex_state = 67},
  [36] = {.lex_state = 69},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 69},
  [39] = {.lex_state = 69},
  [40] = {.lex_state = 67},
  [41] = {.lex_state = 69},
  [42] = {.lex_state = 69},
  [43] = {.lex_state = 69},
  [44] = {.lex_state = 67},
  [45] = {.lex_state = 69},
  [46] = {.lex_state = 69},
  [47] = {.lex_state = 69},
  [48] = {.lex_state = 69},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 69},
  [51] = {.lex_state = 67},
  [52] = {.lex_state = 67},
  [53] = {.lex_state = 67},
  [54] = {.lex_state = 67},
  [55] = {.lex_state = 69},
  [56] = {.lex_state = 67},
  [57] = {.lex_state = 67},
  [58] = {.lex_state = 67},
  [59] = {.lex_state = 67},
  [60] = {.lex_state = 6},
  [61] = {.lex_state = 67},
  [62] = {.lex_state = 6},
  [63] = {.lex_state = 67},
  [64] = {.lex_state = 67},
  [65] = {.lex_state = 67},
  [66] = {.lex_state = 67},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 67},
  [69] = {.lex_state = 6},
  [70] = {.lex_state = 67},
  [71] = {.lex_state = 6},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_gcc_mnemonic] = ACTIONS(1),
    [anon_sym_BYTE] = ACTIONS(1),
    [anon_sym_DWORD] = ACTIONS(1),
    [anon_sym_QWORD] = ACTIONS(1),
    [anon_sym_WORD] = ACTIONS(1),
    [anon_sym_byte] = ACTIONS(1),
    [anon_sym_dword] = ACTIONS(1),
    [anon_sym_qword] = ACTIONS(1),
    [anon_sym_word] = ACTIONS(1),
    [anon_sym_PTR] = ACTIONS(1),
    [anon_sym_ptr] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [aux_sym_hexadecimal_token1] = ACTIONS(1),
    [aux_sym_hexadecimal_token2] = ACTIONS(1),
    [aux_sym_hexadecimal_token3] = ACTIONS(1),
    [aux_sym_binary_token1] = ACTIONS(1),
    [aux_sym_binary_token2] = ACTIONS(1),
    [aux_sym_octal_token1] = ACTIONS(1),
    [aux_sym_octal_token2] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(72),
    [sym__statement] = STATE(54),
    [sym_instruction] = STATE(54),
    [sym__normal_instruction] = STATE(70),
    [sym__gcc_pseudo_op] = STATE(70),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_label] = ACTIONS(7),
    [sym_gcc_mnemonic] = ACTIONS(9),
    [sym_mnemonic] = ACTIONS(11),
  },
  [2] = {
    [sym__operand] = STATE(56),
    [sym_pointer] = STATE(56),
    [sym_pointer_width] = STATE(60),
    [sym__deregister] = STATE(61),
    [sym_hexadecimal] = STATE(56),
    [sym_binary] = STATE(56),
    [sym_octal] = STATE(56),
    [sym__constant] = STATE(56),
    [sym_float] = STATE(56),
    [ts_builtin_sym_end] = ACTIONS(13),
    [anon_sym_LF] = ACTIONS(13),
    [anon_sym_BYTE] = ACTIONS(15),
    [anon_sym_DWORD] = ACTIONS(15),
    [anon_sym_QWORD] = ACTIONS(15),
    [anon_sym_WORD] = ACTIONS(15),
    [anon_sym_byte] = ACTIONS(15),
    [anon_sym_dword] = ACTIONS(15),
    [anon_sym_qword] = ACTIONS(15),
    [anon_sym_word] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [aux_sym_hexadecimal_token1] = ACTIONS(19),
    [aux_sym_hexadecimal_token2] = ACTIONS(19),
    [aux_sym_hexadecimal_token3] = ACTIONS(19),
    [aux_sym_binary_token1] = ACTIONS(21),
    [aux_sym_binary_token2] = ACTIONS(21),
    [aux_sym_octal_token1] = ACTIONS(23),
    [aux_sym_octal_token2] = ACTIONS(23),
    [sym_register] = ACTIONS(25),
    [aux_sym_float_token1] = ACTIONS(27),
    [aux_sym_float_token2] = ACTIONS(27),
    [sym_integer] = ACTIONS(29),
    [sym_string] = ACTIONS(25),
    [sym_identifier] = ACTIONS(25),
  },
  [3] = {
    [sym__operand] = STATE(16),
    [sym_pointer] = STATE(16),
    [sym_pointer_width] = STATE(62),
    [sym__deregister] = STATE(42),
    [sym_hexadecimal] = STATE(16),
    [sym_binary] = STATE(16),
    [sym_octal] = STATE(16),
    [sym__constant] = STATE(16),
    [sym_float] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(31),
    [anon_sym_LF] = ACTIONS(31),
    [anon_sym_BYTE] = ACTIONS(15),
    [anon_sym_DWORD] = ACTIONS(15),
    [anon_sym_QWORD] = ACTIONS(15),
    [anon_sym_WORD] = ACTIONS(15),
    [anon_sym_byte] = ACTIONS(15),
    [anon_sym_dword] = ACTIONS(15),
    [anon_sym_qword] = ACTIONS(15),
    [anon_sym_word] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(33),
    [aux_sym_hexadecimal_token1] = ACTIONS(35),
    [aux_sym_hexadecimal_token2] = ACTIONS(35),
    [aux_sym_hexadecimal_token3] = ACTIONS(35),
    [aux_sym_binary_token1] = ACTIONS(37),
    [aux_sym_binary_token2] = ACTIONS(37),
    [aux_sym_octal_token1] = ACTIONS(39),
    [aux_sym_octal_token2] = ACTIONS(39),
    [sym_register] = ACTIONS(41),
    [aux_sym_float_token1] = ACTIONS(43),
    [aux_sym_float_token2] = ACTIONS(43),
    [sym_integer] = ACTIONS(45),
    [sym_string] = ACTIONS(41),
    [sym_identifier] = ACTIONS(41),
  },
  [4] = {
    [sym__operand] = STATE(55),
    [sym_pointer] = STATE(55),
    [sym_pointer_width] = STATE(62),
    [sym__deregister] = STATE(42),
    [sym_hexadecimal] = STATE(55),
    [sym_binary] = STATE(55),
    [sym_octal] = STATE(55),
    [sym__constant] = STATE(55),
    [sym_float] = STATE(55),
    [ts_builtin_sym_end] = ACTIONS(47),
    [anon_sym_LF] = ACTIONS(47),
    [anon_sym_BYTE] = ACTIONS(15),
    [anon_sym_DWORD] = ACTIONS(15),
    [anon_sym_QWORD] = ACTIONS(15),
    [anon_sym_WORD] = ACTIONS(15),
    [anon_sym_byte] = ACTIONS(15),
    [anon_sym_dword] = ACTIONS(15),
    [anon_sym_qword] = ACTIONS(15),
    [anon_sym_word] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(33),
    [aux_sym_hexadecimal_token1] = ACTIONS(35),
    [aux_sym_hexadecimal_token2] = ACTIONS(35),
    [aux_sym_hexadecimal_token3] = ACTIONS(35),
    [aux_sym_binary_token1] = ACTIONS(37),
    [aux_sym_binary_token2] = ACTIONS(37),
    [aux_sym_octal_token1] = ACTIONS(39),
    [aux_sym_octal_token2] = ACTIONS(39),
    [sym_register] = ACTIONS(49),
    [aux_sym_float_token1] = ACTIONS(43),
    [aux_sym_float_token2] = ACTIONS(43),
    [sym_integer] = ACTIONS(45),
    [sym_string] = ACTIONS(49),
    [sym_identifier] = ACTIONS(49),
  },
  [5] = {
    [sym__operand] = STATE(56),
    [sym_pointer] = STATE(56),
    [sym_pointer_width] = STATE(60),
    [sym__deregister] = STATE(61),
    [sym_hexadecimal] = STATE(56),
    [sym_binary] = STATE(56),
    [sym_octal] = STATE(56),
    [sym__constant] = STATE(56),
    [sym_float] = STATE(56),
    [ts_builtin_sym_end] = ACTIONS(47),
    [anon_sym_LF] = ACTIONS(47),
    [anon_sym_BYTE] = ACTIONS(15),
    [anon_sym_DWORD] = ACTIONS(15),
    [anon_sym_QWORD] = ACTIONS(15),
    [anon_sym_WORD] = ACTIONS(15),
    [anon_sym_byte] = ACTIONS(15),
    [anon_sym_dword] = ACTIONS(15),
    [anon_sym_qword] = ACTIONS(15),
    [anon_sym_word] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [aux_sym_hexadecimal_token1] = ACTIONS(19),
    [aux_sym_hexadecimal_token2] = ACTIONS(19),
    [aux_sym_hexadecimal_token3] = ACTIONS(19),
    [aux_sym_binary_token1] = ACTIONS(21),
    [aux_sym_binary_token2] = ACTIONS(21),
    [aux_sym_octal_token1] = ACTIONS(23),
    [aux_sym_octal_token2] = ACTIONS(23),
    [sym_register] = ACTIONS(25),
    [aux_sym_float_token1] = ACTIONS(27),
    [aux_sym_float_token2] = ACTIONS(27),
    [sym_integer] = ACTIONS(29),
    [sym_string] = ACTIONS(25),
    [sym_identifier] = ACTIONS(25),
  },
  [6] = {
    [sym__operand] = STATE(55),
    [sym_pointer] = STATE(55),
    [sym_pointer_width] = STATE(62),
    [sym__deregister] = STATE(42),
    [sym_hexadecimal] = STATE(55),
    [sym_binary] = STATE(55),
    [sym_octal] = STATE(55),
    [sym__constant] = STATE(55),
    [sym_float] = STATE(55),
    [ts_builtin_sym_end] = ACTIONS(13),
    [anon_sym_LF] = ACTIONS(13),
    [anon_sym_BYTE] = ACTIONS(15),
    [anon_sym_DWORD] = ACTIONS(15),
    [anon_sym_QWORD] = ACTIONS(15),
    [anon_sym_WORD] = ACTIONS(15),
    [anon_sym_byte] = ACTIONS(15),
    [anon_sym_dword] = ACTIONS(15),
    [anon_sym_qword] = ACTIONS(15),
    [anon_sym_word] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(33),
    [aux_sym_hexadecimal_token1] = ACTIONS(35),
    [aux_sym_hexadecimal_token2] = ACTIONS(35),
    [aux_sym_hexadecimal_token3] = ACTIONS(35),
    [aux_sym_binary_token1] = ACTIONS(37),
    [aux_sym_binary_token2] = ACTIONS(37),
    [aux_sym_octal_token1] = ACTIONS(39),
    [aux_sym_octal_token2] = ACTIONS(39),
    [sym_register] = ACTIONS(49),
    [aux_sym_float_token1] = ACTIONS(43),
    [aux_sym_float_token2] = ACTIONS(43),
    [sym_integer] = ACTIONS(45),
    [sym_string] = ACTIONS(49),
    [sym_identifier] = ACTIONS(49),
  },
  [7] = {
    [sym__operand] = STATE(55),
    [sym_pointer] = STATE(55),
    [sym_pointer_width] = STATE(62),
    [sym__deregister] = STATE(42),
    [sym_hexadecimal] = STATE(55),
    [sym_binary] = STATE(55),
    [sym_octal] = STATE(55),
    [sym__constant] = STATE(55),
    [sym_float] = STATE(55),
    [anon_sym_BYTE] = ACTIONS(15),
    [anon_sym_DWORD] = ACTIONS(15),
    [anon_sym_QWORD] = ACTIONS(15),
    [anon_sym_WORD] = ACTIONS(15),
    [anon_sym_byte] = ACTIONS(15),
    [anon_sym_dword] = ACTIONS(15),
    [anon_sym_qword] = ACTIONS(15),
    [anon_sym_word] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(51),
    [aux_sym_hexadecimal_token1] = ACTIONS(35),
    [aux_sym_hexadecimal_token2] = ACTIONS(35),
    [aux_sym_hexadecimal_token3] = ACTIONS(35),
    [aux_sym_binary_token1] = ACTIONS(37),
    [aux_sym_binary_token2] = ACTIONS(37),
    [aux_sym_octal_token1] = ACTIONS(39),
    [aux_sym_octal_token2] = ACTIONS(39),
    [sym_register] = ACTIONS(49),
    [aux_sym_float_token1] = ACTIONS(43),
    [aux_sym_float_token2] = ACTIONS(43),
    [sym_integer] = ACTIONS(45),
    [sym_string] = ACTIONS(53),
    [sym_identifier] = ACTIONS(49),
  },
  [8] = {
    [sym__operand] = STATE(56),
    [sym_pointer] = STATE(56),
    [sym_pointer_width] = STATE(60),
    [sym__deregister] = STATE(61),
    [sym_hexadecimal] = STATE(56),
    [sym_binary] = STATE(56),
    [sym_octal] = STATE(56),
    [sym__constant] = STATE(56),
    [sym_float] = STATE(56),
    [anon_sym_BYTE] = ACTIONS(15),
    [anon_sym_DWORD] = ACTIONS(15),
    [anon_sym_QWORD] = ACTIONS(15),
    [anon_sym_WORD] = ACTIONS(15),
    [anon_sym_byte] = ACTIONS(15),
    [anon_sym_dword] = ACTIONS(15),
    [anon_sym_qword] = ACTIONS(15),
    [anon_sym_word] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(55),
    [aux_sym_hexadecimal_token1] = ACTIONS(19),
    [aux_sym_hexadecimal_token2] = ACTIONS(19),
    [aux_sym_hexadecimal_token3] = ACTIONS(19),
    [aux_sym_binary_token1] = ACTIONS(21),
    [aux_sym_binary_token2] = ACTIONS(21),
    [aux_sym_octal_token1] = ACTIONS(23),
    [aux_sym_octal_token2] = ACTIONS(23),
    [sym_register] = ACTIONS(25),
    [aux_sym_float_token1] = ACTIONS(27),
    [aux_sym_float_token2] = ACTIONS(27),
    [sym_integer] = ACTIONS(29),
    [sym_string] = ACTIONS(57),
    [sym_identifier] = ACTIONS(25),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(37), 2,
      aux_sym_binary_token1,
      aux_sym_binary_token2,
    ACTIONS(39), 2,
      aux_sym_octal_token1,
      aux_sym_octal_token2,
    ACTIONS(43), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(59), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(35), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    ACTIONS(61), 3,
      sym_integer,
      sym_string,
      sym_identifier,
    STATE(30), 5,
      sym_hexadecimal,
      sym_binary,
      sym_octal,
      sym__constant,
      sym_float,
  [34] = 7,
    ACTIONS(37), 2,
      aux_sym_binary_token1,
      aux_sym_binary_token2,
    ACTIONS(39), 2,
      aux_sym_octal_token1,
      aux_sym_octal_token2,
    ACTIONS(43), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(63), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(35), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    ACTIONS(65), 3,
      sym_integer,
      sym_string,
      sym_identifier,
    STATE(34), 5,
      sym_hexadecimal,
      sym_binary,
      sym_octal,
      sym__constant,
      sym_float,
  [68] = 7,
    ACTIONS(37), 2,
      aux_sym_binary_token1,
      aux_sym_binary_token2,
    ACTIONS(39), 2,
      aux_sym_octal_token1,
      aux_sym_octal_token2,
    ACTIONS(43), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(67), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(35), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    ACTIONS(65), 3,
      sym_integer,
      sym_string,
      sym_identifier,
    STATE(34), 5,
      sym_hexadecimal,
      sym_binary,
      sym_octal,
      sym__constant,
      sym_float,
  [102] = 7,
    ACTIONS(69), 1,
      sym_string,
    ACTIONS(37), 2,
      aux_sym_binary_token1,
      aux_sym_binary_token2,
    ACTIONS(39), 2,
      aux_sym_octal_token1,
      aux_sym_octal_token2,
    ACTIONS(43), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(65), 2,
      sym_integer,
      sym_identifier,
    ACTIONS(35), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    STATE(34), 5,
      sym_hexadecimal,
      sym_binary,
      sym_octal,
      sym__constant,
      sym_float,
  [134] = 7,
    ACTIONS(9), 1,
      sym_gcc_mnemonic,
    ACTIONS(11), 1,
      sym_mnemonic,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    ACTIONS(73), 1,
      sym_comment,
    ACTIONS(75), 1,
      sym_label,
    STATE(68), 2,
      sym__statement,
      sym_instruction,
    STATE(70), 2,
      sym__normal_instruction,
      sym__gcc_pseudo_op,
  [158] = 7,
    ACTIONS(9), 1,
      sym_gcc_mnemonic,
    ACTIONS(11), 1,
      sym_mnemonic,
    ACTIONS(73), 1,
      sym_comment,
    ACTIONS(75), 1,
      sym_label,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    STATE(68), 2,
      sym__statement,
      sym_instruction,
    STATE(70), 2,
      sym__normal_instruction,
      sym__gcc_pseudo_op,
  [182] = 6,
    ACTIONS(9), 1,
      sym_gcc_mnemonic,
    ACTIONS(11), 1,
      sym_mnemonic,
    ACTIONS(73), 1,
      sym_comment,
    ACTIONS(75), 1,
      sym_label,
    STATE(68), 2,
      sym__statement,
      sym_instruction,
    STATE(70), 2,
      sym__normal_instruction,
      sym__gcc_pseudo_op,
  [203] = 6,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    ACTIONS(81), 1,
      anon_sym_LF,
    ACTIONS(83), 1,
      anon_sym_COMMA,
    ACTIONS(85), 1,
      anon_sym_,
    STATE(39), 1,
      aux_sym__normal_instruction_repeat2,
    STATE(40), 1,
      aux_sym__normal_instruction_repeat1,
  [222] = 4,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    ACTIONS(89), 1,
      anon_sym_LF,
    STATE(17), 1,
      aux_sym__gcc_pseudo_op_repeat1,
    ACTIONS(91), 2,
      anon_sym_COMMA,
      anon_sym_,
  [236] = 3,
    ACTIONS(96), 1,
      anon_sym_RBRACK,
    STATE(21), 1,
      aux_sym__deregister_repeat1,
    ACTIONS(94), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
  [248] = 3,
    ACTIONS(98), 1,
      ts_builtin_sym_end,
    ACTIONS(102), 1,
      anon_sym_LBRACK,
    ACTIONS(100), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [260] = 4,
    ACTIONS(104), 1,
      aux_sym_hexadecimal_token1,
    ACTIONS(108), 1,
      sym_register,
    STATE(29), 1,
      sym_hexadecimal,
    ACTIONS(106), 2,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
  [274] = 3,
    ACTIONS(113), 1,
      anon_sym_RBRACK,
    STATE(21), 1,
      aux_sym__deregister_repeat1,
    ACTIONS(110), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
  [286] = 4,
    ACTIONS(104), 1,
      aux_sym_hexadecimal_token1,
    ACTIONS(115), 1,
      sym_register,
    STATE(32), 1,
      sym_hexadecimal,
    ACTIONS(106), 2,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
  [300] = 4,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
    ACTIONS(117), 1,
      anon_sym_LF,
    STATE(17), 1,
      aux_sym__gcc_pseudo_op_repeat1,
    ACTIONS(119), 2,
      anon_sym_COMMA,
      anon_sym_,
  [314] = 3,
    ACTIONS(121), 1,
      anon_sym_RBRACK,
    STATE(21), 1,
      aux_sym__deregister_repeat1,
    ACTIONS(94), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
  [326] = 3,
    ACTIONS(123), 1,
      anon_sym_RBRACK,
    STATE(28), 1,
      aux_sym__deregister_repeat1,
    ACTIONS(94), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
  [338] = 4,
    ACTIONS(104), 1,
      aux_sym_hexadecimal_token1,
    ACTIONS(125), 1,
      sym_register,
    STATE(27), 1,
      sym_hexadecimal,
    ACTIONS(106), 2,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
  [352] = 3,
    ACTIONS(127), 1,
      anon_sym_RBRACK,
    STATE(18), 1,
      aux_sym__deregister_repeat1,
    ACTIONS(94), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
  [364] = 3,
    ACTIONS(127), 1,
      anon_sym_RBRACK,
    STATE(21), 1,
      aux_sym__deregister_repeat1,
    ACTIONS(94), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
  [376] = 3,
    ACTIONS(129), 1,
      anon_sym_RBRACK,
    STATE(24), 1,
      aux_sym__deregister_repeat1,
    ACTIONS(94), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
  [388] = 4,
    ACTIONS(131), 1,
      ts_builtin_sym_end,
    ACTIONS(133), 1,
      anon_sym_LF,
    STATE(23), 1,
      aux_sym__gcc_pseudo_op_repeat1,
    ACTIONS(135), 2,
      anon_sym_COMMA,
      anon_sym_,
  [402] = 3,
    ACTIONS(129), 1,
      anon_sym_RBRACK,
    STATE(21), 1,
      aux_sym__deregister_repeat1,
    ACTIONS(94), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
  [414] = 3,
    ACTIONS(137), 1,
      anon_sym_RBRACK,
    STATE(31), 1,
      aux_sym__deregister_repeat1,
    ACTIONS(94), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
  [426] = 4,
    ACTIONS(104), 1,
      aux_sym_hexadecimal_token1,
    ACTIONS(139), 1,
      sym_register,
    STATE(25), 1,
      sym_hexadecimal,
    ACTIONS(106), 2,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
  [440] = 2,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    ACTIONS(89), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [449] = 3,
    ACTIONS(100), 1,
      anon_sym_COMMA,
    ACTIONS(141), 1,
      anon_sym_LBRACK,
    ACTIONS(98), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [460] = 2,
    ACTIONS(143), 1,
      ts_builtin_sym_end,
    ACTIONS(145), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [469] = 1,
    ACTIONS(147), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_RBRACK,
  [476] = 2,
    ACTIONS(149), 1,
      ts_builtin_sym_end,
    ACTIONS(151), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [485] = 4,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(153), 1,
      anon_sym_LF,
    ACTIONS(155), 1,
      anon_sym_,
    STATE(46), 1,
      aux_sym__normal_instruction_repeat2,
  [498] = 3,
    ACTIONS(157), 1,
      anon_sym_COMMA,
    STATE(44), 1,
      aux_sym__normal_instruction_repeat1,
    ACTIONS(13), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [509] = 2,
    ACTIONS(159), 1,
      ts_builtin_sym_end,
    ACTIONS(161), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [518] = 2,
    ACTIONS(163), 1,
      ts_builtin_sym_end,
    ACTIONS(165), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [527] = 2,
    ACTIONS(167), 1,
      ts_builtin_sym_end,
    ACTIONS(169), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [536] = 3,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    STATE(44), 1,
      aux_sym__normal_instruction_repeat1,
    ACTIONS(171), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [547] = 2,
    ACTIONS(176), 1,
      ts_builtin_sym_end,
    ACTIONS(178), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [556] = 4,
    ACTIONS(180), 1,
      ts_builtin_sym_end,
    ACTIONS(182), 1,
      anon_sym_LF,
    ACTIONS(184), 1,
      anon_sym_,
    STATE(46), 1,
      aux_sym__normal_instruction_repeat2,
  [569] = 2,
    ACTIONS(187), 1,
      ts_builtin_sym_end,
    ACTIONS(189), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [578] = 2,
    ACTIONS(147), 1,
      ts_builtin_sym_end,
    ACTIONS(191), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [587] = 1,
    ACTIONS(113), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_RBRACK,
  [594] = 2,
    ACTIONS(193), 1,
      ts_builtin_sym_end,
    ACTIONS(195), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [603] = 2,
    ACTIONS(169), 1,
      anon_sym_COMMA,
    ACTIONS(167), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [611] = 2,
    ACTIONS(145), 1,
      anon_sym_COMMA,
    ACTIONS(143), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [619] = 3,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    ACTIONS(197), 1,
      anon_sym_LF,
    STATE(59), 1,
      aux_sym_program_repeat1,
  [629] = 3,
    ACTIONS(199), 1,
      ts_builtin_sym_end,
    ACTIONS(201), 1,
      anon_sym_LF,
    STATE(53), 1,
      aux_sym_program_repeat1,
  [639] = 2,
    ACTIONS(180), 1,
      ts_builtin_sym_end,
    ACTIONS(182), 2,
      anon_sym_LF,
      anon_sym_,
  [647] = 2,
    ACTIONS(203), 1,
      anon_sym_COMMA,
    ACTIONS(171), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [655] = 2,
    ACTIONS(189), 1,
      anon_sym_COMMA,
    ACTIONS(187), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [663] = 2,
    ACTIONS(178), 1,
      anon_sym_COMMA,
    ACTIONS(176), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [671] = 3,
    ACTIONS(205), 1,
      ts_builtin_sym_end,
    ACTIONS(207), 1,
      anon_sym_LF,
    STATE(59), 1,
      aux_sym_program_repeat1,
  [681] = 3,
    ACTIONS(55), 1,
      anon_sym_LBRACK,
    ACTIONS(210), 1,
      sym_integer,
    STATE(52), 1,
      sym__deregister,
  [691] = 2,
    ACTIONS(165), 1,
      anon_sym_COMMA,
    ACTIONS(163), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [699] = 3,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(212), 1,
      sym_integer,
    STATE(36), 1,
      sym__deregister,
  [709] = 2,
    ACTIONS(151), 1,
      anon_sym_COMMA,
    ACTIONS(149), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [717] = 2,
    ACTIONS(195), 1,
      anon_sym_COMMA,
    ACTIONS(193), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [725] = 2,
    ACTIONS(161), 1,
      anon_sym_COMMA,
    ACTIONS(159), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [733] = 2,
    ACTIONS(191), 1,
      anon_sym_COMMA,
    ACTIONS(147), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [741] = 1,
    ACTIONS(214), 2,
      anon_sym_PTR,
      anon_sym_ptr,
  [746] = 1,
    ACTIONS(205), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [751] = 1,
    ACTIONS(216), 2,
      anon_sym_LBRACK,
      sym_integer,
  [756] = 1,
    ACTIONS(218), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [761] = 1,
    ACTIONS(220), 1,
      sym_integer,
  [765] = 1,
    ACTIONS(222), 1,
      ts_builtin_sym_end,
  [769] = 1,
    ACTIONS(224), 1,
      anon_sym_LBRACK,
  [773] = 1,
    ACTIONS(226), 1,
      anon_sym_LBRACK,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 34,
  [SMALL_STATE(11)] = 68,
  [SMALL_STATE(12)] = 102,
  [SMALL_STATE(13)] = 134,
  [SMALL_STATE(14)] = 158,
  [SMALL_STATE(15)] = 182,
  [SMALL_STATE(16)] = 203,
  [SMALL_STATE(17)] = 222,
  [SMALL_STATE(18)] = 236,
  [SMALL_STATE(19)] = 248,
  [SMALL_STATE(20)] = 260,
  [SMALL_STATE(21)] = 274,
  [SMALL_STATE(22)] = 286,
  [SMALL_STATE(23)] = 300,
  [SMALL_STATE(24)] = 314,
  [SMALL_STATE(25)] = 326,
  [SMALL_STATE(26)] = 338,
  [SMALL_STATE(27)] = 352,
  [SMALL_STATE(28)] = 364,
  [SMALL_STATE(29)] = 376,
  [SMALL_STATE(30)] = 388,
  [SMALL_STATE(31)] = 402,
  [SMALL_STATE(32)] = 414,
  [SMALL_STATE(33)] = 426,
  [SMALL_STATE(34)] = 440,
  [SMALL_STATE(35)] = 449,
  [SMALL_STATE(36)] = 460,
  [SMALL_STATE(37)] = 469,
  [SMALL_STATE(38)] = 476,
  [SMALL_STATE(39)] = 485,
  [SMALL_STATE(40)] = 498,
  [SMALL_STATE(41)] = 509,
  [SMALL_STATE(42)] = 518,
  [SMALL_STATE(43)] = 527,
  [SMALL_STATE(44)] = 536,
  [SMALL_STATE(45)] = 547,
  [SMALL_STATE(46)] = 556,
  [SMALL_STATE(47)] = 569,
  [SMALL_STATE(48)] = 578,
  [SMALL_STATE(49)] = 587,
  [SMALL_STATE(50)] = 594,
  [SMALL_STATE(51)] = 603,
  [SMALL_STATE(52)] = 611,
  [SMALL_STATE(53)] = 619,
  [SMALL_STATE(54)] = 629,
  [SMALL_STATE(55)] = 639,
  [SMALL_STATE(56)] = 647,
  [SMALL_STATE(57)] = 655,
  [SMALL_STATE(58)] = 663,
  [SMALL_STATE(59)] = 671,
  [SMALL_STATE(60)] = 681,
  [SMALL_STATE(61)] = 691,
  [SMALL_STATE(62)] = 699,
  [SMALL_STATE(63)] = 709,
  [SMALL_STATE(64)] = 717,
  [SMALL_STATE(65)] = 725,
  [SMALL_STATE(66)] = 733,
  [SMALL_STATE(67)] = 741,
  [SMALL_STATE(68)] = 746,
  [SMALL_STATE(69)] = 751,
  [SMALL_STATE(70)] = 756,
  [SMALL_STATE(71)] = 761,
  [SMALL_STATE(72)] = 765,
  [SMALL_STATE(73)] = 769,
  [SMALL_STATE(74)] = 773,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__normal_instruction, 3),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__normal_instruction, 1),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__normal_instruction, 4),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gcc_pseudo_op, 1),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gcc_pseudo_op, 4),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gcc_pseudo_op, 3),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__normal_instruction, 2),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__normal_instruction, 2),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__gcc_pseudo_op_repeat1, 2),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__gcc_pseudo_op_repeat1, 2),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__gcc_pseudo_op_repeat1, 2), SHIFT_REPEAT(12),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant, 1),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__constant, 1),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__deregister_repeat1, 2), SHIFT_REPEAT(71),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__deregister_repeat1, 2),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__gcc_pseudo_op, 3),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gcc_pseudo_op, 2),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__gcc_pseudo_op, 2),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer, 2),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pointer, 2),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hexadecimal, 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__deregister, 3),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__deregister, 3),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__normal_instruction, 3),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__deregister, 5),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__deregister, 5),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer, 1),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pointer, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__normal_instruction_repeat1, 2),
  [173] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat1, 2), SHIFT_REPEAT(8),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_octal, 1),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_octal, 1),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__normal_instruction_repeat2, 2),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat2, 2),
  [184] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat2, 2), SHIFT_REPEAT(7),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary, 1),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary, 1),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hexadecimal, 1),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__deregister, 4),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__deregister, 4),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat1, 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(15),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_width, 2),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [222] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_asm_intel(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
