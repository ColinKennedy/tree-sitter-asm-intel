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
#define STATE_COUNT 96
#define LARGE_STATE_COUNT 8
#define SYMBOL_COUNT 82
#define ALIAS_COUNT 0
#define TOKEN_COUNT 56
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LF = 1,
  sym_comment = 2,
  anon_sym_COLON = 3,
  anon_sym_cs = 4,
  anon_sym_ds = 5,
  anon_sym_es = 6,
  anon_sym_fs = 7,
  anon_sym_gs = 8,
  anon_sym_ss = 9,
  sym_label = 10,
  anon_sym_COMMA = 11,
  anon_sym_ = 12,
  anon_sym_BANG_EQ = 13,
  anon_sym_STAR = 14,
  anon_sym_PLUS = 15,
  anon_sym_DASH = 16,
  anon_sym_SLASH = 17,
  anon_sym_LT_EQ = 18,
  anon_sym_EQ_EQ = 19,
  anon_sym_GT_EQ = 20,
  aux_sym_nasm_macro_token1 = 21,
  sym_gcc_mnemonic = 22,
  sym_mnemonic = 23,
  anon_sym_BYTE = 24,
  anon_sym_DWORD = 25,
  anon_sym_QWORD = 26,
  anon_sym_WORD = 27,
  anon_sym_byte = 28,
  anon_sym_dword = 29,
  anon_sym_qword = 30,
  anon_sym_word = 31,
  anon_sym_PTR = 32,
  anon_sym_ptr = 33,
  anon_sym_LBRACK = 34,
  anon_sym_RBRACK = 35,
  aux_sym_hexadecimal_token1 = 36,
  aux_sym_hexadecimal_token2 = 37,
  aux_sym_hexadecimal_token3 = 38,
  aux_sym_binary_token1 = 39,
  aux_sym_binary_token2 = 40,
  aux_sym_octal_token1 = 41,
  aux_sym_octal_token2 = 42,
  aux_sym_register_token1 = 43,
  aux_sym_register_token2 = 44,
  aux_sym_register_token3 = 45,
  aux_sym_register_token4 = 46,
  aux_sym_register_token5 = 47,
  aux_sym_register_token6 = 48,
  anon_sym_rip = 49,
  aux_sym_float_token1 = 50,
  aux_sym_float_token2 = 51,
  sym_integer = 52,
  aux_sym_string_token1 = 53,
  aux_sym_string_token2 = 54,
  sym__identifier = 55,
  sym_program = 56,
  sym__statement = 57,
  sym_segment_prefix = 58,
  sym_segment = 59,
  sym_instruction = 60,
  sym__normal_instruction = 61,
  sym__gcc_pseudo_op = 62,
  sym__macro = 63,
  sym_operator = 64,
  sym_nasm_macro = 65,
  sym__operand = 66,
  sym_width = 67,
  sym_pointer = 68,
  sym_hexadecimal = 69,
  sym_binary = 70,
  sym_octal = 71,
  sym_register = 72,
  sym__constant = 73,
  sym_float = 74,
  sym_string = 75,
  sym_identifier = 76,
  aux_sym_program_repeat1 = 77,
  aux_sym__normal_instruction_repeat1 = 78,
  aux_sym__gcc_pseudo_op_repeat1 = 79,
  aux_sym__macro_repeat1 = 80,
  aux_sym_pointer_repeat1 = 81,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [sym_comment] = "comment",
  [anon_sym_COLON] = ":",
  [anon_sym_cs] = "cs",
  [anon_sym_ds] = "ds",
  [anon_sym_es] = "es",
  [anon_sym_fs] = "fs",
  [anon_sym_gs] = "gs",
  [anon_sym_ss] = "ss",
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
  [sym_segment_prefix] = "segment_prefix",
  [sym_segment] = "segment",
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
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_cs] = anon_sym_cs,
  [anon_sym_ds] = anon_sym_ds,
  [anon_sym_es] = anon_sym_es,
  [anon_sym_fs] = anon_sym_fs,
  [anon_sym_gs] = anon_sym_gs,
  [anon_sym_ss] = anon_sym_ss,
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
  [sym_segment_prefix] = sym_segment_prefix,
  [sym_segment] = sym_segment,
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ds] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_es] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ss] = {
    .visible = true,
    .named = false,
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
  [sym_segment_prefix] = {
    .visible = true,
    .named = true,
  },
  [sym_segment] = {
    .visible = true,
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
  [25] = 14,
  [26] = 10,
  [27] = 17,
  [28] = 12,
  [29] = 13,
  [30] = 20,
  [31] = 9,
  [32] = 19,
  [33] = 33,
  [34] = 22,
  [35] = 23,
  [36] = 18,
  [37] = 15,
  [38] = 38,
  [39] = 38,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 45,
  [47] = 47,
  [48] = 47,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 51,
  [53] = 50,
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
  [64] = 61,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 66,
  [69] = 69,
  [70] = 70,
  [71] = 60,
  [72] = 62,
  [73] = 73,
  [74] = 73,
  [75] = 67,
  [76] = 20,
  [77] = 19,
  [78] = 23,
  [79] = 17,
  [80] = 19,
  [81] = 22,
  [82] = 9,
  [83] = 18,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
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
      if (eof) ADVANCE(117);
      if (lookahead == '!') ADVANCE(27);
      if (lookahead == '"') ADVANCE(19);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(120);
      if (lookahead == '$') ADVANCE(24);
      if (lookahead == '%') ADVANCE(141);
      if (lookahead == '\'') ADVANCE(20);
      if (lookahead == '*') ADVANCE(132);
      if (lookahead == '+') ADVANCE(133);
      if (lookahead == ',') ADVANCE(129);
      if (lookahead == '-') ADVANCE(136);
      if (lookahead == '.') ADVANCE(96);
      if (lookahead == '/') ADVANCE(137);
      if (lookahead == '0') ADVANCE(220);
      if (lookahead == '1') ADVANCE(221);
      if (lookahead == ':') ADVANCE(121);
      if (lookahead == '<') ADVANCE(28);
      if (lookahead == '=') ADVANCE(29);
      if (lookahead == '>') ADVANCE(30);
      if (lookahead == 'B') ADVANCE(46);
      if (lookahead == 'D') ADVANCE(44);
      if (lookahead == 'P') ADVANCE(42);
      if (lookahead == 'Q') ADVANCE(45);
      if (lookahead == 'W') ADVANCE(35);
      if (lookahead == '[') ADVANCE(166);
      if (lookahead == '\\') SKIP(98)
      if (lookahead == ']') ADVANCE(167);
      if (lookahead == '_') ADVANCE(86);
      if (lookahead == 'a') ADVANCE(80);
      if (lookahead == 'b') ADVANCE(65);
      if (lookahead == 'c') ADVANCE(73);
      if (lookahead == 'd') ADVANCE(55);
      if (lookahead == 'e') ADVANCE(47);
      if (lookahead == 'f') ADVANCE(74);
      if (lookahead == 'g') ADVANCE(75);
      if (lookahead == 'p') ADVANCE(76);
      if (lookahead == 'q') ADVANCE(78);
      if (lookahead == 'r') ADVANCE(25);
      if (lookahead == 's') ADVANCE(54);
      if (lookahead == 'w') ADVANCE(61);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(226);
      if (lookahead == 'x' ||
          lookahead == 'y') ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(94);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(225);
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
      if (lookahead == '\n') SKIP(15)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(15)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(17)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(17)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(16)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(16)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(82)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(82)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(18)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(18)
      if (lookahead == '\r') SKIP(9)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(83)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(83)
      if (lookahead == '\r') SKIP(11)
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(84)
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(84)
      if (lookahead == '\r') SKIP(13)
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(19);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(120);
      if (lookahead == '$') ADVANCE(270);
      if (lookahead == '\'') ADVANCE(20);
      if (lookahead == '-') ADVANCE(269);
      if (lookahead == '.') ADVANCE(324);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == '0') ADVANCE(234);
      if (lookahead == '1') ADVANCE(235);
      if (lookahead == 'B') ADVANCE(289);
      if (lookahead == 'D') ADVANCE(287);
      if (lookahead == 'Q') ADVANCE(288);
      if (lookahead == 'W') ADVANCE(278);
      if (lookahead == '[') ADVANCE(166);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == '_') ADVANCE(321);
      if (lookahead == 'b') ADVANCE(306);
      if (lookahead == 'd') ADVANCE(297);
      if (lookahead == 'e') ADVANCE(290);
      if (lookahead == 'q') ADVANCE(317);
      if (lookahead == 'r') ADVANCE(271);
      if (lookahead == 's') ADVANCE(296);
      if (lookahead == 'w') ADVANCE(303);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(318);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(240);
      if (lookahead == 'x' ||
          lookahead == 'y') ADVANCE(302);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'f') ADVANCE(330);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(239);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(15)
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 16:
      if (lookahead == '"') ADVANCE(19);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(120);
      if (lookahead == '$') ADVANCE(270);
      if (lookahead == '\'') ADVANCE(20);
      if (lookahead == '-') ADVANCE(269);
      if (lookahead == '.') ADVANCE(324);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == '0') ADVANCE(234);
      if (lookahead == '1') ADVANCE(235);
      if (lookahead == 'P') ADVANCE(286);
      if (lookahead == '[') ADVANCE(166);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == '_') ADVANCE(321);
      if (lookahead == 'b') ADVANCE(307);
      if (lookahead == 'd') ADVANCE(298);
      if (lookahead == 'e') ADVANCE(290);
      if (lookahead == 'p') ADVANCE(316);
      if (lookahead == 'r') ADVANCE(271);
      if (lookahead == 's') ADVANCE(296);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(318);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(240);
      if (lookahead == 'x' ||
          lookahead == 'y') ADVANCE(302);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(239);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'f') ADVANCE(330);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(16)
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(19);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(120);
      if (lookahead == '$') ADVANCE(270);
      if (lookahead == '\'') ADVANCE(20);
      if (lookahead == '-') ADVANCE(269);
      if (lookahead == '.') ADVANCE(324);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == '0') ADVANCE(234);
      if (lookahead == '1') ADVANCE(235);
      if (lookahead == '[') ADVANCE(166);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == '_') ADVANCE(321);
      if (lookahead == 'b') ADVANCE(307);
      if (lookahead == 'd') ADVANCE(298);
      if (lookahead == 'e') ADVANCE(290);
      if (lookahead == 'r') ADVANCE(271);
      if (lookahead == 's') ADVANCE(296);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(318);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(240);
      if (lookahead == 'x' ||
          lookahead == 'y') ADVANCE(302);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(239);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'f') ADVANCE(330);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(17)
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(19);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(120);
      if (lookahead == '$') ADVANCE(270);
      if (lookahead == '\'') ADVANCE(20);
      if (lookahead == '-') ADVANCE(269);
      if (lookahead == '.') ADVANCE(324);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == '0') ADVANCE(234);
      if (lookahead == '1') ADVANCE(235);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == '_') ADVANCE(321);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(240);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(239);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(18)
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(330);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(265);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '\'') ADVANCE(266);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == ':') ADVANCE(128);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 22:
      if (lookahead == '/') ADVANCE(120);
      END_STATE();
    case 23:
      if (lookahead == '0') ADVANCE(250);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(252);
      END_STATE();
    case 24:
      if (lookahead == '0') ADVANCE(95);
      END_STATE();
    case 25:
      if (lookahead == '1') ADVANCE(87);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(202);
      if (lookahead == 'b') ADVANCE(64);
      if (lookahead == 'd') ADVANCE(57);
      if (lookahead == 'i') ADVANCE(68);
      if (lookahead == 's') ADVANCE(53);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(79);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(128);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == '=') ADVANCE(131);
      END_STATE();
    case 28:
      if (lookahead == '=') ADVANCE(138);
      END_STATE();
    case 29:
      if (lookahead == '=') ADVANCE(139);
      END_STATE();
    case 30:
      if (lookahead == '=') ADVANCE(140);
      END_STATE();
    case 31:
      if (lookahead == 'D') ADVANCE(152);
      END_STATE();
    case 32:
      if (lookahead == 'D') ADVANCE(148);
      END_STATE();
    case 33:
      if (lookahead == 'D') ADVANCE(150);
      END_STATE();
    case 34:
      if (lookahead == 'E') ADVANCE(146);
      END_STATE();
    case 35:
      if (lookahead == 'O') ADVANCE(39);
      END_STATE();
    case 36:
      if (lookahead == 'O') ADVANCE(40);
      END_STATE();
    case 37:
      if (lookahead == 'O') ADVANCE(41);
      END_STATE();
    case 38:
      if (lookahead == 'R') ADVANCE(162);
      END_STATE();
    case 39:
      if (lookahead == 'R') ADVANCE(31);
      END_STATE();
    case 40:
      if (lookahead == 'R') ADVANCE(32);
      END_STATE();
    case 41:
      if (lookahead == 'R') ADVANCE(33);
      END_STATE();
    case 42:
      if (lookahead == 'T') ADVANCE(38);
      END_STATE();
    case 43:
      if (lookahead == 'T') ADVANCE(34);
      END_STATE();
    case 44:
      if (lookahead == 'W') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      END_STATE();
    case 45:
      if (lookahead == 'W') ADVANCE(37);
      END_STATE();
    case 46:
      if (lookahead == 'Y') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      END_STATE();
    case 47:
      if (lookahead == 'b') ADVANCE(67);
      if (lookahead == 'd') ADVANCE(58);
      if (lookahead == 's') ADVANCE(124);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'e' ||
          lookahead == 'f') ADVANCE(91);
      END_STATE();
    case 48:
      if (lookahead == 'd') ADVANCE(160);
      END_STATE();
    case 49:
      if (lookahead == 'd') ADVANCE(156);
      END_STATE();
    case 50:
      if (lookahead == 'd') ADVANCE(158);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 52:
      if (lookahead == 'h') ADVANCE(168);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(198);
      if (lookahead == 'p') ADVANCE(200);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(198);
      if (lookahead == 'p') ADVANCE(200);
      if (lookahead == 's') ADVANCE(127);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(198);
      if (lookahead == 's') ADVANCE(123);
      if (lookahead == 'w') ADVANCE(62);
      if (lookahead == 'x') ADVANCE(196);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      END_STATE();
    case 56:
      if (lookahead == 'i') ADVANCE(198);
      if (lookahead == 's') ADVANCE(123);
      if (lookahead == 'x') ADVANCE(196);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      END_STATE();
    case 57:
      if (lookahead == 'i') ADVANCE(198);
      if (lookahead == 'x') ADVANCE(196);
      END_STATE();
    case 58:
      if (lookahead == 'i') ADVANCE(198);
      if (lookahead == 'x') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 59:
      if (lookahead == 'm') ADVANCE(88);
      END_STATE();
    case 60:
      if (lookahead == 'm') ADVANCE(59);
      END_STATE();
    case 61:
      if (lookahead == 'o') ADVANCE(70);
      END_STATE();
    case 62:
      if (lookahead == 'o') ADVANCE(71);
      END_STATE();
    case 63:
      if (lookahead == 'o') ADVANCE(72);
      END_STATE();
    case 64:
      if (lookahead == 'p') ADVANCE(200);
      if (lookahead == 'x') ADVANCE(196);
      END_STATE();
    case 65:
      if (lookahead == 'p') ADVANCE(200);
      if (lookahead == 'x') ADVANCE(196);
      if (lookahead == 'y') ADVANCE(77);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      END_STATE();
    case 66:
      if (lookahead == 'p') ADVANCE(200);
      if (lookahead == 'x') ADVANCE(196);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      END_STATE();
    case 67:
      if (lookahead == 'p') ADVANCE(200);
      if (lookahead == 'x') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 68:
      if (lookahead == 'p') ADVANCE(206);
      END_STATE();
    case 69:
      if (lookahead == 'r') ADVANCE(164);
      END_STATE();
    case 70:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 71:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 72:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 73:
      if (lookahead == 's') ADVANCE(122);
      if (lookahead == 'x') ADVANCE(196);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      END_STATE();
    case 74:
      if (lookahead == 's') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      END_STATE();
    case 75:
      if (lookahead == 's') ADVANCE(126);
      END_STATE();
    case 76:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 77:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 78:
      if (lookahead == 'w') ADVANCE(63);
      END_STATE();
    case 79:
      if (lookahead == 'x') ADVANCE(196);
      END_STATE();
    case 80:
      if (lookahead == 'x') ADVANCE(196);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      END_STATE();
    case 81:
      if (lookahead == 'x') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 82:
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(120);
      if (lookahead == '$') ADVANCE(24);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == '0') ADVANCE(248);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == 'a') ADVANCE(80);
      if (lookahead == 'b') ADVANCE(66);
      if (lookahead == 'c') ADVANCE(73);
      if (lookahead == 'd') ADVANCE(56);
      if (lookahead == 'e') ADVANCE(47);
      if (lookahead == 'f') ADVANCE(74);
      if (lookahead == 'g') ADVANCE(75);
      if (lookahead == 'r') ADVANCE(25);
      if (lookahead == 's') ADVANCE(54);
      if (lookahead == 'x' ||
          lookahead == 'y') ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(82)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(249);
      END_STATE();
    case 83:
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(120);
      if (lookahead == '*') ADVANCE(132);
      if (lookahead == '+') ADVANCE(133);
      if (lookahead == '-') ADVANCE(134);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == '\\') SKIP(12)
      if (lookahead == ']') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(83)
      END_STATE();
    case 84:
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(120);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == '\\') SKIP(14)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(84)
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 85:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
      END_STATE();
    case 86:
      if (lookahead == 'b' ||
          lookahead == 'y') ADVANCE(174);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(86);
      END_STATE();
    case 87:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(202);
      END_STATE();
    case 88:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(204);
      END_STATE();
    case 89:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
      END_STATE();
    case 90:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(209);
      END_STATE();
    case 91:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 92:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(172);
      END_STATE();
    case 93:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(170);
      END_STATE();
    case 94:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      END_STATE();
    case 95:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(93);
      END_STATE();
    case 96:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 97:
      if (eof) ADVANCE(117);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 98:
      if (eof) ADVANCE(117);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(97)
      END_STATE();
    case 99:
      if (eof) ADVANCE(117);
      if (lookahead == '\n') SKIP(116)
      END_STATE();
    case 100:
      if (eof) ADVANCE(117);
      if (lookahead == '\n') SKIP(116)
      if (lookahead == '\r') SKIP(99)
      END_STATE();
    case 101:
      if (eof) ADVANCE(117);
      if (lookahead == '\n') SKIP(103)
      END_STATE();
    case 102:
      if (eof) ADVANCE(117);
      if (lookahead == '\n') SKIP(103)
      if (lookahead == '\r') SKIP(101)
      END_STATE();
    case 103:
      if (eof) ADVANCE(117);
      if (lookahead == '\n') ADVANCE(118);
      if (lookahead == '!') ADVANCE(27);
      if (lookahead == '"') ADVANCE(19);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(120);
      if (lookahead == '$') ADVANCE(270);
      if (lookahead == '\'') ADVANCE(20);
      if (lookahead == '*') ADVANCE(132);
      if (lookahead == '+') ADVANCE(133);
      if (lookahead == '-') ADVANCE(135);
      if (lookahead == '.') ADVANCE(324);
      if (lookahead == '/') ADVANCE(137);
      if (lookahead == '0') ADVANCE(234);
      if (lookahead == '1') ADVANCE(235);
      if (lookahead == '<') ADVANCE(272);
      if (lookahead == '=') ADVANCE(29);
      if (lookahead == '>') ADVANCE(273);
      if (lookahead == 'B') ADVANCE(289);
      if (lookahead == 'D') ADVANCE(287);
      if (lookahead == 'Q') ADVANCE(288);
      if (lookahead == 'W') ADVANCE(278);
      if (lookahead == '[') ADVANCE(166);
      if (lookahead == '\\') SKIP(102)
      if (lookahead == '_') ADVANCE(321);
      if (lookahead == 'b') ADVANCE(306);
      if (lookahead == 'd') ADVANCE(297);
      if (lookahead == 'e') ADVANCE(290);
      if (lookahead == 'q') ADVANCE(317);
      if (lookahead == 'r') ADVANCE(271);
      if (lookahead == 's') ADVANCE(296);
      if (lookahead == 'w') ADVANCE(303);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(318);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(240);
      if (lookahead == 'x' ||
          lookahead == 'y') ADVANCE(302);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'f') ADVANCE(330);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(239);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(103)
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 104:
      if (eof) ADVANCE(117);
      if (lookahead == '\n') ADVANCE(118);
      if (lookahead == '"') ADVANCE(19);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(120);
      if (lookahead == '$') ADVANCE(270);
      if (lookahead == '\'') ADVANCE(20);
      if (lookahead == ',') ADVANCE(129);
      if (lookahead == '-') ADVANCE(269);
      if (lookahead == '.') ADVANCE(324);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == '0') ADVANCE(234);
      if (lookahead == '1') ADVANCE(235);
      if (lookahead == 'B') ADVANCE(289);
      if (lookahead == 'D') ADVANCE(287);
      if (lookahead == 'Q') ADVANCE(288);
      if (lookahead == 'W') ADVANCE(278);
      if (lookahead == '[') ADVANCE(166);
      if (lookahead == '\\') SKIP(108)
      if (lookahead == '_') ADVANCE(321);
      if (lookahead == 'b') ADVANCE(306);
      if (lookahead == 'd') ADVANCE(297);
      if (lookahead == 'e') ADVANCE(290);
      if (lookahead == 'q') ADVANCE(317);
      if (lookahead == 'r') ADVANCE(271);
      if (lookahead == 's') ADVANCE(296);
      if (lookahead == 'w') ADVANCE(303);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(318);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(240);
      if (lookahead == 'x' ||
          lookahead == 'y') ADVANCE(302);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'f') ADVANCE(330);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(239);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(104)
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 105:
      if (eof) ADVANCE(117);
      if (lookahead == '\n') ADVANCE(118);
      if (lookahead == '"') ADVANCE(19);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(120);
      if (lookahead == '$') ADVANCE(270);
      if (lookahead == '\'') ADVANCE(20);
      if (lookahead == '-') ADVANCE(269);
      if (lookahead == '.') ADVANCE(324);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == '0') ADVANCE(234);
      if (lookahead == '1') ADVANCE(235);
      if (lookahead == '\\') SKIP(110)
      if (lookahead == '_') ADVANCE(321);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(240);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(239);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(105)
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(330);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 106:
      if (eof) ADVANCE(117);
      if (lookahead == '\n') ADVANCE(118);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(120);
      if (lookahead == '.') ADVANCE(96);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == '\\') SKIP(112)
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(106)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 107:
      if (eof) ADVANCE(117);
      if (lookahead == '\n') SKIP(104)
      END_STATE();
    case 108:
      if (eof) ADVANCE(117);
      if (lookahead == '\n') SKIP(104)
      if (lookahead == '\r') SKIP(107)
      END_STATE();
    case 109:
      if (eof) ADVANCE(117);
      if (lookahead == '\n') SKIP(105)
      END_STATE();
    case 110:
      if (eof) ADVANCE(117);
      if (lookahead == '\n') SKIP(105)
      if (lookahead == '\r') SKIP(109)
      END_STATE();
    case 111:
      if (eof) ADVANCE(117);
      if (lookahead == '\n') SKIP(106)
      END_STATE();
    case 112:
      if (eof) ADVANCE(117);
      if (lookahead == '\n') SKIP(106)
      if (lookahead == '\r') SKIP(111)
      END_STATE();
    case 113:
      if (eof) ADVANCE(117);
      if (lookahead == '\n') SKIP(115)
      END_STATE();
    case 114:
      if (eof) ADVANCE(117);
      if (lookahead == '\n') SKIP(115)
      if (lookahead == '\r') SKIP(113)
      END_STATE();
    case 115:
      if (eof) ADVANCE(117);
      if (lookahead == '\n') ADVANCE(119);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(120);
      if (lookahead == ',') ADVANCE(129);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == '\\') SKIP(114)
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(115)
      END_STATE();
    case 116:
      if (eof) ADVANCE(117);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(120);
      if (lookahead == '%') ADVANCE(141);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == '\\') SKIP(100)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(116)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(119);
      if (lookahead == ' ') ADVANCE(130);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(120);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_cs);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_ds);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_es);
      if (lookahead == 'i') ADVANCE(198);
      if (lookahead == 'p') ADVANCE(200);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_fs);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_gs);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_ss);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_label);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(119);
      if (lookahead == ' ') ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(324);
      if (lookahead == '0') ADVANCE(241);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(245);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '0') ADVANCE(227);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(231);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(120);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_nasm_macro_token1);
      if (lookahead == '%') ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_gcc_mnemonic);
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == ':') ADVANCE(128);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_gcc_mnemonic);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_mnemonic);
      if (lookahead == ':') ADVANCE(128);
      if (lookahead == '-' ||
          lookahead == '.') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_mnemonic);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_BYTE);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_BYTE);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(332);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_DWORD);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_DWORD);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(332);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_QWORD);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_QWORD);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(332);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_WORD);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_WORD);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(332);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_byte);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_byte);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(332);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_dword);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_dword);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(332);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_qword);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_qword);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(332);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_word);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_word);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(332);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_PTR);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_PTR);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(332);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_ptr);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_ptr);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(332);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_hexadecimal_token1);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_hexadecimal_token1);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(332);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_hexadecimal_token2);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_hexadecimal_token2);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(332);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_hexadecimal_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(172);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_hexadecimal_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(173);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (lookahead == '_') ADVANCE(186);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(184);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (lookahead == '_') ADVANCE(187);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(185);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(295);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (lookahead == 'h') ADVANCE(168);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (lookahead == 'h') ADVANCE(169);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(332);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(186);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(187);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('2' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(295);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(332);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_binary_token2);
      if (lookahead == 'h') ADVANCE(168);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(186);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_binary_token2);
      if (lookahead == 'h') ADVANCE(169);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(187);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('2' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_binary_token2);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(186);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_binary_token2);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(187);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('2' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_octal_token1);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_octal_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(192);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_octal_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(193);
      if (sym__identifier_character_set_2(lookahead)) ADVANCE(332);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_octal_token1);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(332);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_octal_token2);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(192);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_octal_token2);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(193);
      if (sym__identifier_character_set_2(lookahead)) ADVANCE(332);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_register_token1);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_register_token1);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(332);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_register_token2);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_register_token2);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(332);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_register_token3);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_register_token3);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(332);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_register_token4);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_register_token4);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(332);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_register_token5);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_register_token5);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(332);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_register_token6);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_register_token6);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(332);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_rip);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_rip);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(332);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == '.') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(208);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == '.') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(209);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == 'e') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(210);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(211);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(212);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == '.') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == '.') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(214);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == 'e') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(215);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == 'e') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(210);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_integer);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(215);
      if (lookahead == '_') ADVANCE(86);
      if (lookahead == 'b') ADVANCE(175);
      if (lookahead == 'd') ADVANCE(259);
      if (lookahead == 'y') ADVANCE(179);
      if (lookahead == 'h' ||
          lookahead == 'x') ADVANCE(92);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(189);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(222);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(233);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(232);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(215);
      if (lookahead == '_') ADVANCE(86);
      if (lookahead == 'b') ADVANCE(181);
      if (lookahead == 'd') ADVANCE(262);
      if (lookahead == 'y') ADVANCE(174);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(188);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(222);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(233);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(232);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(215);
      if (lookahead == '_') ADVANCE(86);
      if (lookahead == 'b') ADVANCE(177);
      if (lookahead == 'd') ADVANCE(254);
      if (lookahead == 'y') ADVANCE(174);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(188);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(223);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(229);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(228);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(215);
      if (lookahead == '_') ADVANCE(86);
      if (lookahead == 'd') ADVANCE(219);
      if (lookahead == 'h') ADVANCE(168);
      if (lookahead == 'b' ||
          lookahead == 'y') ADVANCE(174);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(188);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(224);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(231);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(230);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(215);
      if (lookahead == '_') ADVANCE(86);
      if (lookahead == 'd') ADVANCE(219);
      if (lookahead == 'b' ||
          lookahead == 'y') ADVANCE(174);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(188);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(224);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(231);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(230);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(215);
      if (lookahead == 'd') ADVANCE(262);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(188);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(232);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(215);
      if (lookahead == 'd') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(233);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(215);
      if (lookahead == 'd') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(231);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(215);
      if (lookahead == 'd') ADVANCE(219);
      if (lookahead == 'h') ADVANCE(168);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(188);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(230);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(215);
      if (lookahead == 'd') ADVANCE(219);
      if (lookahead == 'h') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(231);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(215);
      if (lookahead == 'd') ADVANCE(219);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(188);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(230);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(215);
      if (lookahead == 'd') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(231);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(215);
      if (lookahead == 'd') ADVANCE(254);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(188);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(228);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(215);
      if (lookahead == 'd') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(229);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(216);
      if (lookahead == '_') ADVANCE(321);
      if (lookahead == 'b') ADVANCE(176);
      if (lookahead == 'd') ADVANCE(261);
      if (lookahead == 'y') ADVANCE(180);
      if (lookahead == 'h' ||
          lookahead == 'x') ADVANCE(328);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(190);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(236);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(247);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(246);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(327);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(216);
      if (lookahead == '_') ADVANCE(321);
      if (lookahead == 'b') ADVANCE(182);
      if (lookahead == 'd') ADVANCE(263);
      if (lookahead == 'y') ADVANCE(183);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(191);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(236);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(247);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(246);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(327);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(216);
      if (lookahead == '_') ADVANCE(321);
      if (lookahead == 'b') ADVANCE(178);
      if (lookahead == 'd') ADVANCE(257);
      if (lookahead == 'y') ADVANCE(183);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(191);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(237);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(243);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(242);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(295);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(216);
      if (lookahead == '_') ADVANCE(321);
      if (lookahead == 'd') ADVANCE(264);
      if (lookahead == 'h') ADVANCE(169);
      if (lookahead == 'b' ||
          lookahead == 'y') ADVANCE(183);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(191);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(238);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(245);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(244);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(216);
      if (lookahead == '_') ADVANCE(321);
      if (lookahead == 'd') ADVANCE(264);
      if (lookahead == 'b' ||
          lookahead == 'y') ADVANCE(183);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(191);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(238);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(245);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(244);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(216);
      if (lookahead == 'd') ADVANCE(263);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(191);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(246);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(327);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(216);
      if (lookahead == 'd') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(247);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(327);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(216);
      if (lookahead == 'd') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(245);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(216);
      if (lookahead == 'd') ADVANCE(264);
      if (lookahead == 'h') ADVANCE(169);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(191);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(244);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(216);
      if (lookahead == 'd') ADVANCE(264);
      if (lookahead == 'h') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(245);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(216);
      if (lookahead == 'd') ADVANCE(264);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(191);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(244);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(216);
      if (lookahead == 'd') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(245);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(216);
      if (lookahead == 'd') ADVANCE(257);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(191);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(242);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(295);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(216);
      if (lookahead == 'd') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(243);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(295);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'd') ADVANCE(259);
      if (lookahead == 'h' ||
          lookahead == 'x') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'd') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'd') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(252);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'd') ADVANCE(219);
      if (lookahead == 'h') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(252);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'd') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(252);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'd') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(251);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'h') ADVANCE(168);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'h') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(258);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'h') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'h') ADVANCE(169);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(332);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(258);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(256);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(295);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(295);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_integer);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(332);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '+') ADVANCE(89);
      if (lookahead == '-') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(214);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '+') ADVANCE(90);
      if (lookahead == '-') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(208);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '.') ADVANCE(324);
      if (lookahead == '0') ADVANCE(241);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(245);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '0') ADVANCE(331);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(332);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '1') ADVANCE(322);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(203);
      if (lookahead == 'b') ADVANCE(309);
      if (lookahead == 'd') ADVANCE(300);
      if (lookahead == 'i') ADVANCE(310);
      if (lookahead == 's') ADVANCE(296);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(320);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(332);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '=') ADVANCE(138);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '=') ADVANCE(140);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(153);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(332);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(149);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(332);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(151);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(332);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(147);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(332);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(281);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(332);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(283);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(332);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(284);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(332);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(274);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(332);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(163);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(332);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(275);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(332);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(276);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(332);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(277);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(332);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(282);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(332);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'W') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(327);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'W') ADVANCE(280);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(332);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'Y') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(327);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b') ADVANCE(308);
      if (lookahead == 'd') ADVANCE(299);
      if (lookahead == 's') ADVANCE(296);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'e' ||
          lookahead == 'f') ADVANCE(327);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(161);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(332);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(157);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(332);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(159);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(332);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(155);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(332);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(169);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(332);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(199);
      if (lookahead == 'p') ADVANCE(201);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(332);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(199);
      if (lookahead == 'w') ADVANCE(304);
      if (lookahead == 'x') ADVANCE(197);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(327);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(199);
      if (lookahead == 'x') ADVANCE(197);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(327);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(199);
      if (lookahead == 'x') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(295);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(199);
      if (lookahead == 'x') ADVANCE(197);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(332);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(323);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(332);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(301);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(332);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(311);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(332);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(313);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(332);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(314);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(332);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(201);
      if (lookahead == 'x') ADVANCE(197);
      if (lookahead == 'y') ADVANCE(315);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(327);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(201);
      if (lookahead == 'x') ADVANCE(197);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(327);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(201);
      if (lookahead == 'x') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(295);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(201);
      if (lookahead == 'x') ADVANCE(197);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(332);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(207);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(332);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(291);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(332);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(165);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(332);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(292);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(332);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(293);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(332);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(294);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(332);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(312);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(332);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'w') ADVANCE(305);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(332);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x') ADVANCE(197);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(327);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(295);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x') ADVANCE(197);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(332);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b' ||
          lookahead == 'y') ADVANCE(183);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(321);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('2' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(203);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(332);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(205);
      if (sym__identifier_character_set_2(lookahead)) ADVANCE(332);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(210);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(208);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym__identifier);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(295);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(173);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(171);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(327);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(329);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym__identifier);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(332);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 116},
  [2] = {.lex_state = 103},
  [3] = {.lex_state = 103},
  [4] = {.lex_state = 103},
  [5] = {.lex_state = 104},
  [6] = {.lex_state = 104},
  [7] = {.lex_state = 104},
  [8] = {.lex_state = 15},
  [9] = {.lex_state = 103},
  [10] = {.lex_state = 103},
  [11] = {.lex_state = 103},
  [12] = {.lex_state = 103},
  [13] = {.lex_state = 103},
  [14] = {.lex_state = 103},
  [15] = {.lex_state = 103},
  [16] = {.lex_state = 103},
  [17] = {.lex_state = 103},
  [18] = {.lex_state = 103},
  [19] = {.lex_state = 103},
  [20] = {.lex_state = 103},
  [21] = {.lex_state = 103},
  [22] = {.lex_state = 103},
  [23] = {.lex_state = 103},
  [24] = {.lex_state = 104},
  [25] = {.lex_state = 104},
  [26] = {.lex_state = 104},
  [27] = {.lex_state = 104},
  [28] = {.lex_state = 104},
  [29] = {.lex_state = 104},
  [30] = {.lex_state = 104},
  [31] = {.lex_state = 104},
  [32] = {.lex_state = 104},
  [33] = {.lex_state = 104},
  [34] = {.lex_state = 104},
  [35] = {.lex_state = 104},
  [36] = {.lex_state = 104},
  [37] = {.lex_state = 104},
  [38] = {.lex_state = 17},
  [39] = {.lex_state = 17},
  [40] = {.lex_state = 16},
  [41] = {.lex_state = 105},
  [42] = {.lex_state = 105},
  [43] = {.lex_state = 105},
  [44] = {.lex_state = 17},
  [45] = {.lex_state = 82},
  [46] = {.lex_state = 82},
  [47] = {.lex_state = 82},
  [48] = {.lex_state = 82},
  [49] = {.lex_state = 18},
  [50] = {.lex_state = 82},
  [51] = {.lex_state = 82},
  [52] = {.lex_state = 82},
  [53] = {.lex_state = 82},
  [54] = {.lex_state = 116},
  [55] = {.lex_state = 82},
  [56] = {.lex_state = 116},
  [57] = {.lex_state = 116},
  [58] = {.lex_state = 106},
  [59] = {.lex_state = 82},
  [60] = {.lex_state = 83},
  [61] = {.lex_state = 83},
  [62] = {.lex_state = 83},
  [63] = {.lex_state = 83},
  [64] = {.lex_state = 83},
  [65] = {.lex_state = 115},
  [66] = {.lex_state = 83},
  [67] = {.lex_state = 83},
  [68] = {.lex_state = 83},
  [69] = {.lex_state = 115},
  [70] = {.lex_state = 115},
  [71] = {.lex_state = 83},
  [72] = {.lex_state = 83},
  [73] = {.lex_state = 83},
  [74] = {.lex_state = 83},
  [75] = {.lex_state = 83},
  [76] = {.lex_state = 115},
  [77] = {.lex_state = 115},
  [78] = {.lex_state = 115},
  [79] = {.lex_state = 83},
  [80] = {.lex_state = 83},
  [81] = {.lex_state = 115},
  [82] = {.lex_state = 115},
  [83] = {.lex_state = 115},
  [84] = {.lex_state = 83},
  [85] = {.lex_state = 115},
  [86] = {.lex_state = 103},
  [87] = {.lex_state = 103},
  [88] = {.lex_state = 103},
  [89] = {.lex_state = 103},
  [90] = {.lex_state = 103},
  [91] = {.lex_state = 103},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 84},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_cs] = ACTIONS(1),
    [anon_sym_ds] = ACTIONS(1),
    [anon_sym_es] = ACTIONS(1),
    [anon_sym_fs] = ACTIONS(1),
    [anon_sym_gs] = ACTIONS(1),
    [anon_sym_ss] = ACTIONS(1),
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
    [sym_program] = STATE(92),
    [sym__statement] = STATE(86),
    [sym_instruction] = STATE(86),
    [sym__normal_instruction] = STATE(90),
    [sym__gcc_pseudo_op] = STATE(90),
    [sym__macro] = STATE(86),
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
    [sym_width] = STATE(39),
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
    [sym_width] = STATE(39),
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
    [sym_width] = STATE(39),
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
    [sym_width] = STATE(38),
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
    [sym_width] = STATE(38),
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
    [sym_width] = STATE(38),
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
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      sym_integer,
    ACTIONS(135), 1,
      sym__identifier,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    STATE(38), 1,
      sym_width,
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
    ACTIONS(23), 8,
      anon_sym_BYTE,
      anon_sym_DWORD,
      anon_sym_QWORD,
      anon_sym_WORD,
      anon_sym_byte,
      anon_sym_dword,
      anon_sym_qword,
      anon_sym_word,
    STATE(33), 10,
      sym__operand,
      sym_pointer,
      sym_hexadecimal,
      sym_binary,
      sym_octal,
      sym_register,
      sym__constant,
      sym_float,
      sym_string,
      sym_identifier,
  [68] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(143), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(145), 37,
      anon_sym_BANG_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
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
  [115] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(147), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(149), 37,
      anon_sym_BANG_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
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
    ACTIONS(151), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(153), 37,
      anon_sym_BANG_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
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
  [209] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(155), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(157), 37,
      anon_sym_BANG_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
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
  [256] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(159), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(161), 37,
      anon_sym_BANG_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
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
  [303] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(163), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(165), 37,
      anon_sym_BANG_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
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
  [350] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(167), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(169), 37,
      anon_sym_BANG_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
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
  [397] = 4,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_LBRACK,
    ACTIONS(171), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(173), 36,
      anon_sym_BANG_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
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
  [446] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(177), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(179), 37,
      anon_sym_BANG_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
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
  [493] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(181), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(183), 37,
      anon_sym_BANG_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
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
  [540] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(185), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(187), 37,
      anon_sym_BANG_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
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
  [587] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(189), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(191), 37,
      anon_sym_BANG_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
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
  [634] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(193), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(195), 37,
      anon_sym_BANG_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
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
  [681] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(197), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(199), 37,
      anon_sym_BANG_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
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
  [728] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(201), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(203), 37,
      anon_sym_BANG_EQ,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
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
  [775] = 4,
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
  [817] = 3,
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
  [857] = 3,
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
  [897] = 3,
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
  [937] = 3,
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
  [977] = 3,
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
  [1017] = 3,
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
  [1057] = 3,
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
  [1097] = 3,
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
  [1137] = 3,
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
  [1177] = 3,
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
  [1217] = 3,
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
  [1257] = 3,
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
  [1297] = 3,
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
  [1337] = 11,
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
    STATE(37), 9,
      sym_pointer,
      sym_hexadecimal,
      sym_binary,
      sym_octal,
      sym_register,
      sym__constant,
      sym_float,
      sym_string,
      sym_identifier,
  [1391] = 11,
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
  [1445] = 4,
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
  [1478] = 10,
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
    STATE(85), 7,
      sym_hexadecimal,
      sym_binary,
      sym_octal,
      sym__constant,
      sym_float,
      sym_string,
      sym_identifier,
  [1522] = 10,
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
    ACTIONS(235), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(221), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    STATE(85), 7,
      sym_hexadecimal,
      sym_binary,
      sym_octal,
      sym__constant,
      sym_float,
      sym_string,
      sym_identifier,
  [1566] = 10,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(233), 1,
      sym__identifier,
    ACTIONS(239), 1,
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
    ACTIONS(237), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(221), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    STATE(70), 7,
      sym_hexadecimal,
      sym_binary,
      sym_octal,
      sym__constant,
      sym_float,
      sym_string,
      sym_identifier,
  [1610] = 3,
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
  [1639] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_es,
    ACTIONS(253), 1,
      sym_integer,
    STATE(51), 1,
      sym_segment_prefix,
    STATE(94), 1,
      sym_segment,
    STATE(68), 2,
      sym_hexadecimal,
      sym_register,
    ACTIONS(249), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    ACTIONS(245), 5,
      anon_sym_cs,
      anon_sym_ds,
      anon_sym_fs,
      anon_sym_gs,
      anon_sym_ss,
    ACTIONS(251), 7,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      anon_sym_rip,
  [1680] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_es,
    ACTIONS(255), 1,
      sym_integer,
    STATE(52), 1,
      sym_segment_prefix,
    STATE(94), 1,
      sym_segment,
    STATE(66), 2,
      sym_hexadecimal,
      sym_register,
    ACTIONS(249), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    ACTIONS(245), 5,
      anon_sym_cs,
      anon_sym_ds,
      anon_sym_fs,
      anon_sym_gs,
      anon_sym_ss,
    ACTIONS(251), 7,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      anon_sym_rip,
  [1721] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_es,
    ACTIONS(257), 1,
      sym_integer,
    STATE(50), 1,
      sym_segment_prefix,
    STATE(94), 1,
      sym_segment,
    STATE(74), 2,
      sym_hexadecimal,
      sym_register,
    ACTIONS(249), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    ACTIONS(245), 5,
      anon_sym_cs,
      anon_sym_ds,
      anon_sym_fs,
      anon_sym_gs,
      anon_sym_ss,
    ACTIONS(251), 7,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      anon_sym_rip,
  [1762] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_es,
    ACTIONS(259), 1,
      sym_integer,
    STATE(53), 1,
      sym_segment_prefix,
    STATE(94), 1,
      sym_segment,
    STATE(73), 2,
      sym_hexadecimal,
      sym_register,
    ACTIONS(249), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    ACTIONS(245), 5,
      anon_sym_cs,
      anon_sym_ds,
      anon_sym_fs,
      anon_sym_gs,
      anon_sym_ss,
    ACTIONS(251), 7,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      anon_sym_rip,
  [1803] = 9,
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
    ACTIONS(261), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(221), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    STATE(85), 7,
      sym_hexadecimal,
      sym_binary,
      sym_octal,
      sym__constant,
      sym_float,
      sym_string,
      sym_identifier,
  [1843] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      sym_integer,
    STATE(68), 2,
      sym_hexadecimal,
      sym_register,
    ACTIONS(249), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    ACTIONS(251), 7,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      anon_sym_rip,
  [1868] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      sym_integer,
    STATE(71), 2,
      sym_hexadecimal,
      sym_register,
    ACTIONS(249), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    ACTIONS(251), 7,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      anon_sym_rip,
  [1893] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      sym_integer,
    STATE(60), 2,
      sym_hexadecimal,
      sym_register,
    ACTIONS(249), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    ACTIONS(251), 7,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      anon_sym_rip,
  [1918] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      sym_integer,
    STATE(66), 2,
      sym_hexadecimal,
      sym_register,
    ACTIONS(249), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    ACTIONS(251), 7,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      anon_sym_rip,
  [1943] = 9,
    ACTIONS(9), 1,
      sym_label,
    ACTIONS(11), 1,
      aux_sym_nasm_macro_token1,
    ACTIONS(13), 1,
      sym_gcc_mnemonic,
    ACTIONS(15), 1,
      sym_mnemonic,
    ACTIONS(267), 1,
      ts_builtin_sym_end,
    ACTIONS(269), 1,
      sym_comment,
    STATE(2), 1,
      sym_nasm_macro,
    STATE(90), 2,
      sym__normal_instruction,
      sym__gcc_pseudo_op,
    STATE(91), 3,
      sym__statement,
      sym_instruction,
      sym__macro,
  [1974] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      sym_integer,
    ACTIONS(271), 10,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      anon_sym_rip,
  [1993] = 9,
    ACTIONS(9), 1,
      sym_label,
    ACTIONS(11), 1,
      aux_sym_nasm_macro_token1,
    ACTIONS(13), 1,
      sym_gcc_mnemonic,
    ACTIONS(15), 1,
      sym_mnemonic,
    ACTIONS(269), 1,
      sym_comment,
    ACTIONS(275), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_nasm_macro,
    STATE(90), 2,
      sym__normal_instruction,
      sym__gcc_pseudo_op,
    STATE(91), 3,
      sym__statement,
      sym_instruction,
      sym__macro,
  [2024] = 8,
    ACTIONS(9), 1,
      sym_label,
    ACTIONS(11), 1,
      aux_sym_nasm_macro_token1,
    ACTIONS(13), 1,
      sym_gcc_mnemonic,
    ACTIONS(15), 1,
      sym_mnemonic,
    ACTIONS(269), 1,
      sym_comment,
    STATE(2), 1,
      sym_nasm_macro,
    STATE(90), 2,
      sym__normal_instruction,
      sym__gcc_pseudo_op,
    STATE(91), 3,
      sym__statement,
      sym_instruction,
      sym__macro,
  [2052] = 6,
    ACTIONS(13), 1,
      sym_gcc_mnemonic,
    ACTIONS(15), 1,
      sym_mnemonic,
    ACTIONS(19), 1,
      sym_comment,
    STATE(89), 1,
      sym_instruction,
    ACTIONS(277), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(90), 2,
      sym__normal_instruction,
      sym__gcc_pseudo_op,
  [2073] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      sym_integer,
    STATE(84), 1,
      sym_hexadecimal,
    ACTIONS(249), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
  [2088] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_RBRACK,
    STATE(62), 1,
      aux_sym_pointer_repeat1,
    ACTIONS(281), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2103] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_RBRACK,
    STATE(63), 1,
      aux_sym_pointer_repeat1,
    ACTIONS(281), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2118] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_RBRACK,
    STATE(63), 1,
      aux_sym_pointer_repeat1,
    ACTIONS(281), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2133] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_RBRACK,
    STATE(63), 1,
      aux_sym_pointer_repeat1,
    ACTIONS(289), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2148] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_RBRACK,
    STATE(63), 1,
      aux_sym_pointer_repeat1,
    ACTIONS(281), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2163] = 5,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(235), 1,
      ts_builtin_sym_end,
    ACTIONS(294), 1,
      anon_sym_LF,
    STATE(69), 1,
      aux_sym__gcc_pseudo_op_repeat1,
    ACTIONS(296), 2,
      anon_sym_COMMA,
      anon_sym_,
  [2180] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_RBRACK,
    STATE(64), 1,
      aux_sym_pointer_repeat1,
    ACTIONS(281), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2195] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_RBRACK,
    STATE(63), 1,
      aux_sym_pointer_repeat1,
    ACTIONS(281), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2210] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_RBRACK,
    STATE(61), 1,
      aux_sym_pointer_repeat1,
    ACTIONS(281), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2225] = 5,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(302), 1,
      ts_builtin_sym_end,
    ACTIONS(304), 1,
      anon_sym_LF,
    STATE(69), 1,
      aux_sym__gcc_pseudo_op_repeat1,
    ACTIONS(306), 2,
      anon_sym_COMMA,
      anon_sym_,
  [2242] = 5,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(309), 1,
      ts_builtin_sym_end,
    ACTIONS(311), 1,
      anon_sym_LF,
    STATE(65), 1,
      aux_sym__gcc_pseudo_op_repeat1,
    ACTIONS(313), 2,
      anon_sym_COMMA,
      anon_sym_,
  [2259] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_RBRACK,
    STATE(72), 1,
      aux_sym_pointer_repeat1,
    ACTIONS(281), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2274] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      anon_sym_RBRACK,
    STATE(63), 1,
      aux_sym_pointer_repeat1,
    ACTIONS(281), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2289] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_RBRACK,
    STATE(67), 1,
      aux_sym_pointer_repeat1,
    ACTIONS(281), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2304] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 1,
      anon_sym_RBRACK,
    STATE(75), 1,
      aux_sym_pointer_repeat1,
    ACTIONS(281), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2319] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_RBRACK,
    STATE(63), 1,
      aux_sym_pointer_repeat1,
    ACTIONS(281), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2334] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(189), 1,
      ts_builtin_sym_end,
    ACTIONS(191), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [2346] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(185), 1,
      ts_builtin_sym_end,
    ACTIONS(187), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [2358] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(201), 1,
      ts_builtin_sym_end,
    ACTIONS(203), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [2370] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 4,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RBRACK,
  [2380] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 4,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RBRACK,
  [2390] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(197), 1,
      ts_builtin_sym_end,
    ACTIONS(199), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [2402] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(143), 1,
      ts_builtin_sym_end,
    ACTIONS(145), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [2414] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(181), 1,
      ts_builtin_sym_end,
    ACTIONS(183), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [2426] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 4,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RBRACK,
  [2436] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(302), 1,
      ts_builtin_sym_end,
    ACTIONS(304), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [2448] = 4,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(321), 1,
      ts_builtin_sym_end,
    ACTIONS(323), 1,
      anon_sym_LF,
    STATE(87), 1,
      aux_sym_program_repeat1,
  [2461] = 4,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(275), 1,
      ts_builtin_sym_end,
    ACTIONS(325), 1,
      anon_sym_LF,
    STATE(88), 1,
      aux_sym_program_repeat1,
  [2474] = 4,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(327), 1,
      ts_builtin_sym_end,
    ACTIONS(329), 1,
      anon_sym_LF,
    STATE(88), 1,
      aux_sym_program_repeat1,
  [2487] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(332), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2495] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(334), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2503] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(327), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2511] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      ts_builtin_sym_end,
  [2518] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      sym__identifier,
  [2525] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      anon_sym_COLON,
  [2532] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(8)] = 0,
  [SMALL_STATE(9)] = 68,
  [SMALL_STATE(10)] = 115,
  [SMALL_STATE(11)] = 162,
  [SMALL_STATE(12)] = 209,
  [SMALL_STATE(13)] = 256,
  [SMALL_STATE(14)] = 303,
  [SMALL_STATE(15)] = 350,
  [SMALL_STATE(16)] = 397,
  [SMALL_STATE(17)] = 446,
  [SMALL_STATE(18)] = 493,
  [SMALL_STATE(19)] = 540,
  [SMALL_STATE(20)] = 587,
  [SMALL_STATE(21)] = 634,
  [SMALL_STATE(22)] = 681,
  [SMALL_STATE(23)] = 728,
  [SMALL_STATE(24)] = 775,
  [SMALL_STATE(25)] = 817,
  [SMALL_STATE(26)] = 857,
  [SMALL_STATE(27)] = 897,
  [SMALL_STATE(28)] = 937,
  [SMALL_STATE(29)] = 977,
  [SMALL_STATE(30)] = 1017,
  [SMALL_STATE(31)] = 1057,
  [SMALL_STATE(32)] = 1097,
  [SMALL_STATE(33)] = 1137,
  [SMALL_STATE(34)] = 1177,
  [SMALL_STATE(35)] = 1217,
  [SMALL_STATE(36)] = 1257,
  [SMALL_STATE(37)] = 1297,
  [SMALL_STATE(38)] = 1337,
  [SMALL_STATE(39)] = 1391,
  [SMALL_STATE(40)] = 1445,
  [SMALL_STATE(41)] = 1478,
  [SMALL_STATE(42)] = 1522,
  [SMALL_STATE(43)] = 1566,
  [SMALL_STATE(44)] = 1610,
  [SMALL_STATE(45)] = 1639,
  [SMALL_STATE(46)] = 1680,
  [SMALL_STATE(47)] = 1721,
  [SMALL_STATE(48)] = 1762,
  [SMALL_STATE(49)] = 1803,
  [SMALL_STATE(50)] = 1843,
  [SMALL_STATE(51)] = 1868,
  [SMALL_STATE(52)] = 1893,
  [SMALL_STATE(53)] = 1918,
  [SMALL_STATE(54)] = 1943,
  [SMALL_STATE(55)] = 1974,
  [SMALL_STATE(56)] = 1993,
  [SMALL_STATE(57)] = 2024,
  [SMALL_STATE(58)] = 2052,
  [SMALL_STATE(59)] = 2073,
  [SMALL_STATE(60)] = 2088,
  [SMALL_STATE(61)] = 2103,
  [SMALL_STATE(62)] = 2118,
  [SMALL_STATE(63)] = 2133,
  [SMALL_STATE(64)] = 2148,
  [SMALL_STATE(65)] = 2163,
  [SMALL_STATE(66)] = 2180,
  [SMALL_STATE(67)] = 2195,
  [SMALL_STATE(68)] = 2210,
  [SMALL_STATE(69)] = 2225,
  [SMALL_STATE(70)] = 2242,
  [SMALL_STATE(71)] = 2259,
  [SMALL_STATE(72)] = 2274,
  [SMALL_STATE(73)] = 2289,
  [SMALL_STATE(74)] = 2304,
  [SMALL_STATE(75)] = 2319,
  [SMALL_STATE(76)] = 2334,
  [SMALL_STATE(77)] = 2346,
  [SMALL_STATE(78)] = 2358,
  [SMALL_STATE(79)] = 2370,
  [SMALL_STATE(80)] = 2380,
  [SMALL_STATE(81)] = 2390,
  [SMALL_STATE(82)] = 2402,
  [SMALL_STATE(83)] = 2414,
  [SMALL_STATE(84)] = 2426,
  [SMALL_STATE(85)] = 2436,
  [SMALL_STATE(86)] = 2448,
  [SMALL_STATE(87)] = 2461,
  [SMALL_STATE(88)] = 2474,
  [SMALL_STATE(89)] = 2487,
  [SMALL_STATE(90)] = 2495,
  [SMALL_STATE(91)] = 2503,
  [SMALL_STATE(92)] = 2511,
  [SMALL_STATE(93)] = 2518,
  [SMALL_STATE(94)] = 2525,
  [SMALL_STATE(95)] = 2532,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
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
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat1, 2), SHIFT_REPEAT(32),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat1, 2), SHIFT_REPEAT(30),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat1, 2), SHIFT_REPEAT(31),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat1, 2), SHIFT_REPEAT(27),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat1, 2), SHIFT_REPEAT(34),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat1, 2), SHIFT_REPEAT(24),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat1, 2), SHIFT_REPEAT(35),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat1, 2), SHIFT_REPEAT(36),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__normal_instruction, 1),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__normal_instruction, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
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
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
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
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gcc_pseudo_op, 4),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gcc_pseudo_op, 3),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gcc_pseudo_op, 1),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_width, 2),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_width, 2),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_segment_prefix, 2),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_segment_prefix, 2),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pointer_repeat1, 2), SHIFT_REPEAT(59),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pointer_repeat1, 2),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__gcc_pseudo_op, 3),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__gcc_pseudo_op_repeat1, 2),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__gcc_pseudo_op_repeat1, 2),
  [306] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__gcc_pseudo_op_repeat1, 2), SHIFT_REPEAT(49),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gcc_pseudo_op, 2),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__gcc_pseudo_op, 2),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [329] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(57),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1),
  [336] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_segment, 1),
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
