#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 79
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 57
#define ALIAS_COUNT 0
#define TOKEN_COUNT 37
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LF = 1,
  sym_comment = 2,
  sym_label = 3,
  anon_sym_COMMA = 4,
  anon_sym_ = 5,
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
  aux_sym_string_token1 = 34,
  aux_sym_string_token2 = 35,
  sym_identifier = 36,
  sym_program = 37,
  sym__statement = 38,
  sym_instruction = 39,
  sym__normal_instruction = 40,
  sym__gcc_pseudo_op = 41,
  sym__operand = 42,
  sym_pointer = 43,
  sym_pointer_width = 44,
  sym__deregister = 45,
  sym_hexadecimal = 46,
  sym_binary = 47,
  sym_octal = 48,
  sym__constant = 49,
  sym_float = 50,
  sym_string = 51,
  aux_sym_program_repeat1 = 52,
  aux_sym__normal_instruction_repeat1 = 53,
  aux_sym__normal_instruction_repeat2 = 54,
  aux_sym__gcc_pseudo_op_repeat1 = 55,
  aux_sym__deregister_repeat1 = 56,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [sym_comment] = "comment",
  [sym_label] = "label",
  [anon_sym_COMMA] = ",",
  [anon_sym_] = " ",
  [sym_gcc_mnemonic] = "directive",
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
  [aux_sym_string_token1] = "string_token1",
  [aux_sym_string_token2] = "string_token2",
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
  [sym_string] = "string",
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
  [sym_label] = sym_label,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_] = anon_sym_,
  [sym_gcc_mnemonic] = sym_gcc_mnemonic,
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
  [aux_sym_string_token1] = aux_sym_string_token1,
  [aux_sym_string_token2] = aux_sym_string_token2,
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
  [sym_string] = sym_string,
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
  [sym_label] = {
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
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
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
  [sym_string] = {
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
  [23] = 21,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 19,
  [28] = 28,
  [29] = 20,
  [30] = 25,
  [31] = 31,
  [32] = 31,
  [33] = 33,
  [34] = 28,
  [35] = 35,
  [36] = 22,
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
  [48] = 48,
  [49] = 49,
  [50] = 44,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 38,
  [55] = 41,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 48,
  [61] = 46,
  [62] = 39,
  [63] = 63,
  [64] = 64,
  [65] = 53,
  [66] = 40,
  [67] = 56,
  [68] = 52,
  [69] = 45,
  [70] = 44,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 77,
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
      if (eof) ADVANCE(90);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(94);
      if (lookahead == '$') ADVANCE(18);
      if (lookahead == '\'') ADVANCE(14);
      if (lookahead == '*') ADVANCE(123);
      if (lookahead == '+') ADVANCE(122);
      if (lookahead == ',') ADVANCE(96);
      if (lookahead == '-') ADVANCE(121);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '0') ADVANCE(37);
      if (lookahead == '1') ADVANCE(38);
      if (lookahead == 'B') ADVANCE(36);
      if (lookahead == 'D') ADVANCE(34);
      if (lookahead == 'P') ADVANCE(32);
      if (lookahead == 'Q') ADVANCE(35);
      if (lookahead == 'W') ADVANCE(25);
      if (lookahead == '[') ADVANCE(120);
      if (lookahead == '\\') SKIP(76)
      if (lookahead == ']') ADVANCE(124);
      if (lookahead == '_') ADVANCE(61);
      if (lookahead == 'b') ADVANCE(59);
      if (lookahead == 'd') ADVANCE(57);
      if (lookahead == 'p') ADVANCE(55);
      if (lookahead == 'q') ADVANCE(58);
      if (lookahead == 'w') ADVANCE(48);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == ':') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(20);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == ':') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(20);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(93);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == ':') ADVANCE(95);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(20);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(93);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(20);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(11)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(12)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(12)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(60)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(60)
      if (lookahead == '\r') SKIP(9)
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(94);
      if (lookahead == '$') ADVANCE(226);
      if (lookahead == '\'') ADVANCE(14);
      if (lookahead == '-') ADVANCE(225);
      if (lookahead == '.') ADVANCE(239);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '0') ADVANCE(190);
      if (lookahead == '1') ADVANCE(191);
      if (lookahead == 'B') ADVANCE(230);
      if (lookahead == 'D') ADVANCE(228);
      if (lookahead == 'Q') ADVANCE(229);
      if (lookahead == 'W') ADVANCE(227);
      if (lookahead == '[') ADVANCE(120);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == '_') ADVANCE(236);
      if (lookahead == 'b') ADVANCE(235);
      if (lookahead == 'd') ADVANCE(233);
      if (lookahead == 'q') ADVANCE(234);
      if (lookahead == 'w') ADVANCE(232);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(196);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(247);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(195);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(237);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(11)
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(94);
      if (lookahead == '$') ADVANCE(226);
      if (lookahead == '\'') ADVANCE(14);
      if (lookahead == '-') ADVANCE(225);
      if (lookahead == '.') ADVANCE(239);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '0') ADVANCE(190);
      if (lookahead == '1') ADVANCE(191);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == '_') ADVANCE(236);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(196);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(195);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(12)
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(245);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(221);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '\'') ADVANCE(222);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(94);
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(93);
      if (lookahead == ':') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(20);
      END_STATE();
    case 17:
      if (lookahead == '0') ADVANCE(206);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(208);
      END_STATE();
    case 18:
      if (lookahead == '0') ADVANCE(72);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(95);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == 'D') ADVANCE(108);
      END_STATE();
    case 22:
      if (lookahead == 'D') ADVANCE(104);
      END_STATE();
    case 23:
      if (lookahead == 'D') ADVANCE(106);
      END_STATE();
    case 24:
      if (lookahead == 'E') ADVANCE(102);
      END_STATE();
    case 25:
      if (lookahead == 'O') ADVANCE(29);
      END_STATE();
    case 26:
      if (lookahead == 'O') ADVANCE(30);
      END_STATE();
    case 27:
      if (lookahead == 'O') ADVANCE(31);
      END_STATE();
    case 28:
      if (lookahead == 'R') ADVANCE(118);
      END_STATE();
    case 29:
      if (lookahead == 'R') ADVANCE(21);
      END_STATE();
    case 30:
      if (lookahead == 'R') ADVANCE(22);
      END_STATE();
    case 31:
      if (lookahead == 'R') ADVANCE(23);
      END_STATE();
    case 32:
      if (lookahead == 'T') ADVANCE(28);
      END_STATE();
    case 33:
      if (lookahead == 'T') ADVANCE(24);
      END_STATE();
    case 34:
      if (lookahead == 'W') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      END_STATE();
    case 35:
      if (lookahead == 'W') ADVANCE(27);
      END_STATE();
    case 36:
      if (lookahead == 'Y') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      END_STATE();
    case 37:
      if (lookahead == '_') ADVANCE(61);
      if (lookahead == 'b') ADVANCE(134);
      if (lookahead == 'y') ADVANCE(138);
      if (lookahead == 'h' ||
          lookahead == 'x') ADVANCE(68);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(148);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(39);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(62);
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      END_STATE();
    case 38:
      if (lookahead == '_') ADVANCE(61);
      if (lookahead == 'b') ADVANCE(140);
      if (lookahead == 'y') ADVANCE(133);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(147);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(39);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(62);
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      END_STATE();
    case 39:
      if (lookahead == '_') ADVANCE(61);
      if (lookahead == 'b') ADVANCE(136);
      if (lookahead == 'y') ADVANCE(133);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(147);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(40);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(47);
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(46);
      END_STATE();
    case 40:
      if (lookahead == '_') ADVANCE(61);
      if (lookahead == 'h') ADVANCE(125);
      if (lookahead == 'b' ||
          lookahead == 'y') ADVANCE(133);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(147);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(41);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(63);
      END_STATE();
    case 41:
      if (lookahead == '_') ADVANCE(61);
      if (lookahead == 'b' ||
          lookahead == 'y') ADVANCE(133);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(147);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(41);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(63);
      END_STATE();
    case 42:
      if (lookahead == 'd') ADVANCE(116);
      END_STATE();
    case 43:
      if (lookahead == 'd') ADVANCE(112);
      END_STATE();
    case 44:
      if (lookahead == 'd') ADVANCE(114);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 46:
      if (lookahead == 'h') ADVANCE(125);
      END_STATE();
    case 47:
      if (lookahead == 'h') ADVANCE(125);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(63);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 51:
      if (lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 52:
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 53:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 57:
      if (lookahead == 'w') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      END_STATE();
    case 58:
      if (lookahead == 'w') ADVANCE(50);
      END_STATE();
    case 59:
      if (lookahead == 'y') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      END_STATE();
    case 60:
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(94);
      if (lookahead == '$') ADVANCE(18);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '0') ADVANCE(204);
      if (lookahead == '[') ADVANCE(120);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(60)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(70);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 61:
      if (lookahead == 'b' ||
          lookahead == 'y') ADVANCE(133);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(61);
      END_STATE();
    case 62:
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(47);
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(46);
      END_STATE();
    case 63:
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(63);
      END_STATE();
    case 64:
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(62);
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(180);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(46);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(131);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(129);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(177);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      END_STATE();
    case 72:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      END_STATE();
    case 73:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 74:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 75:
      if (eof) ADVANCE(90);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 76:
      if (eof) ADVANCE(90);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(75)
      END_STATE();
    case 77:
      if (eof) ADVANCE(90);
      if (lookahead == '\n') SKIP(77)
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(93);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(20);
      END_STATE();
    case 78:
      if (eof) ADVANCE(90);
      if (lookahead == '\n') SKIP(80)
      END_STATE();
    case 79:
      if (eof) ADVANCE(90);
      if (lookahead == '\n') SKIP(80)
      if (lookahead == '\r') SKIP(78)
      END_STATE();
    case 80:
      if (eof) ADVANCE(90);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(94);
      if (lookahead == '$') ADVANCE(226);
      if (lookahead == '\'') ADVANCE(14);
      if (lookahead == ',') ADVANCE(96);
      if (lookahead == '-') ADVANCE(225);
      if (lookahead == '.') ADVANCE(239);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '0') ADVANCE(190);
      if (lookahead == '1') ADVANCE(191);
      if (lookahead == 'B') ADVANCE(230);
      if (lookahead == 'D') ADVANCE(228);
      if (lookahead == 'Q') ADVANCE(229);
      if (lookahead == 'W') ADVANCE(227);
      if (lookahead == '[') ADVANCE(120);
      if (lookahead == '\\') SKIP(79)
      if (lookahead == '_') ADVANCE(236);
      if (lookahead == 'b') ADVANCE(235);
      if (lookahead == 'd') ADVANCE(233);
      if (lookahead == 'q') ADVANCE(234);
      if (lookahead == 'w') ADVANCE(232);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(196);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(247);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(195);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(80)
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(237);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 81:
      if (eof) ADVANCE(90);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(94);
      if (lookahead == '$') ADVANCE(226);
      if (lookahead == '\'') ADVANCE(14);
      if (lookahead == '-') ADVANCE(225);
      if (lookahead == '.') ADVANCE(239);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '0') ADVANCE(190);
      if (lookahead == '1') ADVANCE(191);
      if (lookahead == '\\') SKIP(84)
      if (lookahead == '_') ADVANCE(236);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(196);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(195);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(81)
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(245);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 82:
      if (eof) ADVANCE(90);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(94);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '\\') SKIP(86)
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(82)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 83:
      if (eof) ADVANCE(90);
      if (lookahead == '\n') SKIP(81)
      END_STATE();
    case 84:
      if (eof) ADVANCE(90);
      if (lookahead == '\n') SKIP(81)
      if (lookahead == '\r') SKIP(83)
      END_STATE();
    case 85:
      if (eof) ADVANCE(90);
      if (lookahead == '\n') SKIP(82)
      END_STATE();
    case 86:
      if (eof) ADVANCE(90);
      if (lookahead == '\n') SKIP(82)
      if (lookahead == '\r') SKIP(85)
      END_STATE();
    case 87:
      if (eof) ADVANCE(90);
      if (lookahead == '\n') SKIP(89)
      END_STATE();
    case 88:
      if (eof) ADVANCE(90);
      if (lookahead == '\n') SKIP(89)
      if (lookahead == '\r') SKIP(87)
      END_STATE();
    case 89:
      if (eof) ADVANCE(90);
      if (lookahead == '\n') ADVANCE(92);
      if (lookahead == ' ') ADVANCE(97);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(94);
      if (lookahead == ',') ADVANCE(96);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '[') ADVANCE(120);
      if (lookahead == '\\') SKIP(88)
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(89)
      END_STATE();
    case 90:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(92);
      if (lookahead == ' ') ADVANCE(97);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '"') ADVANCE(94);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == ':') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(20);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(92);
      if (lookahead == ' ') ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_gcc_mnemonic);
      if (lookahead == ':') ADVANCE(95);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(20);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_gcc_mnemonic);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_mnemonic);
      if (lookahead == ':') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(20);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_mnemonic);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_BYTE);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_BYTE);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_DWORD);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_DWORD);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_QWORD);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_QWORD);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_WORD);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_WORD);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_byte);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_byte);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_dword);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_dword);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_qword);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_qword);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_word);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_word);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_PTR);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_ptr);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_hexadecimal_token1);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_hexadecimal_token1);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_hexadecimal_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_hexadecimal_token1);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(247);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_hexadecimal_token2);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_hexadecimal_token2);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(247);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_hexadecimal_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_hexadecimal_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(132);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (lookahead == '_') ADVANCE(145);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(143);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(46);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (lookahead == '_') ADVANCE(146);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(144);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(231);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (lookahead == 'h') ADVANCE(125);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (lookahead == 'h') ADVANCE(128);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(247);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(145);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(146);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('2' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(46);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(231);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(247);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_binary_token2);
      if (lookahead == 'h') ADVANCE(125);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(145);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_binary_token2);
      if (lookahead == 'h') ADVANCE(128);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(146);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('2' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_binary_token2);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(145);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_binary_token2);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(146);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('2' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_octal_token1);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_octal_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(151);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_octal_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(152);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(247);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_octal_token1);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(247);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_octal_token2);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(151);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_octal_token2);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(152);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(247);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'D') ADVANCE(109);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'D') ADVANCE(105);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'D') ADVANCE(107);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'E') ADVANCE(103);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'O') ADVANCE(160);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'O') ADVANCE(161);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'R') ADVANCE(153);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'R') ADVANCE(154);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'R') ADVANCE(155);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'T') ADVANCE(156);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'd') ADVANCE(117);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'd') ADVANCE(113);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'd') ADVANCE(115);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'e') ADVANCE(111);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'h') ADVANCE(126);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'h') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'o') ADVANCE(172);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'o') ADVANCE(173);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'r') ADVANCE(163);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'r') ADVANCE(164);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'r') ADVANCE(165);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 't') ADVANCE(166);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(167);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(168);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == '.') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == '.') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(180);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == 'e') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == '.') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(184);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == '.') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == 'e') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(187);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_integer);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(186);
      if (lookahead == '_') ADVANCE(236);
      if (lookahead == 'b') ADVANCE(135);
      if (lookahead == 'd') ADVANCE(215);
      if (lookahead == 'y') ADVANCE(139);
      if (lookahead == 'h' ||
          lookahead == 'x') ADVANCE(243);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(149);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(192);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(203);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(202);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(242);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(186);
      if (lookahead == '_') ADVANCE(236);
      if (lookahead == 'b') ADVANCE(141);
      if (lookahead == 'd') ADVANCE(219);
      if (lookahead == 'y') ADVANCE(142);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(150);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(192);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(203);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(202);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(242);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(186);
      if (lookahead == '_') ADVANCE(236);
      if (lookahead == 'b') ADVANCE(137);
      if (lookahead == 'd') ADVANCE(213);
      if (lookahead == 'y') ADVANCE(142);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(150);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(193);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(199);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(198);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(231);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(186);
      if (lookahead == '_') ADVANCE(236);
      if (lookahead == 'd') ADVANCE(220);
      if (lookahead == 'h') ADVANCE(128);
      if (lookahead == 'b' ||
          lookahead == 'y') ADVANCE(142);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(150);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(194);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(201);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(200);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(186);
      if (lookahead == '_') ADVANCE(236);
      if (lookahead == 'd') ADVANCE(220);
      if (lookahead == 'b' ||
          lookahead == 'y') ADVANCE(142);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(150);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(194);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(201);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(200);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(186);
      if (lookahead == 'd') ADVANCE(219);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(150);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(202);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(242);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(186);
      if (lookahead == 'd') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(242);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(186);
      if (lookahead == 'd') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(186);
      if (lookahead == 'd') ADVANCE(220);
      if (lookahead == 'h') ADVANCE(128);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(150);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(200);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(186);
      if (lookahead == 'd') ADVANCE(220);
      if (lookahead == 'h') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(186);
      if (lookahead == 'd') ADVANCE(220);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(150);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(200);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(186);
      if (lookahead == 'd') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(186);
      if (lookahead == 'd') ADVANCE(213);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(150);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(198);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(231);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(186);
      if (lookahead == 'd') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(231);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'd') ADVANCE(217);
      if (lookahead == 'h' ||
          lookahead == 'x') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(209);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'd') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(209);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'd') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(208);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'd') ADVANCE(189);
      if (lookahead == 'h') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(208);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'd') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(208);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'd') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(207);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(46);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'h') ADVANCE(125);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'h') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(216);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'h') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(214);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'h') ADVANCE(128);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(247);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(214);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(212);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(231);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(216);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(211);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(46);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(46);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(231);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_integer);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(247);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+') ADVANCE(65);
      if (lookahead == '-') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+') ADVANCE(66);
      if (lookahead == '-') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(184);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(239);
      if (lookahead == '0') ADVANCE(197);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(201);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '0') ADVANCE(246);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(247);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(159);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'W') ADVANCE(157);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(175);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'W') ADVANCE(158);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Y') ADVANCE(162);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(175);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(128);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(247);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(171);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(169);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(175);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(170);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(174);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(175);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b' ||
          lookahead == 'y') ADVANCE(142);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(236);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('2' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(175);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(184);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(231);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(132);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(130);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(242);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(244);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(247);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 77},
  [2] = {.lex_state = 80},
  [3] = {.lex_state = 80},
  [4] = {.lex_state = 80},
  [5] = {.lex_state = 80},
  [6] = {.lex_state = 80},
  [7] = {.lex_state = 11},
  [8] = {.lex_state = 11},
  [9] = {.lex_state = 81},
  [10] = {.lex_state = 81},
  [11] = {.lex_state = 81},
  [12] = {.lex_state = 12},
  [13] = {.lex_state = 77},
  [14] = {.lex_state = 77},
  [15] = {.lex_state = 82},
  [16] = {.lex_state = 77},
  [17] = {.lex_state = 89},
  [18] = {.lex_state = 89},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 60},
  [21] = {.lex_state = 60},
  [22] = {.lex_state = 89},
  [23] = {.lex_state = 60},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 89},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 60},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 60},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 89},
  [36] = {.lex_state = 80},
  [37] = {.lex_state = 89},
  [38] = {.lex_state = 89},
  [39] = {.lex_state = 89},
  [40] = {.lex_state = 89},
  [41] = {.lex_state = 89},
  [42] = {.lex_state = 89},
  [43] = {.lex_state = 80},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 89},
  [46] = {.lex_state = 89},
  [47] = {.lex_state = 80},
  [48] = {.lex_state = 89},
  [49] = {.lex_state = 89},
  [50] = {.lex_state = 89},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 89},
  [53] = {.lex_state = 89},
  [54] = {.lex_state = 80},
  [55] = {.lex_state = 80},
  [56] = {.lex_state = 60},
  [57] = {.lex_state = 80},
  [58] = {.lex_state = 80},
  [59] = {.lex_state = 89},
  [60] = {.lex_state = 80},
  [61] = {.lex_state = 80},
  [62] = {.lex_state = 80},
  [63] = {.lex_state = 80},
  [64] = {.lex_state = 80},
  [65] = {.lex_state = 80},
  [66] = {.lex_state = 80},
  [67] = {.lex_state = 60},
  [68] = {.lex_state = 80},
  [69] = {.lex_state = 80},
  [70] = {.lex_state = 80},
  [71] = {.lex_state = 80},
  [72] = {.lex_state = 80},
  [73] = {.lex_state = 60},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 80},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
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
    [aux_sym_string_token1] = ACTIONS(1),
    [aux_sym_string_token2] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(76),
    [sym__statement] = STATE(57),
    [sym_instruction] = STATE(57),
    [sym__normal_instruction] = STATE(75),
    [sym__gcc_pseudo_op] = STATE(75),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [sym_label] = ACTIONS(9),
    [sym_gcc_mnemonic] = ACTIONS(11),
    [sym_mnemonic] = ACTIONS(13),
  },
  [2] = {
    [sym__operand] = STATE(17),
    [sym_pointer] = STATE(17),
    [sym_pointer_width] = STATE(56),
    [sym__deregister] = STATE(53),
    [sym_hexadecimal] = STATE(17),
    [sym_binary] = STATE(17),
    [sym_octal] = STATE(17),
    [sym__constant] = STATE(17),
    [sym_float] = STATE(17),
    [sym_string] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_LF] = ACTIONS(15),
    [sym_comment] = ACTIONS(17),
    [anon_sym_BYTE] = ACTIONS(19),
    [anon_sym_DWORD] = ACTIONS(19),
    [anon_sym_QWORD] = ACTIONS(19),
    [anon_sym_WORD] = ACTIONS(19),
    [anon_sym_byte] = ACTIONS(19),
    [anon_sym_dword] = ACTIONS(19),
    [anon_sym_qword] = ACTIONS(19),
    [anon_sym_word] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [aux_sym_hexadecimal_token1] = ACTIONS(23),
    [aux_sym_hexadecimal_token2] = ACTIONS(23),
    [aux_sym_hexadecimal_token3] = ACTIONS(23),
    [aux_sym_binary_token1] = ACTIONS(25),
    [aux_sym_binary_token2] = ACTIONS(25),
    [aux_sym_octal_token1] = ACTIONS(27),
    [aux_sym_octal_token2] = ACTIONS(27),
    [sym_register] = ACTIONS(29),
    [aux_sym_float_token1] = ACTIONS(31),
    [aux_sym_float_token2] = ACTIONS(31),
    [sym_integer] = ACTIONS(33),
    [aux_sym_string_token1] = ACTIONS(35),
    [aux_sym_string_token2] = ACTIONS(35),
    [sym_identifier] = ACTIONS(29),
  },
  [3] = {
    [sym__operand] = STATE(59),
    [sym_pointer] = STATE(59),
    [sym_pointer_width] = STATE(56),
    [sym__deregister] = STATE(53),
    [sym_hexadecimal] = STATE(59),
    [sym_binary] = STATE(59),
    [sym_octal] = STATE(59),
    [sym__constant] = STATE(59),
    [sym_float] = STATE(59),
    [sym_string] = STATE(59),
    [ts_builtin_sym_end] = ACTIONS(37),
    [anon_sym_LF] = ACTIONS(37),
    [sym_comment] = ACTIONS(17),
    [anon_sym_BYTE] = ACTIONS(19),
    [anon_sym_DWORD] = ACTIONS(19),
    [anon_sym_QWORD] = ACTIONS(19),
    [anon_sym_WORD] = ACTIONS(19),
    [anon_sym_byte] = ACTIONS(19),
    [anon_sym_dword] = ACTIONS(19),
    [anon_sym_qword] = ACTIONS(19),
    [anon_sym_word] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [aux_sym_hexadecimal_token1] = ACTIONS(23),
    [aux_sym_hexadecimal_token2] = ACTIONS(23),
    [aux_sym_hexadecimal_token3] = ACTIONS(23),
    [aux_sym_binary_token1] = ACTIONS(25),
    [aux_sym_binary_token2] = ACTIONS(25),
    [aux_sym_octal_token1] = ACTIONS(27),
    [aux_sym_octal_token2] = ACTIONS(27),
    [sym_register] = ACTIONS(39),
    [aux_sym_float_token1] = ACTIONS(31),
    [aux_sym_float_token2] = ACTIONS(31),
    [sym_integer] = ACTIONS(33),
    [aux_sym_string_token1] = ACTIONS(35),
    [aux_sym_string_token2] = ACTIONS(35),
    [sym_identifier] = ACTIONS(39),
  },
  [4] = {
    [sym__operand] = STATE(63),
    [sym_pointer] = STATE(63),
    [sym_pointer_width] = STATE(67),
    [sym__deregister] = STATE(65),
    [sym_hexadecimal] = STATE(63),
    [sym_binary] = STATE(63),
    [sym_octal] = STATE(63),
    [sym__constant] = STATE(63),
    [sym_float] = STATE(63),
    [sym_string] = STATE(63),
    [ts_builtin_sym_end] = ACTIONS(37),
    [anon_sym_LF] = ACTIONS(37),
    [sym_comment] = ACTIONS(17),
    [anon_sym_BYTE] = ACTIONS(19),
    [anon_sym_DWORD] = ACTIONS(19),
    [anon_sym_QWORD] = ACTIONS(19),
    [anon_sym_WORD] = ACTIONS(19),
    [anon_sym_byte] = ACTIONS(19),
    [anon_sym_dword] = ACTIONS(19),
    [anon_sym_qword] = ACTIONS(19),
    [anon_sym_word] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(41),
    [aux_sym_hexadecimal_token1] = ACTIONS(43),
    [aux_sym_hexadecimal_token2] = ACTIONS(43),
    [aux_sym_hexadecimal_token3] = ACTIONS(43),
    [aux_sym_binary_token1] = ACTIONS(45),
    [aux_sym_binary_token2] = ACTIONS(45),
    [aux_sym_octal_token1] = ACTIONS(47),
    [aux_sym_octal_token2] = ACTIONS(47),
    [sym_register] = ACTIONS(49),
    [aux_sym_float_token1] = ACTIONS(51),
    [aux_sym_float_token2] = ACTIONS(51),
    [sym_integer] = ACTIONS(53),
    [aux_sym_string_token1] = ACTIONS(55),
    [aux_sym_string_token2] = ACTIONS(55),
    [sym_identifier] = ACTIONS(49),
  },
  [5] = {
    [sym__operand] = STATE(63),
    [sym_pointer] = STATE(63),
    [sym_pointer_width] = STATE(67),
    [sym__deregister] = STATE(65),
    [sym_hexadecimal] = STATE(63),
    [sym_binary] = STATE(63),
    [sym_octal] = STATE(63),
    [sym__constant] = STATE(63),
    [sym_float] = STATE(63),
    [sym_string] = STATE(63),
    [ts_builtin_sym_end] = ACTIONS(57),
    [anon_sym_LF] = ACTIONS(57),
    [sym_comment] = ACTIONS(17),
    [anon_sym_BYTE] = ACTIONS(19),
    [anon_sym_DWORD] = ACTIONS(19),
    [anon_sym_QWORD] = ACTIONS(19),
    [anon_sym_WORD] = ACTIONS(19),
    [anon_sym_byte] = ACTIONS(19),
    [anon_sym_dword] = ACTIONS(19),
    [anon_sym_qword] = ACTIONS(19),
    [anon_sym_word] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(41),
    [aux_sym_hexadecimal_token1] = ACTIONS(43),
    [aux_sym_hexadecimal_token2] = ACTIONS(43),
    [aux_sym_hexadecimal_token3] = ACTIONS(43),
    [aux_sym_binary_token1] = ACTIONS(45),
    [aux_sym_binary_token2] = ACTIONS(45),
    [aux_sym_octal_token1] = ACTIONS(47),
    [aux_sym_octal_token2] = ACTIONS(47),
    [sym_register] = ACTIONS(49),
    [aux_sym_float_token1] = ACTIONS(51),
    [aux_sym_float_token2] = ACTIONS(51),
    [sym_integer] = ACTIONS(53),
    [aux_sym_string_token1] = ACTIONS(55),
    [aux_sym_string_token2] = ACTIONS(55),
    [sym_identifier] = ACTIONS(49),
  },
  [6] = {
    [sym__operand] = STATE(59),
    [sym_pointer] = STATE(59),
    [sym_pointer_width] = STATE(56),
    [sym__deregister] = STATE(53),
    [sym_hexadecimal] = STATE(59),
    [sym_binary] = STATE(59),
    [sym_octal] = STATE(59),
    [sym__constant] = STATE(59),
    [sym_float] = STATE(59),
    [sym_string] = STATE(59),
    [ts_builtin_sym_end] = ACTIONS(57),
    [anon_sym_LF] = ACTIONS(57),
    [sym_comment] = ACTIONS(17),
    [anon_sym_BYTE] = ACTIONS(19),
    [anon_sym_DWORD] = ACTIONS(19),
    [anon_sym_QWORD] = ACTIONS(19),
    [anon_sym_WORD] = ACTIONS(19),
    [anon_sym_byte] = ACTIONS(19),
    [anon_sym_dword] = ACTIONS(19),
    [anon_sym_qword] = ACTIONS(19),
    [anon_sym_word] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [aux_sym_hexadecimal_token1] = ACTIONS(23),
    [aux_sym_hexadecimal_token2] = ACTIONS(23),
    [aux_sym_hexadecimal_token3] = ACTIONS(23),
    [aux_sym_binary_token1] = ACTIONS(25),
    [aux_sym_binary_token2] = ACTIONS(25),
    [aux_sym_octal_token1] = ACTIONS(27),
    [aux_sym_octal_token2] = ACTIONS(27),
    [sym_register] = ACTIONS(39),
    [aux_sym_float_token1] = ACTIONS(31),
    [aux_sym_float_token2] = ACTIONS(31),
    [sym_integer] = ACTIONS(33),
    [aux_sym_string_token1] = ACTIONS(35),
    [aux_sym_string_token2] = ACTIONS(35),
    [sym_identifier] = ACTIONS(39),
  },
  [7] = {
    [sym__operand] = STATE(59),
    [sym_pointer] = STATE(59),
    [sym_pointer_width] = STATE(56),
    [sym__deregister] = STATE(53),
    [sym_hexadecimal] = STATE(59),
    [sym_binary] = STATE(59),
    [sym_octal] = STATE(59),
    [sym__constant] = STATE(59),
    [sym_float] = STATE(59),
    [sym_string] = STATE(59),
    [sym_comment] = ACTIONS(3),
    [anon_sym_BYTE] = ACTIONS(19),
    [anon_sym_DWORD] = ACTIONS(19),
    [anon_sym_QWORD] = ACTIONS(19),
    [anon_sym_WORD] = ACTIONS(19),
    [anon_sym_byte] = ACTIONS(19),
    [anon_sym_dword] = ACTIONS(19),
    [anon_sym_qword] = ACTIONS(19),
    [anon_sym_word] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(59),
    [aux_sym_hexadecimal_token1] = ACTIONS(23),
    [aux_sym_hexadecimal_token2] = ACTIONS(23),
    [aux_sym_hexadecimal_token3] = ACTIONS(23),
    [aux_sym_binary_token1] = ACTIONS(25),
    [aux_sym_binary_token2] = ACTIONS(25),
    [aux_sym_octal_token1] = ACTIONS(27),
    [aux_sym_octal_token2] = ACTIONS(27),
    [sym_register] = ACTIONS(39),
    [aux_sym_float_token1] = ACTIONS(31),
    [aux_sym_float_token2] = ACTIONS(31),
    [sym_integer] = ACTIONS(33),
    [aux_sym_string_token1] = ACTIONS(61),
    [aux_sym_string_token2] = ACTIONS(61),
    [sym_identifier] = ACTIONS(39),
  },
  [8] = {
    [sym__operand] = STATE(63),
    [sym_pointer] = STATE(63),
    [sym_pointer_width] = STATE(67),
    [sym__deregister] = STATE(65),
    [sym_hexadecimal] = STATE(63),
    [sym_binary] = STATE(63),
    [sym_octal] = STATE(63),
    [sym__constant] = STATE(63),
    [sym_float] = STATE(63),
    [sym_string] = STATE(63),
    [sym_comment] = ACTIONS(3),
    [anon_sym_BYTE] = ACTIONS(19),
    [anon_sym_DWORD] = ACTIONS(19),
    [anon_sym_QWORD] = ACTIONS(19),
    [anon_sym_WORD] = ACTIONS(19),
    [anon_sym_byte] = ACTIONS(19),
    [anon_sym_dword] = ACTIONS(19),
    [anon_sym_qword] = ACTIONS(19),
    [anon_sym_word] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(63),
    [aux_sym_hexadecimal_token1] = ACTIONS(43),
    [aux_sym_hexadecimal_token2] = ACTIONS(43),
    [aux_sym_hexadecimal_token3] = ACTIONS(43),
    [aux_sym_binary_token1] = ACTIONS(45),
    [aux_sym_binary_token2] = ACTIONS(45),
    [aux_sym_octal_token1] = ACTIONS(47),
    [aux_sym_octal_token2] = ACTIONS(47),
    [sym_register] = ACTIONS(49),
    [aux_sym_float_token1] = ACTIONS(51),
    [aux_sym_float_token2] = ACTIONS(51),
    [sym_integer] = ACTIONS(53),
    [aux_sym_string_token1] = ACTIONS(65),
    [aux_sym_string_token2] = ACTIONS(65),
    [sym_identifier] = ACTIONS(49),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(25), 2,
      aux_sym_binary_token1,
      aux_sym_binary_token2,
    ACTIONS(27), 2,
      aux_sym_octal_token1,
      aux_sym_octal_token2,
    ACTIONS(31), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(35), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(67), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(69), 2,
      sym_integer,
      sym_identifier,
    ACTIONS(23), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    STATE(35), 6,
      sym_hexadecimal,
      sym_binary,
      sym_octal,
      sym__constant,
      sym_float,
      sym_string,
  [41] = 9,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(25), 2,
      aux_sym_binary_token1,
      aux_sym_binary_token2,
    ACTIONS(27), 2,
      aux_sym_octal_token1,
      aux_sym_octal_token2,
    ACTIONS(31), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(35), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(71), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(73), 2,
      sym_integer,
      sym_identifier,
    ACTIONS(23), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    STATE(37), 6,
      sym_hexadecimal,
      sym_binary,
      sym_octal,
      sym__constant,
      sym_float,
      sym_string,
  [82] = 9,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(25), 2,
      aux_sym_binary_token1,
      aux_sym_binary_token2,
    ACTIONS(27), 2,
      aux_sym_octal_token1,
      aux_sym_octal_token2,
    ACTIONS(31), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(35), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(73), 2,
      sym_integer,
      sym_identifier,
    ACTIONS(75), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(23), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    STATE(37), 6,
      sym_hexadecimal,
      sym_binary,
      sym_octal,
      sym__constant,
      sym_float,
      sym_string,
  [123] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 2,
      aux_sym_binary_token1,
      aux_sym_binary_token2,
    ACTIONS(27), 2,
      aux_sym_octal_token1,
      aux_sym_octal_token2,
    ACTIONS(31), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(61), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(73), 2,
      sym_integer,
      sym_identifier,
    ACTIONS(23), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    STATE(37), 6,
      sym_hexadecimal,
      sym_binary,
      sym_octal,
      sym__constant,
      sym_float,
      sym_string,
  [160] = 7,
    ACTIONS(9), 1,
      sym_label,
    ACTIONS(11), 1,
      sym_gcc_mnemonic,
    ACTIONS(13), 1,
      sym_mnemonic,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    ACTIONS(79), 1,
      sym_comment,
    STATE(72), 2,
      sym__statement,
      sym_instruction,
    STATE(75), 2,
      sym__normal_instruction,
      sym__gcc_pseudo_op,
  [184] = 7,
    ACTIONS(9), 1,
      sym_label,
    ACTIONS(11), 1,
      sym_gcc_mnemonic,
    ACTIONS(13), 1,
      sym_mnemonic,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
    STATE(72), 2,
      sym__statement,
      sym_instruction,
    STATE(75), 2,
      sym__normal_instruction,
      sym__gcc_pseudo_op,
  [208] = 6,
    ACTIONS(11), 1,
      sym_gcc_mnemonic,
    ACTIONS(13), 1,
      sym_mnemonic,
    ACTIONS(17), 1,
      sym_comment,
    STATE(71), 1,
      sym_instruction,
    ACTIONS(83), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(75), 2,
      sym__normal_instruction,
      sym__gcc_pseudo_op,
  [229] = 6,
    ACTIONS(9), 1,
      sym_label,
    ACTIONS(11), 1,
      sym_gcc_mnemonic,
    ACTIONS(13), 1,
      sym_mnemonic,
    ACTIONS(79), 1,
      sym_comment,
    STATE(72), 2,
      sym__statement,
      sym_instruction,
    STATE(75), 2,
      sym__normal_instruction,
      sym__gcc_pseudo_op,
  [250] = 7,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
    ACTIONS(87), 1,
      anon_sym_LF,
    ACTIONS(89), 1,
      anon_sym_COMMA,
    ACTIONS(91), 1,
      anon_sym_,
    STATE(42), 1,
      aux_sym__normal_instruction_repeat2,
    STATE(43), 1,
      aux_sym__normal_instruction_repeat1,
  [272] = 5,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(93), 1,
      ts_builtin_sym_end,
    ACTIONS(95), 1,
      anon_sym_LF,
    STATE(18), 1,
      aux_sym__gcc_pseudo_op_repeat1,
    ACTIONS(97), 2,
      anon_sym_COMMA,
      anon_sym_,
  [289] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_RBRACK,
    STATE(30), 1,
      aux_sym__deregister_repeat1,
    ACTIONS(100), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
  [304] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      aux_sym_hexadecimal_token1,
    ACTIONS(108), 1,
      sym_register,
    STATE(27), 1,
      sym_hexadecimal,
    ACTIONS(106), 2,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
  [321] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      aux_sym_hexadecimal_token1,
    ACTIONS(110), 1,
      sym_register,
    STATE(28), 1,
      sym_hexadecimal,
    ACTIONS(106), 2,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
  [338] = 4,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(112), 1,
      ts_builtin_sym_end,
    ACTIONS(116), 1,
      anon_sym_LBRACK,
    ACTIONS(114), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [353] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      aux_sym_hexadecimal_token1,
    ACTIONS(118), 1,
      sym_register,
    STATE(34), 1,
      sym_hexadecimal,
    ACTIONS(106), 2,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
  [370] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_RBRACK,
    STATE(24), 1,
      aux_sym__deregister_repeat1,
    ACTIONS(120), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
  [385] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_RBRACK,
    STATE(24), 1,
      aux_sym__deregister_repeat1,
    ACTIONS(100), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
  [400] = 5,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    ACTIONS(127), 1,
      anon_sym_LF,
    STATE(18), 1,
      aux_sym__gcc_pseudo_op_repeat1,
    ACTIONS(129), 2,
      anon_sym_COMMA,
      anon_sym_,
  [417] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_RBRACK,
    STATE(25), 1,
      aux_sym__deregister_repeat1,
    ACTIONS(100), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
  [432] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      anon_sym_RBRACK,
    STATE(31), 1,
      aux_sym__deregister_repeat1,
    ACTIONS(100), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
  [447] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      aux_sym_hexadecimal_token1,
    ACTIONS(135), 1,
      sym_register,
    STATE(19), 1,
      sym_hexadecimal,
    ACTIONS(106), 2,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
  [464] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_RBRACK,
    STATE(24), 1,
      aux_sym__deregister_repeat1,
    ACTIONS(100), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
  [479] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_RBRACK,
    STATE(24), 1,
      aux_sym__deregister_repeat1,
    ACTIONS(100), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
  [494] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_RBRACK,
    STATE(24), 1,
      aux_sym__deregister_repeat1,
    ACTIONS(100), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
  [509] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      sym_integer,
    STATE(51), 1,
      sym_hexadecimal,
    ACTIONS(106), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
  [524] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      anon_sym_RBRACK,
    STATE(32), 1,
      aux_sym__deregister_repeat1,
    ACTIONS(100), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
  [539] = 5,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(143), 1,
      ts_builtin_sym_end,
    ACTIONS(145), 1,
      anon_sym_LF,
    STATE(26), 1,
      aux_sym__gcc_pseudo_op_repeat1,
    ACTIONS(147), 2,
      anon_sym_COMMA,
      anon_sym_,
  [556] = 4,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(114), 1,
      anon_sym_COMMA,
    ACTIONS(149), 1,
      anon_sym_LBRACK,
    ACTIONS(112), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [570] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(93), 1,
      ts_builtin_sym_end,
    ACTIONS(95), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [582] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(151), 1,
      ts_builtin_sym_end,
    ACTIONS(153), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [594] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(155), 1,
      ts_builtin_sym_end,
    ACTIONS(157), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [606] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(159), 1,
      ts_builtin_sym_end,
    ACTIONS(161), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [618] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(163), 1,
      ts_builtin_sym_end,
    ACTIONS(165), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [630] = 5,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    ACTIONS(167), 1,
      anon_sym_LF,
    ACTIONS(169), 1,
      anon_sym_,
    STATE(49), 1,
      aux_sym__normal_instruction_repeat2,
  [646] = 4,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_COMMA,
    STATE(47), 1,
      aux_sym__normal_instruction_repeat1,
    ACTIONS(57), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [660] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_RBRACK,
  [670] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(175), 1,
      ts_builtin_sym_end,
    ACTIONS(177), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [682] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(179), 1,
      ts_builtin_sym_end,
    ACTIONS(181), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [694] = 4,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    STATE(47), 1,
      aux_sym__normal_instruction_repeat1,
    ACTIONS(183), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [708] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(188), 1,
      ts_builtin_sym_end,
    ACTIONS(190), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [720] = 5,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(192), 1,
      ts_builtin_sym_end,
    ACTIONS(194), 1,
      anon_sym_LF,
    ACTIONS(196), 1,
      anon_sym_,
    STATE(49), 1,
      aux_sym__normal_instruction_repeat2,
  [736] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(173), 1,
      ts_builtin_sym_end,
    ACTIONS(199), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [748] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_RBRACK,
  [758] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(201), 1,
      ts_builtin_sym_end,
    ACTIONS(203), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [770] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(205), 1,
      ts_builtin_sym_end,
    ACTIONS(207), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [782] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_COMMA,
    ACTIONS(151), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [793] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_COMMA,
    ACTIONS(163), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [804] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_LBRACK,
    ACTIONS(209), 1,
      sym_integer,
    STATE(40), 1,
      sym__deregister,
  [817] = 4,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(211), 1,
      ts_builtin_sym_end,
    ACTIONS(213), 1,
      anon_sym_LF,
    STATE(58), 1,
      aux_sym_program_repeat1,
  [830] = 4,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
    ACTIONS(215), 1,
      anon_sym_LF,
    STATE(64), 1,
      aux_sym_program_repeat1,
  [843] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(192), 1,
      ts_builtin_sym_end,
    ACTIONS(194), 2,
      anon_sym_LF,
      anon_sym_,
  [854] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_COMMA,
    ACTIONS(188), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [865] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_COMMA,
    ACTIONS(179), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [876] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_COMMA,
    ACTIONS(155), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [887] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_COMMA,
    ACTIONS(183), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [898] = 4,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(219), 1,
      ts_builtin_sym_end,
    ACTIONS(221), 1,
      anon_sym_LF,
    STATE(64), 1,
      aux_sym_program_repeat1,
  [911] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_COMMA,
    ACTIONS(205), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [922] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_COMMA,
    ACTIONS(159), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [933] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_LBRACK,
    ACTIONS(224), 1,
      sym_integer,
    STATE(66), 1,
      sym__deregister,
  [946] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_COMMA,
    ACTIONS(201), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [957] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_COMMA,
    ACTIONS(175), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [968] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_COMMA,
    ACTIONS(173), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [979] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(226), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [987] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(219), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [995] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 2,
      anon_sym_LBRACK,
      sym_integer,
  [1003] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 2,
      anon_sym_PTR,
      anon_sym_ptr,
  [1011] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(232), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1019] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      ts_builtin_sym_end,
  [1026] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_LBRACK,
  [1033] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_LBRACK,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 41,
  [SMALL_STATE(11)] = 82,
  [SMALL_STATE(12)] = 123,
  [SMALL_STATE(13)] = 160,
  [SMALL_STATE(14)] = 184,
  [SMALL_STATE(15)] = 208,
  [SMALL_STATE(16)] = 229,
  [SMALL_STATE(17)] = 250,
  [SMALL_STATE(18)] = 272,
  [SMALL_STATE(19)] = 289,
  [SMALL_STATE(20)] = 304,
  [SMALL_STATE(21)] = 321,
  [SMALL_STATE(22)] = 338,
  [SMALL_STATE(23)] = 353,
  [SMALL_STATE(24)] = 370,
  [SMALL_STATE(25)] = 385,
  [SMALL_STATE(26)] = 400,
  [SMALL_STATE(27)] = 417,
  [SMALL_STATE(28)] = 432,
  [SMALL_STATE(29)] = 447,
  [SMALL_STATE(30)] = 464,
  [SMALL_STATE(31)] = 479,
  [SMALL_STATE(32)] = 494,
  [SMALL_STATE(33)] = 509,
  [SMALL_STATE(34)] = 524,
  [SMALL_STATE(35)] = 539,
  [SMALL_STATE(36)] = 556,
  [SMALL_STATE(37)] = 570,
  [SMALL_STATE(38)] = 582,
  [SMALL_STATE(39)] = 594,
  [SMALL_STATE(40)] = 606,
  [SMALL_STATE(41)] = 618,
  [SMALL_STATE(42)] = 630,
  [SMALL_STATE(43)] = 646,
  [SMALL_STATE(44)] = 660,
  [SMALL_STATE(45)] = 670,
  [SMALL_STATE(46)] = 682,
  [SMALL_STATE(47)] = 694,
  [SMALL_STATE(48)] = 708,
  [SMALL_STATE(49)] = 720,
  [SMALL_STATE(50)] = 736,
  [SMALL_STATE(51)] = 748,
  [SMALL_STATE(52)] = 758,
  [SMALL_STATE(53)] = 770,
  [SMALL_STATE(54)] = 782,
  [SMALL_STATE(55)] = 793,
  [SMALL_STATE(56)] = 804,
  [SMALL_STATE(57)] = 817,
  [SMALL_STATE(58)] = 830,
  [SMALL_STATE(59)] = 843,
  [SMALL_STATE(60)] = 854,
  [SMALL_STATE(61)] = 865,
  [SMALL_STATE(62)] = 876,
  [SMALL_STATE(63)] = 887,
  [SMALL_STATE(64)] = 898,
  [SMALL_STATE(65)] = 911,
  [SMALL_STATE(66)] = 922,
  [SMALL_STATE(67)] = 933,
  [SMALL_STATE(68)] = 946,
  [SMALL_STATE(69)] = 957,
  [SMALL_STATE(70)] = 968,
  [SMALL_STATE(71)] = 979,
  [SMALL_STATE(72)] = 987,
  [SMALL_STATE(73)] = 995,
  [SMALL_STATE(74)] = 1003,
  [SMALL_STATE(75)] = 1011,
  [SMALL_STATE(76)] = 1019,
  [SMALL_STATE(77)] = 1026,
  [SMALL_STATE(78)] = 1033,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__normal_instruction, 1),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__normal_instruction, 4),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__normal_instruction, 3),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gcc_pseudo_op, 1),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gcc_pseudo_op, 4),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gcc_pseudo_op, 3),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__normal_instruction, 2),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__normal_instruction, 2),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__gcc_pseudo_op_repeat1, 2),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__gcc_pseudo_op_repeat1, 2),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__gcc_pseudo_op_repeat1, 2), SHIFT_REPEAT(12),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant, 1),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__constant, 1),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__deregister_repeat1, 2), SHIFT_REPEAT(33),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__deregister_repeat1, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__gcc_pseudo_op, 3),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gcc_pseudo_op, 2),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__gcc_pseudo_op, 2),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer, 2),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pointer, 2),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__deregister, 3),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__deregister, 3),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__normal_instruction, 3),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hexadecimal, 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__deregister, 5),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__deregister, 5),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_octal, 1),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_octal, 1),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__normal_instruction_repeat1, 2),
  [185] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat1, 2), SHIFT_REPEAT(8),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary, 1),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary, 1),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__normal_instruction_repeat2, 2),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat2, 2),
  [196] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat2, 2), SHIFT_REPEAT(7),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hexadecimal, 1),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__deregister, 4),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__deregister, 4),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer, 1),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pointer, 1),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat1, 2),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(16),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_width, 2),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1),
  [234] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
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
