#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 58
#define LARGE_STATE_COUNT 19
#define SYMBOL_COUNT 63
#define ALIAS_COUNT 0
#define TOKEN_COUNT 43
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
  aux_sym_register_token1 = 30,
  aux_sym_register_token2 = 31,
  aux_sym_register_token3 = 32,
  aux_sym_register_token4 = 33,
  aux_sym_register_token5 = 34,
  aux_sym_register_token6 = 35,
  anon_sym_rip = 36,
  aux_sym_float_token1 = 37,
  aux_sym_float_token2 = 38,
  sym_integer = 39,
  aux_sym_string_token1 = 40,
  aux_sym_string_token2 = 41,
  sym_identifier = 42,
  sym_program = 43,
  sym__statement = 44,
  sym_instruction = 45,
  sym__normal_instruction = 46,
  sym__gcc_pseudo_op = 47,
  sym__operand = 48,
  sym_pointer = 49,
  sym_pointer_width = 50,
  sym__deregister = 51,
  sym_hexadecimal = 52,
  sym_binary = 53,
  sym_octal = 54,
  sym_register = 55,
  sym__constant = 56,
  sym_float = 57,
  sym_string = 58,
  aux_sym_program_repeat1 = 59,
  aux_sym__normal_instruction_repeat1 = 60,
  aux_sym__gcc_pseudo_op_repeat1 = 61,
  aux_sym__deregister_repeat1 = 62,
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
  [aux_sym_register_token1] = "register_token1",
  [aux_sym_register_token2] = "register_token2",
  [aux_sym_register_token3] = "register_token3",
  [aux_sym_register_token4] = "register_token4",
  [aux_sym_register_token5] = "register_token5",
  [aux_sym_register_token6] = "register_token6",
  [anon_sym_rip] = "rip",
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
  [sym_register] = "register",
  [sym__constant] = "_constant",
  [sym_float] = "float",
  [sym_string] = "string",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym__normal_instruction_repeat1] = "_normal_instruction_repeat1",
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
  [aux_sym_register_token1] = aux_sym_register_token1,
  [aux_sym_register_token2] = aux_sym_register_token2,
  [aux_sym_register_token3] = aux_sym_register_token3,
  [aux_sym_register_token4] = aux_sym_register_token4,
  [aux_sym_register_token5] = aux_sym_register_token5,
  [aux_sym_register_token6] = aux_sym_register_token6,
  [anon_sym_rip] = anon_sym_rip,
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
  [sym_register] = sym_register,
  [sym__constant] = sym__constant,
  [sym_float] = sym_float,
  [sym_string] = sym_string,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym__normal_instruction_repeat1] = aux_sym__normal_instruction_repeat1,
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
  [aux_sym_register_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_register_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_register_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_register_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_register_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_register_token6] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_rip] = {
    .visible = true,
    .named = false,
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
  [sym_register] = {
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
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 18,
  [40] = 40,
  [41] = 14,
  [42] = 11,
  [43] = 7,
  [44] = 8,
  [45] = 15,
  [46] = 8,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
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

static inline bool sym_identifier_character_set_4(int32_t c) {
  return (c < '<'
    ? (c < '-'
      ? (c < '('
        ? c == '$'
        : c <= ')')
      : (c <= '.' || (c >= '0' && c <= '7')))
    : (c <= '<' || (c < '_'
      ? (c < '@'
        ? c == '>'
        : c <= 'Z')
      : (c <= '_' || (c >= 'e' && c <= 'z')))));
}

static inline bool sym_identifier_character_set_5(int32_t c) {
  return (c < '<'
    ? (c < '-'
      ? (c < '('
        ? c == '$'
        : c <= ')')
      : (c <= '.' || (c >= '6' && c <= '9')))
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
      if (eof) ADVANCE(106);
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(110);
      if (lookahead == '$') ADVANCE(20);
      if (lookahead == '\'') ADVANCE(16);
      if (lookahead == '*') ADVANCE(139);
      if (lookahead == '+') ADVANCE(138);
      if (lookahead == ',') ADVANCE(112);
      if (lookahead == '-') ADVANCE(137);
      if (lookahead == '.') ADVANCE(90);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == '0') ADVANCE(40);
      if (lookahead == '1') ADVANCE(41);
      if (lookahead == 'B') ADVANCE(39);
      if (lookahead == 'D') ADVANCE(37);
      if (lookahead == 'P') ADVANCE(35);
      if (lookahead == 'Q') ADVANCE(38);
      if (lookahead == 'W') ADVANCE(28);
      if (lookahead == '[') ADVANCE(136);
      if (lookahead == '\\') SKIP(92)
      if (lookahead == ']') ADVANCE(140);
      if (lookahead == '_') ADVANCE(77);
      if (lookahead == 'b') ADVANCE(62);
      if (lookahead == 'd') ADVANCE(53);
      if (lookahead == 'e') ADVANCE(45);
      if (lookahead == 'p') ADVANCE(69);
      if (lookahead == 'q') ADVANCE(71);
      if (lookahead == 'r') ADVANCE(21);
      if (lookahead == 's') ADVANCE(52);
      if (lookahead == 'w') ADVANCE(58);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(73);
      if (lookahead == 'x' ||
          lookahead == 'y') ADVANCE(57);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(80);
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'f') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(23);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == ':') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(23);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(109);
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == ':') ADVANCE(111);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(23);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(109);
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == '/') ADVANCE(18);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(23);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(13)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(13)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(14)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(14)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(75)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(75)
      if (lookahead == '\r') SKIP(9)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(76)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(76)
      if (lookahead == '\r') SKIP(11)
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(110);
      if (lookahead == '$') ADVANCE(228);
      if (lookahead == '\'') ADVANCE(16);
      if (lookahead == '-') ADVANCE(227);
      if (lookahead == '.') ADVANCE(274);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == '0') ADVANCE(192);
      if (lookahead == '1') ADVANCE(193);
      if (lookahead == 'B') ADVANCE(243);
      if (lookahead == 'D') ADVANCE(241);
      if (lookahead == 'Q') ADVANCE(242);
      if (lookahead == 'W') ADVANCE(234);
      if (lookahead == '[') ADVANCE(136);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == '_') ADVANCE(271);
      if (lookahead == 'b') ADVANCE(259);
      if (lookahead == 'd') ADVANCE(251);
      if (lookahead == 'e') ADVANCE(244);
      if (lookahead == 'q') ADVANCE(267);
      if (lookahead == 'r') ADVANCE(229);
      if (lookahead == 's') ADVANCE(250);
      if (lookahead == 'w') ADVANCE(256);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(268);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(198);
      if (lookahead == 'x' ||
          lookahead == 'y') ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'f') ADVANCE(280);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(197);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(13)
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(110);
      if (lookahead == '$') ADVANCE(228);
      if (lookahead == '\'') ADVANCE(16);
      if (lookahead == '-') ADVANCE(227);
      if (lookahead == '.') ADVANCE(274);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == '0') ADVANCE(192);
      if (lookahead == '1') ADVANCE(193);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == '_') ADVANCE(271);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(198);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(197);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(14)
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(280);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(223);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '\'') ADVANCE(224);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '/') ADVANCE(110);
      END_STATE();
    case 18:
      if (lookahead == '/') ADVANCE(109);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(23);
      END_STATE();
    case 19:
      if (lookahead == '0') ADVANCE(208);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(210);
      END_STATE();
    case 20:
      if (lookahead == '0') ADVANCE(89);
      END_STATE();
    case 21:
      if (lookahead == '1') ADVANCE(81);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(175);
      if (lookahead == 'b') ADVANCE(61);
      if (lookahead == 'd') ADVANCE(54);
      if (lookahead == 'i') ADVANCE(64);
      if (lookahead == 's') ADVANCE(52);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(72);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == 'D') ADVANCE(124);
      END_STATE();
    case 25:
      if (lookahead == 'D') ADVANCE(120);
      END_STATE();
    case 26:
      if (lookahead == 'D') ADVANCE(122);
      END_STATE();
    case 27:
      if (lookahead == 'E') ADVANCE(118);
      END_STATE();
    case 28:
      if (lookahead == 'O') ADVANCE(32);
      END_STATE();
    case 29:
      if (lookahead == 'O') ADVANCE(33);
      END_STATE();
    case 30:
      if (lookahead == 'O') ADVANCE(34);
      END_STATE();
    case 31:
      if (lookahead == 'R') ADVANCE(134);
      END_STATE();
    case 32:
      if (lookahead == 'R') ADVANCE(24);
      END_STATE();
    case 33:
      if (lookahead == 'R') ADVANCE(25);
      END_STATE();
    case 34:
      if (lookahead == 'R') ADVANCE(26);
      END_STATE();
    case 35:
      if (lookahead == 'T') ADVANCE(31);
      END_STATE();
    case 36:
      if (lookahead == 'T') ADVANCE(27);
      END_STATE();
    case 37:
      if (lookahead == 'W') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 38:
      if (lookahead == 'W') ADVANCE(30);
      END_STATE();
    case 39:
      if (lookahead == 'Y') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 40:
      if (lookahead == '_') ADVANCE(77);
      if (lookahead == 'b') ADVANCE(148);
      if (lookahead == 'y') ADVANCE(152);
      if (lookahead == 'h' ||
          lookahead == 'x') ADVANCE(86);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(162);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(42);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(78);
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 41:
      if (lookahead == '_') ADVANCE(77);
      if (lookahead == 'b') ADVANCE(154);
      if (lookahead == 'y') ADVANCE(147);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(161);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(42);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(78);
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 42:
      if (lookahead == '_') ADVANCE(77);
      if (lookahead == 'b') ADVANCE(150);
      if (lookahead == 'y') ADVANCE(147);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(161);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(43);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(51);
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      END_STATE();
    case 43:
      if (lookahead == '_') ADVANCE(77);
      if (lookahead == 'h') ADVANCE(141);
      if (lookahead == 'b' ||
          lookahead == 'y') ADVANCE(147);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(161);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(44);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(79);
      END_STATE();
    case 44:
      if (lookahead == '_') ADVANCE(77);
      if (lookahead == 'b' ||
          lookahead == 'y') ADVANCE(147);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(161);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(44);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(79);
      END_STATE();
    case 45:
      if (lookahead == 'b') ADVANCE(63);
      if (lookahead == 'd') ADVANCE(55);
      if (lookahead == 's') ADVANCE(52);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'e' ||
          lookahead == 'f') ADVANCE(85);
      END_STATE();
    case 46:
      if (lookahead == 'd') ADVANCE(132);
      END_STATE();
    case 47:
      if (lookahead == 'd') ADVANCE(128);
      END_STATE();
    case 48:
      if (lookahead == 'd') ADVANCE(130);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 50:
      if (lookahead == 'h') ADVANCE(141);
      END_STATE();
    case 51:
      if (lookahead == 'h') ADVANCE(141);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(79);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(171);
      if (lookahead == 'p') ADVANCE(173);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(171);
      if (lookahead == 'w') ADVANCE(59);
      if (lookahead == 'x') ADVANCE(169);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(171);
      if (lookahead == 'x') ADVANCE(169);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(171);
      if (lookahead == 'x') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      END_STATE();
    case 56:
      if (lookahead == 'm') ADVANCE(82);
      END_STATE();
    case 57:
      if (lookahead == 'm') ADVANCE(56);
      END_STATE();
    case 58:
      if (lookahead == 'o') ADVANCE(66);
      END_STATE();
    case 59:
      if (lookahead == 'o') ADVANCE(67);
      END_STATE();
    case 60:
      if (lookahead == 'o') ADVANCE(68);
      END_STATE();
    case 61:
      if (lookahead == 'p') ADVANCE(173);
      if (lookahead == 'x') ADVANCE(169);
      END_STATE();
    case 62:
      if (lookahead == 'p') ADVANCE(173);
      if (lookahead == 'x') ADVANCE(169);
      if (lookahead == 'y') ADVANCE(70);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 63:
      if (lookahead == 'p') ADVANCE(173);
      if (lookahead == 'x') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      END_STATE();
    case 64:
      if (lookahead == 'p') ADVANCE(179);
      END_STATE();
    case 65:
      if (lookahead == 'r') ADVANCE(135);
      END_STATE();
    case 66:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 67:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 68:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 71:
      if (lookahead == 'w') ADVANCE(60);
      END_STATE();
    case 72:
      if (lookahead == 'x') ADVANCE(169);
      END_STATE();
    case 73:
      if (lookahead == 'x') ADVANCE(169);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 74:
      if (lookahead == 'x') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      END_STATE();
    case 75:
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(110);
      if (lookahead == '$') ADVANCE(20);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == '0') ADVANCE(206);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(75)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(207);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(88);
      END_STATE();
    case 76:
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(110);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == '0') ADVANCE(208);
      if (lookahead == '[') ADVANCE(136);
      if (lookahead == '\\') SKIP(12)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(76)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(210);
      END_STATE();
    case 77:
      if (lookahead == 'b' ||
          lookahead == 'y') ADVANCE(147);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(77);
      END_STATE();
    case 78:
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(51);
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      END_STATE();
    case 79:
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(79);
      END_STATE();
    case 80:
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(78);
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 81:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(175);
      END_STATE();
    case 82:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(177);
      END_STATE();
    case 83:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      END_STATE();
    case 84:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(187);
      END_STATE();
    case 85:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      END_STATE();
    case 86:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(145);
      END_STATE();
    case 87:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(143);
      END_STATE();
    case 88:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 89:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(87);
      END_STATE();
    case 90:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 91:
      if (eof) ADVANCE(106);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 92:
      if (eof) ADVANCE(106);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(91)
      END_STATE();
    case 93:
      if (eof) ADVANCE(106);
      if (lookahead == '\n') SKIP(93)
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(109);
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == '/') ADVANCE(18);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(23);
      END_STATE();
    case 94:
      if (eof) ADVANCE(106);
      if (lookahead == '\n') SKIP(96)
      END_STATE();
    case 95:
      if (eof) ADVANCE(106);
      if (lookahead == '\n') SKIP(96)
      if (lookahead == '\r') SKIP(94)
      END_STATE();
    case 96:
      if (eof) ADVANCE(106);
      if (lookahead == '\n') ADVANCE(107);
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(110);
      if (lookahead == '$') ADVANCE(228);
      if (lookahead == '\'') ADVANCE(16);
      if (lookahead == ',') ADVANCE(112);
      if (lookahead == '-') ADVANCE(227);
      if (lookahead == '.') ADVANCE(274);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == '0') ADVANCE(192);
      if (lookahead == '1') ADVANCE(193);
      if (lookahead == 'B') ADVANCE(243);
      if (lookahead == 'D') ADVANCE(241);
      if (lookahead == 'Q') ADVANCE(242);
      if (lookahead == 'W') ADVANCE(234);
      if (lookahead == '[') ADVANCE(136);
      if (lookahead == '\\') SKIP(95)
      if (lookahead == '_') ADVANCE(271);
      if (lookahead == 'b') ADVANCE(259);
      if (lookahead == 'd') ADVANCE(251);
      if (lookahead == 'e') ADVANCE(244);
      if (lookahead == 'q') ADVANCE(267);
      if (lookahead == 'r') ADVANCE(229);
      if (lookahead == 's') ADVANCE(250);
      if (lookahead == 'w') ADVANCE(256);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(268);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(198);
      if (lookahead == 'x' ||
          lookahead == 'y') ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'f') ADVANCE(280);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(197);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(96)
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 97:
      if (eof) ADVANCE(106);
      if (lookahead == '\n') ADVANCE(107);
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(110);
      if (lookahead == '$') ADVANCE(228);
      if (lookahead == '\'') ADVANCE(16);
      if (lookahead == '-') ADVANCE(227);
      if (lookahead == '.') ADVANCE(274);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == '0') ADVANCE(192);
      if (lookahead == '1') ADVANCE(193);
      if (lookahead == '\\') SKIP(100)
      if (lookahead == '_') ADVANCE(271);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(198);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(197);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(97)
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(280);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 98:
      if (eof) ADVANCE(106);
      if (lookahead == '\n') ADVANCE(107);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(110);
      if (lookahead == '.') ADVANCE(90);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == '\\') SKIP(102)
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(98)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 99:
      if (eof) ADVANCE(106);
      if (lookahead == '\n') SKIP(97)
      END_STATE();
    case 100:
      if (eof) ADVANCE(106);
      if (lookahead == '\n') SKIP(97)
      if (lookahead == '\r') SKIP(99)
      END_STATE();
    case 101:
      if (eof) ADVANCE(106);
      if (lookahead == '\n') SKIP(98)
      END_STATE();
    case 102:
      if (eof) ADVANCE(106);
      if (lookahead == '\n') SKIP(98)
      if (lookahead == '\r') SKIP(101)
      END_STATE();
    case 103:
      if (eof) ADVANCE(106);
      if (lookahead == '\n') SKIP(105)
      END_STATE();
    case 104:
      if (eof) ADVANCE(106);
      if (lookahead == '\n') SKIP(105)
      if (lookahead == '\r') SKIP(103)
      END_STATE();
    case 105:
      if (eof) ADVANCE(106);
      if (lookahead == '\n') ADVANCE(108);
      if (lookahead == ' ') ADVANCE(113);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(110);
      if (lookahead == ',') ADVANCE(112);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == '\\') SKIP(104)
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(105)
      END_STATE();
    case 106:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(108);
      if (lookahead == ' ') ADVANCE(113);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '"') ADVANCE(110);
      if (lookahead == ':') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(23);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(108);
      if (lookahead == ' ') ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_gcc_mnemonic);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(23);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_gcc_mnemonic);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_mnemonic);
      if (lookahead == ':') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(23);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_mnemonic);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_BYTE);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_BYTE);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_DWORD);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_DWORD);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_QWORD);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_QWORD);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_WORD);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_WORD);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_byte);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_byte);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_dword);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_dword);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_qword);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_qword);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_word);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_word);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_PTR);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_ptr);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_hexadecimal_token1);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_hexadecimal_token1);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_hexadecimal_token2);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_hexadecimal_token2);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_hexadecimal_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(145);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_hexadecimal_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(146);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (lookahead == '_') ADVANCE(159);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(157);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (lookahead == '_') ADVANCE(160);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(158);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(249);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (lookahead == 'h') ADVANCE(141);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (lookahead == 'h') ADVANCE(142);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(159);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(160);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('2' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(249);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_binary_token2);
      if (lookahead == 'h') ADVANCE(141);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(159);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_binary_token2);
      if (lookahead == 'h') ADVANCE(142);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(160);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('2' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_binary_token2);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(159);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_binary_token2);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(160);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('2' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_octal_token1);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_octal_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(165);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_octal_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(166);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(282);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_octal_token1);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_octal_token2);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_octal_token2);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(166);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(282);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_register_token1);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_register_token1);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_register_token2);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_register_token2);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_register_token3);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_register_token3);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_register_token4);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_register_token4);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_register_token5);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_register_token5);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_register_token6);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_register_token6);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_rip);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_rip);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == '.') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == '.') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == 'e') ADVANCE(225);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_float_token1);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == '.') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == '.') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(187);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == 'e') ADVANCE(226);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_integer);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(188);
      if (lookahead == '_') ADVANCE(271);
      if (lookahead == 'b') ADVANCE(149);
      if (lookahead == 'd') ADVANCE(217);
      if (lookahead == 'y') ADVANCE(153);
      if (lookahead == 'h' ||
          lookahead == 'x') ADVANCE(278);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(163);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(194);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(205);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(204);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(277);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(188);
      if (lookahead == '_') ADVANCE(271);
      if (lookahead == 'b') ADVANCE(155);
      if (lookahead == 'd') ADVANCE(221);
      if (lookahead == 'y') ADVANCE(156);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(164);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(194);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(205);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(204);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(277);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(188);
      if (lookahead == '_') ADVANCE(271);
      if (lookahead == 'b') ADVANCE(151);
      if (lookahead == 'd') ADVANCE(215);
      if (lookahead == 'y') ADVANCE(156);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(164);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(195);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(201);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(200);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(249);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(188);
      if (lookahead == '_') ADVANCE(271);
      if (lookahead == 'd') ADVANCE(222);
      if (lookahead == 'h') ADVANCE(142);
      if (lookahead == 'b' ||
          lookahead == 'y') ADVANCE(156);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(164);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(196);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(203);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(202);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(188);
      if (lookahead == '_') ADVANCE(271);
      if (lookahead == 'd') ADVANCE(222);
      if (lookahead == 'b' ||
          lookahead == 'y') ADVANCE(156);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(164);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(196);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(203);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(202);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(188);
      if (lookahead == 'd') ADVANCE(221);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(164);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(204);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(277);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(188);
      if (lookahead == 'd') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(277);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(188);
      if (lookahead == 'd') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(203);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(188);
      if (lookahead == 'd') ADVANCE(222);
      if (lookahead == 'h') ADVANCE(142);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(164);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(202);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(188);
      if (lookahead == 'd') ADVANCE(222);
      if (lookahead == 'h') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(203);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(188);
      if (lookahead == 'd') ADVANCE(222);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(164);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(202);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(188);
      if (lookahead == 'd') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(203);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(188);
      if (lookahead == 'd') ADVANCE(215);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(164);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(200);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(249);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(188);
      if (lookahead == 'd') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(249);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'd') ADVANCE(219);
      if (lookahead == 'h' ||
          lookahead == 'x') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(211);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'd') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(211);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'd') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(210);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'd') ADVANCE(191);
      if (lookahead == 'h') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(210);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'd') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(210);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'd') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(209);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'h') ADVANCE(141);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'h') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'h') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(216);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'h') ADVANCE(142);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(216);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(214);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(249);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(249);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_integer);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+') ADVANCE(83);
      if (lookahead == '-') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+') ADVANCE(84);
      if (lookahead == '-') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(274);
      if (lookahead == '0') ADVANCE(199);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(203);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '0') ADVANCE(281);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(282);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(272);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(176);
      if (lookahead == 'b') ADVANCE(261);
      if (lookahead == 'd') ADVANCE(253);
      if (lookahead == 'i') ADVANCE(262);
      if (lookahead == 's') ADVANCE(250);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(270);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(282);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(125);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(121);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(123);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(119);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(237);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(238);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(239);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(230);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(231);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(232);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(233);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'W') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(277);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'W') ADVANCE(236);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Y') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(277);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(260);
      if (lookahead == 'd') ADVANCE(252);
      if (lookahead == 's') ADVANCE(250);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'e' ||
          lookahead == 'f') ADVANCE(277);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(133);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(129);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(131);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(127);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(142);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(172);
      if (lookahead == 'p') ADVANCE(174);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(172);
      if (lookahead == 'w') ADVANCE(257);
      if (lookahead == 'x') ADVANCE(170);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(277);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(172);
      if (lookahead == 'x') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(249);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(172);
      if (lookahead == 'x') ADVANCE(170);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(273);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(254);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(263);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(264);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(265);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(174);
      if (lookahead == 'x') ADVANCE(170);
      if (lookahead == 'y') ADVANCE(266);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(277);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(174);
      if (lookahead == 'x') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(249);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(174);
      if (lookahead == 'x') ADVANCE(170);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(180);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(245);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(246);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(247);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(248);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(258);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(170);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(277);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(249);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(170);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b' ||
          lookahead == 'y') ADVANCE(156);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(271);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('2' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(176);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(282);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(178);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(282);
      END_STATE();
    case 274:
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 275:
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(249);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(146);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(144);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(277);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(279);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 93},
  [2] = {.lex_state = 96},
  [3] = {.lex_state = 96},
  [4] = {.lex_state = 96},
  [5] = {.lex_state = 13},
  [6] = {.lex_state = 96},
  [7] = {.lex_state = 96},
  [8] = {.lex_state = 96},
  [9] = {.lex_state = 96},
  [10] = {.lex_state = 96},
  [11] = {.lex_state = 96},
  [12] = {.lex_state = 96},
  [13] = {.lex_state = 96},
  [14] = {.lex_state = 96},
  [15] = {.lex_state = 96},
  [16] = {.lex_state = 96},
  [17] = {.lex_state = 96},
  [18] = {.lex_state = 96},
  [19] = {.lex_state = 97},
  [20] = {.lex_state = 97},
  [21] = {.lex_state = 97},
  [22] = {.lex_state = 14},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 93},
  [26] = {.lex_state = 93},
  [27] = {.lex_state = 93},
  [28] = {.lex_state = 98},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 105},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 105},
  [34] = {.lex_state = 105},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 75},
  [38] = {.lex_state = 105},
  [39] = {.lex_state = 105},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 105},
  [42] = {.lex_state = 105},
  [43] = {.lex_state = 105},
  [44] = {.lex_state = 105},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 76},
  [48] = {.lex_state = 96},
  [49] = {.lex_state = 96},
  [50] = {.lex_state = 96},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 96},
  [53] = {.lex_state = 76},
  [54] = {.lex_state = 96},
  [55] = {.lex_state = 96},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
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
    [aux_sym_register_token1] = ACTIONS(1),
    [aux_sym_register_token2] = ACTIONS(1),
    [aux_sym_register_token3] = ACTIONS(1),
    [aux_sym_register_token4] = ACTIONS(1),
    [aux_sym_register_token5] = ACTIONS(1),
    [aux_sym_register_token6] = ACTIONS(1),
    [anon_sym_rip] = ACTIONS(1),
    [aux_sym_string_token1] = ACTIONS(1),
    [aux_sym_string_token2] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(57),
    [sym__statement] = STATE(50),
    [sym_instruction] = STATE(50),
    [sym__normal_instruction] = STATE(55),
    [sym__gcc_pseudo_op] = STATE(55),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [sym_label] = ACTIONS(9),
    [sym_gcc_mnemonic] = ACTIONS(11),
    [sym_mnemonic] = ACTIONS(13),
  },
  [2] = {
    [sym__operand] = STATE(2),
    [sym_pointer] = STATE(2),
    [sym_pointer_width] = STATE(47),
    [sym__deregister] = STATE(17),
    [sym_hexadecimal] = STATE(2),
    [sym_binary] = STATE(2),
    [sym_octal] = STATE(2),
    [sym_register] = STATE(2),
    [sym__constant] = STATE(2),
    [sym_float] = STATE(2),
    [sym_string] = STATE(2),
    [aux_sym__normal_instruction_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_LF] = ACTIONS(15),
    [sym_comment] = ACTIONS(17),
    [anon_sym_COMMA] = ACTIONS(19),
    [anon_sym_BYTE] = ACTIONS(22),
    [anon_sym_DWORD] = ACTIONS(22),
    [anon_sym_QWORD] = ACTIONS(22),
    [anon_sym_WORD] = ACTIONS(22),
    [anon_sym_byte] = ACTIONS(22),
    [anon_sym_dword] = ACTIONS(22),
    [anon_sym_qword] = ACTIONS(22),
    [anon_sym_word] = ACTIONS(22),
    [anon_sym_LBRACK] = ACTIONS(25),
    [aux_sym_hexadecimal_token1] = ACTIONS(28),
    [aux_sym_hexadecimal_token2] = ACTIONS(28),
    [aux_sym_hexadecimal_token3] = ACTIONS(28),
    [aux_sym_binary_token1] = ACTIONS(31),
    [aux_sym_binary_token2] = ACTIONS(31),
    [aux_sym_octal_token1] = ACTIONS(34),
    [aux_sym_octal_token2] = ACTIONS(34),
    [aux_sym_register_token1] = ACTIONS(37),
    [aux_sym_register_token2] = ACTIONS(37),
    [aux_sym_register_token3] = ACTIONS(37),
    [aux_sym_register_token4] = ACTIONS(37),
    [aux_sym_register_token5] = ACTIONS(37),
    [aux_sym_register_token6] = ACTIONS(37),
    [anon_sym_rip] = ACTIONS(37),
    [aux_sym_float_token1] = ACTIONS(40),
    [aux_sym_float_token2] = ACTIONS(40),
    [sym_integer] = ACTIONS(43),
    [aux_sym_string_token1] = ACTIONS(46),
    [aux_sym_string_token2] = ACTIONS(46),
    [sym_identifier] = ACTIONS(49),
  },
  [3] = {
    [sym__operand] = STATE(2),
    [sym_pointer] = STATE(2),
    [sym_pointer_width] = STATE(47),
    [sym__deregister] = STATE(17),
    [sym_hexadecimal] = STATE(2),
    [sym_binary] = STATE(2),
    [sym_octal] = STATE(2),
    [sym_register] = STATE(2),
    [sym__constant] = STATE(2),
    [sym_float] = STATE(2),
    [sym_string] = STATE(2),
    [aux_sym__normal_instruction_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(52),
    [anon_sym_LF] = ACTIONS(52),
    [sym_comment] = ACTIONS(17),
    [anon_sym_COMMA] = ACTIONS(54),
    [anon_sym_BYTE] = ACTIONS(56),
    [anon_sym_DWORD] = ACTIONS(56),
    [anon_sym_QWORD] = ACTIONS(56),
    [anon_sym_WORD] = ACTIONS(56),
    [anon_sym_byte] = ACTIONS(56),
    [anon_sym_dword] = ACTIONS(56),
    [anon_sym_qword] = ACTIONS(56),
    [anon_sym_word] = ACTIONS(56),
    [anon_sym_LBRACK] = ACTIONS(58),
    [aux_sym_hexadecimal_token1] = ACTIONS(60),
    [aux_sym_hexadecimal_token2] = ACTIONS(60),
    [aux_sym_hexadecimal_token3] = ACTIONS(60),
    [aux_sym_binary_token1] = ACTIONS(62),
    [aux_sym_binary_token2] = ACTIONS(62),
    [aux_sym_octal_token1] = ACTIONS(64),
    [aux_sym_octal_token2] = ACTIONS(64),
    [aux_sym_register_token1] = ACTIONS(66),
    [aux_sym_register_token2] = ACTIONS(66),
    [aux_sym_register_token3] = ACTIONS(66),
    [aux_sym_register_token4] = ACTIONS(66),
    [aux_sym_register_token5] = ACTIONS(66),
    [aux_sym_register_token6] = ACTIONS(66),
    [anon_sym_rip] = ACTIONS(66),
    [aux_sym_float_token1] = ACTIONS(68),
    [aux_sym_float_token2] = ACTIONS(68),
    [sym_integer] = ACTIONS(70),
    [aux_sym_string_token1] = ACTIONS(72),
    [aux_sym_string_token2] = ACTIONS(72),
    [sym_identifier] = ACTIONS(74),
  },
  [4] = {
    [sym__operand] = STATE(3),
    [sym_pointer] = STATE(3),
    [sym_pointer_width] = STATE(47),
    [sym__deregister] = STATE(17),
    [sym_hexadecimal] = STATE(3),
    [sym_binary] = STATE(3),
    [sym_octal] = STATE(3),
    [sym_register] = STATE(3),
    [sym__constant] = STATE(3),
    [sym_float] = STATE(3),
    [sym_string] = STATE(3),
    [aux_sym__normal_instruction_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(76),
    [anon_sym_LF] = ACTIONS(76),
    [sym_comment] = ACTIONS(17),
    [anon_sym_COMMA] = ACTIONS(54),
    [anon_sym_BYTE] = ACTIONS(56),
    [anon_sym_DWORD] = ACTIONS(56),
    [anon_sym_QWORD] = ACTIONS(56),
    [anon_sym_WORD] = ACTIONS(56),
    [anon_sym_byte] = ACTIONS(56),
    [anon_sym_dword] = ACTIONS(56),
    [anon_sym_qword] = ACTIONS(56),
    [anon_sym_word] = ACTIONS(56),
    [anon_sym_LBRACK] = ACTIONS(58),
    [aux_sym_hexadecimal_token1] = ACTIONS(60),
    [aux_sym_hexadecimal_token2] = ACTIONS(60),
    [aux_sym_hexadecimal_token3] = ACTIONS(60),
    [aux_sym_binary_token1] = ACTIONS(62),
    [aux_sym_binary_token2] = ACTIONS(62),
    [aux_sym_octal_token1] = ACTIONS(64),
    [aux_sym_octal_token2] = ACTIONS(64),
    [aux_sym_register_token1] = ACTIONS(66),
    [aux_sym_register_token2] = ACTIONS(66),
    [aux_sym_register_token3] = ACTIONS(66),
    [aux_sym_register_token4] = ACTIONS(66),
    [aux_sym_register_token5] = ACTIONS(66),
    [aux_sym_register_token6] = ACTIONS(66),
    [anon_sym_rip] = ACTIONS(66),
    [aux_sym_float_token1] = ACTIONS(68),
    [aux_sym_float_token2] = ACTIONS(68),
    [sym_integer] = ACTIONS(70),
    [aux_sym_string_token1] = ACTIONS(72),
    [aux_sym_string_token2] = ACTIONS(72),
    [sym_identifier] = ACTIONS(78),
  },
  [5] = {
    [sym__operand] = STATE(12),
    [sym_pointer] = STATE(12),
    [sym_pointer_width] = STATE(47),
    [sym__deregister] = STATE(17),
    [sym_hexadecimal] = STATE(12),
    [sym_binary] = STATE(12),
    [sym_octal] = STATE(12),
    [sym_register] = STATE(12),
    [sym__constant] = STATE(12),
    [sym_float] = STATE(12),
    [sym_string] = STATE(12),
    [sym_comment] = ACTIONS(3),
    [anon_sym_BYTE] = ACTIONS(56),
    [anon_sym_DWORD] = ACTIONS(56),
    [anon_sym_QWORD] = ACTIONS(56),
    [anon_sym_WORD] = ACTIONS(56),
    [anon_sym_byte] = ACTIONS(56),
    [anon_sym_dword] = ACTIONS(56),
    [anon_sym_qword] = ACTIONS(56),
    [anon_sym_word] = ACTIONS(56),
    [anon_sym_LBRACK] = ACTIONS(80),
    [aux_sym_hexadecimal_token1] = ACTIONS(60),
    [aux_sym_hexadecimal_token2] = ACTIONS(60),
    [aux_sym_hexadecimal_token3] = ACTIONS(60),
    [aux_sym_binary_token1] = ACTIONS(62),
    [aux_sym_binary_token2] = ACTIONS(62),
    [aux_sym_octal_token1] = ACTIONS(64),
    [aux_sym_octal_token2] = ACTIONS(64),
    [aux_sym_register_token1] = ACTIONS(66),
    [aux_sym_register_token2] = ACTIONS(66),
    [aux_sym_register_token3] = ACTIONS(66),
    [aux_sym_register_token4] = ACTIONS(66),
    [aux_sym_register_token5] = ACTIONS(66),
    [aux_sym_register_token6] = ACTIONS(66),
    [anon_sym_rip] = ACTIONS(66),
    [aux_sym_float_token1] = ACTIONS(68),
    [aux_sym_float_token2] = ACTIONS(68),
    [sym_integer] = ACTIONS(70),
    [aux_sym_string_token1] = ACTIONS(82),
    [aux_sym_string_token2] = ACTIONS(82),
    [sym_identifier] = ACTIONS(84),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(86),
    [anon_sym_LF] = ACTIONS(86),
    [sym_comment] = ACTIONS(17),
    [anon_sym_COMMA] = ACTIONS(88),
    [anon_sym_BYTE] = ACTIONS(88),
    [anon_sym_DWORD] = ACTIONS(88),
    [anon_sym_QWORD] = ACTIONS(88),
    [anon_sym_WORD] = ACTIONS(88),
    [anon_sym_byte] = ACTIONS(88),
    [anon_sym_dword] = ACTIONS(88),
    [anon_sym_qword] = ACTIONS(88),
    [anon_sym_word] = ACTIONS(88),
    [anon_sym_LBRACK] = ACTIONS(88),
    [aux_sym_hexadecimal_token1] = ACTIONS(88),
    [aux_sym_hexadecimal_token2] = ACTIONS(88),
    [aux_sym_hexadecimal_token3] = ACTIONS(88),
    [aux_sym_binary_token1] = ACTIONS(88),
    [aux_sym_binary_token2] = ACTIONS(88),
    [aux_sym_octal_token1] = ACTIONS(88),
    [aux_sym_octal_token2] = ACTIONS(88),
    [aux_sym_register_token1] = ACTIONS(88),
    [aux_sym_register_token2] = ACTIONS(88),
    [aux_sym_register_token3] = ACTIONS(88),
    [aux_sym_register_token4] = ACTIONS(88),
    [aux_sym_register_token5] = ACTIONS(88),
    [aux_sym_register_token6] = ACTIONS(88),
    [anon_sym_rip] = ACTIONS(88),
    [aux_sym_float_token1] = ACTIONS(88),
    [aux_sym_float_token2] = ACTIONS(88),
    [sym_integer] = ACTIONS(88),
    [aux_sym_string_token1] = ACTIONS(88),
    [aux_sym_string_token2] = ACTIONS(88),
    [sym_identifier] = ACTIONS(88),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(90),
    [anon_sym_LF] = ACTIONS(90),
    [sym_comment] = ACTIONS(17),
    [anon_sym_COMMA] = ACTIONS(92),
    [anon_sym_BYTE] = ACTIONS(92),
    [anon_sym_DWORD] = ACTIONS(92),
    [anon_sym_QWORD] = ACTIONS(92),
    [anon_sym_WORD] = ACTIONS(92),
    [anon_sym_byte] = ACTIONS(92),
    [anon_sym_dword] = ACTIONS(92),
    [anon_sym_qword] = ACTIONS(92),
    [anon_sym_word] = ACTIONS(92),
    [anon_sym_LBRACK] = ACTIONS(92),
    [aux_sym_hexadecimal_token1] = ACTIONS(92),
    [aux_sym_hexadecimal_token2] = ACTIONS(92),
    [aux_sym_hexadecimal_token3] = ACTIONS(92),
    [aux_sym_binary_token1] = ACTIONS(92),
    [aux_sym_binary_token2] = ACTIONS(92),
    [aux_sym_octal_token1] = ACTIONS(92),
    [aux_sym_octal_token2] = ACTIONS(92),
    [aux_sym_register_token1] = ACTIONS(92),
    [aux_sym_register_token2] = ACTIONS(92),
    [aux_sym_register_token3] = ACTIONS(92),
    [aux_sym_register_token4] = ACTIONS(92),
    [aux_sym_register_token5] = ACTIONS(92),
    [aux_sym_register_token6] = ACTIONS(92),
    [anon_sym_rip] = ACTIONS(92),
    [aux_sym_float_token1] = ACTIONS(92),
    [aux_sym_float_token2] = ACTIONS(92),
    [sym_integer] = ACTIONS(92),
    [aux_sym_string_token1] = ACTIONS(92),
    [aux_sym_string_token2] = ACTIONS(92),
    [sym_identifier] = ACTIONS(92),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(94),
    [anon_sym_LF] = ACTIONS(94),
    [sym_comment] = ACTIONS(17),
    [anon_sym_COMMA] = ACTIONS(96),
    [anon_sym_BYTE] = ACTIONS(96),
    [anon_sym_DWORD] = ACTIONS(96),
    [anon_sym_QWORD] = ACTIONS(96),
    [anon_sym_WORD] = ACTIONS(96),
    [anon_sym_byte] = ACTIONS(96),
    [anon_sym_dword] = ACTIONS(96),
    [anon_sym_qword] = ACTIONS(96),
    [anon_sym_word] = ACTIONS(96),
    [anon_sym_LBRACK] = ACTIONS(96),
    [aux_sym_hexadecimal_token1] = ACTIONS(96),
    [aux_sym_hexadecimal_token2] = ACTIONS(96),
    [aux_sym_hexadecimal_token3] = ACTIONS(96),
    [aux_sym_binary_token1] = ACTIONS(96),
    [aux_sym_binary_token2] = ACTIONS(96),
    [aux_sym_octal_token1] = ACTIONS(96),
    [aux_sym_octal_token2] = ACTIONS(96),
    [aux_sym_register_token1] = ACTIONS(96),
    [aux_sym_register_token2] = ACTIONS(96),
    [aux_sym_register_token3] = ACTIONS(96),
    [aux_sym_register_token4] = ACTIONS(96),
    [aux_sym_register_token5] = ACTIONS(96),
    [aux_sym_register_token6] = ACTIONS(96),
    [anon_sym_rip] = ACTIONS(96),
    [aux_sym_float_token1] = ACTIONS(96),
    [aux_sym_float_token2] = ACTIONS(96),
    [sym_integer] = ACTIONS(96),
    [aux_sym_string_token1] = ACTIONS(96),
    [aux_sym_string_token2] = ACTIONS(96),
    [sym_identifier] = ACTIONS(96),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(98),
    [anon_sym_LF] = ACTIONS(98),
    [sym_comment] = ACTIONS(17),
    [anon_sym_COMMA] = ACTIONS(100),
    [anon_sym_BYTE] = ACTIONS(100),
    [anon_sym_DWORD] = ACTIONS(100),
    [anon_sym_QWORD] = ACTIONS(100),
    [anon_sym_WORD] = ACTIONS(100),
    [anon_sym_byte] = ACTIONS(100),
    [anon_sym_dword] = ACTIONS(100),
    [anon_sym_qword] = ACTIONS(100),
    [anon_sym_word] = ACTIONS(100),
    [anon_sym_LBRACK] = ACTIONS(100),
    [aux_sym_hexadecimal_token1] = ACTIONS(100),
    [aux_sym_hexadecimal_token2] = ACTIONS(100),
    [aux_sym_hexadecimal_token3] = ACTIONS(100),
    [aux_sym_binary_token1] = ACTIONS(100),
    [aux_sym_binary_token2] = ACTIONS(100),
    [aux_sym_octal_token1] = ACTIONS(100),
    [aux_sym_octal_token2] = ACTIONS(100),
    [aux_sym_register_token1] = ACTIONS(100),
    [aux_sym_register_token2] = ACTIONS(100),
    [aux_sym_register_token3] = ACTIONS(100),
    [aux_sym_register_token4] = ACTIONS(100),
    [aux_sym_register_token5] = ACTIONS(100),
    [aux_sym_register_token6] = ACTIONS(100),
    [anon_sym_rip] = ACTIONS(100),
    [aux_sym_float_token1] = ACTIONS(100),
    [aux_sym_float_token2] = ACTIONS(100),
    [sym_integer] = ACTIONS(100),
    [aux_sym_string_token1] = ACTIONS(100),
    [aux_sym_string_token2] = ACTIONS(100),
    [sym_identifier] = ACTIONS(100),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(102),
    [anon_sym_LF] = ACTIONS(102),
    [sym_comment] = ACTIONS(17),
    [anon_sym_COMMA] = ACTIONS(104),
    [anon_sym_BYTE] = ACTIONS(104),
    [anon_sym_DWORD] = ACTIONS(104),
    [anon_sym_QWORD] = ACTIONS(104),
    [anon_sym_WORD] = ACTIONS(104),
    [anon_sym_byte] = ACTIONS(104),
    [anon_sym_dword] = ACTIONS(104),
    [anon_sym_qword] = ACTIONS(104),
    [anon_sym_word] = ACTIONS(104),
    [anon_sym_LBRACK] = ACTIONS(104),
    [aux_sym_hexadecimal_token1] = ACTIONS(104),
    [aux_sym_hexadecimal_token2] = ACTIONS(104),
    [aux_sym_hexadecimal_token3] = ACTIONS(104),
    [aux_sym_binary_token1] = ACTIONS(104),
    [aux_sym_binary_token2] = ACTIONS(104),
    [aux_sym_octal_token1] = ACTIONS(104),
    [aux_sym_octal_token2] = ACTIONS(104),
    [aux_sym_register_token1] = ACTIONS(104),
    [aux_sym_register_token2] = ACTIONS(104),
    [aux_sym_register_token3] = ACTIONS(104),
    [aux_sym_register_token4] = ACTIONS(104),
    [aux_sym_register_token5] = ACTIONS(104),
    [aux_sym_register_token6] = ACTIONS(104),
    [anon_sym_rip] = ACTIONS(104),
    [aux_sym_float_token1] = ACTIONS(104),
    [aux_sym_float_token2] = ACTIONS(104),
    [sym_integer] = ACTIONS(104),
    [aux_sym_string_token1] = ACTIONS(104),
    [aux_sym_string_token2] = ACTIONS(104),
    [sym_identifier] = ACTIONS(104),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(106),
    [anon_sym_LF] = ACTIONS(106),
    [sym_comment] = ACTIONS(17),
    [anon_sym_COMMA] = ACTIONS(108),
    [anon_sym_BYTE] = ACTIONS(108),
    [anon_sym_DWORD] = ACTIONS(108),
    [anon_sym_QWORD] = ACTIONS(108),
    [anon_sym_WORD] = ACTIONS(108),
    [anon_sym_byte] = ACTIONS(108),
    [anon_sym_dword] = ACTIONS(108),
    [anon_sym_qword] = ACTIONS(108),
    [anon_sym_word] = ACTIONS(108),
    [anon_sym_LBRACK] = ACTIONS(108),
    [aux_sym_hexadecimal_token1] = ACTIONS(108),
    [aux_sym_hexadecimal_token2] = ACTIONS(108),
    [aux_sym_hexadecimal_token3] = ACTIONS(108),
    [aux_sym_binary_token1] = ACTIONS(108),
    [aux_sym_binary_token2] = ACTIONS(108),
    [aux_sym_octal_token1] = ACTIONS(108),
    [aux_sym_octal_token2] = ACTIONS(108),
    [aux_sym_register_token1] = ACTIONS(108),
    [aux_sym_register_token2] = ACTIONS(108),
    [aux_sym_register_token3] = ACTIONS(108),
    [aux_sym_register_token4] = ACTIONS(108),
    [aux_sym_register_token5] = ACTIONS(108),
    [aux_sym_register_token6] = ACTIONS(108),
    [anon_sym_rip] = ACTIONS(108),
    [aux_sym_float_token1] = ACTIONS(108),
    [aux_sym_float_token2] = ACTIONS(108),
    [sym_integer] = ACTIONS(108),
    [aux_sym_string_token1] = ACTIONS(108),
    [aux_sym_string_token2] = ACTIONS(108),
    [sym_identifier] = ACTIONS(108),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_LF] = ACTIONS(15),
    [sym_comment] = ACTIONS(17),
    [anon_sym_COMMA] = ACTIONS(110),
    [anon_sym_BYTE] = ACTIONS(110),
    [anon_sym_DWORD] = ACTIONS(110),
    [anon_sym_QWORD] = ACTIONS(110),
    [anon_sym_WORD] = ACTIONS(110),
    [anon_sym_byte] = ACTIONS(110),
    [anon_sym_dword] = ACTIONS(110),
    [anon_sym_qword] = ACTIONS(110),
    [anon_sym_word] = ACTIONS(110),
    [anon_sym_LBRACK] = ACTIONS(110),
    [aux_sym_hexadecimal_token1] = ACTIONS(110),
    [aux_sym_hexadecimal_token2] = ACTIONS(110),
    [aux_sym_hexadecimal_token3] = ACTIONS(110),
    [aux_sym_binary_token1] = ACTIONS(110),
    [aux_sym_binary_token2] = ACTIONS(110),
    [aux_sym_octal_token1] = ACTIONS(110),
    [aux_sym_octal_token2] = ACTIONS(110),
    [aux_sym_register_token1] = ACTIONS(110),
    [aux_sym_register_token2] = ACTIONS(110),
    [aux_sym_register_token3] = ACTIONS(110),
    [aux_sym_register_token4] = ACTIONS(110),
    [aux_sym_register_token5] = ACTIONS(110),
    [aux_sym_register_token6] = ACTIONS(110),
    [anon_sym_rip] = ACTIONS(110),
    [aux_sym_float_token1] = ACTIONS(110),
    [aux_sym_float_token2] = ACTIONS(110),
    [sym_integer] = ACTIONS(110),
    [aux_sym_string_token1] = ACTIONS(110),
    [aux_sym_string_token2] = ACTIONS(110),
    [sym_identifier] = ACTIONS(110),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(112),
    [anon_sym_LF] = ACTIONS(112),
    [sym_comment] = ACTIONS(17),
    [anon_sym_COMMA] = ACTIONS(114),
    [anon_sym_BYTE] = ACTIONS(114),
    [anon_sym_DWORD] = ACTIONS(114),
    [anon_sym_QWORD] = ACTIONS(114),
    [anon_sym_WORD] = ACTIONS(114),
    [anon_sym_byte] = ACTIONS(114),
    [anon_sym_dword] = ACTIONS(114),
    [anon_sym_qword] = ACTIONS(114),
    [anon_sym_word] = ACTIONS(114),
    [anon_sym_LBRACK] = ACTIONS(114),
    [aux_sym_hexadecimal_token1] = ACTIONS(114),
    [aux_sym_hexadecimal_token2] = ACTIONS(114),
    [aux_sym_hexadecimal_token3] = ACTIONS(114),
    [aux_sym_binary_token1] = ACTIONS(114),
    [aux_sym_binary_token2] = ACTIONS(114),
    [aux_sym_octal_token1] = ACTIONS(114),
    [aux_sym_octal_token2] = ACTIONS(114),
    [aux_sym_register_token1] = ACTIONS(114),
    [aux_sym_register_token2] = ACTIONS(114),
    [aux_sym_register_token3] = ACTIONS(114),
    [aux_sym_register_token4] = ACTIONS(114),
    [aux_sym_register_token5] = ACTIONS(114),
    [aux_sym_register_token6] = ACTIONS(114),
    [anon_sym_rip] = ACTIONS(114),
    [aux_sym_float_token1] = ACTIONS(114),
    [aux_sym_float_token2] = ACTIONS(114),
    [sym_integer] = ACTIONS(114),
    [aux_sym_string_token1] = ACTIONS(114),
    [aux_sym_string_token2] = ACTIONS(114),
    [sym_identifier] = ACTIONS(114),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(116),
    [anon_sym_LF] = ACTIONS(116),
    [sym_comment] = ACTIONS(17),
    [anon_sym_COMMA] = ACTIONS(118),
    [anon_sym_BYTE] = ACTIONS(118),
    [anon_sym_DWORD] = ACTIONS(118),
    [anon_sym_QWORD] = ACTIONS(118),
    [anon_sym_WORD] = ACTIONS(118),
    [anon_sym_byte] = ACTIONS(118),
    [anon_sym_dword] = ACTIONS(118),
    [anon_sym_qword] = ACTIONS(118),
    [anon_sym_word] = ACTIONS(118),
    [anon_sym_LBRACK] = ACTIONS(118),
    [aux_sym_hexadecimal_token1] = ACTIONS(118),
    [aux_sym_hexadecimal_token2] = ACTIONS(118),
    [aux_sym_hexadecimal_token3] = ACTIONS(118),
    [aux_sym_binary_token1] = ACTIONS(118),
    [aux_sym_binary_token2] = ACTIONS(118),
    [aux_sym_octal_token1] = ACTIONS(118),
    [aux_sym_octal_token2] = ACTIONS(118),
    [aux_sym_register_token1] = ACTIONS(118),
    [aux_sym_register_token2] = ACTIONS(118),
    [aux_sym_register_token3] = ACTIONS(118),
    [aux_sym_register_token4] = ACTIONS(118),
    [aux_sym_register_token5] = ACTIONS(118),
    [aux_sym_register_token6] = ACTIONS(118),
    [anon_sym_rip] = ACTIONS(118),
    [aux_sym_float_token1] = ACTIONS(118),
    [aux_sym_float_token2] = ACTIONS(118),
    [sym_integer] = ACTIONS(118),
    [aux_sym_string_token1] = ACTIONS(118),
    [aux_sym_string_token2] = ACTIONS(118),
    [sym_identifier] = ACTIONS(118),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(120),
    [anon_sym_LF] = ACTIONS(120),
    [sym_comment] = ACTIONS(17),
    [anon_sym_COMMA] = ACTIONS(122),
    [anon_sym_BYTE] = ACTIONS(122),
    [anon_sym_DWORD] = ACTIONS(122),
    [anon_sym_QWORD] = ACTIONS(122),
    [anon_sym_WORD] = ACTIONS(122),
    [anon_sym_byte] = ACTIONS(122),
    [anon_sym_dword] = ACTIONS(122),
    [anon_sym_qword] = ACTIONS(122),
    [anon_sym_word] = ACTIONS(122),
    [anon_sym_LBRACK] = ACTIONS(122),
    [aux_sym_hexadecimal_token1] = ACTIONS(122),
    [aux_sym_hexadecimal_token2] = ACTIONS(122),
    [aux_sym_hexadecimal_token3] = ACTIONS(122),
    [aux_sym_binary_token1] = ACTIONS(122),
    [aux_sym_binary_token2] = ACTIONS(122),
    [aux_sym_octal_token1] = ACTIONS(122),
    [aux_sym_octal_token2] = ACTIONS(122),
    [aux_sym_register_token1] = ACTIONS(122),
    [aux_sym_register_token2] = ACTIONS(122),
    [aux_sym_register_token3] = ACTIONS(122),
    [aux_sym_register_token4] = ACTIONS(122),
    [aux_sym_register_token5] = ACTIONS(122),
    [aux_sym_register_token6] = ACTIONS(122),
    [anon_sym_rip] = ACTIONS(122),
    [aux_sym_float_token1] = ACTIONS(122),
    [aux_sym_float_token2] = ACTIONS(122),
    [sym_integer] = ACTIONS(122),
    [aux_sym_string_token1] = ACTIONS(122),
    [aux_sym_string_token2] = ACTIONS(122),
    [sym_identifier] = ACTIONS(122),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(124),
    [anon_sym_LF] = ACTIONS(124),
    [sym_comment] = ACTIONS(17),
    [anon_sym_COMMA] = ACTIONS(126),
    [anon_sym_BYTE] = ACTIONS(126),
    [anon_sym_DWORD] = ACTIONS(126),
    [anon_sym_QWORD] = ACTIONS(126),
    [anon_sym_WORD] = ACTIONS(126),
    [anon_sym_byte] = ACTIONS(126),
    [anon_sym_dword] = ACTIONS(126),
    [anon_sym_qword] = ACTIONS(126),
    [anon_sym_word] = ACTIONS(126),
    [anon_sym_LBRACK] = ACTIONS(128),
    [aux_sym_hexadecimal_token1] = ACTIONS(126),
    [aux_sym_hexadecimal_token2] = ACTIONS(126),
    [aux_sym_hexadecimal_token3] = ACTIONS(126),
    [aux_sym_binary_token1] = ACTIONS(126),
    [aux_sym_binary_token2] = ACTIONS(126),
    [aux_sym_octal_token1] = ACTIONS(126),
    [aux_sym_octal_token2] = ACTIONS(126),
    [aux_sym_register_token1] = ACTIONS(126),
    [aux_sym_register_token2] = ACTIONS(126),
    [aux_sym_register_token3] = ACTIONS(126),
    [aux_sym_register_token4] = ACTIONS(126),
    [aux_sym_register_token5] = ACTIONS(126),
    [aux_sym_register_token6] = ACTIONS(126),
    [anon_sym_rip] = ACTIONS(126),
    [aux_sym_float_token1] = ACTIONS(126),
    [aux_sym_float_token2] = ACTIONS(126),
    [sym_integer] = ACTIONS(126),
    [aux_sym_string_token1] = ACTIONS(126),
    [aux_sym_string_token2] = ACTIONS(126),
    [sym_identifier] = ACTIONS(126),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(130),
    [anon_sym_LF] = ACTIONS(130),
    [sym_comment] = ACTIONS(17),
    [anon_sym_COMMA] = ACTIONS(132),
    [anon_sym_BYTE] = ACTIONS(132),
    [anon_sym_DWORD] = ACTIONS(132),
    [anon_sym_QWORD] = ACTIONS(132),
    [anon_sym_WORD] = ACTIONS(132),
    [anon_sym_byte] = ACTIONS(132),
    [anon_sym_dword] = ACTIONS(132),
    [anon_sym_qword] = ACTIONS(132),
    [anon_sym_word] = ACTIONS(132),
    [anon_sym_LBRACK] = ACTIONS(132),
    [aux_sym_hexadecimal_token1] = ACTIONS(132),
    [aux_sym_hexadecimal_token2] = ACTIONS(132),
    [aux_sym_hexadecimal_token3] = ACTIONS(132),
    [aux_sym_binary_token1] = ACTIONS(132),
    [aux_sym_binary_token2] = ACTIONS(132),
    [aux_sym_octal_token1] = ACTIONS(132),
    [aux_sym_octal_token2] = ACTIONS(132),
    [aux_sym_register_token1] = ACTIONS(132),
    [aux_sym_register_token2] = ACTIONS(132),
    [aux_sym_register_token3] = ACTIONS(132),
    [aux_sym_register_token4] = ACTIONS(132),
    [aux_sym_register_token5] = ACTIONS(132),
    [aux_sym_register_token6] = ACTIONS(132),
    [anon_sym_rip] = ACTIONS(132),
    [aux_sym_float_token1] = ACTIONS(132),
    [aux_sym_float_token2] = ACTIONS(132),
    [sym_integer] = ACTIONS(132),
    [aux_sym_string_token1] = ACTIONS(132),
    [aux_sym_string_token2] = ACTIONS(132),
    [sym_identifier] = ACTIONS(132),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(134),
    [anon_sym_LF] = ACTIONS(134),
    [sym_comment] = ACTIONS(17),
    [anon_sym_COMMA] = ACTIONS(136),
    [anon_sym_BYTE] = ACTIONS(136),
    [anon_sym_DWORD] = ACTIONS(136),
    [anon_sym_QWORD] = ACTIONS(136),
    [anon_sym_WORD] = ACTIONS(136),
    [anon_sym_byte] = ACTIONS(136),
    [anon_sym_dword] = ACTIONS(136),
    [anon_sym_qword] = ACTIONS(136),
    [anon_sym_word] = ACTIONS(136),
    [anon_sym_LBRACK] = ACTIONS(136),
    [aux_sym_hexadecimal_token1] = ACTIONS(136),
    [aux_sym_hexadecimal_token2] = ACTIONS(136),
    [aux_sym_hexadecimal_token3] = ACTIONS(136),
    [aux_sym_binary_token1] = ACTIONS(136),
    [aux_sym_binary_token2] = ACTIONS(136),
    [aux_sym_octal_token1] = ACTIONS(136),
    [aux_sym_octal_token2] = ACTIONS(136),
    [aux_sym_register_token1] = ACTIONS(136),
    [aux_sym_register_token2] = ACTIONS(136),
    [aux_sym_register_token3] = ACTIONS(136),
    [aux_sym_register_token4] = ACTIONS(136),
    [aux_sym_register_token5] = ACTIONS(136),
    [aux_sym_register_token6] = ACTIONS(136),
    [anon_sym_rip] = ACTIONS(136),
    [aux_sym_float_token1] = ACTIONS(136),
    [aux_sym_float_token2] = ACTIONS(136),
    [sym_integer] = ACTIONS(136),
    [aux_sym_string_token1] = ACTIONS(136),
    [aux_sym_string_token2] = ACTIONS(136),
    [sym_identifier] = ACTIONS(136),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(138), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(142), 2,
      aux_sym_binary_token1,
      aux_sym_binary_token2,
    ACTIONS(144), 2,
      aux_sym_octal_token1,
      aux_sym_octal_token2,
    ACTIONS(146), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(148), 2,
      sym_integer,
      sym_identifier,
    ACTIONS(150), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(140), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    STATE(34), 6,
      sym_hexadecimal,
      sym_binary,
      sym_octal,
      sym__constant,
      sym_float,
      sym_string,
  [41] = 9,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(142), 2,
      aux_sym_binary_token1,
      aux_sym_binary_token2,
    ACTIONS(144), 2,
      aux_sym_octal_token1,
      aux_sym_octal_token2,
    ACTIONS(146), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(150), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(152), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(154), 2,
      sym_integer,
      sym_identifier,
    ACTIONS(140), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    STATE(38), 6,
      sym_hexadecimal,
      sym_binary,
      sym_octal,
      sym__constant,
      sym_float,
      sym_string,
  [82] = 9,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(142), 2,
      aux_sym_binary_token1,
      aux_sym_binary_token2,
    ACTIONS(144), 2,
      aux_sym_octal_token1,
      aux_sym_octal_token2,
    ACTIONS(146), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(150), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(154), 2,
      sym_integer,
      sym_identifier,
    ACTIONS(156), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(140), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    STATE(38), 6,
      sym_hexadecimal,
      sym_binary,
      sym_octal,
      sym__constant,
      sym_float,
      sym_string,
  [123] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 2,
      aux_sym_binary_token1,
      aux_sym_binary_token2,
    ACTIONS(144), 2,
      aux_sym_octal_token1,
      aux_sym_octal_token2,
    ACTIONS(146), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(154), 2,
      sym_integer,
      sym_identifier,
    ACTIONS(158), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(140), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    STATE(38), 6,
      sym_hexadecimal,
      sym_binary,
      sym_octal,
      sym__constant,
      sym_float,
      sym_string,
  [160] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(29), 2,
      sym_hexadecimal,
      sym_register,
    ACTIONS(160), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    ACTIONS(162), 7,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      anon_sym_rip,
  [182] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(35), 2,
      sym_hexadecimal,
      sym_register,
    ACTIONS(160), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    ACTIONS(162), 7,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      anon_sym_rip,
  [204] = 7,
    ACTIONS(9), 1,
      sym_label,
    ACTIONS(11), 1,
      sym_gcc_mnemonic,
    ACTIONS(13), 1,
      sym_mnemonic,
    ACTIONS(164), 1,
      ts_builtin_sym_end,
    ACTIONS(166), 1,
      sym_comment,
    STATE(52), 2,
      sym__statement,
      sym_instruction,
    STATE(55), 2,
      sym__normal_instruction,
      sym__gcc_pseudo_op,
  [228] = 7,
    ACTIONS(9), 1,
      sym_label,
    ACTIONS(11), 1,
      sym_gcc_mnemonic,
    ACTIONS(13), 1,
      sym_mnemonic,
    ACTIONS(166), 1,
      sym_comment,
    ACTIONS(168), 1,
      ts_builtin_sym_end,
    STATE(52), 2,
      sym__statement,
      sym_instruction,
    STATE(55), 2,
      sym__normal_instruction,
      sym__gcc_pseudo_op,
  [252] = 6,
    ACTIONS(9), 1,
      sym_label,
    ACTIONS(11), 1,
      sym_gcc_mnemonic,
    ACTIONS(13), 1,
      sym_mnemonic,
    ACTIONS(166), 1,
      sym_comment,
    STATE(52), 2,
      sym__statement,
      sym_instruction,
    STATE(55), 2,
      sym__normal_instruction,
      sym__gcc_pseudo_op,
  [273] = 6,
    ACTIONS(11), 1,
      sym_gcc_mnemonic,
    ACTIONS(13), 1,
      sym_mnemonic,
    ACTIONS(17), 1,
      sym_comment,
    STATE(54), 1,
      sym_instruction,
    ACTIONS(170), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(55), 2,
      sym__normal_instruction,
      sym__gcc_pseudo_op,
  [294] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_RBRACK,
    STATE(36), 1,
      aux_sym__deregister_repeat1,
    ACTIONS(172), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
  [309] = 5,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(176), 1,
      ts_builtin_sym_end,
    ACTIONS(178), 1,
      anon_sym_LF,
    STATE(30), 1,
      aux_sym__gcc_pseudo_op_repeat1,
    ACTIONS(180), 2,
      anon_sym_COMMA,
      anon_sym_,
  [326] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_RBRACK,
    STATE(32), 1,
      aux_sym__deregister_repeat1,
    ACTIONS(172), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
  [341] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      anon_sym_RBRACK,
    STATE(32), 1,
      aux_sym__deregister_repeat1,
    ACTIONS(185), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
  [356] = 5,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(156), 1,
      ts_builtin_sym_end,
    ACTIONS(190), 1,
      anon_sym_LF,
    STATE(30), 1,
      aux_sym__gcc_pseudo_op_repeat1,
    ACTIONS(192), 2,
      anon_sym_COMMA,
      anon_sym_,
  [373] = 5,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(194), 1,
      ts_builtin_sym_end,
    ACTIONS(196), 1,
      anon_sym_LF,
    STATE(33), 1,
      aux_sym__gcc_pseudo_op_repeat1,
    ACTIONS(198), 2,
      anon_sym_COMMA,
      anon_sym_,
  [390] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_RBRACK,
    STATE(31), 1,
      aux_sym__deregister_repeat1,
    ACTIONS(172), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
  [405] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_RBRACK,
    STATE(32), 1,
      aux_sym__deregister_repeat1,
    ACTIONS(172), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
  [420] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      sym_integer,
    STATE(40), 1,
      sym_hexadecimal,
    ACTIONS(160), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
  [435] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(176), 1,
      ts_builtin_sym_end,
    ACTIONS(178), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [447] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(134), 1,
      ts_builtin_sym_end,
    ACTIONS(136), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [459] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_RBRACK,
  [469] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(116), 1,
      ts_builtin_sym_end,
    ACTIONS(118), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [481] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(106), 1,
      ts_builtin_sym_end,
    ACTIONS(108), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [493] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(90), 1,
      ts_builtin_sym_end,
    ACTIONS(92), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [505] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(94), 1,
      ts_builtin_sym_end,
    ACTIONS(96), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [517] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_RBRACK,
  [527] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_RBRACK,
  [537] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 1,
      anon_sym_LBRACK,
    ACTIONS(204), 1,
      sym_integer,
    STATE(13), 1,
      sym__deregister,
  [550] = 4,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(206), 1,
      ts_builtin_sym_end,
    ACTIONS(208), 1,
      anon_sym_LF,
    STATE(48), 1,
      aux_sym_program_repeat1,
  [563] = 4,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(164), 1,
      ts_builtin_sym_end,
    ACTIONS(211), 1,
      anon_sym_LF,
    STATE(48), 1,
      aux_sym_program_repeat1,
  [576] = 4,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(213), 1,
      ts_builtin_sym_end,
    ACTIONS(215), 1,
      anon_sym_LF,
    STATE(49), 1,
      aux_sym_program_repeat1,
  [589] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 2,
      anon_sym_PTR,
      anon_sym_ptr,
  [597] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(206), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [605] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 2,
      anon_sym_LBRACK,
      sym_integer,
  [613] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(221), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [621] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(223), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [629] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_LBRACK,
  [636] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(19)] = 0,
  [SMALL_STATE(20)] = 41,
  [SMALL_STATE(21)] = 82,
  [SMALL_STATE(22)] = 123,
  [SMALL_STATE(23)] = 160,
  [SMALL_STATE(24)] = 182,
  [SMALL_STATE(25)] = 204,
  [SMALL_STATE(26)] = 228,
  [SMALL_STATE(27)] = 252,
  [SMALL_STATE(28)] = 273,
  [SMALL_STATE(29)] = 294,
  [SMALL_STATE(30)] = 309,
  [SMALL_STATE(31)] = 326,
  [SMALL_STATE(32)] = 341,
  [SMALL_STATE(33)] = 356,
  [SMALL_STATE(34)] = 373,
  [SMALL_STATE(35)] = 390,
  [SMALL_STATE(36)] = 405,
  [SMALL_STATE(37)] = 420,
  [SMALL_STATE(38)] = 435,
  [SMALL_STATE(39)] = 447,
  [SMALL_STATE(40)] = 459,
  [SMALL_STATE(41)] = 469,
  [SMALL_STATE(42)] = 481,
  [SMALL_STATE(43)] = 493,
  [SMALL_STATE(44)] = 505,
  [SMALL_STATE(45)] = 517,
  [SMALL_STATE(46)] = 527,
  [SMALL_STATE(47)] = 537,
  [SMALL_STATE(48)] = 550,
  [SMALL_STATE(49)] = 563,
  [SMALL_STATE(50)] = 576,
  [SMALL_STATE(51)] = 589,
  [SMALL_STATE(52)] = 597,
  [SMALL_STATE(53)] = 605,
  [SMALL_STATE(54)] = 613,
  [SMALL_STATE(55)] = 621,
  [SMALL_STATE(56)] = 629,
  [SMALL_STATE(57)] = 636,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__normal_instruction_repeat1, 2),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat1, 2), SHIFT_REPEAT(5),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat1, 2), SHIFT_REPEAT(51),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat1, 2), SHIFT_REPEAT(23),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat1, 2), SHIFT_REPEAT(8),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat1, 2), SHIFT_REPEAT(7),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat1, 2), SHIFT_REPEAT(11),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat1, 2), SHIFT_REPEAT(15),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat1, 2), SHIFT_REPEAT(14),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat1, 2), SHIFT_REPEAT(16),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat1, 2), SHIFT_REPEAT(18),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat1, 2), SHIFT_REPEAT(2),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__normal_instruction, 2),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__normal_instruction, 1),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__deregister, 3),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__deregister, 3),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary, 1),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary, 1),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hexadecimal, 1),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hexadecimal, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__deregister, 5),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__deregister, 5),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__deregister, 4),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__deregister, 4),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_octal, 1),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_octal, 1),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat1, 2),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer, 2),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pointer, 2),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 1),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register, 1),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_register, 1),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant, 1),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__constant, 1),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer, 1),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pointer, 1),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gcc_pseudo_op, 1),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gcc_pseudo_op, 4),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gcc_pseudo_op, 3),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__gcc_pseudo_op_repeat1, 2),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__gcc_pseudo_op_repeat1, 2),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__gcc_pseudo_op_repeat1, 2), SHIFT_REPEAT(22),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__deregister_repeat1, 2), SHIFT_REPEAT(37),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__deregister_repeat1, 2),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__gcc_pseudo_op, 3),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gcc_pseudo_op, 2),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__gcc_pseudo_op, 2),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(27),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_width, 2),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [227] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
