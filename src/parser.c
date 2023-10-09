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
#define STATE_COUNT 129
#define LARGE_STATE_COUNT 12
#define SYMBOL_COUNT 89
#define ALIAS_COUNT 0
#define TOKEN_COUNT 60
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
  aux_sym_nasm_preprocess_directive_token1 = 22,
  anon_sym_LBRACK = 23,
  anon_sym_RBRACK = 24,
  sym__nasm_macro = 25,
  sym_gcc_mnemonic = 26,
  sym_mnemonic = 27,
  anon_sym_BYTE = 28,
  anon_sym_DWORD = 29,
  anon_sym_QWORD = 30,
  anon_sym_WORD = 31,
  anon_sym_byte = 32,
  anon_sym_dword = 33,
  anon_sym_qword = 34,
  anon_sym_word = 35,
  anon_sym_PTR = 36,
  anon_sym_ptr = 37,
  aux_sym_hexadecimal_token1 = 38,
  aux_sym_hexadecimal_token2 = 39,
  aux_sym_hexadecimal_token3 = 40,
  aux_sym_binary_token1 = 41,
  aux_sym_binary_token2 = 42,
  aux_sym_octal_token1 = 43,
  aux_sym_octal_token2 = 44,
  aux_sym_register_token1 = 45,
  aux_sym_register_token2 = 46,
  aux_sym_register_token3 = 47,
  aux_sym_register_token4 = 48,
  aux_sym_register_token5 = 49,
  aux_sym_register_token6 = 50,
  aux_sym_register_token7 = 51,
  aux_sym_float_token1 = 52,
  aux_sym_float_token2 = 53,
  sym_integer = 54,
  aux_sym_string_token1 = 55,
  aux_sym_string_token2 = 56,
  sym__any_text = 57,
  sym_placeholder = 58,
  sym__identifier = 59,
  sym_program = 60,
  sym__statement = 61,
  sym_segment_prefix = 62,
  sym_segment = 63,
  sym_call_instruction = 64,
  sym_instruction = 65,
  sym__normal_instruction = 66,
  sym__gcc_pseudo_op = 67,
  sym_operator = 68,
  sym_nasm_preprocess_directive = 69,
  sym_nasm_assembler_directive = 70,
  sym__operand = 71,
  sym_width = 72,
  sym_pointer = 73,
  sym__micro_op_operand = 74,
  sym_hexadecimal = 75,
  sym_binary = 76,
  sym_octal = 77,
  sym_register = 78,
  sym__constant = 79,
  sym_float = 80,
  sym_string = 81,
  sym_identifier = 82,
  aux_sym_program_repeat1 = 83,
  aux_sym_call_instruction_repeat1 = 84,
  aux_sym__normal_instruction_repeat1 = 85,
  aux_sym__gcc_pseudo_op_repeat1 = 86,
  aux_sym_nasm_preprocess_directive_repeat1 = 87,
  aux_sym_pointer_repeat1 = 88,
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
  [aux_sym_nasm_preprocess_directive_token1] = "nasm_preprocess_directive_token1",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym__nasm_macro] = "macro",
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
  [sym_operator] = "operator",
  [sym_nasm_preprocess_directive] = "nasm_preprocess_directive",
  [sym_nasm_assembler_directive] = "nasm_assembler_directive",
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
  [aux_sym_nasm_preprocess_directive_repeat1] = "nasm_preprocess_directive_repeat1",
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
  [aux_sym_nasm_preprocess_directive_token1] = aux_sym_nasm_preprocess_directive_token1,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym__nasm_macro] = sym__nasm_macro,
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
  [sym_operator] = sym_operator,
  [sym_nasm_preprocess_directive] = sym_nasm_preprocess_directive,
  [sym_nasm_assembler_directive] = sym_nasm_assembler_directive,
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
  [aux_sym_nasm_preprocess_directive_repeat1] = aux_sym_nasm_preprocess_directive_repeat1,
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
  [aux_sym_nasm_preprocess_directive_token1] = {
    .visible = false,
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
  [sym__nasm_macro] = {
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
  [sym_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_nasm_preprocess_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_nasm_assembler_directive] = {
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
  [aux_sym_nasm_preprocess_directive_repeat1] = {
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
  [13] = 11,
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
  [30] = 17,
  [31] = 23,
  [32] = 20,
  [33] = 33,
  [34] = 29,
  [35] = 24,
  [36] = 18,
  [37] = 19,
  [38] = 21,
  [39] = 25,
  [40] = 26,
  [41] = 27,
  [42] = 28,
  [43] = 33,
  [44] = 22,
  [45] = 33,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 48,
  [50] = 46,
  [51] = 48,
  [52] = 46,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 59,
  [62] = 58,
  [63] = 59,
  [64] = 58,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 22,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 73,
  [76] = 76,
  [77] = 77,
  [78] = 71,
  [79] = 79,
  [80] = 72,
  [81] = 81,
  [82] = 82,
  [83] = 71,
  [84] = 84,
  [85] = 77,
  [86] = 77,
  [87] = 79,
  [88] = 72,
  [89] = 81,
  [90] = 81,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 79,
  [95] = 73,
  [96] = 23,
  [97] = 28,
  [98] = 98,
  [99] = 25,
  [100] = 17,
  [101] = 101,
  [102] = 18,
  [103] = 17,
  [104] = 104,
  [105] = 29,
  [106] = 19,
  [107] = 20,
  [108] = 21,
  [109] = 24,
  [110] = 26,
  [111] = 27,
  [112] = 25,
  [113] = 20,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
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
      if (eof) ADVANCE(127);
      if (lookahead == '!') ADVANCE(35);
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(131);
      if (lookahead == '$') ADVANCE(31);
      if (lookahead == '%') ADVANCE(161);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '*') ADVANCE(152);
      if (lookahead == '+') ADVANCE(153);
      if (lookahead == ',') ADVANCE(149);
      if (lookahead == '-') ADVANCE(156);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == '/') ADVANCE(157);
      if (lookahead == '0') ADVANCE(311);
      if (lookahead == '1') ADVANCE(313);
      if (lookahead == ':') ADVANCE(132);
      if (lookahead == '<') ADVANCE(36);
      if (lookahead == '=') ADVANCE(37);
      if (lookahead == '>') ADVANCE(38);
      if (lookahead == '?') ADVANCE(438);
      if (lookahead == 'B') ADVANCE(54);
      if (lookahead == 'D') ADVANCE(52);
      if (lookahead == 'P') ADVANCE(50);
      if (lookahead == 'Q') ADVANCE(53);
      if (lookahead == 'W') ADVANCE(43);
      if (lookahead == '[') ADVANCE(162);
      if (lookahead == '\\') SKIP(107)
      if (lookahead == ']') ADVANCE(164);
      if (lookahead == '_') ADVANCE(96);
      if (lookahead == 'b') ADVANCE(90);
      if (lookahead == 'c') ADVANCE(55);
      if (lookahead == 'd') ADVANCE(80);
      if (lookahead == 'e') ADVANCE(81);
      if (lookahead == 'f') ADVANCE(82);
      if (lookahead == 'g') ADVANCE(83);
      if (lookahead == 'p') ADVANCE(85);
      if (lookahead == 'q') ADVANCE(87);
      if (lookahead == 's') ADVANCE(84);
      if (lookahead == 'w') ADVANCE(70);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(317);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'a') ADVANCE(101);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(316);
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
      if (lookahead == '\n') SKIP(22)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(22)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(23)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(23)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(24)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(24)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(26)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(26)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(91)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(91)
      if (lookahead == '\r') SKIP(9)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(25)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(25)
      if (lookahead == '\r') SKIP(11)
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(27)
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(27)
      if (lookahead == '\r') SKIP(13)
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(92)
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(92)
      if (lookahead == '\r') SKIP(15)
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(93)
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(93)
      if (lookahead == '\r') SKIP(17)
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(94)
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(94)
      if (lookahead == '\r') SKIP(19)
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(131);
      if (lookahead == '%') ADVANCE(161);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == ':') ADVANCE(145);
      if (lookahead == '[') ADVANCE(162);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == 'c') ADVANCE(185);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(22)
      if (lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          lookahead == ',' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(131);
      if (lookahead == '%') ADVANCE(161);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == '[') ADVANCE(162);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == 'c') ADVANCE(185);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(22)
      if (lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          lookahead == ',' ||
          lookahead == '-' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 23:
      if (lookahead == '!') ADVANCE(35);
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(131);
      if (lookahead == '$') ADVANCE(444);
      if (lookahead == '%') ADVANCE(56);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '*') ADVANCE(152);
      if (lookahead == '+') ADVANCE(153);
      if (lookahead == '-') ADVANCE(155);
      if (lookahead == '.') ADVANCE(504);
      if (lookahead == '/') ADVANCE(157);
      if (lookahead == '0') ADVANCE(320);
      if (lookahead == '1') ADVANCE(322);
      if (lookahead == '<') ADVANCE(446);
      if (lookahead == '=') ADVANCE(37);
      if (lookahead == '>') ADVANCE(447);
      if (lookahead == '?') ADVANCE(438);
      if (lookahead == 'B') ADVANCE(178);
      if (lookahead == 'D') ADVANCE(176);
      if (lookahead == 'Q') ADVANCE(177);
      if (lookahead == 'W') ADVANCE(169);
      if (lookahead == '[') ADVANCE(162);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == '_') ADVANCE(179);
      if (lookahead == 'b') ADVANCE(485);
      if (lookahead == 'd') ADVANCE(477);
      if (lookahead == 'e') ADVANCE(464);
      if (lookahead == 'f') ADVANCE(507);
      if (lookahead == 'q') ADVANCE(498);
      if (lookahead == 'r') ADVANCE(445);
      if (lookahead == 's') ADVANCE(475);
      if (lookahead == 'w') ADVANCE(482);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(499);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(326);
      if (lookahead == 'x' ||
          lookahead == 'y') ADVANCE(481);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(181);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(325);
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
          lookahead == '@' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(182);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(131);
      if (lookahead == '$') ADVANCE(444);
      if (lookahead == '%') ADVANCE(56);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '-') ADVANCE(442);
      if (lookahead == '.') ADVANCE(504);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == '0') ADVANCE(320);
      if (lookahead == '1') ADVANCE(322);
      if (lookahead == '?') ADVANCE(438);
      if (lookahead == 'B') ADVANCE(463);
      if (lookahead == 'D') ADVANCE(461);
      if (lookahead == 'Q') ADVANCE(462);
      if (lookahead == 'W') ADVANCE(452);
      if (lookahead == '[') ADVANCE(162);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == ']') ADVANCE(164);
      if (lookahead == '_') ADVANCE(501);
      if (lookahead == 'b') ADVANCE(485);
      if (lookahead == 'd') ADVANCE(477);
      if (lookahead == 'e') ADVANCE(464);
      if (lookahead == 'q') ADVANCE(498);
      if (lookahead == 'r') ADVANCE(445);
      if (lookahead == 's') ADVANCE(475);
      if (lookahead == 'w') ADVANCE(482);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(499);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(326);
      if (lookahead == 'x' ||
          lookahead == 'y') ADVANCE(481);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'f') ADVANCE(507);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(325);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(24)
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '<' ||
          ('>' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 25:
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(131);
      if (lookahead == '$') ADVANCE(444);
      if (lookahead == '%') ADVANCE(56);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '-') ADVANCE(442);
      if (lookahead == '.') ADVANCE(504);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == '0') ADVANCE(320);
      if (lookahead == '1') ADVANCE(322);
      if (lookahead == '?') ADVANCE(438);
      if (lookahead == 'P') ADVANCE(460);
      if (lookahead == '[') ADVANCE(162);
      if (lookahead == '\\') SKIP(12)
      if (lookahead == '_') ADVANCE(501);
      if (lookahead == 'b') ADVANCE(486);
      if (lookahead == 'd') ADVANCE(478);
      if (lookahead == 'e') ADVANCE(464);
      if (lookahead == 'p') ADVANCE(497);
      if (lookahead == 'r') ADVANCE(445);
      if (lookahead == 's') ADVANCE(475);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(499);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(326);
      if (lookahead == 'x' ||
          lookahead == 'y') ADVANCE(481);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(325);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'f') ADVANCE(507);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(25)
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '<' ||
          ('>' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 26:
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(131);
      if (lookahead == '$') ADVANCE(444);
      if (lookahead == '%') ADVANCE(56);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '-') ADVANCE(442);
      if (lookahead == '.') ADVANCE(504);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == '0') ADVANCE(320);
      if (lookahead == '1') ADVANCE(322);
      if (lookahead == '?') ADVANCE(438);
      if (lookahead == '[') ADVANCE(162);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == '_') ADVANCE(501);
      if (lookahead == 'b') ADVANCE(486);
      if (lookahead == 'd') ADVANCE(478);
      if (lookahead == 'e') ADVANCE(464);
      if (lookahead == 'r') ADVANCE(445);
      if (lookahead == 's') ADVANCE(475);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(499);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(326);
      if (lookahead == 'x' ||
          lookahead == 'y') ADVANCE(481);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(325);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'f') ADVANCE(507);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(26)
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '<' ||
          ('>' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 27:
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(131);
      if (lookahead == '$') ADVANCE(444);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '-') ADVANCE(442);
      if (lookahead == '.') ADVANCE(504);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == '0') ADVANCE(320);
      if (lookahead == '1') ADVANCE(322);
      if (lookahead == '\\') SKIP(14)
      if (lookahead == '_') ADVANCE(501);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(326);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(325);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(27)
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(507);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 28:
      if (lookahead == '"') ADVANCE(354);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == '\'') ADVANCE(356);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == '/') ADVANCE(131);
      END_STATE();
    case 31:
      if (lookahead == '0') ADVANCE(104);
      END_STATE();
    case 32:
      if (lookahead == '1') ADVANCE(97);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(277);
      if (lookahead == 'b') ADVANCE(73);
      if (lookahead == 'd') ADVANCE(65);
      if (lookahead == 'i') ADVANCE(75);
      if (lookahead == 's') ADVANCE(64);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(88);
      END_STATE();
    case 33:
      if (lookahead == ':') ADVANCE(145);
      if (lookahead == ' ' ||
          lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          lookahead == ',' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>') ADVANCE(34);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(145);
      if (sym_label_character_set_1(lookahead)) ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == '=') ADVANCE(151);
      END_STATE();
    case 36:
      if (lookahead == '=') ADVANCE(158);
      END_STATE();
    case 37:
      if (lookahead == '=') ADVANCE(159);
      END_STATE();
    case 38:
      if (lookahead == '=') ADVANCE(160);
      END_STATE();
    case 39:
      if (lookahead == 'D') ADVANCE(205);
      END_STATE();
    case 40:
      if (lookahead == 'D') ADVANCE(197);
      END_STATE();
    case 41:
      if (lookahead == 'D') ADVANCE(201);
      END_STATE();
    case 42:
      if (lookahead == 'E') ADVANCE(193);
      END_STATE();
    case 43:
      if (lookahead == 'O') ADVANCE(47);
      END_STATE();
    case 44:
      if (lookahead == 'O') ADVANCE(48);
      END_STATE();
    case 45:
      if (lookahead == 'O') ADVANCE(49);
      END_STATE();
    case 46:
      if (lookahead == 'R') ADVANCE(221);
      END_STATE();
    case 47:
      if (lookahead == 'R') ADVANCE(39);
      END_STATE();
    case 48:
      if (lookahead == 'R') ADVANCE(40);
      END_STATE();
    case 49:
      if (lookahead == 'R') ADVANCE(41);
      END_STATE();
    case 50:
      if (lookahead == 'T') ADVANCE(46);
      END_STATE();
    case 51:
      if (lookahead == 'T') ADVANCE(42);
      END_STATE();
    case 52:
      if (lookahead == 'W') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(63);
      END_STATE();
    case 53:
      if (lookahead == 'W') ADVANCE(45);
      END_STATE();
    case 54:
      if (lookahead == 'Y') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(63);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(62);
      if (lookahead == 's') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(63);
      END_STATE();
    case 56:
      if (lookahead == 'b') ADVANCE(74);
      if (lookahead == 'd') ADVANCE(66);
      if (lookahead == 'e') ADVANCE(57);
      if (lookahead == 'r') ADVANCE(32);
      if (lookahead == 's') ADVANCE(64);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(89);
      if (lookahead == 'x' ||
          lookahead == 'y') ADVANCE(69);
      END_STATE();
    case 57:
      if (lookahead == 'b') ADVANCE(73);
      if (lookahead == 'd') ADVANCE(65);
      if (lookahead == 's') ADVANCE(64);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(88);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(218);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(212);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(215);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(209);
      END_STATE();
    case 62:
      if (lookahead == 'h') ADVANCE(225);
      if (lookahead == 'l') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(63);
      END_STATE();
    case 63:
      if (lookahead == 'h') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(63);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(269);
      if (lookahead == 'p') ADVANCE(273);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(269);
      if (lookahead == 'x') ADVANCE(265);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(269);
      if (lookahead == 'x') ADVANCE(265);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(261);
      END_STATE();
    case 67:
      if (lookahead == 'l') ADVANCE(146);
      END_STATE();
    case 68:
      if (lookahead == 'm') ADVANCE(98);
      END_STATE();
    case 69:
      if (lookahead == 'm') ADVANCE(68);
      END_STATE();
    case 70:
      if (lookahead == 'o') ADVANCE(77);
      END_STATE();
    case 71:
      if (lookahead == 'o') ADVANCE(78);
      END_STATE();
    case 72:
      if (lookahead == 'o') ADVANCE(79);
      END_STATE();
    case 73:
      if (lookahead == 'p') ADVANCE(273);
      if (lookahead == 'x') ADVANCE(265);
      END_STATE();
    case 74:
      if (lookahead == 'p') ADVANCE(273);
      if (lookahead == 'x') ADVANCE(265);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(261);
      END_STATE();
    case 75:
      if (lookahead == 'p') ADVANCE(285);
      END_STATE();
    case 76:
      if (lookahead == 'r') ADVANCE(223);
      END_STATE();
    case 77:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 78:
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 79:
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 80:
      if (lookahead == 's') ADVANCE(135);
      if (lookahead == 'w') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(63);
      END_STATE();
    case 81:
      if (lookahead == 's') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(63);
      END_STATE();
    case 82:
      if (lookahead == 's') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(63);
      END_STATE();
    case 83:
      if (lookahead == 's') ADVANCE(141);
      END_STATE();
    case 84:
      if (lookahead == 's') ADVANCE(143);
      END_STATE();
    case 85:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 86:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 87:
      if (lookahead == 'w') ADVANCE(72);
      END_STATE();
    case 88:
      if (lookahead == 'x') ADVANCE(265);
      END_STATE();
    case 89:
      if (lookahead == 'x') ADVANCE(265);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(261);
      END_STATE();
    case 90:
      if (lookahead == 'y') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(63);
      END_STATE();
    case 91:
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(131);
      if (lookahead == '$') ADVANCE(444);
      if (lookahead == '%') ADVANCE(56);
      if (lookahead == '-') ADVANCE(443);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == '0') ADVANCE(338);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == 'a') ADVANCE(499);
      if (lookahead == 'b') ADVANCE(486);
      if (lookahead == 'c') ADVANCE(493);
      if (lookahead == 'd') ADVANCE(476);
      if (lookahead == 'e') ADVANCE(465);
      if (lookahead == 'f') ADVANCE(494);
      if (lookahead == 'g') ADVANCE(495);
      if (lookahead == 'r') ADVANCE(445);
      if (lookahead == 's') ADVANCE(474);
      if (lookahead == 'x' ||
          lookahead == 'y') ADVANCE(481);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(507);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(91)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 92:
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(131);
      if (lookahead == '$') ADVANCE(444);
      if (lookahead == '%') ADVANCE(56);
      if (lookahead == '-') ADVANCE(443);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == '0') ADVANCE(338);
      if (lookahead == '\\') SKIP(16)
      if (lookahead == 'b') ADVANCE(486);
      if (lookahead == 'd') ADVANCE(478);
      if (lookahead == 'e') ADVANCE(464);
      if (lookahead == 'r') ADVANCE(445);
      if (lookahead == 's') ADVANCE(475);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(499);
      if (lookahead == 'x' ||
          lookahead == 'y') ADVANCE(481);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'f') ADVANCE(507);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(92)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 93:
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(131);
      if (lookahead == '*') ADVANCE(152);
      if (lookahead == '+') ADVANCE(153);
      if (lookahead == '-') ADVANCE(154);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == '\\') SKIP(18)
      if (lookahead == ']') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(93)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 94:
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(131);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == '\\') SKIP(20)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(94)
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 95:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(299);
      END_STATE();
    case 96:
      if (lookahead == 'b' ||
          lookahead == 'y') ADVANCE(234);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(96);
      END_STATE();
    case 97:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(277);
      END_STATE();
    case 98:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(281);
      END_STATE();
    case 99:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(299);
      END_STATE();
    case 100:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(290);
      END_STATE();
    case 101:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(63);
      END_STATE();
    case 102:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(231);
      END_STATE();
    case 103:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(228);
      END_STATE();
    case 104:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(103);
      END_STATE();
    case 105:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 106:
      if (eof) ADVANCE(127);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 107:
      if (eof) ADVANCE(127);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(106)
      END_STATE();
    case 108:
      if (eof) ADVANCE(127);
      if (lookahead == '\n') SKIP(126)
      END_STATE();
    case 109:
      if (eof) ADVANCE(127);
      if (lookahead == '\n') SKIP(126)
      if (lookahead == '\r') SKIP(108)
      END_STATE();
    case 110:
      if (eof) ADVANCE(127);
      if (lookahead == '\n') SKIP(112)
      END_STATE();
    case 111:
      if (eof) ADVANCE(127);
      if (lookahead == '\n') SKIP(112)
      if (lookahead == '\r') SKIP(110)
      END_STATE();
    case 112:
      if (eof) ADVANCE(127);
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '!') ADVANCE(35);
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(131);
      if (lookahead == '$') ADVANCE(444);
      if (lookahead == '%') ADVANCE(56);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '*') ADVANCE(152);
      if (lookahead == '+') ADVANCE(153);
      if (lookahead == '-') ADVANCE(155);
      if (lookahead == '.') ADVANCE(504);
      if (lookahead == '/') ADVANCE(157);
      if (lookahead == '0') ADVANCE(320);
      if (lookahead == '1') ADVANCE(322);
      if (lookahead == '<') ADVANCE(446);
      if (lookahead == '=') ADVANCE(37);
      if (lookahead == '>') ADVANCE(447);
      if (lookahead == '?') ADVANCE(438);
      if (lookahead == 'B') ADVANCE(178);
      if (lookahead == 'D') ADVANCE(176);
      if (lookahead == 'Q') ADVANCE(177);
      if (lookahead == 'W') ADVANCE(169);
      if (lookahead == '[') ADVANCE(162);
      if (lookahead == '\\') SKIP(111)
      if (lookahead == '_') ADVANCE(179);
      if (lookahead == 'b') ADVANCE(485);
      if (lookahead == 'd') ADVANCE(477);
      if (lookahead == 'e') ADVANCE(464);
      if (lookahead == 'f') ADVANCE(507);
      if (lookahead == 'q') ADVANCE(498);
      if (lookahead == 'r') ADVANCE(445);
      if (lookahead == 's') ADVANCE(475);
      if (lookahead == 'w') ADVANCE(482);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(499);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(326);
      if (lookahead == 'x' ||
          lookahead == 'y') ADVANCE(481);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(181);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(325);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(112)
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '@' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(182);
      END_STATE();
    case 113:
      if (eof) ADVANCE(127);
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(131);
      if (lookahead == '$') ADVANCE(444);
      if (lookahead == '%') ADVANCE(56);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == ',') ADVANCE(149);
      if (lookahead == '-') ADVANCE(442);
      if (lookahead == '.') ADVANCE(504);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == '0') ADVANCE(320);
      if (lookahead == '1') ADVANCE(322);
      if (lookahead == '?') ADVANCE(438);
      if (lookahead == 'B') ADVANCE(463);
      if (lookahead == 'D') ADVANCE(461);
      if (lookahead == 'Q') ADVANCE(462);
      if (lookahead == 'W') ADVANCE(452);
      if (lookahead == '[') ADVANCE(162);
      if (lookahead == '\\') SKIP(117)
      if (lookahead == '_') ADVANCE(501);
      if (lookahead == 'b') ADVANCE(485);
      if (lookahead == 'd') ADVANCE(477);
      if (lookahead == 'e') ADVANCE(464);
      if (lookahead == 'q') ADVANCE(498);
      if (lookahead == 'r') ADVANCE(445);
      if (lookahead == 's') ADVANCE(475);
      if (lookahead == 'w') ADVANCE(482);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(499);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(326);
      if (lookahead == 'x' ||
          lookahead == 'y') ADVANCE(481);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'f') ADVANCE(507);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(325);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(113)
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '<' ||
          ('>' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 114:
      if (eof) ADVANCE(127);
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(131);
      if (lookahead == '$') ADVANCE(444);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '-') ADVANCE(442);
      if (lookahead == '.') ADVANCE(504);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == '0') ADVANCE(320);
      if (lookahead == '1') ADVANCE(322);
      if (lookahead == '\\') SKIP(120)
      if (lookahead == '_') ADVANCE(501);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(326);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(325);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(114)
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(507);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 115:
      if (eof) ADVANCE(127);
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(131);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == '\\') SKIP(122)
      if (lookahead == 'c') ADVANCE(189);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(115)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 116:
      if (eof) ADVANCE(127);
      if (lookahead == '\n') SKIP(113)
      END_STATE();
    case 117:
      if (eof) ADVANCE(127);
      if (lookahead == '\n') SKIP(113)
      if (lookahead == '\r') SKIP(116)
      END_STATE();
    case 118:
      if (eof) ADVANCE(127);
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '"') ADVANCE(358);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(131);
      if (lookahead == '$') ADVANCE(366);
      if (lookahead == '%') ADVANCE(383);
      if (lookahead == '\'') ADVANCE(359);
      if (lookahead == '-') ADVANCE(364);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == '/') ADVANCE(365);
      if (lookahead == '0') ADVANCE(329);
      if (lookahead == '1') ADVANCE(331);
      if (lookahead == '?') ADVANCE(439);
      if (lookahead == 'B') ADVANCE(382);
      if (lookahead == 'D') ADVANCE(380);
      if (lookahead == 'Q') ADVANCE(381);
      if (lookahead == 'W') ADVANCE(373);
      if (lookahead == '[') ADVANCE(163);
      if (lookahead == '\\') ADVANCE(361);
      if (lookahead == '_') ADVANCE(422);
      if (lookahead == 'b') ADVANCE(407);
      if (lookahead == 'd') ADVANCE(395);
      if (lookahead == 'e') ADVANCE(384);
      if (lookahead == 'q') ADVANCE(417);
      if (lookahead == 'r') ADVANCE(367);
      if (lookahead == 's') ADVANCE(394);
      if (lookahead == 'w') ADVANCE(404);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(418);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(335);
      if (lookahead == 'x' ||
          lookahead == 'y') ADVANCE(402);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'f') ADVANCE(432);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(360);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '<' ||
          ('>' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead != 0) ADVANCE(437);
      END_STATE();
    case 119:
      if (eof) ADVANCE(127);
      if (lookahead == '\n') SKIP(114)
      END_STATE();
    case 120:
      if (eof) ADVANCE(127);
      if (lookahead == '\n') SKIP(114)
      if (lookahead == '\r') SKIP(119)
      END_STATE();
    case 121:
      if (eof) ADVANCE(127);
      if (lookahead == '\n') SKIP(115)
      END_STATE();
    case 122:
      if (eof) ADVANCE(127);
      if (lookahead == '\n') SKIP(115)
      if (lookahead == '\r') SKIP(121)
      END_STATE();
    case 123:
      if (eof) ADVANCE(127);
      if (lookahead == '\n') SKIP(125)
      END_STATE();
    case 124:
      if (eof) ADVANCE(127);
      if (lookahead == '\n') SKIP(125)
      if (lookahead == '\r') SKIP(123)
      END_STATE();
    case 125:
      if (eof) ADVANCE(127);
      if (lookahead == '\n') ADVANCE(130);
      if (lookahead == ' ') ADVANCE(150);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(131);
      if (lookahead == ',') ADVANCE(149);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == '[') ADVANCE(162);
      if (lookahead == '\\') SKIP(124)
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(125)
      END_STATE();
    case 126:
      if (eof) ADVANCE(127);
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(131);
      if (lookahead == '%') ADVANCE(161);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == '[') ADVANCE(162);
      if (lookahead == '\\') SKIP(109)
      if (lookahead == 'c') ADVANCE(185);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(126)
      if (lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          lookahead == ',' ||
          lookahead == '-' ||
          (':' <= lookahead && lookahead <= '<') ||
          lookahead == '>') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '\\') ADVANCE(361);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(360);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(130);
      if (lookahead == ' ') ADVANCE(150);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_cs);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_cs);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(511);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_ds);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_ds);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(511);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_es);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_es);
      if (lookahead == 'i') ADVANCE(270);
      if (lookahead == 'p') ADVANCE(274);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(511);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_fs);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_fs);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(511);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_gs);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_gs);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(511);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_ss);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_ss);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(511);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == ':') ADVANCE(145);
      if (sym_label_character_set_1(lookahead)) ADVANCE(34);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_call);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_call);
      if (lookahead == ':') ADVANCE(145);
      if (lookahead == ' ' ||
          lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          (',' <= lookahead && lookahead <= '.') ||
          lookahead == '<' ||
          lookahead == '>') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_call);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(130);
      if (lookahead == ' ') ADVANCE(150);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(504);
      if (lookahead == '0') ADVANCE(327);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(328);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '0') ADVANCE(318);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(319);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(131);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_nasm_preprocess_directive_token1);
      if (lookahead == '%') ADVANCE(161);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__nasm_macro);
      if (lookahead == 'D') ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(182);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__nasm_macro);
      if (lookahead == 'D') ADVANCE(198);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(182);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__nasm_macro);
      if (lookahead == 'D') ADVANCE(202);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(182);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__nasm_macro);
      if (lookahead == 'E') ADVANCE(194);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(182);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__nasm_macro);
      if (lookahead == 'O') ADVANCE(172);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(182);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__nasm_macro);
      if (lookahead == 'O') ADVANCE(173);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(182);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__nasm_macro);
      if (lookahead == 'O') ADVANCE(174);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(182);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__nasm_macro);
      if (lookahead == 'R') ADVANCE(165);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(182);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__nasm_macro);
      if (lookahead == 'R') ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(182);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__nasm_macro);
      if (lookahead == 'R') ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(182);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__nasm_macro);
      if (lookahead == 'T') ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(182);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__nasm_macro);
      if (lookahead == 'W') ADVANCE(170);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(473);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(182);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__nasm_macro);
      if (lookahead == 'W') ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(182);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__nasm_macro);
      if (lookahead == 'Y') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(473);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(182);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__nasm_macro);
      if (lookahead == '_') ADVANCE(179);
      if (lookahead == 'b' ||
          lookahead == 'y') ADVANCE(244);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(501);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(182);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('2' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__nasm_macro);
      if (lookahead == 'h') ADVANCE(226);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(473);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(182);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__nasm_macro);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(473);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(182);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__nasm_macro);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(182);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_gcc_mnemonic);
      if (lookahead == ':') ADVANCE(145);
      if (lookahead == ' ' ||
          lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          lookahead == ',' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>') ADVANCE(34);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_gcc_mnemonic);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_mnemonic);
      if (lookahead == ':') ADVANCE(145);
      if (lookahead == 'a') ADVANCE(187);
      if (lookahead == ' ' ||
          lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          (',' <= lookahead && lookahead <= '.') ||
          lookahead == '<' ||
          lookahead == '>') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_mnemonic);
      if (lookahead == ':') ADVANCE(145);
      if (lookahead == 'l') ADVANCE(147);
      if (lookahead == ' ' ||
          lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          (',' <= lookahead && lookahead <= '.') ||
          lookahead == '<' ||
          lookahead == '>') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_mnemonic);
      if (lookahead == ':') ADVANCE(145);
      if (lookahead == 'l') ADVANCE(186);
      if (lookahead == ' ' ||
          lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          (',' <= lookahead && lookahead <= '.') ||
          lookahead == '<' ||
          lookahead == '>') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_mnemonic);
      if (lookahead == ':') ADVANCE(145);
      if (lookahead == ' ' ||
          lookahead == '&' ||
          ('(' <= lookahead && lookahead <= '*') ||
          (',' <= lookahead && lookahead <= '.') ||
          lookahead == '<' ||
          lookahead == '>') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_mnemonic);
      if (lookahead == 'a') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_mnemonic);
      if (lookahead == 'l') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_mnemonic);
      if (lookahead == 'l') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_mnemonic);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_BYTE);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_BYTE);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(182);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_BYTE);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(511);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_BYTE);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_DWORD);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_DWORD);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(182);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_DWORD);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(511);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_DWORD);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_QWORD);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_QWORD);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(182);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_QWORD);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(511);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_QWORD);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_WORD);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_WORD);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(182);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_WORD);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(511);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_WORD);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_byte);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_byte);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(511);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_byte);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_dword);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_dword);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(511);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_dword);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_qword);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_qword);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(511);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_qword);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_word);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_word);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(511);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_word);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_PTR);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_PTR);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(511);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_ptr);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_ptr);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(511);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_hexadecimal_token1);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_hexadecimal_token1);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(511);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_hexadecimal_token1);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_hexadecimal_token2);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_hexadecimal_token2);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(511);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_hexadecimal_token2);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_hexadecimal_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(231);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_hexadecimal_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(232);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_hexadecimal_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(233);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (lookahead == '_') ADVANCE(249);
      if (lookahead == 'h') ADVANCE(225);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(246);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(63);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (lookahead == '_') ADVANCE(250);
      if (lookahead == 'h') ADVANCE(226);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(247);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(473);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (lookahead == '_') ADVANCE(251);
      if (lookahead == 'h') ADVANCE(227);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(248);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(393);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (lookahead == 'h') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(63);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (lookahead == 'h') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(473);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (lookahead == 'h') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(393);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(249);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(250);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('2' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(251);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('2' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(511);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_binary_token2);
      if (lookahead == '_') ADVANCE(249);
      if (lookahead == 'h') ADVANCE(225);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(246);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(63);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_binary_token2);
      if (lookahead == '_') ADVANCE(250);
      if (lookahead == 'h') ADVANCE(226);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(247);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(473);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_binary_token2);
      if (lookahead == '_') ADVANCE(251);
      if (lookahead == 'h') ADVANCE(227);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(248);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(393);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_binary_token2);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(249);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_binary_token2);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(250);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('2' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_binary_token2);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(251);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('2' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_octal_token1);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_octal_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(258);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_octal_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(259);
      if (sym__identifier_character_set_2(lookahead)) ADVANCE(511);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_octal_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(260);
      if (sym__identifier_character_set_2(lookahead)) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_octal_token1);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(511);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_octal_token1);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_octal_token2);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(258);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_octal_token2);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(259);
      if (sym__identifier_character_set_2(lookahead)) ADVANCE(511);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_octal_token2);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(260);
      if (sym__identifier_character_set_2(lookahead)) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_register_token1);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_register_token1);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(511);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_register_token1);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_register_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_register_token2);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_register_token2);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(511);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_register_token2);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_register_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_register_token3);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_register_token3);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(511);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_register_token3);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_register_token3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_register_token4);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_register_token4);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(511);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_register_token4);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_register_token4);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_register_token5);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_register_token5);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(511);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_register_token5);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_register_token5);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_register_token6);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_register_token6);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(511);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_register_token6);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_register_token6);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_register_token7);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_register_token7);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(511);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_register_token7);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_register_token7);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == '.') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(289);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == '.') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(290);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == '.') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(291);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == '.') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == 'e') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(293);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == 'e') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(294);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(296);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(297);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == '.') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(299);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == '.') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == '.') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(301);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == '.') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == 'e') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(303);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == 'e') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(293);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == 'e') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(294);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(307);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_integer);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(303);
      if (lookahead == '_') ADVANCE(96);
      if (lookahead == 'b') ADVANCE(235);
      if (lookahead == 'd') ADVANCE(343);
      if (lookahead == 'y') ADVANCE(241);
      if (lookahead == 'h' ||
          lookahead == 'x') ADVANCE(102);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(253);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(312);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(315);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(314);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(63);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(303);
      if (lookahead == '_') ADVANCE(96);
      if (lookahead == 'b') ADVANCE(238);
      if (lookahead == 'd') ADVANCE(344);
      if (lookahead == 'h') ADVANCE(225);
      if (lookahead == 'y') ADVANCE(234);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(252);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(312);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(315);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(314);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(63);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(303);
      if (lookahead == '_') ADVANCE(96);
      if (lookahead == 'b') ADVANCE(238);
      if (lookahead == 'd') ADVANCE(344);
      if (lookahead == 'y') ADVANCE(234);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(252);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(312);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(315);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(314);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(63);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(303);
      if (lookahead == 'd') ADVANCE(344);
      if (lookahead == 'h') ADVANCE(225);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(252);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(314);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(63);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(303);
      if (lookahead == 'd') ADVANCE(344);
      if (lookahead == 'h') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(315);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(63);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(303);
      if (lookahead == 'd') ADVANCE(344);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(252);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(314);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(63);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(303);
      if (lookahead == 'd') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(315);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(63);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(303);
      if (lookahead == 'd') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(319);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(303);
      if (lookahead == 'd') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(319);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(304);
      if (lookahead == '_') ADVANCE(501);
      if (lookahead == 'b') ADVANCE(236);
      if (lookahead == 'd') ADVANCE(345);
      if (lookahead == 'y') ADVANCE(242);
      if (lookahead == 'h' ||
          lookahead == 'x') ADVANCE(508);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(254);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(321);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(324);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(473);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(304);
      if (lookahead == '_') ADVANCE(501);
      if (lookahead == 'b') ADVANCE(239);
      if (lookahead == 'd') ADVANCE(346);
      if (lookahead == 'h') ADVANCE(226);
      if (lookahead == 'y') ADVANCE(244);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(256);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(321);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(324);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(473);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(304);
      if (lookahead == '_') ADVANCE(501);
      if (lookahead == 'b') ADVANCE(239);
      if (lookahead == 'd') ADVANCE(346);
      if (lookahead == 'y') ADVANCE(244);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(256);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(321);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(324);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(473);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(304);
      if (lookahead == 'd') ADVANCE(346);
      if (lookahead == 'h') ADVANCE(226);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(256);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(473);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(304);
      if (lookahead == 'd') ADVANCE(346);
      if (lookahead == 'h') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(324);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(473);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(304);
      if (lookahead == 'd') ADVANCE(346);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(256);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(473);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(304);
      if (lookahead == 'd') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(324);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(473);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(304);
      if (lookahead == 'd') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(328);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(304);
      if (lookahead == 'd') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(328);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(305);
      if (lookahead == '_') ADVANCE(422);
      if (lookahead == 'b') ADVANCE(237);
      if (lookahead == 'd') ADVANCE(347);
      if (lookahead == 'y') ADVANCE(243);
      if (lookahead == 'h' ||
          lookahead == 'x') ADVANCE(433);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(255);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(330);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(333);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(332);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(393);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(305);
      if (lookahead == '_') ADVANCE(422);
      if (lookahead == 'b') ADVANCE(240);
      if (lookahead == 'd') ADVANCE(348);
      if (lookahead == 'h') ADVANCE(227);
      if (lookahead == 'y') ADVANCE(245);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(257);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(330);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(333);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(332);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(393);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(305);
      if (lookahead == '_') ADVANCE(422);
      if (lookahead == 'b') ADVANCE(240);
      if (lookahead == 'd') ADVANCE(348);
      if (lookahead == 'y') ADVANCE(245);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(257);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(330);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(333);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(332);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(393);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(305);
      if (lookahead == 'd') ADVANCE(348);
      if (lookahead == 'h') ADVANCE(227);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(257);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(332);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(393);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(305);
      if (lookahead == 'd') ADVANCE(348);
      if (lookahead == 'h') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(333);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(393);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(305);
      if (lookahead == 'd') ADVANCE(348);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(257);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(332);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(393);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(305);
      if (lookahead == 'd') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(333);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(393);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(305);
      if (lookahead == 'd') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(337);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(305);
      if (lookahead == 'd') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(337);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'd') ADVANCE(345);
      if (lookahead == 'h' ||
          lookahead == 'x') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(473);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'd') ADVANCE(346);
      if (lookahead == 'h') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(473);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'd') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(473);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'd') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(342);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'd') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(342);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'h') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(63);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'h') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(63);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'h') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(345);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(473);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'h') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(473);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'h') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(347);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(393);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'h') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(393);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(349);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(350);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(351);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_integer);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(511);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_integer);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead != 0) ADVANCE(358);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '\'') ADVANCE(357);
      if (lookahead != 0) ADVANCE(359);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '"') ADVANCE(358);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(131);
      if (lookahead == '$') ADVANCE(366);
      if (lookahead == '%') ADVANCE(383);
      if (lookahead == '\'') ADVANCE(359);
      if (lookahead == '-') ADVANCE(364);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == '/') ADVANCE(365);
      if (lookahead == '0') ADVANCE(329);
      if (lookahead == '1') ADVANCE(331);
      if (lookahead == '?') ADVANCE(439);
      if (lookahead == 'B') ADVANCE(382);
      if (lookahead == 'D') ADVANCE(380);
      if (lookahead == 'Q') ADVANCE(381);
      if (lookahead == 'W') ADVANCE(373);
      if (lookahead == '[') ADVANCE(163);
      if (lookahead == '\\') ADVANCE(361);
      if (lookahead == '_') ADVANCE(422);
      if (lookahead == 'b') ADVANCE(407);
      if (lookahead == 'd') ADVANCE(395);
      if (lookahead == 'e') ADVANCE(384);
      if (lookahead == 'q') ADVANCE(417);
      if (lookahead == 'r') ADVANCE(367);
      if (lookahead == 's') ADVANCE(394);
      if (lookahead == 'w') ADVANCE(404);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(418);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(335);
      if (lookahead == 'x' ||
          lookahead == 'y') ADVANCE(402);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'f') ADVANCE(432);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(360);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '<' ||
          ('>' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead != 0) ADVANCE(437);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == '\r') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == '+') ADVANCE(430);
      if (lookahead == '-') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(291);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == '+') ADVANCE(431);
      if (lookahead == '-') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(301);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == '.') ADVANCE(427);
      if (lookahead == '0') ADVANCE(336);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(337);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == '/') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == '0') ADVANCE(435);
      if (sym__any_text_character_set_1(lookahead)) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == '1') ADVANCE(423);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(279);
      if (lookahead == 'b') ADVANCE(408);
      if (lookahead == 'd') ADVANCE(396);
      if (lookahead == 'i') ADVANCE(411);
      if (lookahead == 's') ADVANCE(394);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(419);
      if (sym__any_text_character_set_2(lookahead)) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == '1') ADVANCE(424);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(280);
      if (lookahead == 'b') ADVANCE(410);
      if (lookahead == 'd') ADVANCE(399);
      if (lookahead == 'i') ADVANCE(412);
      if (lookahead == 's') ADVANCE(397);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'D') ADVANCE(208);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'D') ADVANCE(200);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'D') ADVANCE(204);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'E') ADVANCE(196);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'O') ADVANCE(376);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'O') ADVANCE(377);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'O') ADVANCE(378);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'R') ADVANCE(369);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'R') ADVANCE(370);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'R') ADVANCE(371);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'T') ADVANCE(372);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'W') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(393);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'W') ADVANCE(375);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'Y') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(393);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'b') ADVANCE(409);
      if (lookahead == 'd') ADVANCE(398);
      if (lookahead == 'e') ADVANCE(385);
      if (lookahead == 'r') ADVANCE(368);
      if (lookahead == 's') ADVANCE(397);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(420);
      if (lookahead == 'x' ||
          lookahead == 'y') ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'b') ADVANCE(391);
      if (lookahead == 'd') ADVANCE(390);
      if (lookahead == 's') ADVANCE(394);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'e' ||
          lookahead == 'f') ADVANCE(393);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'b') ADVANCE(410);
      if (lookahead == 'd') ADVANCE(399);
      if (lookahead == 's') ADVANCE(397);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'd') ADVANCE(220);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'd') ADVANCE(214);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'd') ADVANCE(217);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'e') ADVANCE(211);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'h') ADVANCE(227);
      if (lookahead == 'i') ADVANCE(271);
      if (lookahead == 'x') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(393);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'h') ADVANCE(227);
      if (lookahead == 'p') ADVANCE(275);
      if (lookahead == 'x') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(393);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'h') ADVANCE(227);
      if (lookahead == 'x') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(393);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'h') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(393);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'i') ADVANCE(271);
      if (lookahead == 'p') ADVANCE(275);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'i') ADVANCE(271);
      if (lookahead == 'w') ADVANCE(405);
      if (lookahead == 'x') ADVANCE(267);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(393);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'i') ADVANCE(271);
      if (lookahead == 'x') ADVANCE(267);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'i') ADVANCE(272);
      if (lookahead == 'p') ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'i') ADVANCE(272);
      if (lookahead == 'x') ADVANCE(268);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'i') ADVANCE(272);
      if (lookahead == 'x') ADVANCE(268);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'm') ADVANCE(425);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'm') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'm') ADVANCE(400);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'm') ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'o') ADVANCE(413);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'o') ADVANCE(414);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'o') ADVANCE(415);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'p') ADVANCE(275);
      if (lookahead == 'x') ADVANCE(267);
      if (lookahead == 'y') ADVANCE(416);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(393);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'p') ADVANCE(275);
      if (lookahead == 'x') ADVANCE(267);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'p') ADVANCE(276);
      if (lookahead == 'x') ADVANCE(268);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'p') ADVANCE(276);
      if (lookahead == 'x') ADVANCE(268);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'p') ADVANCE(287);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'p') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'r') ADVANCE(386);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'r') ADVANCE(387);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'r') ADVANCE(388);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 't') ADVANCE(389);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'w') ADVANCE(406);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'x') ADVANCE(267);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(393);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'x') ADVANCE(267);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'x') ADVANCE(268);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'x') ADVANCE(268);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead == 'b' ||
          lookahead == 'y') ADVANCE(245);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(422);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('2' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym__any_text);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(279);
      if (sym__any_text_character_set_3(lookahead)) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym__any_text);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym__any_text);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(283);
      if (sym__identifier_character_set_2(lookahead)) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym__any_text);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym__any_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(294);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym__any_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(291);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym__any_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(301);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym__any_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym__any_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym__any_text);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(393);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym__any_text);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(233);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym__any_text);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(230);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym__any_text);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(434);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym__any_text);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym__any_text);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_placeholder);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_placeholder);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(437);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '+') ADVANCE(99);
      if (lookahead == '-') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '+') ADVANCE(100);
      if (lookahead == '-') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(289);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '.') ADVANCE(504);
      if (lookahead == '0') ADVANCE(327);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(328);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '0') ADVANCE(341);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(342);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '0') ADVANCE(510);
      if (sym__any_text_character_set_1(lookahead)) ADVANCE(511);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '1') ADVANCE(502);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(278);
      if (lookahead == 'b') ADVANCE(487);
      if (lookahead == 'd') ADVANCE(479);
      if (lookahead == 'i') ADVANCE(488);
      if (lookahead == 's') ADVANCE(475);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(500);
      if (sym__any_text_character_set_2(lookahead)) ADVANCE(511);
      END_STATE();
    case 446:
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '=') ADVANCE(160);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(207);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(511);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(199);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(511);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(203);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(511);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(195);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(511);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(455);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(511);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(457);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(511);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(458);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(511);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(448);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(511);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(222);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(511);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(449);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(511);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(450);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(511);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(451);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(511);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(456);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(511);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'W') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(473);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'W') ADVANCE(454);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(511);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'Y') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(473);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b') ADVANCE(471);
      if (lookahead == 'd') ADVANCE(470);
      if (lookahead == 's') ADVANCE(475);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'e' ||
          lookahead == 'f') ADVANCE(473);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b') ADVANCE(471);
      if (lookahead == 'd') ADVANCE(470);
      if (lookahead == 's') ADVANCE(138);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'e' ||
          lookahead == 'f') ADVANCE(473);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(219);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(511);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(213);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(511);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(216);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(511);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(210);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(511);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(226);
      if (lookahead == 'i') ADVANCE(270);
      if (lookahead == 'x') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(473);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(226);
      if (lookahead == 'p') ADVANCE(274);
      if (lookahead == 'x') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(473);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(226);
      if (lookahead == 'x') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(473);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(473);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(270);
      if (lookahead == 'p') ADVANCE(274);
      if (lookahead == 's') ADVANCE(144);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(511);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(270);
      if (lookahead == 'p') ADVANCE(274);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(511);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(270);
      if (lookahead == 's') ADVANCE(136);
      if (lookahead == 'x') ADVANCE(266);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(473);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(270);
      if (lookahead == 'w') ADVANCE(483);
      if (lookahead == 'x') ADVANCE(266);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(473);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(270);
      if (lookahead == 'x') ADVANCE(266);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(473);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(270);
      if (lookahead == 'x') ADVANCE(266);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(511);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(503);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(511);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(480);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(511);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(489);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(511);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(491);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(511);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(492);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(511);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(274);
      if (lookahead == 'x') ADVANCE(266);
      if (lookahead == 'y') ADVANCE(496);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(473);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(274);
      if (lookahead == 'x') ADVANCE(266);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(473);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(274);
      if (lookahead == 'x') ADVANCE(266);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(511);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(286);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(511);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(466);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(511);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(224);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(511);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(467);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(511);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(468);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(511);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(134);
      if (lookahead == 'x') ADVANCE(266);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(473);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(473);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(142);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(511);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(469);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(511);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(490);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(511);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'w') ADVANCE(484);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(511);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x') ADVANCE(266);
      if (lookahead == 'h' ||
          lookahead == 'l') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(473);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x') ADVANCE(266);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(511);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b' ||
          lookahead == 'y') ADVANCE(244);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(501);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('2' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(278);
      if (sym__any_text_character_set_3(lookahead)) ADVANCE(511);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(282);
      if (sym__identifier_character_set_2(lookahead)) ADVANCE(511);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(293);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(289);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(473);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(232);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym__identifier);
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
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(509);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(511);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym__identifier);
      if (sym__identifier_character_set_1(lookahead)) ADVANCE(511);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 126},
  [2] = {.lex_state = 112},
  [3] = {.lex_state = 112},
  [4] = {.lex_state = 112},
  [5] = {.lex_state = 23},
  [6] = {.lex_state = 113},
  [7] = {.lex_state = 118},
  [8] = {.lex_state = 113},
  [9] = {.lex_state = 113},
  [10] = {.lex_state = 113},
  [11] = {.lex_state = 113},
  [12] = {.lex_state = 24},
  [13] = {.lex_state = 24},
  [14] = {.lex_state = 24},
  [15] = {.lex_state = 24},
  [16] = {.lex_state = 113},
  [17] = {.lex_state = 113},
  [18] = {.lex_state = 113},
  [19] = {.lex_state = 113},
  [20] = {.lex_state = 113},
  [21] = {.lex_state = 113},
  [22] = {.lex_state = 113},
  [23] = {.lex_state = 113},
  [24] = {.lex_state = 113},
  [25] = {.lex_state = 113},
  [26] = {.lex_state = 113},
  [27] = {.lex_state = 113},
  [28] = {.lex_state = 113},
  [29] = {.lex_state = 113},
  [30] = {.lex_state = 24},
  [31] = {.lex_state = 24},
  [32] = {.lex_state = 24},
  [33] = {.lex_state = 26},
  [34] = {.lex_state = 24},
  [35] = {.lex_state = 24},
  [36] = {.lex_state = 24},
  [37] = {.lex_state = 24},
  [38] = {.lex_state = 24},
  [39] = {.lex_state = 24},
  [40] = {.lex_state = 24},
  [41] = {.lex_state = 24},
  [42] = {.lex_state = 24},
  [43] = {.lex_state = 26},
  [44] = {.lex_state = 24},
  [45] = {.lex_state = 26},
  [46] = {.lex_state = 91},
  [47] = {.lex_state = 25},
  [48] = {.lex_state = 91},
  [49] = {.lex_state = 91},
  [50] = {.lex_state = 91},
  [51] = {.lex_state = 91},
  [52] = {.lex_state = 91},
  [53] = {.lex_state = 114},
  [54] = {.lex_state = 26},
  [55] = {.lex_state = 114},
  [56] = {.lex_state = 114},
  [57] = {.lex_state = 27},
  [58] = {.lex_state = 92},
  [59] = {.lex_state = 92},
  [60] = {.lex_state = 92},
  [61] = {.lex_state = 92},
  [62] = {.lex_state = 92},
  [63] = {.lex_state = 92},
  [64] = {.lex_state = 92},
  [65] = {.lex_state = 126},
  [66] = {.lex_state = 126},
  [67] = {.lex_state = 126},
  [68] = {.lex_state = 92},
  [69] = {.lex_state = 115},
  [70] = {.lex_state = 125},
  [71] = {.lex_state = 93},
  [72] = {.lex_state = 93},
  [73] = {.lex_state = 93},
  [74] = {.lex_state = 93},
  [75] = {.lex_state = 93},
  [76] = {.lex_state = 125},
  [77] = {.lex_state = 93},
  [78] = {.lex_state = 93},
  [79] = {.lex_state = 93},
  [80] = {.lex_state = 93},
  [81] = {.lex_state = 93},
  [82] = {.lex_state = 125},
  [83] = {.lex_state = 93},
  [84] = {.lex_state = 125},
  [85] = {.lex_state = 93},
  [86] = {.lex_state = 93},
  [87] = {.lex_state = 93},
  [88] = {.lex_state = 93},
  [89] = {.lex_state = 93},
  [90] = {.lex_state = 93},
  [91] = {.lex_state = 125},
  [92] = {.lex_state = 125},
  [93] = {.lex_state = 125},
  [94] = {.lex_state = 93},
  [95] = {.lex_state = 93},
  [96] = {.lex_state = 125},
  [97] = {.lex_state = 125},
  [98] = {.lex_state = 93},
  [99] = {.lex_state = 93},
  [100] = {.lex_state = 125},
  [101] = {.lex_state = 125},
  [102] = {.lex_state = 125},
  [103] = {.lex_state = 93},
  [104] = {.lex_state = 125},
  [105] = {.lex_state = 125},
  [106] = {.lex_state = 125},
  [107] = {.lex_state = 93},
  [108] = {.lex_state = 125},
  [109] = {.lex_state = 125},
  [110] = {.lex_state = 125},
  [111] = {.lex_state = 125},
  [112] = {.lex_state = 125},
  [113] = {.lex_state = 125},
  [114] = {.lex_state = 125},
  [115] = {.lex_state = 112},
  [116] = {.lex_state = 112},
  [117] = {.lex_state = 112},
  [118] = {.lex_state = 112},
  [119] = {.lex_state = 112},
  [120] = {.lex_state = 112},
  [121] = {.lex_state = 112},
  [122] = {.lex_state = 112},
  [123] = {.lex_state = 112},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 93},
  [128] = {.lex_state = 94},
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
    [aux_sym_nasm_preprocess_directive_token1] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
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
    [sym_program] = STATE(126),
    [sym__statement] = STATE(117),
    [sym_call_instruction] = STATE(117),
    [sym_instruction] = STATE(117),
    [sym__normal_instruction] = STATE(123),
    [sym__gcc_pseudo_op] = STATE(123),
    [sym_nasm_preprocess_directive] = STATE(117),
    [sym_nasm_assembler_directive] = STATE(117),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [sym_label] = ACTIONS(9),
    [anon_sym_call] = ACTIONS(11),
    [aux_sym_nasm_preprocess_directive_token1] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [sym_gcc_mnemonic] = ACTIONS(17),
    [sym_mnemonic] = ACTIONS(19),
  },
  [2] = {
    [sym_operator] = STATE(101),
    [sym__operand] = STATE(101),
    [sym_width] = STATE(33),
    [sym_pointer] = STATE(101),
    [sym_hexadecimal] = STATE(101),
    [sym_binary] = STATE(101),
    [sym_octal] = STATE(101),
    [sym_register] = STATE(101),
    [sym__constant] = STATE(101),
    [sym_float] = STATE(101),
    [sym_string] = STATE(101),
    [sym_identifier] = STATE(101),
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_LF] = ACTIONS(21),
    [sym_comment] = ACTIONS(23),
    [anon_sym_BANG_EQ] = ACTIONS(25),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_PLUS] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(25),
    [anon_sym_LT_EQ] = ACTIONS(25),
    [anon_sym_EQ_EQ] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym__nasm_macro] = ACTIONS(29),
    [anon_sym_BYTE] = ACTIONS(31),
    [anon_sym_DWORD] = ACTIONS(31),
    [anon_sym_QWORD] = ACTIONS(31),
    [anon_sym_WORD] = ACTIONS(31),
    [anon_sym_byte] = ACTIONS(31),
    [anon_sym_dword] = ACTIONS(31),
    [anon_sym_qword] = ACTIONS(31),
    [anon_sym_word] = ACTIONS(31),
    [aux_sym_hexadecimal_token1] = ACTIONS(33),
    [aux_sym_hexadecimal_token2] = ACTIONS(33),
    [aux_sym_hexadecimal_token3] = ACTIONS(33),
    [aux_sym_binary_token1] = ACTIONS(35),
    [aux_sym_binary_token2] = ACTIONS(35),
    [aux_sym_octal_token1] = ACTIONS(37),
    [aux_sym_octal_token2] = ACTIONS(37),
    [aux_sym_register_token1] = ACTIONS(39),
    [aux_sym_register_token2] = ACTIONS(39),
    [aux_sym_register_token3] = ACTIONS(39),
    [aux_sym_register_token4] = ACTIONS(39),
    [aux_sym_register_token5] = ACTIONS(39),
    [aux_sym_register_token6] = ACTIONS(39),
    [aux_sym_register_token7] = ACTIONS(39),
    [aux_sym_float_token1] = ACTIONS(41),
    [aux_sym_float_token2] = ACTIONS(41),
    [sym_integer] = ACTIONS(43),
    [aux_sym_string_token1] = ACTIONS(45),
    [aux_sym_string_token2] = ACTIONS(45),
    [sym_placeholder] = ACTIONS(29),
    [sym__identifier] = ACTIONS(47),
  },
  [3] = {
    [sym_operator] = STATE(91),
    [sym__operand] = STATE(91),
    [sym_width] = STATE(33),
    [sym_pointer] = STATE(91),
    [sym_hexadecimal] = STATE(91),
    [sym_binary] = STATE(91),
    [sym_octal] = STATE(91),
    [sym_register] = STATE(91),
    [sym__constant] = STATE(91),
    [sym_float] = STATE(91),
    [sym_string] = STATE(91),
    [sym_identifier] = STATE(91),
    [ts_builtin_sym_end] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(49),
    [sym_comment] = ACTIONS(23),
    [anon_sym_BANG_EQ] = ACTIONS(25),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_PLUS] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(25),
    [anon_sym_LT_EQ] = ACTIONS(25),
    [anon_sym_EQ_EQ] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym__nasm_macro] = ACTIONS(51),
    [anon_sym_BYTE] = ACTIONS(31),
    [anon_sym_DWORD] = ACTIONS(31),
    [anon_sym_QWORD] = ACTIONS(31),
    [anon_sym_WORD] = ACTIONS(31),
    [anon_sym_byte] = ACTIONS(31),
    [anon_sym_dword] = ACTIONS(31),
    [anon_sym_qword] = ACTIONS(31),
    [anon_sym_word] = ACTIONS(31),
    [aux_sym_hexadecimal_token1] = ACTIONS(33),
    [aux_sym_hexadecimal_token2] = ACTIONS(33),
    [aux_sym_hexadecimal_token3] = ACTIONS(33),
    [aux_sym_binary_token1] = ACTIONS(35),
    [aux_sym_binary_token2] = ACTIONS(35),
    [aux_sym_octal_token1] = ACTIONS(37),
    [aux_sym_octal_token2] = ACTIONS(37),
    [aux_sym_register_token1] = ACTIONS(39),
    [aux_sym_register_token2] = ACTIONS(39),
    [aux_sym_register_token3] = ACTIONS(39),
    [aux_sym_register_token4] = ACTIONS(39),
    [aux_sym_register_token5] = ACTIONS(39),
    [aux_sym_register_token6] = ACTIONS(39),
    [aux_sym_register_token7] = ACTIONS(39),
    [aux_sym_float_token1] = ACTIONS(41),
    [aux_sym_float_token2] = ACTIONS(41),
    [sym_integer] = ACTIONS(43),
    [aux_sym_string_token1] = ACTIONS(45),
    [aux_sym_string_token2] = ACTIONS(45),
    [sym_placeholder] = ACTIONS(51),
    [sym__identifier] = ACTIONS(47),
  },
  [4] = {
    [sym_operator] = STATE(101),
    [sym__operand] = STATE(101),
    [sym_width] = STATE(33),
    [sym_pointer] = STATE(101),
    [sym_hexadecimal] = STATE(101),
    [sym_binary] = STATE(101),
    [sym_octal] = STATE(101),
    [sym_register] = STATE(101),
    [sym__constant] = STATE(101),
    [sym_float] = STATE(101),
    [sym_string] = STATE(101),
    [sym_identifier] = STATE(101),
    [ts_builtin_sym_end] = ACTIONS(53),
    [anon_sym_LF] = ACTIONS(53),
    [sym_comment] = ACTIONS(23),
    [anon_sym_BANG_EQ] = ACTIONS(25),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_PLUS] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(25),
    [anon_sym_LT_EQ] = ACTIONS(25),
    [anon_sym_EQ_EQ] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym__nasm_macro] = ACTIONS(29),
    [anon_sym_BYTE] = ACTIONS(31),
    [anon_sym_DWORD] = ACTIONS(31),
    [anon_sym_QWORD] = ACTIONS(31),
    [anon_sym_WORD] = ACTIONS(31),
    [anon_sym_byte] = ACTIONS(31),
    [anon_sym_dword] = ACTIONS(31),
    [anon_sym_qword] = ACTIONS(31),
    [anon_sym_word] = ACTIONS(31),
    [aux_sym_hexadecimal_token1] = ACTIONS(33),
    [aux_sym_hexadecimal_token2] = ACTIONS(33),
    [aux_sym_hexadecimal_token3] = ACTIONS(33),
    [aux_sym_binary_token1] = ACTIONS(35),
    [aux_sym_binary_token2] = ACTIONS(35),
    [aux_sym_octal_token1] = ACTIONS(37),
    [aux_sym_octal_token2] = ACTIONS(37),
    [aux_sym_register_token1] = ACTIONS(39),
    [aux_sym_register_token2] = ACTIONS(39),
    [aux_sym_register_token3] = ACTIONS(39),
    [aux_sym_register_token4] = ACTIONS(39),
    [aux_sym_register_token5] = ACTIONS(39),
    [aux_sym_register_token6] = ACTIONS(39),
    [aux_sym_register_token7] = ACTIONS(39),
    [aux_sym_float_token1] = ACTIONS(41),
    [aux_sym_float_token2] = ACTIONS(41),
    [sym_integer] = ACTIONS(43),
    [aux_sym_string_token1] = ACTIONS(45),
    [aux_sym_string_token2] = ACTIONS(45),
    [sym_placeholder] = ACTIONS(29),
    [sym__identifier] = ACTIONS(47),
  },
  [5] = {
    [sym_operator] = STATE(101),
    [sym__operand] = STATE(101),
    [sym_width] = STATE(33),
    [sym_pointer] = STATE(101),
    [sym_hexadecimal] = STATE(101),
    [sym_binary] = STATE(101),
    [sym_octal] = STATE(101),
    [sym_register] = STATE(101),
    [sym__constant] = STATE(101),
    [sym_float] = STATE(101),
    [sym_string] = STATE(101),
    [sym_identifier] = STATE(101),
    [sym_comment] = ACTIONS(3),
    [anon_sym_BANG_EQ] = ACTIONS(55),
    [anon_sym_STAR] = ACTIONS(55),
    [anon_sym_PLUS] = ACTIONS(55),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(25),
    [anon_sym_LT_EQ] = ACTIONS(55),
    [anon_sym_EQ_EQ] = ACTIONS(55),
    [anon_sym_GT_EQ] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [sym__nasm_macro] = ACTIONS(29),
    [anon_sym_BYTE] = ACTIONS(31),
    [anon_sym_DWORD] = ACTIONS(31),
    [anon_sym_QWORD] = ACTIONS(31),
    [anon_sym_WORD] = ACTIONS(31),
    [anon_sym_byte] = ACTIONS(31),
    [anon_sym_dword] = ACTIONS(31),
    [anon_sym_qword] = ACTIONS(31),
    [anon_sym_word] = ACTIONS(31),
    [aux_sym_hexadecimal_token1] = ACTIONS(33),
    [aux_sym_hexadecimal_token2] = ACTIONS(33),
    [aux_sym_hexadecimal_token3] = ACTIONS(33),
    [aux_sym_binary_token1] = ACTIONS(35),
    [aux_sym_binary_token2] = ACTIONS(35),
    [aux_sym_octal_token1] = ACTIONS(37),
    [aux_sym_octal_token2] = ACTIONS(37),
    [aux_sym_register_token1] = ACTIONS(39),
    [aux_sym_register_token2] = ACTIONS(39),
    [aux_sym_register_token3] = ACTIONS(39),
    [aux_sym_register_token4] = ACTIONS(39),
    [aux_sym_register_token5] = ACTIONS(39),
    [aux_sym_register_token6] = ACTIONS(39),
    [aux_sym_register_token7] = ACTIONS(39),
    [aux_sym_float_token1] = ACTIONS(41),
    [aux_sym_float_token2] = ACTIONS(41),
    [sym_integer] = ACTIONS(43),
    [aux_sym_string_token1] = ACTIONS(59),
    [aux_sym_string_token2] = ACTIONS(59),
    [sym_placeholder] = ACTIONS(61),
    [sym__identifier] = ACTIONS(47),
  },
  [6] = {
    [sym__operand] = STATE(6),
    [sym_width] = STATE(43),
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
    [ts_builtin_sym_end] = ACTIONS(63),
    [anon_sym_LF] = ACTIONS(63),
    [sym_comment] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(65),
    [anon_sym_LBRACK] = ACTIONS(68),
    [anon_sym_BYTE] = ACTIONS(71),
    [anon_sym_DWORD] = ACTIONS(71),
    [anon_sym_QWORD] = ACTIONS(71),
    [anon_sym_WORD] = ACTIONS(71),
    [anon_sym_byte] = ACTIONS(71),
    [anon_sym_dword] = ACTIONS(71),
    [anon_sym_qword] = ACTIONS(71),
    [anon_sym_word] = ACTIONS(71),
    [aux_sym_hexadecimal_token1] = ACTIONS(74),
    [aux_sym_hexadecimal_token2] = ACTIONS(74),
    [aux_sym_hexadecimal_token3] = ACTIONS(74),
    [aux_sym_binary_token1] = ACTIONS(77),
    [aux_sym_binary_token2] = ACTIONS(77),
    [aux_sym_octal_token1] = ACTIONS(80),
    [aux_sym_octal_token2] = ACTIONS(80),
    [aux_sym_register_token1] = ACTIONS(83),
    [aux_sym_register_token2] = ACTIONS(83),
    [aux_sym_register_token3] = ACTIONS(83),
    [aux_sym_register_token4] = ACTIONS(83),
    [aux_sym_register_token5] = ACTIONS(83),
    [aux_sym_register_token6] = ACTIONS(83),
    [aux_sym_register_token7] = ACTIONS(83),
    [aux_sym_float_token1] = ACTIONS(86),
    [aux_sym_float_token2] = ACTIONS(86),
    [sym_integer] = ACTIONS(89),
    [aux_sym_string_token1] = ACTIONS(92),
    [aux_sym_string_token2] = ACTIONS(92),
    [sym_placeholder] = ACTIONS(95),
    [sym__identifier] = ACTIONS(98),
  },
  [7] = {
    [sym__operand] = STATE(10),
    [sym_width] = STATE(43),
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
    [ts_builtin_sym_end] = ACTIONS(101),
    [anon_sym_LF] = ACTIONS(103),
    [sym_comment] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(105),
    [anon_sym_BYTE] = ACTIONS(31),
    [anon_sym_DWORD] = ACTIONS(31),
    [anon_sym_QWORD] = ACTIONS(31),
    [anon_sym_WORD] = ACTIONS(31),
    [anon_sym_byte] = ACTIONS(31),
    [anon_sym_dword] = ACTIONS(31),
    [anon_sym_qword] = ACTIONS(31),
    [anon_sym_word] = ACTIONS(31),
    [aux_sym_hexadecimal_token1] = ACTIONS(107),
    [aux_sym_hexadecimal_token2] = ACTIONS(107),
    [aux_sym_hexadecimal_token3] = ACTIONS(107),
    [aux_sym_binary_token1] = ACTIONS(109),
    [aux_sym_binary_token2] = ACTIONS(109),
    [aux_sym_octal_token1] = ACTIONS(111),
    [aux_sym_octal_token2] = ACTIONS(111),
    [aux_sym_register_token1] = ACTIONS(113),
    [aux_sym_register_token2] = ACTIONS(113),
    [aux_sym_register_token3] = ACTIONS(113),
    [aux_sym_register_token4] = ACTIONS(113),
    [aux_sym_register_token5] = ACTIONS(113),
    [aux_sym_register_token6] = ACTIONS(113),
    [aux_sym_register_token7] = ACTIONS(113),
    [aux_sym_float_token1] = ACTIONS(115),
    [aux_sym_float_token2] = ACTIONS(115),
    [sym_integer] = ACTIONS(117),
    [aux_sym_string_token1] = ACTIONS(119),
    [aux_sym_string_token2] = ACTIONS(119),
    [sym__any_text] = ACTIONS(121),
    [sym_placeholder] = ACTIONS(123),
    [sym__identifier] = ACTIONS(125),
  },
  [8] = {
    [sym__operand] = STATE(6),
    [sym_width] = STATE(43),
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
    [ts_builtin_sym_end] = ACTIONS(127),
    [anon_sym_LF] = ACTIONS(127),
    [sym_comment] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(129),
    [anon_sym_LBRACK] = ACTIONS(105),
    [anon_sym_BYTE] = ACTIONS(31),
    [anon_sym_DWORD] = ACTIONS(31),
    [anon_sym_QWORD] = ACTIONS(31),
    [anon_sym_WORD] = ACTIONS(31),
    [anon_sym_byte] = ACTIONS(31),
    [anon_sym_dword] = ACTIONS(31),
    [anon_sym_qword] = ACTIONS(31),
    [anon_sym_word] = ACTIONS(31),
    [aux_sym_hexadecimal_token1] = ACTIONS(107),
    [aux_sym_hexadecimal_token2] = ACTIONS(107),
    [aux_sym_hexadecimal_token3] = ACTIONS(107),
    [aux_sym_binary_token1] = ACTIONS(109),
    [aux_sym_binary_token2] = ACTIONS(109),
    [aux_sym_octal_token1] = ACTIONS(111),
    [aux_sym_octal_token2] = ACTIONS(111),
    [aux_sym_register_token1] = ACTIONS(113),
    [aux_sym_register_token2] = ACTIONS(113),
    [aux_sym_register_token3] = ACTIONS(113),
    [aux_sym_register_token4] = ACTIONS(113),
    [aux_sym_register_token5] = ACTIONS(113),
    [aux_sym_register_token6] = ACTIONS(113),
    [aux_sym_register_token7] = ACTIONS(113),
    [aux_sym_float_token1] = ACTIONS(115),
    [aux_sym_float_token2] = ACTIONS(115),
    [sym_integer] = ACTIONS(117),
    [aux_sym_string_token1] = ACTIONS(119),
    [aux_sym_string_token2] = ACTIONS(119),
    [sym_placeholder] = ACTIONS(131),
    [sym__identifier] = ACTIONS(125),
  },
  [9] = {
    [sym__operand] = STATE(8),
    [sym_width] = STATE(43),
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
    [ts_builtin_sym_end] = ACTIONS(133),
    [anon_sym_LF] = ACTIONS(133),
    [sym_comment] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(129),
    [anon_sym_LBRACK] = ACTIONS(105),
    [anon_sym_BYTE] = ACTIONS(31),
    [anon_sym_DWORD] = ACTIONS(31),
    [anon_sym_QWORD] = ACTIONS(31),
    [anon_sym_WORD] = ACTIONS(31),
    [anon_sym_byte] = ACTIONS(31),
    [anon_sym_dword] = ACTIONS(31),
    [anon_sym_qword] = ACTIONS(31),
    [anon_sym_word] = ACTIONS(31),
    [aux_sym_hexadecimal_token1] = ACTIONS(107),
    [aux_sym_hexadecimal_token2] = ACTIONS(107),
    [aux_sym_hexadecimal_token3] = ACTIONS(107),
    [aux_sym_binary_token1] = ACTIONS(109),
    [aux_sym_binary_token2] = ACTIONS(109),
    [aux_sym_octal_token1] = ACTIONS(111),
    [aux_sym_octal_token2] = ACTIONS(111),
    [aux_sym_register_token1] = ACTIONS(113),
    [aux_sym_register_token2] = ACTIONS(113),
    [aux_sym_register_token3] = ACTIONS(113),
    [aux_sym_register_token4] = ACTIONS(113),
    [aux_sym_register_token5] = ACTIONS(113),
    [aux_sym_register_token6] = ACTIONS(113),
    [aux_sym_register_token7] = ACTIONS(113),
    [aux_sym_float_token1] = ACTIONS(115),
    [aux_sym_float_token2] = ACTIONS(115),
    [sym_integer] = ACTIONS(117),
    [aux_sym_string_token1] = ACTIONS(119),
    [aux_sym_string_token2] = ACTIONS(119),
    [sym_placeholder] = ACTIONS(135),
    [sym__identifier] = ACTIONS(125),
  },
  [10] = {
    [sym__operand] = STATE(11),
    [sym_width] = STATE(43),
    [sym_pointer] = STATE(11),
    [sym_hexadecimal] = STATE(11),
    [sym_binary] = STATE(11),
    [sym_octal] = STATE(11),
    [sym_register] = STATE(11),
    [sym__constant] = STATE(11),
    [sym_float] = STATE(11),
    [sym_string] = STATE(11),
    [sym_identifier] = STATE(11),
    [aux_sym_call_instruction_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(137),
    [anon_sym_LF] = ACTIONS(137),
    [sym_comment] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(105),
    [anon_sym_BYTE] = ACTIONS(31),
    [anon_sym_DWORD] = ACTIONS(31),
    [anon_sym_QWORD] = ACTIONS(31),
    [anon_sym_WORD] = ACTIONS(31),
    [anon_sym_byte] = ACTIONS(31),
    [anon_sym_dword] = ACTIONS(31),
    [anon_sym_qword] = ACTIONS(31),
    [anon_sym_word] = ACTIONS(31),
    [aux_sym_hexadecimal_token1] = ACTIONS(107),
    [aux_sym_hexadecimal_token2] = ACTIONS(107),
    [aux_sym_hexadecimal_token3] = ACTIONS(107),
    [aux_sym_binary_token1] = ACTIONS(109),
    [aux_sym_binary_token2] = ACTIONS(109),
    [aux_sym_octal_token1] = ACTIONS(111),
    [aux_sym_octal_token2] = ACTIONS(111),
    [aux_sym_register_token1] = ACTIONS(113),
    [aux_sym_register_token2] = ACTIONS(113),
    [aux_sym_register_token3] = ACTIONS(113),
    [aux_sym_register_token4] = ACTIONS(113),
    [aux_sym_register_token5] = ACTIONS(113),
    [aux_sym_register_token6] = ACTIONS(113),
    [aux_sym_register_token7] = ACTIONS(113),
    [aux_sym_float_token1] = ACTIONS(115),
    [aux_sym_float_token2] = ACTIONS(115),
    [sym_integer] = ACTIONS(117),
    [aux_sym_string_token1] = ACTIONS(119),
    [aux_sym_string_token2] = ACTIONS(119),
    [sym_placeholder] = ACTIONS(139),
    [sym__identifier] = ACTIONS(125),
  },
  [11] = {
    [sym__operand] = STATE(11),
    [sym_width] = STATE(43),
    [sym_pointer] = STATE(11),
    [sym_hexadecimal] = STATE(11),
    [sym_binary] = STATE(11),
    [sym_octal] = STATE(11),
    [sym_register] = STATE(11),
    [sym__constant] = STATE(11),
    [sym_float] = STATE(11),
    [sym_string] = STATE(11),
    [sym_identifier] = STATE(11),
    [aux_sym_call_instruction_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(141),
    [anon_sym_LF] = ACTIONS(141),
    [sym_comment] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(143),
    [anon_sym_BYTE] = ACTIONS(146),
    [anon_sym_DWORD] = ACTIONS(146),
    [anon_sym_QWORD] = ACTIONS(146),
    [anon_sym_WORD] = ACTIONS(146),
    [anon_sym_byte] = ACTIONS(146),
    [anon_sym_dword] = ACTIONS(146),
    [anon_sym_qword] = ACTIONS(146),
    [anon_sym_word] = ACTIONS(146),
    [aux_sym_hexadecimal_token1] = ACTIONS(149),
    [aux_sym_hexadecimal_token2] = ACTIONS(149),
    [aux_sym_hexadecimal_token3] = ACTIONS(149),
    [aux_sym_binary_token1] = ACTIONS(152),
    [aux_sym_binary_token2] = ACTIONS(152),
    [aux_sym_octal_token1] = ACTIONS(155),
    [aux_sym_octal_token2] = ACTIONS(155),
    [aux_sym_register_token1] = ACTIONS(158),
    [aux_sym_register_token2] = ACTIONS(158),
    [aux_sym_register_token3] = ACTIONS(158),
    [aux_sym_register_token4] = ACTIONS(158),
    [aux_sym_register_token5] = ACTIONS(158),
    [aux_sym_register_token6] = ACTIONS(158),
    [aux_sym_register_token7] = ACTIONS(158),
    [aux_sym_float_token1] = ACTIONS(161),
    [aux_sym_float_token2] = ACTIONS(161),
    [sym_integer] = ACTIONS(164),
    [aux_sym_string_token1] = ACTIONS(167),
    [aux_sym_string_token2] = ACTIONS(167),
    [sym_placeholder] = ACTIONS(170),
    [sym__identifier] = ACTIONS(173),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_LBRACK,
    ACTIONS(178), 1,
      anon_sym_RBRACK,
    ACTIONS(190), 1,
      sym_integer,
    ACTIONS(194), 1,
      sym_placeholder,
    ACTIONS(196), 1,
      sym__identifier,
    STATE(45), 1,
      sym_width,
    ACTIONS(182), 2,
      aux_sym_binary_token1,
      aux_sym_binary_token2,
    ACTIONS(184), 2,
      aux_sym_octal_token1,
      aux_sym_octal_token2,
    ACTIONS(188), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(192), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(180), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    ACTIONS(186), 7,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      aux_sym_register_token7,
    ACTIONS(31), 8,
      anon_sym_BYTE,
      anon_sym_DWORD,
      anon_sym_QWORD,
      anon_sym_WORD,
      anon_sym_byte,
      anon_sym_dword,
      anon_sym_qword,
      anon_sym_word,
    STATE(13), 11,
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
      aux_sym_call_instruction_repeat1,
  [75] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      anon_sym_RBRACK,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(216), 1,
      sym_integer,
    ACTIONS(222), 1,
      sym_placeholder,
    ACTIONS(225), 1,
      sym__identifier,
    STATE(45), 1,
      sym_width,
    ACTIONS(204), 2,
      aux_sym_binary_token1,
      aux_sym_binary_token2,
    ACTIONS(207), 2,
      aux_sym_octal_token1,
      aux_sym_octal_token2,
    ACTIONS(213), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(219), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(201), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    ACTIONS(210), 7,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      aux_sym_register_token7,
    ACTIONS(146), 8,
      anon_sym_BYTE,
      anon_sym_DWORD,
      anon_sym_QWORD,
      anon_sym_WORD,
      anon_sym_byte,
      anon_sym_dword,
      anon_sym_qword,
      anon_sym_word,
    STATE(13), 11,
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
      aux_sym_call_instruction_repeat1,
  [150] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_LBRACK,
    ACTIONS(190), 1,
      sym_integer,
    ACTIONS(196), 1,
      sym__identifier,
    ACTIONS(228), 1,
      anon_sym_RBRACK,
    ACTIONS(230), 1,
      sym_placeholder,
    STATE(45), 1,
      sym_width,
    ACTIONS(182), 2,
      aux_sym_binary_token1,
      aux_sym_binary_token2,
    ACTIONS(184), 2,
      aux_sym_octal_token1,
      aux_sym_octal_token2,
    ACTIONS(188), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(192), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(180), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    ACTIONS(186), 7,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      aux_sym_register_token7,
    ACTIONS(31), 8,
      anon_sym_BYTE,
      anon_sym_DWORD,
      anon_sym_QWORD,
      anon_sym_WORD,
      anon_sym_byte,
      anon_sym_dword,
      anon_sym_qword,
      anon_sym_word,
    STATE(12), 11,
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
      aux_sym_call_instruction_repeat1,
  [225] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      sym_integer,
    ACTIONS(125), 1,
      sym__identifier,
    ACTIONS(232), 1,
      anon_sym_LBRACK,
    ACTIONS(236), 1,
      sym_placeholder,
    STATE(43), 1,
      sym_width,
    ACTIONS(109), 2,
      aux_sym_binary_token1,
      aux_sym_binary_token2,
    ACTIONS(111), 2,
      aux_sym_octal_token1,
      aux_sym_octal_token2,
    ACTIONS(115), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(234), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(107), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    ACTIONS(113), 7,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      aux_sym_register_token7,
    ACTIONS(31), 8,
      anon_sym_BYTE,
      anon_sym_DWORD,
      anon_sym_QWORD,
      anon_sym_WORD,
      anon_sym_byte,
      anon_sym_dword,
      anon_sym_qword,
      anon_sym_word,
    STATE(16), 10,
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
  [296] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(63), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(238), 31,
      anon_sym_COMMA,
      anon_sym_LBRACK,
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
  [337] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(240), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(242), 31,
      anon_sym_COMMA,
      anon_sym_LBRACK,
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
  [378] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(244), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(246), 31,
      anon_sym_COMMA,
      anon_sym_LBRACK,
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
  [419] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(248), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(250), 31,
      anon_sym_COMMA,
      anon_sym_LBRACK,
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
  [460] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(252), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(254), 31,
      anon_sym_COMMA,
      anon_sym_LBRACK,
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
  [501] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(256), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(258), 31,
      anon_sym_COMMA,
      anon_sym_LBRACK,
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
  [542] = 4,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_LBRACK,
    ACTIONS(260), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(262), 30,
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
  [585] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(266), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(268), 31,
      anon_sym_COMMA,
      anon_sym_LBRACK,
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
  [626] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(270), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(272), 31,
      anon_sym_COMMA,
      anon_sym_LBRACK,
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
  [667] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(274), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(276), 31,
      anon_sym_COMMA,
      anon_sym_LBRACK,
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
  [708] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(278), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(280), 31,
      anon_sym_COMMA,
      anon_sym_LBRACK,
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
  [749] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(282), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(284), 31,
      anon_sym_COMMA,
      anon_sym_LBRACK,
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
  [790] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(286), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(288), 31,
      anon_sym_COMMA,
      anon_sym_LBRACK,
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
  [831] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(290), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(292), 31,
      anon_sym_COMMA,
      anon_sym_LBRACK,
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
  [872] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 5,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_string_token1,
      aux_sym_string_token2,
      sym_placeholder,
    ACTIONS(242), 26,
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
      sym__identifier,
  [911] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 5,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_string_token1,
      aux_sym_string_token2,
      sym_placeholder,
    ACTIONS(268), 26,
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
      sym__identifier,
  [950] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 5,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_string_token1,
      aux_sym_string_token2,
      sym_placeholder,
    ACTIONS(254), 26,
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
      sym__identifier,
  [989] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      sym_integer,
    ACTIONS(47), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(294), 1,
      sym_placeholder,
    ACTIONS(35), 2,
      aux_sym_binary_token1,
      aux_sym_binary_token2,
    ACTIONS(37), 2,
      aux_sym_octal_token1,
      aux_sym_octal_token2,
    ACTIONS(41), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(59), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(33), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    ACTIONS(39), 7,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      aux_sym_register_token7,
    STATE(97), 9,
      sym_pointer,
      sym_hexadecimal,
      sym_binary,
      sym_octal,
      sym_register,
      sym__constant,
      sym_float,
      sym_string,
      sym_identifier,
  [1046] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 5,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_string_token1,
      aux_sym_string_token2,
      sym_placeholder,
    ACTIONS(292), 26,
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
      sym__identifier,
  [1085] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 5,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_string_token1,
      aux_sym_string_token2,
      sym_placeholder,
    ACTIONS(272), 26,
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
      sym__identifier,
  [1124] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 5,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_string_token1,
      aux_sym_string_token2,
      sym_placeholder,
    ACTIONS(246), 26,
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
      sym__identifier,
  [1163] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 5,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_string_token1,
      aux_sym_string_token2,
      sym_placeholder,
    ACTIONS(250), 26,
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
      sym__identifier,
  [1202] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 5,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_string_token1,
      aux_sym_string_token2,
      sym_placeholder,
    ACTIONS(258), 26,
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
      sym__identifier,
  [1241] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 5,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_string_token1,
      aux_sym_string_token2,
      sym_placeholder,
    ACTIONS(276), 26,
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
      sym__identifier,
  [1280] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 5,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_string_token1,
      aux_sym_string_token2,
      sym_placeholder,
    ACTIONS(280), 26,
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
      sym__identifier,
  [1319] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 5,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_string_token1,
      aux_sym_string_token2,
      sym_placeholder,
    ACTIONS(284), 26,
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
      sym__identifier,
  [1358] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 5,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_string_token1,
      aux_sym_string_token2,
      sym_placeholder,
    ACTIONS(288), 26,
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
      sym__identifier,
  [1397] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      sym_integer,
    ACTIONS(125), 1,
      sym__identifier,
    ACTIONS(232), 1,
      anon_sym_LBRACK,
    ACTIONS(296), 1,
      sym_placeholder,
    ACTIONS(109), 2,
      aux_sym_binary_token1,
      aux_sym_binary_token2,
    ACTIONS(111), 2,
      aux_sym_octal_token1,
      aux_sym_octal_token2,
    ACTIONS(115), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(234), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(107), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    ACTIONS(113), 7,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      aux_sym_register_token7,
    STATE(28), 9,
      sym_pointer,
      sym_hexadecimal,
      sym_binary,
      sym_octal,
      sym_register,
      sym__constant,
      sym_float,
      sym_string,
      sym_identifier,
  [1454] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_LBRACK,
    ACTIONS(260), 4,
      anon_sym_RBRACK,
      aux_sym_string_token1,
      aux_sym_string_token2,
      sym_placeholder,
    ACTIONS(262), 26,
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
      sym__identifier,
  [1495] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_LBRACK,
    ACTIONS(190), 1,
      sym_integer,
    ACTIONS(196), 1,
      sym__identifier,
    ACTIONS(300), 1,
      sym_placeholder,
    ACTIONS(182), 2,
      aux_sym_binary_token1,
      aux_sym_binary_token2,
    ACTIONS(184), 2,
      aux_sym_octal_token1,
      aux_sym_octal_token2,
    ACTIONS(188), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(192), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(180), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    ACTIONS(186), 7,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      aux_sym_register_token7,
    STATE(42), 9,
      sym_pointer,
      sym_hexadecimal,
      sym_binary,
      sym_octal,
      sym_register,
      sym__constant,
      sym_float,
      sym_string,
      sym_identifier,
  [1552] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      sym_integer,
    ACTIONS(310), 1,
      sym__identifier,
    STATE(63), 1,
      sym_segment_prefix,
    STATE(125), 1,
      sym_segment,
    ACTIONS(304), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    STATE(88), 4,
      sym__micro_op_operand,
      sym_hexadecimal,
      sym_register,
      sym_identifier,
    ACTIONS(302), 6,
      anon_sym_cs,
      anon_sym_ds,
      anon_sym_es,
      anon_sym_fs,
      anon_sym_gs,
      anon_sym_ss,
    ACTIONS(306), 7,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      aux_sym_register_token7,
  [1596] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 2,
      anon_sym_PTR,
      anon_sym_ptr,
    ACTIONS(312), 4,
      anon_sym_LBRACK,
      aux_sym_string_token1,
      aux_sym_string_token2,
      sym_placeholder,
    ACTIONS(316), 18,
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
  [1630] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      sym__identifier,
    ACTIONS(318), 1,
      sym_integer,
    STATE(62), 1,
      sym_segment_prefix,
    STATE(125), 1,
      sym_segment,
    ACTIONS(304), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    STATE(89), 4,
      sym__micro_op_operand,
      sym_hexadecimal,
      sym_register,
      sym_identifier,
    ACTIONS(302), 6,
      anon_sym_cs,
      anon_sym_ds,
      anon_sym_es,
      anon_sym_fs,
      anon_sym_gs,
      anon_sym_ss,
    ACTIONS(306), 7,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      aux_sym_register_token7,
  [1674] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      sym__identifier,
    ACTIONS(320), 1,
      sym_integer,
    STATE(58), 1,
      sym_segment_prefix,
    STATE(125), 1,
      sym_segment,
    ACTIONS(304), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    STATE(90), 4,
      sym__micro_op_operand,
      sym_hexadecimal,
      sym_register,
      sym_identifier,
    ACTIONS(302), 6,
      anon_sym_cs,
      anon_sym_ds,
      anon_sym_es,
      anon_sym_fs,
      anon_sym_gs,
      anon_sym_ss,
    ACTIONS(306), 7,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      aux_sym_register_token7,
  [1718] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      sym__identifier,
    ACTIONS(322), 1,
      sym_integer,
    STATE(61), 1,
      sym_segment_prefix,
    STATE(125), 1,
      sym_segment,
    ACTIONS(304), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    STATE(72), 4,
      sym__micro_op_operand,
      sym_hexadecimal,
      sym_register,
      sym_identifier,
    ACTIONS(302), 6,
      anon_sym_cs,
      anon_sym_ds,
      anon_sym_es,
      anon_sym_fs,
      anon_sym_gs,
      anon_sym_ss,
    ACTIONS(306), 7,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      aux_sym_register_token7,
  [1762] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      sym__identifier,
    ACTIONS(324), 1,
      sym_integer,
    STATE(64), 1,
      sym_segment_prefix,
    STATE(125), 1,
      sym_segment,
    ACTIONS(304), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    STATE(81), 4,
      sym__micro_op_operand,
      sym_hexadecimal,
      sym_register,
      sym_identifier,
    ACTIONS(302), 6,
      anon_sym_cs,
      anon_sym_ds,
      anon_sym_es,
      anon_sym_fs,
      anon_sym_gs,
      anon_sym_ss,
    ACTIONS(306), 7,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      aux_sym_register_token7,
  [1806] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      sym__identifier,
    ACTIONS(326), 1,
      sym_integer,
    STATE(59), 1,
      sym_segment_prefix,
    STATE(125), 1,
      sym_segment,
    ACTIONS(304), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    STATE(80), 4,
      sym__micro_op_operand,
      sym_hexadecimal,
      sym_register,
      sym_identifier,
    ACTIONS(302), 6,
      anon_sym_cs,
      anon_sym_ds,
      anon_sym_es,
      anon_sym_fs,
      anon_sym_gs,
      anon_sym_ss,
    ACTIONS(306), 7,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      aux_sym_register_token7,
  [1850] = 10,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(47), 1,
      sym__identifier,
    ACTIONS(330), 1,
      sym_integer,
    ACTIONS(35), 2,
      aux_sym_binary_token1,
      aux_sym_binary_token2,
    ACTIONS(37), 2,
      aux_sym_octal_token1,
      aux_sym_octal_token2,
    ACTIONS(41), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(45), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(328), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(33), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    STATE(114), 7,
      sym_hexadecimal,
      sym_binary,
      sym_octal,
      sym__constant,
      sym_float,
      sym_string,
      sym_identifier,
  [1894] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 4,
      anon_sym_LBRACK,
      aux_sym_string_token1,
      aux_sym_string_token2,
      sym_placeholder,
    ACTIONS(334), 18,
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
  [1924] = 10,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(47), 1,
      sym__identifier,
    ACTIONS(330), 1,
      sym_integer,
    ACTIONS(35), 2,
      aux_sym_binary_token1,
      aux_sym_binary_token2,
    ACTIONS(37), 2,
      aux_sym_octal_token1,
      aux_sym_octal_token2,
    ACTIONS(41), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(45), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(336), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(33), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    STATE(114), 7,
      sym_hexadecimal,
      sym_binary,
      sym_octal,
      sym__constant,
      sym_float,
      sym_string,
      sym_identifier,
  [1968] = 10,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(47), 1,
      sym__identifier,
    ACTIONS(340), 1,
      sym_integer,
    ACTIONS(35), 2,
      aux_sym_binary_token1,
      aux_sym_binary_token2,
    ACTIONS(37), 2,
      aux_sym_octal_token1,
      aux_sym_octal_token2,
    ACTIONS(41), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(45), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(338), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(33), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    STATE(84), 7,
      sym_hexadecimal,
      sym_binary,
      sym_octal,
      sym__constant,
      sym_float,
      sym_string,
      sym_identifier,
  [2012] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      sym__identifier,
    ACTIONS(330), 1,
      sym_integer,
    ACTIONS(35), 2,
      aux_sym_binary_token1,
      aux_sym_binary_token2,
    ACTIONS(37), 2,
      aux_sym_octal_token1,
      aux_sym_octal_token2,
    ACTIONS(41), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(59), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(33), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    STATE(114), 7,
      sym_hexadecimal,
      sym_binary,
      sym_octal,
      sym__constant,
      sym_float,
      sym_string,
      sym_identifier,
  [2052] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      sym__identifier,
    ACTIONS(322), 1,
      sym_integer,
    ACTIONS(304), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    STATE(72), 4,
      sym__micro_op_operand,
      sym_hexadecimal,
      sym_register,
      sym_identifier,
    ACTIONS(306), 7,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      aux_sym_register_token7,
  [2082] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      sym__identifier,
    ACTIONS(342), 1,
      sym_integer,
    ACTIONS(304), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    STATE(77), 4,
      sym__micro_op_operand,
      sym_hexadecimal,
      sym_register,
      sym_identifier,
    ACTIONS(306), 7,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      aux_sym_register_token7,
  [2112] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      sym__identifier,
    ACTIONS(344), 1,
      sym_integer,
    ACTIONS(304), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    STATE(98), 4,
      sym__micro_op_operand,
      sym_hexadecimal,
      sym_register,
      sym_identifier,
    ACTIONS(306), 7,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      aux_sym_register_token7,
  [2142] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      sym__identifier,
    ACTIONS(346), 1,
      sym_integer,
    ACTIONS(304), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    STATE(86), 4,
      sym__micro_op_operand,
      sym_hexadecimal,
      sym_register,
      sym_identifier,
    ACTIONS(306), 7,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      aux_sym_register_token7,
  [2172] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      sym_integer,
    ACTIONS(310), 1,
      sym__identifier,
    ACTIONS(304), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    STATE(88), 4,
      sym__micro_op_operand,
      sym_hexadecimal,
      sym_register,
      sym_identifier,
    ACTIONS(306), 7,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      aux_sym_register_token7,
  [2202] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      sym__identifier,
    ACTIONS(348), 1,
      sym_integer,
    ACTIONS(304), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    STATE(85), 4,
      sym__micro_op_operand,
      sym_hexadecimal,
      sym_register,
      sym_identifier,
    ACTIONS(306), 7,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      aux_sym_register_token7,
  [2232] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      sym__identifier,
    ACTIONS(326), 1,
      sym_integer,
    ACTIONS(304), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    STATE(80), 4,
      sym__micro_op_operand,
      sym_hexadecimal,
      sym_register,
      sym_identifier,
    ACTIONS(306), 7,
      aux_sym_register_token1,
      aux_sym_register_token2,
      aux_sym_register_token3,
      aux_sym_register_token4,
      aux_sym_register_token5,
      aux_sym_register_token6,
      aux_sym_register_token7,
  [2262] = 10,
    ACTIONS(9), 1,
      sym_label,
    ACTIONS(11), 1,
      anon_sym_call,
    ACTIONS(13), 1,
      aux_sym_nasm_preprocess_directive_token1,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      sym_gcc_mnemonic,
    ACTIONS(19), 1,
      sym_mnemonic,
    ACTIONS(350), 1,
      ts_builtin_sym_end,
    ACTIONS(352), 1,
      sym_comment,
    STATE(123), 2,
      sym__normal_instruction,
      sym__gcc_pseudo_op,
    STATE(120), 5,
      sym__statement,
      sym_call_instruction,
      sym_instruction,
      sym_nasm_preprocess_directive,
      sym_nasm_assembler_directive,
  [2298] = 10,
    ACTIONS(9), 1,
      sym_label,
    ACTIONS(11), 1,
      anon_sym_call,
    ACTIONS(13), 1,
      aux_sym_nasm_preprocess_directive_token1,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      sym_gcc_mnemonic,
    ACTIONS(19), 1,
      sym_mnemonic,
    ACTIONS(352), 1,
      sym_comment,
    ACTIONS(354), 1,
      ts_builtin_sym_end,
    STATE(123), 2,
      sym__normal_instruction,
      sym__gcc_pseudo_op,
    STATE(120), 5,
      sym__statement,
      sym_call_instruction,
      sym_instruction,
      sym_nasm_preprocess_directive,
      sym_nasm_assembler_directive,
  [2334] = 9,
    ACTIONS(9), 1,
      sym_label,
    ACTIONS(11), 1,
      anon_sym_call,
    ACTIONS(13), 1,
      aux_sym_nasm_preprocess_directive_token1,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      sym_gcc_mnemonic,
    ACTIONS(19), 1,
      sym_mnemonic,
    ACTIONS(352), 1,
      sym_comment,
    STATE(123), 2,
      sym__normal_instruction,
      sym__gcc_pseudo_op,
    STATE(120), 5,
      sym__statement,
      sym_call_instruction,
      sym_instruction,
      sym_nasm_preprocess_directive,
      sym_nasm_assembler_directive,
  [2367] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 12,
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
  [2385] = 7,
    ACTIONS(11), 1,
      anon_sym_call,
    ACTIONS(17), 1,
      sym_gcc_mnemonic,
    ACTIONS(19), 1,
      sym_mnemonic,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(358), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(122), 2,
      sym_call_instruction,
      sym_instruction,
    STATE(123), 2,
      sym__normal_instruction,
      sym__gcc_pseudo_op,
  [2410] = 4,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(260), 1,
      ts_builtin_sym_end,
    ACTIONS(360), 1,
      anon_sym_LBRACK,
    ACTIONS(262), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [2425] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_RBRACK,
    STATE(74), 1,
      aux_sym_pointer_repeat1,
    ACTIONS(362), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2440] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 1,
      anon_sym_RBRACK,
    STATE(83), 1,
      aux_sym_pointer_repeat1,
    ACTIONS(362), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2455] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      anon_sym_RBRACK,
    STATE(74), 1,
      aux_sym_pointer_repeat1,
    ACTIONS(362), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2470] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_RBRACK,
    STATE(74), 1,
      aux_sym_pointer_repeat1,
    ACTIONS(370), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2485] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_RBRACK,
    STATE(74), 1,
      aux_sym_pointer_repeat1,
    ACTIONS(362), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2500] = 5,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(377), 1,
      ts_builtin_sym_end,
    ACTIONS(379), 1,
      anon_sym_LF,
    STATE(76), 1,
      aux_sym__gcc_pseudo_op_repeat1,
    ACTIONS(381), 2,
      anon_sym_COMMA,
      anon_sym_,
  [2517] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_RBRACK,
    STATE(73), 1,
      aux_sym_pointer_repeat1,
    ACTIONS(362), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2532] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_RBRACK,
    STATE(74), 1,
      aux_sym_pointer_repeat1,
    ACTIONS(362), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2547] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      anon_sym_RBRACK,
    STATE(74), 1,
      aux_sym_pointer_repeat1,
    ACTIONS(362), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2562] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      anon_sym_RBRACK,
    STATE(78), 1,
      aux_sym_pointer_repeat1,
    ACTIONS(362), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2577] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      anon_sym_RBRACK,
    STATE(79), 1,
      aux_sym_pointer_repeat1,
    ACTIONS(362), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2592] = 5,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(390), 1,
      ts_builtin_sym_end,
    ACTIONS(392), 1,
      anon_sym_LF,
    STATE(82), 1,
      aux_sym_nasm_preprocess_directive_repeat1,
    ACTIONS(394), 2,
      anon_sym_COMMA,
      anon_sym_,
  [2609] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_RBRACK,
    STATE(74), 1,
      aux_sym_pointer_repeat1,
    ACTIONS(362), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2624] = 5,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(399), 1,
      ts_builtin_sym_end,
    ACTIONS(401), 1,
      anon_sym_LF,
    STATE(92), 1,
      aux_sym__gcc_pseudo_op_repeat1,
    ACTIONS(403), 2,
      anon_sym_COMMA,
      anon_sym_,
  [2641] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_RBRACK,
    STATE(95), 1,
      aux_sym_pointer_repeat1,
    ACTIONS(362), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2656] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_RBRACK,
    STATE(75), 1,
      aux_sym_pointer_repeat1,
    ACTIONS(362), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2671] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      anon_sym_RBRACK,
    STATE(74), 1,
      aux_sym_pointer_repeat1,
    ACTIONS(362), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2686] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      anon_sym_RBRACK,
    STATE(71), 1,
      aux_sym_pointer_repeat1,
    ACTIONS(362), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2701] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 1,
      anon_sym_RBRACK,
    STATE(87), 1,
      aux_sym_pointer_repeat1,
    ACTIONS(362), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2716] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      anon_sym_RBRACK,
    STATE(94), 1,
      aux_sym_pointer_repeat1,
    ACTIONS(362), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2731] = 5,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(411), 1,
      ts_builtin_sym_end,
    ACTIONS(413), 1,
      anon_sym_LF,
    STATE(93), 1,
      aux_sym_nasm_preprocess_directive_repeat1,
    ACTIONS(415), 2,
      anon_sym_COMMA,
      anon_sym_,
  [2748] = 5,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(328), 1,
      ts_builtin_sym_end,
    ACTIONS(417), 1,
      anon_sym_LF,
    STATE(76), 1,
      aux_sym__gcc_pseudo_op_repeat1,
    ACTIONS(419), 2,
      anon_sym_COMMA,
      anon_sym_,
  [2765] = 5,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    ACTIONS(421), 1,
      anon_sym_LF,
    STATE(82), 1,
      aux_sym_nasm_preprocess_directive_repeat1,
    ACTIONS(423), 2,
      anon_sym_COMMA,
      anon_sym_,
  [2782] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 1,
      anon_sym_RBRACK,
    STATE(74), 1,
      aux_sym_pointer_repeat1,
    ACTIONS(362), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2797] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      anon_sym_RBRACK,
    STATE(74), 1,
      aux_sym_pointer_repeat1,
    ACTIONS(362), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2812] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(266), 1,
      ts_builtin_sym_end,
    ACTIONS(268), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [2824] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(286), 1,
      ts_builtin_sym_end,
    ACTIONS(288), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [2836] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 4,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RBRACK,
  [2846] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 4,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RBRACK,
  [2856] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(240), 1,
      ts_builtin_sym_end,
    ACTIONS(242), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [2868] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(390), 1,
      ts_builtin_sym_end,
    ACTIONS(392), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [2880] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(244), 1,
      ts_builtin_sym_end,
    ACTIONS(246), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [2892] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 4,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RBRACK,
  [2902] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(427), 1,
      ts_builtin_sym_end,
    ACTIONS(429), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [2914] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(290), 1,
      ts_builtin_sym_end,
    ACTIONS(292), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [2926] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(248), 1,
      ts_builtin_sym_end,
    ACTIONS(250), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [2938] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 4,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RBRACK,
  [2948] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(256), 1,
      ts_builtin_sym_end,
    ACTIONS(258), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [2960] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(270), 1,
      ts_builtin_sym_end,
    ACTIONS(272), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [2972] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(278), 1,
      ts_builtin_sym_end,
    ACTIONS(280), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [2984] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(282), 1,
      ts_builtin_sym_end,
    ACTIONS(284), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [2996] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(274), 1,
      ts_builtin_sym_end,
    ACTIONS(276), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [3008] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(252), 1,
      ts_builtin_sym_end,
    ACTIONS(254), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [3020] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(377), 1,
      ts_builtin_sym_end,
    ACTIONS(379), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [3032] = 4,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(354), 1,
      ts_builtin_sym_end,
    ACTIONS(431), 1,
      anon_sym_LF,
    STATE(116), 1,
      aux_sym_program_repeat1,
  [3045] = 4,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(433), 1,
      ts_builtin_sym_end,
    ACTIONS(435), 1,
      anon_sym_LF,
    STATE(116), 1,
      aux_sym_program_repeat1,
  [3058] = 4,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(438), 1,
      ts_builtin_sym_end,
    ACTIONS(440), 1,
      anon_sym_LF,
    STATE(115), 1,
      aux_sym_program_repeat1,
  [3071] = 2,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(442), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [3079] = 2,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(444), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [3087] = 2,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(433), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [3095] = 2,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(137), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [3103] = 2,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(446), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [3111] = 2,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(448), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [3119] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_COLON,
  [3126] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_COLON,
  [3133] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      ts_builtin_sym_end,
  [3140] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      sym_mnemonic,
  [3147] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      sym__identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(12)] = 0,
  [SMALL_STATE(13)] = 75,
  [SMALL_STATE(14)] = 150,
  [SMALL_STATE(15)] = 225,
  [SMALL_STATE(16)] = 296,
  [SMALL_STATE(17)] = 337,
  [SMALL_STATE(18)] = 378,
  [SMALL_STATE(19)] = 419,
  [SMALL_STATE(20)] = 460,
  [SMALL_STATE(21)] = 501,
  [SMALL_STATE(22)] = 542,
  [SMALL_STATE(23)] = 585,
  [SMALL_STATE(24)] = 626,
  [SMALL_STATE(25)] = 667,
  [SMALL_STATE(26)] = 708,
  [SMALL_STATE(27)] = 749,
  [SMALL_STATE(28)] = 790,
  [SMALL_STATE(29)] = 831,
  [SMALL_STATE(30)] = 872,
  [SMALL_STATE(31)] = 911,
  [SMALL_STATE(32)] = 950,
  [SMALL_STATE(33)] = 989,
  [SMALL_STATE(34)] = 1046,
  [SMALL_STATE(35)] = 1085,
  [SMALL_STATE(36)] = 1124,
  [SMALL_STATE(37)] = 1163,
  [SMALL_STATE(38)] = 1202,
  [SMALL_STATE(39)] = 1241,
  [SMALL_STATE(40)] = 1280,
  [SMALL_STATE(41)] = 1319,
  [SMALL_STATE(42)] = 1358,
  [SMALL_STATE(43)] = 1397,
  [SMALL_STATE(44)] = 1454,
  [SMALL_STATE(45)] = 1495,
  [SMALL_STATE(46)] = 1552,
  [SMALL_STATE(47)] = 1596,
  [SMALL_STATE(48)] = 1630,
  [SMALL_STATE(49)] = 1674,
  [SMALL_STATE(50)] = 1718,
  [SMALL_STATE(51)] = 1762,
  [SMALL_STATE(52)] = 1806,
  [SMALL_STATE(53)] = 1850,
  [SMALL_STATE(54)] = 1894,
  [SMALL_STATE(55)] = 1924,
  [SMALL_STATE(56)] = 1968,
  [SMALL_STATE(57)] = 2012,
  [SMALL_STATE(58)] = 2052,
  [SMALL_STATE(59)] = 2082,
  [SMALL_STATE(60)] = 2112,
  [SMALL_STATE(61)] = 2142,
  [SMALL_STATE(62)] = 2172,
  [SMALL_STATE(63)] = 2202,
  [SMALL_STATE(64)] = 2232,
  [SMALL_STATE(65)] = 2262,
  [SMALL_STATE(66)] = 2298,
  [SMALL_STATE(67)] = 2334,
  [SMALL_STATE(68)] = 2367,
  [SMALL_STATE(69)] = 2385,
  [SMALL_STATE(70)] = 2410,
  [SMALL_STATE(71)] = 2425,
  [SMALL_STATE(72)] = 2440,
  [SMALL_STATE(73)] = 2455,
  [SMALL_STATE(74)] = 2470,
  [SMALL_STATE(75)] = 2485,
  [SMALL_STATE(76)] = 2500,
  [SMALL_STATE(77)] = 2517,
  [SMALL_STATE(78)] = 2532,
  [SMALL_STATE(79)] = 2547,
  [SMALL_STATE(80)] = 2562,
  [SMALL_STATE(81)] = 2577,
  [SMALL_STATE(82)] = 2592,
  [SMALL_STATE(83)] = 2609,
  [SMALL_STATE(84)] = 2624,
  [SMALL_STATE(85)] = 2641,
  [SMALL_STATE(86)] = 2656,
  [SMALL_STATE(87)] = 2671,
  [SMALL_STATE(88)] = 2686,
  [SMALL_STATE(89)] = 2701,
  [SMALL_STATE(90)] = 2716,
  [SMALL_STATE(91)] = 2731,
  [SMALL_STATE(92)] = 2748,
  [SMALL_STATE(93)] = 2765,
  [SMALL_STATE(94)] = 2782,
  [SMALL_STATE(95)] = 2797,
  [SMALL_STATE(96)] = 2812,
  [SMALL_STATE(97)] = 2824,
  [SMALL_STATE(98)] = 2836,
  [SMALL_STATE(99)] = 2846,
  [SMALL_STATE(100)] = 2856,
  [SMALL_STATE(101)] = 2868,
  [SMALL_STATE(102)] = 2880,
  [SMALL_STATE(103)] = 2892,
  [SMALL_STATE(104)] = 2902,
  [SMALL_STATE(105)] = 2914,
  [SMALL_STATE(106)] = 2926,
  [SMALL_STATE(107)] = 2938,
  [SMALL_STATE(108)] = 2948,
  [SMALL_STATE(109)] = 2960,
  [SMALL_STATE(110)] = 2972,
  [SMALL_STATE(111)] = 2984,
  [SMALL_STATE(112)] = 2996,
  [SMALL_STATE(113)] = 3008,
  [SMALL_STATE(114)] = 3020,
  [SMALL_STATE(115)] = 3032,
  [SMALL_STATE(116)] = 3045,
  [SMALL_STATE(117)] = 3058,
  [SMALL_STATE(118)] = 3071,
  [SMALL_STATE(119)] = 3079,
  [SMALL_STATE(120)] = 3087,
  [SMALL_STATE(121)] = 3095,
  [SMALL_STATE(122)] = 3103,
  [SMALL_STATE(123)] = 3111,
  [SMALL_STATE(124)] = 3119,
  [SMALL_STATE(125)] = 3126,
  [SMALL_STATE(126)] = 3133,
  [SMALL_STATE(127)] = 3140,
  [SMALL_STATE(128)] = 3147,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nasm_preprocess_directive, 5),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nasm_preprocess_directive, 2),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nasm_preprocess_directive, 4),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__normal_instruction_repeat1, 2),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat1, 2), SHIFT_REPEAT(15),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat1, 2), SHIFT_REPEAT(49),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat1, 2), SHIFT_REPEAT(47),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat1, 2), SHIFT_REPEAT(17),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat1, 2), SHIFT_REPEAT(18),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat1, 2), SHIFT_REPEAT(19),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat1, 2), SHIFT_REPEAT(20),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat1, 2), SHIFT_REPEAT(21),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat1, 2), SHIFT_REPEAT(22),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat1, 2), SHIFT_REPEAT(23),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat1, 2), SHIFT_REPEAT(6),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat1, 2), SHIFT_REPEAT(25),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_instruction, 1),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_instruction, 1),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__normal_instruction, 2),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__normal_instruction, 1),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_instruction, 2),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_call_instruction_repeat1, 2),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_call_instruction_repeat1, 2), SHIFT_REPEAT(49),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_call_instruction_repeat1, 2), SHIFT_REPEAT(47),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_call_instruction_repeat1, 2), SHIFT_REPEAT(17),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_call_instruction_repeat1, 2), SHIFT_REPEAT(18),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_call_instruction_repeat1, 2), SHIFT_REPEAT(19),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_call_instruction_repeat1, 2), SHIFT_REPEAT(20),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_call_instruction_repeat1, 2), SHIFT_REPEAT(21),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_call_instruction_repeat1, 2), SHIFT_REPEAT(22),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_call_instruction_repeat1, 2), SHIFT_REPEAT(23),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_call_instruction_repeat1, 2), SHIFT_REPEAT(11),
  [173] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_call_instruction_repeat1, 2), SHIFT_REPEAT(25),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_instruction_repeat1, 2), SHIFT_REPEAT(51),
  [201] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_call_instruction_repeat1, 2), SHIFT_REPEAT(30),
  [204] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_call_instruction_repeat1, 2), SHIFT_REPEAT(36),
  [207] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_call_instruction_repeat1, 2), SHIFT_REPEAT(37),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_call_instruction_repeat1, 2), SHIFT_REPEAT(32),
  [213] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_call_instruction_repeat1, 2), SHIFT_REPEAT(38),
  [216] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_call_instruction_repeat1, 2), SHIFT_REPEAT(44),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_instruction_repeat1, 2), SHIFT_REPEAT(31),
  [222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_instruction_repeat1, 2), SHIFT_REPEAT(13),
  [225] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_call_instruction_repeat1, 2), SHIFT_REPEAT(39),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat1, 2),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hexadecimal, 1),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hexadecimal, 1),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary, 1),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary, 1),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_octal, 1),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_octal, 1),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register, 1),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_register, 1),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 1),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant, 1),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__constant, 1),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer, 5),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pointer, 5),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer, 4),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pointer, 4),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer, 3),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pointer, 3),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__operand, 2),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__operand, 2),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer, 6),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pointer, 6),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_width, 1),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_width, 1),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gcc_pseudo_op, 3),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_width, 2),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_width, 2),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gcc_pseudo_op, 4),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gcc_pseudo_op, 1),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_segment_prefix, 2),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [370] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pointer_repeat1, 2), SHIFT_REPEAT(60),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pointer_repeat1, 2),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__gcc_pseudo_op_repeat1, 2),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__gcc_pseudo_op_repeat1, 2),
  [381] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__gcc_pseudo_op_repeat1, 2), SHIFT_REPEAT(57),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nasm_preprocess_directive_repeat1, 2),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nasm_preprocess_directive_repeat1, 2),
  [394] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_nasm_preprocess_directive_repeat1, 2), SHIFT_REPEAT(5),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gcc_pseudo_op, 2),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__gcc_pseudo_op, 2),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nasm_preprocess_directive, 3),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nasm_preprocess_directive, 3),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__gcc_pseudo_op, 3),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nasm_preprocess_directive, 4),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 1),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [435] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(67),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nasm_assembler_directive, 4),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nasm_assembler_directive, 3),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_segment, 1),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [454] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
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
