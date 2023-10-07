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
#define STATE_COUNT 99
#define LARGE_STATE_COUNT 8
#define SYMBOL_COUNT 85
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
  sym__micro_op_operand = 71,
  sym_hexadecimal = 72,
  sym_binary = 73,
  sym_octal = 74,
  sym_register = 75,
  sym__constant = 76,
  sym_float = 77,
  sym_string = 78,
  sym_identifier = 79,
  aux_sym_program_repeat1 = 80,
  aux_sym__normal_instruction_repeat1 = 81,
  aux_sym__gcc_pseudo_op_repeat1 = 82,
  aux_sym__macro_repeat1 = 83,
  aux_sym_pointer_repeat1 = 84,
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
  [sym__micro_op_operand] = "_micro_op_operand",
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
  [sym__micro_op_operand] = sym__micro_op_operand,
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
  [sym__micro_op_operand] = {
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
  [25] = 25,
  [26] = 17,
  [27] = 21,
  [28] = 14,
  [29] = 22,
  [30] = 12,
  [31] = 18,
  [32] = 10,
  [33] = 23,
  [34] = 16,
  [35] = 20,
  [36] = 11,
  [37] = 15,
  [38] = 13,
  [39] = 39,
  [40] = 39,
  [41] = 41,
  [42] = 42,
  [43] = 41,
  [44] = 42,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 52,
  [55] = 53,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 65,
  [68] = 68,
  [69] = 69,
  [70] = 63,
  [71] = 61,
  [72] = 72,
  [73] = 68,
  [74] = 69,
  [75] = 75,
  [76] = 72,
  [77] = 77,
  [78] = 20,
  [79] = 17,
  [80] = 11,
  [81] = 81,
  [82] = 23,
  [83] = 22,
  [84] = 21,
  [85] = 18,
  [86] = 21,
  [87] = 18,
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
  [98] = 98,
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
      if (eof) ADVANCE(124);
      if (lookahead == '!') ADVANCE(32);
      if (lookahead == '"') ADVANCE(25);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(127);
      if (lookahead == '$') ADVANCE(28);
      if (lookahead == '%') ADVANCE(157);
      if (lookahead == '\'') ADVANCE(26);
      if (lookahead == '*') ADVANCE(148);
      if (lookahead == '+') ADVANCE(149);
      if (lookahead == ',') ADVANCE(145);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '.') ADVANCE(103);
      if (lookahead == '/') ADVANCE(153);
      if (lookahead == '0') ADVANCE(242);
      if (lookahead == '1') ADVANCE(243);
      if (lookahead == ':') ADVANCE(128);
      if (lookahead == '<') ADVANCE(33);
      if (lookahead == '=') ADVANCE(34);
      if (lookahead == '>') ADVANCE(35);
      if (lookahead == 'B') ADVANCE(51);
      if (lookahead == 'D') ADVANCE(49);
      if (lookahead == 'P') ADVANCE(47);
      if (lookahead == 'Q') ADVANCE(50);
      if (lookahead == 'W') ADVANCE(40);
      if (lookahead == '[') ADVANCE(188);
      if (lookahead == '\\') SKIP(105)
      if (lookahead == ']') ADVANCE(189);
      if (lookahead == '_') ADVANCE(93);
      if (lookahead == 'b') ADVANCE(87);
      if (lookahead == 'c') ADVANCE(52);
      if (lookahead == 'd') ADVANCE(77);
      if (lookahead == 'e') ADVANCE(78);
      if (lookahead == 'f') ADVANCE(79);
      if (lookahead == 'g') ADVANCE(80);
      if (lookahead == 'p') ADVANCE(82);
      if (lookahead == 'q') ADVANCE(84);
      if (lookahead == 's') ADVANCE(81);
      if (lookahead == 'w') ADVANCE(67);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(248);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'a') ADVANCE(101);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(247);
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
      if (lookahead == '\n') SKIP(20)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(20)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(21)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(21)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(23)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(23)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(88)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(88)
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
      if (lookahead == '\n') SKIP(89)
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(89)
      if (lookahead == '\r') SKIP(13)
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(90)
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(90)
      if (lookahead == '\r') SKIP(15)
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(91)
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(91)
      if (lookahead == '\r') SKIP(17)
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(127);
      if (lookahead == '%') ADVANCE(157);
      if (lookahead == '.') ADVANCE(30);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == ':') ADVANCE(141);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == 'c') ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(20)
      if (lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(127);
      if (lookahead == '%') ADVANCE(157);
      if (lookahead == '.') ADVANCE(30);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == 'c') ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(20)
      if (lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          lookahead == ',' ||
          lookahead == '-' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(25);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(127);
      if (lookahead == '$') ADVANCE(293);
      if (lookahead == '%') ADVANCE(53);
      if (lookahead == '\'') ADVANCE(26);
      if (lookahead == '-') ADVANCE(291);
      if (lookahead == '.') ADVANCE(353);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '0') ADVANCE(256);
      if (lookahead == '1') ADVANCE(257);
      if (lookahead == 'B') ADVANCE(312);
      if (lookahead == 'D') ADVANCE(310);
      if (lookahead == 'Q') ADVANCE(311);
      if (lookahead == 'W') ADVANCE(301);
      if (lookahead == '[') ADVANCE(188);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == '_') ADVANCE(350);
      if (lookahead == 'b') ADVANCE(332);
      if (lookahead == 'd') ADVANCE(323);
      if (lookahead == 'e') ADVANCE(313);
      if (lookahead == 'q') ADVANCE(346);
      if (lookahead == 'r') ADVANCE(294);
      if (lookahead == 's') ADVANCE(321);
      if (lookahead == 'w') ADVANCE(329);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(347);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(262);
      if (lookahead == 'x' ||
          lookahead == 'y') ADVANCE(328);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'f') ADVANCE(359);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(261);
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
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(25);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(127);
      if (lookahead == '$') ADVANCE(293);
      if (lookahead == '%') ADVANCE(53);
      if (lookahead == '\'') ADVANCE(26);
      if (lookahead == '-') ADVANCE(291);
      if (lookahead == '.') ADVANCE(353);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '0') ADVANCE(256);
      if (lookahead == '1') ADVANCE(257);
      if (lookahead == 'P') ADVANCE(309);
      if (lookahead == '[') ADVANCE(188);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == '_') ADVANCE(350);
      if (lookahead == 'b') ADVANCE(333);
      if (lookahead == 'd') ADVANCE(324);
      if (lookahead == 'e') ADVANCE(313);
      if (lookahead == 'p') ADVANCE(345);
      if (lookahead == 'r') ADVANCE(294);
      if (lookahead == 's') ADVANCE(321);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(347);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(262);
      if (lookahead == 'x' ||
          lookahead == 'y') ADVANCE(328);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'f') ADVANCE(359);
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
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(25);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(127);
      if (lookahead == '$') ADVANCE(293);
      if (lookahead == '%') ADVANCE(53);
      if (lookahead == '\'') ADVANCE(26);
      if (lookahead == '-') ADVANCE(291);
      if (lookahead == '.') ADVANCE(353);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '0') ADVANCE(256);
      if (lookahead == '1') ADVANCE(257);
      if (lookahead == '[') ADVANCE(188);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == '_') ADVANCE(350);
      if (lookahead == 'b') ADVANCE(333);
      if (lookahead == 'd') ADVANCE(324);
      if (lookahead == 'e') ADVANCE(313);
      if (lookahead == 'r') ADVANCE(294);
      if (lookahead == 's') ADVANCE(321);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(347);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(262);
      if (lookahead == 'x' ||
          lookahead == 'y') ADVANCE(328);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'f') ADVANCE(359);
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
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(25);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(127);
      if (lookahead == '$') ADVANCE(293);
      if (lookahead == '\'') ADVANCE(26);
      if (lookahead == '-') ADVANCE(291);
      if (lookahead == '.') ADVANCE(353);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '0') ADVANCE(256);
      if (lookahead == '1') ADVANCE(257);
      if (lookahead == '\\') SKIP(12)
      if (lookahead == '_') ADVANCE(350);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(262);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(261);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(24)
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(359);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 25:
      if (lookahead == '"') ADVANCE(287);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '\'') ADVANCE(288);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == '/') ADVANCE(127);
      END_STATE();
    case 28:
      if (lookahead == '0') ADVANCE(102);
      END_STATE();
    case 29:
      if (lookahead == '1') ADVANCE(94);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(224);
      if (lookahead == 'b') ADVANCE(70);
      if (lookahead == 'd') ADVANCE(61);
      if (lookahead == 'i') ADVANCE(72);
      if (lookahead == 's') ADVANCE(60);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(85);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(141);
      if (lookahead == ' ' ||
          lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          lookahead == ',' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>') ADVANCE(31);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(141);
      if (sym_label_character_set_1(lookahead)) ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == '=') ADVANCE(147);
      END_STATE();
    case 33:
      if (lookahead == '=') ADVANCE(154);
      END_STATE();
    case 34:
      if (lookahead == '=') ADVANCE(155);
      END_STATE();
    case 35:
      if (lookahead == '=') ADVANCE(156);
      END_STATE();
    case 36:
      if (lookahead == 'D') ADVANCE(174);
      END_STATE();
    case 37:
      if (lookahead == 'D') ADVANCE(170);
      END_STATE();
    case 38:
      if (lookahead == 'D') ADVANCE(172);
      END_STATE();
    case 39:
      if (lookahead == 'E') ADVANCE(168);
      END_STATE();
    case 40:
      if (lookahead == 'O') ADVANCE(44);
      END_STATE();
    case 41:
      if (lookahead == 'O') ADVANCE(45);
      END_STATE();
    case 42:
      if (lookahead == 'O') ADVANCE(46);
      END_STATE();
    case 43:
      if (lookahead == 'R') ADVANCE(184);
      END_STATE();
    case 44:
      if (lookahead == 'R') ADVANCE(36);
      END_STATE();
    case 45:
      if (lookahead == 'R') ADVANCE(37);
      END_STATE();
    case 46:
      if (lookahead == 'R') ADVANCE(38);
      END_STATE();
    case 47:
      if (lookahead == 'T') ADVANCE(43);
      END_STATE();
    case 48:
      if (lookahead == 'T') ADVANCE(39);
      END_STATE();
    case 49:
      if (lookahead == 'W') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(98);
      END_STATE();
    case 50:
      if (lookahead == 'W') ADVANCE(42);
      END_STATE();
    case 51:
      if (lookahead == 'Y') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(98);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(63);
      if (lookahead == 's') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(98);
      END_STATE();
    case 53:
      if (lookahead == 'b') ADVANCE(71);
      if (lookahead == 'd') ADVANCE(62);
      if (lookahead == 'e') ADVANCE(54);
      if (lookahead == 'r') ADVANCE(29);
      if (lookahead == 's') ADVANCE(60);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(86);
      if (lookahead == 'x' ||
          lookahead == 'y') ADVANCE(66);
      END_STATE();
    case 54:
      if (lookahead == 'b') ADVANCE(70);
      if (lookahead == 'd') ADVANCE(61);
      if (lookahead == 's') ADVANCE(60);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(85);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(182);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(178);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(180);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 59:
      if (lookahead == 'h') ADVANCE(190);
      END_STATE();
    case 60:
      if (lookahead == 'i') ADVANCE(220);
      if (lookahead == 'p') ADVANCE(222);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(220);
      if (lookahead == 'x') ADVANCE(218);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(220);
      if (lookahead == 'x') ADVANCE(218);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(216);
      END_STATE();
    case 63:
      if (lookahead == 'l') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      END_STATE();
    case 64:
      if (lookahead == 'l') ADVANCE(142);
      END_STATE();
    case 65:
      if (lookahead == 'm') ADVANCE(95);
      END_STATE();
    case 66:
      if (lookahead == 'm') ADVANCE(65);
      END_STATE();
    case 67:
      if (lookahead == 'o') ADVANCE(74);
      END_STATE();
    case 68:
      if (lookahead == 'o') ADVANCE(75);
      END_STATE();
    case 69:
      if (lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 70:
      if (lookahead == 'p') ADVANCE(222);
      if (lookahead == 'x') ADVANCE(218);
      END_STATE();
    case 71:
      if (lookahead == 'p') ADVANCE(222);
      if (lookahead == 'x') ADVANCE(218);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(216);
      END_STATE();
    case 72:
      if (lookahead == 'p') ADVANCE(228);
      END_STATE();
    case 73:
      if (lookahead == 'r') ADVANCE(186);
      END_STATE();
    case 74:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 75:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 76:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 77:
      if (lookahead == 's') ADVANCE(131);
      if (lookahead == 'w') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(98);
      END_STATE();
    case 78:
      if (lookahead == 's') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(98);
      END_STATE();
    case 79:
      if (lookahead == 's') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(98);
      END_STATE();
    case 80:
      if (lookahead == 's') ADVANCE(137);
      END_STATE();
    case 81:
      if (lookahead == 's') ADVANCE(139);
      END_STATE();
    case 82:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 83:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 84:
      if (lookahead == 'w') ADVANCE(69);
      END_STATE();
    case 85:
      if (lookahead == 'x') ADVANCE(218);
      END_STATE();
    case 86:
      if (lookahead == 'x') ADVANCE(218);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(216);
      END_STATE();
    case 87:
      if (lookahead == 'y') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(98);
      END_STATE();
    case 88:
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(127);
      if (lookahead == '$') ADVANCE(293);
      if (lookahead == '%') ADVANCE(53);
      if (lookahead == '-') ADVANCE(292);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '0') ADVANCE(270);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == 'a') ADVANCE(347);
      if (lookahead == 'b') ADVANCE(333);
      if (lookahead == 'c') ADVANCE(341);
      if (lookahead == 'd') ADVANCE(322);
      if (lookahead == 'e') ADVANCE(314);
      if (lookahead == 'f') ADVANCE(342);
      if (lookahead == 'g') ADVANCE(343);
      if (lookahead == 'r') ADVANCE(294);
      if (lookahead == 's') ADVANCE(320);
      if (lookahead == 'x' ||
          lookahead == 'y') ADVANCE(328);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(359);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(88)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(271);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 89:
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(127);
      if (lookahead == '$') ADVANCE(293);
      if (lookahead == '%') ADVANCE(53);
      if (lookahead == '-') ADVANCE(292);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '0') ADVANCE(270);
      if (lookahead == '\\') SKIP(14)
      if (lookahead == 'b') ADVANCE(333);
      if (lookahead == 'd') ADVANCE(324);
      if (lookahead == 'e') ADVANCE(313);
      if (lookahead == 'r') ADVANCE(294);
      if (lookahead == 's') ADVANCE(321);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(347);
      if (lookahead == 'x' ||
          lookahead == 'y') ADVANCE(328);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'f') ADVANCE(359);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(89)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(271);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 90:
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(127);
      if (lookahead == '*') ADVANCE(148);
      if (lookahead == '+') ADVANCE(149);
      if (lookahead == '-') ADVANCE(150);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '\\') SKIP(16)
      if (lookahead == ']') ADVANCE(189);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(90)
      END_STATE();
    case 91:
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(127);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '\\') SKIP(18)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(91)
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 92:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(235);
      END_STATE();
    case 93:
      if (lookahead == 'b' ||
          lookahead == 'y') ADVANCE(196);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(93);
      END_STATE();
    case 94:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(224);
      END_STATE();
    case 95:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(226);
      END_STATE();
    case 96:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(235);
      END_STATE();
    case 97:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(231);
      END_STATE();
    case 98:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      END_STATE();
    case 99:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(194);
      END_STATE();
    case 100:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(192);
      END_STATE();
    case 101:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(98);
      END_STATE();
    case 102:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(100);
      END_STATE();
    case 103:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 104:
      if (eof) ADVANCE(124);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 105:
      if (eof) ADVANCE(124);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(104)
      END_STATE();
    case 106:
      if (eof) ADVANCE(124);
      if (lookahead == '\n') SKIP(123)
      END_STATE();
    case 107:
      if (eof) ADVANCE(124);
      if (lookahead == '\n') SKIP(123)
      if (lookahead == '\r') SKIP(106)
      END_STATE();
    case 108:
      if (eof) ADVANCE(124);
      if (lookahead == '\n') SKIP(110)
      END_STATE();
    case 109:
      if (eof) ADVANCE(124);
      if (lookahead == '\n') SKIP(110)
      if (lookahead == '\r') SKIP(108)
      END_STATE();
    case 110:
      if (eof) ADVANCE(124);
      if (lookahead == '\n') ADVANCE(125);
      if (lookahead == '!') ADVANCE(32);
      if (lookahead == '"') ADVANCE(25);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(127);
      if (lookahead == '$') ADVANCE(293);
      if (lookahead == '%') ADVANCE(53);
      if (lookahead == '\'') ADVANCE(26);
      if (lookahead == '*') ADVANCE(148);
      if (lookahead == '+') ADVANCE(149);
      if (lookahead == '-') ADVANCE(151);
      if (lookahead == '.') ADVANCE(353);
      if (lookahead == '/') ADVANCE(153);
      if (lookahead == '0') ADVANCE(256);
      if (lookahead == '1') ADVANCE(257);
      if (lookahead == '<') ADVANCE(295);
      if (lookahead == '=') ADVANCE(34);
      if (lookahead == '>') ADVANCE(296);
      if (lookahead == 'B') ADVANCE(312);
      if (lookahead == 'D') ADVANCE(310);
      if (lookahead == 'Q') ADVANCE(311);
      if (lookahead == 'W') ADVANCE(301);
      if (lookahead == '[') ADVANCE(188);
      if (lookahead == '\\') SKIP(109)
      if (lookahead == '_') ADVANCE(350);
      if (lookahead == 'b') ADVANCE(332);
      if (lookahead == 'd') ADVANCE(323);
      if (lookahead == 'e') ADVANCE(313);
      if (lookahead == 'q') ADVANCE(346);
      if (lookahead == 'r') ADVANCE(294);
      if (lookahead == 's') ADVANCE(321);
      if (lookahead == 'w') ADVANCE(329);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(347);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(262);
      if (lookahead == 'x' ||
          lookahead == 'y') ADVANCE(328);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'f') ADVANCE(359);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(261);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(110)
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 111:
      if (eof) ADVANCE(124);
      if (lookahead == '\n') ADVANCE(125);
      if (lookahead == '"') ADVANCE(25);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(127);
      if (lookahead == '$') ADVANCE(293);
      if (lookahead == '%') ADVANCE(53);
      if (lookahead == '\'') ADVANCE(26);
      if (lookahead == ',') ADVANCE(145);
      if (lookahead == '-') ADVANCE(291);
      if (lookahead == '.') ADVANCE(353);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '0') ADVANCE(256);
      if (lookahead == '1') ADVANCE(257);
      if (lookahead == 'B') ADVANCE(312);
      if (lookahead == 'D') ADVANCE(310);
      if (lookahead == 'Q') ADVANCE(311);
      if (lookahead == 'W') ADVANCE(301);
      if (lookahead == '[') ADVANCE(188);
      if (lookahead == '\\') SKIP(115)
      if (lookahead == '_') ADVANCE(350);
      if (lookahead == 'b') ADVANCE(332);
      if (lookahead == 'd') ADVANCE(323);
      if (lookahead == 'e') ADVANCE(313);
      if (lookahead == 'q') ADVANCE(346);
      if (lookahead == 'r') ADVANCE(294);
      if (lookahead == 's') ADVANCE(321);
      if (lookahead == 'w') ADVANCE(329);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(347);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(262);
      if (lookahead == 'x' ||
          lookahead == 'y') ADVANCE(328);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'f') ADVANCE(359);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(261);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(111)
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 112:
      if (eof) ADVANCE(124);
      if (lookahead == '\n') ADVANCE(125);
      if (lookahead == '"') ADVANCE(25);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(127);
      if (lookahead == '$') ADVANCE(293);
      if (lookahead == '\'') ADVANCE(26);
      if (lookahead == '-') ADVANCE(291);
      if (lookahead == '.') ADVANCE(353);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '0') ADVANCE(256);
      if (lookahead == '1') ADVANCE(257);
      if (lookahead == '\\') SKIP(117)
      if (lookahead == '_') ADVANCE(350);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(262);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(261);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(112)
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(359);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 113:
      if (eof) ADVANCE(124);
      if (lookahead == '\n') ADVANCE(125);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(127);
      if (lookahead == '.') ADVANCE(103);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '\\') SKIP(119)
      if (lookahead == 'c') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(113)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 114:
      if (eof) ADVANCE(124);
      if (lookahead == '\n') SKIP(111)
      END_STATE();
    case 115:
      if (eof) ADVANCE(124);
      if (lookahead == '\n') SKIP(111)
      if (lookahead == '\r') SKIP(114)
      END_STATE();
    case 116:
      if (eof) ADVANCE(124);
      if (lookahead == '\n') SKIP(112)
      END_STATE();
    case 117:
      if (eof) ADVANCE(124);
      if (lookahead == '\n') SKIP(112)
      if (lookahead == '\r') SKIP(116)
      END_STATE();
    case 118:
      if (eof) ADVANCE(124);
      if (lookahead == '\n') SKIP(113)
      END_STATE();
    case 119:
      if (eof) ADVANCE(124);
      if (lookahead == '\n') SKIP(113)
      if (lookahead == '\r') SKIP(118)
      END_STATE();
    case 120:
      if (eof) ADVANCE(124);
      if (lookahead == '\n') SKIP(122)
      END_STATE();
    case 121:
      if (eof) ADVANCE(124);
      if (lookahead == '\n') SKIP(122)
      if (lookahead == '\r') SKIP(120)
      END_STATE();
    case 122:
      if (eof) ADVANCE(124);
      if (lookahead == '\n') ADVANCE(126);
      if (lookahead == ' ') ADVANCE(146);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(127);
      if (lookahead == ',') ADVANCE(145);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '\\') SKIP(121)
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(122)
      END_STATE();
    case 123:
      if (eof) ADVANCE(124);
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(127);
      if (lookahead == '%') ADVANCE(157);
      if (lookahead == '.') ADVANCE(30);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '\\') SKIP(107)
      if (lookahead == 'c') ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(123)
      if (lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          lookahead == ',' ||
          lookahead == '-' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(126);
      if (lookahead == ' ') ADVANCE(146);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_cs);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_cs);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(361);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_ds);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_ds);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(361);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_es);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_es);
      if (lookahead == 'i') ADVANCE(221);
      if (lookahead == 'p') ADVANCE(223);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(361);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_fs);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_fs);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(361);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_gs);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_gs);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(361);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_ss);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_ss);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(361);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == ':') ADVANCE(141);
      if (sym_label_character_set_1(lookahead)) ADVANCE(31);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_call);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_call);
      if (lookahead == ':') ADVANCE(141);
      if (lookahead == ' ' ||
          lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          (',' <= lookahead && lookahead <= '.') ||
          lookahead == '<' ||
          lookahead == '>') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_call);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(126);
      if (lookahead == ' ') ADVANCE(146);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(353);
      if (lookahead == '0') ADVANCE(263);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(267);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '0') ADVANCE(249);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(253);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(127);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_nasm_macro_token1);
      if (lookahead == '%') ADVANCE(157);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_gcc_mnemonic);
      if (lookahead == ':') ADVANCE(141);
      if (lookahead == ' ' ||
          lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          lookahead == ',' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>') ADVANCE(31);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_gcc_mnemonic);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_mnemonic);
      if (lookahead == ':') ADVANCE(141);
      if (lookahead == 'a') ADVANCE(162);
      if (lookahead == ' ' ||
          lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          (',' <= lookahead && lookahead <= '.') ||
          lookahead == '<' ||
          lookahead == '>') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_mnemonic);
      if (lookahead == ':') ADVANCE(141);
      if (lookahead == 'l') ADVANCE(143);
      if (lookahead == ' ' ||
          lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          (',' <= lookahead && lookahead <= '.') ||
          lookahead == '<' ||
          lookahead == '>') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_mnemonic);
      if (lookahead == ':') ADVANCE(141);
      if (lookahead == 'l') ADVANCE(161);
      if (lookahead == ' ' ||
          lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          (',' <= lookahead && lookahead <= '.') ||
          lookahead == '<' ||
          lookahead == '>') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_mnemonic);
      if (lookahead == ':') ADVANCE(141);
      if (lookahead == ' ' ||
          lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          (',' <= lookahead && lookahead <= '.') ||
          lookahead == '<' ||
          lookahead == '>') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_mnemonic);
      if (lookahead == 'a') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_mnemonic);
      if (lookahead == 'l') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_mnemonic);
      if (lookahead == 'l') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_mnemonic);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_BYTE);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_BYTE);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(361);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_DWORD);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_DWORD);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(361);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_QWORD);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_QWORD);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(361);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_WORD);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_WORD);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(361);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_byte);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_byte);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(361);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_dword);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_dword);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(361);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_qword);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_qword);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(361);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_word);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_word);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(361);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_PTR);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_PTR);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(361);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_ptr);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_ptr);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(361);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_hexadecimal_token1);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_hexadecimal_token1);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(361);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_hexadecimal_token2);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_hexadecimal_token2);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(361);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_hexadecimal_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(194);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_hexadecimal_token3);
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
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(206);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (lookahead == '_') ADVANCE(209);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(207);
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
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (lookahead == 'h') ADVANCE(190);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (lookahead == 'h') ADVANCE(191);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(361);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(208);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(209);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('2' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      END_STATE();
    case 204:
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
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(361);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_binary_token2);
      if (lookahead == 'h') ADVANCE(190);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(208);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_binary_token2);
      if (lookahead == 'h') ADVANCE(191);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(209);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('2' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_binary_token2);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(208);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_binary_token2);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(209);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('2' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_octal_token1);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_octal_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(214);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_octal_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(215);
      if (sym__identifier_character_set_2(lookahead)) ADVANCE(361);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_octal_token1);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(361);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_octal_token2);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(214);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_octal_token2);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(215);
      if (sym__identifier_character_set_2(lookahead)) ADVANCE(361);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_register_token1);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_register_token1);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(361);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_register_token2);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_register_token2);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(361);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_register_token3);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_register_token3);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(361);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_register_token4);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_register_token4);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(361);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_register_token5);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_register_token5);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(361);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_register_token6);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_register_token6);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(361);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_register_token7);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_register_token7);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(361);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == '.') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(230);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == '.') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(231);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == 'e') ADVANCE(290);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(233);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(234);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == '.') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(235);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == '.') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(236);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == 'e') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == 'e') ADVANCE(289);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(239);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(240);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_integer);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(237);
      if (lookahead == '_') ADVANCE(93);
      if (lookahead == 'b') ADVANCE(197);
      if (lookahead == 'd') ADVANCE(281);
      if (lookahead == 'y') ADVANCE(201);
      if (lookahead == 'h' ||
          lookahead == 'x') ADVANCE(99);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(211);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(244);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(255);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(254);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(98);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(237);
      if (lookahead == '_') ADVANCE(93);
      if (lookahead == 'b') ADVANCE(203);
      if (lookahead == 'd') ADVANCE(284);
      if (lookahead == 'y') ADVANCE(196);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(210);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(244);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(255);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(254);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(98);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(237);
      if (lookahead == '_') ADVANCE(93);
      if (lookahead == 'b') ADVANCE(199);
      if (lookahead == 'd') ADVANCE(276);
      if (lookahead == 'y') ADVANCE(196);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(210);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(245);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(251);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(250);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(237);
      if (lookahead == '_') ADVANCE(93);
      if (lookahead == 'd') ADVANCE(241);
      if (lookahead == 'h') ADVANCE(190);
      if (lookahead == 'b' ||
          lookahead == 'y') ADVANCE(196);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(210);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(246);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(253);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(252);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(237);
      if (lookahead == '_') ADVANCE(93);
      if (lookahead == 'd') ADVANCE(241);
      if (lookahead == 'b' ||
          lookahead == 'y') ADVANCE(196);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(210);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(246);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(253);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(252);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(237);
      if (lookahead == 'd') ADVANCE(284);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(210);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(254);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(98);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(237);
      if (lookahead == 'd') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(98);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(237);
      if (lookahead == 'd') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(253);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(237);
      if (lookahead == 'd') ADVANCE(241);
      if (lookahead == 'h') ADVANCE(190);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(210);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(252);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(237);
      if (lookahead == 'd') ADVANCE(241);
      if (lookahead == 'h') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(253);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(237);
      if (lookahead == 'd') ADVANCE(241);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(210);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(252);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(237);
      if (lookahead == 'd') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(253);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(237);
      if (lookahead == 'd') ADVANCE(276);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(210);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(250);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(237);
      if (lookahead == 'd') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(251);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(238);
      if (lookahead == '_') ADVANCE(350);
      if (lookahead == 'b') ADVANCE(198);
      if (lookahead == 'd') ADVANCE(283);
      if (lookahead == 'y') ADVANCE(202);
      if (lookahead == 'h' ||
          lookahead == 'x') ADVANCE(357);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(212);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(258);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(269);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(356);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(238);
      if (lookahead == '_') ADVANCE(350);
      if (lookahead == 'b') ADVANCE(204);
      if (lookahead == 'd') ADVANCE(285);
      if (lookahead == 'y') ADVANCE(205);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(213);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(258);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(269);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(356);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(238);
      if (lookahead == '_') ADVANCE(350);
      if (lookahead == 'b') ADVANCE(200);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead == 'y') ADVANCE(205);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(213);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(259);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(265);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(264);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(319);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(238);
      if (lookahead == '_') ADVANCE(350);
      if (lookahead == 'd') ADVANCE(286);
      if (lookahead == 'h') ADVANCE(191);
      if (lookahead == 'b' ||
          lookahead == 'y') ADVANCE(205);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(213);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(260);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(267);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(266);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(238);
      if (lookahead == '_') ADVANCE(350);
      if (lookahead == 'd') ADVANCE(286);
      if (lookahead == 'b' ||
          lookahead == 'y') ADVANCE(205);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(213);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(260);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(267);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(266);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(238);
      if (lookahead == 'd') ADVANCE(285);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(213);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(356);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(238);
      if (lookahead == 'd') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(356);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(238);
      if (lookahead == 'd') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(267);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(238);
      if (lookahead == 'd') ADVANCE(286);
      if (lookahead == 'h') ADVANCE(191);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(213);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(266);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(238);
      if (lookahead == 'd') ADVANCE(286);
      if (lookahead == 'h') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(267);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(238);
      if (lookahead == 'd') ADVANCE(286);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(213);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(266);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(238);
      if (lookahead == 'd') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(267);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(238);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(213);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(264);
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
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(238);
      if (lookahead == 'd') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
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
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'd') ADVANCE(283);
      if (lookahead == 'h' ||
          lookahead == 'x') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(356);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'd') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(356);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'd') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(274);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'd') ADVANCE(286);
      if (lookahead == 'h') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(274);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'd') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(274);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'd') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
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
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'h') ADVANCE(190);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'h') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(280);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'h') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(282);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'h') ADVANCE(191);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(361);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(280);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(277);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(282);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(278);
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
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      END_STATE();
    case 285:
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
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_integer);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(361);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '+') ADVANCE(96);
      if (lookahead == '-') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(236);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '+') ADVANCE(97);
      if (lookahead == '-') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(230);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '.') ADVANCE(353);
      if (lookahead == '0') ADVANCE(263);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(267);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '0') ADVANCE(272);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(274);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '0') ADVANCE(360);
      if (sym__identifier_character_set_3(lookahead)) ADVANCE(361);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '1') ADVANCE(351);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(225);
      if (lookahead == 'b') ADVANCE(335);
      if (lookahead == 'd') ADVANCE(326);
      if (lookahead == 'i') ADVANCE(336);
      if (lookahead == 's') ADVANCE(321);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(349);
      if (sym__identifier_character_set_4(lookahead)) ADVANCE(361);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '=') ADVANCE(154);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(175);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(361);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(171);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(361);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(173);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(361);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(169);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(361);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(304);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(361);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(306);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(361);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(307);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(361);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(297);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(361);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(185);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(361);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(298);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(361);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(299);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(361);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(300);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(361);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(305);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(361);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'W') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(356);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'W') ADVANCE(303);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(361);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'Y') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(356);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b') ADVANCE(334);
      if (lookahead == 'd') ADVANCE(325);
      if (lookahead == 's') ADVANCE(321);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'e' ||
          lookahead == 'f') ADVANCE(356);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b') ADVANCE(334);
      if (lookahead == 'd') ADVANCE(325);
      if (lookahead == 's') ADVANCE(134);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'e' ||
          lookahead == 'f') ADVANCE(356);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(183);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(361);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(179);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(361);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(181);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(361);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(177);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(361);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(191);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(361);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(221);
      if (lookahead == 'p') ADVANCE(223);
      if (lookahead == 's') ADVANCE(140);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(361);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(221);
      if (lookahead == 'p') ADVANCE(223);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(361);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(221);
      if (lookahead == 's') ADVANCE(132);
      if (lookahead == 'x') ADVANCE(219);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(356);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(221);
      if (lookahead == 'w') ADVANCE(330);
      if (lookahead == 'x') ADVANCE(219);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(356);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(221);
      if (lookahead == 'x') ADVANCE(219);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(356);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(221);
      if (lookahead == 'x') ADVANCE(219);
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
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(221);
      if (lookahead == 'x') ADVANCE(219);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(361);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(352);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(361);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(327);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(361);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(337);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(361);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(339);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(361);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(340);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(361);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(223);
      if (lookahead == 'x') ADVANCE(219);
      if (lookahead == 'y') ADVANCE(344);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(356);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(223);
      if (lookahead == 'x') ADVANCE(219);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(356);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(223);
      if (lookahead == 'x') ADVANCE(219);
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
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(223);
      if (lookahead == 'x') ADVANCE(219);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(361);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(229);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(361);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(315);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(361);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(187);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(361);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(316);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(361);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(317);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(361);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(130);
      if (lookahead == 'x') ADVANCE(219);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(356);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(356);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(138);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(361);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(318);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(361);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(338);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(361);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'w') ADVANCE(331);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(361);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x') ADVANCE(219);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(356);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x') ADVANCE(219);
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
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x') ADVANCE(219);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(361);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b' ||
          lookahead == 'y') ADVANCE(205);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(350);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('2' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(225);
      if (sym__identifier_character_set_5(lookahead)) ADVANCE(361);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(227);
      if (sym__identifier_character_set_2(lookahead)) ADVANCE(361);
      END_STATE();
    case 353:
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(230);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(236);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 356:
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
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 357:
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
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(193);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(356);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(358);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym__identifier);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(361);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 123},
  [2] = {.lex_state = 110},
  [3] = {.lex_state = 110},
  [4] = {.lex_state = 110},
  [5] = {.lex_state = 111},
  [6] = {.lex_state = 111},
  [7] = {.lex_state = 111},
  [8] = {.lex_state = 21},
  [9] = {.lex_state = 21},
  [10] = {.lex_state = 110},
  [11] = {.lex_state = 110},
  [12] = {.lex_state = 110},
  [13] = {.lex_state = 110},
  [14] = {.lex_state = 110},
  [15] = {.lex_state = 110},
  [16] = {.lex_state = 110},
  [17] = {.lex_state = 110},
  [18] = {.lex_state = 110},
  [19] = {.lex_state = 110},
  [20] = {.lex_state = 110},
  [21] = {.lex_state = 110},
  [22] = {.lex_state = 110},
  [23] = {.lex_state = 110},
  [24] = {.lex_state = 110},
  [25] = {.lex_state = 111},
  [26] = {.lex_state = 111},
  [27] = {.lex_state = 111},
  [28] = {.lex_state = 111},
  [29] = {.lex_state = 111},
  [30] = {.lex_state = 111},
  [31] = {.lex_state = 111},
  [32] = {.lex_state = 111},
  [33] = {.lex_state = 111},
  [34] = {.lex_state = 111},
  [35] = {.lex_state = 111},
  [36] = {.lex_state = 111},
  [37] = {.lex_state = 111},
  [38] = {.lex_state = 111},
  [39] = {.lex_state = 23},
  [40] = {.lex_state = 23},
  [41] = {.lex_state = 88},
  [42] = {.lex_state = 88},
  [43] = {.lex_state = 88},
  [44] = {.lex_state = 88},
  [45] = {.lex_state = 22},
  [46] = {.lex_state = 112},
  [47] = {.lex_state = 112},
  [48] = {.lex_state = 112},
  [49] = {.lex_state = 23},
  [50] = {.lex_state = 24},
  [51] = {.lex_state = 89},
  [52] = {.lex_state = 89},
  [53] = {.lex_state = 89},
  [54] = {.lex_state = 89},
  [55] = {.lex_state = 89},
  [56] = {.lex_state = 123},
  [57] = {.lex_state = 123},
  [58] = {.lex_state = 89},
  [59] = {.lex_state = 123},
  [60] = {.lex_state = 113},
  [61] = {.lex_state = 90},
  [62] = {.lex_state = 122},
  [63] = {.lex_state = 90},
  [64] = {.lex_state = 122},
  [65] = {.lex_state = 90},
  [66] = {.lex_state = 122},
  [67] = {.lex_state = 90},
  [68] = {.lex_state = 90},
  [69] = {.lex_state = 90},
  [70] = {.lex_state = 90},
  [71] = {.lex_state = 90},
  [72] = {.lex_state = 90},
  [73] = {.lex_state = 90},
  [74] = {.lex_state = 90},
  [75] = {.lex_state = 90},
  [76] = {.lex_state = 90},
  [77] = {.lex_state = 90},
  [78] = {.lex_state = 90},
  [79] = {.lex_state = 122},
  [80] = {.lex_state = 122},
  [81] = {.lex_state = 122},
  [82] = {.lex_state = 122},
  [83] = {.lex_state = 122},
  [84] = {.lex_state = 122},
  [85] = {.lex_state = 122},
  [86] = {.lex_state = 90},
  [87] = {.lex_state = 90},
  [88] = {.lex_state = 110},
  [89] = {.lex_state = 110},
  [90] = {.lex_state = 110},
  [91] = {.lex_state = 110},
  [92] = {.lex_state = 110},
  [93] = {.lex_state = 110},
  [94] = {.lex_state = 110},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 91},
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
    [sym__statement] = STATE(90),
    [sym_call_instruction] = STATE(90),
    [sym_instruction] = STATE(90),
    [sym__normal_instruction] = STATE(94),
    [sym__gcc_pseudo_op] = STATE(94),
    [sym__macro] = STATE(90),
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
    [sym_width] = STATE(40),
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
    [sym_width] = STATE(40),
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
    [sym_width] = STATE(40),
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
    STATE(39), 1,
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
    STATE(39), 1,
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
    STATE(25), 10,
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
  [230] = 4,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_LBRACK,
    ACTIONS(153), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(155), 36,
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
  [279] = 3,
    ACTIONS(21), 1,
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
      aux_sym_register_token7,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_integer,
      aux_sym_string_token1,
      aux_sym_string_token2,
      sym__identifier,
  [326] = 3,
    ACTIONS(21), 1,
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
      aux_sym_register_token7,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_integer,
      aux_sym_string_token1,
      aux_sym_string_token2,
      sym__identifier,
  [373] = 3,
    ACTIONS(21), 1,
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
      aux_sym_register_token7,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_integer,
      aux_sym_string_token1,
      aux_sym_string_token2,
      sym__identifier,
  [420] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(171), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(173), 37,
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
  [467] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(175), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(177), 37,
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
  [514] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(179), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(181), 37,
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
  [561] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(183), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(185), 37,
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
  [608] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(187), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(189), 37,
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
  [655] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(191), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(193), 37,
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
    ACTIONS(82), 2,
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
    ACTIONS(175), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(177), 30,
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
    ACTIONS(191), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(193), 30,
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
  [1043] = 4,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_LBRACK,
    ACTIONS(153), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(155), 29,
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
  [1085] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(179), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(181), 30,
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
  [1125] = 3,
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
  [1165] = 3,
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
  [1205] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(171), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(173), 30,
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
  [1245] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(187), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(189), 30,
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
  [1325] = 3,
    ACTIONS(21), 1,
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
  [1459] = 11,
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
    STATE(13), 9,
      sym_pointer,
      sym_hexadecimal,
      sym_binary,
      sym_octal,
      sym_register,
      sym__constant,
      sym_float,
      sym_string,
      sym_identifier,
  [1513] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      sym_integer,
    ACTIONS(223), 1,
      sym__identifier,
    STATE(52), 1,
      sym_segment_prefix,
    STATE(96), 1,
      sym_segment,
    ACTIONS(217), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    STATE(76), 4,
      sym__micro_op_operand,
      sym_hexadecimal,
      sym_register,
      sym_identifier,
    ACTIONS(215), 6,
      anon_sym_cs,
      anon_sym_ds,
      anon_sym_es,
      anon_sym_fs,
      anon_sym_gs,
      anon_sym_ss,
    ACTIONS(219), 7,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      aux_sym_register_token7,
  [1557] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      sym__identifier,
    ACTIONS(225), 1,
      sym_integer,
    STATE(55), 1,
      sym_segment_prefix,
    STATE(96), 1,
      sym_segment,
    ACTIONS(217), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    STATE(71), 4,
      sym__micro_op_operand,
      sym_hexadecimal,
      sym_register,
      sym_identifier,
    ACTIONS(215), 6,
      anon_sym_cs,
      anon_sym_ds,
      anon_sym_es,
      anon_sym_fs,
      anon_sym_gs,
      anon_sym_ss,
    ACTIONS(219), 7,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      aux_sym_register_token7,
  [1601] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      sym__identifier,
    ACTIONS(227), 1,
      sym_integer,
    STATE(54), 1,
      sym_segment_prefix,
    STATE(96), 1,
      sym_segment,
    ACTIONS(217), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    STATE(72), 4,
      sym__micro_op_operand,
      sym_hexadecimal,
      sym_register,
      sym_identifier,
    ACTIONS(215), 6,
      anon_sym_cs,
      anon_sym_ds,
      anon_sym_es,
      anon_sym_fs,
      anon_sym_gs,
      anon_sym_ss,
    ACTIONS(219), 7,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      aux_sym_register_token7,
  [1645] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      sym__identifier,
    ACTIONS(229), 1,
      sym_integer,
    STATE(53), 1,
      sym_segment_prefix,
    STATE(96), 1,
      sym_segment,
    ACTIONS(217), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    STATE(61), 4,
      sym__micro_op_operand,
      sym_hexadecimal,
      sym_register,
      sym_identifier,
    ACTIONS(215), 6,
      anon_sym_cs,
      anon_sym_ds,
      anon_sym_es,
      anon_sym_fs,
      anon_sym_gs,
      anon_sym_ss,
    ACTIONS(219), 7,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      aux_sym_register_token7,
  [1689] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 2,
      anon_sym_PTR,
      anon_sym_ptr,
    ACTIONS(233), 3,
      anon_sym_LBRACK,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(235), 18,
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
  [1722] = 10,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(247), 1,
      sym_integer,
    ACTIONS(251), 1,
      sym__identifier,
    ACTIONS(237), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(241), 2,
      aux_sym_binary_token1,
      aux_sym_binary_token2,
    ACTIONS(243), 2,
      aux_sym_octal_token1,
      aux_sym_octal_token2,
    ACTIONS(245), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(249), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(239), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    STATE(81), 7,
      sym_hexadecimal,
      sym_binary,
      sym_octal,
      sym__constant,
      sym_float,
      sym_string,
      sym_identifier,
  [1766] = 10,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(251), 1,
      sym__identifier,
    ACTIONS(255), 1,
      sym_integer,
    ACTIONS(241), 2,
      aux_sym_binary_token1,
      aux_sym_binary_token2,
    ACTIONS(243), 2,
      aux_sym_octal_token1,
      aux_sym_octal_token2,
    ACTIONS(245), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(249), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(253), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(239), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    STATE(62), 7,
      sym_hexadecimal,
      sym_binary,
      sym_octal,
      sym__constant,
      sym_float,
      sym_string,
      sym_identifier,
  [1810] = 10,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(247), 1,
      sym_integer,
    ACTIONS(251), 1,
      sym__identifier,
    ACTIONS(241), 2,
      aux_sym_binary_token1,
      aux_sym_binary_token2,
    ACTIONS(243), 2,
      aux_sym_octal_token1,
      aux_sym_octal_token2,
    ACTIONS(245), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(249), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(257), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(239), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    STATE(81), 7,
      sym_hexadecimal,
      sym_binary,
      sym_octal,
      sym__constant,
      sym_float,
      sym_string,
      sym_identifier,
  [1854] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 3,
      anon_sym_LBRACK,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(261), 18,
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
  [1883] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      sym_integer,
    ACTIONS(251), 1,
      sym__identifier,
    ACTIONS(241), 2,
      aux_sym_binary_token1,
      aux_sym_binary_token2,
    ACTIONS(243), 2,
      aux_sym_octal_token1,
      aux_sym_octal_token2,
    ACTIONS(245), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(263), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(239), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    STATE(81), 7,
      sym_hexadecimal,
      sym_binary,
      sym_octal,
      sym__constant,
      sym_float,
      sym_string,
      sym_identifier,
  [1923] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      sym__identifier,
    ACTIONS(265), 1,
      sym_integer,
    ACTIONS(217), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    STATE(77), 4,
      sym__micro_op_operand,
      sym_hexadecimal,
      sym_register,
      sym_identifier,
    ACTIONS(219), 7,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      aux_sym_register_token7,
  [1953] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      sym__identifier,
    ACTIONS(267), 1,
      sym_integer,
    ACTIONS(217), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    STATE(73), 4,
      sym__micro_op_operand,
      sym_hexadecimal,
      sym_register,
      sym_identifier,
    ACTIONS(219), 7,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      aux_sym_register_token7,
  [1983] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      sym__identifier,
    ACTIONS(227), 1,
      sym_integer,
    ACTIONS(217), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    STATE(72), 4,
      sym__micro_op_operand,
      sym_hexadecimal,
      sym_register,
      sym_identifier,
    ACTIONS(219), 7,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      aux_sym_register_token7,
  [2013] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      sym__identifier,
    ACTIONS(269), 1,
      sym_integer,
    ACTIONS(217), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    STATE(68), 4,
      sym__micro_op_operand,
      sym_hexadecimal,
      sym_register,
      sym_identifier,
    ACTIONS(219), 7,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      aux_sym_register_token7,
  [2043] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      sym_integer,
    ACTIONS(223), 1,
      sym__identifier,
    ACTIONS(217), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    STATE(76), 4,
      sym__micro_op_operand,
      sym_hexadecimal,
      sym_register,
      sym_identifier,
    ACTIONS(219), 7,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      aux_sym_register_token7,
  [2073] = 10,
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
      ts_builtin_sym_end,
    ACTIONS(273), 1,
      sym_comment,
    STATE(2), 1,
      sym_nasm_macro,
    STATE(94), 2,
      sym__normal_instruction,
      sym__gcc_pseudo_op,
    STATE(92), 4,
      sym__statement,
      sym_call_instruction,
      sym_instruction,
      sym__macro,
  [2108] = 10,
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
    ACTIONS(273), 1,
      sym_comment,
    ACTIONS(275), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_nasm_macro,
    STATE(94), 2,
      sym__normal_instruction,
      sym__gcc_pseudo_op,
    STATE(92), 4,
      sym__statement,
      sym_call_instruction,
      sym_instruction,
      sym__macro,
  [2143] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 12,
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
      sym_integer,
      sym__identifier,
  [2161] = 9,
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
    ACTIONS(273), 1,
      sym_comment,
    STATE(2), 1,
      sym_nasm_macro,
    STATE(94), 2,
      sym__normal_instruction,
      sym__gcc_pseudo_op,
    STATE(92), 4,
      sym__statement,
      sym_call_instruction,
      sym_instruction,
      sym__macro,
  [2193] = 7,
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
    STATE(93), 2,
      sym_call_instruction,
      sym_instruction,
    STATE(94), 2,
      sym__normal_instruction,
      sym__gcc_pseudo_op,
  [2218] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_RBRACK,
    STATE(70), 1,
      aux_sym_pointer_repeat1,
    ACTIONS(281), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2233] = 5,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(285), 1,
      ts_builtin_sym_end,
    ACTIONS(287), 1,
      anon_sym_LF,
    STATE(66), 1,
      aux_sym__gcc_pseudo_op_repeat1,
    ACTIONS(289), 2,
      anon_sym_COMMA,
      anon_sym_,
  [2250] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      anon_sym_RBRACK,
    STATE(75), 1,
      aux_sym_pointer_repeat1,
    ACTIONS(281), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2265] = 5,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(293), 1,
      ts_builtin_sym_end,
    ACTIONS(295), 1,
      anon_sym_LF,
    STATE(64), 1,
      aux_sym__gcc_pseudo_op_repeat1,
    ACTIONS(297), 2,
      anon_sym_COMMA,
      anon_sym_,
  [2282] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_RBRACK,
    STATE(75), 1,
      aux_sym_pointer_repeat1,
    ACTIONS(281), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2297] = 5,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(237), 1,
      ts_builtin_sym_end,
    ACTIONS(302), 1,
      anon_sym_LF,
    STATE(64), 1,
      aux_sym__gcc_pseudo_op_repeat1,
    ACTIONS(304), 2,
      anon_sym_COMMA,
      anon_sym_,
  [2314] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_RBRACK,
    STATE(75), 1,
      aux_sym_pointer_repeat1,
    ACTIONS(281), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2329] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_RBRACK,
    STATE(67), 1,
      aux_sym_pointer_repeat1,
    ACTIONS(281), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2344] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_RBRACK,
    STATE(75), 1,
      aux_sym_pointer_repeat1,
    ACTIONS(281), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2359] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_RBRACK,
    STATE(75), 1,
      aux_sym_pointer_repeat1,
    ACTIONS(281), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2374] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      anon_sym_RBRACK,
    STATE(63), 1,
      aux_sym_pointer_repeat1,
    ACTIONS(281), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2389] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_RBRACK,
    STATE(69), 1,
      aux_sym_pointer_repeat1,
    ACTIONS(281), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2404] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_RBRACK,
    STATE(65), 1,
      aux_sym_pointer_repeat1,
    ACTIONS(281), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2419] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_RBRACK,
    STATE(75), 1,
      aux_sym_pointer_repeat1,
    ACTIONS(281), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2434] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 1,
      anon_sym_RBRACK,
    STATE(75), 1,
      aux_sym_pointer_repeat1,
    ACTIONS(316), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2449] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      anon_sym_RBRACK,
    STATE(74), 1,
      aux_sym_pointer_repeat1,
    ACTIONS(281), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2464] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 4,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RBRACK,
  [2474] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 4,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RBRACK,
  [2484] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(175), 1,
      ts_builtin_sym_end,
    ACTIONS(177), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [2496] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(149), 1,
      ts_builtin_sym_end,
    ACTIONS(151), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [2508] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(293), 1,
      ts_builtin_sym_end,
    ACTIONS(295), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [2520] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(199), 1,
      ts_builtin_sym_end,
    ACTIONS(201), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [2532] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(195), 1,
      ts_builtin_sym_end,
    ACTIONS(197), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [2544] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(191), 1,
      ts_builtin_sym_end,
    ACTIONS(193), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [2556] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(179), 1,
      ts_builtin_sym_end,
    ACTIONS(181), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [2568] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 4,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RBRACK,
  [2578] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 4,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RBRACK,
  [2588] = 4,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(321), 1,
      ts_builtin_sym_end,
    ACTIONS(323), 1,
      anon_sym_LF,
    STATE(88), 1,
      aux_sym_program_repeat1,
  [2601] = 4,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(275), 1,
      ts_builtin_sym_end,
    ACTIONS(326), 1,
      anon_sym_LF,
    STATE(88), 1,
      aux_sym_program_repeat1,
  [2614] = 4,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(328), 1,
      ts_builtin_sym_end,
    ACTIONS(330), 1,
      anon_sym_LF,
    STATE(89), 1,
      aux_sym_program_repeat1,
  [2627] = 2,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(332), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2635] = 2,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(321), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2643] = 2,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(334), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2651] = 2,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(336), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2659] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      anon_sym_COLON,
  [2666] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      anon_sym_COLON,
  [2673] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      ts_builtin_sym_end,
  [2680] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      sym__identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(8)] = 0,
  [SMALL_STATE(9)] = 68,
  [SMALL_STATE(10)] = 136,
  [SMALL_STATE(11)] = 183,
  [SMALL_STATE(12)] = 230,
  [SMALL_STATE(13)] = 279,
  [SMALL_STATE(14)] = 326,
  [SMALL_STATE(15)] = 373,
  [SMALL_STATE(16)] = 420,
  [SMALL_STATE(17)] = 467,
  [SMALL_STATE(18)] = 514,
  [SMALL_STATE(19)] = 561,
  [SMALL_STATE(20)] = 608,
  [SMALL_STATE(21)] = 655,
  [SMALL_STATE(22)] = 702,
  [SMALL_STATE(23)] = 749,
  [SMALL_STATE(24)] = 796,
  [SMALL_STATE(25)] = 843,
  [SMALL_STATE(26)] = 883,
  [SMALL_STATE(27)] = 923,
  [SMALL_STATE(28)] = 963,
  [SMALL_STATE(29)] = 1003,
  [SMALL_STATE(30)] = 1043,
  [SMALL_STATE(31)] = 1085,
  [SMALL_STATE(32)] = 1125,
  [SMALL_STATE(33)] = 1165,
  [SMALL_STATE(34)] = 1205,
  [SMALL_STATE(35)] = 1245,
  [SMALL_STATE(36)] = 1285,
  [SMALL_STATE(37)] = 1325,
  [SMALL_STATE(38)] = 1365,
  [SMALL_STATE(39)] = 1405,
  [SMALL_STATE(40)] = 1459,
  [SMALL_STATE(41)] = 1513,
  [SMALL_STATE(42)] = 1557,
  [SMALL_STATE(43)] = 1601,
  [SMALL_STATE(44)] = 1645,
  [SMALL_STATE(45)] = 1689,
  [SMALL_STATE(46)] = 1722,
  [SMALL_STATE(47)] = 1766,
  [SMALL_STATE(48)] = 1810,
  [SMALL_STATE(49)] = 1854,
  [SMALL_STATE(50)] = 1883,
  [SMALL_STATE(51)] = 1923,
  [SMALL_STATE(52)] = 1953,
  [SMALL_STATE(53)] = 1983,
  [SMALL_STATE(54)] = 2013,
  [SMALL_STATE(55)] = 2043,
  [SMALL_STATE(56)] = 2073,
  [SMALL_STATE(57)] = 2108,
  [SMALL_STATE(58)] = 2143,
  [SMALL_STATE(59)] = 2161,
  [SMALL_STATE(60)] = 2193,
  [SMALL_STATE(61)] = 2218,
  [SMALL_STATE(62)] = 2233,
  [SMALL_STATE(63)] = 2250,
  [SMALL_STATE(64)] = 2265,
  [SMALL_STATE(65)] = 2282,
  [SMALL_STATE(66)] = 2297,
  [SMALL_STATE(67)] = 2314,
  [SMALL_STATE(68)] = 2329,
  [SMALL_STATE(69)] = 2344,
  [SMALL_STATE(70)] = 2359,
  [SMALL_STATE(71)] = 2374,
  [SMALL_STATE(72)] = 2389,
  [SMALL_STATE(73)] = 2404,
  [SMALL_STATE(74)] = 2419,
  [SMALL_STATE(75)] = 2434,
  [SMALL_STATE(76)] = 2449,
  [SMALL_STATE(77)] = 2464,
  [SMALL_STATE(78)] = 2474,
  [SMALL_STATE(79)] = 2484,
  [SMALL_STATE(80)] = 2496,
  [SMALL_STATE(81)] = 2508,
  [SMALL_STATE(82)] = 2520,
  [SMALL_STATE(83)] = 2532,
  [SMALL_STATE(84)] = 2544,
  [SMALL_STATE(85)] = 2556,
  [SMALL_STATE(86)] = 2568,
  [SMALL_STATE(87)] = 2578,
  [SMALL_STATE(88)] = 2588,
  [SMALL_STATE(89)] = 2601,
  [SMALL_STATE(90)] = 2614,
  [SMALL_STATE(91)] = 2627,
  [SMALL_STATE(92)] = 2635,
  [SMALL_STATE(93)] = 2643,
  [SMALL_STATE(94)] = 2651,
  [SMALL_STATE(95)] = 2659,
  [SMALL_STATE(96)] = 2666,
  [SMALL_STATE(97)] = 2673,
  [SMALL_STATE(98)] = 2680,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro, 1),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__macro_repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__macro_repeat1, 2), SHIFT_REPEAT(19),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__macro_repeat1, 2), SHIFT_REPEAT(45),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__macro_repeat1, 2), SHIFT_REPEAT(44),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__macro_repeat1, 2), SHIFT_REPEAT(18),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__macro_repeat1, 2), SHIFT_REPEAT(17),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__macro_repeat1, 2), SHIFT_REPEAT(11),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__macro_repeat1, 2), SHIFT_REPEAT(20),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__macro_repeat1, 2), SHIFT_REPEAT(23),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__macro_repeat1, 2), SHIFT_REPEAT(12),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__macro_repeat1, 2), SHIFT_REPEAT(22),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__macro_repeat1, 2), SHIFT_REPEAT(21),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro, 2),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__normal_instruction_repeat1, 2),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat1, 2), SHIFT_REPEAT(9),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat1, 2), SHIFT_REPEAT(45),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat1, 2), SHIFT_REPEAT(42),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat1, 2), SHIFT_REPEAT(31),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat1, 2), SHIFT_REPEAT(26),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat1, 2), SHIFT_REPEAT(36),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat1, 2), SHIFT_REPEAT(35),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat1, 2), SHIFT_REPEAT(33),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat1, 2), SHIFT_REPEAT(30),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat1, 2), SHIFT_REPEAT(29),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat1, 2), SHIFT_REPEAT(27),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__normal_instruction, 1),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__normal_instruction, 2),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer, 4),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pointer, 4),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_octal, 1),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_octal, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant, 1),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__constant, 1),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__operand, 2),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__operand, 2),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer, 3),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pointer, 3),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer, 5),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pointer, 5),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer, 6),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pointer, 6),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary, 1),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary, 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hexadecimal, 1),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hexadecimal, 1),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register, 1),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_register, 1),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 1),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nasm_macro, 2),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nasm_macro, 2),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat1, 2),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_width, 1),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_width, 1),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gcc_pseudo_op, 3),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gcc_pseudo_op, 1),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gcc_pseudo_op, 4),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_width, 2),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_width, 2),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_segment_prefix, 2),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gcc_pseudo_op, 2),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__gcc_pseudo_op, 2),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__gcc_pseudo_op_repeat1, 2),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__gcc_pseudo_op_repeat1, 2),
  [297] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__gcc_pseudo_op_repeat1, 2), SHIFT_REPEAT(50),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__gcc_pseudo_op, 3),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [316] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pointer_repeat1, 2), SHIFT_REPEAT(51),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pointer_repeat1, 2),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(59),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_instruction, 2),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_segment, 1),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [342] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
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
