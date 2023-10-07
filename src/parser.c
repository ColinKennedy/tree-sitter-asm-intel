#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 77
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
  [24] = 24,
  [25] = 25,
  [26] = 20,
  [27] = 27,
  [28] = 25,
  [29] = 29,
  [30] = 30,
  [31] = 30,
  [32] = 18,
  [33] = 24,
  [34] = 22,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 21,
  [45] = 38,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 40,
  [54] = 54,
  [55] = 55,
  [56] = 36,
  [57] = 57,
  [58] = 58,
  [59] = 41,
  [60] = 43,
  [61] = 50,
  [62] = 42,
  [63] = 63,
  [64] = 63,
  [65] = 65,
  [66] = 52,
  [67] = 37,
  [68] = 38,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 74,
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
      if (eof) ADVANCE(89);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(93);
      if (lookahead == '$') ADVANCE(17);
      if (lookahead == '*') ADVANCE(122);
      if (lookahead == '+') ADVANCE(121);
      if (lookahead == ',') ADVANCE(95);
      if (lookahead == '-') ADVANCE(120);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '0') ADVANCE(36);
      if (lookahead == '1') ADVANCE(37);
      if (lookahead == 'B') ADVANCE(35);
      if (lookahead == 'D') ADVANCE(33);
      if (lookahead == 'P') ADVANCE(31);
      if (lookahead == 'Q') ADVANCE(34);
      if (lookahead == 'W') ADVANCE(24);
      if (lookahead == '[') ADVANCE(119);
      if (lookahead == '\\') SKIP(75)
      if (lookahead == ']') ADVANCE(123);
      if (lookahead == '_') ADVANCE(60);
      if (lookahead == 'b') ADVANCE(58);
      if (lookahead == 'd') ADVANCE(56);
      if (lookahead == 'p') ADVANCE(54);
      if (lookahead == 'q') ADVANCE(57);
      if (lookahead == 'w') ADVANCE(47);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(63);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(70);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(19);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == ':') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(19);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(92);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == ':') ADVANCE(94);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(19);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(92);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == '/') ADVANCE(15);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(19);
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
      if (lookahead == '\n') SKIP(59)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(59)
      if (lookahead == '\r') SKIP(9)
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(93);
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '-') ADVANCE(223);
      if (lookahead == '.') ADVANCE(237);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '0') ADVANCE(189);
      if (lookahead == '1') ADVANCE(190);
      if (lookahead == 'B') ADVANCE(228);
      if (lookahead == 'D') ADVANCE(226);
      if (lookahead == 'Q') ADVANCE(227);
      if (lookahead == 'W') ADVANCE(225);
      if (lookahead == '[') ADVANCE(119);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == '_') ADVANCE(234);
      if (lookahead == 'b') ADVANCE(233);
      if (lookahead == 'd') ADVANCE(231);
      if (lookahead == 'q') ADVANCE(232);
      if (lookahead == 'w') ADVANCE(230);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(195);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(245);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(194);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(11)
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(93);
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '-') ADVANCE(223);
      if (lookahead == '.') ADVANCE(237);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '0') ADVANCE(189);
      if (lookahead == '1') ADVANCE(190);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == '_') ADVANCE(234);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(195);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(12)
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(243);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(220);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(93);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(92);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(19);
      END_STATE();
    case 16:
      if (lookahead == '0') ADVANCE(205);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(207);
      END_STATE();
    case 17:
      if (lookahead == '0') ADVANCE(71);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == 'D') ADVANCE(107);
      END_STATE();
    case 21:
      if (lookahead == 'D') ADVANCE(103);
      END_STATE();
    case 22:
      if (lookahead == 'D') ADVANCE(105);
      END_STATE();
    case 23:
      if (lookahead == 'E') ADVANCE(101);
      END_STATE();
    case 24:
      if (lookahead == 'O') ADVANCE(28);
      END_STATE();
    case 25:
      if (lookahead == 'O') ADVANCE(29);
      END_STATE();
    case 26:
      if (lookahead == 'O') ADVANCE(30);
      END_STATE();
    case 27:
      if (lookahead == 'R') ADVANCE(117);
      END_STATE();
    case 28:
      if (lookahead == 'R') ADVANCE(20);
      END_STATE();
    case 29:
      if (lookahead == 'R') ADVANCE(21);
      END_STATE();
    case 30:
      if (lookahead == 'R') ADVANCE(22);
      END_STATE();
    case 31:
      if (lookahead == 'T') ADVANCE(27);
      END_STATE();
    case 32:
      if (lookahead == 'T') ADVANCE(23);
      END_STATE();
    case 33:
      if (lookahead == 'W') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      END_STATE();
    case 34:
      if (lookahead == 'W') ADVANCE(26);
      END_STATE();
    case 35:
      if (lookahead == 'Y') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      END_STATE();
    case 36:
      if (lookahead == '_') ADVANCE(60);
      if (lookahead == 'b') ADVANCE(133);
      if (lookahead == 'y') ADVANCE(137);
      if (lookahead == 'h' ||
          lookahead == 'x') ADVANCE(67);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(147);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(38);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(61);
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      END_STATE();
    case 37:
      if (lookahead == '_') ADVANCE(60);
      if (lookahead == 'b') ADVANCE(139);
      if (lookahead == 'y') ADVANCE(132);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(146);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(38);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(61);
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      END_STATE();
    case 38:
      if (lookahead == '_') ADVANCE(60);
      if (lookahead == 'b') ADVANCE(135);
      if (lookahead == 'y') ADVANCE(132);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(146);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(39);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(46);
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      END_STATE();
    case 39:
      if (lookahead == '_') ADVANCE(60);
      if (lookahead == 'h') ADVANCE(124);
      if (lookahead == 'b' ||
          lookahead == 'y') ADVANCE(132);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(146);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(40);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(62);
      END_STATE();
    case 40:
      if (lookahead == '_') ADVANCE(60);
      if (lookahead == 'b' ||
          lookahead == 'y') ADVANCE(132);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(146);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(40);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(62);
      END_STATE();
    case 41:
      if (lookahead == 'd') ADVANCE(115);
      END_STATE();
    case 42:
      if (lookahead == 'd') ADVANCE(111);
      END_STATE();
    case 43:
      if (lookahead == 'd') ADVANCE(113);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 45:
      if (lookahead == 'h') ADVANCE(124);
      END_STATE();
    case 46:
      if (lookahead == 'h') ADVANCE(124);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(62);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 50:
      if (lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 51:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 52:
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 53:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 54:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 56:
      if (lookahead == 'w') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      END_STATE();
    case 57:
      if (lookahead == 'w') ADVANCE(49);
      END_STATE();
    case 58:
      if (lookahead == 'y') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      END_STATE();
    case 59:
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(93);
      if (lookahead == '$') ADVANCE(17);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '0') ADVANCE(203);
      if (lookahead == '[') ADVANCE(119);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(59)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(204);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 60:
      if (lookahead == 'b' ||
          lookahead == 'y') ADVANCE(132);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(60);
      END_STATE();
    case 61:
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(46);
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      END_STATE();
    case 62:
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(62);
      END_STATE();
    case 63:
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(61);
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(184);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(130);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(128);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(176);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      END_STATE();
    case 72:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 73:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 74:
      if (eof) ADVANCE(89);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 75:
      if (eof) ADVANCE(89);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(74)
      END_STATE();
    case 76:
      if (eof) ADVANCE(89);
      if (lookahead == '\n') SKIP(76)
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(92);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == '/') ADVANCE(15);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(19);
      END_STATE();
    case 77:
      if (eof) ADVANCE(89);
      if (lookahead == '\n') SKIP(79)
      END_STATE();
    case 78:
      if (eof) ADVANCE(89);
      if (lookahead == '\n') SKIP(79)
      if (lookahead == '\r') SKIP(77)
      END_STATE();
    case 79:
      if (eof) ADVANCE(89);
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(93);
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == ',') ADVANCE(95);
      if (lookahead == '-') ADVANCE(223);
      if (lookahead == '.') ADVANCE(237);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '0') ADVANCE(189);
      if (lookahead == '1') ADVANCE(190);
      if (lookahead == 'B') ADVANCE(228);
      if (lookahead == 'D') ADVANCE(226);
      if (lookahead == 'Q') ADVANCE(227);
      if (lookahead == 'W') ADVANCE(225);
      if (lookahead == '[') ADVANCE(119);
      if (lookahead == '\\') SKIP(78)
      if (lookahead == '_') ADVANCE(234);
      if (lookahead == 'b') ADVANCE(233);
      if (lookahead == 'd') ADVANCE(231);
      if (lookahead == 'q') ADVANCE(232);
      if (lookahead == 'w') ADVANCE(230);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(195);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(245);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(79)
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(235);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 80:
      if (eof) ADVANCE(89);
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(93);
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '-') ADVANCE(223);
      if (lookahead == '.') ADVANCE(237);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '0') ADVANCE(189);
      if (lookahead == '1') ADVANCE(190);
      if (lookahead == '\\') SKIP(83)
      if (lookahead == '_') ADVANCE(234);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(195);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(80)
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(243);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 81:
      if (eof) ADVANCE(89);
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(93);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '\\') SKIP(85)
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(81)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 82:
      if (eof) ADVANCE(89);
      if (lookahead == '\n') SKIP(80)
      END_STATE();
    case 83:
      if (eof) ADVANCE(89);
      if (lookahead == '\n') SKIP(80)
      if (lookahead == '\r') SKIP(82)
      END_STATE();
    case 84:
      if (eof) ADVANCE(89);
      if (lookahead == '\n') SKIP(81)
      END_STATE();
    case 85:
      if (eof) ADVANCE(89);
      if (lookahead == '\n') SKIP(81)
      if (lookahead == '\r') SKIP(84)
      END_STATE();
    case 86:
      if (eof) ADVANCE(89);
      if (lookahead == '\n') SKIP(88)
      END_STATE();
    case 87:
      if (eof) ADVANCE(89);
      if (lookahead == '\n') SKIP(88)
      if (lookahead == '\r') SKIP(86)
      END_STATE();
    case 88:
      if (eof) ADVANCE(89);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == ' ') ADVANCE(96);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(93);
      if (lookahead == ',') ADVANCE(95);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '[') ADVANCE(119);
      if (lookahead == '\\') SKIP(87)
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(88)
      END_STATE();
    case 89:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == ' ') ADVANCE(96);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '"') ADVANCE(93);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(19);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == ' ') ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_gcc_mnemonic);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(19);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_gcc_mnemonic);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_mnemonic);
      if (lookahead == ':') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(19);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_mnemonic);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_BYTE);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_BYTE);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_DWORD);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_DWORD);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_QWORD);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_QWORD);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_WORD);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_WORD);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_byte);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_byte);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_dword);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_dword);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_qword);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_qword);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_word);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_word);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_PTR);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_ptr);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_hexadecimal_token1);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_hexadecimal_token1);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_hexadecimal_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_hexadecimal_token1);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(245);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_hexadecimal_token2);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_hexadecimal_token2);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(245);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_hexadecimal_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_hexadecimal_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(131);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (lookahead == '_') ADVANCE(144);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(142);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (lookahead == '_') ADVANCE(145);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(143);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(229);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (lookahead == 'h') ADVANCE(124);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (lookahead == 'h') ADVANCE(127);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(245);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(144);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(145);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('2' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(229);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(245);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_binary_token2);
      if (lookahead == 'h') ADVANCE(124);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(144);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_binary_token2);
      if (lookahead == 'h') ADVANCE(127);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(145);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('2' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_binary_token2);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_binary_token2);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(145);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('2' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_octal_token1);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_octal_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(150);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_octal_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(151);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(245);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_octal_token1);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(245);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_octal_token2);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(150);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_octal_token2);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(151);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(245);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'D') ADVANCE(108);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'D') ADVANCE(104);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'D') ADVANCE(106);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'E') ADVANCE(102);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'O') ADVANCE(159);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
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
          lookahead == '@') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'R') ADVANCE(152);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
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
          lookahead == '@') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
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
          lookahead == '@') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'T') ADVANCE(155);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'd') ADVANCE(116);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'd') ADVANCE(112);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'd') ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'e') ADVANCE(110);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'h') ADVANCE(125);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'h') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'o') ADVANCE(171);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
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
          lookahead == '@') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'r') ADVANCE(162);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
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
          lookahead == '@') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
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
          lookahead == '@') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 't') ADVANCE(165);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(166);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(175);
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
          lookahead == '@') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(167);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == '.') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(178);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == '.') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == 'e') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(180);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_float_token1);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == '.') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == '.') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(184);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == 'e') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(180);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(187);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_integer);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == '_') ADVANCE(234);
      if (lookahead == 'b') ADVANCE(134);
      if (lookahead == 'd') ADVANCE(214);
      if (lookahead == 'y') ADVANCE(138);
      if (lookahead == 'h' ||
          lookahead == 'x') ADVANCE(241);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(148);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(191);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(202);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(201);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(240);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == '_') ADVANCE(234);
      if (lookahead == 'b') ADVANCE(140);
      if (lookahead == 'd') ADVANCE(218);
      if (lookahead == 'y') ADVANCE(141);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(149);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(191);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(202);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(201);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(240);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == '_') ADVANCE(234);
      if (lookahead == 'b') ADVANCE(136);
      if (lookahead == 'd') ADVANCE(212);
      if (lookahead == 'y') ADVANCE(141);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(149);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(192);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(198);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(197);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(229);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == '_') ADVANCE(234);
      if (lookahead == 'd') ADVANCE(219);
      if (lookahead == 'h') ADVANCE(127);
      if (lookahead == 'b' ||
          lookahead == 'y') ADVANCE(141);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(149);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(193);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(200);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(199);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == '_') ADVANCE(234);
      if (lookahead == 'd') ADVANCE(219);
      if (lookahead == 'b' ||
          lookahead == 'y') ADVANCE(141);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(149);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(193);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(200);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(199);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == 'd') ADVANCE(218);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(149);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(201);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(240);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == 'd') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(202);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(240);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == 'd') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(200);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == 'd') ADVANCE(219);
      if (lookahead == 'h') ADVANCE(127);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(149);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(199);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == 'd') ADVANCE(219);
      if (lookahead == 'h') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(200);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == 'd') ADVANCE(219);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(149);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(199);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == 'd') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(200);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == 'd') ADVANCE(212);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(149);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(197);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(229);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == 'd') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(229);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'd') ADVANCE(216);
      if (lookahead == 'h' ||
          lookahead == 'x') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'd') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'd') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(207);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'd') ADVANCE(188);
      if (lookahead == 'h') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(207);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'd') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(207);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'd') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'h') ADVANCE(124);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'h') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(215);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'h') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'h') ADVANCE(127);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(245);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(211);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(229);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(215);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(210);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(229);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_integer);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(245);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+') ADVANCE(64);
      if (lookahead == '-') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(178);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+') ADVANCE(65);
      if (lookahead == '-') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(237);
      if (lookahead == '0') ADVANCE(196);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(200);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '0') ADVANCE(244);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(245);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(158);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'W') ADVANCE(156);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(174);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'W') ADVANCE(157);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Y') ADVANCE(161);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(174);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(127);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(245);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(170);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(168);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(174);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(169);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(173);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(174);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b' ||
          lookahead == 'y') ADVANCE(141);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(234);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('2' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(174);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(180);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(178);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(229);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(131);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(129);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(240);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 244:
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
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(245);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 76},
  [2] = {.lex_state = 79},
  [3] = {.lex_state = 79},
  [4] = {.lex_state = 79},
  [5] = {.lex_state = 79},
  [6] = {.lex_state = 79},
  [7] = {.lex_state = 11},
  [8] = {.lex_state = 11},
  [9] = {.lex_state = 80},
  [10] = {.lex_state = 80},
  [11] = {.lex_state = 80},
  [12] = {.lex_state = 12},
  [13] = {.lex_state = 76},
  [14] = {.lex_state = 76},
  [15] = {.lex_state = 81},
  [16] = {.lex_state = 76},
  [17] = {.lex_state = 88},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 59},
  [21] = {.lex_state = 88},
  [22] = {.lex_state = 59},
  [23] = {.lex_state = 88},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 59},
  [27] = {.lex_state = 88},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 59},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 59},
  [35] = {.lex_state = 88},
  [36] = {.lex_state = 88},
  [37] = {.lex_state = 88},
  [38] = {.lex_state = 88},
  [39] = {.lex_state = 88},
  [40] = {.lex_state = 88},
  [41] = {.lex_state = 88},
  [42] = {.lex_state = 88},
  [43] = {.lex_state = 88},
  [44] = {.lex_state = 79},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 79},
  [47] = {.lex_state = 88},
  [48] = {.lex_state = 88},
  [49] = {.lex_state = 79},
  [50] = {.lex_state = 88},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 88},
  [53] = {.lex_state = 79},
  [54] = {.lex_state = 88},
  [55] = {.lex_state = 79},
  [56] = {.lex_state = 79},
  [57] = {.lex_state = 79},
  [58] = {.lex_state = 79},
  [59] = {.lex_state = 79},
  [60] = {.lex_state = 79},
  [61] = {.lex_state = 79},
  [62] = {.lex_state = 79},
  [63] = {.lex_state = 59},
  [64] = {.lex_state = 59},
  [65] = {.lex_state = 79},
  [66] = {.lex_state = 79},
  [67] = {.lex_state = 79},
  [68] = {.lex_state = 79},
  [69] = {.lex_state = 79},
  [70] = {.lex_state = 79},
  [71] = {.lex_state = 79},
  [72] = {.lex_state = 59},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
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
    [sym_string] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(75),
    [sym__statement] = STATE(55),
    [sym_instruction] = STATE(55),
    [sym__normal_instruction] = STATE(69),
    [sym__gcc_pseudo_op] = STATE(69),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [sym_label] = ACTIONS(9),
    [sym_gcc_mnemonic] = ACTIONS(11),
    [sym_mnemonic] = ACTIONS(13),
  },
  [2] = {
    [sym__operand] = STATE(17),
    [sym_pointer] = STATE(17),
    [sym_pointer_width] = STATE(64),
    [sym__deregister] = STATE(36),
    [sym_hexadecimal] = STATE(17),
    [sym_binary] = STATE(17),
    [sym_octal] = STATE(17),
    [sym__constant] = STATE(17),
    [sym_float] = STATE(17),
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
    [sym_string] = ACTIONS(29),
    [sym_identifier] = ACTIONS(29),
  },
  [3] = {
    [sym__operand] = STATE(65),
    [sym_pointer] = STATE(65),
    [sym_pointer_width] = STATE(63),
    [sym__deregister] = STATE(56),
    [sym_hexadecimal] = STATE(65),
    [sym_binary] = STATE(65),
    [sym_octal] = STATE(65),
    [sym__constant] = STATE(65),
    [sym_float] = STATE(65),
    [ts_builtin_sym_end] = ACTIONS(35),
    [anon_sym_LF] = ACTIONS(35),
    [sym_comment] = ACTIONS(17),
    [anon_sym_BYTE] = ACTIONS(19),
    [anon_sym_DWORD] = ACTIONS(19),
    [anon_sym_QWORD] = ACTIONS(19),
    [anon_sym_WORD] = ACTIONS(19),
    [anon_sym_byte] = ACTIONS(19),
    [anon_sym_dword] = ACTIONS(19),
    [anon_sym_qword] = ACTIONS(19),
    [anon_sym_word] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(37),
    [aux_sym_hexadecimal_token1] = ACTIONS(39),
    [aux_sym_hexadecimal_token2] = ACTIONS(39),
    [aux_sym_hexadecimal_token3] = ACTIONS(39),
    [aux_sym_binary_token1] = ACTIONS(41),
    [aux_sym_binary_token2] = ACTIONS(41),
    [aux_sym_octal_token1] = ACTIONS(43),
    [aux_sym_octal_token2] = ACTIONS(43),
    [sym_register] = ACTIONS(45),
    [aux_sym_float_token1] = ACTIONS(47),
    [aux_sym_float_token2] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [sym_string] = ACTIONS(45),
    [sym_identifier] = ACTIONS(45),
  },
  [4] = {
    [sym__operand] = STATE(54),
    [sym_pointer] = STATE(54),
    [sym_pointer_width] = STATE(64),
    [sym__deregister] = STATE(36),
    [sym_hexadecimal] = STATE(54),
    [sym_binary] = STATE(54),
    [sym_octal] = STATE(54),
    [sym__constant] = STATE(54),
    [sym_float] = STATE(54),
    [ts_builtin_sym_end] = ACTIONS(35),
    [anon_sym_LF] = ACTIONS(35),
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
    [sym_register] = ACTIONS(51),
    [aux_sym_float_token1] = ACTIONS(31),
    [aux_sym_float_token2] = ACTIONS(31),
    [sym_integer] = ACTIONS(33),
    [sym_string] = ACTIONS(51),
    [sym_identifier] = ACTIONS(51),
  },
  [5] = {
    [sym__operand] = STATE(54),
    [sym_pointer] = STATE(54),
    [sym_pointer_width] = STATE(64),
    [sym__deregister] = STATE(36),
    [sym_hexadecimal] = STATE(54),
    [sym_binary] = STATE(54),
    [sym_octal] = STATE(54),
    [sym__constant] = STATE(54),
    [sym_float] = STATE(54),
    [ts_builtin_sym_end] = ACTIONS(53),
    [anon_sym_LF] = ACTIONS(53),
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
    [sym_register] = ACTIONS(51),
    [aux_sym_float_token1] = ACTIONS(31),
    [aux_sym_float_token2] = ACTIONS(31),
    [sym_integer] = ACTIONS(33),
    [sym_string] = ACTIONS(51),
    [sym_identifier] = ACTIONS(51),
  },
  [6] = {
    [sym__operand] = STATE(65),
    [sym_pointer] = STATE(65),
    [sym_pointer_width] = STATE(63),
    [sym__deregister] = STATE(56),
    [sym_hexadecimal] = STATE(65),
    [sym_binary] = STATE(65),
    [sym_octal] = STATE(65),
    [sym__constant] = STATE(65),
    [sym_float] = STATE(65),
    [ts_builtin_sym_end] = ACTIONS(53),
    [anon_sym_LF] = ACTIONS(53),
    [sym_comment] = ACTIONS(17),
    [anon_sym_BYTE] = ACTIONS(19),
    [anon_sym_DWORD] = ACTIONS(19),
    [anon_sym_QWORD] = ACTIONS(19),
    [anon_sym_WORD] = ACTIONS(19),
    [anon_sym_byte] = ACTIONS(19),
    [anon_sym_dword] = ACTIONS(19),
    [anon_sym_qword] = ACTIONS(19),
    [anon_sym_word] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(37),
    [aux_sym_hexadecimal_token1] = ACTIONS(39),
    [aux_sym_hexadecimal_token2] = ACTIONS(39),
    [aux_sym_hexadecimal_token3] = ACTIONS(39),
    [aux_sym_binary_token1] = ACTIONS(41),
    [aux_sym_binary_token2] = ACTIONS(41),
    [aux_sym_octal_token1] = ACTIONS(43),
    [aux_sym_octal_token2] = ACTIONS(43),
    [sym_register] = ACTIONS(45),
    [aux_sym_float_token1] = ACTIONS(47),
    [aux_sym_float_token2] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [sym_string] = ACTIONS(45),
    [sym_identifier] = ACTIONS(45),
  },
  [7] = {
    [sym__operand] = STATE(54),
    [sym_pointer] = STATE(54),
    [sym_pointer_width] = STATE(64),
    [sym__deregister] = STATE(36),
    [sym_hexadecimal] = STATE(54),
    [sym_binary] = STATE(54),
    [sym_octal] = STATE(54),
    [sym__constant] = STATE(54),
    [sym_float] = STATE(54),
    [sym_comment] = ACTIONS(3),
    [anon_sym_BYTE] = ACTIONS(19),
    [anon_sym_DWORD] = ACTIONS(19),
    [anon_sym_QWORD] = ACTIONS(19),
    [anon_sym_WORD] = ACTIONS(19),
    [anon_sym_byte] = ACTIONS(19),
    [anon_sym_dword] = ACTIONS(19),
    [anon_sym_qword] = ACTIONS(19),
    [anon_sym_word] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(55),
    [aux_sym_hexadecimal_token1] = ACTIONS(23),
    [aux_sym_hexadecimal_token2] = ACTIONS(23),
    [aux_sym_hexadecimal_token3] = ACTIONS(23),
    [aux_sym_binary_token1] = ACTIONS(25),
    [aux_sym_binary_token2] = ACTIONS(25),
    [aux_sym_octal_token1] = ACTIONS(27),
    [aux_sym_octal_token2] = ACTIONS(27),
    [sym_register] = ACTIONS(51),
    [aux_sym_float_token1] = ACTIONS(31),
    [aux_sym_float_token2] = ACTIONS(31),
    [sym_integer] = ACTIONS(33),
    [sym_string] = ACTIONS(57),
    [sym_identifier] = ACTIONS(51),
  },
  [8] = {
    [sym__operand] = STATE(65),
    [sym_pointer] = STATE(65),
    [sym_pointer_width] = STATE(63),
    [sym__deregister] = STATE(56),
    [sym_hexadecimal] = STATE(65),
    [sym_binary] = STATE(65),
    [sym_octal] = STATE(65),
    [sym__constant] = STATE(65),
    [sym_float] = STATE(65),
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
    [aux_sym_hexadecimal_token1] = ACTIONS(39),
    [aux_sym_hexadecimal_token2] = ACTIONS(39),
    [aux_sym_hexadecimal_token3] = ACTIONS(39),
    [aux_sym_binary_token1] = ACTIONS(41),
    [aux_sym_binary_token2] = ACTIONS(41),
    [aux_sym_octal_token1] = ACTIONS(43),
    [aux_sym_octal_token2] = ACTIONS(43),
    [sym_register] = ACTIONS(45),
    [aux_sym_float_token1] = ACTIONS(47),
    [aux_sym_float_token2] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [sym_string] = ACTIONS(61),
    [sym_identifier] = ACTIONS(45),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
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
    ACTIONS(63), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(23), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    ACTIONS(65), 3,
      sym_integer,
      sym_string,
      sym_identifier,
    STATE(27), 5,
      sym_hexadecimal,
      sym_binary,
      sym_octal,
      sym__constant,
      sym_float,
  [37] = 8,
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
    ACTIONS(67), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(23), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    ACTIONS(69), 3,
      sym_integer,
      sym_string,
      sym_identifier,
    STATE(39), 5,
      sym_hexadecimal,
      sym_binary,
      sym_octal,
      sym__constant,
      sym_float,
  [74] = 8,
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
    ACTIONS(71), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(23), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    ACTIONS(69), 3,
      sym_integer,
      sym_string,
      sym_identifier,
    STATE(39), 5,
      sym_hexadecimal,
      sym_binary,
      sym_octal,
      sym__constant,
      sym_float,
  [111] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym_string,
    ACTIONS(25), 2,
      aux_sym_binary_token1,
      aux_sym_binary_token2,
    ACTIONS(27), 2,
      aux_sym_octal_token1,
      aux_sym_octal_token2,
    ACTIONS(31), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(69), 2,
      sym_integer,
      sym_identifier,
    ACTIONS(23), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    STATE(39), 5,
      sym_hexadecimal,
      sym_binary,
      sym_octal,
      sym__constant,
      sym_float,
  [146] = 7,
    ACTIONS(9), 1,
      sym_label,
    ACTIONS(11), 1,
      sym_gcc_mnemonic,
    ACTIONS(13), 1,
      sym_mnemonic,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      sym_comment,
    STATE(69), 2,
      sym__normal_instruction,
      sym__gcc_pseudo_op,
    STATE(70), 2,
      sym__statement,
      sym_instruction,
  [170] = 7,
    ACTIONS(9), 1,
      sym_label,
    ACTIONS(11), 1,
      sym_gcc_mnemonic,
    ACTIONS(13), 1,
      sym_mnemonic,
    ACTIONS(77), 1,
      sym_comment,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    STATE(69), 2,
      sym__normal_instruction,
      sym__gcc_pseudo_op,
    STATE(70), 2,
      sym__statement,
      sym_instruction,
  [194] = 6,
    ACTIONS(11), 1,
      sym_gcc_mnemonic,
    ACTIONS(13), 1,
      sym_mnemonic,
    ACTIONS(17), 1,
      sym_comment,
    STATE(71), 1,
      sym_instruction,
    ACTIONS(81), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(69), 2,
      sym__normal_instruction,
      sym__gcc_pseudo_op,
  [215] = 6,
    ACTIONS(9), 1,
      sym_label,
    ACTIONS(11), 1,
      sym_gcc_mnemonic,
    ACTIONS(13), 1,
      sym_mnemonic,
    ACTIONS(77), 1,
      sym_comment,
    STATE(69), 2,
      sym__normal_instruction,
      sym__gcc_pseudo_op,
    STATE(70), 2,
      sym__statement,
      sym_instruction,
  [236] = 7,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
    ACTIONS(85), 1,
      anon_sym_LF,
    ACTIONS(87), 1,
      anon_sym_COMMA,
    ACTIONS(89), 1,
      anon_sym_,
    STATE(47), 1,
      aux_sym__normal_instruction_repeat2,
    STATE(49), 1,
      aux_sym__normal_instruction_repeat1,
  [258] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_RBRACK,
    STATE(19), 1,
      aux_sym__deregister_repeat1,
    ACTIONS(91), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
  [273] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_RBRACK,
    STATE(19), 1,
      aux_sym__deregister_repeat1,
    ACTIONS(95), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
  [288] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      aux_sym_hexadecimal_token1,
    ACTIONS(104), 1,
      sym_register,
    STATE(30), 1,
      sym_hexadecimal,
    ACTIONS(102), 2,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
  [305] = 4,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(106), 1,
      ts_builtin_sym_end,
    ACTIONS(110), 1,
      anon_sym_LBRACK,
    ACTIONS(108), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [320] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      aux_sym_hexadecimal_token1,
    ACTIONS(112), 1,
      sym_register,
    STATE(25), 1,
      sym_hexadecimal,
    ACTIONS(102), 2,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
  [337] = 5,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    ACTIONS(114), 1,
      anon_sym_LF,
    STATE(35), 1,
      aux_sym__gcc_pseudo_op_repeat1,
    ACTIONS(116), 2,
      anon_sym_COMMA,
      anon_sym_,
  [354] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      anon_sym_RBRACK,
    STATE(19), 1,
      aux_sym__deregister_repeat1,
    ACTIONS(91), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
  [369] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_RBRACK,
    STATE(32), 1,
      aux_sym__deregister_repeat1,
    ACTIONS(91), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
  [384] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      aux_sym_hexadecimal_token1,
    ACTIONS(122), 1,
      sym_register,
    STATE(31), 1,
      sym_hexadecimal,
    ACTIONS(102), 2,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
  [401] = 5,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(124), 1,
      ts_builtin_sym_end,
    ACTIONS(126), 1,
      anon_sym_LF,
    STATE(23), 1,
      aux_sym__gcc_pseudo_op_repeat1,
    ACTIONS(128), 2,
      anon_sym_COMMA,
      anon_sym_,
  [418] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_RBRACK,
    STATE(18), 1,
      aux_sym__deregister_repeat1,
    ACTIONS(91), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
  [433] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      sym_integer,
    STATE(51), 1,
      sym_hexadecimal,
    ACTIONS(102), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
  [448] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_RBRACK,
    STATE(33), 1,
      aux_sym__deregister_repeat1,
    ACTIONS(91), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
  [463] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      anon_sym_RBRACK,
    STATE(24), 1,
      aux_sym__deregister_repeat1,
    ACTIONS(91), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
  [478] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      anon_sym_RBRACK,
    STATE(19), 1,
      aux_sym__deregister_repeat1,
    ACTIONS(91), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
  [493] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_RBRACK,
    STATE(19), 1,
      aux_sym__deregister_repeat1,
    ACTIONS(91), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
  [508] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      aux_sym_hexadecimal_token1,
    ACTIONS(138), 1,
      sym_register,
    STATE(28), 1,
      sym_hexadecimal,
    ACTIONS(102), 2,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
  [525] = 5,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(140), 1,
      ts_builtin_sym_end,
    ACTIONS(142), 1,
      anon_sym_LF,
    STATE(35), 1,
      aux_sym__gcc_pseudo_op_repeat1,
    ACTIONS(144), 2,
      anon_sym_COMMA,
      anon_sym_,
  [542] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(147), 1,
      ts_builtin_sym_end,
    ACTIONS(149), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [554] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(151), 1,
      ts_builtin_sym_end,
    ACTIONS(153), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [566] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(155), 1,
      ts_builtin_sym_end,
    ACTIONS(157), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [578] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(140), 1,
      ts_builtin_sym_end,
    ACTIONS(142), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [590] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(159), 1,
      ts_builtin_sym_end,
    ACTIONS(161), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [602] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(163), 1,
      ts_builtin_sym_end,
    ACTIONS(165), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [614] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(167), 1,
      ts_builtin_sym_end,
    ACTIONS(169), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [626] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(171), 1,
      ts_builtin_sym_end,
    ACTIONS(173), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [638] = 4,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_COMMA,
    ACTIONS(175), 1,
      anon_sym_LBRACK,
    ACTIONS(106), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [652] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_RBRACK,
  [662] = 4,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_COMMA,
    STATE(46), 1,
      aux_sym__normal_instruction_repeat1,
    ACTIONS(177), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [676] = 5,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    ACTIONS(182), 1,
      anon_sym_LF,
    ACTIONS(184), 1,
      anon_sym_,
    STATE(48), 1,
      aux_sym__normal_instruction_repeat2,
  [692] = 5,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(186), 1,
      ts_builtin_sym_end,
    ACTIONS(188), 1,
      anon_sym_LF,
    ACTIONS(190), 1,
      anon_sym_,
    STATE(48), 1,
      aux_sym__normal_instruction_repeat2,
  [708] = 4,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_COMMA,
    STATE(46), 1,
      aux_sym__normal_instruction_repeat1,
    ACTIONS(53), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [722] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(195), 1,
      ts_builtin_sym_end,
    ACTIONS(197), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [734] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_RBRACK,
  [744] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(199), 1,
      ts_builtin_sym_end,
    ACTIONS(201), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [756] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_COMMA,
    ACTIONS(159), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [767] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(186), 1,
      ts_builtin_sym_end,
    ACTIONS(188), 2,
      anon_sym_LF,
      anon_sym_,
  [778] = 4,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(203), 1,
      ts_builtin_sym_end,
    ACTIONS(205), 1,
      anon_sym_LF,
    STATE(58), 1,
      aux_sym_program_repeat1,
  [791] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_COMMA,
    ACTIONS(147), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [802] = 4,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(207), 1,
      ts_builtin_sym_end,
    ACTIONS(209), 1,
      anon_sym_LF,
    STATE(57), 1,
      aux_sym_program_repeat1,
  [815] = 4,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    ACTIONS(212), 1,
      anon_sym_LF,
    STATE(57), 1,
      aux_sym_program_repeat1,
  [828] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_COMMA,
    ACTIONS(163), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [839] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    ACTIONS(171), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [850] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_COMMA,
    ACTIONS(195), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [861] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_COMMA,
    ACTIONS(167), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [872] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_LBRACK,
    ACTIONS(214), 1,
      sym_integer,
    STATE(62), 1,
      sym__deregister,
  [885] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_LBRACK,
    ACTIONS(216), 1,
      sym_integer,
    STATE(42), 1,
      sym__deregister,
  [898] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_COMMA,
    ACTIONS(177), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [909] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_COMMA,
    ACTIONS(199), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [920] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_COMMA,
    ACTIONS(151), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [931] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_COMMA,
    ACTIONS(155), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [942] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(220), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [950] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(207), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [958] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(222), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [966] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 2,
      anon_sym_LBRACK,
      sym_integer,
  [974] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 2,
      anon_sym_PTR,
      anon_sym_ptr,
  [982] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_LBRACK,
  [989] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      ts_builtin_sym_end,
  [996] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_LBRACK,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 37,
  [SMALL_STATE(11)] = 74,
  [SMALL_STATE(12)] = 111,
  [SMALL_STATE(13)] = 146,
  [SMALL_STATE(14)] = 170,
  [SMALL_STATE(15)] = 194,
  [SMALL_STATE(16)] = 215,
  [SMALL_STATE(17)] = 236,
  [SMALL_STATE(18)] = 258,
  [SMALL_STATE(19)] = 273,
  [SMALL_STATE(20)] = 288,
  [SMALL_STATE(21)] = 305,
  [SMALL_STATE(22)] = 320,
  [SMALL_STATE(23)] = 337,
  [SMALL_STATE(24)] = 354,
  [SMALL_STATE(25)] = 369,
  [SMALL_STATE(26)] = 384,
  [SMALL_STATE(27)] = 401,
  [SMALL_STATE(28)] = 418,
  [SMALL_STATE(29)] = 433,
  [SMALL_STATE(30)] = 448,
  [SMALL_STATE(31)] = 463,
  [SMALL_STATE(32)] = 478,
  [SMALL_STATE(33)] = 493,
  [SMALL_STATE(34)] = 508,
  [SMALL_STATE(35)] = 525,
  [SMALL_STATE(36)] = 542,
  [SMALL_STATE(37)] = 554,
  [SMALL_STATE(38)] = 566,
  [SMALL_STATE(39)] = 578,
  [SMALL_STATE(40)] = 590,
  [SMALL_STATE(41)] = 602,
  [SMALL_STATE(42)] = 614,
  [SMALL_STATE(43)] = 626,
  [SMALL_STATE(44)] = 638,
  [SMALL_STATE(45)] = 652,
  [SMALL_STATE(46)] = 662,
  [SMALL_STATE(47)] = 676,
  [SMALL_STATE(48)] = 692,
  [SMALL_STATE(49)] = 708,
  [SMALL_STATE(50)] = 722,
  [SMALL_STATE(51)] = 734,
  [SMALL_STATE(52)] = 744,
  [SMALL_STATE(53)] = 756,
  [SMALL_STATE(54)] = 767,
  [SMALL_STATE(55)] = 778,
  [SMALL_STATE(56)] = 791,
  [SMALL_STATE(57)] = 802,
  [SMALL_STATE(58)] = 815,
  [SMALL_STATE(59)] = 828,
  [SMALL_STATE(60)] = 839,
  [SMALL_STATE(61)] = 850,
  [SMALL_STATE(62)] = 861,
  [SMALL_STATE(63)] = 872,
  [SMALL_STATE(64)] = 885,
  [SMALL_STATE(65)] = 898,
  [SMALL_STATE(66)] = 909,
  [SMALL_STATE(67)] = 920,
  [SMALL_STATE(68)] = 931,
  [SMALL_STATE(69)] = 942,
  [SMALL_STATE(70)] = 950,
  [SMALL_STATE(71)] = 958,
  [SMALL_STATE(72)] = 966,
  [SMALL_STATE(73)] = 974,
  [SMALL_STATE(74)] = 982,
  [SMALL_STATE(75)] = 989,
  [SMALL_STATE(76)] = 996,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__normal_instruction, 1),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__normal_instruction, 4),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__normal_instruction, 3),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gcc_pseudo_op, 1),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gcc_pseudo_op, 4),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gcc_pseudo_op, 3),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__normal_instruction, 2),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__normal_instruction, 2),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__deregister_repeat1, 2), SHIFT_REPEAT(29),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__deregister_repeat1, 2),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant, 1),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__constant, 1),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__gcc_pseudo_op, 3),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gcc_pseudo_op, 2),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__gcc_pseudo_op, 2),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__gcc_pseudo_op_repeat1, 2),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__gcc_pseudo_op_repeat1, 2),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__gcc_pseudo_op_repeat1, 2), SHIFT_REPEAT(12),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer, 1),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pointer, 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__deregister, 5),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__deregister, 5),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hexadecimal, 1),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hexadecimal, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__deregister, 3),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__deregister, 3),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary, 1),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer, 2),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pointer, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_octal, 1),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_octal, 1),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__normal_instruction_repeat1, 2),
  [179] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat1, 2), SHIFT_REPEAT(8),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__normal_instruction, 3),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__normal_instruction_repeat2, 2),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat2, 2),
  [190] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat2, 2), SHIFT_REPEAT(7),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 1),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__deregister, 4),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__deregister, 4),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(16),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat1, 2),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_width, 2),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [230] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
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
