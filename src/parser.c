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
#define STATE_COUNT 101
#define LARGE_STATE_COUNT 11
#define SYMBOL_COUNT 88
#define ALIAS_COUNT 0
#define TOKEN_COUNT 59
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
  sym__any_text = 56,
  sym_placeholder = 57,
  sym__identifier = 58,
  sym_program = 59,
  sym__statement = 60,
  sym_segment_prefix = 61,
  sym_segment = 62,
  sym_call_instruction = 63,
  sym_instruction = 64,
  sym__normal_instruction = 65,
  sym__gcc_pseudo_op = 66,
  sym__macro = 67,
  sym_operator = 68,
  sym_nasm_macro = 69,
  sym__operand = 70,
  sym_width = 71,
  sym_pointer = 72,
  sym__micro_op_operand = 73,
  sym_hexadecimal = 74,
  sym_binary = 75,
  sym_octal = 76,
  sym_register = 77,
  sym__constant = 78,
  sym_float = 79,
  sym_string = 80,
  sym_identifier = 81,
  aux_sym_program_repeat1 = 82,
  aux_sym_call_instruction_repeat1 = 83,
  aux_sym__normal_instruction_repeat1 = 84,
  aux_sym__gcc_pseudo_op_repeat1 = 85,
  aux_sym__macro_repeat1 = 86,
  aux_sym_pointer_repeat1 = 87,
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
  [sym__any_text] = "identifier",
  [sym_placeholder] = "placeholder",
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
  [aux_sym_call_instruction_repeat1] = "call_instruction_repeat1",
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
  [sym__any_text] = sym_identifier,
  [sym_placeholder] = sym_placeholder,
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
  [aux_sym_call_instruction_repeat1] = aux_sym_call_instruction_repeat1,
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
  [sym__any_text] = {
    .visible = true,
    .named = true,
  },
  [sym_placeholder] = {
    .visible = true,
    .named = true,
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
  [aux_sym_call_instruction_repeat1] = {
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
  [26] = 26,
  [27] = 27,
  [28] = 23,
  [29] = 18,
  [30] = 16,
  [31] = 20,
  [32] = 24,
  [33] = 12,
  [34] = 15,
  [35] = 22,
  [36] = 13,
  [37] = 19,
  [38] = 14,
  [39] = 26,
  [40] = 17,
  [41] = 41,
  [42] = 41,
  [43] = 43,
  [44] = 43,
  [45] = 45,
  [46] = 45,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 53,
  [56] = 56,
  [57] = 56,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 63,
  [69] = 67,
  [70] = 70,
  [71] = 64,
  [72] = 65,
  [73] = 73,
  [74] = 70,
  [75] = 75,
  [76] = 76,
  [77] = 73,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 23,
  [82] = 26,
  [83] = 20,
  [84] = 22,
  [85] = 13,
  [86] = 19,
  [87] = 24,
  [88] = 20,
  [89] = 19,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
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

static inline bool sym__any_text_character_set_1(int32_t c) {
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

static inline bool sym__any_text_character_set_2(int32_t c) {
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

static inline bool sym__any_text_character_set_3(int32_t c) {
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(124);
      if (lookahead == '!') ADVANCE(32);
      if (lookahead == '"') ADVANCE(25);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(128);
      if (lookahead == '$') ADVANCE(28);
      if (lookahead == '%') ADVANCE(158);
      if (lookahead == '\'') ADVANCE(26);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(150);
      if (lookahead == ',') ADVANCE(146);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '.') ADVANCE(102);
      if (lookahead == '/') ADVANCE(154);
      if (lookahead == '0') ADVANCE(286);
      if (lookahead == '1') ADVANCE(288);
      if (lookahead == ':') ADVANCE(129);
      if (lookahead == '<') ADVANCE(33);
      if (lookahead == '=') ADVANCE(34);
      if (lookahead == '>') ADVANCE(35);
      if (lookahead == '?') ADVANCE(413);
      if (lookahead == 'B') ADVANCE(51);
      if (lookahead == 'D') ADVANCE(49);
      if (lookahead == 'P') ADVANCE(47);
      if (lookahead == 'Q') ADVANCE(50);
      if (lookahead == 'W') ADVANCE(40);
      if (lookahead == '[') ADVANCE(197);
      if (lookahead == '\\') SKIP(104)
      if (lookahead == ']') ADVANCE(199);
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
          lookahead == '9') ADVANCE(292);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'a') ADVANCE(98);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(291);
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
          lookahead == ';') ADVANCE(128);
      if (lookahead == '%') ADVANCE(158);
      if (lookahead == '.') ADVANCE(30);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == ':') ADVANCE(142);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == 'c') ADVANCE(161);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(128);
      if (lookahead == '%') ADVANCE(158);
      if (lookahead == '.') ADVANCE(30);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == 'c') ADVANCE(161);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(25);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(128);
      if (lookahead == '$') ADVANCE(419);
      if (lookahead == '%') ADVANCE(53);
      if (lookahead == '\'') ADVANCE(26);
      if (lookahead == '-') ADVANCE(417);
      if (lookahead == '.') ADVANCE(479);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '0') ADVANCE(295);
      if (lookahead == '1') ADVANCE(297);
      if (lookahead == '?') ADVANCE(413);
      if (lookahead == 'B') ADVANCE(438);
      if (lookahead == 'D') ADVANCE(436);
      if (lookahead == 'Q') ADVANCE(437);
      if (lookahead == 'W') ADVANCE(427);
      if (lookahead == '[') ADVANCE(197);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == '_') ADVANCE(476);
      if (lookahead == 'b') ADVANCE(460);
      if (lookahead == 'd') ADVANCE(452);
      if (lookahead == 'e') ADVANCE(439);
      if (lookahead == 'q') ADVANCE(473);
      if (lookahead == 'r') ADVANCE(420);
      if (lookahead == 's') ADVANCE(450);
      if (lookahead == 'w') ADVANCE(457);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(474);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(301);
      if (lookahead == 'x' ||
          lookahead == 'y') ADVANCE(456);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'f') ADVANCE(482);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(300);
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
          ('>' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(25);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(128);
      if (lookahead == '$') ADVANCE(419);
      if (lookahead == '%') ADVANCE(53);
      if (lookahead == '\'') ADVANCE(26);
      if (lookahead == '-') ADVANCE(417);
      if (lookahead == '.') ADVANCE(479);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '0') ADVANCE(295);
      if (lookahead == '1') ADVANCE(297);
      if (lookahead == '?') ADVANCE(413);
      if (lookahead == 'P') ADVANCE(435);
      if (lookahead == '[') ADVANCE(197);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == '_') ADVANCE(476);
      if (lookahead == 'b') ADVANCE(461);
      if (lookahead == 'd') ADVANCE(453);
      if (lookahead == 'e') ADVANCE(439);
      if (lookahead == 'p') ADVANCE(472);
      if (lookahead == 'r') ADVANCE(420);
      if (lookahead == 's') ADVANCE(450);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(474);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(301);
      if (lookahead == 'x' ||
          lookahead == 'y') ADVANCE(456);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'f') ADVANCE(482);
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
          ('>' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(25);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(128);
      if (lookahead == '$') ADVANCE(419);
      if (lookahead == '%') ADVANCE(53);
      if (lookahead == '\'') ADVANCE(26);
      if (lookahead == '-') ADVANCE(417);
      if (lookahead == '.') ADVANCE(479);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '0') ADVANCE(295);
      if (lookahead == '1') ADVANCE(297);
      if (lookahead == '?') ADVANCE(413);
      if (lookahead == '[') ADVANCE(197);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == '_') ADVANCE(476);
      if (lookahead == 'b') ADVANCE(461);
      if (lookahead == 'd') ADVANCE(453);
      if (lookahead == 'e') ADVANCE(439);
      if (lookahead == 'r') ADVANCE(420);
      if (lookahead == 's') ADVANCE(450);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(474);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(301);
      if (lookahead == 'x' ||
          lookahead == 'y') ADVANCE(456);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'f') ADVANCE(482);
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
          ('>' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(25);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(128);
      if (lookahead == '$') ADVANCE(419);
      if (lookahead == '\'') ADVANCE(26);
      if (lookahead == '-') ADVANCE(417);
      if (lookahead == '.') ADVANCE(479);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '0') ADVANCE(295);
      if (lookahead == '1') ADVANCE(297);
      if (lookahead == '\\') SKIP(12)
      if (lookahead == '_') ADVANCE(476);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(301);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(300);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(24)
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(482);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 25:
      if (lookahead == '"') ADVANCE(329);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '\'') ADVANCE(331);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == '/') ADVANCE(128);
      END_STATE();
    case 28:
      if (lookahead == '0') ADVANCE(101);
      END_STATE();
    case 29:
      if (lookahead == '1') ADVANCE(94);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(252);
      if (lookahead == 'b') ADVANCE(70);
      if (lookahead == 'd') ADVANCE(62);
      if (lookahead == 'i') ADVANCE(72);
      if (lookahead == 's') ADVANCE(61);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(85);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(142);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(142);
      if (sym_label_character_set_1(lookahead)) ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == '=') ADVANCE(148);
      END_STATE();
    case 33:
      if (lookahead == '=') ADVANCE(155);
      END_STATE();
    case 34:
      if (lookahead == '=') ADVANCE(156);
      END_STATE();
    case 35:
      if (lookahead == '=') ADVANCE(157);
      END_STATE();
    case 36:
      if (lookahead == 'D') ADVANCE(178);
      END_STATE();
    case 37:
      if (lookahead == 'D') ADVANCE(172);
      END_STATE();
    case 38:
      if (lookahead == 'D') ADVANCE(175);
      END_STATE();
    case 39:
      if (lookahead == 'E') ADVANCE(169);
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
      if (lookahead == 'R') ADVANCE(193);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      END_STATE();
    case 50:
      if (lookahead == 'W') ADVANCE(42);
      END_STATE();
    case 51:
      if (lookahead == 'Y') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(59);
      if (lookahead == 's') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      END_STATE();
    case 53:
      if (lookahead == 'b') ADVANCE(71);
      if (lookahead == 'd') ADVANCE(63);
      if (lookahead == 'e') ADVANCE(54);
      if (lookahead == 'r') ADVANCE(29);
      if (lookahead == 's') ADVANCE(61);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(86);
      if (lookahead == 'x' ||
          lookahead == 'y') ADVANCE(66);
      END_STATE();
    case 54:
      if (lookahead == 'b') ADVANCE(70);
      if (lookahead == 'd') ADVANCE(62);
      if (lookahead == 's') ADVANCE(61);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(85);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(190);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(184);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(187);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 59:
      if (lookahead == 'h') ADVANCE(200);
      if (lookahead == 'l') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      END_STATE();
    case 60:
      if (lookahead == 'h') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(244);
      if (lookahead == 'p') ADVANCE(248);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(244);
      if (lookahead == 'x') ADVANCE(240);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(244);
      if (lookahead == 'x') ADVANCE(240);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(236);
      END_STATE();
    case 64:
      if (lookahead == 'l') ADVANCE(143);
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
      if (lookahead == 'p') ADVANCE(248);
      if (lookahead == 'x') ADVANCE(240);
      END_STATE();
    case 71:
      if (lookahead == 'p') ADVANCE(248);
      if (lookahead == 'x') ADVANCE(240);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(236);
      END_STATE();
    case 72:
      if (lookahead == 'p') ADVANCE(260);
      END_STATE();
    case 73:
      if (lookahead == 'r') ADVANCE(195);
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
      if (lookahead == 's') ADVANCE(132);
      if (lookahead == 'w') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      END_STATE();
    case 78:
      if (lookahead == 's') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      END_STATE();
    case 79:
      if (lookahead == 's') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      END_STATE();
    case 80:
      if (lookahead == 's') ADVANCE(138);
      END_STATE();
    case 81:
      if (lookahead == 's') ADVANCE(140);
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
      if (lookahead == 'x') ADVANCE(240);
      END_STATE();
    case 86:
      if (lookahead == 'x') ADVANCE(240);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(236);
      END_STATE();
    case 87:
      if (lookahead == 'y') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      END_STATE();
    case 88:
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(128);
      if (lookahead == '$') ADVANCE(419);
      if (lookahead == '%') ADVANCE(53);
      if (lookahead == '-') ADVANCE(418);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '0') ADVANCE(313);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == 'a') ADVANCE(474);
      if (lookahead == 'b') ADVANCE(461);
      if (lookahead == 'c') ADVANCE(468);
      if (lookahead == 'd') ADVANCE(451);
      if (lookahead == 'e') ADVANCE(440);
      if (lookahead == 'f') ADVANCE(469);
      if (lookahead == 'g') ADVANCE(470);
      if (lookahead == 'r') ADVANCE(420);
      if (lookahead == 's') ADVANCE(449);
      if (lookahead == 'x' ||
          lookahead == 'y') ADVANCE(456);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(482);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(88)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(315);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 89:
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(128);
      if (lookahead == '$') ADVANCE(419);
      if (lookahead == '%') ADVANCE(53);
      if (lookahead == '-') ADVANCE(418);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '0') ADVANCE(313);
      if (lookahead == '\\') SKIP(14)
      if (lookahead == 'b') ADVANCE(461);
      if (lookahead == 'd') ADVANCE(453);
      if (lookahead == 'e') ADVANCE(439);
      if (lookahead == 'r') ADVANCE(420);
      if (lookahead == 's') ADVANCE(450);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(474);
      if (lookahead == 'x' ||
          lookahead == 'y') ADVANCE(456);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'f') ADVANCE(482);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(89)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(315);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 90:
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(128);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(150);
      if (lookahead == '-') ADVANCE(151);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '\\') SKIP(16)
      if (lookahead == ']') ADVANCE(199);
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
          lookahead == ';') ADVANCE(128);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 92:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(274);
      END_STATE();
    case 93:
      if (lookahead == 'b' ||
          lookahead == 'y') ADVANCE(209);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(93);
      END_STATE();
    case 94:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(252);
      END_STATE();
    case 95:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(256);
      END_STATE();
    case 96:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(274);
      END_STATE();
    case 97:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      END_STATE();
    case 98:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      END_STATE();
    case 99:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(206);
      END_STATE();
    case 100:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(203);
      END_STATE();
    case 101:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(100);
      END_STATE();
    case 102:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 103:
      if (eof) ADVANCE(124);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 104:
      if (eof) ADVANCE(124);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(103)
      END_STATE();
    case 105:
      if (eof) ADVANCE(124);
      if (lookahead == '\n') SKIP(123)
      END_STATE();
    case 106:
      if (eof) ADVANCE(124);
      if (lookahead == '\n') SKIP(123)
      if (lookahead == '\r') SKIP(105)
      END_STATE();
    case 107:
      if (eof) ADVANCE(124);
      if (lookahead == '\n') SKIP(109)
      END_STATE();
    case 108:
      if (eof) ADVANCE(124);
      if (lookahead == '\n') SKIP(109)
      if (lookahead == '\r') SKIP(107)
      END_STATE();
    case 109:
      if (eof) ADVANCE(124);
      if (lookahead == '\n') ADVANCE(125);
      if (lookahead == '!') ADVANCE(32);
      if (lookahead == '"') ADVANCE(25);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(128);
      if (lookahead == '$') ADVANCE(419);
      if (lookahead == '%') ADVANCE(53);
      if (lookahead == '\'') ADVANCE(26);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '+') ADVANCE(150);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '.') ADVANCE(479);
      if (lookahead == '/') ADVANCE(154);
      if (lookahead == '0') ADVANCE(295);
      if (lookahead == '1') ADVANCE(297);
      if (lookahead == '<') ADVANCE(421);
      if (lookahead == '=') ADVANCE(34);
      if (lookahead == '>') ADVANCE(422);
      if (lookahead == '?') ADVANCE(413);
      if (lookahead == 'B') ADVANCE(438);
      if (lookahead == 'D') ADVANCE(436);
      if (lookahead == 'Q') ADVANCE(437);
      if (lookahead == 'W') ADVANCE(427);
      if (lookahead == '[') ADVANCE(197);
      if (lookahead == '\\') SKIP(108)
      if (lookahead == '_') ADVANCE(476);
      if (lookahead == 'b') ADVANCE(460);
      if (lookahead == 'd') ADVANCE(452);
      if (lookahead == 'e') ADVANCE(439);
      if (lookahead == 'q') ADVANCE(473);
      if (lookahead == 'r') ADVANCE(420);
      if (lookahead == 's') ADVANCE(450);
      if (lookahead == 'w') ADVANCE(457);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(474);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(301);
      if (lookahead == 'x' ||
          lookahead == 'y') ADVANCE(456);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'f') ADVANCE(482);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(300);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(109)
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 110:
      if (eof) ADVANCE(124);
      if (lookahead == '\n') ADVANCE(125);
      if (lookahead == '"') ADVANCE(25);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(128);
      if (lookahead == '$') ADVANCE(419);
      if (lookahead == '%') ADVANCE(53);
      if (lookahead == '\'') ADVANCE(26);
      if (lookahead == ',') ADVANCE(146);
      if (lookahead == '-') ADVANCE(417);
      if (lookahead == '.') ADVANCE(479);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '0') ADVANCE(295);
      if (lookahead == '1') ADVANCE(297);
      if (lookahead == '?') ADVANCE(413);
      if (lookahead == 'B') ADVANCE(438);
      if (lookahead == 'D') ADVANCE(436);
      if (lookahead == 'Q') ADVANCE(437);
      if (lookahead == 'W') ADVANCE(427);
      if (lookahead == '[') ADVANCE(197);
      if (lookahead == '\\') SKIP(115)
      if (lookahead == '_') ADVANCE(476);
      if (lookahead == 'b') ADVANCE(460);
      if (lookahead == 'd') ADVANCE(452);
      if (lookahead == 'e') ADVANCE(439);
      if (lookahead == 'q') ADVANCE(473);
      if (lookahead == 'r') ADVANCE(420);
      if (lookahead == 's') ADVANCE(450);
      if (lookahead == 'w') ADVANCE(457);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(474);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(301);
      if (lookahead == 'x' ||
          lookahead == 'y') ADVANCE(456);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'f') ADVANCE(482);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(300);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(110)
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '<' ||
          ('>' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 111:
      if (eof) ADVANCE(124);
      if (lookahead == '\n') ADVANCE(125);
      if (lookahead == '"') ADVANCE(25);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(128);
      if (lookahead == '$') ADVANCE(419);
      if (lookahead == '\'') ADVANCE(26);
      if (lookahead == '-') ADVANCE(417);
      if (lookahead == '.') ADVANCE(479);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '0') ADVANCE(295);
      if (lookahead == '1') ADVANCE(297);
      if (lookahead == '\\') SKIP(117)
      if (lookahead == '_') ADVANCE(476);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(301);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(300);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(111)
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(482);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 112:
      if (eof) ADVANCE(124);
      if (lookahead == '\n') ADVANCE(125);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(128);
      if (lookahead == '.') ADVANCE(102);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '\\') SKIP(119)
      if (lookahead == 'c') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(112)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 113:
      if (eof) ADVANCE(124);
      if (lookahead == '\n') ADVANCE(126);
      if (lookahead == '"') ADVANCE(333);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(128);
      if (lookahead == '$') ADVANCE(341);
      if (lookahead == '%') ADVANCE(358);
      if (lookahead == '\'') ADVANCE(334);
      if (lookahead == '-') ADVANCE(339);
      if (lookahead == '.') ADVANCE(402);
      if (lookahead == '/') ADVANCE(340);
      if (lookahead == '0') ADVANCE(304);
      if (lookahead == '1') ADVANCE(306);
      if (lookahead == '?') ADVANCE(414);
      if (lookahead == 'B') ADVANCE(357);
      if (lookahead == 'D') ADVANCE(355);
      if (lookahead == 'Q') ADVANCE(356);
      if (lookahead == 'W') ADVANCE(348);
      if (lookahead == '[') ADVANCE(198);
      if (lookahead == '\\') ADVANCE(336);
      if (lookahead == '_') ADVANCE(397);
      if (lookahead == 'b') ADVANCE(382);
      if (lookahead == 'd') ADVANCE(370);
      if (lookahead == 'e') ADVANCE(359);
      if (lookahead == 'q') ADVANCE(392);
      if (lookahead == 'r') ADVANCE(342);
      if (lookahead == 's') ADVANCE(369);
      if (lookahead == 'w') ADVANCE(379);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(393);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(310);
      if (lookahead == 'x' ||
          lookahead == 'y') ADVANCE(377);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'f') ADVANCE(407);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(309);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(335);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '<' ||
          ('>' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 114:
      if (eof) ADVANCE(124);
      if (lookahead == '\n') SKIP(110)
      END_STATE();
    case 115:
      if (eof) ADVANCE(124);
      if (lookahead == '\n') SKIP(110)
      if (lookahead == '\r') SKIP(114)
      END_STATE();
    case 116:
      if (eof) ADVANCE(124);
      if (lookahead == '\n') SKIP(111)
      END_STATE();
    case 117:
      if (eof) ADVANCE(124);
      if (lookahead == '\n') SKIP(111)
      if (lookahead == '\r') SKIP(116)
      END_STATE();
    case 118:
      if (eof) ADVANCE(124);
      if (lookahead == '\n') SKIP(112)
      END_STATE();
    case 119:
      if (eof) ADVANCE(124);
      if (lookahead == '\n') SKIP(112)
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
      if (lookahead == '\n') ADVANCE(127);
      if (lookahead == ' ') ADVANCE(147);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(128);
      if (lookahead == ',') ADVANCE(146);
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
          lookahead == ';') ADVANCE(128);
      if (lookahead == '%') ADVANCE(158);
      if (lookahead == '.') ADVANCE(30);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '\\') SKIP(106)
      if (lookahead == 'c') ADVANCE(161);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
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
      if (lookahead == '\\') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(335);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(127);
      if (lookahead == ' ') ADVANCE(147);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_cs);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_cs);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(486);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_ds);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_ds);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(486);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_es);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_es);
      if (lookahead == 'i') ADVANCE(245);
      if (lookahead == 'p') ADVANCE(249);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(486);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_fs);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_fs);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(486);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_gs);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_gs);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(486);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_ss);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_ss);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(486);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == ':') ADVANCE(142);
      if (sym_label_character_set_1(lookahead)) ADVANCE(31);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_call);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_call);
      if (lookahead == ':') ADVANCE(142);
      if (lookahead == ' ' ||
          lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          (',' <= lookahead && lookahead <= '.') ||
          lookahead == '<' ||
          lookahead == '>') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_call);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(127);
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
      if (lookahead == '.') ADVANCE(479);
      if (lookahead == '0') ADVANCE(302);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(303);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '0') ADVANCE(293);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(294);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(128);
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
      ACCEPT_TOKEN(sym_gcc_mnemonic);
      if (lookahead == ':') ADVANCE(142);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_gcc_mnemonic);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_mnemonic);
      if (lookahead == ':') ADVANCE(142);
      if (lookahead == 'a') ADVANCE(163);
      if (lookahead == ' ' ||
          lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          (',' <= lookahead && lookahead <= '.') ||
          lookahead == '<' ||
          lookahead == '>') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_mnemonic);
      if (lookahead == ':') ADVANCE(142);
      if (lookahead == 'l') ADVANCE(144);
      if (lookahead == ' ' ||
          lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          (',' <= lookahead && lookahead <= '.') ||
          lookahead == '<' ||
          lookahead == '>') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_mnemonic);
      if (lookahead == ':') ADVANCE(142);
      if (lookahead == 'l') ADVANCE(162);
      if (lookahead == ' ' ||
          lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          (',' <= lookahead && lookahead <= '.') ||
          lookahead == '<' ||
          lookahead == '>') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_mnemonic);
      if (lookahead == ':') ADVANCE(142);
      if (lookahead == ' ' ||
          lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          (',' <= lookahead && lookahead <= '.') ||
          lookahead == '<' ||
          lookahead == '>') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_mnemonic);
      if (lookahead == 'a') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_mnemonic);
      if (lookahead == 'l') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_mnemonic);
      if (lookahead == 'l') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_mnemonic);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_BYTE);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_BYTE);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(486);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_BYTE);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_DWORD);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_DWORD);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(486);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_DWORD);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_QWORD);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_QWORD);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(486);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_QWORD);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_WORD);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_WORD);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(486);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_WORD);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_byte);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_byte);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(486);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_byte);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_dword);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_dword);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(486);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_dword);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_qword);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_qword);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(486);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_qword);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_word);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_word);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(486);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_word);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_PTR);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_PTR);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(486);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_ptr);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_ptr);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(486);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_hexadecimal_token1);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_hexadecimal_token1);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(486);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_hexadecimal_token1);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_hexadecimal_token2);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_hexadecimal_token2);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(486);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_hexadecimal_token2);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_hexadecimal_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(206);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_hexadecimal_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(207);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_hexadecimal_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(208);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (lookahead == '_') ADVANCE(224);
      if (lookahead == 'h') ADVANCE(200);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(221);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (lookahead == '_') ADVANCE(225);
      if (lookahead == 'h') ADVANCE(201);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(222);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(448);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (lookahead == '_') ADVANCE(226);
      if (lookahead == 'h') ADVANCE(202);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(223);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(368);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (lookahead == 'h') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (lookahead == 'h') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(448);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (lookahead == 'h') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(368);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(224);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(225);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('2' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(226);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('2' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(486);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_binary_token2);
      if (lookahead == '_') ADVANCE(224);
      if (lookahead == 'h') ADVANCE(200);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(221);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_binary_token2);
      if (lookahead == '_') ADVANCE(225);
      if (lookahead == 'h') ADVANCE(201);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(222);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(448);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_binary_token2);
      if (lookahead == '_') ADVANCE(226);
      if (lookahead == 'h') ADVANCE(202);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(223);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(368);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_binary_token2);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(224);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_binary_token2);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(225);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('2' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_binary_token2);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(226);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('2' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_octal_token1);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_octal_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(233);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_octal_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(234);
      if (sym__identifier_character_set_2(lookahead)) ADVANCE(486);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_octal_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(235);
      if (sym__identifier_character_set_2(lookahead)) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_octal_token1);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(486);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_octal_token1);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_octal_token2);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(233);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_octal_token2);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(234);
      if (sym__identifier_character_set_2(lookahead)) ADVANCE(486);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_octal_token2);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(235);
      if (sym__identifier_character_set_2(lookahead)) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_register_token1);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_register_token1);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(486);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_register_token1);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_register_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_register_token2);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_register_token2);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(486);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_register_token2);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_register_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_register_token3);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_register_token3);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(486);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_register_token3);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_register_token3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_register_token4);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_register_token4);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(486);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_register_token4);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_register_token4);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_register_token5);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_register_token5);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(486);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_register_token5);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_register_token5);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_register_token6);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_register_token6);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(486);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_register_token6);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_register_token6);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_register_token7);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_register_token7);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(486);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_register_token7);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_register_token7);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == '.') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(264);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == '.') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == '.') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == '.') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == 'e') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == 'e') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == '.') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(274);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == '.') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == '.') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == '.') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == 'e') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(278);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == 'e') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == 'e') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_float_token2);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_integer);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(278);
      if (lookahead == '_') ADVANCE(93);
      if (lookahead == 'b') ADVANCE(210);
      if (lookahead == 'd') ADVANCE(318);
      if (lookahead == 'y') ADVANCE(216);
      if (lookahead == 'h' ||
          lookahead == 'x') ADVANCE(99);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(228);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(287);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(290);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(289);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(278);
      if (lookahead == '_') ADVANCE(93);
      if (lookahead == 'b') ADVANCE(213);
      if (lookahead == 'd') ADVANCE(319);
      if (lookahead == 'h') ADVANCE(200);
      if (lookahead == 'y') ADVANCE(209);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(227);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(287);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(290);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(289);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(278);
      if (lookahead == '_') ADVANCE(93);
      if (lookahead == 'b') ADVANCE(213);
      if (lookahead == 'd') ADVANCE(319);
      if (lookahead == 'y') ADVANCE(209);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(227);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(287);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(290);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(289);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(278);
      if (lookahead == 'd') ADVANCE(319);
      if (lookahead == 'h') ADVANCE(200);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(227);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(289);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(278);
      if (lookahead == 'd') ADVANCE(319);
      if (lookahead == 'h') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(290);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(278);
      if (lookahead == 'd') ADVANCE(319);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(227);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(289);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(278);
      if (lookahead == 'd') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(290);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(278);
      if (lookahead == 'd') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(294);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(278);
      if (lookahead == 'd') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(294);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(279);
      if (lookahead == '_') ADVANCE(476);
      if (lookahead == 'b') ADVANCE(211);
      if (lookahead == 'd') ADVANCE(320);
      if (lookahead == 'y') ADVANCE(217);
      if (lookahead == 'h' ||
          lookahead == 'x') ADVANCE(483);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(229);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(296);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(299);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(298);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(448);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(279);
      if (lookahead == '_') ADVANCE(476);
      if (lookahead == 'b') ADVANCE(214);
      if (lookahead == 'd') ADVANCE(321);
      if (lookahead == 'h') ADVANCE(201);
      if (lookahead == 'y') ADVANCE(219);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(231);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(296);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(299);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(298);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(448);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(279);
      if (lookahead == '_') ADVANCE(476);
      if (lookahead == 'b') ADVANCE(214);
      if (lookahead == 'd') ADVANCE(321);
      if (lookahead == 'y') ADVANCE(219);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(231);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(296);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(299);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(298);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(448);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(279);
      if (lookahead == 'd') ADVANCE(321);
      if (lookahead == 'h') ADVANCE(201);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(231);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(298);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(448);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(279);
      if (lookahead == 'd') ADVANCE(321);
      if (lookahead == 'h') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(299);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(448);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(279);
      if (lookahead == 'd') ADVANCE(321);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(231);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(298);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(448);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(279);
      if (lookahead == 'd') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(299);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(448);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(279);
      if (lookahead == 'd') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(303);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(279);
      if (lookahead == 'd') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(303);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(280);
      if (lookahead == '_') ADVANCE(397);
      if (lookahead == 'b') ADVANCE(212);
      if (lookahead == 'd') ADVANCE(322);
      if (lookahead == 'y') ADVANCE(218);
      if (lookahead == 'h' ||
          lookahead == 'x') ADVANCE(408);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(230);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(305);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(308);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(368);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(280);
      if (lookahead == '_') ADVANCE(397);
      if (lookahead == 'b') ADVANCE(215);
      if (lookahead == 'd') ADVANCE(323);
      if (lookahead == 'h') ADVANCE(202);
      if (lookahead == 'y') ADVANCE(220);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(232);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(305);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(308);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(368);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(280);
      if (lookahead == '_') ADVANCE(397);
      if (lookahead == 'b') ADVANCE(215);
      if (lookahead == 'd') ADVANCE(323);
      if (lookahead == 'y') ADVANCE(220);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(232);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(305);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(308);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(368);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(280);
      if (lookahead == 'd') ADVANCE(323);
      if (lookahead == 'h') ADVANCE(202);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(232);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(368);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(280);
      if (lookahead == 'd') ADVANCE(323);
      if (lookahead == 'h') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(368);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(280);
      if (lookahead == 'd') ADVANCE(323);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(232);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(368);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(280);
      if (lookahead == 'd') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(368);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(280);
      if (lookahead == 'd') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(312);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(280);
      if (lookahead == 'd') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(312);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'd') ADVANCE(320);
      if (lookahead == 'h' ||
          lookahead == 'x') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(314);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(448);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'd') ADVANCE(321);
      if (lookahead == 'h') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(314);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(448);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'd') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(314);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(448);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'd') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(317);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'd') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(317);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'h') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(318);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'h') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'h') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(320);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(448);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'h') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(448);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'h') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(322);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(368);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'h') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(368);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(324);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_integer);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(486);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_integer);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == '"') ADVANCE(330);
      if (lookahead != 0) ADVANCE(333);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == '\n') ADVANCE(26);
      if (lookahead == '\'') ADVANCE(332);
      if (lookahead != 0) ADVANCE(334);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == '\n') ADVANCE(126);
      if (lookahead == '"') ADVANCE(333);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(128);
      if (lookahead == '$') ADVANCE(341);
      if (lookahead == '%') ADVANCE(358);
      if (lookahead == '\'') ADVANCE(334);
      if (lookahead == '-') ADVANCE(339);
      if (lookahead == '.') ADVANCE(402);
      if (lookahead == '/') ADVANCE(340);
      if (lookahead == '0') ADVANCE(304);
      if (lookahead == '1') ADVANCE(306);
      if (lookahead == '?') ADVANCE(414);
      if (lookahead == 'B') ADVANCE(357);
      if (lookahead == 'D') ADVANCE(355);
      if (lookahead == 'Q') ADVANCE(356);
      if (lookahead == 'W') ADVANCE(348);
      if (lookahead == '[') ADVANCE(198);
      if (lookahead == '\\') ADVANCE(336);
      if (lookahead == '_') ADVANCE(397);
      if (lookahead == 'b') ADVANCE(382);
      if (lookahead == 'd') ADVANCE(370);
      if (lookahead == 'e') ADVANCE(359);
      if (lookahead == 'q') ADVANCE(392);
      if (lookahead == 'r') ADVANCE(342);
      if (lookahead == 's') ADVANCE(369);
      if (lookahead == 'w') ADVANCE(379);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(393);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(310);
      if (lookahead == 'x' ||
          lookahead == 'y') ADVANCE(377);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'f') ADVANCE(407);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(309);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(335);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '<' ||
          ('>' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == '\r') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == '+') ADVANCE(405);
      if (lookahead == '-') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == '+') ADVANCE(406);
      if (lookahead == '-') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == '.') ADVANCE(402);
      if (lookahead == '0') ADVANCE(311);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(312);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == '/') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == '0') ADVANCE(410);
      if (sym__any_text_character_set_1(lookahead)) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == '1') ADVANCE(398);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(254);
      if (lookahead == 'b') ADVANCE(383);
      if (lookahead == 'd') ADVANCE(371);
      if (lookahead == 'i') ADVANCE(386);
      if (lookahead == 's') ADVANCE(369);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(394);
      if (sym__any_text_character_set_2(lookahead)) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == '1') ADVANCE(399);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(255);
      if (lookahead == 'b') ADVANCE(385);
      if (lookahead == 'd') ADVANCE(374);
      if (lookahead == 'i') ADVANCE(387);
      if (lookahead == 's') ADVANCE(372);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'D') ADVANCE(180);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'D') ADVANCE(174);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'D') ADVANCE(177);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'E') ADVANCE(171);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'O') ADVANCE(351);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'O') ADVANCE(352);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'O') ADVANCE(353);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'R') ADVANCE(344);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'R') ADVANCE(345);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'R') ADVANCE(346);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'T') ADVANCE(347);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'W') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(368);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'W') ADVANCE(350);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'Y') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(368);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'b') ADVANCE(384);
      if (lookahead == 'd') ADVANCE(373);
      if (lookahead == 'e') ADVANCE(360);
      if (lookahead == 'r') ADVANCE(343);
      if (lookahead == 's') ADVANCE(372);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(395);
      if (lookahead == 'x' ||
          lookahead == 'y') ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'b') ADVANCE(366);
      if (lookahead == 'd') ADVANCE(365);
      if (lookahead == 's') ADVANCE(369);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'e' ||
          lookahead == 'f') ADVANCE(368);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'b') ADVANCE(385);
      if (lookahead == 'd') ADVANCE(374);
      if (lookahead == 's') ADVANCE(372);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'd') ADVANCE(192);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'd') ADVANCE(186);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'd') ADVANCE(189);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'e') ADVANCE(183);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'h') ADVANCE(202);
      if (lookahead == 'i') ADVANCE(246);
      if (lookahead == 'x') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(368);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'h') ADVANCE(202);
      if (lookahead == 'p') ADVANCE(250);
      if (lookahead == 'x') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(368);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'h') ADVANCE(202);
      if (lookahead == 'x') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(368);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'h') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(368);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'i') ADVANCE(246);
      if (lookahead == 'p') ADVANCE(250);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'i') ADVANCE(246);
      if (lookahead == 'w') ADVANCE(380);
      if (lookahead == 'x') ADVANCE(242);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(368);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'i') ADVANCE(246);
      if (lookahead == 'x') ADVANCE(242);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'i') ADVANCE(247);
      if (lookahead == 'p') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'i') ADVANCE(247);
      if (lookahead == 'x') ADVANCE(243);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'i') ADVANCE(247);
      if (lookahead == 'x') ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'm') ADVANCE(400);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'm') ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'm') ADVANCE(375);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'm') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'o') ADVANCE(388);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'o') ADVANCE(389);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'o') ADVANCE(390);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'p') ADVANCE(250);
      if (lookahead == 'x') ADVANCE(242);
      if (lookahead == 'y') ADVANCE(391);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(368);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'p') ADVANCE(250);
      if (lookahead == 'x') ADVANCE(242);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'p') ADVANCE(251);
      if (lookahead == 'x') ADVANCE(243);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'p') ADVANCE(251);
      if (lookahead == 'x') ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'p') ADVANCE(262);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'p') ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'r') ADVANCE(361);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'r') ADVANCE(362);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'r') ADVANCE(363);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 't') ADVANCE(364);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'w') ADVANCE(381);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'x') ADVANCE(242);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(368);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'x') ADVANCE(242);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'x') ADVANCE(243);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'x') ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'b' ||
          lookahead == 'y') ADVANCE(220);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(397);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('2' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym__any_text);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(254);
      if (sym__any_text_character_set_3(lookahead)) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym__any_text);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym__any_text);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(258);
      if (sym__identifier_character_set_2(lookahead)) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym__any_text);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym__any_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym__any_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym__any_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym__any_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym__any_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym__any_text);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(368);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym__any_text);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(208);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym__any_text);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(205);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym__any_text);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(409);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym__any_text);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_placeholder);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_placeholder);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(412);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '+') ADVANCE(96);
      if (lookahead == '-') ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '+') ADVANCE(97);
      if (lookahead == '-') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(264);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '.') ADVANCE(479);
      if (lookahead == '0') ADVANCE(302);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(303);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '0') ADVANCE(316);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(317);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '0') ADVANCE(485);
      if (sym__any_text_character_set_1(lookahead)) ADVANCE(486);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '1') ADVANCE(477);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(253);
      if (lookahead == 'b') ADVANCE(462);
      if (lookahead == 'd') ADVANCE(454);
      if (lookahead == 'i') ADVANCE(463);
      if (lookahead == 's') ADVANCE(450);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(475);
      if (sym__any_text_character_set_2(lookahead)) ADVANCE(486);
      END_STATE();
    case 421:
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 422:
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(179);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(486);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(173);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(486);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(176);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(486);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(170);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(486);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(430);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(486);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(432);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(486);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(433);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(486);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(423);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(486);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(194);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(486);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(424);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(486);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(425);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(486);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(426);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(486);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(431);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(486);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'W') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(448);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'W') ADVANCE(429);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(486);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'Y') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(448);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b') ADVANCE(446);
      if (lookahead == 'd') ADVANCE(445);
      if (lookahead == 's') ADVANCE(450);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'e' ||
          lookahead == 'f') ADVANCE(448);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b') ADVANCE(446);
      if (lookahead == 'd') ADVANCE(445);
      if (lookahead == 's') ADVANCE(135);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'e' ||
          lookahead == 'f') ADVANCE(448);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(191);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(486);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(185);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(486);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(188);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(486);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(182);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(486);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(201);
      if (lookahead == 'i') ADVANCE(245);
      if (lookahead == 'x') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(448);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(201);
      if (lookahead == 'p') ADVANCE(249);
      if (lookahead == 'x') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(448);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(201);
      if (lookahead == 'x') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(448);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(448);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(245);
      if (lookahead == 'p') ADVANCE(249);
      if (lookahead == 's') ADVANCE(141);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(486);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(245);
      if (lookahead == 'p') ADVANCE(249);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(486);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(245);
      if (lookahead == 's') ADVANCE(133);
      if (lookahead == 'x') ADVANCE(241);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(448);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(245);
      if (lookahead == 'w') ADVANCE(458);
      if (lookahead == 'x') ADVANCE(241);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(448);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(245);
      if (lookahead == 'x') ADVANCE(241);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(448);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(245);
      if (lookahead == 'x') ADVANCE(241);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(486);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(478);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(486);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(455);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(486);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(464);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(486);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(466);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(486);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(467);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(486);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(249);
      if (lookahead == 'x') ADVANCE(241);
      if (lookahead == 'y') ADVANCE(471);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(448);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(249);
      if (lookahead == 'x') ADVANCE(241);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(448);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(249);
      if (lookahead == 'x') ADVANCE(241);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(486);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(261);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(486);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(441);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(486);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(196);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(486);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(442);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(486);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(443);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(486);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(131);
      if (lookahead == 'x') ADVANCE(241);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(448);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(448);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(139);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(486);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(444);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(486);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(465);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(486);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'w') ADVANCE(459);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(486);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x') ADVANCE(241);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(448);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x') ADVANCE(241);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(486);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b' ||
          lookahead == 'y') ADVANCE(219);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(476);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('2' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(253);
      if (sym__any_text_character_set_3(lookahead)) ADVANCE(486);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(257);
      if (sym__identifier_character_set_2(lookahead)) ADVANCE(486);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(264);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(448);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(207);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(204);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(484);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(486);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym__identifier);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(486);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 123},
  [2] = {.lex_state = 109},
  [3] = {.lex_state = 109},
  [4] = {.lex_state = 109},
  [5] = {.lex_state = 113},
  [6] = {.lex_state = 110},
  [7] = {.lex_state = 110},
  [8] = {.lex_state = 110},
  [9] = {.lex_state = 110},
  [10] = {.lex_state = 110},
  [11] = {.lex_state = 21},
  [12] = {.lex_state = 109},
  [13] = {.lex_state = 109},
  [14] = {.lex_state = 109},
  [15] = {.lex_state = 109},
  [16] = {.lex_state = 109},
  [17] = {.lex_state = 109},
  [18] = {.lex_state = 109},
  [19] = {.lex_state = 109},
  [20] = {.lex_state = 109},
  [21] = {.lex_state = 109},
  [22] = {.lex_state = 109},
  [23] = {.lex_state = 109},
  [24] = {.lex_state = 109},
  [25] = {.lex_state = 109},
  [26] = {.lex_state = 109},
  [27] = {.lex_state = 110},
  [28] = {.lex_state = 110},
  [29] = {.lex_state = 110},
  [30] = {.lex_state = 110},
  [31] = {.lex_state = 110},
  [32] = {.lex_state = 110},
  [33] = {.lex_state = 110},
  [34] = {.lex_state = 110},
  [35] = {.lex_state = 110},
  [36] = {.lex_state = 110},
  [37] = {.lex_state = 110},
  [38] = {.lex_state = 110},
  [39] = {.lex_state = 110},
  [40] = {.lex_state = 110},
  [41] = {.lex_state = 23},
  [42] = {.lex_state = 23},
  [43] = {.lex_state = 88},
  [44] = {.lex_state = 88},
  [45] = {.lex_state = 88},
  [46] = {.lex_state = 88},
  [47] = {.lex_state = 22},
  [48] = {.lex_state = 111},
  [49] = {.lex_state = 111},
  [50] = {.lex_state = 111},
  [51] = {.lex_state = 23},
  [52] = {.lex_state = 24},
  [53] = {.lex_state = 89},
  [54] = {.lex_state = 89},
  [55] = {.lex_state = 89},
  [56] = {.lex_state = 89},
  [57] = {.lex_state = 89},
  [58] = {.lex_state = 123},
  [59] = {.lex_state = 123},
  [60] = {.lex_state = 89},
  [61] = {.lex_state = 123},
  [62] = {.lex_state = 112},
  [63] = {.lex_state = 90},
  [64] = {.lex_state = 90},
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
  [75] = {.lex_state = 122},
  [76] = {.lex_state = 90},
  [77] = {.lex_state = 90},
  [78] = {.lex_state = 122},
  [79] = {.lex_state = 90},
  [80] = {.lex_state = 122},
  [81] = {.lex_state = 122},
  [82] = {.lex_state = 122},
  [83] = {.lex_state = 90},
  [84] = {.lex_state = 122},
  [85] = {.lex_state = 90},
  [86] = {.lex_state = 122},
  [87] = {.lex_state = 122},
  [88] = {.lex_state = 122},
  [89] = {.lex_state = 90},
  [90] = {.lex_state = 109},
  [91] = {.lex_state = 109},
  [92] = {.lex_state = 109},
  [93] = {.lex_state = 109},
  [94] = {.lex_state = 109},
  [95] = {.lex_state = 109},
  [96] = {.lex_state = 109},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 91},
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
    [sym_placeholder] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(99),
    [sym__statement] = STATE(92),
    [sym_call_instruction] = STATE(92),
    [sym_instruction] = STATE(92),
    [sym__normal_instruction] = STATE(95),
    [sym__gcc_pseudo_op] = STATE(95),
    [sym__macro] = STATE(92),
    [sym_nasm_macro] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [sym_label] = ACTIONS(9),
    [anon_sym_call] = ACTIONS(11),
    [aux_sym_nasm_macro_token1] = ACTIONS(13),
    [sym_gcc_mnemonic] = ACTIONS(15),
    [sym_mnemonic] = ACTIONS(17),
  },
  [2] = {
    [sym_operator] = STATE(2),
    [sym__operand] = STATE(2),
    [sym_width] = STATE(41),
    [sym_pointer] = STATE(2),
    [sym_hexadecimal] = STATE(2),
    [sym_binary] = STATE(2),
    [sym_octal] = STATE(2),
    [sym_register] = STATE(2),
    [sym__constant] = STATE(2),
    [sym_float] = STATE(2),
    [sym_string] = STATE(2),
    [sym_identifier] = STATE(2),
    [aux_sym__macro_repeat1] = STATE(2),
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
    [anon_sym_BYTE] = ACTIONS(26),
    [anon_sym_DWORD] = ACTIONS(26),
    [anon_sym_QWORD] = ACTIONS(26),
    [anon_sym_WORD] = ACTIONS(26),
    [anon_sym_byte] = ACTIONS(26),
    [anon_sym_dword] = ACTIONS(26),
    [anon_sym_qword] = ACTIONS(26),
    [anon_sym_word] = ACTIONS(26),
    [anon_sym_LBRACK] = ACTIONS(29),
    [aux_sym_hexadecimal_token1] = ACTIONS(32),
    [aux_sym_hexadecimal_token2] = ACTIONS(32),
    [aux_sym_hexadecimal_token3] = ACTIONS(32),
    [aux_sym_binary_token1] = ACTIONS(35),
    [aux_sym_binary_token2] = ACTIONS(35),
    [aux_sym_octal_token1] = ACTIONS(38),
    [aux_sym_octal_token2] = ACTIONS(38),
    [aux_sym_register_token1] = ACTIONS(41),
    [aux_sym_register_token2] = ACTIONS(41),
    [aux_sym_register_token3] = ACTIONS(41),
    [aux_sym_register_token4] = ACTIONS(41),
    [aux_sym_register_token5] = ACTIONS(41),
    [aux_sym_register_token6] = ACTIONS(41),
    [aux_sym_register_token7] = ACTIONS(41),
    [aux_sym_float_token1] = ACTIONS(44),
    [aux_sym_float_token2] = ACTIONS(44),
    [sym_integer] = ACTIONS(47),
    [aux_sym_string_token1] = ACTIONS(50),
    [aux_sym_string_token2] = ACTIONS(50),
    [sym_placeholder] = ACTIONS(53),
    [sym__identifier] = ACTIONS(56),
  },
  [3] = {
    [sym_operator] = STATE(2),
    [sym__operand] = STATE(2),
    [sym_width] = STATE(41),
    [sym_pointer] = STATE(2),
    [sym_hexadecimal] = STATE(2),
    [sym_binary] = STATE(2),
    [sym_octal] = STATE(2),
    [sym_register] = STATE(2),
    [sym__constant] = STATE(2),
    [sym_float] = STATE(2),
    [sym_string] = STATE(2),
    [sym_identifier] = STATE(2),
    [aux_sym__macro_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(59),
    [anon_sym_LF] = ACTIONS(59),
    [sym_comment] = ACTIONS(21),
    [anon_sym_BANG_EQ] = ACTIONS(61),
    [anon_sym_STAR] = ACTIONS(61),
    [anon_sym_PLUS] = ACTIONS(61),
    [anon_sym_DASH] = ACTIONS(61),
    [anon_sym_SLASH] = ACTIONS(61),
    [anon_sym_LT_EQ] = ACTIONS(61),
    [anon_sym_EQ_EQ] = ACTIONS(61),
    [anon_sym_GT_EQ] = ACTIONS(61),
    [anon_sym_BYTE] = ACTIONS(63),
    [anon_sym_DWORD] = ACTIONS(63),
    [anon_sym_QWORD] = ACTIONS(63),
    [anon_sym_WORD] = ACTIONS(63),
    [anon_sym_byte] = ACTIONS(63),
    [anon_sym_dword] = ACTIONS(63),
    [anon_sym_qword] = ACTIONS(63),
    [anon_sym_word] = ACTIONS(63),
    [anon_sym_LBRACK] = ACTIONS(65),
    [aux_sym_hexadecimal_token1] = ACTIONS(67),
    [aux_sym_hexadecimal_token2] = ACTIONS(67),
    [aux_sym_hexadecimal_token3] = ACTIONS(67),
    [aux_sym_binary_token1] = ACTIONS(69),
    [aux_sym_binary_token2] = ACTIONS(69),
    [aux_sym_octal_token1] = ACTIONS(71),
    [aux_sym_octal_token2] = ACTIONS(71),
    [aux_sym_register_token1] = ACTIONS(73),
    [aux_sym_register_token2] = ACTIONS(73),
    [aux_sym_register_token3] = ACTIONS(73),
    [aux_sym_register_token4] = ACTIONS(73),
    [aux_sym_register_token5] = ACTIONS(73),
    [aux_sym_register_token6] = ACTIONS(73),
    [aux_sym_register_token7] = ACTIONS(73),
    [aux_sym_float_token1] = ACTIONS(75),
    [aux_sym_float_token2] = ACTIONS(75),
    [sym_integer] = ACTIONS(77),
    [aux_sym_string_token1] = ACTIONS(79),
    [aux_sym_string_token2] = ACTIONS(79),
    [sym_placeholder] = ACTIONS(81),
    [sym__identifier] = ACTIONS(83),
  },
  [4] = {
    [sym_operator] = STATE(3),
    [sym__operand] = STATE(3),
    [sym_width] = STATE(41),
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
    [ts_builtin_sym_end] = ACTIONS(85),
    [anon_sym_LF] = ACTIONS(85),
    [sym_comment] = ACTIONS(21),
    [anon_sym_BANG_EQ] = ACTIONS(61),
    [anon_sym_STAR] = ACTIONS(61),
    [anon_sym_PLUS] = ACTIONS(61),
    [anon_sym_DASH] = ACTIONS(61),
    [anon_sym_SLASH] = ACTIONS(61),
    [anon_sym_LT_EQ] = ACTIONS(61),
    [anon_sym_EQ_EQ] = ACTIONS(61),
    [anon_sym_GT_EQ] = ACTIONS(61),
    [anon_sym_BYTE] = ACTIONS(63),
    [anon_sym_DWORD] = ACTIONS(63),
    [anon_sym_QWORD] = ACTIONS(63),
    [anon_sym_WORD] = ACTIONS(63),
    [anon_sym_byte] = ACTIONS(63),
    [anon_sym_dword] = ACTIONS(63),
    [anon_sym_qword] = ACTIONS(63),
    [anon_sym_word] = ACTIONS(63),
    [anon_sym_LBRACK] = ACTIONS(65),
    [aux_sym_hexadecimal_token1] = ACTIONS(67),
    [aux_sym_hexadecimal_token2] = ACTIONS(67),
    [aux_sym_hexadecimal_token3] = ACTIONS(67),
    [aux_sym_binary_token1] = ACTIONS(69),
    [aux_sym_binary_token2] = ACTIONS(69),
    [aux_sym_octal_token1] = ACTIONS(71),
    [aux_sym_octal_token2] = ACTIONS(71),
    [aux_sym_register_token1] = ACTIONS(73),
    [aux_sym_register_token2] = ACTIONS(73),
    [aux_sym_register_token3] = ACTIONS(73),
    [aux_sym_register_token4] = ACTIONS(73),
    [aux_sym_register_token5] = ACTIONS(73),
    [aux_sym_register_token6] = ACTIONS(73),
    [aux_sym_register_token7] = ACTIONS(73),
    [aux_sym_float_token1] = ACTIONS(75),
    [aux_sym_float_token2] = ACTIONS(75),
    [sym_integer] = ACTIONS(77),
    [aux_sym_string_token1] = ACTIONS(79),
    [aux_sym_string_token2] = ACTIONS(79),
    [sym_placeholder] = ACTIONS(87),
    [sym__identifier] = ACTIONS(83),
  },
  [5] = {
    [sym__operand] = STATE(9),
    [sym_width] = STATE(42),
    [sym_pointer] = STATE(9),
    [sym_hexadecimal] = STATE(9),
    [sym_binary] = STATE(9),
    [sym_octal] = STATE(9),
    [sym_register] = STATE(9),
    [sym__constant] = STATE(9),
    [sym_float] = STATE(9),
    [sym_string] = STATE(9),
    [sym_identifier] = STATE(9),
    [aux_sym_call_instruction_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(89),
    [anon_sym_LF] = ACTIONS(91),
    [sym_comment] = ACTIONS(21),
    [anon_sym_BYTE] = ACTIONS(63),
    [anon_sym_DWORD] = ACTIONS(63),
    [anon_sym_QWORD] = ACTIONS(63),
    [anon_sym_WORD] = ACTIONS(63),
    [anon_sym_byte] = ACTIONS(63),
    [anon_sym_dword] = ACTIONS(63),
    [anon_sym_qword] = ACTIONS(63),
    [anon_sym_word] = ACTIONS(63),
    [anon_sym_LBRACK] = ACTIONS(93),
    [aux_sym_hexadecimal_token1] = ACTIONS(95),
    [aux_sym_hexadecimal_token2] = ACTIONS(95),
    [aux_sym_hexadecimal_token3] = ACTIONS(95),
    [aux_sym_binary_token1] = ACTIONS(97),
    [aux_sym_binary_token2] = ACTIONS(97),
    [aux_sym_octal_token1] = ACTIONS(99),
    [aux_sym_octal_token2] = ACTIONS(99),
    [aux_sym_register_token1] = ACTIONS(101),
    [aux_sym_register_token2] = ACTIONS(101),
    [aux_sym_register_token3] = ACTIONS(101),
    [aux_sym_register_token4] = ACTIONS(101),
    [aux_sym_register_token5] = ACTIONS(101),
    [aux_sym_register_token6] = ACTIONS(101),
    [aux_sym_register_token7] = ACTIONS(101),
    [aux_sym_float_token1] = ACTIONS(103),
    [aux_sym_float_token2] = ACTIONS(103),
    [sym_integer] = ACTIONS(105),
    [aux_sym_string_token1] = ACTIONS(107),
    [aux_sym_string_token2] = ACTIONS(107),
    [sym__any_text] = ACTIONS(109),
    [sym_placeholder] = ACTIONS(111),
    [sym__identifier] = ACTIONS(113),
  },
  [6] = {
    [sym__operand] = STATE(6),
    [sym_width] = STATE(42),
    [sym_pointer] = STATE(6),
    [sym_hexadecimal] = STATE(6),
    [sym_binary] = STATE(6),
    [sym_octal] = STATE(6),
    [sym_register] = STATE(6),
    [sym__constant] = STATE(6),
    [sym_float] = STATE(6),
    [sym_string] = STATE(6),
    [sym_identifier] = STATE(6),
    [aux_sym__normal_instruction_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(115),
    [anon_sym_LF] = ACTIONS(115),
    [sym_comment] = ACTIONS(21),
    [anon_sym_COMMA] = ACTIONS(117),
    [anon_sym_BYTE] = ACTIONS(120),
    [anon_sym_DWORD] = ACTIONS(120),
    [anon_sym_QWORD] = ACTIONS(120),
    [anon_sym_WORD] = ACTIONS(120),
    [anon_sym_byte] = ACTIONS(120),
    [anon_sym_dword] = ACTIONS(120),
    [anon_sym_qword] = ACTIONS(120),
    [anon_sym_word] = ACTIONS(120),
    [anon_sym_LBRACK] = ACTIONS(123),
    [aux_sym_hexadecimal_token1] = ACTIONS(126),
    [aux_sym_hexadecimal_token2] = ACTIONS(126),
    [aux_sym_hexadecimal_token3] = ACTIONS(126),
    [aux_sym_binary_token1] = ACTIONS(129),
    [aux_sym_binary_token2] = ACTIONS(129),
    [aux_sym_octal_token1] = ACTIONS(132),
    [aux_sym_octal_token2] = ACTIONS(132),
    [aux_sym_register_token1] = ACTIONS(135),
    [aux_sym_register_token2] = ACTIONS(135),
    [aux_sym_register_token3] = ACTIONS(135),
    [aux_sym_register_token4] = ACTIONS(135),
    [aux_sym_register_token5] = ACTIONS(135),
    [aux_sym_register_token6] = ACTIONS(135),
    [aux_sym_register_token7] = ACTIONS(135),
    [aux_sym_float_token1] = ACTIONS(138),
    [aux_sym_float_token2] = ACTIONS(138),
    [sym_integer] = ACTIONS(141),
    [aux_sym_string_token1] = ACTIONS(144),
    [aux_sym_string_token2] = ACTIONS(144),
    [sym_placeholder] = ACTIONS(147),
    [sym__identifier] = ACTIONS(150),
  },
  [7] = {
    [sym__operand] = STATE(8),
    [sym_width] = STATE(42),
    [sym_pointer] = STATE(8),
    [sym_hexadecimal] = STATE(8),
    [sym_binary] = STATE(8),
    [sym_octal] = STATE(8),
    [sym_register] = STATE(8),
    [sym__constant] = STATE(8),
    [sym_float] = STATE(8),
    [sym_string] = STATE(8),
    [sym_identifier] = STATE(8),
    [aux_sym__normal_instruction_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(153),
    [anon_sym_LF] = ACTIONS(153),
    [sym_comment] = ACTIONS(21),
    [anon_sym_COMMA] = ACTIONS(155),
    [anon_sym_BYTE] = ACTIONS(63),
    [anon_sym_DWORD] = ACTIONS(63),
    [anon_sym_QWORD] = ACTIONS(63),
    [anon_sym_WORD] = ACTIONS(63),
    [anon_sym_byte] = ACTIONS(63),
    [anon_sym_dword] = ACTIONS(63),
    [anon_sym_qword] = ACTIONS(63),
    [anon_sym_word] = ACTIONS(63),
    [anon_sym_LBRACK] = ACTIONS(93),
    [aux_sym_hexadecimal_token1] = ACTIONS(95),
    [aux_sym_hexadecimal_token2] = ACTIONS(95),
    [aux_sym_hexadecimal_token3] = ACTIONS(95),
    [aux_sym_binary_token1] = ACTIONS(97),
    [aux_sym_binary_token2] = ACTIONS(97),
    [aux_sym_octal_token1] = ACTIONS(99),
    [aux_sym_octal_token2] = ACTIONS(99),
    [aux_sym_register_token1] = ACTIONS(101),
    [aux_sym_register_token2] = ACTIONS(101),
    [aux_sym_register_token3] = ACTIONS(101),
    [aux_sym_register_token4] = ACTIONS(101),
    [aux_sym_register_token5] = ACTIONS(101),
    [aux_sym_register_token6] = ACTIONS(101),
    [aux_sym_register_token7] = ACTIONS(101),
    [aux_sym_float_token1] = ACTIONS(103),
    [aux_sym_float_token2] = ACTIONS(103),
    [sym_integer] = ACTIONS(105),
    [aux_sym_string_token1] = ACTIONS(107),
    [aux_sym_string_token2] = ACTIONS(107),
    [sym_placeholder] = ACTIONS(157),
    [sym__identifier] = ACTIONS(113),
  },
  [8] = {
    [sym__operand] = STATE(6),
    [sym_width] = STATE(42),
    [sym_pointer] = STATE(6),
    [sym_hexadecimal] = STATE(6),
    [sym_binary] = STATE(6),
    [sym_octal] = STATE(6),
    [sym_register] = STATE(6),
    [sym__constant] = STATE(6),
    [sym_float] = STATE(6),
    [sym_string] = STATE(6),
    [sym_identifier] = STATE(6),
    [aux_sym__normal_instruction_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(159),
    [anon_sym_LF] = ACTIONS(159),
    [sym_comment] = ACTIONS(21),
    [anon_sym_COMMA] = ACTIONS(155),
    [anon_sym_BYTE] = ACTIONS(63),
    [anon_sym_DWORD] = ACTIONS(63),
    [anon_sym_QWORD] = ACTIONS(63),
    [anon_sym_WORD] = ACTIONS(63),
    [anon_sym_byte] = ACTIONS(63),
    [anon_sym_dword] = ACTIONS(63),
    [anon_sym_qword] = ACTIONS(63),
    [anon_sym_word] = ACTIONS(63),
    [anon_sym_LBRACK] = ACTIONS(93),
    [aux_sym_hexadecimal_token1] = ACTIONS(95),
    [aux_sym_hexadecimal_token2] = ACTIONS(95),
    [aux_sym_hexadecimal_token3] = ACTIONS(95),
    [aux_sym_binary_token1] = ACTIONS(97),
    [aux_sym_binary_token2] = ACTIONS(97),
    [aux_sym_octal_token1] = ACTIONS(99),
    [aux_sym_octal_token2] = ACTIONS(99),
    [aux_sym_register_token1] = ACTIONS(101),
    [aux_sym_register_token2] = ACTIONS(101),
    [aux_sym_register_token3] = ACTIONS(101),
    [aux_sym_register_token4] = ACTIONS(101),
    [aux_sym_register_token5] = ACTIONS(101),
    [aux_sym_register_token6] = ACTIONS(101),
    [aux_sym_register_token7] = ACTIONS(101),
    [aux_sym_float_token1] = ACTIONS(103),
    [aux_sym_float_token2] = ACTIONS(103),
    [sym_integer] = ACTIONS(105),
    [aux_sym_string_token1] = ACTIONS(107),
    [aux_sym_string_token2] = ACTIONS(107),
    [sym_placeholder] = ACTIONS(161),
    [sym__identifier] = ACTIONS(113),
  },
  [9] = {
    [sym__operand] = STATE(10),
    [sym_width] = STATE(42),
    [sym_pointer] = STATE(10),
    [sym_hexadecimal] = STATE(10),
    [sym_binary] = STATE(10),
    [sym_octal] = STATE(10),
    [sym_register] = STATE(10),
    [sym__constant] = STATE(10),
    [sym_float] = STATE(10),
    [sym_string] = STATE(10),
    [sym_identifier] = STATE(10),
    [aux_sym_call_instruction_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(163),
    [anon_sym_LF] = ACTIONS(163),
    [sym_comment] = ACTIONS(21),
    [anon_sym_BYTE] = ACTIONS(63),
    [anon_sym_DWORD] = ACTIONS(63),
    [anon_sym_QWORD] = ACTIONS(63),
    [anon_sym_WORD] = ACTIONS(63),
    [anon_sym_byte] = ACTIONS(63),
    [anon_sym_dword] = ACTIONS(63),
    [anon_sym_qword] = ACTIONS(63),
    [anon_sym_word] = ACTIONS(63),
    [anon_sym_LBRACK] = ACTIONS(93),
    [aux_sym_hexadecimal_token1] = ACTIONS(95),
    [aux_sym_hexadecimal_token2] = ACTIONS(95),
    [aux_sym_hexadecimal_token3] = ACTIONS(95),
    [aux_sym_binary_token1] = ACTIONS(97),
    [aux_sym_binary_token2] = ACTIONS(97),
    [aux_sym_octal_token1] = ACTIONS(99),
    [aux_sym_octal_token2] = ACTIONS(99),
    [aux_sym_register_token1] = ACTIONS(101),
    [aux_sym_register_token2] = ACTIONS(101),
    [aux_sym_register_token3] = ACTIONS(101),
    [aux_sym_register_token4] = ACTIONS(101),
    [aux_sym_register_token5] = ACTIONS(101),
    [aux_sym_register_token6] = ACTIONS(101),
    [aux_sym_register_token7] = ACTIONS(101),
    [aux_sym_float_token1] = ACTIONS(103),
    [aux_sym_float_token2] = ACTIONS(103),
    [sym_integer] = ACTIONS(105),
    [aux_sym_string_token1] = ACTIONS(107),
    [aux_sym_string_token2] = ACTIONS(107),
    [sym_placeholder] = ACTIONS(165),
    [sym__identifier] = ACTIONS(113),
  },
  [10] = {
    [sym__operand] = STATE(10),
    [sym_width] = STATE(42),
    [sym_pointer] = STATE(10),
    [sym_hexadecimal] = STATE(10),
    [sym_binary] = STATE(10),
    [sym_octal] = STATE(10),
    [sym_register] = STATE(10),
    [sym__constant] = STATE(10),
    [sym_float] = STATE(10),
    [sym_string] = STATE(10),
    [sym_identifier] = STATE(10),
    [aux_sym_call_instruction_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(167),
    [anon_sym_LF] = ACTIONS(167),
    [sym_comment] = ACTIONS(21),
    [anon_sym_BYTE] = ACTIONS(169),
    [anon_sym_DWORD] = ACTIONS(169),
    [anon_sym_QWORD] = ACTIONS(169),
    [anon_sym_WORD] = ACTIONS(169),
    [anon_sym_byte] = ACTIONS(169),
    [anon_sym_dword] = ACTIONS(169),
    [anon_sym_qword] = ACTIONS(169),
    [anon_sym_word] = ACTIONS(169),
    [anon_sym_LBRACK] = ACTIONS(172),
    [aux_sym_hexadecimal_token1] = ACTIONS(175),
    [aux_sym_hexadecimal_token2] = ACTIONS(175),
    [aux_sym_hexadecimal_token3] = ACTIONS(175),
    [aux_sym_binary_token1] = ACTIONS(178),
    [aux_sym_binary_token2] = ACTIONS(178),
    [aux_sym_octal_token1] = ACTIONS(181),
    [aux_sym_octal_token2] = ACTIONS(181),
    [aux_sym_register_token1] = ACTIONS(184),
    [aux_sym_register_token2] = ACTIONS(184),
    [aux_sym_register_token3] = ACTIONS(184),
    [aux_sym_register_token4] = ACTIONS(184),
    [aux_sym_register_token5] = ACTIONS(184),
    [aux_sym_register_token6] = ACTIONS(184),
    [aux_sym_register_token7] = ACTIONS(184),
    [aux_sym_float_token1] = ACTIONS(187),
    [aux_sym_float_token2] = ACTIONS(187),
    [sym_integer] = ACTIONS(190),
    [aux_sym_string_token1] = ACTIONS(193),
    [aux_sym_string_token2] = ACTIONS(193),
    [sym_placeholder] = ACTIONS(196),
    [sym__identifier] = ACTIONS(199),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      sym_integer,
    ACTIONS(113), 1,
      sym__identifier,
    ACTIONS(202), 1,
      anon_sym_LBRACK,
    ACTIONS(206), 1,
      sym_placeholder,
    STATE(42), 1,
      sym_width,
    ACTIONS(97), 2,
      aux_sym_binary_token1,
      aux_sym_binary_token2,
    ACTIONS(99), 2,
      aux_sym_octal_token1,
      aux_sym_octal_token2,
    ACTIONS(103), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(204), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(95), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    ACTIONS(101), 7,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      aux_sym_register_token7,
    ACTIONS(63), 8,
      anon_sym_BYTE,
      anon_sym_DWORD,
      anon_sym_QWORD,
      anon_sym_WORD,
      anon_sym_byte,
      anon_sym_dword,
      anon_sym_qword,
      anon_sym_word,
    STATE(27), 10,
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
  [71] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(208), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(210), 38,
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
      sym_placeholder,
      sym__identifier,
  [119] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(212), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(214), 38,
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
      sym_placeholder,
      sym__identifier,
  [167] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(216), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(218), 38,
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
      sym_placeholder,
      sym__identifier,
  [215] = 4,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_LBRACK,
    ACTIONS(220), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(222), 37,
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
      sym_placeholder,
      sym__identifier,
  [265] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(226), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(228), 38,
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
      sym_placeholder,
      sym__identifier,
  [313] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(230), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(232), 38,
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
      sym_placeholder,
      sym__identifier,
  [361] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(234), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(236), 38,
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
      sym_placeholder,
      sym__identifier,
  [409] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(238), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(240), 38,
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
      sym_placeholder,
      sym__identifier,
  [457] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(242), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(244), 38,
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
      sym_placeholder,
      sym__identifier,
  [505] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(246), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(248), 38,
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
      sym_placeholder,
      sym__identifier,
  [553] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(250), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(252), 38,
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
      sym_placeholder,
      sym__identifier,
  [601] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(254), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(256), 38,
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
      sym_placeholder,
      sym__identifier,
  [649] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(258), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(260), 38,
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
      sym_placeholder,
      sym__identifier,
  [697] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(262), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(264), 38,
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
      sym_placeholder,
      sym__identifier,
  [745] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(266), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(268), 38,
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
      sym_placeholder,
      sym__identifier,
  [793] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(115), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(270), 31,
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
      sym_placeholder,
      sym__identifier,
  [834] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(254), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(256), 31,
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
      sym_placeholder,
      sym__identifier,
  [875] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(234), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(236), 31,
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
      sym_placeholder,
      sym__identifier,
  [916] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(226), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(228), 31,
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
      sym_placeholder,
      sym__identifier,
  [957] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(242), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(244), 31,
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
      sym_placeholder,
      sym__identifier,
  [998] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(258), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(260), 31,
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
      sym_placeholder,
      sym__identifier,
  [1039] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(208), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(210), 31,
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
      sym_placeholder,
      sym__identifier,
  [1080] = 4,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_LBRACK,
    ACTIONS(220), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(222), 30,
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
      sym_placeholder,
      sym__identifier,
  [1123] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(250), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(252), 31,
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
      sym_placeholder,
      sym__identifier,
  [1164] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(212), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(214), 31,
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
      sym_placeholder,
      sym__identifier,
  [1205] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(238), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(240), 31,
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
      sym_placeholder,
      sym__identifier,
  [1246] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(216), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(218), 31,
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
      sym_placeholder,
      sym__identifier,
  [1287] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(266), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(268), 31,
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
      sym_placeholder,
      sym__identifier,
  [1328] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(230), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(232), 31,
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
      sym_placeholder,
      sym__identifier,
  [1369] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      sym_integer,
    ACTIONS(83), 1,
      sym__identifier,
    ACTIONS(274), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      sym_placeholder,
    ACTIONS(69), 2,
      aux_sym_binary_token1,
      aux_sym_binary_token2,
    ACTIONS(71), 2,
      aux_sym_octal_token1,
      aux_sym_octal_token2,
    ACTIONS(75), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(276), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(67), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    ACTIONS(73), 7,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      aux_sym_register_token7,
    STATE(14), 9,
      sym_pointer,
      sym_hexadecimal,
      sym_binary,
      sym_octal,
      sym_register,
      sym__constant,
      sym_float,
      sym_string,
      sym_identifier,
  [1426] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      sym_integer,
    ACTIONS(113), 1,
      sym__identifier,
    ACTIONS(202), 1,
      anon_sym_LBRACK,
    ACTIONS(280), 1,
      sym_placeholder,
    ACTIONS(97), 2,
      aux_sym_binary_token1,
      aux_sym_binary_token2,
    ACTIONS(99), 2,
      aux_sym_octal_token1,
      aux_sym_octal_token2,
    ACTIONS(103), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(204), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(95), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    ACTIONS(101), 7,
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
  [1483] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      sym_integer,
    ACTIONS(290), 1,
      sym__identifier,
    STATE(55), 1,
      sym_segment_prefix,
    STATE(97), 1,
      sym_segment,
    ACTIONS(284), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    STATE(63), 4,
      sym__micro_op_operand,
      sym_hexadecimal,
      sym_register,
      sym_identifier,
    ACTIONS(282), 6,
      anon_sym_cs,
      anon_sym_ds,
      anon_sym_es,
      anon_sym_fs,
      anon_sym_gs,
      anon_sym_ss,
    ACTIONS(286), 7,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      aux_sym_register_token7,
  [1527] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      sym__identifier,
    ACTIONS(292), 1,
      sym_integer,
    STATE(53), 1,
      sym_segment_prefix,
    STATE(97), 1,
      sym_segment,
    ACTIONS(284), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    STATE(68), 4,
      sym__micro_op_operand,
      sym_hexadecimal,
      sym_register,
      sym_identifier,
    ACTIONS(282), 6,
      anon_sym_cs,
      anon_sym_ds,
      anon_sym_es,
      anon_sym_fs,
      anon_sym_gs,
      anon_sym_ss,
    ACTIONS(286), 7,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      aux_sym_register_token7,
  [1571] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      sym__identifier,
    ACTIONS(294), 1,
      sym_integer,
    STATE(56), 1,
      sym_segment_prefix,
    STATE(97), 1,
      sym_segment,
    ACTIONS(284), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    STATE(77), 4,
      sym__micro_op_operand,
      sym_hexadecimal,
      sym_register,
      sym_identifier,
    ACTIONS(282), 6,
      anon_sym_cs,
      anon_sym_ds,
      anon_sym_es,
      anon_sym_fs,
      anon_sym_gs,
      anon_sym_ss,
    ACTIONS(286), 7,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      aux_sym_register_token7,
  [1615] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      sym__identifier,
    ACTIONS(296), 1,
      sym_integer,
    STATE(57), 1,
      sym_segment_prefix,
    STATE(97), 1,
      sym_segment,
    ACTIONS(284), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    STATE(73), 4,
      sym__micro_op_operand,
      sym_hexadecimal,
      sym_register,
      sym_identifier,
    ACTIONS(282), 6,
      anon_sym_cs,
      anon_sym_ds,
      anon_sym_es,
      anon_sym_fs,
      anon_sym_gs,
      anon_sym_ss,
    ACTIONS(286), 7,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      aux_sym_register_token7,
  [1659] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 2,
      anon_sym_PTR,
      anon_sym_ptr,
    ACTIONS(300), 4,
      anon_sym_LBRACK,
      aux_sym_string_token1,
      aux_sym_string_token2,
      sym_placeholder,
    ACTIONS(302), 18,
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
  [1693] = 10,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym_integer,
    ACTIONS(318), 1,
      sym__identifier,
    ACTIONS(304), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(308), 2,
      aux_sym_binary_token1,
      aux_sym_binary_token2,
    ACTIONS(310), 2,
      aux_sym_octal_token1,
      aux_sym_octal_token2,
    ACTIONS(312), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(316), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(306), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    STATE(80), 7,
      sym_hexadecimal,
      sym_binary,
      sym_octal,
      sym__constant,
      sym_float,
      sym_string,
      sym_identifier,
  [1737] = 10,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(318), 1,
      sym__identifier,
    ACTIONS(322), 1,
      sym_integer,
    ACTIONS(308), 2,
      aux_sym_binary_token1,
      aux_sym_binary_token2,
    ACTIONS(310), 2,
      aux_sym_octal_token1,
      aux_sym_octal_token2,
    ACTIONS(312), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(316), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(320), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(306), 3,
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
  [1781] = 10,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym_integer,
    ACTIONS(318), 1,
      sym__identifier,
    ACTIONS(308), 2,
      aux_sym_binary_token1,
      aux_sym_binary_token2,
    ACTIONS(310), 2,
      aux_sym_octal_token1,
      aux_sym_octal_token2,
    ACTIONS(312), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(316), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(324), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(306), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    STATE(80), 7,
      sym_hexadecimal,
      sym_binary,
      sym_octal,
      sym__constant,
      sym_float,
      sym_string,
      sym_identifier,
  [1825] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 4,
      anon_sym_LBRACK,
      aux_sym_string_token1,
      aux_sym_string_token2,
      sym_placeholder,
    ACTIONS(328), 18,
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
  [1855] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym_integer,
    ACTIONS(318), 1,
      sym__identifier,
    ACTIONS(308), 2,
      aux_sym_binary_token1,
      aux_sym_binary_token2,
    ACTIONS(310), 2,
      aux_sym_octal_token1,
      aux_sym_octal_token2,
    ACTIONS(312), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(330), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(306), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    STATE(80), 7,
      sym_hexadecimal,
      sym_binary,
      sym_octal,
      sym__constant,
      sym_float,
      sym_string,
      sym_identifier,
  [1895] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      sym__identifier,
    ACTIONS(294), 1,
      sym_integer,
    ACTIONS(284), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    STATE(77), 4,
      sym__micro_op_operand,
      sym_hexadecimal,
      sym_register,
      sym_identifier,
    ACTIONS(286), 7,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      aux_sym_register_token7,
  [1925] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      sym__identifier,
    ACTIONS(332), 1,
      sym_integer,
    ACTIONS(284), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    STATE(79), 4,
      sym__micro_op_operand,
      sym_hexadecimal,
      sym_register,
      sym_identifier,
    ACTIONS(286), 7,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      aux_sym_register_token7,
  [1955] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      sym__identifier,
    ACTIONS(296), 1,
      sym_integer,
    ACTIONS(284), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    STATE(73), 4,
      sym__micro_op_operand,
      sym_hexadecimal,
      sym_register,
      sym_identifier,
    ACTIONS(286), 7,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      aux_sym_register_token7,
  [1985] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      sym__identifier,
    ACTIONS(334), 1,
      sym_integer,
    ACTIONS(284), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    STATE(74), 4,
      sym__micro_op_operand,
      sym_hexadecimal,
      sym_register,
      sym_identifier,
    ACTIONS(286), 7,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      aux_sym_register_token7,
  [2015] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      sym__identifier,
    ACTIONS(336), 1,
      sym_integer,
    ACTIONS(284), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    STATE(70), 4,
      sym__micro_op_operand,
      sym_hexadecimal,
      sym_register,
      sym_identifier,
    ACTIONS(286), 7,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      aux_sym_register_token7,
  [2045] = 10,
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
    ACTIONS(338), 1,
      ts_builtin_sym_end,
    ACTIONS(340), 1,
      sym_comment,
    STATE(4), 1,
      sym_nasm_macro,
    STATE(95), 2,
      sym__normal_instruction,
      sym__gcc_pseudo_op,
    STATE(96), 4,
      sym__statement,
      sym_call_instruction,
      sym_instruction,
      sym__macro,
  [2080] = 10,
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
    ACTIONS(340), 1,
      sym_comment,
    ACTIONS(342), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_nasm_macro,
    STATE(95), 2,
      sym__normal_instruction,
      sym__gcc_pseudo_op,
    STATE(96), 4,
      sym__statement,
      sym_call_instruction,
      sym_instruction,
      sym__macro,
  [2115] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 12,
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
  [2133] = 9,
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
    ACTIONS(340), 1,
      sym_comment,
    STATE(4), 1,
      sym_nasm_macro,
    STATE(95), 2,
      sym__normal_instruction,
      sym__gcc_pseudo_op,
    STATE(96), 4,
      sym__statement,
      sym_call_instruction,
      sym_instruction,
      sym__macro,
  [2165] = 7,
    ACTIONS(11), 1,
      anon_sym_call,
    ACTIONS(15), 1,
      sym_gcc_mnemonic,
    ACTIONS(17), 1,
      sym_mnemonic,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(346), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(93), 2,
      sym_call_instruction,
      sym_instruction,
    STATE(95), 2,
      sym__normal_instruction,
      sym__gcc_pseudo_op,
  [2190] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_RBRACK,
    STATE(72), 1,
      aux_sym_pointer_repeat1,
    ACTIONS(348), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2205] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_RBRACK,
    STATE(76), 1,
      aux_sym_pointer_repeat1,
    ACTIONS(348), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2220] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_RBRACK,
    STATE(76), 1,
      aux_sym_pointer_repeat1,
    ACTIONS(348), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2235] = 5,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(356), 1,
      ts_builtin_sym_end,
    ACTIONS(358), 1,
      anon_sym_LF,
    STATE(66), 1,
      aux_sym__gcc_pseudo_op_repeat1,
    ACTIONS(360), 2,
      anon_sym_COMMA,
      anon_sym_,
  [2252] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 1,
      anon_sym_RBRACK,
    STATE(76), 1,
      aux_sym_pointer_repeat1,
    ACTIONS(348), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2267] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_RBRACK,
    STATE(65), 1,
      aux_sym_pointer_repeat1,
    ACTIONS(348), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2282] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_RBRACK,
    STATE(76), 1,
      aux_sym_pointer_repeat1,
    ACTIONS(348), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2297] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      anon_sym_RBRACK,
    STATE(69), 1,
      aux_sym_pointer_repeat1,
    ACTIONS(348), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2312] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      anon_sym_RBRACK,
    STATE(76), 1,
      aux_sym_pointer_repeat1,
    ACTIONS(348), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2327] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_RBRACK,
    STATE(76), 1,
      aux_sym_pointer_repeat1,
    ACTIONS(348), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2342] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_RBRACK,
    STATE(71), 1,
      aux_sym_pointer_repeat1,
    ACTIONS(348), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2357] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_RBRACK,
    STATE(67), 1,
      aux_sym_pointer_repeat1,
    ACTIONS(348), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2372] = 5,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(373), 1,
      ts_builtin_sym_end,
    ACTIONS(375), 1,
      anon_sym_LF,
    STATE(78), 1,
      aux_sym__gcc_pseudo_op_repeat1,
    ACTIONS(377), 2,
      anon_sym_COMMA,
      anon_sym_,
  [2389] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_RBRACK,
    STATE(76), 1,
      aux_sym_pointer_repeat1,
    ACTIONS(379), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2404] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_RBRACK,
    STATE(64), 1,
      aux_sym_pointer_repeat1,
    ACTIONS(348), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2419] = 5,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(304), 1,
      ts_builtin_sym_end,
    ACTIONS(384), 1,
      anon_sym_LF,
    STATE(66), 1,
      aux_sym__gcc_pseudo_op_repeat1,
    ACTIONS(386), 2,
      anon_sym_COMMA,
      anon_sym_,
  [2436] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 4,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RBRACK,
  [2446] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(356), 1,
      ts_builtin_sym_end,
    ACTIONS(358), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [2458] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(254), 1,
      ts_builtin_sym_end,
    ACTIONS(256), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [2470] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(266), 1,
      ts_builtin_sym_end,
    ACTIONS(268), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [2482] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 4,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RBRACK,
  [2492] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(250), 1,
      ts_builtin_sym_end,
    ACTIONS(252), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [2504] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 4,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RBRACK,
  [2514] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(238), 1,
      ts_builtin_sym_end,
    ACTIONS(240), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [2526] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(258), 1,
      ts_builtin_sym_end,
    ACTIONS(260), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [2538] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(242), 1,
      ts_builtin_sym_end,
    ACTIONS(244), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [2550] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 4,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RBRACK,
  [2560] = 4,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(342), 1,
      ts_builtin_sym_end,
    ACTIONS(388), 1,
      anon_sym_LF,
    STATE(91), 1,
      aux_sym_program_repeat1,
  [2573] = 4,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(390), 1,
      ts_builtin_sym_end,
    ACTIONS(392), 1,
      anon_sym_LF,
    STATE(91), 1,
      aux_sym_program_repeat1,
  [2586] = 4,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(395), 1,
      ts_builtin_sym_end,
    ACTIONS(397), 1,
      anon_sym_LF,
    STATE(90), 1,
      aux_sym_program_repeat1,
  [2599] = 2,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(399), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2607] = 2,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(163), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2615] = 2,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(401), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2623] = 2,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(390), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2631] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      anon_sym_COLON,
  [2638] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      anon_sym_COLON,
  [2645] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 1,
      ts_builtin_sym_end,
  [2652] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      sym__identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(11)] = 0,
  [SMALL_STATE(12)] = 71,
  [SMALL_STATE(13)] = 119,
  [SMALL_STATE(14)] = 167,
  [SMALL_STATE(15)] = 215,
  [SMALL_STATE(16)] = 265,
  [SMALL_STATE(17)] = 313,
  [SMALL_STATE(18)] = 361,
  [SMALL_STATE(19)] = 409,
  [SMALL_STATE(20)] = 457,
  [SMALL_STATE(21)] = 505,
  [SMALL_STATE(22)] = 553,
  [SMALL_STATE(23)] = 601,
  [SMALL_STATE(24)] = 649,
  [SMALL_STATE(25)] = 697,
  [SMALL_STATE(26)] = 745,
  [SMALL_STATE(27)] = 793,
  [SMALL_STATE(28)] = 834,
  [SMALL_STATE(29)] = 875,
  [SMALL_STATE(30)] = 916,
  [SMALL_STATE(31)] = 957,
  [SMALL_STATE(32)] = 998,
  [SMALL_STATE(33)] = 1039,
  [SMALL_STATE(34)] = 1080,
  [SMALL_STATE(35)] = 1123,
  [SMALL_STATE(36)] = 1164,
  [SMALL_STATE(37)] = 1205,
  [SMALL_STATE(38)] = 1246,
  [SMALL_STATE(39)] = 1287,
  [SMALL_STATE(40)] = 1328,
  [SMALL_STATE(41)] = 1369,
  [SMALL_STATE(42)] = 1426,
  [SMALL_STATE(43)] = 1483,
  [SMALL_STATE(44)] = 1527,
  [SMALL_STATE(45)] = 1571,
  [SMALL_STATE(46)] = 1615,
  [SMALL_STATE(47)] = 1659,
  [SMALL_STATE(48)] = 1693,
  [SMALL_STATE(49)] = 1737,
  [SMALL_STATE(50)] = 1781,
  [SMALL_STATE(51)] = 1825,
  [SMALL_STATE(52)] = 1855,
  [SMALL_STATE(53)] = 1895,
  [SMALL_STATE(54)] = 1925,
  [SMALL_STATE(55)] = 1955,
  [SMALL_STATE(56)] = 1985,
  [SMALL_STATE(57)] = 2015,
  [SMALL_STATE(58)] = 2045,
  [SMALL_STATE(59)] = 2080,
  [SMALL_STATE(60)] = 2115,
  [SMALL_STATE(61)] = 2133,
  [SMALL_STATE(62)] = 2165,
  [SMALL_STATE(63)] = 2190,
  [SMALL_STATE(64)] = 2205,
  [SMALL_STATE(65)] = 2220,
  [SMALL_STATE(66)] = 2235,
  [SMALL_STATE(67)] = 2252,
  [SMALL_STATE(68)] = 2267,
  [SMALL_STATE(69)] = 2282,
  [SMALL_STATE(70)] = 2297,
  [SMALL_STATE(71)] = 2312,
  [SMALL_STATE(72)] = 2327,
  [SMALL_STATE(73)] = 2342,
  [SMALL_STATE(74)] = 2357,
  [SMALL_STATE(75)] = 2372,
  [SMALL_STATE(76)] = 2389,
  [SMALL_STATE(77)] = 2404,
  [SMALL_STATE(78)] = 2419,
  [SMALL_STATE(79)] = 2436,
  [SMALL_STATE(80)] = 2446,
  [SMALL_STATE(81)] = 2458,
  [SMALL_STATE(82)] = 2470,
  [SMALL_STATE(83)] = 2482,
  [SMALL_STATE(84)] = 2492,
  [SMALL_STATE(85)] = 2504,
  [SMALL_STATE(86)] = 2514,
  [SMALL_STATE(87)] = 2526,
  [SMALL_STATE(88)] = 2538,
  [SMALL_STATE(89)] = 2550,
  [SMALL_STATE(90)] = 2560,
  [SMALL_STATE(91)] = 2573,
  [SMALL_STATE(92)] = 2586,
  [SMALL_STATE(93)] = 2599,
  [SMALL_STATE(94)] = 2607,
  [SMALL_STATE(95)] = 2615,
  [SMALL_STATE(96)] = 2623,
  [SMALL_STATE(97)] = 2631,
  [SMALL_STATE(98)] = 2638,
  [SMALL_STATE(99)] = 2645,
  [SMALL_STATE(100)] = 2652,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__macro_repeat1, 2),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__macro_repeat1, 2), SHIFT_REPEAT(21),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__macro_repeat1, 2), SHIFT_REPEAT(47),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__macro_repeat1, 2), SHIFT_REPEAT(43),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__macro_repeat1, 2), SHIFT_REPEAT(19),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__macro_repeat1, 2), SHIFT_REPEAT(23),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__macro_repeat1, 2), SHIFT_REPEAT(26),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__macro_repeat1, 2), SHIFT_REPEAT(13),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__macro_repeat1, 2), SHIFT_REPEAT(22),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__macro_repeat1, 2), SHIFT_REPEAT(15),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__macro_repeat1, 2), SHIFT_REPEAT(24),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__macro_repeat1, 2), SHIFT_REPEAT(2),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__macro_repeat1, 2), SHIFT_REPEAT(20),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro, 2),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro, 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_instruction, 1),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_instruction, 1),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__normal_instruction_repeat1, 2),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat1, 2), SHIFT_REPEAT(11),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat1, 2), SHIFT_REPEAT(47),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat1, 2), SHIFT_REPEAT(44),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat1, 2), SHIFT_REPEAT(37),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat1, 2), SHIFT_REPEAT(28),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat1, 2), SHIFT_REPEAT(39),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat1, 2), SHIFT_REPEAT(36),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat1, 2), SHIFT_REPEAT(35),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat1, 2), SHIFT_REPEAT(34),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat1, 2), SHIFT_REPEAT(32),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat1, 2), SHIFT_REPEAT(6),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat1, 2), SHIFT_REPEAT(31),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__normal_instruction, 1),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__normal_instruction, 2),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_instruction, 2),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_call_instruction_repeat1, 2),
  [169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_call_instruction_repeat1, 2), SHIFT_REPEAT(47),
  [172] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_call_instruction_repeat1, 2), SHIFT_REPEAT(44),
  [175] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_call_instruction_repeat1, 2), SHIFT_REPEAT(37),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_call_instruction_repeat1, 2), SHIFT_REPEAT(28),
  [181] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_call_instruction_repeat1, 2), SHIFT_REPEAT(39),
  [184] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_call_instruction_repeat1, 2), SHIFT_REPEAT(36),
  [187] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_call_instruction_repeat1, 2), SHIFT_REPEAT(35),
  [190] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_call_instruction_repeat1, 2), SHIFT_REPEAT(34),
  [193] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_call_instruction_repeat1, 2), SHIFT_REPEAT(32),
  [196] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_call_instruction_repeat1, 2), SHIFT_REPEAT(10),
  [199] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_call_instruction_repeat1, 2), SHIFT_REPEAT(31),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer, 3),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pointer, 3),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register, 1),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_register, 1),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__operand, 2),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__operand, 2),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant, 1),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__constant, 1),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer, 4),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pointer, 4),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer, 5),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pointer, 5),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer, 6),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pointer, 6),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hexadecimal, 1),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hexadecimal, 1),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 1),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 1),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary, 1),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary, 1),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nasm_macro, 2),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nasm_macro, 2),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_octal, 1),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_octal, 1),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat1, 2),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_width, 1),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_width, 1),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gcc_pseudo_op, 3),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gcc_pseudo_op, 1),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gcc_pseudo_op, 4),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_width, 2),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_width, 2),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_segment_prefix, 2),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__gcc_pseudo_op_repeat1, 2),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__gcc_pseudo_op_repeat1, 2),
  [360] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__gcc_pseudo_op_repeat1, 2), SHIFT_REPEAT(52),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gcc_pseudo_op, 2),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__gcc_pseudo_op, 2),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [379] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pointer_repeat1, 2), SHIFT_REPEAT(54),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pointer_repeat1, 2),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__gcc_pseudo_op, 3),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [392] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(61),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_segment, 1),
  [407] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
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
