#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 93
#define LARGE_STATE_COUNT 24
#define SYMBOL_COUNT 74
#define ALIAS_COUNT 0
#define TOKEN_COUNT 50
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LF = 1,
  sym_comment = 2,
  sym_segment_register_prefix = 3,
  sym_label = 4,
  anon_sym_COMMA = 5,
  anon_sym_ = 6,
  anon_sym_BANG_EQ = 7,
  anon_sym_STAR = 8,
  anon_sym_PLUS = 9,
  anon_sym_DASH = 10,
  anon_sym_SLASH = 11,
  anon_sym_LT_EQ = 12,
  anon_sym_EQ_EQ = 13,
  anon_sym_GT_EQ = 14,
  aux_sym_nasm_macro_token1 = 15,
  sym_gcc_mnemonic = 16,
  sym_mnemonic = 17,
  anon_sym_BYTE = 18,
  anon_sym_DWORD = 19,
  anon_sym_QWORD = 20,
  anon_sym_WORD = 21,
  anon_sym_byte = 22,
  anon_sym_dword = 23,
  anon_sym_qword = 24,
  anon_sym_word = 25,
  anon_sym_PTR = 26,
  anon_sym_ptr = 27,
  anon_sym_LBRACK = 28,
  anon_sym_RBRACK = 29,
  aux_sym_hexadecimal_token1 = 30,
  aux_sym_hexadecimal_token2 = 31,
  aux_sym_hexadecimal_token3 = 32,
  aux_sym_binary_token1 = 33,
  aux_sym_binary_token2 = 34,
  aux_sym_octal_token1 = 35,
  aux_sym_octal_token2 = 36,
  aux_sym_register_token1 = 37,
  aux_sym_register_token2 = 38,
  aux_sym_register_token3 = 39,
  aux_sym_register_token4 = 40,
  aux_sym_register_token5 = 41,
  aux_sym_register_token6 = 42,
  anon_sym_rip = 43,
  aux_sym_float_token1 = 44,
  aux_sym_float_token2 = 45,
  sym_integer = 46,
  aux_sym_string_token1 = 47,
  aux_sym_string_token2 = 48,
  sym__identifier = 49,
  sym_program = 50,
  sym__statement = 51,
  sym_instruction = 52,
  sym__normal_instruction = 53,
  sym__gcc_pseudo_op = 54,
  sym__macro = 55,
  sym_operator = 56,
  sym_nasm_macro = 57,
  sym__operand = 58,
  sym_width = 59,
  sym_pointer = 60,
  sym_hexadecimal = 61,
  sym_binary = 62,
  sym_octal = 63,
  sym_register = 64,
  sym__constant = 65,
  sym_float = 66,
  sym_string = 67,
  sym_identifier = 68,
  aux_sym_program_repeat1 = 69,
  aux_sym__normal_instruction_repeat1 = 70,
  aux_sym__gcc_pseudo_op_repeat1 = 71,
  aux_sym__macro_repeat1 = 72,
  aux_sym_pointer_repeat1 = 73,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [sym_comment] = "comment",
  [sym_segment_register_prefix] = "segment_register_prefix",
  [sym_label] = "label",
  [anon_sym_COMMA] = ",",
  [anon_sym_] = " ",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_STAR] = "*",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_SLASH] = "/",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_GT_EQ] = ">=",
  [aux_sym_nasm_macro_token1] = "nasm_macro_token1",
  [sym_gcc_mnemonic] = "gcc_directive",
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
  [sym__identifier] = "_identifier",
  [sym_program] = "program",
  [sym__statement] = "_statement",
  [sym_instruction] = "instruction",
  [sym__normal_instruction] = "_normal_instruction",
  [sym__gcc_pseudo_op] = "_gcc_pseudo_op",
  [sym__macro] = "_macro",
  [sym_operator] = "operator",
  [sym_nasm_macro] = "nasm_macro",
  [sym__operand] = "_operand",
  [sym_width] = "width",
  [sym_pointer] = "pointer",
  [sym_hexadecimal] = "hexadecimal",
  [sym_binary] = "binary",
  [sym_octal] = "octal",
  [sym_register] = "register",
  [sym__constant] = "_constant",
  [sym_float] = "float",
  [sym_string] = "string",
  [sym_identifier] = "identifier",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym__normal_instruction_repeat1] = "_normal_instruction_repeat1",
  [aux_sym__gcc_pseudo_op_repeat1] = "_gcc_pseudo_op_repeat1",
  [aux_sym__macro_repeat1] = "_macro_repeat1",
  [aux_sym_pointer_repeat1] = "pointer_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [sym_comment] = sym_comment,
  [sym_segment_register_prefix] = sym_segment_register_prefix,
  [sym_label] = sym_label,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_] = anon_sym_,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [aux_sym_nasm_macro_token1] = aux_sym_nasm_macro_token1,
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
  [sym__identifier] = sym__identifier,
  [sym_program] = sym_program,
  [sym__statement] = sym__statement,
  [sym_instruction] = sym_instruction,
  [sym__normal_instruction] = sym__normal_instruction,
  [sym__gcc_pseudo_op] = sym__gcc_pseudo_op,
  [sym__macro] = sym__macro,
  [sym_operator] = sym_operator,
  [sym_nasm_macro] = sym_nasm_macro,
  [sym__operand] = sym__operand,
  [sym_width] = sym_width,
  [sym_pointer] = sym_pointer,
  [sym_hexadecimal] = sym_hexadecimal,
  [sym_binary] = sym_binary,
  [sym_octal] = sym_octal,
  [sym_register] = sym_register,
  [sym__constant] = sym__constant,
  [sym_float] = sym_float,
  [sym_string] = sym_string,
  [sym_identifier] = sym_identifier,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym__normal_instruction_repeat1] = aux_sym__normal_instruction_repeat1,
  [aux_sym__gcc_pseudo_op_repeat1] = aux_sym__gcc_pseudo_op_repeat1,
  [aux_sym__macro_repeat1] = aux_sym__macro_repeat1,
  [aux_sym_pointer_repeat1] = aux_sym_pointer_repeat1,
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
  [sym_segment_register_prefix] = {
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
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_nasm_macro_token1] = {
    .visible = false,
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
  [sym__identifier] = {
    .visible = false,
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
  [sym__macro] = {
    .visible = false,
    .named = true,
  },
  [sym_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_nasm_macro] = {
    .visible = true,
    .named = true,
  },
  [sym__operand] = {
    .visible = false,
    .named = true,
  },
  [sym_width] = {
    .visible = true,
    .named = true,
  },
  [sym_pointer] = {
    .visible = true,
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
  [sym_identifier] = {
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
  [aux_sym__macro_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pointer_repeat1] = {
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
  [24] = 16,
  [25] = 22,
  [26] = 13,
  [27] = 17,
  [28] = 12,
  [29] = 10,
  [30] = 18,
  [31] = 19,
  [32] = 23,
  [33] = 33,
  [34] = 15,
  [35] = 14,
  [36] = 9,
  [37] = 20,
  [38] = 38,
  [39] = 38,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 47,
  [49] = 46,
  [50] = 50,
  [51] = 50,
  [52] = 52,
  [53] = 52,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 61,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 66,
  [71] = 67,
  [72] = 62,
  [73] = 58,
  [74] = 60,
  [75] = 75,
  [76] = 18,
  [77] = 17,
  [78] = 19,
  [79] = 23,
  [80] = 22,
  [81] = 9,
  [82] = 20,
  [83] = 19,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
};

static inline bool sym__identifier_character_set_1(int32_t c) {
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

static inline bool sym__identifier_character_set_2(int32_t c) {
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

static inline bool sym__identifier_character_set_3(int32_t c) {
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

static inline bool sym__identifier_character_set_4(int32_t c) {
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

static inline bool sym__identifier_character_set_5(int32_t c) {
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
      if (eof) ADVANCE(139);
      if (lookahead == '!') ADVANCE(54);
      if (lookahead == '"') ADVANCE(25);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(143);
      if (lookahead == '$') ADVANCE(30);
      if (lookahead == '%') ADVANCE(158);
      if (lookahead == '\'') ADVANCE(26);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(150);
      if (lookahead == ',') ADVANCE(146);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '.') ADVANCE(120);
      if (lookahead == '/') ADVANCE(154);
      if (lookahead == '0') ADVANCE(244);
      if (lookahead == '1') ADVANCE(245);
      if (lookahead == '<') ADVANCE(55);
      if (lookahead == '=') ADVANCE(56);
      if (lookahead == '>') ADVANCE(57);
      if (lookahead == 'B') ADVANCE(73);
      if (lookahead == 'D') ADVANCE(71);
      if (lookahead == 'P') ADVANCE(69);
      if (lookahead == 'Q') ADVANCE(72);
      if (lookahead == 'W') ADVANCE(62);
      if (lookahead == '[') ADVANCE(184);
      if (lookahead == '\\') SKIP(122)
      if (lookahead == ']') ADVANCE(185);
      if (lookahead == '_') ADVANCE(110);
      if (lookahead == 'b') ADVANCE(91);
      if (lookahead == 'd') ADVANCE(81);
      if (lookahead == 'e') ADVANCE(74);
      if (lookahead == 'p') ADVANCE(99);
      if (lookahead == 'q') ADVANCE(101);
      if (lookahead == 'r') ADVANCE(32);
      if (lookahead == 's') ADVANCE(80);
      if (lookahead == 'w') ADVANCE(87);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(103);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(250);
      if (lookahead == 'x' ||
          lookahead == 'y') ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'f') ADVANCE(118);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(249);
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
      if (lookahead == ':') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(34);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == ':') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(34);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(142);
      if (lookahead == '%') ADVANCE(159);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == ':') ADVANCE(145);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(34);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(142);
      if (lookahead == '%') ADVANCE(159);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '/') ADVANCE(28);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(34);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(21)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(21)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(23)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(23)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(22)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(22)
      if (lookahead == '\r') SKIP(9)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(24)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(24)
      if (lookahead == '\r') SKIP(11)
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(105)
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(105)
      if (lookahead == '\r') SKIP(13)
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(106)
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(106)
      if (lookahead == '\r') SKIP(15)
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(107)
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(107)
      if (lookahead == '\r') SKIP(17)
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(108)
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(108)
      if (lookahead == '\r') SKIP(19)
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(25);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(143);
      if (lookahead == '$') ADVANCE(294);
      if (lookahead == '\'') ADVANCE(26);
      if (lookahead == '-') ADVANCE(293);
      if (lookahead == '.') ADVANCE(348);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '0') ADVANCE(258);
      if (lookahead == '1') ADVANCE(259);
      if (lookahead == 'B') ADVANCE(313);
      if (lookahead == 'D') ADVANCE(311);
      if (lookahead == 'Q') ADVANCE(312);
      if (lookahead == 'W') ADVANCE(302);
      if (lookahead == '[') ADVANCE(184);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == '_') ADVANCE(345);
      if (lookahead == 'b') ADVANCE(330);
      if (lookahead == 'd') ADVANCE(321);
      if (lookahead == 'e') ADVANCE(314);
      if (lookahead == 'q') ADVANCE(341);
      if (lookahead == 'r') ADVANCE(295);
      if (lookahead == 's') ADVANCE(320);
      if (lookahead == 'w') ADVANCE(327);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(342);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(264);
      if (lookahead == 'x' ||
          lookahead == 'y') ADVANCE(326);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'f') ADVANCE(354);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(263);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(21)
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(25);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(143);
      if (lookahead == '$') ADVANCE(294);
      if (lookahead == '\'') ADVANCE(26);
      if (lookahead == '-') ADVANCE(293);
      if (lookahead == '.') ADVANCE(348);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '0') ADVANCE(258);
      if (lookahead == '1') ADVANCE(259);
      if (lookahead == 'P') ADVANCE(310);
      if (lookahead == '[') ADVANCE(184);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == '_') ADVANCE(345);
      if (lookahead == 'b') ADVANCE(331);
      if (lookahead == 'd') ADVANCE(322);
      if (lookahead == 'e') ADVANCE(314);
      if (lookahead == 'p') ADVANCE(340);
      if (lookahead == 'r') ADVANCE(295);
      if (lookahead == 's') ADVANCE(320);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(342);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(264);
      if (lookahead == 'x' ||
          lookahead == 'y') ADVANCE(326);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(263);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'f') ADVANCE(354);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(22)
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(25);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(143);
      if (lookahead == '$') ADVANCE(294);
      if (lookahead == '\'') ADVANCE(26);
      if (lookahead == '-') ADVANCE(293);
      if (lookahead == '.') ADVANCE(348);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '0') ADVANCE(258);
      if (lookahead == '1') ADVANCE(259);
      if (lookahead == '[') ADVANCE(184);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == '_') ADVANCE(345);
      if (lookahead == 'b') ADVANCE(331);
      if (lookahead == 'd') ADVANCE(322);
      if (lookahead == 'e') ADVANCE(314);
      if (lookahead == 'r') ADVANCE(295);
      if (lookahead == 's') ADVANCE(320);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(342);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(264);
      if (lookahead == 'x' ||
          lookahead == 'y') ADVANCE(326);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(263);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'f') ADVANCE(354);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(23)
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(25);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(143);
      if (lookahead == '$') ADVANCE(294);
      if (lookahead == '\'') ADVANCE(26);
      if (lookahead == '-') ADVANCE(293);
      if (lookahead == '.') ADVANCE(348);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '0') ADVANCE(258);
      if (lookahead == '1') ADVANCE(259);
      if (lookahead == '\\') SKIP(12)
      if (lookahead == '_') ADVANCE(345);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(264);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(263);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(24)
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(354);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 25:
      if (lookahead == '"') ADVANCE(289);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '\'') ADVANCE(290);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == '/') ADVANCE(143);
      END_STATE();
    case 28:
      if (lookahead == '/') ADVANCE(142);
      if (lookahead == ':') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(34);
      END_STATE();
    case 29:
      if (lookahead == '0') ADVANCE(274);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(276);
      END_STATE();
    case 30:
      if (lookahead == '0') ADVANCE(119);
      END_STATE();
    case 31:
      if (lookahead == '1') ADVANCE(111);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(225);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == 'b') ADVANCE(45);
      if (lookahead == 'd') ADVANCE(40);
      if (lookahead == 'i') ADVANCE(46);
      if (lookahead == 's') ADVANCE(37);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 32:
      if (lookahead == '1') ADVANCE(111);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(225);
      if (lookahead == 'b') ADVANCE(90);
      if (lookahead == 'd') ADVANCE(82);
      if (lookahead == 'i') ADVANCE(94);
      if (lookahead == 's') ADVANCE(80);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(102);
      END_STATE();
    case 33:
      if (lookahead == ':') ADVANCE(145);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == 'b') ADVANCE(44);
      if (lookahead == 'd') ADVANCE(39);
      if (lookahead == 's') ADVANCE(37);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'e' ||
          lookahead == 'f') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 36:
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == 'h') ADVANCE(187);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 37:
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == 'i') ADVANCE(220);
      if (lookahead == 'p') ADVANCE(223);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 38:
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == 'i') ADVANCE(220);
      if (lookahead == 'x') ADVANCE(217);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(51);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 39:
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == 'i') ADVANCE(220);
      if (lookahead == 'x') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(36);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 40:
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == 'i') ADVANCE(220);
      if (lookahead == 'x') ADVANCE(217);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 41:
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == 'm') ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 42:
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == 'm') ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 43:
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == 'p') ADVANCE(223);
      if (lookahead == 'x') ADVANCE(217);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(51);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 44:
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == 'p') ADVANCE(223);
      if (lookahead == 'x') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(36);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 45:
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == 'p') ADVANCE(223);
      if (lookahead == 'x') ADVANCE(217);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 46:
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == 'p') ADVANCE(230);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 47:
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == 'x') ADVANCE(217);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(51);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 48:
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == 'x') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(36);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 49:
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == 'x') ADVANCE(217);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 50:
      if (lookahead == ':') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 51:
      if (lookahead == ':') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(36);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 52:
      if (lookahead == ':') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(51);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 53:
      if (lookahead == ':') ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 54:
      if (lookahead == '=') ADVANCE(148);
      END_STATE();
    case 55:
      if (lookahead == '=') ADVANCE(155);
      END_STATE();
    case 56:
      if (lookahead == '=') ADVANCE(156);
      END_STATE();
    case 57:
      if (lookahead == '=') ADVANCE(157);
      END_STATE();
    case 58:
      if (lookahead == 'D') ADVANCE(170);
      END_STATE();
    case 59:
      if (lookahead == 'D') ADVANCE(166);
      END_STATE();
    case 60:
      if (lookahead == 'D') ADVANCE(168);
      END_STATE();
    case 61:
      if (lookahead == 'E') ADVANCE(164);
      END_STATE();
    case 62:
      if (lookahead == 'O') ADVANCE(66);
      END_STATE();
    case 63:
      if (lookahead == 'O') ADVANCE(67);
      END_STATE();
    case 64:
      if (lookahead == 'O') ADVANCE(68);
      END_STATE();
    case 65:
      if (lookahead == 'R') ADVANCE(180);
      END_STATE();
    case 66:
      if (lookahead == 'R') ADVANCE(58);
      END_STATE();
    case 67:
      if (lookahead == 'R') ADVANCE(59);
      END_STATE();
    case 68:
      if (lookahead == 'R') ADVANCE(60);
      END_STATE();
    case 69:
      if (lookahead == 'T') ADVANCE(65);
      END_STATE();
    case 70:
      if (lookahead == 'T') ADVANCE(61);
      END_STATE();
    case 71:
      if (lookahead == 'W') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(115);
      END_STATE();
    case 72:
      if (lookahead == 'W') ADVANCE(64);
      END_STATE();
    case 73:
      if (lookahead == 'Y') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(115);
      END_STATE();
    case 74:
      if (lookahead == 'b') ADVANCE(93);
      if (lookahead == 'd') ADVANCE(84);
      if (lookahead == 's') ADVANCE(80);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'e' ||
          lookahead == 'f') ADVANCE(115);
      END_STATE();
    case 75:
      if (lookahead == 'd') ADVANCE(178);
      END_STATE();
    case 76:
      if (lookahead == 'd') ADVANCE(174);
      END_STATE();
    case 77:
      if (lookahead == 'd') ADVANCE(176);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 79:
      if (lookahead == 'h') ADVANCE(186);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(219);
      if (lookahead == 'p') ADVANCE(222);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(219);
      if (lookahead == 'w') ADVANCE(88);
      if (lookahead == 'x') ADVANCE(216);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(115);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(219);
      if (lookahead == 'x') ADVANCE(216);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(219);
      if (lookahead == 'x') ADVANCE(216);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(115);
      END_STATE();
    case 84:
      if (lookahead == 'i') ADVANCE(219);
      if (lookahead == 'x') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      END_STATE();
    case 85:
      if (lookahead == 'm') ADVANCE(112);
      END_STATE();
    case 86:
      if (lookahead == 'm') ADVANCE(85);
      END_STATE();
    case 87:
      if (lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 88:
      if (lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 89:
      if (lookahead == 'o') ADVANCE(98);
      END_STATE();
    case 90:
      if (lookahead == 'p') ADVANCE(222);
      if (lookahead == 'x') ADVANCE(216);
      END_STATE();
    case 91:
      if (lookahead == 'p') ADVANCE(222);
      if (lookahead == 'x') ADVANCE(216);
      if (lookahead == 'y') ADVANCE(100);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(115);
      END_STATE();
    case 92:
      if (lookahead == 'p') ADVANCE(222);
      if (lookahead == 'x') ADVANCE(216);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(115);
      END_STATE();
    case 93:
      if (lookahead == 'p') ADVANCE(222);
      if (lookahead == 'x') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      END_STATE();
    case 94:
      if (lookahead == 'p') ADVANCE(229);
      END_STATE();
    case 95:
      if (lookahead == 'r') ADVANCE(182);
      END_STATE();
    case 96:
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 97:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 98:
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 99:
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 100:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 101:
      if (lookahead == 'w') ADVANCE(89);
      END_STATE();
    case 102:
      if (lookahead == 'x') ADVANCE(216);
      END_STATE();
    case 103:
      if (lookahead == 'x') ADVANCE(216);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(115);
      END_STATE();
    case 104:
      if (lookahead == 'x') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      END_STATE();
    case 105:
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(143);
      if (lookahead == '$') ADVANCE(30);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '0') ADVANCE(272);
      if (lookahead == '\\') SKIP(14)
      if (lookahead == 'b') ADVANCE(43);
      if (lookahead == 'd') ADVANCE(38);
      if (lookahead == 'e') ADVANCE(35);
      if (lookahead == 'r') ADVANCE(31);
      if (lookahead == 's') ADVANCE(37);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(47);
      if (lookahead == 'x' ||
          lookahead == 'y') ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'f') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(105)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(273);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 106:
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(143);
      if (lookahead == '$') ADVANCE(30);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '0') ADVANCE(272);
      if (lookahead == '\\') SKIP(16)
      if (lookahead == 'b') ADVANCE(92);
      if (lookahead == 'd') ADVANCE(83);
      if (lookahead == 'e') ADVANCE(74);
      if (lookahead == 'r') ADVANCE(32);
      if (lookahead == 's') ADVANCE(80);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(103);
      if (lookahead == 'x' ||
          lookahead == 'y') ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'f') ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(106)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(273);
      END_STATE();
    case 107:
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(143);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(150);
      if (lookahead == '-') ADVANCE(151);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '\\') SKIP(18)
      if (lookahead == ']') ADVANCE(185);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(107)
      END_STATE();
    case 108:
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(143);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '\\') SKIP(20)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(108)
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 109:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      END_STATE();
    case 110:
      if (lookahead == 'b' ||
          lookahead == 'y') ADVANCE(193);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(110);
      END_STATE();
    case 111:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(225);
      END_STATE();
    case 112:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(227);
      END_STATE();
    case 113:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      END_STATE();
    case 114:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(233);
      END_STATE();
    case 115:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      END_STATE();
    case 116:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(191);
      END_STATE();
    case 117:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(189);
      END_STATE();
    case 118:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(115);
      END_STATE();
    case 119:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(117);
      END_STATE();
    case 120:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 121:
      if (eof) ADVANCE(139);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 122:
      if (eof) ADVANCE(139);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(121)
      END_STATE();
    case 123:
      if (eof) ADVANCE(139);
      if (lookahead == '\n') SKIP(123)
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(142);
      if (lookahead == '%') ADVANCE(159);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '/') ADVANCE(28);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(34);
      END_STATE();
    case 124:
      if (eof) ADVANCE(139);
      if (lookahead == '\n') SKIP(126)
      END_STATE();
    case 125:
      if (eof) ADVANCE(139);
      if (lookahead == '\n') SKIP(126)
      if (lookahead == '\r') SKIP(124)
      END_STATE();
    case 126:
      if (eof) ADVANCE(139);
      if (lookahead == '\n') ADVANCE(140);
      if (lookahead == '!') ADVANCE(54);
      if (lookahead == '"') ADVANCE(25);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(143);
      if (lookahead == '$') ADVANCE(294);
      if (lookahead == '\'') ADVANCE(26);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(150);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '.') ADVANCE(348);
      if (lookahead == '/') ADVANCE(154);
      if (lookahead == '0') ADVANCE(258);
      if (lookahead == '1') ADVANCE(259);
      if (lookahead == '<') ADVANCE(296);
      if (lookahead == '=') ADVANCE(56);
      if (lookahead == '>') ADVANCE(297);
      if (lookahead == 'B') ADVANCE(313);
      if (lookahead == 'D') ADVANCE(311);
      if (lookahead == 'Q') ADVANCE(312);
      if (lookahead == 'W') ADVANCE(302);
      if (lookahead == '[') ADVANCE(184);
      if (lookahead == '\\') SKIP(125)
      if (lookahead == '_') ADVANCE(345);
      if (lookahead == 'b') ADVANCE(330);
      if (lookahead == 'd') ADVANCE(321);
      if (lookahead == 'e') ADVANCE(314);
      if (lookahead == 'q') ADVANCE(341);
      if (lookahead == 'r') ADVANCE(295);
      if (lookahead == 's') ADVANCE(320);
      if (lookahead == 'w') ADVANCE(327);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(342);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(264);
      if (lookahead == 'x' ||
          lookahead == 'y') ADVANCE(326);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'f') ADVANCE(354);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(263);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(126)
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 127:
      if (eof) ADVANCE(139);
      if (lookahead == '\n') ADVANCE(140);
      if (lookahead == '"') ADVANCE(25);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(143);
      if (lookahead == '$') ADVANCE(294);
      if (lookahead == '\'') ADVANCE(26);
      if (lookahead == ',') ADVANCE(146);
      if (lookahead == '-') ADVANCE(293);
      if (lookahead == '.') ADVANCE(348);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '0') ADVANCE(258);
      if (lookahead == '1') ADVANCE(259);
      if (lookahead == 'B') ADVANCE(313);
      if (lookahead == 'D') ADVANCE(311);
      if (lookahead == 'Q') ADVANCE(312);
      if (lookahead == 'W') ADVANCE(302);
      if (lookahead == '[') ADVANCE(184);
      if (lookahead == '\\') SKIP(131)
      if (lookahead == '_') ADVANCE(345);
      if (lookahead == 'b') ADVANCE(330);
      if (lookahead == 'd') ADVANCE(321);
      if (lookahead == 'e') ADVANCE(314);
      if (lookahead == 'q') ADVANCE(341);
      if (lookahead == 'r') ADVANCE(295);
      if (lookahead == 's') ADVANCE(320);
      if (lookahead == 'w') ADVANCE(327);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(342);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(264);
      if (lookahead == 'x' ||
          lookahead == 'y') ADVANCE(326);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'f') ADVANCE(354);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(263);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(127)
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 128:
      if (eof) ADVANCE(139);
      if (lookahead == '\n') ADVANCE(140);
      if (lookahead == '"') ADVANCE(25);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(143);
      if (lookahead == '$') ADVANCE(294);
      if (lookahead == '\'') ADVANCE(26);
      if (lookahead == '-') ADVANCE(293);
      if (lookahead == '.') ADVANCE(348);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '0') ADVANCE(258);
      if (lookahead == '1') ADVANCE(259);
      if (lookahead == '\\') SKIP(133)
      if (lookahead == '_') ADVANCE(345);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(264);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(263);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(128)
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(354);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 129:
      if (eof) ADVANCE(139);
      if (lookahead == '\n') ADVANCE(140);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(143);
      if (lookahead == '.') ADVANCE(120);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '\\') SKIP(135)
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(129)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 130:
      if (eof) ADVANCE(139);
      if (lookahead == '\n') SKIP(127)
      END_STATE();
    case 131:
      if (eof) ADVANCE(139);
      if (lookahead == '\n') SKIP(127)
      if (lookahead == '\r') SKIP(130)
      END_STATE();
    case 132:
      if (eof) ADVANCE(139);
      if (lookahead == '\n') SKIP(128)
      END_STATE();
    case 133:
      if (eof) ADVANCE(139);
      if (lookahead == '\n') SKIP(128)
      if (lookahead == '\r') SKIP(132)
      END_STATE();
    case 134:
      if (eof) ADVANCE(139);
      if (lookahead == '\n') SKIP(129)
      END_STATE();
    case 135:
      if (eof) ADVANCE(139);
      if (lookahead == '\n') SKIP(129)
      if (lookahead == '\r') SKIP(134)
      END_STATE();
    case 136:
      if (eof) ADVANCE(139);
      if (lookahead == '\n') SKIP(138)
      END_STATE();
    case 137:
      if (eof) ADVANCE(139);
      if (lookahead == '\n') SKIP(138)
      if (lookahead == '\r') SKIP(136)
      END_STATE();
    case 138:
      if (eof) ADVANCE(139);
      if (lookahead == '\n') ADVANCE(141);
      if (lookahead == ' ') ADVANCE(147);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(143);
      if (lookahead == ',') ADVANCE(146);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '\\') SKIP(137)
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(138)
      END_STATE();
    case 139:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(141);
      if (lookahead == ' ') ADVANCE(147);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '"') ADVANCE(143);
      if (lookahead == ':') ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_segment_register_prefix);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == ':') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(34);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(141);
      if (lookahead == ' ') ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(348);
      if (lookahead == '0') ADVANCE(265);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '0') ADVANCE(251);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(255);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(143);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_nasm_macro_token1);
      if (lookahead == '%') ADVANCE(158);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_nasm_macro_token1);
      if (lookahead == '%') ADVANCE(159);
      if (lookahead == ':') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(34);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_gcc_mnemonic);
      if (lookahead == ':') ADVANCE(145);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(34);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_gcc_mnemonic);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_mnemonic);
      if (lookahead == ':') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(34);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_mnemonic);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_BYTE);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_BYTE);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(356);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_DWORD);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_DWORD);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(356);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_QWORD);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_QWORD);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(356);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_WORD);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_WORD);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(356);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_byte);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_byte);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(356);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_dword);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_dword);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(356);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_qword);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_qword);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(356);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_word);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_word);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(356);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_PTR);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_PTR);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(356);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_ptr);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_ptr);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(356);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_hexadecimal_token1);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_hexadecimal_token1);
      if (lookahead == ':') ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_hexadecimal_token1);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(356);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_hexadecimal_token2);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_hexadecimal_token2);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(356);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_hexadecimal_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(191);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_hexadecimal_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(192);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (lookahead == '_') ADVANCE(205);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(203);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (lookahead == '_') ADVANCE(206);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(204);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(319);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (lookahead == 'h') ADVANCE(186);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (lookahead == 'h') ADVANCE(188);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(356);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(205);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(206);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('2' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(319);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(356);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_binary_token2);
      if (lookahead == 'h') ADVANCE(186);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(205);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_binary_token2);
      if (lookahead == 'h') ADVANCE(188);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(206);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('2' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_binary_token2);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(205);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_binary_token2);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(206);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('2' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_octal_token1);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_octal_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(211);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_octal_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(212);
      if (sym__identifier_character_set_2(lookahead)) ADVANCE(356);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_octal_token1);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(356);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_octal_token2);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(211);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_octal_token2);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(212);
      if (sym__identifier_character_set_2(lookahead)) ADVANCE(356);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_register_token1);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_register_token1);
      if (lookahead == ':') ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_register_token1);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(356);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_register_token2);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_register_token2);
      if (lookahead == ':') ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_register_token2);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(356);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_register_token3);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_register_token3);
      if (lookahead == ':') ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_register_token3);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(356);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_register_token4);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_register_token4);
      if (lookahead == ':') ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_register_token4);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(356);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_register_token5);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_register_token5);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(356);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_register_token6);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_register_token6);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(356);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_rip);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_rip);
      if (lookahead == ':') ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_rip);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(356);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == '.') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(232);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == '.') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(233);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == 'e') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(234);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(235);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(236);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == '.') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == '.') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == 'e') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(239);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == 'e') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(234);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(241);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(242);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_integer);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(239);
      if (lookahead == '_') ADVANCE(110);
      if (lookahead == 'b') ADVANCE(194);
      if (lookahead == 'd') ADVANCE(283);
      if (lookahead == 'y') ADVANCE(198);
      if (lookahead == 'h' ||
          lookahead == 'x') ADVANCE(116);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(208);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(246);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(257);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(256);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(115);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(239);
      if (lookahead == '_') ADVANCE(110);
      if (lookahead == 'b') ADVANCE(200);
      if (lookahead == 'd') ADVANCE(286);
      if (lookahead == 'y') ADVANCE(193);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(207);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(246);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(257);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(256);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(115);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(239);
      if (lookahead == '_') ADVANCE(110);
      if (lookahead == 'b') ADVANCE(196);
      if (lookahead == 'd') ADVANCE(278);
      if (lookahead == 'y') ADVANCE(193);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(207);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(247);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(253);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(252);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(239);
      if (lookahead == '_') ADVANCE(110);
      if (lookahead == 'd') ADVANCE(243);
      if (lookahead == 'h') ADVANCE(186);
      if (lookahead == 'b' ||
          lookahead == 'y') ADVANCE(193);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(207);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(248);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(255);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(254);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(239);
      if (lookahead == '_') ADVANCE(110);
      if (lookahead == 'd') ADVANCE(243);
      if (lookahead == 'b' ||
          lookahead == 'y') ADVANCE(193);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(207);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(248);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(255);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(254);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(239);
      if (lookahead == 'd') ADVANCE(286);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(207);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(256);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(115);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(239);
      if (lookahead == 'd') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(115);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(239);
      if (lookahead == 'd') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(255);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(239);
      if (lookahead == 'd') ADVANCE(243);
      if (lookahead == 'h') ADVANCE(186);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(207);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(254);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(239);
      if (lookahead == 'd') ADVANCE(243);
      if (lookahead == 'h') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(255);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(239);
      if (lookahead == 'd') ADVANCE(243);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(207);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(254);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(239);
      if (lookahead == 'd') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(255);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(239);
      if (lookahead == 'd') ADVANCE(278);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(207);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(252);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(239);
      if (lookahead == 'd') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(240);
      if (lookahead == '_') ADVANCE(345);
      if (lookahead == 'b') ADVANCE(195);
      if (lookahead == 'd') ADVANCE(285);
      if (lookahead == 'y') ADVANCE(199);
      if (lookahead == 'h' ||
          lookahead == 'x') ADVANCE(352);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(209);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(260);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(271);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(351);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(240);
      if (lookahead == '_') ADVANCE(345);
      if (lookahead == 'b') ADVANCE(201);
      if (lookahead == 'd') ADVANCE(287);
      if (lookahead == 'y') ADVANCE(202);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(210);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(260);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(271);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(351);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(240);
      if (lookahead == '_') ADVANCE(345);
      if (lookahead == 'b') ADVANCE(197);
      if (lookahead == 'd') ADVANCE(281);
      if (lookahead == 'y') ADVANCE(202);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(210);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(261);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(267);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(319);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(240);
      if (lookahead == '_') ADVANCE(345);
      if (lookahead == 'd') ADVANCE(288);
      if (lookahead == 'h') ADVANCE(188);
      if (lookahead == 'b' ||
          lookahead == 'y') ADVANCE(202);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(210);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(262);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(269);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(268);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(240);
      if (lookahead == '_') ADVANCE(345);
      if (lookahead == 'd') ADVANCE(288);
      if (lookahead == 'b' ||
          lookahead == 'y') ADVANCE(202);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(210);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(262);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(269);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(268);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(240);
      if (lookahead == 'd') ADVANCE(287);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(210);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(351);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(240);
      if (lookahead == 'd') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(351);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(240);
      if (lookahead == 'd') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(240);
      if (lookahead == 'd') ADVANCE(288);
      if (lookahead == 'h') ADVANCE(188);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(210);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(268);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(240);
      if (lookahead == 'd') ADVANCE(288);
      if (lookahead == 'h') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(240);
      if (lookahead == 'd') ADVANCE(288);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(210);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(268);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(240);
      if (lookahead == 'd') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(240);
      if (lookahead == 'd') ADVANCE(281);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(210);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(319);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(240);
      if (lookahead == 'd') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(319);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'd') ADVANCE(283);
      if (lookahead == 'h' ||
          lookahead == 'x') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(277);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(115);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'd') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(277);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(115);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'd') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'd') ADVANCE(243);
      if (lookahead == 'h') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'd') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'd') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'h') ADVANCE(186);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'h') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(282);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'h') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(284);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'h') ADVANCE(188);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(356);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(282);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(284);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(319);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(319);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_integer);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(356);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '+') ADVANCE(113);
      if (lookahead == '-') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '+') ADVANCE(114);
      if (lookahead == '-') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(232);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '.') ADVANCE(348);
      if (lookahead == '0') ADVANCE(265);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '0') ADVANCE(355);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(356);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '1') ADVANCE(346);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(226);
      if (lookahead == 'b') ADVANCE(333);
      if (lookahead == 'd') ADVANCE(324);
      if (lookahead == 'i') ADVANCE(334);
      if (lookahead == 's') ADVANCE(320);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(344);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(356);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '=') ADVANCE(155);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '=') ADVANCE(157);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(171);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(356);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(167);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(356);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(169);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(356);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(165);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(356);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(305);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(356);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(307);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(356);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(308);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(356);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(298);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(356);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(181);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(356);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(299);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(356);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(300);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(356);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(301);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(356);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(306);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(356);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'W') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(351);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'W') ADVANCE(304);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(356);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'Y') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(351);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b') ADVANCE(332);
      if (lookahead == 'd') ADVANCE(323);
      if (lookahead == 's') ADVANCE(320);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'e' ||
          lookahead == 'f') ADVANCE(351);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(179);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(356);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(175);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(356);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(177);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(356);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(173);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(356);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(188);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(356);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(221);
      if (lookahead == 'p') ADVANCE(224);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(356);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(221);
      if (lookahead == 'w') ADVANCE(328);
      if (lookahead == 'x') ADVANCE(218);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(351);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(221);
      if (lookahead == 'x') ADVANCE(218);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(351);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(221);
      if (lookahead == 'x') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(319);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(221);
      if (lookahead == 'x') ADVANCE(218);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(356);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(347);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(356);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(325);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(356);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(335);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(356);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(337);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(356);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(338);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(356);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(224);
      if (lookahead == 'x') ADVANCE(218);
      if (lookahead == 'y') ADVANCE(339);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(351);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(224);
      if (lookahead == 'x') ADVANCE(218);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(351);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(224);
      if (lookahead == 'x') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(319);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(224);
      if (lookahead == 'x') ADVANCE(218);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(356);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(231);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(356);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(315);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(356);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(183);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(356);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(316);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(356);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(317);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(356);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(318);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(356);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(336);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(356);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'w') ADVANCE(329);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(356);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x') ADVANCE(218);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(351);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(319);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x') ADVANCE(218);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(356);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b' ||
          lookahead == 'y') ADVANCE(202);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(345);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('2' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(226);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(356);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(228);
      if (sym__identifier_character_set_2(lookahead)) ADVANCE(356);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(234);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(232);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(319);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(192);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(190);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(351);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(353);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym__identifier);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(356);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 123},
  [2] = {.lex_state = 126},
  [3] = {.lex_state = 126},
  [4] = {.lex_state = 126},
  [5] = {.lex_state = 127},
  [6] = {.lex_state = 127},
  [7] = {.lex_state = 127},
  [8] = {.lex_state = 21},
  [9] = {.lex_state = 126},
  [10] = {.lex_state = 126},
  [11] = {.lex_state = 126},
  [12] = {.lex_state = 126},
  [13] = {.lex_state = 126},
  [14] = {.lex_state = 126},
  [15] = {.lex_state = 126},
  [16] = {.lex_state = 126},
  [17] = {.lex_state = 126},
  [18] = {.lex_state = 126},
  [19] = {.lex_state = 126},
  [20] = {.lex_state = 126},
  [21] = {.lex_state = 126},
  [22] = {.lex_state = 126},
  [23] = {.lex_state = 126},
  [24] = {.lex_state = 127},
  [25] = {.lex_state = 127},
  [26] = {.lex_state = 127},
  [27] = {.lex_state = 127},
  [28] = {.lex_state = 127},
  [29] = {.lex_state = 127},
  [30] = {.lex_state = 127},
  [31] = {.lex_state = 127},
  [32] = {.lex_state = 127},
  [33] = {.lex_state = 127},
  [34] = {.lex_state = 127},
  [35] = {.lex_state = 127},
  [36] = {.lex_state = 127},
  [37] = {.lex_state = 127},
  [38] = {.lex_state = 23},
  [39] = {.lex_state = 23},
  [40] = {.lex_state = 22},
  [41] = {.lex_state = 128},
  [42] = {.lex_state = 128},
  [43] = {.lex_state = 128},
  [44] = {.lex_state = 23},
  [45] = {.lex_state = 24},
  [46] = {.lex_state = 105},
  [47] = {.lex_state = 105},
  [48] = {.lex_state = 105},
  [49] = {.lex_state = 105},
  [50] = {.lex_state = 106},
  [51] = {.lex_state = 106},
  [52] = {.lex_state = 106},
  [53] = {.lex_state = 106},
  [54] = {.lex_state = 123},
  [55] = {.lex_state = 123},
  [56] = {.lex_state = 123},
  [57] = {.lex_state = 129},
  [58] = {.lex_state = 107},
  [59] = {.lex_state = 107},
  [60] = {.lex_state = 107},
  [61] = {.lex_state = 107},
  [62] = {.lex_state = 107},
  [63] = {.lex_state = 106},
  [64] = {.lex_state = 138},
  [65] = {.lex_state = 107},
  [66] = {.lex_state = 107},
  [67] = {.lex_state = 107},
  [68] = {.lex_state = 138},
  [69] = {.lex_state = 138},
  [70] = {.lex_state = 107},
  [71] = {.lex_state = 107},
  [72] = {.lex_state = 107},
  [73] = {.lex_state = 107},
  [74] = {.lex_state = 107},
  [75] = {.lex_state = 138},
  [76] = {.lex_state = 138},
  [77] = {.lex_state = 107},
  [78] = {.lex_state = 107},
  [79] = {.lex_state = 138},
  [80] = {.lex_state = 138},
  [81] = {.lex_state = 138},
  [82] = {.lex_state = 138},
  [83] = {.lex_state = 138},
  [84] = {.lex_state = 107},
  [85] = {.lex_state = 126},
  [86] = {.lex_state = 126},
  [87] = {.lex_state = 126},
  [88] = {.lex_state = 126},
  [89] = {.lex_state = 126},
  [90] = {.lex_state = 126},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 108},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [aux_sym_nasm_macro_token1] = ACTIONS(1),
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
    [aux_sym_float_token2] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [aux_sym_string_token1] = ACTIONS(1),
    [aux_sym_string_token2] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(91),
    [sym__statement] = STATE(85),
    [sym_instruction] = STATE(85),
    [sym__normal_instruction] = STATE(88),
    [sym__gcc_pseudo_op] = STATE(88),
    [sym__macro] = STATE(85),
    [sym_nasm_macro] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [sym_label] = ACTIONS(9),
    [aux_sym_nasm_macro_token1] = ACTIONS(11),
    [sym_gcc_mnemonic] = ACTIONS(13),
    [sym_mnemonic] = ACTIONS(15),
  },
  [2] = {
    [sym_operator] = STATE(3),
    [sym__operand] = STATE(3),
    [sym_width] = STATE(38),
    [sym_pointer] = STATE(3),
    [sym_hexadecimal] = STATE(3),
    [sym_binary] = STATE(3),
    [sym_octal] = STATE(3),
    [sym_register] = STATE(3),
    [sym__constant] = STATE(3),
    [sym_float] = STATE(3),
    [sym_string] = STATE(3),
    [sym_identifier] = STATE(3),
    [aux_sym__macro_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(17),
    [anon_sym_LF] = ACTIONS(17),
    [sym_comment] = ACTIONS(19),
    [anon_sym_BANG_EQ] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_SLASH] = ACTIONS(21),
    [anon_sym_LT_EQ] = ACTIONS(21),
    [anon_sym_EQ_EQ] = ACTIONS(21),
    [anon_sym_GT_EQ] = ACTIONS(21),
    [anon_sym_BYTE] = ACTIONS(23),
    [anon_sym_DWORD] = ACTIONS(23),
    [anon_sym_QWORD] = ACTIONS(23),
    [anon_sym_WORD] = ACTIONS(23),
    [anon_sym_byte] = ACTIONS(23),
    [anon_sym_dword] = ACTIONS(23),
    [anon_sym_qword] = ACTIONS(23),
    [anon_sym_word] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [aux_sym_hexadecimal_token1] = ACTIONS(27),
    [aux_sym_hexadecimal_token2] = ACTIONS(27),
    [aux_sym_hexadecimal_token3] = ACTIONS(27),
    [aux_sym_binary_token1] = ACTIONS(29),
    [aux_sym_binary_token2] = ACTIONS(29),
    [aux_sym_octal_token1] = ACTIONS(31),
    [aux_sym_octal_token2] = ACTIONS(31),
    [aux_sym_register_token1] = ACTIONS(33),
    [aux_sym_register_token2] = ACTIONS(33),
    [aux_sym_register_token3] = ACTIONS(33),
    [aux_sym_register_token4] = ACTIONS(33),
    [aux_sym_register_token5] = ACTIONS(33),
    [aux_sym_register_token6] = ACTIONS(33),
    [anon_sym_rip] = ACTIONS(33),
    [aux_sym_float_token1] = ACTIONS(35),
    [aux_sym_float_token2] = ACTIONS(35),
    [sym_integer] = ACTIONS(37),
    [aux_sym_string_token1] = ACTIONS(39),
    [aux_sym_string_token2] = ACTIONS(39),
    [sym__identifier] = ACTIONS(41),
  },
  [3] = {
    [sym_operator] = STATE(4),
    [sym__operand] = STATE(4),
    [sym_width] = STATE(38),
    [sym_pointer] = STATE(4),
    [sym_hexadecimal] = STATE(4),
    [sym_binary] = STATE(4),
    [sym_octal] = STATE(4),
    [sym_register] = STATE(4),
    [sym__constant] = STATE(4),
    [sym_float] = STATE(4),
    [sym_string] = STATE(4),
    [sym_identifier] = STATE(4),
    [aux_sym__macro_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(43),
    [anon_sym_LF] = ACTIONS(43),
    [sym_comment] = ACTIONS(19),
    [anon_sym_BANG_EQ] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_SLASH] = ACTIONS(21),
    [anon_sym_LT_EQ] = ACTIONS(21),
    [anon_sym_EQ_EQ] = ACTIONS(21),
    [anon_sym_GT_EQ] = ACTIONS(21),
    [anon_sym_BYTE] = ACTIONS(23),
    [anon_sym_DWORD] = ACTIONS(23),
    [anon_sym_QWORD] = ACTIONS(23),
    [anon_sym_WORD] = ACTIONS(23),
    [anon_sym_byte] = ACTIONS(23),
    [anon_sym_dword] = ACTIONS(23),
    [anon_sym_qword] = ACTIONS(23),
    [anon_sym_word] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [aux_sym_hexadecimal_token1] = ACTIONS(27),
    [aux_sym_hexadecimal_token2] = ACTIONS(27),
    [aux_sym_hexadecimal_token3] = ACTIONS(27),
    [aux_sym_binary_token1] = ACTIONS(29),
    [aux_sym_binary_token2] = ACTIONS(29),
    [aux_sym_octal_token1] = ACTIONS(31),
    [aux_sym_octal_token2] = ACTIONS(31),
    [aux_sym_register_token1] = ACTIONS(33),
    [aux_sym_register_token2] = ACTIONS(33),
    [aux_sym_register_token3] = ACTIONS(33),
    [aux_sym_register_token4] = ACTIONS(33),
    [aux_sym_register_token5] = ACTIONS(33),
    [aux_sym_register_token6] = ACTIONS(33),
    [anon_sym_rip] = ACTIONS(33),
    [aux_sym_float_token1] = ACTIONS(35),
    [aux_sym_float_token2] = ACTIONS(35),
    [sym_integer] = ACTIONS(37),
    [aux_sym_string_token1] = ACTIONS(39),
    [aux_sym_string_token2] = ACTIONS(39),
    [sym__identifier] = ACTIONS(41),
  },
  [4] = {
    [sym_operator] = STATE(4),
    [sym__operand] = STATE(4),
    [sym_width] = STATE(38),
    [sym_pointer] = STATE(4),
    [sym_hexadecimal] = STATE(4),
    [sym_binary] = STATE(4),
    [sym_octal] = STATE(4),
    [sym_register] = STATE(4),
    [sym__constant] = STATE(4),
    [sym_float] = STATE(4),
    [sym_string] = STATE(4),
    [sym_identifier] = STATE(4),
    [aux_sym__macro_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(45),
    [anon_sym_LF] = ACTIONS(45),
    [sym_comment] = ACTIONS(19),
    [anon_sym_BANG_EQ] = ACTIONS(47),
    [anon_sym_STAR] = ACTIONS(47),
    [anon_sym_PLUS] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_SLASH] = ACTIONS(47),
    [anon_sym_LT_EQ] = ACTIONS(47),
    [anon_sym_EQ_EQ] = ACTIONS(47),
    [anon_sym_GT_EQ] = ACTIONS(47),
    [anon_sym_BYTE] = ACTIONS(50),
    [anon_sym_DWORD] = ACTIONS(50),
    [anon_sym_QWORD] = ACTIONS(50),
    [anon_sym_WORD] = ACTIONS(50),
    [anon_sym_byte] = ACTIONS(50),
    [anon_sym_dword] = ACTIONS(50),
    [anon_sym_qword] = ACTIONS(50),
    [anon_sym_word] = ACTIONS(50),
    [anon_sym_LBRACK] = ACTIONS(53),
    [aux_sym_hexadecimal_token1] = ACTIONS(56),
    [aux_sym_hexadecimal_token2] = ACTIONS(56),
    [aux_sym_hexadecimal_token3] = ACTIONS(56),
    [aux_sym_binary_token1] = ACTIONS(59),
    [aux_sym_binary_token2] = ACTIONS(59),
    [aux_sym_octal_token1] = ACTIONS(62),
    [aux_sym_octal_token2] = ACTIONS(62),
    [aux_sym_register_token1] = ACTIONS(65),
    [aux_sym_register_token2] = ACTIONS(65),
    [aux_sym_register_token3] = ACTIONS(65),
    [aux_sym_register_token4] = ACTIONS(65),
    [aux_sym_register_token5] = ACTIONS(65),
    [aux_sym_register_token6] = ACTIONS(65),
    [anon_sym_rip] = ACTIONS(65),
    [aux_sym_float_token1] = ACTIONS(68),
    [aux_sym_float_token2] = ACTIONS(68),
    [sym_integer] = ACTIONS(71),
    [aux_sym_string_token1] = ACTIONS(74),
    [aux_sym_string_token2] = ACTIONS(74),
    [sym__identifier] = ACTIONS(77),
  },
  [5] = {
    [sym__operand] = STATE(5),
    [sym_width] = STATE(39),
    [sym_pointer] = STATE(5),
    [sym_hexadecimal] = STATE(5),
    [sym_binary] = STATE(5),
    [sym_octal] = STATE(5),
    [sym_register] = STATE(5),
    [sym__constant] = STATE(5),
    [sym_float] = STATE(5),
    [sym_string] = STATE(5),
    [sym_identifier] = STATE(5),
    [aux_sym__normal_instruction_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(80),
    [anon_sym_LF] = ACTIONS(80),
    [sym_comment] = ACTIONS(19),
    [anon_sym_COMMA] = ACTIONS(82),
    [anon_sym_BYTE] = ACTIONS(85),
    [anon_sym_DWORD] = ACTIONS(85),
    [anon_sym_QWORD] = ACTIONS(85),
    [anon_sym_WORD] = ACTIONS(85),
    [anon_sym_byte] = ACTIONS(85),
    [anon_sym_dword] = ACTIONS(85),
    [anon_sym_qword] = ACTIONS(85),
    [anon_sym_word] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(88),
    [aux_sym_hexadecimal_token1] = ACTIONS(91),
    [aux_sym_hexadecimal_token2] = ACTIONS(91),
    [aux_sym_hexadecimal_token3] = ACTIONS(91),
    [aux_sym_binary_token1] = ACTIONS(94),
    [aux_sym_binary_token2] = ACTIONS(94),
    [aux_sym_octal_token1] = ACTIONS(97),
    [aux_sym_octal_token2] = ACTIONS(97),
    [aux_sym_register_token1] = ACTIONS(100),
    [aux_sym_register_token2] = ACTIONS(100),
    [aux_sym_register_token3] = ACTIONS(100),
    [aux_sym_register_token4] = ACTIONS(100),
    [aux_sym_register_token5] = ACTIONS(100),
    [aux_sym_register_token6] = ACTIONS(100),
    [anon_sym_rip] = ACTIONS(100),
    [aux_sym_float_token1] = ACTIONS(103),
    [aux_sym_float_token2] = ACTIONS(103),
    [sym_integer] = ACTIONS(106),
    [aux_sym_string_token1] = ACTIONS(109),
    [aux_sym_string_token2] = ACTIONS(109),
    [sym__identifier] = ACTIONS(112),
  },
  [6] = {
    [sym__operand] = STATE(7),
    [sym_width] = STATE(39),
    [sym_pointer] = STATE(7),
    [sym_hexadecimal] = STATE(7),
    [sym_binary] = STATE(7),
    [sym_octal] = STATE(7),
    [sym_register] = STATE(7),
    [sym__constant] = STATE(7),
    [sym_float] = STATE(7),
    [sym_string] = STATE(7),
    [sym_identifier] = STATE(7),
    [aux_sym__normal_instruction_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(115),
    [anon_sym_LF] = ACTIONS(115),
    [sym_comment] = ACTIONS(19),
    [anon_sym_COMMA] = ACTIONS(117),
    [anon_sym_BYTE] = ACTIONS(23),
    [anon_sym_DWORD] = ACTIONS(23),
    [anon_sym_QWORD] = ACTIONS(23),
    [anon_sym_WORD] = ACTIONS(23),
    [anon_sym_byte] = ACTIONS(23),
    [anon_sym_dword] = ACTIONS(23),
    [anon_sym_qword] = ACTIONS(23),
    [anon_sym_word] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(119),
    [aux_sym_hexadecimal_token1] = ACTIONS(121),
    [aux_sym_hexadecimal_token2] = ACTIONS(121),
    [aux_sym_hexadecimal_token3] = ACTIONS(121),
    [aux_sym_binary_token1] = ACTIONS(123),
    [aux_sym_binary_token2] = ACTIONS(123),
    [aux_sym_octal_token1] = ACTIONS(125),
    [aux_sym_octal_token2] = ACTIONS(125),
    [aux_sym_register_token1] = ACTIONS(127),
    [aux_sym_register_token2] = ACTIONS(127),
    [aux_sym_register_token3] = ACTIONS(127),
    [aux_sym_register_token4] = ACTIONS(127),
    [aux_sym_register_token5] = ACTIONS(127),
    [aux_sym_register_token6] = ACTIONS(127),
    [anon_sym_rip] = ACTIONS(127),
    [aux_sym_float_token1] = ACTIONS(129),
    [aux_sym_float_token2] = ACTIONS(129),
    [sym_integer] = ACTIONS(131),
    [aux_sym_string_token1] = ACTIONS(133),
    [aux_sym_string_token2] = ACTIONS(133),
    [sym__identifier] = ACTIONS(135),
  },
  [7] = {
    [sym__operand] = STATE(5),
    [sym_width] = STATE(39),
    [sym_pointer] = STATE(5),
    [sym_hexadecimal] = STATE(5),
    [sym_binary] = STATE(5),
    [sym_octal] = STATE(5),
    [sym_register] = STATE(5),
    [sym__constant] = STATE(5),
    [sym_float] = STATE(5),
    [sym_string] = STATE(5),
    [sym_identifier] = STATE(5),
    [aux_sym__normal_instruction_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(137),
    [anon_sym_LF] = ACTIONS(137),
    [sym_comment] = ACTIONS(19),
    [anon_sym_COMMA] = ACTIONS(117),
    [anon_sym_BYTE] = ACTIONS(23),
    [anon_sym_DWORD] = ACTIONS(23),
    [anon_sym_QWORD] = ACTIONS(23),
    [anon_sym_WORD] = ACTIONS(23),
    [anon_sym_byte] = ACTIONS(23),
    [anon_sym_dword] = ACTIONS(23),
    [anon_sym_qword] = ACTIONS(23),
    [anon_sym_word] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(119),
    [aux_sym_hexadecimal_token1] = ACTIONS(121),
    [aux_sym_hexadecimal_token2] = ACTIONS(121),
    [aux_sym_hexadecimal_token3] = ACTIONS(121),
    [aux_sym_binary_token1] = ACTIONS(123),
    [aux_sym_binary_token2] = ACTIONS(123),
    [aux_sym_octal_token1] = ACTIONS(125),
    [aux_sym_octal_token2] = ACTIONS(125),
    [aux_sym_register_token1] = ACTIONS(127),
    [aux_sym_register_token2] = ACTIONS(127),
    [aux_sym_register_token3] = ACTIONS(127),
    [aux_sym_register_token4] = ACTIONS(127),
    [aux_sym_register_token5] = ACTIONS(127),
    [aux_sym_register_token6] = ACTIONS(127),
    [anon_sym_rip] = ACTIONS(127),
    [aux_sym_float_token1] = ACTIONS(129),
    [aux_sym_float_token2] = ACTIONS(129),
    [sym_integer] = ACTIONS(131),
    [aux_sym_string_token1] = ACTIONS(133),
    [aux_sym_string_token2] = ACTIONS(133),
    [sym__identifier] = ACTIONS(135),
  },
  [8] = {
    [sym__operand] = STATE(33),
    [sym_width] = STATE(39),
    [sym_pointer] = STATE(33),
    [sym_hexadecimal] = STATE(33),
    [sym_binary] = STATE(33),
    [sym_octal] = STATE(33),
    [sym_register] = STATE(33),
    [sym__constant] = STATE(33),
    [sym_float] = STATE(33),
    [sym_string] = STATE(33),
    [sym_identifier] = STATE(33),
    [sym_comment] = ACTIONS(3),
    [anon_sym_BYTE] = ACTIONS(23),
    [anon_sym_DWORD] = ACTIONS(23),
    [anon_sym_QWORD] = ACTIONS(23),
    [anon_sym_WORD] = ACTIONS(23),
    [anon_sym_byte] = ACTIONS(23),
    [anon_sym_dword] = ACTIONS(23),
    [anon_sym_qword] = ACTIONS(23),
    [anon_sym_word] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(139),
    [aux_sym_hexadecimal_token1] = ACTIONS(121),
    [aux_sym_hexadecimal_token2] = ACTIONS(121),
    [aux_sym_hexadecimal_token3] = ACTIONS(121),
    [aux_sym_binary_token1] = ACTIONS(123),
    [aux_sym_binary_token2] = ACTIONS(123),
    [aux_sym_octal_token1] = ACTIONS(125),
    [aux_sym_octal_token2] = ACTIONS(125),
    [aux_sym_register_token1] = ACTIONS(127),
    [aux_sym_register_token2] = ACTIONS(127),
    [aux_sym_register_token3] = ACTIONS(127),
    [aux_sym_register_token4] = ACTIONS(127),
    [aux_sym_register_token5] = ACTIONS(127),
    [aux_sym_register_token6] = ACTIONS(127),
    [anon_sym_rip] = ACTIONS(127),
    [aux_sym_float_token1] = ACTIONS(129),
    [aux_sym_float_token2] = ACTIONS(129),
    [sym_integer] = ACTIONS(131),
    [aux_sym_string_token1] = ACTIONS(141),
    [aux_sym_string_token2] = ACTIONS(141),
    [sym__identifier] = ACTIONS(135),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(143),
    [anon_sym_LF] = ACTIONS(143),
    [sym_comment] = ACTIONS(19),
    [anon_sym_BANG_EQ] = ACTIONS(145),
    [anon_sym_STAR] = ACTIONS(145),
    [anon_sym_PLUS] = ACTIONS(145),
    [anon_sym_DASH] = ACTIONS(145),
    [anon_sym_SLASH] = ACTIONS(145),
    [anon_sym_LT_EQ] = ACTIONS(145),
    [anon_sym_EQ_EQ] = ACTIONS(145),
    [anon_sym_GT_EQ] = ACTIONS(145),
    [anon_sym_BYTE] = ACTIONS(145),
    [anon_sym_DWORD] = ACTIONS(145),
    [anon_sym_QWORD] = ACTIONS(145),
    [anon_sym_WORD] = ACTIONS(145),
    [anon_sym_byte] = ACTIONS(145),
    [anon_sym_dword] = ACTIONS(145),
    [anon_sym_qword] = ACTIONS(145),
    [anon_sym_word] = ACTIONS(145),
    [anon_sym_LBRACK] = ACTIONS(145),
    [aux_sym_hexadecimal_token1] = ACTIONS(145),
    [aux_sym_hexadecimal_token2] = ACTIONS(145),
    [aux_sym_hexadecimal_token3] = ACTIONS(145),
    [aux_sym_binary_token1] = ACTIONS(145),
    [aux_sym_binary_token2] = ACTIONS(145),
    [aux_sym_octal_token1] = ACTIONS(145),
    [aux_sym_octal_token2] = ACTIONS(145),
    [aux_sym_register_token1] = ACTIONS(145),
    [aux_sym_register_token2] = ACTIONS(145),
    [aux_sym_register_token3] = ACTIONS(145),
    [aux_sym_register_token4] = ACTIONS(145),
    [aux_sym_register_token5] = ACTIONS(145),
    [aux_sym_register_token6] = ACTIONS(145),
    [anon_sym_rip] = ACTIONS(145),
    [aux_sym_float_token1] = ACTIONS(145),
    [aux_sym_float_token2] = ACTIONS(145),
    [sym_integer] = ACTIONS(145),
    [aux_sym_string_token1] = ACTIONS(145),
    [aux_sym_string_token2] = ACTIONS(145),
    [sym__identifier] = ACTIONS(145),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(147),
    [anon_sym_LF] = ACTIONS(147),
    [sym_comment] = ACTIONS(19),
    [anon_sym_BANG_EQ] = ACTIONS(149),
    [anon_sym_STAR] = ACTIONS(149),
    [anon_sym_PLUS] = ACTIONS(149),
    [anon_sym_DASH] = ACTIONS(149),
    [anon_sym_SLASH] = ACTIONS(149),
    [anon_sym_LT_EQ] = ACTIONS(149),
    [anon_sym_EQ_EQ] = ACTIONS(149),
    [anon_sym_GT_EQ] = ACTIONS(149),
    [anon_sym_BYTE] = ACTIONS(149),
    [anon_sym_DWORD] = ACTIONS(149),
    [anon_sym_QWORD] = ACTIONS(149),
    [anon_sym_WORD] = ACTIONS(149),
    [anon_sym_byte] = ACTIONS(149),
    [anon_sym_dword] = ACTIONS(149),
    [anon_sym_qword] = ACTIONS(149),
    [anon_sym_word] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(149),
    [aux_sym_hexadecimal_token1] = ACTIONS(149),
    [aux_sym_hexadecimal_token2] = ACTIONS(149),
    [aux_sym_hexadecimal_token3] = ACTIONS(149),
    [aux_sym_binary_token1] = ACTIONS(149),
    [aux_sym_binary_token2] = ACTIONS(149),
    [aux_sym_octal_token1] = ACTIONS(149),
    [aux_sym_octal_token2] = ACTIONS(149),
    [aux_sym_register_token1] = ACTIONS(149),
    [aux_sym_register_token2] = ACTIONS(149),
    [aux_sym_register_token3] = ACTIONS(149),
    [aux_sym_register_token4] = ACTIONS(149),
    [aux_sym_register_token5] = ACTIONS(149),
    [aux_sym_register_token6] = ACTIONS(149),
    [anon_sym_rip] = ACTIONS(149),
    [aux_sym_float_token1] = ACTIONS(149),
    [aux_sym_float_token2] = ACTIONS(149),
    [sym_integer] = ACTIONS(149),
    [aux_sym_string_token1] = ACTIONS(149),
    [aux_sym_string_token2] = ACTIONS(149),
    [sym__identifier] = ACTIONS(149),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(151),
    [anon_sym_LF] = ACTIONS(151),
    [sym_comment] = ACTIONS(19),
    [anon_sym_BANG_EQ] = ACTIONS(153),
    [anon_sym_STAR] = ACTIONS(153),
    [anon_sym_PLUS] = ACTIONS(153),
    [anon_sym_DASH] = ACTIONS(153),
    [anon_sym_SLASH] = ACTIONS(153),
    [anon_sym_LT_EQ] = ACTIONS(153),
    [anon_sym_EQ_EQ] = ACTIONS(153),
    [anon_sym_GT_EQ] = ACTIONS(153),
    [anon_sym_BYTE] = ACTIONS(153),
    [anon_sym_DWORD] = ACTIONS(153),
    [anon_sym_QWORD] = ACTIONS(153),
    [anon_sym_WORD] = ACTIONS(153),
    [anon_sym_byte] = ACTIONS(153),
    [anon_sym_dword] = ACTIONS(153),
    [anon_sym_qword] = ACTIONS(153),
    [anon_sym_word] = ACTIONS(153),
    [anon_sym_LBRACK] = ACTIONS(153),
    [aux_sym_hexadecimal_token1] = ACTIONS(153),
    [aux_sym_hexadecimal_token2] = ACTIONS(153),
    [aux_sym_hexadecimal_token3] = ACTIONS(153),
    [aux_sym_binary_token1] = ACTIONS(153),
    [aux_sym_binary_token2] = ACTIONS(153),
    [aux_sym_octal_token1] = ACTIONS(153),
    [aux_sym_octal_token2] = ACTIONS(153),
    [aux_sym_register_token1] = ACTIONS(153),
    [aux_sym_register_token2] = ACTIONS(153),
    [aux_sym_register_token3] = ACTIONS(153),
    [aux_sym_register_token4] = ACTIONS(153),
    [aux_sym_register_token5] = ACTIONS(153),
    [aux_sym_register_token6] = ACTIONS(153),
    [anon_sym_rip] = ACTIONS(153),
    [aux_sym_float_token1] = ACTIONS(153),
    [aux_sym_float_token2] = ACTIONS(153),
    [sym_integer] = ACTIONS(153),
    [aux_sym_string_token1] = ACTIONS(153),
    [aux_sym_string_token2] = ACTIONS(153),
    [sym__identifier] = ACTIONS(153),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(155),
    [anon_sym_LF] = ACTIONS(155),
    [sym_comment] = ACTIONS(19),
    [anon_sym_BANG_EQ] = ACTIONS(157),
    [anon_sym_STAR] = ACTIONS(157),
    [anon_sym_PLUS] = ACTIONS(157),
    [anon_sym_DASH] = ACTIONS(157),
    [anon_sym_SLASH] = ACTIONS(157),
    [anon_sym_LT_EQ] = ACTIONS(157),
    [anon_sym_EQ_EQ] = ACTIONS(157),
    [anon_sym_GT_EQ] = ACTIONS(157),
    [anon_sym_BYTE] = ACTIONS(157),
    [anon_sym_DWORD] = ACTIONS(157),
    [anon_sym_QWORD] = ACTIONS(157),
    [anon_sym_WORD] = ACTIONS(157),
    [anon_sym_byte] = ACTIONS(157),
    [anon_sym_dword] = ACTIONS(157),
    [anon_sym_qword] = ACTIONS(157),
    [anon_sym_word] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(157),
    [aux_sym_hexadecimal_token1] = ACTIONS(157),
    [aux_sym_hexadecimal_token2] = ACTIONS(157),
    [aux_sym_hexadecimal_token3] = ACTIONS(157),
    [aux_sym_binary_token1] = ACTIONS(157),
    [aux_sym_binary_token2] = ACTIONS(157),
    [aux_sym_octal_token1] = ACTIONS(157),
    [aux_sym_octal_token2] = ACTIONS(157),
    [aux_sym_register_token1] = ACTIONS(157),
    [aux_sym_register_token2] = ACTIONS(157),
    [aux_sym_register_token3] = ACTIONS(157),
    [aux_sym_register_token4] = ACTIONS(157),
    [aux_sym_register_token5] = ACTIONS(157),
    [aux_sym_register_token6] = ACTIONS(157),
    [anon_sym_rip] = ACTIONS(157),
    [aux_sym_float_token1] = ACTIONS(157),
    [aux_sym_float_token2] = ACTIONS(157),
    [sym_integer] = ACTIONS(157),
    [aux_sym_string_token1] = ACTIONS(157),
    [aux_sym_string_token2] = ACTIONS(157),
    [sym__identifier] = ACTIONS(157),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(159),
    [anon_sym_LF] = ACTIONS(159),
    [sym_comment] = ACTIONS(19),
    [anon_sym_BANG_EQ] = ACTIONS(161),
    [anon_sym_STAR] = ACTIONS(161),
    [anon_sym_PLUS] = ACTIONS(161),
    [anon_sym_DASH] = ACTIONS(161),
    [anon_sym_SLASH] = ACTIONS(161),
    [anon_sym_LT_EQ] = ACTIONS(161),
    [anon_sym_EQ_EQ] = ACTIONS(161),
    [anon_sym_GT_EQ] = ACTIONS(161),
    [anon_sym_BYTE] = ACTIONS(161),
    [anon_sym_DWORD] = ACTIONS(161),
    [anon_sym_QWORD] = ACTIONS(161),
    [anon_sym_WORD] = ACTIONS(161),
    [anon_sym_byte] = ACTIONS(161),
    [anon_sym_dword] = ACTIONS(161),
    [anon_sym_qword] = ACTIONS(161),
    [anon_sym_word] = ACTIONS(161),
    [anon_sym_LBRACK] = ACTIONS(161),
    [aux_sym_hexadecimal_token1] = ACTIONS(161),
    [aux_sym_hexadecimal_token2] = ACTIONS(161),
    [aux_sym_hexadecimal_token3] = ACTIONS(161),
    [aux_sym_binary_token1] = ACTIONS(161),
    [aux_sym_binary_token2] = ACTIONS(161),
    [aux_sym_octal_token1] = ACTIONS(161),
    [aux_sym_octal_token2] = ACTIONS(161),
    [aux_sym_register_token1] = ACTIONS(161),
    [aux_sym_register_token2] = ACTIONS(161),
    [aux_sym_register_token3] = ACTIONS(161),
    [aux_sym_register_token4] = ACTIONS(161),
    [aux_sym_register_token5] = ACTIONS(161),
    [aux_sym_register_token6] = ACTIONS(161),
    [anon_sym_rip] = ACTIONS(161),
    [aux_sym_float_token1] = ACTIONS(161),
    [aux_sym_float_token2] = ACTIONS(161),
    [sym_integer] = ACTIONS(161),
    [aux_sym_string_token1] = ACTIONS(161),
    [aux_sym_string_token2] = ACTIONS(161),
    [sym__identifier] = ACTIONS(161),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(163),
    [anon_sym_LF] = ACTIONS(163),
    [sym_comment] = ACTIONS(19),
    [anon_sym_BANG_EQ] = ACTIONS(165),
    [anon_sym_STAR] = ACTIONS(165),
    [anon_sym_PLUS] = ACTIONS(165),
    [anon_sym_DASH] = ACTIONS(165),
    [anon_sym_SLASH] = ACTIONS(165),
    [anon_sym_LT_EQ] = ACTIONS(165),
    [anon_sym_EQ_EQ] = ACTIONS(165),
    [anon_sym_GT_EQ] = ACTIONS(165),
    [anon_sym_BYTE] = ACTIONS(165),
    [anon_sym_DWORD] = ACTIONS(165),
    [anon_sym_QWORD] = ACTIONS(165),
    [anon_sym_WORD] = ACTIONS(165),
    [anon_sym_byte] = ACTIONS(165),
    [anon_sym_dword] = ACTIONS(165),
    [anon_sym_qword] = ACTIONS(165),
    [anon_sym_word] = ACTIONS(165),
    [anon_sym_LBRACK] = ACTIONS(165),
    [aux_sym_hexadecimal_token1] = ACTIONS(165),
    [aux_sym_hexadecimal_token2] = ACTIONS(165),
    [aux_sym_hexadecimal_token3] = ACTIONS(165),
    [aux_sym_binary_token1] = ACTIONS(165),
    [aux_sym_binary_token2] = ACTIONS(165),
    [aux_sym_octal_token1] = ACTIONS(165),
    [aux_sym_octal_token2] = ACTIONS(165),
    [aux_sym_register_token1] = ACTIONS(165),
    [aux_sym_register_token2] = ACTIONS(165),
    [aux_sym_register_token3] = ACTIONS(165),
    [aux_sym_register_token4] = ACTIONS(165),
    [aux_sym_register_token5] = ACTIONS(165),
    [aux_sym_register_token6] = ACTIONS(165),
    [anon_sym_rip] = ACTIONS(165),
    [aux_sym_float_token1] = ACTIONS(165),
    [aux_sym_float_token2] = ACTIONS(165),
    [sym_integer] = ACTIONS(165),
    [aux_sym_string_token1] = ACTIONS(165),
    [aux_sym_string_token2] = ACTIONS(165),
    [sym__identifier] = ACTIONS(165),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(167),
    [anon_sym_LF] = ACTIONS(167),
    [sym_comment] = ACTIONS(19),
    [anon_sym_BANG_EQ] = ACTIONS(169),
    [anon_sym_STAR] = ACTIONS(169),
    [anon_sym_PLUS] = ACTIONS(169),
    [anon_sym_DASH] = ACTIONS(169),
    [anon_sym_SLASH] = ACTIONS(169),
    [anon_sym_LT_EQ] = ACTIONS(169),
    [anon_sym_EQ_EQ] = ACTIONS(169),
    [anon_sym_GT_EQ] = ACTIONS(169),
    [anon_sym_BYTE] = ACTIONS(169),
    [anon_sym_DWORD] = ACTIONS(169),
    [anon_sym_QWORD] = ACTIONS(169),
    [anon_sym_WORD] = ACTIONS(169),
    [anon_sym_byte] = ACTIONS(169),
    [anon_sym_dword] = ACTIONS(169),
    [anon_sym_qword] = ACTIONS(169),
    [anon_sym_word] = ACTIONS(169),
    [anon_sym_LBRACK] = ACTIONS(169),
    [aux_sym_hexadecimal_token1] = ACTIONS(169),
    [aux_sym_hexadecimal_token2] = ACTIONS(169),
    [aux_sym_hexadecimal_token3] = ACTIONS(169),
    [aux_sym_binary_token1] = ACTIONS(169),
    [aux_sym_binary_token2] = ACTIONS(169),
    [aux_sym_octal_token1] = ACTIONS(169),
    [aux_sym_octal_token2] = ACTIONS(169),
    [aux_sym_register_token1] = ACTIONS(169),
    [aux_sym_register_token2] = ACTIONS(169),
    [aux_sym_register_token3] = ACTIONS(169),
    [aux_sym_register_token4] = ACTIONS(169),
    [aux_sym_register_token5] = ACTIONS(169),
    [aux_sym_register_token6] = ACTIONS(169),
    [anon_sym_rip] = ACTIONS(169),
    [aux_sym_float_token1] = ACTIONS(169),
    [aux_sym_float_token2] = ACTIONS(169),
    [sym_integer] = ACTIONS(169),
    [aux_sym_string_token1] = ACTIONS(169),
    [aux_sym_string_token2] = ACTIONS(169),
    [sym__identifier] = ACTIONS(169),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(171),
    [anon_sym_LF] = ACTIONS(171),
    [sym_comment] = ACTIONS(19),
    [anon_sym_BANG_EQ] = ACTIONS(173),
    [anon_sym_STAR] = ACTIONS(173),
    [anon_sym_PLUS] = ACTIONS(173),
    [anon_sym_DASH] = ACTIONS(173),
    [anon_sym_SLASH] = ACTIONS(173),
    [anon_sym_LT_EQ] = ACTIONS(173),
    [anon_sym_EQ_EQ] = ACTIONS(173),
    [anon_sym_GT_EQ] = ACTIONS(173),
    [anon_sym_BYTE] = ACTIONS(173),
    [anon_sym_DWORD] = ACTIONS(173),
    [anon_sym_QWORD] = ACTIONS(173),
    [anon_sym_WORD] = ACTIONS(173),
    [anon_sym_byte] = ACTIONS(173),
    [anon_sym_dword] = ACTIONS(173),
    [anon_sym_qword] = ACTIONS(173),
    [anon_sym_word] = ACTIONS(173),
    [anon_sym_LBRACK] = ACTIONS(175),
    [aux_sym_hexadecimal_token1] = ACTIONS(173),
    [aux_sym_hexadecimal_token2] = ACTIONS(173),
    [aux_sym_hexadecimal_token3] = ACTIONS(173),
    [aux_sym_binary_token1] = ACTIONS(173),
    [aux_sym_binary_token2] = ACTIONS(173),
    [aux_sym_octal_token1] = ACTIONS(173),
    [aux_sym_octal_token2] = ACTIONS(173),
    [aux_sym_register_token1] = ACTIONS(173),
    [aux_sym_register_token2] = ACTIONS(173),
    [aux_sym_register_token3] = ACTIONS(173),
    [aux_sym_register_token4] = ACTIONS(173),
    [aux_sym_register_token5] = ACTIONS(173),
    [aux_sym_register_token6] = ACTIONS(173),
    [anon_sym_rip] = ACTIONS(173),
    [aux_sym_float_token1] = ACTIONS(173),
    [aux_sym_float_token2] = ACTIONS(173),
    [sym_integer] = ACTIONS(173),
    [aux_sym_string_token1] = ACTIONS(173),
    [aux_sym_string_token2] = ACTIONS(173),
    [sym__identifier] = ACTIONS(173),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(177),
    [anon_sym_LF] = ACTIONS(177),
    [sym_comment] = ACTIONS(19),
    [anon_sym_BANG_EQ] = ACTIONS(179),
    [anon_sym_STAR] = ACTIONS(179),
    [anon_sym_PLUS] = ACTIONS(179),
    [anon_sym_DASH] = ACTIONS(179),
    [anon_sym_SLASH] = ACTIONS(179),
    [anon_sym_LT_EQ] = ACTIONS(179),
    [anon_sym_EQ_EQ] = ACTIONS(179),
    [anon_sym_GT_EQ] = ACTIONS(179),
    [anon_sym_BYTE] = ACTIONS(179),
    [anon_sym_DWORD] = ACTIONS(179),
    [anon_sym_QWORD] = ACTIONS(179),
    [anon_sym_WORD] = ACTIONS(179),
    [anon_sym_byte] = ACTIONS(179),
    [anon_sym_dword] = ACTIONS(179),
    [anon_sym_qword] = ACTIONS(179),
    [anon_sym_word] = ACTIONS(179),
    [anon_sym_LBRACK] = ACTIONS(179),
    [aux_sym_hexadecimal_token1] = ACTIONS(179),
    [aux_sym_hexadecimal_token2] = ACTIONS(179),
    [aux_sym_hexadecimal_token3] = ACTIONS(179),
    [aux_sym_binary_token1] = ACTIONS(179),
    [aux_sym_binary_token2] = ACTIONS(179),
    [aux_sym_octal_token1] = ACTIONS(179),
    [aux_sym_octal_token2] = ACTIONS(179),
    [aux_sym_register_token1] = ACTIONS(179),
    [aux_sym_register_token2] = ACTIONS(179),
    [aux_sym_register_token3] = ACTIONS(179),
    [aux_sym_register_token4] = ACTIONS(179),
    [aux_sym_register_token5] = ACTIONS(179),
    [aux_sym_register_token6] = ACTIONS(179),
    [anon_sym_rip] = ACTIONS(179),
    [aux_sym_float_token1] = ACTIONS(179),
    [aux_sym_float_token2] = ACTIONS(179),
    [sym_integer] = ACTIONS(179),
    [aux_sym_string_token1] = ACTIONS(179),
    [aux_sym_string_token2] = ACTIONS(179),
    [sym__identifier] = ACTIONS(179),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(181),
    [anon_sym_LF] = ACTIONS(181),
    [sym_comment] = ACTIONS(19),
    [anon_sym_BANG_EQ] = ACTIONS(183),
    [anon_sym_STAR] = ACTIONS(183),
    [anon_sym_PLUS] = ACTIONS(183),
    [anon_sym_DASH] = ACTIONS(183),
    [anon_sym_SLASH] = ACTIONS(183),
    [anon_sym_LT_EQ] = ACTIONS(183),
    [anon_sym_EQ_EQ] = ACTIONS(183),
    [anon_sym_GT_EQ] = ACTIONS(183),
    [anon_sym_BYTE] = ACTIONS(183),
    [anon_sym_DWORD] = ACTIONS(183),
    [anon_sym_QWORD] = ACTIONS(183),
    [anon_sym_WORD] = ACTIONS(183),
    [anon_sym_byte] = ACTIONS(183),
    [anon_sym_dword] = ACTIONS(183),
    [anon_sym_qword] = ACTIONS(183),
    [anon_sym_word] = ACTIONS(183),
    [anon_sym_LBRACK] = ACTIONS(183),
    [aux_sym_hexadecimal_token1] = ACTIONS(183),
    [aux_sym_hexadecimal_token2] = ACTIONS(183),
    [aux_sym_hexadecimal_token3] = ACTIONS(183),
    [aux_sym_binary_token1] = ACTIONS(183),
    [aux_sym_binary_token2] = ACTIONS(183),
    [aux_sym_octal_token1] = ACTIONS(183),
    [aux_sym_octal_token2] = ACTIONS(183),
    [aux_sym_register_token1] = ACTIONS(183),
    [aux_sym_register_token2] = ACTIONS(183),
    [aux_sym_register_token3] = ACTIONS(183),
    [aux_sym_register_token4] = ACTIONS(183),
    [aux_sym_register_token5] = ACTIONS(183),
    [aux_sym_register_token6] = ACTIONS(183),
    [anon_sym_rip] = ACTIONS(183),
    [aux_sym_float_token1] = ACTIONS(183),
    [aux_sym_float_token2] = ACTIONS(183),
    [sym_integer] = ACTIONS(183),
    [aux_sym_string_token1] = ACTIONS(183),
    [aux_sym_string_token2] = ACTIONS(183),
    [sym__identifier] = ACTIONS(183),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(185),
    [anon_sym_LF] = ACTIONS(185),
    [sym_comment] = ACTIONS(19),
    [anon_sym_BANG_EQ] = ACTIONS(187),
    [anon_sym_STAR] = ACTIONS(187),
    [anon_sym_PLUS] = ACTIONS(187),
    [anon_sym_DASH] = ACTIONS(187),
    [anon_sym_SLASH] = ACTIONS(187),
    [anon_sym_LT_EQ] = ACTIONS(187),
    [anon_sym_EQ_EQ] = ACTIONS(187),
    [anon_sym_GT_EQ] = ACTIONS(187),
    [anon_sym_BYTE] = ACTIONS(187),
    [anon_sym_DWORD] = ACTIONS(187),
    [anon_sym_QWORD] = ACTIONS(187),
    [anon_sym_WORD] = ACTIONS(187),
    [anon_sym_byte] = ACTIONS(187),
    [anon_sym_dword] = ACTIONS(187),
    [anon_sym_qword] = ACTIONS(187),
    [anon_sym_word] = ACTIONS(187),
    [anon_sym_LBRACK] = ACTIONS(187),
    [aux_sym_hexadecimal_token1] = ACTIONS(187),
    [aux_sym_hexadecimal_token2] = ACTIONS(187),
    [aux_sym_hexadecimal_token3] = ACTIONS(187),
    [aux_sym_binary_token1] = ACTIONS(187),
    [aux_sym_binary_token2] = ACTIONS(187),
    [aux_sym_octal_token1] = ACTIONS(187),
    [aux_sym_octal_token2] = ACTIONS(187),
    [aux_sym_register_token1] = ACTIONS(187),
    [aux_sym_register_token2] = ACTIONS(187),
    [aux_sym_register_token3] = ACTIONS(187),
    [aux_sym_register_token4] = ACTIONS(187),
    [aux_sym_register_token5] = ACTIONS(187),
    [aux_sym_register_token6] = ACTIONS(187),
    [anon_sym_rip] = ACTIONS(187),
    [aux_sym_float_token1] = ACTIONS(187),
    [aux_sym_float_token2] = ACTIONS(187),
    [sym_integer] = ACTIONS(187),
    [aux_sym_string_token1] = ACTIONS(187),
    [aux_sym_string_token2] = ACTIONS(187),
    [sym__identifier] = ACTIONS(187),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(189),
    [anon_sym_LF] = ACTIONS(189),
    [sym_comment] = ACTIONS(19),
    [anon_sym_BANG_EQ] = ACTIONS(191),
    [anon_sym_STAR] = ACTIONS(191),
    [anon_sym_PLUS] = ACTIONS(191),
    [anon_sym_DASH] = ACTIONS(191),
    [anon_sym_SLASH] = ACTIONS(191),
    [anon_sym_LT_EQ] = ACTIONS(191),
    [anon_sym_EQ_EQ] = ACTIONS(191),
    [anon_sym_GT_EQ] = ACTIONS(191),
    [anon_sym_BYTE] = ACTIONS(191),
    [anon_sym_DWORD] = ACTIONS(191),
    [anon_sym_QWORD] = ACTIONS(191),
    [anon_sym_WORD] = ACTIONS(191),
    [anon_sym_byte] = ACTIONS(191),
    [anon_sym_dword] = ACTIONS(191),
    [anon_sym_qword] = ACTIONS(191),
    [anon_sym_word] = ACTIONS(191),
    [anon_sym_LBRACK] = ACTIONS(191),
    [aux_sym_hexadecimal_token1] = ACTIONS(191),
    [aux_sym_hexadecimal_token2] = ACTIONS(191),
    [aux_sym_hexadecimal_token3] = ACTIONS(191),
    [aux_sym_binary_token1] = ACTIONS(191),
    [aux_sym_binary_token2] = ACTIONS(191),
    [aux_sym_octal_token1] = ACTIONS(191),
    [aux_sym_octal_token2] = ACTIONS(191),
    [aux_sym_register_token1] = ACTIONS(191),
    [aux_sym_register_token2] = ACTIONS(191),
    [aux_sym_register_token3] = ACTIONS(191),
    [aux_sym_register_token4] = ACTIONS(191),
    [aux_sym_register_token5] = ACTIONS(191),
    [aux_sym_register_token6] = ACTIONS(191),
    [anon_sym_rip] = ACTIONS(191),
    [aux_sym_float_token1] = ACTIONS(191),
    [aux_sym_float_token2] = ACTIONS(191),
    [sym_integer] = ACTIONS(191),
    [aux_sym_string_token1] = ACTIONS(191),
    [aux_sym_string_token2] = ACTIONS(191),
    [sym__identifier] = ACTIONS(191),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(193),
    [anon_sym_LF] = ACTIONS(193),
    [sym_comment] = ACTIONS(19),
    [anon_sym_BANG_EQ] = ACTIONS(195),
    [anon_sym_STAR] = ACTIONS(195),
    [anon_sym_PLUS] = ACTIONS(195),
    [anon_sym_DASH] = ACTIONS(195),
    [anon_sym_SLASH] = ACTIONS(195),
    [anon_sym_LT_EQ] = ACTIONS(195),
    [anon_sym_EQ_EQ] = ACTIONS(195),
    [anon_sym_GT_EQ] = ACTIONS(195),
    [anon_sym_BYTE] = ACTIONS(195),
    [anon_sym_DWORD] = ACTIONS(195),
    [anon_sym_QWORD] = ACTIONS(195),
    [anon_sym_WORD] = ACTIONS(195),
    [anon_sym_byte] = ACTIONS(195),
    [anon_sym_dword] = ACTIONS(195),
    [anon_sym_qword] = ACTIONS(195),
    [anon_sym_word] = ACTIONS(195),
    [anon_sym_LBRACK] = ACTIONS(195),
    [aux_sym_hexadecimal_token1] = ACTIONS(195),
    [aux_sym_hexadecimal_token2] = ACTIONS(195),
    [aux_sym_hexadecimal_token3] = ACTIONS(195),
    [aux_sym_binary_token1] = ACTIONS(195),
    [aux_sym_binary_token2] = ACTIONS(195),
    [aux_sym_octal_token1] = ACTIONS(195),
    [aux_sym_octal_token2] = ACTIONS(195),
    [aux_sym_register_token1] = ACTIONS(195),
    [aux_sym_register_token2] = ACTIONS(195),
    [aux_sym_register_token3] = ACTIONS(195),
    [aux_sym_register_token4] = ACTIONS(195),
    [aux_sym_register_token5] = ACTIONS(195),
    [aux_sym_register_token6] = ACTIONS(195),
    [anon_sym_rip] = ACTIONS(195),
    [aux_sym_float_token1] = ACTIONS(195),
    [aux_sym_float_token2] = ACTIONS(195),
    [sym_integer] = ACTIONS(195),
    [aux_sym_string_token1] = ACTIONS(195),
    [aux_sym_string_token2] = ACTIONS(195),
    [sym__identifier] = ACTIONS(195),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(197),
    [anon_sym_LF] = ACTIONS(197),
    [sym_comment] = ACTIONS(19),
    [anon_sym_BANG_EQ] = ACTIONS(199),
    [anon_sym_STAR] = ACTIONS(199),
    [anon_sym_PLUS] = ACTIONS(199),
    [anon_sym_DASH] = ACTIONS(199),
    [anon_sym_SLASH] = ACTIONS(199),
    [anon_sym_LT_EQ] = ACTIONS(199),
    [anon_sym_EQ_EQ] = ACTIONS(199),
    [anon_sym_GT_EQ] = ACTIONS(199),
    [anon_sym_BYTE] = ACTIONS(199),
    [anon_sym_DWORD] = ACTIONS(199),
    [anon_sym_QWORD] = ACTIONS(199),
    [anon_sym_WORD] = ACTIONS(199),
    [anon_sym_byte] = ACTIONS(199),
    [anon_sym_dword] = ACTIONS(199),
    [anon_sym_qword] = ACTIONS(199),
    [anon_sym_word] = ACTIONS(199),
    [anon_sym_LBRACK] = ACTIONS(199),
    [aux_sym_hexadecimal_token1] = ACTIONS(199),
    [aux_sym_hexadecimal_token2] = ACTIONS(199),
    [aux_sym_hexadecimal_token3] = ACTIONS(199),
    [aux_sym_binary_token1] = ACTIONS(199),
    [aux_sym_binary_token2] = ACTIONS(199),
    [aux_sym_octal_token1] = ACTIONS(199),
    [aux_sym_octal_token2] = ACTIONS(199),
    [aux_sym_register_token1] = ACTIONS(199),
    [aux_sym_register_token2] = ACTIONS(199),
    [aux_sym_register_token3] = ACTIONS(199),
    [aux_sym_register_token4] = ACTIONS(199),
    [aux_sym_register_token5] = ACTIONS(199),
    [aux_sym_register_token6] = ACTIONS(199),
    [anon_sym_rip] = ACTIONS(199),
    [aux_sym_float_token1] = ACTIONS(199),
    [aux_sym_float_token2] = ACTIONS(199),
    [sym_integer] = ACTIONS(199),
    [aux_sym_string_token1] = ACTIONS(199),
    [aux_sym_string_token2] = ACTIONS(199),
    [sym__identifier] = ACTIONS(199),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(201),
    [anon_sym_LF] = ACTIONS(201),
    [sym_comment] = ACTIONS(19),
    [anon_sym_BANG_EQ] = ACTIONS(203),
    [anon_sym_STAR] = ACTIONS(203),
    [anon_sym_PLUS] = ACTIONS(203),
    [anon_sym_DASH] = ACTIONS(203),
    [anon_sym_SLASH] = ACTIONS(203),
    [anon_sym_LT_EQ] = ACTIONS(203),
    [anon_sym_EQ_EQ] = ACTIONS(203),
    [anon_sym_GT_EQ] = ACTIONS(203),
    [anon_sym_BYTE] = ACTIONS(203),
    [anon_sym_DWORD] = ACTIONS(203),
    [anon_sym_QWORD] = ACTIONS(203),
    [anon_sym_WORD] = ACTIONS(203),
    [anon_sym_byte] = ACTIONS(203),
    [anon_sym_dword] = ACTIONS(203),
    [anon_sym_qword] = ACTIONS(203),
    [anon_sym_word] = ACTIONS(203),
    [anon_sym_LBRACK] = ACTIONS(203),
    [aux_sym_hexadecimal_token1] = ACTIONS(203),
    [aux_sym_hexadecimal_token2] = ACTIONS(203),
    [aux_sym_hexadecimal_token3] = ACTIONS(203),
    [aux_sym_binary_token1] = ACTIONS(203),
    [aux_sym_binary_token2] = ACTIONS(203),
    [aux_sym_octal_token1] = ACTIONS(203),
    [aux_sym_octal_token2] = ACTIONS(203),
    [aux_sym_register_token1] = ACTIONS(203),
    [aux_sym_register_token2] = ACTIONS(203),
    [aux_sym_register_token3] = ACTIONS(203),
    [aux_sym_register_token4] = ACTIONS(203),
    [aux_sym_register_token5] = ACTIONS(203),
    [aux_sym_register_token6] = ACTIONS(203),
    [anon_sym_rip] = ACTIONS(203),
    [aux_sym_float_token1] = ACTIONS(203),
    [aux_sym_float_token2] = ACTIONS(203),
    [sym_integer] = ACTIONS(203),
    [aux_sym_string_token1] = ACTIONS(203),
    [aux_sym_string_token2] = ACTIONS(203),
    [sym__identifier] = ACTIONS(203),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_LBRACK,
    ACTIONS(171), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(173), 29,
      anon_sym_COMMA,
      anon_sym_BYTE,
      anon_sym_DWORD,
      anon_sym_QWORD,
      anon_sym_WORD,
      anon_sym_byte,
      anon_sym_dword,
      anon_sym_qword,
      anon_sym_word,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
      aux_sym_binary_token1,
      aux_sym_binary_token2,
      aux_sym_octal_token1,
      aux_sym_octal_token2,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      anon_sym_rip,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_integer,
      aux_sym_string_token1,
      aux_sym_string_token2,
      sym__identifier,
  [42] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(197), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(199), 30,
      anon_sym_COMMA,
      anon_sym_BYTE,
      anon_sym_DWORD,
      anon_sym_QWORD,
      anon_sym_WORD,
      anon_sym_byte,
      anon_sym_dword,
      anon_sym_qword,
      anon_sym_word,
      anon_sym_LBRACK,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
      aux_sym_binary_token1,
      aux_sym_binary_token2,
      aux_sym_octal_token1,
      aux_sym_octal_token2,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      anon_sym_rip,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_integer,
      aux_sym_string_token1,
      aux_sym_string_token2,
      sym__identifier,
  [82] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(159), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(161), 30,
      anon_sym_COMMA,
      anon_sym_BYTE,
      anon_sym_DWORD,
      anon_sym_QWORD,
      anon_sym_WORD,
      anon_sym_byte,
      anon_sym_dword,
      anon_sym_qword,
      anon_sym_word,
      anon_sym_LBRACK,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
      aux_sym_binary_token1,
      aux_sym_binary_token2,
      aux_sym_octal_token1,
      aux_sym_octal_token2,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      anon_sym_rip,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_integer,
      aux_sym_string_token1,
      aux_sym_string_token2,
      sym__identifier,
  [122] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(177), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(179), 30,
      anon_sym_COMMA,
      anon_sym_BYTE,
      anon_sym_DWORD,
      anon_sym_QWORD,
      anon_sym_WORD,
      anon_sym_byte,
      anon_sym_dword,
      anon_sym_qword,
      anon_sym_word,
      anon_sym_LBRACK,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
      aux_sym_binary_token1,
      aux_sym_binary_token2,
      aux_sym_octal_token1,
      aux_sym_octal_token2,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      anon_sym_rip,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_integer,
      aux_sym_string_token1,
      aux_sym_string_token2,
      sym__identifier,
  [162] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(155), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(157), 30,
      anon_sym_COMMA,
      anon_sym_BYTE,
      anon_sym_DWORD,
      anon_sym_QWORD,
      anon_sym_WORD,
      anon_sym_byte,
      anon_sym_dword,
      anon_sym_qword,
      anon_sym_word,
      anon_sym_LBRACK,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
      aux_sym_binary_token1,
      aux_sym_binary_token2,
      aux_sym_octal_token1,
      aux_sym_octal_token2,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      anon_sym_rip,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_integer,
      aux_sym_string_token1,
      aux_sym_string_token2,
      sym__identifier,
  [202] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(147), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(149), 30,
      anon_sym_COMMA,
      anon_sym_BYTE,
      anon_sym_DWORD,
      anon_sym_QWORD,
      anon_sym_WORD,
      anon_sym_byte,
      anon_sym_dword,
      anon_sym_qword,
      anon_sym_word,
      anon_sym_LBRACK,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
      aux_sym_binary_token1,
      aux_sym_binary_token2,
      aux_sym_octal_token1,
      aux_sym_octal_token2,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      anon_sym_rip,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_integer,
      aux_sym_string_token1,
      aux_sym_string_token2,
      sym__identifier,
  [242] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(181), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(183), 30,
      anon_sym_COMMA,
      anon_sym_BYTE,
      anon_sym_DWORD,
      anon_sym_QWORD,
      anon_sym_WORD,
      anon_sym_byte,
      anon_sym_dword,
      anon_sym_qword,
      anon_sym_word,
      anon_sym_LBRACK,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
      aux_sym_binary_token1,
      aux_sym_binary_token2,
      aux_sym_octal_token1,
      aux_sym_octal_token2,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      anon_sym_rip,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_integer,
      aux_sym_string_token1,
      aux_sym_string_token2,
      sym__identifier,
  [282] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(185), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(187), 30,
      anon_sym_COMMA,
      anon_sym_BYTE,
      anon_sym_DWORD,
      anon_sym_QWORD,
      anon_sym_WORD,
      anon_sym_byte,
      anon_sym_dword,
      anon_sym_qword,
      anon_sym_word,
      anon_sym_LBRACK,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
      aux_sym_binary_token1,
      aux_sym_binary_token2,
      aux_sym_octal_token1,
      aux_sym_octal_token2,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      anon_sym_rip,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_integer,
      aux_sym_string_token1,
      aux_sym_string_token2,
      sym__identifier,
  [322] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(201), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(203), 30,
      anon_sym_COMMA,
      anon_sym_BYTE,
      anon_sym_DWORD,
      anon_sym_QWORD,
      anon_sym_WORD,
      anon_sym_byte,
      anon_sym_dword,
      anon_sym_qword,
      anon_sym_word,
      anon_sym_LBRACK,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
      aux_sym_binary_token1,
      aux_sym_binary_token2,
      aux_sym_octal_token1,
      aux_sym_octal_token2,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      anon_sym_rip,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_integer,
      aux_sym_string_token1,
      aux_sym_string_token2,
      sym__identifier,
  [362] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(80), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(207), 30,
      anon_sym_COMMA,
      anon_sym_BYTE,
      anon_sym_DWORD,
      anon_sym_QWORD,
      anon_sym_WORD,
      anon_sym_byte,
      anon_sym_dword,
      anon_sym_qword,
      anon_sym_word,
      anon_sym_LBRACK,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
      aux_sym_binary_token1,
      aux_sym_binary_token2,
      aux_sym_octal_token1,
      aux_sym_octal_token2,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      anon_sym_rip,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_integer,
      aux_sym_string_token1,
      aux_sym_string_token2,
      sym__identifier,
  [402] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(167), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(169), 30,
      anon_sym_COMMA,
      anon_sym_BYTE,
      anon_sym_DWORD,
      anon_sym_QWORD,
      anon_sym_WORD,
      anon_sym_byte,
      anon_sym_dword,
      anon_sym_qword,
      anon_sym_word,
      anon_sym_LBRACK,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
      aux_sym_binary_token1,
      aux_sym_binary_token2,
      aux_sym_octal_token1,
      aux_sym_octal_token2,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      anon_sym_rip,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_integer,
      aux_sym_string_token1,
      aux_sym_string_token2,
      sym__identifier,
  [442] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(163), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(165), 30,
      anon_sym_COMMA,
      anon_sym_BYTE,
      anon_sym_DWORD,
      anon_sym_QWORD,
      anon_sym_WORD,
      anon_sym_byte,
      anon_sym_dword,
      anon_sym_qword,
      anon_sym_word,
      anon_sym_LBRACK,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
      aux_sym_binary_token1,
      aux_sym_binary_token2,
      aux_sym_octal_token1,
      aux_sym_octal_token2,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      anon_sym_rip,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_integer,
      aux_sym_string_token1,
      aux_sym_string_token2,
      sym__identifier,
  [482] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(143), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(145), 30,
      anon_sym_COMMA,
      anon_sym_BYTE,
      anon_sym_DWORD,
      anon_sym_QWORD,
      anon_sym_WORD,
      anon_sym_byte,
      anon_sym_dword,
      anon_sym_qword,
      anon_sym_word,
      anon_sym_LBRACK,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
      aux_sym_binary_token1,
      aux_sym_binary_token2,
      aux_sym_octal_token1,
      aux_sym_octal_token2,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      anon_sym_rip,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_integer,
      aux_sym_string_token1,
      aux_sym_string_token2,
      sym__identifier,
  [522] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(189), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(191), 30,
      anon_sym_COMMA,
      anon_sym_BYTE,
      anon_sym_DWORD,
      anon_sym_QWORD,
      anon_sym_WORD,
      anon_sym_byte,
      anon_sym_dword,
      anon_sym_qword,
      anon_sym_word,
      anon_sym_LBRACK,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
      aux_sym_binary_token1,
      aux_sym_binary_token2,
      aux_sym_octal_token1,
      aux_sym_octal_token2,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      anon_sym_rip,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_integer,
      aux_sym_string_token1,
      aux_sym_string_token2,
      sym__identifier,
  [562] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      sym_integer,
    ACTIONS(41), 1,
      sym__identifier,
    ACTIONS(209), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 2,
      aux_sym_binary_token1,
      aux_sym_binary_token2,
    ACTIONS(31), 2,
      aux_sym_octal_token1,
      aux_sym_octal_token2,
    ACTIONS(35), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(211), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(27), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    ACTIONS(33), 7,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      anon_sym_rip,
    STATE(15), 9,
      sym_pointer,
      sym_hexadecimal,
      sym_binary,
      sym_octal,
      sym_register,
      sym__constant,
      sym_float,
      sym_string,
      sym_identifier,
  [616] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      sym_integer,
    ACTIONS(135), 1,
      sym__identifier,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    ACTIONS(123), 2,
      aux_sym_binary_token1,
      aux_sym_binary_token2,
    ACTIONS(125), 2,
      aux_sym_octal_token1,
      aux_sym_octal_token2,
    ACTIONS(129), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(141), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(121), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    ACTIONS(127), 7,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      anon_sym_rip,
    STATE(34), 9,
      sym_pointer,
      sym_hexadecimal,
      sym_binary,
      sym_octal,
      sym_register,
      sym__constant,
      sym_float,
      sym_string,
      sym_identifier,
  [670] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 2,
      anon_sym_PTR,
      anon_sym_ptr,
    ACTIONS(215), 3,
      anon_sym_LBRACK,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(217), 18,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
      aux_sym_binary_token1,
      aux_sym_binary_token2,
      aux_sym_octal_token1,
      aux_sym_octal_token2,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      anon_sym_rip,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_integer,
      sym__identifier,
  [703] = 10,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(229), 1,
      sym_integer,
    ACTIONS(233), 1,
      sym__identifier,
    ACTIONS(219), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(223), 2,
      aux_sym_binary_token1,
      aux_sym_binary_token2,
    ACTIONS(225), 2,
      aux_sym_octal_token1,
      aux_sym_octal_token2,
    ACTIONS(227), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(231), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(221), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    STATE(75), 7,
      sym_hexadecimal,
      sym_binary,
      sym_octal,
      sym__constant,
      sym_float,
      sym_string,
      sym_identifier,
  [747] = 10,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(233), 1,
      sym__identifier,
    ACTIONS(237), 1,
      sym_integer,
    ACTIONS(223), 2,
      aux_sym_binary_token1,
      aux_sym_binary_token2,
    ACTIONS(225), 2,
      aux_sym_octal_token1,
      aux_sym_octal_token2,
    ACTIONS(227), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(231), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(235), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(221), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    STATE(69), 7,
      sym_hexadecimal,
      sym_binary,
      sym_octal,
      sym__constant,
      sym_float,
      sym_string,
      sym_identifier,
  [791] = 10,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(229), 1,
      sym_integer,
    ACTIONS(233), 1,
      sym__identifier,
    ACTIONS(223), 2,
      aux_sym_binary_token1,
      aux_sym_binary_token2,
    ACTIONS(225), 2,
      aux_sym_octal_token1,
      aux_sym_octal_token2,
    ACTIONS(227), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(231), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(239), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(221), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    STATE(75), 7,
      sym_hexadecimal,
      sym_binary,
      sym_octal,
      sym__constant,
      sym_float,
      sym_string,
      sym_identifier,
  [835] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 3,
      anon_sym_LBRACK,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(243), 18,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
      aux_sym_binary_token1,
      aux_sym_binary_token2,
      aux_sym_octal_token1,
      aux_sym_octal_token2,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      anon_sym_rip,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_integer,
      sym__identifier,
  [864] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      sym_integer,
    ACTIONS(233), 1,
      sym__identifier,
    ACTIONS(223), 2,
      aux_sym_binary_token1,
      aux_sym_binary_token2,
    ACTIONS(225), 2,
      aux_sym_octal_token1,
      aux_sym_octal_token2,
    ACTIONS(227), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(245), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(221), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    STATE(75), 7,
      sym_hexadecimal,
      sym_binary,
      sym_octal,
      sym__constant,
      sym_float,
      sym_string,
      sym_identifier,
  [904] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      sym_segment_register_prefix,
    ACTIONS(249), 1,
      aux_sym_hexadecimal_token1,
    ACTIONS(257), 1,
      sym_integer,
    ACTIONS(251), 2,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    ACTIONS(255), 2,
      aux_sym_register_token5,
      aux_sym_register_token6,
    STATE(67), 2,
      sym_hexadecimal,
      sym_register,
    ACTIONS(253), 5,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      anon_sym_rip,
  [936] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      aux_sym_hexadecimal_token1,
    ACTIONS(259), 1,
      sym_segment_register_prefix,
    ACTIONS(261), 1,
      sym_integer,
    ACTIONS(251), 2,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    ACTIONS(255), 2,
      aux_sym_register_token5,
      aux_sym_register_token6,
    STATE(70), 2,
      sym_hexadecimal,
      sym_register,
    ACTIONS(253), 5,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      anon_sym_rip,
  [968] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      aux_sym_hexadecimal_token1,
    ACTIONS(263), 1,
      sym_segment_register_prefix,
    ACTIONS(265), 1,
      sym_integer,
    ACTIONS(251), 2,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    ACTIONS(255), 2,
      aux_sym_register_token5,
      aux_sym_register_token6,
    STATE(66), 2,
      sym_hexadecimal,
      sym_register,
    ACTIONS(253), 5,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      anon_sym_rip,
  [1000] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      aux_sym_hexadecimal_token1,
    ACTIONS(267), 1,
      sym_segment_register_prefix,
    ACTIONS(269), 1,
      sym_integer,
    ACTIONS(251), 2,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    ACTIONS(255), 2,
      aux_sym_register_token5,
      aux_sym_register_token6,
    STATE(71), 2,
      sym_hexadecimal,
      sym_register,
    ACTIONS(253), 5,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      anon_sym_rip,
  [1032] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      sym_integer,
    STATE(74), 2,
      sym_hexadecimal,
      sym_register,
    ACTIONS(251), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    ACTIONS(255), 7,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      anon_sym_rip,
  [1057] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      sym_integer,
    STATE(60), 2,
      sym_hexadecimal,
      sym_register,
    ACTIONS(251), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    ACTIONS(255), 7,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      anon_sym_rip,
  [1082] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      sym_integer,
    STATE(67), 2,
      sym_hexadecimal,
      sym_register,
    ACTIONS(251), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    ACTIONS(255), 7,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      anon_sym_rip,
  [1107] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      sym_integer,
    STATE(71), 2,
      sym_hexadecimal,
      sym_register,
    ACTIONS(251), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    ACTIONS(255), 7,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      anon_sym_rip,
  [1132] = 9,
    ACTIONS(9), 1,
      sym_label,
    ACTIONS(11), 1,
      aux_sym_nasm_macro_token1,
    ACTIONS(13), 1,
      sym_gcc_mnemonic,
    ACTIONS(15), 1,
      sym_mnemonic,
    ACTIONS(275), 1,
      ts_builtin_sym_end,
    ACTIONS(277), 1,
      sym_comment,
    STATE(2), 1,
      sym_nasm_macro,
    STATE(88), 2,
      sym__normal_instruction,
      sym__gcc_pseudo_op,
    STATE(90), 3,
      sym__statement,
      sym_instruction,
      sym__macro,
  [1163] = 9,
    ACTIONS(9), 1,
      sym_label,
    ACTIONS(11), 1,
      aux_sym_nasm_macro_token1,
    ACTIONS(13), 1,
      sym_gcc_mnemonic,
    ACTIONS(15), 1,
      sym_mnemonic,
    ACTIONS(277), 1,
      sym_comment,
    ACTIONS(279), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_nasm_macro,
    STATE(88), 2,
      sym__normal_instruction,
      sym__gcc_pseudo_op,
    STATE(90), 3,
      sym__statement,
      sym_instruction,
      sym__macro,
  [1194] = 8,
    ACTIONS(9), 1,
      sym_label,
    ACTIONS(11), 1,
      aux_sym_nasm_macro_token1,
    ACTIONS(13), 1,
      sym_gcc_mnemonic,
    ACTIONS(15), 1,
      sym_mnemonic,
    ACTIONS(277), 1,
      sym_comment,
    STATE(2), 1,
      sym_nasm_macro,
    STATE(88), 2,
      sym__normal_instruction,
      sym__gcc_pseudo_op,
    STATE(90), 3,
      sym__statement,
      sym_instruction,
      sym__macro,
  [1222] = 6,
    ACTIONS(13), 1,
      sym_gcc_mnemonic,
    ACTIONS(15), 1,
      sym_mnemonic,
    ACTIONS(19), 1,
      sym_comment,
    STATE(89), 1,
      sym_instruction,
    ACTIONS(281), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(88), 2,
      sym__normal_instruction,
      sym__gcc_pseudo_op,
  [1243] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_RBRACK,
    STATE(59), 1,
      aux_sym_pointer_repeat1,
    ACTIONS(283), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [1258] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_RBRACK,
    STATE(59), 1,
      aux_sym_pointer_repeat1,
    ACTIONS(287), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [1273] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_RBRACK,
    STATE(61), 1,
      aux_sym_pointer_repeat1,
    ACTIONS(283), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [1288] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_RBRACK,
    STATE(59), 1,
      aux_sym_pointer_repeat1,
    ACTIONS(283), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [1303] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_RBRACK,
    STATE(59), 1,
      aux_sym_pointer_repeat1,
    ACTIONS(283), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [1318] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      sym_integer,
    STATE(84), 1,
      sym_hexadecimal,
    ACTIONS(251), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
  [1333] = 5,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(298), 1,
      ts_builtin_sym_end,
    ACTIONS(300), 1,
      anon_sym_LF,
    STATE(64), 1,
      aux_sym__gcc_pseudo_op_repeat1,
    ACTIONS(302), 2,
      anon_sym_COMMA,
      anon_sym_,
  [1350] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_RBRACK,
    STATE(59), 1,
      aux_sym_pointer_repeat1,
    ACTIONS(283), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [1365] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      anon_sym_RBRACK,
    STATE(62), 1,
      aux_sym_pointer_repeat1,
    ACTIONS(283), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [1380] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_RBRACK,
    STATE(58), 1,
      aux_sym_pointer_repeat1,
    ACTIONS(283), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [1395] = 5,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(219), 1,
      ts_builtin_sym_end,
    ACTIONS(309), 1,
      anon_sym_LF,
    STATE(64), 1,
      aux_sym__gcc_pseudo_op_repeat1,
    ACTIONS(311), 2,
      anon_sym_COMMA,
      anon_sym_,
  [1412] = 5,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(313), 1,
      ts_builtin_sym_end,
    ACTIONS(315), 1,
      anon_sym_LF,
    STATE(68), 1,
      aux_sym__gcc_pseudo_op_repeat1,
    ACTIONS(317), 2,
      anon_sym_COMMA,
      anon_sym_,
  [1429] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 1,
      anon_sym_RBRACK,
    STATE(72), 1,
      aux_sym_pointer_repeat1,
    ACTIONS(283), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [1444] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      anon_sym_RBRACK,
    STATE(73), 1,
      aux_sym_pointer_repeat1,
    ACTIONS(283), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [1459] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      anon_sym_RBRACK,
    STATE(59), 1,
      aux_sym_pointer_repeat1,
    ACTIONS(283), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [1474] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 1,
      anon_sym_RBRACK,
    STATE(59), 1,
      aux_sym_pointer_repeat1,
    ACTIONS(283), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [1489] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 1,
      anon_sym_RBRACK,
    STATE(65), 1,
      aux_sym_pointer_repeat1,
    ACTIONS(283), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [1504] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(298), 1,
      ts_builtin_sym_end,
    ACTIONS(300), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [1516] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(181), 1,
      ts_builtin_sym_end,
    ACTIONS(183), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [1528] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 4,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RBRACK,
  [1538] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 4,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RBRACK,
  [1548] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(201), 1,
      ts_builtin_sym_end,
    ACTIONS(203), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [1560] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(197), 1,
      ts_builtin_sym_end,
    ACTIONS(199), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [1572] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(143), 1,
      ts_builtin_sym_end,
    ACTIONS(145), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [1584] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(189), 1,
      ts_builtin_sym_end,
    ACTIONS(191), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [1596] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(185), 1,
      ts_builtin_sym_end,
    ACTIONS(187), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [1608] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 4,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RBRACK,
  [1618] = 4,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(325), 1,
      ts_builtin_sym_end,
    ACTIONS(327), 1,
      anon_sym_LF,
    STATE(86), 1,
      aux_sym_program_repeat1,
  [1631] = 4,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(279), 1,
      ts_builtin_sym_end,
    ACTIONS(329), 1,
      anon_sym_LF,
    STATE(87), 1,
      aux_sym_program_repeat1,
  [1644] = 4,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(331), 1,
      ts_builtin_sym_end,
    ACTIONS(333), 1,
      anon_sym_LF,
    STATE(87), 1,
      aux_sym_program_repeat1,
  [1657] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(336), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1665] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(338), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1673] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(331), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1681] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      ts_builtin_sym_end,
  [1688] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      sym__identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(24)] = 0,
  [SMALL_STATE(25)] = 42,
  [SMALL_STATE(26)] = 82,
  [SMALL_STATE(27)] = 122,
  [SMALL_STATE(28)] = 162,
  [SMALL_STATE(29)] = 202,
  [SMALL_STATE(30)] = 242,
  [SMALL_STATE(31)] = 282,
  [SMALL_STATE(32)] = 322,
  [SMALL_STATE(33)] = 362,
  [SMALL_STATE(34)] = 402,
  [SMALL_STATE(35)] = 442,
  [SMALL_STATE(36)] = 482,
  [SMALL_STATE(37)] = 522,
  [SMALL_STATE(38)] = 562,
  [SMALL_STATE(39)] = 616,
  [SMALL_STATE(40)] = 670,
  [SMALL_STATE(41)] = 703,
  [SMALL_STATE(42)] = 747,
  [SMALL_STATE(43)] = 791,
  [SMALL_STATE(44)] = 835,
  [SMALL_STATE(45)] = 864,
  [SMALL_STATE(46)] = 904,
  [SMALL_STATE(47)] = 936,
  [SMALL_STATE(48)] = 968,
  [SMALL_STATE(49)] = 1000,
  [SMALL_STATE(50)] = 1032,
  [SMALL_STATE(51)] = 1057,
  [SMALL_STATE(52)] = 1082,
  [SMALL_STATE(53)] = 1107,
  [SMALL_STATE(54)] = 1132,
  [SMALL_STATE(55)] = 1163,
  [SMALL_STATE(56)] = 1194,
  [SMALL_STATE(57)] = 1222,
  [SMALL_STATE(58)] = 1243,
  [SMALL_STATE(59)] = 1258,
  [SMALL_STATE(60)] = 1273,
  [SMALL_STATE(61)] = 1288,
  [SMALL_STATE(62)] = 1303,
  [SMALL_STATE(63)] = 1318,
  [SMALL_STATE(64)] = 1333,
  [SMALL_STATE(65)] = 1350,
  [SMALL_STATE(66)] = 1365,
  [SMALL_STATE(67)] = 1380,
  [SMALL_STATE(68)] = 1395,
  [SMALL_STATE(69)] = 1412,
  [SMALL_STATE(70)] = 1429,
  [SMALL_STATE(71)] = 1444,
  [SMALL_STATE(72)] = 1459,
  [SMALL_STATE(73)] = 1474,
  [SMALL_STATE(74)] = 1489,
  [SMALL_STATE(75)] = 1504,
  [SMALL_STATE(76)] = 1516,
  [SMALL_STATE(77)] = 1528,
  [SMALL_STATE(78)] = 1538,
  [SMALL_STATE(79)] = 1548,
  [SMALL_STATE(80)] = 1560,
  [SMALL_STATE(81)] = 1572,
  [SMALL_STATE(82)] = 1584,
  [SMALL_STATE(83)] = 1596,
  [SMALL_STATE(84)] = 1608,
  [SMALL_STATE(85)] = 1618,
  [SMALL_STATE(86)] = 1631,
  [SMALL_STATE(87)] = 1644,
  [SMALL_STATE(88)] = 1657,
  [SMALL_STATE(89)] = 1665,
  [SMALL_STATE(90)] = 1673,
  [SMALL_STATE(91)] = 1681,
  [SMALL_STATE(92)] = 1688,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro, 1),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro, 2),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__macro_repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__macro_repeat1, 2), SHIFT_REPEAT(21),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__macro_repeat1, 2), SHIFT_REPEAT(40),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__macro_repeat1, 2), SHIFT_REPEAT(47),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__macro_repeat1, 2), SHIFT_REPEAT(19),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__macro_repeat1, 2), SHIFT_REPEAT(20),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__macro_repeat1, 2), SHIFT_REPEAT(9),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__macro_repeat1, 2), SHIFT_REPEAT(17),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__macro_repeat1, 2), SHIFT_REPEAT(22),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__macro_repeat1, 2), SHIFT_REPEAT(16),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__macro_repeat1, 2), SHIFT_REPEAT(23),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__macro_repeat1, 2), SHIFT_REPEAT(18),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__normal_instruction_repeat1, 2),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat1, 2), SHIFT_REPEAT(8),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat1, 2), SHIFT_REPEAT(40),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat1, 2), SHIFT_REPEAT(48),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat1, 2), SHIFT_REPEAT(31),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat1, 2), SHIFT_REPEAT(37),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat1, 2), SHIFT_REPEAT(36),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat1, 2), SHIFT_REPEAT(27),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat1, 2), SHIFT_REPEAT(25),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat1, 2), SHIFT_REPEAT(24),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat1, 2), SHIFT_REPEAT(32),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat1, 2), SHIFT_REPEAT(30),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__normal_instruction, 1),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__normal_instruction, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_octal, 1),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_octal, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer, 6),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pointer, 6),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nasm_macro, 2),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nasm_macro, 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer, 5),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pointer, 5),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer, 4),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pointer, 4),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer, 3),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pointer, 3),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__operand, 2),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__operand, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant, 1),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__constant, 1),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register, 1),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_register, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hexadecimal, 1),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hexadecimal, 1),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary, 1),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary, 1),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 1),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 1),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat1, 2),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_width, 1),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_width, 1),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gcc_pseudo_op, 3),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gcc_pseudo_op, 1),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gcc_pseudo_op, 4),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_width, 2),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_width, 2),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pointer_repeat1, 2), SHIFT_REPEAT(63),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pointer_repeat1, 2),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__gcc_pseudo_op_repeat1, 2),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__gcc_pseudo_op_repeat1, 2),
  [302] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__gcc_pseudo_op_repeat1, 2), SHIFT_REPEAT(45),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__gcc_pseudo_op, 3),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gcc_pseudo_op, 2),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__gcc_pseudo_op, 2),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [333] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(56),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [340] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
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
