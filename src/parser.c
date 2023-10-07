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
#define STATE_COUNT 98
#define LARGE_STATE_COUNT 8
#define SYMBOL_COUNT 84
#define ALIAS_COUNT 0
#define TOKEN_COUNT 57
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
  anon_sym_call = 11,
  anon_sym_COMMA = 12,
  anon_sym_ = 13,
  anon_sym_BANG_EQ = 14,
  anon_sym_STAR = 15,
  anon_sym_PLUS = 16,
  anon_sym_DASH = 17,
  anon_sym_SLASH = 18,
  anon_sym_LT_EQ = 19,
  anon_sym_EQ_EQ = 20,
  anon_sym_GT_EQ = 21,
  aux_sym_nasm_macro_token1 = 22,
  sym_gcc_mnemonic = 23,
  sym_mnemonic = 24,
  anon_sym_BYTE = 25,
  anon_sym_DWORD = 26,
  anon_sym_QWORD = 27,
  anon_sym_WORD = 28,
  anon_sym_byte = 29,
  anon_sym_dword = 30,
  anon_sym_qword = 31,
  anon_sym_word = 32,
  anon_sym_PTR = 33,
  anon_sym_ptr = 34,
  anon_sym_LBRACK = 35,
  anon_sym_RBRACK = 36,
  aux_sym_hexadecimal_token1 = 37,
  aux_sym_hexadecimal_token2 = 38,
  aux_sym_hexadecimal_token3 = 39,
  aux_sym_binary_token1 = 40,
  aux_sym_binary_token2 = 41,
  aux_sym_octal_token1 = 42,
  aux_sym_octal_token2 = 43,
  aux_sym_register_token1 = 44,
  aux_sym_register_token2 = 45,
  aux_sym_register_token3 = 46,
  aux_sym_register_token4 = 47,
  aux_sym_register_token5 = 48,
  aux_sym_register_token6 = 49,
  aux_sym_register_token7 = 50,
  aux_sym_float_token1 = 51,
  aux_sym_float_token2 = 52,
  sym_integer = 53,
  aux_sym_string_token1 = 54,
  aux_sym_string_token2 = 55,
  sym__identifier = 56,
  sym_program = 57,
  sym__statement = 58,
  sym_segment_prefix = 59,
  sym_segment = 60,
  sym_call_instruction = 61,
  sym_instruction = 62,
  sym__normal_instruction = 63,
  sym__gcc_pseudo_op = 64,
  sym__macro = 65,
  sym_operator = 66,
  sym_nasm_macro = 67,
  sym__operand = 68,
  sym_width = 69,
  sym_pointer = 70,
  sym_hexadecimal = 71,
  sym_binary = 72,
  sym_octal = 73,
  sym_register = 74,
  sym__constant = 75,
  sym_float = 76,
  sym_string = 77,
  sym_identifier = 78,
  aux_sym_program_repeat1 = 79,
  aux_sym__normal_instruction_repeat1 = 80,
  aux_sym__gcc_pseudo_op_repeat1 = 81,
  aux_sym__macro_repeat1 = 82,
  aux_sym_pointer_repeat1 = 83,
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
  [anon_sym_call] = "mnemonic",
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
  [aux_sym_register_token7] = "register_token7",
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
  [sym_call_instruction] = "instruction",
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
  [anon_sym_call] = sym_mnemonic,
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
  [aux_sym_register_token7] = aux_sym_register_token7,
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
  [sym_call_instruction] = sym_instruction,
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
  [anon_sym_call] = {
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
  [aux_sym_register_token7] = {
    .visible = false,
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
  [sym_call_instruction] = {
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
  [24] = 24,
  [25] = 14,
  [26] = 18,
  [27] = 10,
  [28] = 17,
  [29] = 15,
  [30] = 13,
  [31] = 22,
  [32] = 16,
  [33] = 11,
  [34] = 21,
  [35] = 23,
  [36] = 19,
  [37] = 37,
  [38] = 12,
  [39] = 39,
  [40] = 39,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 45,
  [47] = 47,
  [48] = 48,
  [49] = 48,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 52,
  [54] = 54,
  [55] = 51,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 62,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 61,
  [69] = 69,
  [70] = 63,
  [71] = 71,
  [72] = 72,
  [73] = 69,
  [74] = 66,
  [75] = 75,
  [76] = 67,
  [77] = 23,
  [78] = 17,
  [79] = 79,
  [80] = 22,
  [81] = 11,
  [82] = 19,
  [83] = 18,
  [84] = 16,
  [85] = 17,
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
  [96] = 96,
  [97] = 97,
};

static inline bool sym_label_character_set_1(int32_t c) {
  return (c < '<'
    ? (c < '('
      ? (c < '&'
        ? c == ' '
        : c <= '&')
      : (c <= '*' || (c < '0'
        ? (c >= ',' && c <= '.')
        : c <= '9')))
    : (c <= '<' || (c < '_'
      ? (c < 'A'
        ? c == '>'
        : c <= 'Z')
      : (c <= '_' || (c >= 'a' && c <= 'z')))));
}

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
      if (eof) ADVANCE(131);
      if (lookahead == '!') ADVANCE(31);
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(134);
      if (lookahead == '$') ADVANCE(27);
      if (lookahead == '%') ADVANCE(159);
      if (lookahead == '\'') ADVANCE(24);
      if (lookahead == '*') ADVANCE(150);
      if (lookahead == '+') ADVANCE(151);
      if (lookahead == ',') ADVANCE(147);
      if (lookahead == '-') ADVANCE(154);
      if (lookahead == '.') ADVANCE(110);
      if (lookahead == '/') ADVANCE(155);
      if (lookahead == '0') ADVANCE(244);
      if (lookahead == '1') ADVANCE(245);
      if (lookahead == ':') ADVANCE(135);
      if (lookahead == '<') ADVANCE(32);
      if (lookahead == '=') ADVANCE(33);
      if (lookahead == '>') ADVANCE(34);
      if (lookahead == 'B') ADVANCE(50);
      if (lookahead == 'D') ADVANCE(48);
      if (lookahead == 'P') ADVANCE(46);
      if (lookahead == 'Q') ADVANCE(49);
      if (lookahead == 'W') ADVANCE(39);
      if (lookahead == '[') ADVANCE(190);
      if (lookahead == '\\') SKIP(112)
      if (lookahead == ']') ADVANCE(191);
      if (lookahead == '_') ADVANCE(100);
      if (lookahead == 'b') ADVANCE(95);
      if (lookahead == 'c') ADVANCE(51);
      if (lookahead == 'd') ADVANCE(83);
      if (lookahead == 'e') ADVANCE(84);
      if (lookahead == 'f') ADVANCE(85);
      if (lookahead == 'g') ADVANCE(86);
      if (lookahead == 'p') ADVANCE(88);
      if (lookahead == 'q') ADVANCE(90);
      if (lookahead == 's') ADVANCE(87);
      if (lookahead == 'w') ADVANCE(70);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(250);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'a') ADVANCE(108);
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
      if (lookahead == '\n') SKIP(18)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(18)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(19)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(19)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(21)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(21)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(20)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(20)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(96)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(96)
      if (lookahead == '\r') SKIP(9)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(22)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(22)
      if (lookahead == '\r') SKIP(11)
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(97)
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(97)
      if (lookahead == '\r') SKIP(13)
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(98)
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(98)
      if (lookahead == '\r') SKIP(15)
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(17);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(134);
      if (lookahead == '%') ADVANCE(159);
      if (lookahead == '.') ADVANCE(29);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == ':') ADVANCE(143);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == 'c') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(18)
      if (lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(17);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(134);
      if (lookahead == '%') ADVANCE(159);
      if (lookahead == '.') ADVANCE(29);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == 'c') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(18)
      if (lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          lookahead == ',' ||
          lookahead == '-' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(134);
      if (lookahead == '$') ADVANCE(294);
      if (lookahead == '%') ADVANCE(52);
      if (lookahead == '\'') ADVANCE(24);
      if (lookahead == '-') ADVANCE(293);
      if (lookahead == '.') ADVANCE(348);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '0') ADVANCE(258);
      if (lookahead == '1') ADVANCE(259);
      if (lookahead == 'B') ADVANCE(313);
      if (lookahead == 'D') ADVANCE(311);
      if (lookahead == 'Q') ADVANCE(312);
      if (lookahead == 'W') ADVANCE(302);
      if (lookahead == '[') ADVANCE(190);
      if (lookahead == '\\') SKIP(4)
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
          lookahead == 65279) SKIP(19)
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(134);
      if (lookahead == '$') ADVANCE(294);
      if (lookahead == '%') ADVANCE(52);
      if (lookahead == '\'') ADVANCE(24);
      if (lookahead == '-') ADVANCE(293);
      if (lookahead == '.') ADVANCE(348);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '0') ADVANCE(258);
      if (lookahead == '1') ADVANCE(259);
      if (lookahead == 'P') ADVANCE(310);
      if (lookahead == '[') ADVANCE(190);
      if (lookahead == '\\') SKIP(8)
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
          lookahead == 65279) SKIP(20)
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(134);
      if (lookahead == '$') ADVANCE(294);
      if (lookahead == '%') ADVANCE(52);
      if (lookahead == '\'') ADVANCE(24);
      if (lookahead == '-') ADVANCE(293);
      if (lookahead == '.') ADVANCE(348);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '0') ADVANCE(258);
      if (lookahead == '1') ADVANCE(259);
      if (lookahead == '[') ADVANCE(190);
      if (lookahead == '\\') SKIP(6)
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
          lookahead == 65279) SKIP(21)
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(134);
      if (lookahead == '$') ADVANCE(294);
      if (lookahead == '\'') ADVANCE(24);
      if (lookahead == '-') ADVANCE(293);
      if (lookahead == '.') ADVANCE(348);
      if (lookahead == '/') ADVANCE(25);
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
          lookahead == 65279) SKIP(22)
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(354);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(289);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '\'') ADVANCE(290);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == '/') ADVANCE(134);
      END_STATE();
    case 26:
      if (lookahead == '0') ADVANCE(274);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(276);
      END_STATE();
    case 27:
      if (lookahead == '0') ADVANCE(109);
      END_STATE();
    case 28:
      if (lookahead == '1') ADVANCE(101);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(226);
      if (lookahead == 'b') ADVANCE(73);
      if (lookahead == 'd') ADVANCE(63);
      if (lookahead == 'i') ADVANCE(77);
      if (lookahead == 's') ADVANCE(60);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(91);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(143);
      if (lookahead == ' ' ||
          lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          lookahead == ',' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>') ADVANCE(30);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(143);
      if (sym_label_character_set_1(lookahead)) ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == '=') ADVANCE(149);
      END_STATE();
    case 32:
      if (lookahead == '=') ADVANCE(156);
      END_STATE();
    case 33:
      if (lookahead == '=') ADVANCE(157);
      END_STATE();
    case 34:
      if (lookahead == '=') ADVANCE(158);
      END_STATE();
    case 35:
      if (lookahead == 'D') ADVANCE(176);
      END_STATE();
    case 36:
      if (lookahead == 'D') ADVANCE(172);
      END_STATE();
    case 37:
      if (lookahead == 'D') ADVANCE(174);
      END_STATE();
    case 38:
      if (lookahead == 'E') ADVANCE(170);
      END_STATE();
    case 39:
      if (lookahead == 'O') ADVANCE(43);
      END_STATE();
    case 40:
      if (lookahead == 'O') ADVANCE(44);
      END_STATE();
    case 41:
      if (lookahead == 'O') ADVANCE(45);
      END_STATE();
    case 42:
      if (lookahead == 'R') ADVANCE(186);
      END_STATE();
    case 43:
      if (lookahead == 'R') ADVANCE(35);
      END_STATE();
    case 44:
      if (lookahead == 'R') ADVANCE(36);
      END_STATE();
    case 45:
      if (lookahead == 'R') ADVANCE(37);
      END_STATE();
    case 46:
      if (lookahead == 'T') ADVANCE(42);
      END_STATE();
    case 47:
      if (lookahead == 'T') ADVANCE(38);
      END_STATE();
    case 48:
      if (lookahead == 'W') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      END_STATE();
    case 49:
      if (lookahead == 'W') ADVANCE(41);
      END_STATE();
    case 50:
      if (lookahead == 'Y') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(66);
      if (lookahead == 's') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      END_STATE();
    case 52:
      if (lookahead == 'b') ADVANCE(74);
      if (lookahead == 'd') ADVANCE(64);
      if (lookahead == 'e') ADVANCE(53);
      if (lookahead == 'r') ADVANCE(28);
      if (lookahead == 's') ADVANCE(60);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(92);
      if (lookahead == 'x' ||
          lookahead == 'y') ADVANCE(69);
      END_STATE();
    case 53:
      if (lookahead == 'b') ADVANCE(73);
      if (lookahead == 'd') ADVANCE(63);
      if (lookahead == 's') ADVANCE(60);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(91);
      END_STATE();
    case 54:
      if (lookahead == 'b') ADVANCE(76);
      if (lookahead == 'd') ADVANCE(65);
      if (lookahead == 's') ADVANCE(139);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'e' ||
          lookahead == 'f') ADVANCE(105);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(184);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(180);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(182);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 59:
      if (lookahead == 'h') ADVANCE(192);
      END_STATE();
    case 60:
      if (lookahead == 'i') ADVANCE(222);
      if (lookahead == 'p') ADVANCE(224);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(222);
      if (lookahead == 'p') ADVANCE(224);
      if (lookahead == 's') ADVANCE(142);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(222);
      if (lookahead == 's') ADVANCE(137);
      if (lookahead == 'x') ADVANCE(220);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(222);
      if (lookahead == 'x') ADVANCE(220);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(222);
      if (lookahead == 'x') ADVANCE(220);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(218);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(222);
      if (lookahead == 'x') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      END_STATE();
    case 66:
      if (lookahead == 'l') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      END_STATE();
    case 67:
      if (lookahead == 'l') ADVANCE(144);
      END_STATE();
    case 68:
      if (lookahead == 'm') ADVANCE(102);
      END_STATE();
    case 69:
      if (lookahead == 'm') ADVANCE(68);
      END_STATE();
    case 70:
      if (lookahead == 'o') ADVANCE(79);
      END_STATE();
    case 71:
      if (lookahead == 'o') ADVANCE(80);
      END_STATE();
    case 72:
      if (lookahead == 'o') ADVANCE(81);
      END_STATE();
    case 73:
      if (lookahead == 'p') ADVANCE(224);
      if (lookahead == 'x') ADVANCE(220);
      END_STATE();
    case 74:
      if (lookahead == 'p') ADVANCE(224);
      if (lookahead == 'x') ADVANCE(220);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(218);
      END_STATE();
    case 75:
      if (lookahead == 'p') ADVANCE(224);
      if (lookahead == 'x') ADVANCE(220);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      END_STATE();
    case 76:
      if (lookahead == 'p') ADVANCE(224);
      if (lookahead == 'x') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      END_STATE();
    case 77:
      if (lookahead == 'p') ADVANCE(230);
      END_STATE();
    case 78:
      if (lookahead == 'r') ADVANCE(188);
      END_STATE();
    case 79:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 80:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 81:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 82:
      if (lookahead == 's') ADVANCE(136);
      if (lookahead == 'x') ADVANCE(220);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      END_STATE();
    case 83:
      if (lookahead == 's') ADVANCE(137);
      if (lookahead == 'w') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      END_STATE();
    case 84:
      if (lookahead == 's') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      END_STATE();
    case 85:
      if (lookahead == 's') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      END_STATE();
    case 86:
      if (lookahead == 's') ADVANCE(141);
      END_STATE();
    case 87:
      if (lookahead == 's') ADVANCE(142);
      END_STATE();
    case 88:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 89:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 90:
      if (lookahead == 'w') ADVANCE(72);
      END_STATE();
    case 91:
      if (lookahead == 'x') ADVANCE(220);
      END_STATE();
    case 92:
      if (lookahead == 'x') ADVANCE(220);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(218);
      END_STATE();
    case 93:
      if (lookahead == 'x') ADVANCE(220);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      END_STATE();
    case 94:
      if (lookahead == 'x') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      END_STATE();
    case 95:
      if (lookahead == 'y') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      END_STATE();
    case 96:
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(134);
      if (lookahead == '$') ADVANCE(27);
      if (lookahead == '%') ADVANCE(52);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '0') ADVANCE(272);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == 'a') ADVANCE(93);
      if (lookahead == 'b') ADVANCE(75);
      if (lookahead == 'c') ADVANCE(82);
      if (lookahead == 'd') ADVANCE(62);
      if (lookahead == 'e') ADVANCE(54);
      if (lookahead == 'f') ADVANCE(85);
      if (lookahead == 'g') ADVANCE(86);
      if (lookahead == 'r') ADVANCE(28);
      if (lookahead == 's') ADVANCE(61);
      if (lookahead == 'x' ||
          lookahead == 'y') ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(96)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(273);
      END_STATE();
    case 97:
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(134);
      if (lookahead == '*') ADVANCE(150);
      if (lookahead == '+') ADVANCE(151);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '\\') SKIP(14)
      if (lookahead == ']') ADVANCE(191);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(97)
      END_STATE();
    case 98:
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(134);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '\\') SKIP(16)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(98)
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
    case 99:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      END_STATE();
    case 100:
      if (lookahead == 'b' ||
          lookahead == 'y') ADVANCE(198);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(100);
      END_STATE();
    case 101:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(226);
      END_STATE();
    case 102:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(228);
      END_STATE();
    case 103:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      END_STATE();
    case 104:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(233);
      END_STATE();
    case 105:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      END_STATE();
    case 106:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(196);
      END_STATE();
    case 107:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(194);
      END_STATE();
    case 108:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      END_STATE();
    case 109:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(107);
      END_STATE();
    case 110:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 111:
      if (eof) ADVANCE(131);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 112:
      if (eof) ADVANCE(131);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(111)
      END_STATE();
    case 113:
      if (eof) ADVANCE(131);
      if (lookahead == '\n') SKIP(130)
      END_STATE();
    case 114:
      if (eof) ADVANCE(131);
      if (lookahead == '\n') SKIP(130)
      if (lookahead == '\r') SKIP(113)
      END_STATE();
    case 115:
      if (eof) ADVANCE(131);
      if (lookahead == '\n') SKIP(117)
      END_STATE();
    case 116:
      if (eof) ADVANCE(131);
      if (lookahead == '\n') SKIP(117)
      if (lookahead == '\r') SKIP(115)
      END_STATE();
    case 117:
      if (eof) ADVANCE(131);
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == '!') ADVANCE(31);
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(134);
      if (lookahead == '$') ADVANCE(294);
      if (lookahead == '%') ADVANCE(52);
      if (lookahead == '\'') ADVANCE(24);
      if (lookahead == '*') ADVANCE(150);
      if (lookahead == '+') ADVANCE(151);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '.') ADVANCE(348);
      if (lookahead == '/') ADVANCE(155);
      if (lookahead == '0') ADVANCE(258);
      if (lookahead == '1') ADVANCE(259);
      if (lookahead == '<') ADVANCE(296);
      if (lookahead == '=') ADVANCE(33);
      if (lookahead == '>') ADVANCE(297);
      if (lookahead == 'B') ADVANCE(313);
      if (lookahead == 'D') ADVANCE(311);
      if (lookahead == 'Q') ADVANCE(312);
      if (lookahead == 'W') ADVANCE(302);
      if (lookahead == '[') ADVANCE(190);
      if (lookahead == '\\') SKIP(116)
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
          lookahead == 65279) SKIP(117)
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 118:
      if (eof) ADVANCE(131);
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(134);
      if (lookahead == '$') ADVANCE(294);
      if (lookahead == '%') ADVANCE(52);
      if (lookahead == '\'') ADVANCE(24);
      if (lookahead == ',') ADVANCE(147);
      if (lookahead == '-') ADVANCE(293);
      if (lookahead == '.') ADVANCE(348);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '0') ADVANCE(258);
      if (lookahead == '1') ADVANCE(259);
      if (lookahead == 'B') ADVANCE(313);
      if (lookahead == 'D') ADVANCE(311);
      if (lookahead == 'Q') ADVANCE(312);
      if (lookahead == 'W') ADVANCE(302);
      if (lookahead == '[') ADVANCE(190);
      if (lookahead == '\\') SKIP(122)
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
          lookahead == 65279) SKIP(118)
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 119:
      if (eof) ADVANCE(131);
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(134);
      if (lookahead == '$') ADVANCE(294);
      if (lookahead == '\'') ADVANCE(24);
      if (lookahead == '-') ADVANCE(293);
      if (lookahead == '.') ADVANCE(348);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '0') ADVANCE(258);
      if (lookahead == '1') ADVANCE(259);
      if (lookahead == '\\') SKIP(124)
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
          lookahead == 65279) SKIP(119)
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(354);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 120:
      if (eof) ADVANCE(131);
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(134);
      if (lookahead == '.') ADVANCE(110);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '\\') SKIP(126)
      if (lookahead == 'c') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(120)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      END_STATE();
    case 121:
      if (eof) ADVANCE(131);
      if (lookahead == '\n') SKIP(118)
      END_STATE();
    case 122:
      if (eof) ADVANCE(131);
      if (lookahead == '\n') SKIP(118)
      if (lookahead == '\r') SKIP(121)
      END_STATE();
    case 123:
      if (eof) ADVANCE(131);
      if (lookahead == '\n') SKIP(119)
      END_STATE();
    case 124:
      if (eof) ADVANCE(131);
      if (lookahead == '\n') SKIP(119)
      if (lookahead == '\r') SKIP(123)
      END_STATE();
    case 125:
      if (eof) ADVANCE(131);
      if (lookahead == '\n') SKIP(120)
      END_STATE();
    case 126:
      if (eof) ADVANCE(131);
      if (lookahead == '\n') SKIP(120)
      if (lookahead == '\r') SKIP(125)
      END_STATE();
    case 127:
      if (eof) ADVANCE(131);
      if (lookahead == '\n') SKIP(129)
      END_STATE();
    case 128:
      if (eof) ADVANCE(131);
      if (lookahead == '\n') SKIP(129)
      if (lookahead == '\r') SKIP(127)
      END_STATE();
    case 129:
      if (eof) ADVANCE(131);
      if (lookahead == '\n') ADVANCE(133);
      if (lookahead == ' ') ADVANCE(148);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(134);
      if (lookahead == ',') ADVANCE(147);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '\\') SKIP(128)
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(129)
      END_STATE();
    case 130:
      if (eof) ADVANCE(131);
      if (lookahead == ' ') ADVANCE(17);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(134);
      if (lookahead == '%') ADVANCE(159);
      if (lookahead == '.') ADVANCE(29);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '\\') SKIP(114)
      if (lookahead == 'c') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(130)
      if (lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          lookahead == ',' ||
          lookahead == '-' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(133);
      if (lookahead == ' ') ADVANCE(148);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_cs);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_ds);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_es);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_es);
      if (lookahead == 'i') ADVANCE(222);
      if (lookahead == 'p') ADVANCE(224);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_fs);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_gs);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_ss);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == ':') ADVANCE(143);
      if (sym_label_character_set_1(lookahead)) ADVANCE(30);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_call);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_call);
      if (lookahead == ':') ADVANCE(143);
      if (lookahead == ' ' ||
          lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          (',' <= lookahead && lookahead <= '.') ||
          lookahead == '<' ||
          lookahead == '>') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_call);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(133);
      if (lookahead == ' ') ADVANCE(148);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 153:
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
    case 154:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '0') ADVANCE(251);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(255);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(134);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_nasm_macro_token1);
      if (lookahead == '%') ADVANCE(159);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_gcc_mnemonic);
      if (lookahead == ':') ADVANCE(143);
      if (lookahead == ' ' ||
          lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          lookahead == ',' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>') ADVANCE(30);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
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
      if (lookahead == ':') ADVANCE(143);
      if (lookahead == 'a') ADVANCE(164);
      if (lookahead == ' ' ||
          lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          (',' <= lookahead && lookahead <= '.') ||
          lookahead == '<' ||
          lookahead == '>') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_mnemonic);
      if (lookahead == ':') ADVANCE(143);
      if (lookahead == 'l') ADVANCE(145);
      if (lookahead == ' ' ||
          lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          (',' <= lookahead && lookahead <= '.') ||
          lookahead == '<' ||
          lookahead == '>') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_mnemonic);
      if (lookahead == ':') ADVANCE(143);
      if (lookahead == 'l') ADVANCE(163);
      if (lookahead == ' ' ||
          lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          (',' <= lookahead && lookahead <= '.') ||
          lookahead == '<' ||
          lookahead == '>') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_mnemonic);
      if (lookahead == ':') ADVANCE(143);
      if (lookahead == ' ' ||
          lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          (',' <= lookahead && lookahead <= '.') ||
          lookahead == '<' ||
          lookahead == '>') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_mnemonic);
      if (lookahead == 'a') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_mnemonic);
      if (lookahead == 'l') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_mnemonic);
      if (lookahead == 'l') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_mnemonic);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_BYTE);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_BYTE);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(356);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_DWORD);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_DWORD);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(356);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_QWORD);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_QWORD);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(356);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_WORD);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_WORD);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(356);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_byte);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_byte);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(356);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_dword);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_dword);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(356);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_qword);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_qword);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(356);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_word);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_word);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(356);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_PTR);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_PTR);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(356);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_ptr);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_ptr);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(356);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_hexadecimal_token1);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_hexadecimal_token1);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(356);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_hexadecimal_token2);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_hexadecimal_token2);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(356);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_hexadecimal_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(196);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_hexadecimal_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(197);
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
    case 198:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (lookahead == '_') ADVANCE(210);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(208);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (lookahead == '_') ADVANCE(211);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(209);
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
    case 201:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (lookahead == 'h') ADVANCE(192);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (lookahead == 'h') ADVANCE(193);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(356);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(210);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(211);
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
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      END_STATE();
    case 206:
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
    case 207:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(356);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_binary_token2);
      if (lookahead == 'h') ADVANCE(192);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(210);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_binary_token2);
      if (lookahead == 'h') ADVANCE(193);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(211);
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
    case 210:
      ACCEPT_TOKEN(aux_sym_binary_token2);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(210);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_binary_token2);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(211);
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
    case 212:
      ACCEPT_TOKEN(aux_sym_octal_token1);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_octal_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(216);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_octal_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(217);
      if (sym__identifier_character_set_2(lookahead)) ADVANCE(356);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_octal_token1);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(356);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_octal_token2);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(216);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_octal_token2);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(217);
      if (sym__identifier_character_set_2(lookahead)) ADVANCE(356);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_register_token1);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_register_token1);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(356);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_register_token2);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_register_token2);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(356);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_register_token3);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_register_token3);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(356);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_register_token4);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_register_token4);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(356);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_register_token5);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_register_token5);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(356);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_register_token6);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_register_token6);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(356);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_register_token7);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_register_token7);
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
      if (lookahead == 'e') ADVANCE(99);
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
      if (lookahead == '_') ADVANCE(100);
      if (lookahead == 'b') ADVANCE(199);
      if (lookahead == 'd') ADVANCE(283);
      if (lookahead == 'y') ADVANCE(203);
      if (lookahead == 'h' ||
          lookahead == 'x') ADVANCE(106);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(213);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(246);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(257);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(256);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(239);
      if (lookahead == '_') ADVANCE(100);
      if (lookahead == 'b') ADVANCE(205);
      if (lookahead == 'd') ADVANCE(286);
      if (lookahead == 'y') ADVANCE(198);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(212);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(246);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(257);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(256);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(239);
      if (lookahead == '_') ADVANCE(100);
      if (lookahead == 'b') ADVANCE(201);
      if (lookahead == 'd') ADVANCE(278);
      if (lookahead == 'y') ADVANCE(198);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(212);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(247);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(253);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(252);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(239);
      if (lookahead == '_') ADVANCE(100);
      if (lookahead == 'd') ADVANCE(243);
      if (lookahead == 'h') ADVANCE(192);
      if (lookahead == 'b' ||
          lookahead == 'y') ADVANCE(198);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(212);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(248);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(255);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(254);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(239);
      if (lookahead == '_') ADVANCE(100);
      if (lookahead == 'd') ADVANCE(243);
      if (lookahead == 'b' ||
          lookahead == 'y') ADVANCE(198);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(212);
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
          lookahead == 'q') ADVANCE(212);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(256);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(239);
      if (lookahead == 'd') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
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
      if (lookahead == 'h') ADVANCE(192);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(212);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(254);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(239);
      if (lookahead == 'd') ADVANCE(243);
      if (lookahead == 'h') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(255);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(239);
      if (lookahead == 'd') ADVANCE(243);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(212);
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
          lookahead == 'q') ADVANCE(212);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(252);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(239);
      if (lookahead == 'd') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(240);
      if (lookahead == '_') ADVANCE(345);
      if (lookahead == 'b') ADVANCE(200);
      if (lookahead == 'd') ADVANCE(285);
      if (lookahead == 'y') ADVANCE(204);
      if (lookahead == 'h' ||
          lookahead == 'x') ADVANCE(352);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(214);
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
      if (lookahead == 'b') ADVANCE(206);
      if (lookahead == 'd') ADVANCE(287);
      if (lookahead == 'y') ADVANCE(207);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(215);
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
      if (lookahead == 'b') ADVANCE(202);
      if (lookahead == 'd') ADVANCE(281);
      if (lookahead == 'y') ADVANCE(207);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(215);
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
      if (lookahead == 'h') ADVANCE(193);
      if (lookahead == 'b' ||
          lookahead == 'y') ADVANCE(207);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(215);
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
          lookahead == 'y') ADVANCE(207);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(215);
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
          lookahead == 'q') ADVANCE(215);
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
      if (lookahead == 'h') ADVANCE(193);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(215);
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
      if (lookahead == 'h') ADVANCE(193);
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
          lookahead == 'q') ADVANCE(215);
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
          lookahead == 'q') ADVANCE(215);
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
          lookahead == 'x') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(277);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'd') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(277);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'd') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'd') ADVANCE(243);
      if (lookahead == 'h') ADVANCE(192);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'h') ADVANCE(192);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'h') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(282);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'h') ADVANCE(193);
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
      if (lookahead == 'h') ADVANCE(193);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
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
      if (lookahead == '+') ADVANCE(103);
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
      if (lookahead == '+') ADVANCE(104);
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
          lookahead == '9') ADVANCE(227);
      if (lookahead == 'b') ADVANCE(333);
      if (lookahead == 'd') ADVANCE(324);
      if (lookahead == 'i') ADVANCE(334);
      if (lookahead == 's') ADVANCE(320);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(344);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(356);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '=') ADVANCE(156);
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
      if (lookahead == '=') ADVANCE(158);
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
      if (lookahead == 'D') ADVANCE(177);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(356);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(173);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(356);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(175);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(356);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(171);
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
      if (lookahead == 'R') ADVANCE(187);
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
      if (lookahead == 'd') ADVANCE(185);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(356);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(181);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(356);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(183);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(356);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(179);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(356);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(193);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(356);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(223);
      if (lookahead == 'p') ADVANCE(225);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(356);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(223);
      if (lookahead == 'w') ADVANCE(328);
      if (lookahead == 'x') ADVANCE(221);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(219);
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
      if (lookahead == 'i') ADVANCE(223);
      if (lookahead == 'x') ADVANCE(221);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(219);
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
      if (lookahead == 'i') ADVANCE(223);
      if (lookahead == 'x') ADVANCE(221);
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
      if (lookahead == 'i') ADVANCE(223);
      if (lookahead == 'x') ADVANCE(221);
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
      if (lookahead == 'p') ADVANCE(225);
      if (lookahead == 'x') ADVANCE(221);
      if (lookahead == 'y') ADVANCE(339);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(219);
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
      if (lookahead == 'p') ADVANCE(225);
      if (lookahead == 'x') ADVANCE(221);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(219);
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
      if (lookahead == 'p') ADVANCE(225);
      if (lookahead == 'x') ADVANCE(221);
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
      if (lookahead == 'p') ADVANCE(225);
      if (lookahead == 'x') ADVANCE(221);
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
      if (lookahead == 'r') ADVANCE(189);
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
      if (lookahead == 'x') ADVANCE(221);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(219);
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
      if (lookahead == 'x') ADVANCE(221);
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
      if (lookahead == 'x') ADVANCE(221);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(356);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b' ||
          lookahead == 'y') ADVANCE(207);
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
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(227);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(356);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(229);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(197);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(195);
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
  [1] = {.lex_state = 130},
  [2] = {.lex_state = 117},
  [3] = {.lex_state = 117},
  [4] = {.lex_state = 117},
  [5] = {.lex_state = 118},
  [6] = {.lex_state = 118},
  [7] = {.lex_state = 118},
  [8] = {.lex_state = 19},
  [9] = {.lex_state = 19},
  [10] = {.lex_state = 117},
  [11] = {.lex_state = 117},
  [12] = {.lex_state = 117},
  [13] = {.lex_state = 117},
  [14] = {.lex_state = 117},
  [15] = {.lex_state = 117},
  [16] = {.lex_state = 117},
  [17] = {.lex_state = 117},
  [18] = {.lex_state = 117},
  [19] = {.lex_state = 117},
  [20] = {.lex_state = 117},
  [21] = {.lex_state = 117},
  [22] = {.lex_state = 117},
  [23] = {.lex_state = 117},
  [24] = {.lex_state = 117},
  [25] = {.lex_state = 118},
  [26] = {.lex_state = 118},
  [27] = {.lex_state = 118},
  [28] = {.lex_state = 118},
  [29] = {.lex_state = 118},
  [30] = {.lex_state = 118},
  [31] = {.lex_state = 118},
  [32] = {.lex_state = 118},
  [33] = {.lex_state = 118},
  [34] = {.lex_state = 118},
  [35] = {.lex_state = 118},
  [36] = {.lex_state = 118},
  [37] = {.lex_state = 118},
  [38] = {.lex_state = 118},
  [39] = {.lex_state = 21},
  [40] = {.lex_state = 21},
  [41] = {.lex_state = 20},
  [42] = {.lex_state = 119},
  [43] = {.lex_state = 119},
  [44] = {.lex_state = 119},
  [45] = {.lex_state = 96},
  [46] = {.lex_state = 96},
  [47] = {.lex_state = 21},
  [48] = {.lex_state = 96},
  [49] = {.lex_state = 96},
  [50] = {.lex_state = 22},
  [51] = {.lex_state = 96},
  [52] = {.lex_state = 96},
  [53] = {.lex_state = 96},
  [54] = {.lex_state = 130},
  [55] = {.lex_state = 96},
  [56] = {.lex_state = 130},
  [57] = {.lex_state = 130},
  [58] = {.lex_state = 96},
  [59] = {.lex_state = 120},
  [60] = {.lex_state = 96},
  [61] = {.lex_state = 97},
  [62] = {.lex_state = 97},
  [63] = {.lex_state = 97},
  [64] = {.lex_state = 97},
  [65] = {.lex_state = 129},
  [66] = {.lex_state = 97},
  [67] = {.lex_state = 97},
  [68] = {.lex_state = 97},
  [69] = {.lex_state = 97},
  [70] = {.lex_state = 97},
  [71] = {.lex_state = 97},
  [72] = {.lex_state = 129},
  [73] = {.lex_state = 97},
  [74] = {.lex_state = 97},
  [75] = {.lex_state = 129},
  [76] = {.lex_state = 97},
  [77] = {.lex_state = 129},
  [78] = {.lex_state = 97},
  [79] = {.lex_state = 129},
  [80] = {.lex_state = 129},
  [81] = {.lex_state = 129},
  [82] = {.lex_state = 97},
  [83] = {.lex_state = 129},
  [84] = {.lex_state = 129},
  [85] = {.lex_state = 129},
  [86] = {.lex_state = 97},
  [87] = {.lex_state = 117},
  [88] = {.lex_state = 117},
  [89] = {.lex_state = 117},
  [90] = {.lex_state = 117},
  [91] = {.lex_state = 117},
  [92] = {.lex_state = 117},
  [93] = {.lex_state = 117},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 98},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
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
    [anon_sym_call] = ACTIONS(1),
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
    [aux_sym_float_token2] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [aux_sym_string_token1] = ACTIONS(1),
    [aux_sym_string_token2] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(97),
    [sym__statement] = STATE(89),
    [sym_call_instruction] = STATE(89),
    [sym_instruction] = STATE(89),
    [sym__normal_instruction] = STATE(93),
    [sym__gcc_pseudo_op] = STATE(93),
    [sym__macro] = STATE(89),
    [sym_nasm_macro] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [sym_label] = ACTIONS(9),
    [anon_sym_call] = ACTIONS(11),
    [aux_sym_nasm_macro_token1] = ACTIONS(13),
    [sym_gcc_mnemonic] = ACTIONS(15),
    [sym_mnemonic] = ACTIONS(17),
  },
  [2] = {
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
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_LF] = ACTIONS(19),
    [sym_comment] = ACTIONS(21),
    [anon_sym_BANG_EQ] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_LT_EQ] = ACTIONS(23),
    [anon_sym_EQ_EQ] = ACTIONS(23),
    [anon_sym_GT_EQ] = ACTIONS(23),
    [anon_sym_BYTE] = ACTIONS(25),
    [anon_sym_DWORD] = ACTIONS(25),
    [anon_sym_QWORD] = ACTIONS(25),
    [anon_sym_WORD] = ACTIONS(25),
    [anon_sym_byte] = ACTIONS(25),
    [anon_sym_dword] = ACTIONS(25),
    [anon_sym_qword] = ACTIONS(25),
    [anon_sym_word] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [aux_sym_hexadecimal_token1] = ACTIONS(29),
    [aux_sym_hexadecimal_token2] = ACTIONS(29),
    [aux_sym_hexadecimal_token3] = ACTIONS(29),
    [aux_sym_binary_token1] = ACTIONS(31),
    [aux_sym_binary_token2] = ACTIONS(31),
    [aux_sym_octal_token1] = ACTIONS(33),
    [aux_sym_octal_token2] = ACTIONS(33),
    [aux_sym_register_token1] = ACTIONS(35),
    [aux_sym_register_token2] = ACTIONS(35),
    [aux_sym_register_token3] = ACTIONS(35),
    [aux_sym_register_token4] = ACTIONS(35),
    [aux_sym_register_token5] = ACTIONS(35),
    [aux_sym_register_token6] = ACTIONS(35),
    [aux_sym_register_token7] = ACTIONS(35),
    [aux_sym_float_token1] = ACTIONS(37),
    [aux_sym_float_token2] = ACTIONS(37),
    [sym_integer] = ACTIONS(39),
    [aux_sym_string_token1] = ACTIONS(41),
    [aux_sym_string_token2] = ACTIONS(41),
    [sym__identifier] = ACTIONS(43),
  },
  [3] = {
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
    [ts_builtin_sym_end] = ACTIONS(45),
    [anon_sym_LF] = ACTIONS(45),
    [sym_comment] = ACTIONS(21),
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
    [aux_sym_register_token7] = ACTIONS(65),
    [aux_sym_float_token1] = ACTIONS(68),
    [aux_sym_float_token2] = ACTIONS(68),
    [sym_integer] = ACTIONS(71),
    [aux_sym_string_token1] = ACTIONS(74),
    [aux_sym_string_token2] = ACTIONS(74),
    [sym__identifier] = ACTIONS(77),
  },
  [4] = {
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
    [ts_builtin_sym_end] = ACTIONS(80),
    [anon_sym_LF] = ACTIONS(80),
    [sym_comment] = ACTIONS(21),
    [anon_sym_BANG_EQ] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_LT_EQ] = ACTIONS(23),
    [anon_sym_EQ_EQ] = ACTIONS(23),
    [anon_sym_GT_EQ] = ACTIONS(23),
    [anon_sym_BYTE] = ACTIONS(25),
    [anon_sym_DWORD] = ACTIONS(25),
    [anon_sym_QWORD] = ACTIONS(25),
    [anon_sym_WORD] = ACTIONS(25),
    [anon_sym_byte] = ACTIONS(25),
    [anon_sym_dword] = ACTIONS(25),
    [anon_sym_qword] = ACTIONS(25),
    [anon_sym_word] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [aux_sym_hexadecimal_token1] = ACTIONS(29),
    [aux_sym_hexadecimal_token2] = ACTIONS(29),
    [aux_sym_hexadecimal_token3] = ACTIONS(29),
    [aux_sym_binary_token1] = ACTIONS(31),
    [aux_sym_binary_token2] = ACTIONS(31),
    [aux_sym_octal_token1] = ACTIONS(33),
    [aux_sym_octal_token2] = ACTIONS(33),
    [aux_sym_register_token1] = ACTIONS(35),
    [aux_sym_register_token2] = ACTIONS(35),
    [aux_sym_register_token3] = ACTIONS(35),
    [aux_sym_register_token4] = ACTIONS(35),
    [aux_sym_register_token5] = ACTIONS(35),
    [aux_sym_register_token6] = ACTIONS(35),
    [aux_sym_register_token7] = ACTIONS(35),
    [aux_sym_float_token1] = ACTIONS(37),
    [aux_sym_float_token2] = ACTIONS(37),
    [sym_integer] = ACTIONS(39),
    [aux_sym_string_token1] = ACTIONS(41),
    [aux_sym_string_token2] = ACTIONS(41),
    [sym__identifier] = ACTIONS(43),
  },
  [5] = {
    [sym__operand] = STATE(5),
    [sym_width] = STATE(40),
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
    [ts_builtin_sym_end] = ACTIONS(82),
    [anon_sym_LF] = ACTIONS(82),
    [sym_comment] = ACTIONS(21),
    [anon_sym_COMMA] = ACTIONS(84),
    [anon_sym_BYTE] = ACTIONS(87),
    [anon_sym_DWORD] = ACTIONS(87),
    [anon_sym_QWORD] = ACTIONS(87),
    [anon_sym_WORD] = ACTIONS(87),
    [anon_sym_byte] = ACTIONS(87),
    [anon_sym_dword] = ACTIONS(87),
    [anon_sym_qword] = ACTIONS(87),
    [anon_sym_word] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(90),
    [aux_sym_hexadecimal_token1] = ACTIONS(93),
    [aux_sym_hexadecimal_token2] = ACTIONS(93),
    [aux_sym_hexadecimal_token3] = ACTIONS(93),
    [aux_sym_binary_token1] = ACTIONS(96),
    [aux_sym_binary_token2] = ACTIONS(96),
    [aux_sym_octal_token1] = ACTIONS(99),
    [aux_sym_octal_token2] = ACTIONS(99),
    [aux_sym_register_token1] = ACTIONS(102),
    [aux_sym_register_token2] = ACTIONS(102),
    [aux_sym_register_token3] = ACTIONS(102),
    [aux_sym_register_token4] = ACTIONS(102),
    [aux_sym_register_token5] = ACTIONS(102),
    [aux_sym_register_token6] = ACTIONS(102),
    [aux_sym_register_token7] = ACTIONS(102),
    [aux_sym_float_token1] = ACTIONS(105),
    [aux_sym_float_token2] = ACTIONS(105),
    [sym_integer] = ACTIONS(108),
    [aux_sym_string_token1] = ACTIONS(111),
    [aux_sym_string_token2] = ACTIONS(111),
    [sym__identifier] = ACTIONS(114),
  },
  [6] = {
    [sym__operand] = STATE(7),
    [sym_width] = STATE(40),
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
    [ts_builtin_sym_end] = ACTIONS(117),
    [anon_sym_LF] = ACTIONS(117),
    [sym_comment] = ACTIONS(21),
    [anon_sym_COMMA] = ACTIONS(119),
    [anon_sym_BYTE] = ACTIONS(25),
    [anon_sym_DWORD] = ACTIONS(25),
    [anon_sym_QWORD] = ACTIONS(25),
    [anon_sym_WORD] = ACTIONS(25),
    [anon_sym_byte] = ACTIONS(25),
    [anon_sym_dword] = ACTIONS(25),
    [anon_sym_qword] = ACTIONS(25),
    [anon_sym_word] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(121),
    [aux_sym_hexadecimal_token1] = ACTIONS(123),
    [aux_sym_hexadecimal_token2] = ACTIONS(123),
    [aux_sym_hexadecimal_token3] = ACTIONS(123),
    [aux_sym_binary_token1] = ACTIONS(125),
    [aux_sym_binary_token2] = ACTIONS(125),
    [aux_sym_octal_token1] = ACTIONS(127),
    [aux_sym_octal_token2] = ACTIONS(127),
    [aux_sym_register_token1] = ACTIONS(129),
    [aux_sym_register_token2] = ACTIONS(129),
    [aux_sym_register_token3] = ACTIONS(129),
    [aux_sym_register_token4] = ACTIONS(129),
    [aux_sym_register_token5] = ACTIONS(129),
    [aux_sym_register_token6] = ACTIONS(129),
    [aux_sym_register_token7] = ACTIONS(129),
    [aux_sym_float_token1] = ACTIONS(131),
    [aux_sym_float_token2] = ACTIONS(131),
    [sym_integer] = ACTIONS(133),
    [aux_sym_string_token1] = ACTIONS(135),
    [aux_sym_string_token2] = ACTIONS(135),
    [sym__identifier] = ACTIONS(137),
  },
  [7] = {
    [sym__operand] = STATE(5),
    [sym_width] = STATE(40),
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
    [ts_builtin_sym_end] = ACTIONS(139),
    [anon_sym_LF] = ACTIONS(139),
    [sym_comment] = ACTIONS(21),
    [anon_sym_COMMA] = ACTIONS(119),
    [anon_sym_BYTE] = ACTIONS(25),
    [anon_sym_DWORD] = ACTIONS(25),
    [anon_sym_QWORD] = ACTIONS(25),
    [anon_sym_WORD] = ACTIONS(25),
    [anon_sym_byte] = ACTIONS(25),
    [anon_sym_dword] = ACTIONS(25),
    [anon_sym_qword] = ACTIONS(25),
    [anon_sym_word] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(121),
    [aux_sym_hexadecimal_token1] = ACTIONS(123),
    [aux_sym_hexadecimal_token2] = ACTIONS(123),
    [aux_sym_hexadecimal_token3] = ACTIONS(123),
    [aux_sym_binary_token1] = ACTIONS(125),
    [aux_sym_binary_token2] = ACTIONS(125),
    [aux_sym_octal_token1] = ACTIONS(127),
    [aux_sym_octal_token2] = ACTIONS(127),
    [aux_sym_register_token1] = ACTIONS(129),
    [aux_sym_register_token2] = ACTIONS(129),
    [aux_sym_register_token3] = ACTIONS(129),
    [aux_sym_register_token4] = ACTIONS(129),
    [aux_sym_register_token5] = ACTIONS(129),
    [aux_sym_register_token6] = ACTIONS(129),
    [aux_sym_register_token7] = ACTIONS(129),
    [aux_sym_float_token1] = ACTIONS(131),
    [aux_sym_float_token2] = ACTIONS(131),
    [sym_integer] = ACTIONS(133),
    [aux_sym_string_token1] = ACTIONS(135),
    [aux_sym_string_token2] = ACTIONS(135),
    [sym__identifier] = ACTIONS(137),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      sym_integer,
    ACTIONS(137), 1,
      sym__identifier,
    ACTIONS(141), 1,
      anon_sym_LBRACK,
    STATE(40), 1,
      sym_width,
    ACTIONS(125), 2,
      aux_sym_binary_token1,
      aux_sym_binary_token2,
    ACTIONS(127), 2,
      aux_sym_octal_token1,
      aux_sym_octal_token2,
    ACTIONS(131), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(143), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(123), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    ACTIONS(129), 7,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      aux_sym_register_token7,
    ACTIONS(25), 8,
      anon_sym_BYTE,
      anon_sym_DWORD,
      anon_sym_QWORD,
      anon_sym_WORD,
      anon_sym_byte,
      anon_sym_dword,
      anon_sym_qword,
      anon_sym_word,
    STATE(91), 10,
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
  [68] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      sym_integer,
    ACTIONS(137), 1,
      sym__identifier,
    ACTIONS(141), 1,
      anon_sym_LBRACK,
    STATE(40), 1,
      sym_width,
    ACTIONS(125), 2,
      aux_sym_binary_token1,
      aux_sym_binary_token2,
    ACTIONS(127), 2,
      aux_sym_octal_token1,
      aux_sym_octal_token2,
    ACTIONS(131), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(143), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(123), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    ACTIONS(129), 7,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      aux_sym_register_token7,
    ACTIONS(25), 8,
      anon_sym_BYTE,
      anon_sym_DWORD,
      anon_sym_QWORD,
      anon_sym_WORD,
      anon_sym_byte,
      anon_sym_dword,
      anon_sym_qword,
      anon_sym_word,
    STATE(37), 10,
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
  [136] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(145), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(147), 37,
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
      aux_sym_register_token7,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_integer,
      aux_sym_string_token1,
      aux_sym_string_token2,
      sym__identifier,
  [183] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(149), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(151), 37,
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
      aux_sym_register_token7,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_integer,
      aux_sym_string_token1,
      aux_sym_string_token2,
      sym__identifier,
  [230] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(153), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(155), 37,
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
      aux_sym_register_token7,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_integer,
      aux_sym_string_token1,
      aux_sym_string_token2,
      sym__identifier,
  [277] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(157), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(159), 37,
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
      aux_sym_register_token7,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_integer,
      aux_sym_string_token1,
      aux_sym_string_token2,
      sym__identifier,
  [324] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(161), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(163), 37,
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
      aux_sym_register_token7,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_integer,
      aux_sym_string_token1,
      aux_sym_string_token2,
      sym__identifier,
  [371] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(165), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(167), 37,
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
      aux_sym_register_token7,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_integer,
      aux_sym_string_token1,
      aux_sym_string_token2,
      sym__identifier,
  [418] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(169), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(171), 37,
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
      aux_sym_register_token7,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_integer,
      aux_sym_string_token1,
      aux_sym_string_token2,
      sym__identifier,
  [465] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(173), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(175), 37,
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
      aux_sym_register_token7,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_integer,
      aux_sym_string_token1,
      aux_sym_string_token2,
      sym__identifier,
  [512] = 3,
    ACTIONS(21), 1,
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
      aux_sym_register_token7,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_integer,
      aux_sym_string_token1,
      aux_sym_string_token2,
      sym__identifier,
  [559] = 3,
    ACTIONS(21), 1,
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
      aux_sym_register_token7,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_integer,
      aux_sym_string_token1,
      aux_sym_string_token2,
      sym__identifier,
  [606] = 3,
    ACTIONS(21), 1,
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
      aux_sym_register_token7,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_integer,
      aux_sym_string_token1,
      aux_sym_string_token2,
      sym__identifier,
  [653] = 4,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(189), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(191), 36,
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
      aux_sym_register_token7,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_integer,
      aux_sym_string_token1,
      aux_sym_string_token2,
      sym__identifier,
  [702] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(195), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(197), 37,
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
      aux_sym_register_token7,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_integer,
      aux_sym_string_token1,
      aux_sym_string_token2,
      sym__identifier,
  [749] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(199), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(201), 37,
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
      aux_sym_register_token7,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_integer,
      aux_sym_string_token1,
      aux_sym_string_token2,
      sym__identifier,
  [796] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(203), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(205), 37,
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
      aux_sym_register_token7,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_integer,
      aux_sym_string_token1,
      aux_sym_string_token2,
      sym__identifier,
  [843] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(161), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(163), 30,
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
      aux_sym_register_token7,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_integer,
      aux_sym_string_token1,
      aux_sym_string_token2,
      sym__identifier,
  [883] = 3,
    ACTIONS(21), 1,
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
      aux_sym_register_token7,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_integer,
      aux_sym_string_token1,
      aux_sym_string_token2,
      sym__identifier,
  [923] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(145), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(147), 30,
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
      aux_sym_register_token7,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_integer,
      aux_sym_string_token1,
      aux_sym_string_token2,
      sym__identifier,
  [963] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(173), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(175), 30,
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
      aux_sym_register_token7,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_integer,
      aux_sym_string_token1,
      aux_sym_string_token2,
      sym__identifier,
  [1003] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(165), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(167), 30,
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
      aux_sym_register_token7,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_integer,
      aux_sym_string_token1,
      aux_sym_string_token2,
      sym__identifier,
  [1043] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(157), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(159), 30,
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
      aux_sym_register_token7,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_integer,
      aux_sym_string_token1,
      aux_sym_string_token2,
      sym__identifier,
  [1083] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(195), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(197), 30,
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
      aux_sym_register_token7,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_integer,
      aux_sym_string_token1,
      aux_sym_string_token2,
      sym__identifier,
  [1123] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(169), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(171), 30,
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
      aux_sym_register_token7,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_integer,
      aux_sym_string_token1,
      aux_sym_string_token2,
      sym__identifier,
  [1163] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(149), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(151), 30,
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
      aux_sym_register_token7,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_integer,
      aux_sym_string_token1,
      aux_sym_string_token2,
      sym__identifier,
  [1203] = 4,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_LBRACK,
    ACTIONS(189), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(191), 29,
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
      aux_sym_register_token7,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_integer,
      aux_sym_string_token1,
      aux_sym_string_token2,
      sym__identifier,
  [1245] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(199), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(201), 30,
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
      aux_sym_register_token7,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_integer,
      aux_sym_string_token1,
      aux_sym_string_token2,
      sym__identifier,
  [1285] = 3,
    ACTIONS(21), 1,
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
      aux_sym_register_token7,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_integer,
      aux_sym_string_token1,
      aux_sym_string_token2,
      sym__identifier,
  [1325] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(82), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(209), 30,
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
      aux_sym_register_token7,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_integer,
      aux_sym_string_token1,
      aux_sym_string_token2,
      sym__identifier,
  [1365] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(153), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(155), 30,
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
      aux_sym_register_token7,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_integer,
      aux_sym_string_token1,
      aux_sym_string_token2,
      sym__identifier,
  [1405] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_integer,
    ACTIONS(43), 1,
      sym__identifier,
    ACTIONS(211), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 2,
      aux_sym_binary_token1,
      aux_sym_binary_token2,
    ACTIONS(33), 2,
      aux_sym_octal_token1,
      aux_sym_octal_token2,
    ACTIONS(37), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(213), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(29), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    ACTIONS(35), 7,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      aux_sym_register_token7,
    STATE(12), 9,
      sym_pointer,
      sym_hexadecimal,
      sym_binary,
      sym_octal,
      sym_register,
      sym__constant,
      sym_float,
      sym_string,
      sym_identifier,
  [1459] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      sym_integer,
    ACTIONS(137), 1,
      sym__identifier,
    ACTIONS(141), 1,
      anon_sym_LBRACK,
    ACTIONS(125), 2,
      aux_sym_binary_token1,
      aux_sym_binary_token2,
    ACTIONS(127), 2,
      aux_sym_octal_token1,
      aux_sym_octal_token2,
    ACTIONS(131), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(143), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(123), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    ACTIONS(129), 7,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      aux_sym_register_token7,
    STATE(38), 9,
      sym_pointer,
      sym_hexadecimal,
      sym_binary,
      sym_octal,
      sym_register,
      sym__constant,
      sym_float,
      sym_string,
      sym_identifier,
  [1513] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 2,
      anon_sym_PTR,
      anon_sym_ptr,
    ACTIONS(217), 3,
      anon_sym_LBRACK,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(219), 18,
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
      aux_sym_register_token7,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_integer,
      sym__identifier,
  [1546] = 10,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(231), 1,
      sym_integer,
    ACTIONS(235), 1,
      sym__identifier,
    ACTIONS(221), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(225), 2,
      aux_sym_binary_token1,
      aux_sym_binary_token2,
    ACTIONS(227), 2,
      aux_sym_octal_token1,
      aux_sym_octal_token2,
    ACTIONS(229), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(233), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(223), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    STATE(79), 7,
      sym_hexadecimal,
      sym_binary,
      sym_octal,
      sym__constant,
      sym_float,
      sym_string,
      sym_identifier,
  [1590] = 10,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(235), 1,
      sym__identifier,
    ACTIONS(239), 1,
      sym_integer,
    ACTIONS(225), 2,
      aux_sym_binary_token1,
      aux_sym_binary_token2,
    ACTIONS(227), 2,
      aux_sym_octal_token1,
      aux_sym_octal_token2,
    ACTIONS(229), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(233), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(237), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(223), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    STATE(72), 7,
      sym_hexadecimal,
      sym_binary,
      sym_octal,
      sym__constant,
      sym_float,
      sym_string,
      sym_identifier,
  [1634] = 10,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(231), 1,
      sym_integer,
    ACTIONS(235), 1,
      sym__identifier,
    ACTIONS(225), 2,
      aux_sym_binary_token1,
      aux_sym_binary_token2,
    ACTIONS(227), 2,
      aux_sym_octal_token1,
      aux_sym_octal_token2,
    ACTIONS(229), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(233), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(241), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(223), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    STATE(79), 7,
      sym_hexadecimal,
      sym_binary,
      sym_octal,
      sym__constant,
      sym_float,
      sym_string,
      sym_identifier,
  [1678] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_es,
    ACTIONS(251), 1,
      sym_integer,
    STATE(53), 1,
      sym_segment_prefix,
    STATE(94), 1,
      sym_segment,
    STATE(67), 2,
      sym_hexadecimal,
      sym_register,
    ACTIONS(247), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    ACTIONS(243), 5,
      anon_sym_cs,
      anon_sym_ds,
      anon_sym_fs,
      anon_sym_gs,
      anon_sym_ss,
    ACTIONS(249), 7,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      aux_sym_register_token7,
  [1719] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_es,
    ACTIONS(253), 1,
      sym_integer,
    STATE(52), 1,
      sym_segment_prefix,
    STATE(94), 1,
      sym_segment,
    STATE(76), 2,
      sym_hexadecimal,
      sym_register,
    ACTIONS(247), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    ACTIONS(243), 5,
      anon_sym_cs,
      anon_sym_ds,
      anon_sym_fs,
      anon_sym_gs,
      anon_sym_ss,
    ACTIONS(249), 7,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      aux_sym_register_token7,
  [1760] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 3,
      anon_sym_LBRACK,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(257), 18,
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
      aux_sym_register_token7,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_integer,
      sym__identifier,
  [1789] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_es,
    ACTIONS(259), 1,
      sym_integer,
    STATE(51), 1,
      sym_segment_prefix,
    STATE(94), 1,
      sym_segment,
    STATE(73), 2,
      sym_hexadecimal,
      sym_register,
    ACTIONS(247), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    ACTIONS(243), 5,
      anon_sym_cs,
      anon_sym_ds,
      anon_sym_fs,
      anon_sym_gs,
      anon_sym_ss,
    ACTIONS(249), 7,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      aux_sym_register_token7,
  [1830] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_es,
    ACTIONS(261), 1,
      sym_integer,
    STATE(55), 1,
      sym_segment_prefix,
    STATE(94), 1,
      sym_segment,
    STATE(69), 2,
      sym_hexadecimal,
      sym_register,
    ACTIONS(247), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    ACTIONS(243), 5,
      anon_sym_cs,
      anon_sym_ds,
      anon_sym_fs,
      anon_sym_gs,
      anon_sym_ss,
    ACTIONS(249), 7,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      aux_sym_register_token7,
  [1871] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      sym_integer,
    ACTIONS(235), 1,
      sym__identifier,
    ACTIONS(225), 2,
      aux_sym_binary_token1,
      aux_sym_binary_token2,
    ACTIONS(227), 2,
      aux_sym_octal_token1,
      aux_sym_octal_token2,
    ACTIONS(229), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(263), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(223), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    STATE(79), 7,
      sym_hexadecimal,
      sym_binary,
      sym_octal,
      sym__constant,
      sym_float,
      sym_string,
      sym_identifier,
  [1911] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      sym_integer,
    STATE(76), 2,
      sym_hexadecimal,
      sym_register,
    ACTIONS(247), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    ACTIONS(249), 7,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      aux_sym_register_token7,
  [1936] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      sym_integer,
    STATE(70), 2,
      sym_hexadecimal,
      sym_register,
    ACTIONS(247), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    ACTIONS(249), 7,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      aux_sym_register_token7,
  [1961] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      sym_integer,
    STATE(63), 2,
      sym_hexadecimal,
      sym_register,
    ACTIONS(247), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    ACTIONS(249), 7,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      aux_sym_register_token7,
  [1986] = 10,
    ACTIONS(9), 1,
      sym_label,
    ACTIONS(11), 1,
      anon_sym_call,
    ACTIONS(13), 1,
      aux_sym_nasm_macro_token1,
    ACTIONS(15), 1,
      sym_gcc_mnemonic,
    ACTIONS(17), 1,
      sym_mnemonic,
    ACTIONS(269), 1,
      ts_builtin_sym_end,
    ACTIONS(271), 1,
      sym_comment,
    STATE(2), 1,
      sym_nasm_macro,
    STATE(93), 2,
      sym__normal_instruction,
      sym__gcc_pseudo_op,
    STATE(90), 4,
      sym__statement,
      sym_call_instruction,
      sym_instruction,
      sym__macro,
  [2021] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      sym_integer,
    STATE(67), 2,
      sym_hexadecimal,
      sym_register,
    ACTIONS(247), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    ACTIONS(249), 7,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      aux_sym_register_token7,
  [2046] = 10,
    ACTIONS(9), 1,
      sym_label,
    ACTIONS(11), 1,
      anon_sym_call,
    ACTIONS(13), 1,
      aux_sym_nasm_macro_token1,
    ACTIONS(15), 1,
      sym_gcc_mnemonic,
    ACTIONS(17), 1,
      sym_mnemonic,
    ACTIONS(271), 1,
      sym_comment,
    ACTIONS(273), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_nasm_macro,
    STATE(93), 2,
      sym__normal_instruction,
      sym__gcc_pseudo_op,
    STATE(90), 4,
      sym__statement,
      sym_call_instruction,
      sym_instruction,
      sym__macro,
  [2081] = 9,
    ACTIONS(9), 1,
      sym_label,
    ACTIONS(11), 1,
      anon_sym_call,
    ACTIONS(13), 1,
      aux_sym_nasm_macro_token1,
    ACTIONS(15), 1,
      sym_gcc_mnemonic,
    ACTIONS(17), 1,
      sym_mnemonic,
    ACTIONS(271), 1,
      sym_comment,
    STATE(2), 1,
      sym_nasm_macro,
    STATE(93), 2,
      sym__normal_instruction,
      sym__gcc_pseudo_op,
    STATE(90), 4,
      sym__statement,
      sym_call_instruction,
      sym_instruction,
      sym__macro,
  [2113] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      sym_integer,
    ACTIONS(275), 10,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      aux_sym_register_token7,
  [2132] = 7,
    ACTIONS(11), 1,
      anon_sym_call,
    ACTIONS(15), 1,
      sym_gcc_mnemonic,
    ACTIONS(17), 1,
      sym_mnemonic,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(279), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(92), 2,
      sym_call_instruction,
      sym_instruction,
    STATE(93), 2,
      sym__normal_instruction,
      sym__gcc_pseudo_op,
  [2157] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      sym_integer,
    STATE(86), 1,
      sym_hexadecimal,
    ACTIONS(247), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
  [2172] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_RBRACK,
    STATE(71), 1,
      aux_sym_pointer_repeat1,
    ACTIONS(283), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2187] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_RBRACK,
    STATE(71), 1,
      aux_sym_pointer_repeat1,
    ACTIONS(283), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2202] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      anon_sym_RBRACK,
    STATE(62), 1,
      aux_sym_pointer_repeat1,
    ACTIONS(283), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2217] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      anon_sym_RBRACK,
    STATE(71), 1,
      aux_sym_pointer_repeat1,
    ACTIONS(283), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2232] = 5,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(293), 1,
      ts_builtin_sym_end,
    ACTIONS(295), 1,
      anon_sym_LF,
    STATE(65), 1,
      aux_sym__gcc_pseudo_op_repeat1,
    ACTIONS(297), 2,
      anon_sym_COMMA,
      anon_sym_,
  [2249] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      anon_sym_RBRACK,
    STATE(71), 1,
      aux_sym_pointer_repeat1,
    ACTIONS(283), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2264] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_RBRACK,
    STATE(66), 1,
      aux_sym_pointer_repeat1,
    ACTIONS(283), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2279] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_RBRACK,
    STATE(71), 1,
      aux_sym_pointer_repeat1,
    ACTIONS(283), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2294] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_RBRACK,
    STATE(68), 1,
      aux_sym_pointer_repeat1,
    ACTIONS(283), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2309] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_RBRACK,
    STATE(64), 1,
      aux_sym_pointer_repeat1,
    ACTIONS(283), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2324] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_RBRACK,
    STATE(71), 1,
      aux_sym_pointer_repeat1,
    ACTIONS(306), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2339] = 5,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(311), 1,
      ts_builtin_sym_end,
    ACTIONS(313), 1,
      anon_sym_LF,
    STATE(75), 1,
      aux_sym__gcc_pseudo_op_repeat1,
    ACTIONS(315), 2,
      anon_sym_COMMA,
      anon_sym_,
  [2356] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_RBRACK,
    STATE(61), 1,
      aux_sym_pointer_repeat1,
    ACTIONS(283), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2371] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_RBRACK,
    STATE(71), 1,
      aux_sym_pointer_repeat1,
    ACTIONS(283), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2386] = 5,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(221), 1,
      ts_builtin_sym_end,
    ACTIONS(319), 1,
      anon_sym_LF,
    STATE(65), 1,
      aux_sym__gcc_pseudo_op_repeat1,
    ACTIONS(321), 2,
      anon_sym_COMMA,
      anon_sym_,
  [2403] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_RBRACK,
    STATE(74), 1,
      aux_sym_pointer_repeat1,
    ACTIONS(283), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2418] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(199), 1,
      ts_builtin_sym_end,
    ACTIONS(201), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [2430] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 4,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RBRACK,
  [2440] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(293), 1,
      ts_builtin_sym_end,
    ACTIONS(295), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [2452] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(195), 1,
      ts_builtin_sym_end,
    ACTIONS(197), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [2464] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(149), 1,
      ts_builtin_sym_end,
    ACTIONS(151), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [2476] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 4,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RBRACK,
  [2486] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(177), 1,
      ts_builtin_sym_end,
    ACTIONS(179), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [2498] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(169), 1,
      ts_builtin_sym_end,
    ACTIONS(171), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [2510] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(173), 1,
      ts_builtin_sym_end,
    ACTIONS(175), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [2522] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 4,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RBRACK,
  [2532] = 4,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(323), 1,
      ts_builtin_sym_end,
    ACTIONS(325), 1,
      anon_sym_LF,
    STATE(87), 1,
      aux_sym_program_repeat1,
  [2545] = 4,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(273), 1,
      ts_builtin_sym_end,
    ACTIONS(328), 1,
      anon_sym_LF,
    STATE(87), 1,
      aux_sym_program_repeat1,
  [2558] = 4,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(330), 1,
      ts_builtin_sym_end,
    ACTIONS(332), 1,
      anon_sym_LF,
    STATE(88), 1,
      aux_sym_program_repeat1,
  [2571] = 2,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(323), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2579] = 2,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(334), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2587] = 2,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(336), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2595] = 2,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(338), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2603] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      anon_sym_COLON,
  [2610] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      sym__identifier,
  [2617] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      anon_sym_COLON,
  [2624] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(8)] = 0,
  [SMALL_STATE(9)] = 68,
  [SMALL_STATE(10)] = 136,
  [SMALL_STATE(11)] = 183,
  [SMALL_STATE(12)] = 230,
  [SMALL_STATE(13)] = 277,
  [SMALL_STATE(14)] = 324,
  [SMALL_STATE(15)] = 371,
  [SMALL_STATE(16)] = 418,
  [SMALL_STATE(17)] = 465,
  [SMALL_STATE(18)] = 512,
  [SMALL_STATE(19)] = 559,
  [SMALL_STATE(20)] = 606,
  [SMALL_STATE(21)] = 653,
  [SMALL_STATE(22)] = 702,
  [SMALL_STATE(23)] = 749,
  [SMALL_STATE(24)] = 796,
  [SMALL_STATE(25)] = 843,
  [SMALL_STATE(26)] = 883,
  [SMALL_STATE(27)] = 923,
  [SMALL_STATE(28)] = 963,
  [SMALL_STATE(29)] = 1003,
  [SMALL_STATE(30)] = 1043,
  [SMALL_STATE(31)] = 1083,
  [SMALL_STATE(32)] = 1123,
  [SMALL_STATE(33)] = 1163,
  [SMALL_STATE(34)] = 1203,
  [SMALL_STATE(35)] = 1245,
  [SMALL_STATE(36)] = 1285,
  [SMALL_STATE(37)] = 1325,
  [SMALL_STATE(38)] = 1365,
  [SMALL_STATE(39)] = 1405,
  [SMALL_STATE(40)] = 1459,
  [SMALL_STATE(41)] = 1513,
  [SMALL_STATE(42)] = 1546,
  [SMALL_STATE(43)] = 1590,
  [SMALL_STATE(44)] = 1634,
  [SMALL_STATE(45)] = 1678,
  [SMALL_STATE(46)] = 1719,
  [SMALL_STATE(47)] = 1760,
  [SMALL_STATE(48)] = 1789,
  [SMALL_STATE(49)] = 1830,
  [SMALL_STATE(50)] = 1871,
  [SMALL_STATE(51)] = 1911,
  [SMALL_STATE(52)] = 1936,
  [SMALL_STATE(53)] = 1961,
  [SMALL_STATE(54)] = 1986,
  [SMALL_STATE(55)] = 2021,
  [SMALL_STATE(56)] = 2046,
  [SMALL_STATE(57)] = 2081,
  [SMALL_STATE(58)] = 2113,
  [SMALL_STATE(59)] = 2132,
  [SMALL_STATE(60)] = 2157,
  [SMALL_STATE(61)] = 2172,
  [SMALL_STATE(62)] = 2187,
  [SMALL_STATE(63)] = 2202,
  [SMALL_STATE(64)] = 2217,
  [SMALL_STATE(65)] = 2232,
  [SMALL_STATE(66)] = 2249,
  [SMALL_STATE(67)] = 2264,
  [SMALL_STATE(68)] = 2279,
  [SMALL_STATE(69)] = 2294,
  [SMALL_STATE(70)] = 2309,
  [SMALL_STATE(71)] = 2324,
  [SMALL_STATE(72)] = 2339,
  [SMALL_STATE(73)] = 2356,
  [SMALL_STATE(74)] = 2371,
  [SMALL_STATE(75)] = 2386,
  [SMALL_STATE(76)] = 2403,
  [SMALL_STATE(77)] = 2418,
  [SMALL_STATE(78)] = 2430,
  [SMALL_STATE(79)] = 2440,
  [SMALL_STATE(80)] = 2452,
  [SMALL_STATE(81)] = 2464,
  [SMALL_STATE(82)] = 2476,
  [SMALL_STATE(83)] = 2486,
  [SMALL_STATE(84)] = 2498,
  [SMALL_STATE(85)] = 2510,
  [SMALL_STATE(86)] = 2522,
  [SMALL_STATE(87)] = 2532,
  [SMALL_STATE(88)] = 2545,
  [SMALL_STATE(89)] = 2558,
  [SMALL_STATE(90)] = 2571,
  [SMALL_STATE(91)] = 2579,
  [SMALL_STATE(92)] = 2587,
  [SMALL_STATE(93)] = 2595,
  [SMALL_STATE(94)] = 2603,
  [SMALL_STATE(95)] = 2610,
  [SMALL_STATE(96)] = 2617,
  [SMALL_STATE(97)] = 2624,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro, 1),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__macro_repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__macro_repeat1, 2), SHIFT_REPEAT(20),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__macro_repeat1, 2), SHIFT_REPEAT(41),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__macro_repeat1, 2), SHIFT_REPEAT(49),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__macro_repeat1, 2), SHIFT_REPEAT(17),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__macro_repeat1, 2), SHIFT_REPEAT(16),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__macro_repeat1, 2), SHIFT_REPEAT(18),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__macro_repeat1, 2), SHIFT_REPEAT(19),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__macro_repeat1, 2), SHIFT_REPEAT(23),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__macro_repeat1, 2), SHIFT_REPEAT(21),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__macro_repeat1, 2), SHIFT_REPEAT(11),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__macro_repeat1, 2), SHIFT_REPEAT(22),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro, 2),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__normal_instruction_repeat1, 2),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat1, 2), SHIFT_REPEAT(9),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat1, 2), SHIFT_REPEAT(41),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat1, 2), SHIFT_REPEAT(48),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat1, 2), SHIFT_REPEAT(28),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat1, 2), SHIFT_REPEAT(32),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat1, 2), SHIFT_REPEAT(26),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat1, 2), SHIFT_REPEAT(36),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat1, 2), SHIFT_REPEAT(35),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat1, 2), SHIFT_REPEAT(34),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat1, 2), SHIFT_REPEAT(33),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat1, 2), SHIFT_REPEAT(31),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__normal_instruction, 1),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__normal_instruction, 2),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer, 4),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pointer, 4),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__operand, 2),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__operand, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer, 3),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pointer, 3),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer, 5),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pointer, 5),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer, 6),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pointer, 6),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary, 1),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary, 1),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hexadecimal, 1),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hexadecimal, 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_octal, 1),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_octal, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register, 1),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_register, 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 1),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant, 1),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__constant, 1),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 1),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nasm_macro, 2),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nasm_macro, 2),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat1, 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_width, 1),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_width, 1),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gcc_pseudo_op, 3),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gcc_pseudo_op, 1),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gcc_pseudo_op, 4),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_width, 2),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_width, 2),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_segment_prefix, 2),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_segment_prefix, 2),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__gcc_pseudo_op_repeat1, 2),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__gcc_pseudo_op_repeat1, 2),
  [297] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__gcc_pseudo_op_repeat1, 2), SHIFT_REPEAT(50),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [306] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pointer_repeat1, 2), SHIFT_REPEAT(60),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pointer_repeat1, 2),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gcc_pseudo_op, 2),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__gcc_pseudo_op, 2),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__gcc_pseudo_op, 3),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [325] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(57),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_instruction, 2),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_segment, 1),
  [346] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_asm(void) {
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
