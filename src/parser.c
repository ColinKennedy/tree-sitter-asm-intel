#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 56
#define LARGE_STATE_COUNT 6
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
  aux_sym_label_token1 = 5,
  sym_identifier = 6,
  sym_gcc_mnemonic = 7,
  sym_mnemonic = 8,
  anon_sym_BYTE = 9,
  anon_sym_DWORD = 10,
  anon_sym_QWORD = 11,
  anon_sym_WORD = 12,
  anon_sym_byte = 13,
  anon_sym_dword = 14,
  anon_sym_qword = 15,
  anon_sym_word = 16,
  anon_sym_PTR = 17,
  anon_sym_ptr = 18,
  anon_sym_LBRACK = 19,
  anon_sym_DASH = 20,
  anon_sym_PLUS = 21,
  anon_sym_STAR = 22,
  anon_sym_RBRACK = 23,
  aux_sym_hexadecimal_token1 = 24,
  aux_sym_hexadecimal_token2 = 25,
  aux_sym_hexadecimal_token3 = 26,
  aux_sym_binary_token1 = 27,
  aux_sym_binary_token2 = 28,
  aux_sym_octal_token1 = 29,
  aux_sym_octal_token2 = 30,
  sym_register = 31,
  aux_sym_float_token1 = 32,
  aux_sym_float_token2 = 33,
  sym_integer = 34,
  sym_string = 35,
  sym_program = 36,
  sym__statement = 37,
  sym_instruction = 38,
  sym__normal_instruction = 39,
  sym__gcc_pseudo_op = 40,
  sym_label = 41,
  sym__operand = 42,
  sym_pointer = 43,
  sym_pointer_width = 44,
  sym__deregister = 45,
  sym_hexadecimal = 46,
  sym_binary = 47,
  sym_octal = 48,
  sym__constant = 49,
  sym_float = 50,
  aux_sym_program_repeat1 = 51,
  aux_sym__normal_instruction_repeat1 = 52,
  aux_sym__gcc_pseudo_op_repeat1 = 53,
  aux_sym__deregister_repeat1 = 54,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [sym_comment] = "comment",
  [anon_sym_COMMA] = ",",
  [anon_sym_] = " ",
  [aux_sym_label_token1] = "label_token1",
  [sym_identifier] = "identifier",
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
  [sym_program] = "program",
  [sym__statement] = "_statement",
  [sym_instruction] = "instruction",
  [sym__normal_instruction] = "_normal_instruction",
  [sym__gcc_pseudo_op] = "_gcc_pseudo_op",
  [sym_label] = "label",
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
  [aux_sym__gcc_pseudo_op_repeat1] = "_gcc_pseudo_op_repeat1",
  [aux_sym__deregister_repeat1] = "_deregister_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [sym_comment] = sym_comment,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_] = anon_sym_,
  [aux_sym_label_token1] = aux_sym_label_token1,
  [sym_identifier] = sym_identifier,
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
  [sym_program] = sym_program,
  [sym__statement] = sym__statement,
  [sym_instruction] = sym_instruction,
  [sym__normal_instruction] = sym__normal_instruction,
  [sym__gcc_pseudo_op] = sym__gcc_pseudo_op,
  [sym_label] = sym_label,
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
  [aux_sym_label_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_identifier] = {
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
  [sym_label] = {
    .visible = true,
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
  [28] = 25,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 24,
  [38] = 38,
  [39] = 31,
  [40] = 40,
  [41] = 29,
  [42] = 42,
  [43] = 25,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(78);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(82);
      if (lookahead == '$') ADVANCE(11);
      if (lookahead == '*') ADVANCE(123);
      if (lookahead == '+') ADVANCE(122);
      if (lookahead == ',') ADVANCE(83);
      if (lookahead == '-') ADVANCE(121);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '0') ADVANCE(34);
      if (lookahead == '1') ADVANCE(35);
      if (lookahead == 'B') ADVANCE(33);
      if (lookahead == 'D') ADVANCE(29);
      if (lookahead == 'P') ADVANCE(26);
      if (lookahead == 'Q') ADVANCE(30);
      if (lookahead == 'W') ADVANCE(19);
      if (lookahead == '[') ADVANCE(120);
      if (lookahead == ']') ADVANCE(124);
      if (lookahead == '_') ADVANCE(63);
      if (lookahead == 'b') ADVANCE(42);
      if (lookahead == 'd') ADVANCE(41);
      if (lookahead == 'p') ADVANCE(57);
      if (lookahead == 'q') ADVANCE(59);
      if (lookahead == 'w') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(43);
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(44);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(81);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(81);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '$') ADVANCE(11);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '.') ADVANCE(65);
      if (lookahead == '0') ADVANCE(168);
      if (lookahead == '1') ADVANCE(169);
      if (lookahead == 'B') ADVANCE(32);
      if (lookahead == 'D') ADVANCE(28);
      if (lookahead == 'Q') ADVANCE(31);
      if (lookahead == 'W') ADVANCE(18);
      if (lookahead == '[') ADVANCE(120);
      if (lookahead == '_') ADVANCE(63);
      if (lookahead == 'b') ADVANCE(46);
      if (lookahead == 'd') ADVANCE(45);
      if (lookahead == 'q') ADVANCE(60);
      if (lookahead == 'w') ADVANCE(49);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(170);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(47);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '$') ADVANCE(11);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(68);
      if (lookahead == '0') ADVANCE(168);
      if (lookahead == '1') ADVANCE(169);
      if (lookahead == '_') ADVANCE(64);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(170);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(48);
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(177);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '$') ADVANCE(11);
      if (lookahead == '0') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(47);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(65);
      if (lookahead == '0') ADVANCE(172);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(173);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == '0') ADVANCE(90);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(89);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(82);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(81);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 11:
      if (lookahead == '0') ADVANCE(69);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == 'D') ADVANCE(108);
      END_STATE();
    case 15:
      if (lookahead == 'D') ADVANCE(104);
      END_STATE();
    case 16:
      if (lookahead == 'D') ADVANCE(106);
      END_STATE();
    case 17:
      if (lookahead == 'E') ADVANCE(102);
      END_STATE();
    case 18:
      if (lookahead == 'O') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 19:
      if (lookahead == 'O') ADVANCE(23);
      END_STATE();
    case 20:
      if (lookahead == 'O') ADVANCE(24);
      END_STATE();
    case 21:
      if (lookahead == 'O') ADVANCE(25);
      END_STATE();
    case 22:
      if (lookahead == 'R') ADVANCE(118);
      END_STATE();
    case 23:
      if (lookahead == 'R') ADVANCE(14);
      END_STATE();
    case 24:
      if (lookahead == 'R') ADVANCE(15);
      END_STATE();
    case 25:
      if (lookahead == 'R') ADVANCE(16);
      END_STATE();
    case 26:
      if (lookahead == 'T') ADVANCE(22);
      END_STATE();
    case 27:
      if (lookahead == 'T') ADVANCE(17);
      END_STATE();
    case 28:
      if (lookahead == 'W') ADVANCE(143);
      if (lookahead == 'h') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(153);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 29:
      if (lookahead == 'W') ADVANCE(20);
      if (lookahead == 'h') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(44);
      END_STATE();
    case 30:
      if (lookahead == 'W') ADVANCE(21);
      END_STATE();
    case 31:
      if (lookahead == 'W') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 32:
      if (lookahead == 'Y') ADVANCE(148);
      if (lookahead == 'h') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(153);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 33:
      if (lookahead == 'Y') ADVANCE(27);
      if (lookahead == 'h') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(44);
      END_STATE();
    case 34:
      if (lookahead == '_') ADVANCE(63);
      if (lookahead == 'b') ADVANCE(131);
      if (lookahead == 'h') ADVANCE(126);
      if (lookahead == 'x') ADVANCE(70);
      if (lookahead == 'y') ADVANCE(133);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(137);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(35);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(43);
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(44);
      END_STATE();
    case 35:
      if (lookahead == '_') ADVANCE(63);
      if (lookahead == 'b') ADVANCE(132);
      if (lookahead == 'h') ADVANCE(125);
      if (lookahead == 'y') ADVANCE(130);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(136);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(35);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(43);
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(44);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(116);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(112);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(114);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 40:
      if (lookahead == 'h') ADVANCE(126);
      if (lookahead == 'x') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(44);
      END_STATE();
    case 41:
      if (lookahead == 'h') ADVANCE(125);
      if (lookahead == 'w') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(44);
      END_STATE();
    case 42:
      if (lookahead == 'h') ADVANCE(125);
      if (lookahead == 'y') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(44);
      END_STATE();
    case 43:
      if (lookahead == 'h') ADVANCE(125);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(43);
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(44);
      END_STATE();
    case 44:
      if (lookahead == 'h') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(44);
      END_STATE();
    case 45:
      if (lookahead == 'h') ADVANCE(127);
      if (lookahead == 'w') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(153);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 46:
      if (lookahead == 'h') ADVANCE(127);
      if (lookahead == 'y') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(153);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 47:
      if (lookahead == 'h') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(153);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 48:
      if (lookahead == 'h') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(93);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 52:
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 53:
      if (lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 55:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 59:
      if (lookahead == 'w') ADVANCE(52);
      END_STATE();
    case 60:
      if (lookahead == 'w') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 61:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      END_STATE();
    case 62:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      END_STATE();
    case 63:
      if (lookahead == 'b' ||
          lookahead == 'y') ADVANCE(130);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(63);
      END_STATE();
    case 64:
      if (lookahead == 'b' ||
          lookahead == 'y') ADVANCE(98);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(94);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(128);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(129);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 72:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 73:
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 74:
      if (eof) ADVANCE(78);
      if (lookahead == '\n') SKIP(74)
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(81);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 75:
      if (eof) ADVANCE(78);
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '$') ADVANCE(11);
      if (lookahead == ',') ADVANCE(83);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '.') ADVANCE(65);
      if (lookahead == '0') ADVANCE(168);
      if (lookahead == '1') ADVANCE(169);
      if (lookahead == 'B') ADVANCE(32);
      if (lookahead == 'D') ADVANCE(28);
      if (lookahead == 'Q') ADVANCE(31);
      if (lookahead == 'W') ADVANCE(18);
      if (lookahead == '[') ADVANCE(120);
      if (lookahead == '_') ADVANCE(63);
      if (lookahead == 'b') ADVANCE(46);
      if (lookahead == 'd') ADVANCE(45);
      if (lookahead == 'q') ADVANCE(60);
      if (lookahead == 'w') ADVANCE(49);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(75)
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(170);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(47);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 76:
      if (eof) ADVANCE(78);
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '$') ADVANCE(11);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(68);
      if (lookahead == '0') ADVANCE(168);
      if (lookahead == '1') ADVANCE(169);
      if (lookahead == '_') ADVANCE(64);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(76)
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(170);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(48);
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 77:
      if (eof) ADVANCE(78);
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == ' ') ADVANCE(84);
      if (lookahead == ',') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(77)
      END_STATE();
    case 78:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == ' ') ADVANCE(84);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == ':') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == ' ') ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+') ADVANCE(66);
      if (lookahead == '-') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+') ADVANCE(67);
      if (lookahead == '-') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == 'd') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == 'd') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(93);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b' ||
          lookahead == 'y') ADVANCE(98);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(94);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_gcc_mnemonic);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_gcc_mnemonic);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_mnemonic);
      if (lookahead == ':') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_BYTE);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_BYTE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_DWORD);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_DWORD);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_QWORD);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_QWORD);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_WORD);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_WORD);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_byte);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_byte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_dword);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_dword);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_qword);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_qword);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_word);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(129);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_hexadecimal_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_hexadecimal_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_hexadecimal_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (lookahead == '_') ADVANCE(135);
      if (lookahead == 'h') ADVANCE(125);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(134);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(44);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (lookahead == 'h') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(44);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(135);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_binary_token2);
      if (lookahead == '_') ADVANCE(135);
      if (lookahead == 'h') ADVANCE(125);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(134);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(44);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_binary_token2);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_octal_token1);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_octal_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(138);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_octal_token2);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'D') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'D') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'D') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'E') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'O') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'O') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'R') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'R') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'R') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'T') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'd') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'd') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'd') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'e') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'h') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(153);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'o') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'o') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'r') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'r') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'r') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 't') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == '.') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == 'e') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == '.') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == 'e') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_integer);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(165);
      if (lookahead == '_') ADVANCE(63);
      if (lookahead == 'b') ADVANCE(131);
      if (lookahead == 'd') ADVANCE(174);
      if (lookahead == 'h') ADVANCE(126);
      if (lookahead == 'x') ADVANCE(70);
      if (lookahead == 'y') ADVANCE(133);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(137);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(169);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(171);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(170);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(44);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(165);
      if (lookahead == '_') ADVANCE(63);
      if (lookahead == 'b') ADVANCE(132);
      if (lookahead == 'd') ADVANCE(175);
      if (lookahead == 'h') ADVANCE(125);
      if (lookahead == 'y') ADVANCE(130);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(136);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(169);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(171);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(170);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(44);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(165);
      if (lookahead == 'd') ADVANCE(175);
      if (lookahead == 'h') ADVANCE(125);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(136);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(170);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(44);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(165);
      if (lookahead == 'd') ADVANCE(175);
      if (lookahead == 'h') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(44);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(165);
      if (lookahead == 'd') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(165);
      if (lookahead == 'd') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'h') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(174);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(44);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'h') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(44);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 74},
  [2] = {.lex_state = 75},
  [3] = {.lex_state = 75},
  [4] = {.lex_state = 75},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 76},
  [7] = {.lex_state = 76},
  [8] = {.lex_state = 76},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 74},
  [11] = {.lex_state = 74},
  [12] = {.lex_state = 74},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 77},
  [16] = {.lex_state = 6},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 77},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 77},
  [23] = {.lex_state = 75},
  [24] = {.lex_state = 77},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 75},
  [28] = {.lex_state = 77},
  [29] = {.lex_state = 77},
  [30] = {.lex_state = 75},
  [31] = {.lex_state = 77},
  [32] = {.lex_state = 75},
  [33] = {.lex_state = 77},
  [34] = {.lex_state = 75},
  [35] = {.lex_state = 75},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 75},
  [38] = {.lex_state = 75},
  [39] = {.lex_state = 75},
  [40] = {.lex_state = 75},
  [41] = {.lex_state = 75},
  [42] = {.lex_state = 75},
  [43] = {.lex_state = 75},
  [44] = {.lex_state = 75},
  [45] = {.lex_state = 75},
  [46] = {.lex_state = 75},
  [47] = {.lex_state = 75},
  [48] = {.lex_state = 75},
  [49] = {.lex_state = 75},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 75},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 3},
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
    [sym_program] = STATE(53),
    [sym__statement] = STATE(47),
    [sym_instruction] = STATE(47),
    [sym__normal_instruction] = STATE(48),
    [sym__gcc_pseudo_op] = STATE(48),
    [sym_label] = STATE(47),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [aux_sym_label_token1] = ACTIONS(7),
    [sym_gcc_mnemonic] = ACTIONS(9),
    [sym_mnemonic] = ACTIONS(11),
  },
  [2] = {
    [sym__operand] = STATE(34),
    [sym_pointer] = STATE(34),
    [sym_pointer_width] = STATE(36),
    [sym__deregister] = STATE(42),
    [sym_hexadecimal] = STATE(34),
    [sym_binary] = STATE(34),
    [sym_octal] = STATE(34),
    [sym__constant] = STATE(34),
    [sym_float] = STATE(34),
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
  },
  [3] = {
    [sym__operand] = STATE(32),
    [sym_pointer] = STATE(32),
    [sym_pointer_width] = STATE(36),
    [sym__deregister] = STATE(42),
    [sym_hexadecimal] = STATE(32),
    [sym_binary] = STATE(32),
    [sym_octal] = STATE(32),
    [sym__constant] = STATE(32),
    [sym_float] = STATE(32),
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
    [anon_sym_LBRACK] = ACTIONS(17),
    [aux_sym_hexadecimal_token1] = ACTIONS(19),
    [aux_sym_hexadecimal_token2] = ACTIONS(19),
    [aux_sym_hexadecimal_token3] = ACTIONS(19),
    [aux_sym_binary_token1] = ACTIONS(21),
    [aux_sym_binary_token2] = ACTIONS(21),
    [aux_sym_octal_token1] = ACTIONS(23),
    [aux_sym_octal_token2] = ACTIONS(23),
    [sym_register] = ACTIONS(33),
    [aux_sym_float_token1] = ACTIONS(27),
    [aux_sym_float_token2] = ACTIONS(27),
    [sym_integer] = ACTIONS(29),
    [sym_string] = ACTIONS(33),
  },
  [4] = {
    [sym__operand] = STATE(34),
    [sym_pointer] = STATE(34),
    [sym_pointer_width] = STATE(36),
    [sym__deregister] = STATE(42),
    [sym_hexadecimal] = STATE(34),
    [sym_binary] = STATE(34),
    [sym_octal] = STATE(34),
    [sym__constant] = STATE(34),
    [sym_float] = STATE(34),
    [ts_builtin_sym_end] = ACTIONS(35),
    [anon_sym_LF] = ACTIONS(35),
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
  },
  [5] = {
    [sym__operand] = STATE(34),
    [sym_pointer] = STATE(34),
    [sym_pointer_width] = STATE(36),
    [sym__deregister] = STATE(42),
    [sym_hexadecimal] = STATE(34),
    [sym_binary] = STATE(34),
    [sym_octal] = STATE(34),
    [sym__constant] = STATE(34),
    [sym_float] = STATE(34),
    [anon_sym_BYTE] = ACTIONS(15),
    [anon_sym_DWORD] = ACTIONS(15),
    [anon_sym_QWORD] = ACTIONS(15),
    [anon_sym_WORD] = ACTIONS(15),
    [anon_sym_byte] = ACTIONS(15),
    [anon_sym_dword] = ACTIONS(15),
    [anon_sym_qword] = ACTIONS(15),
    [anon_sym_word] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(37),
    [aux_sym_hexadecimal_token1] = ACTIONS(19),
    [aux_sym_hexadecimal_token2] = ACTIONS(39),
    [aux_sym_hexadecimal_token3] = ACTIONS(39),
    [aux_sym_binary_token1] = ACTIONS(21),
    [aux_sym_binary_token2] = ACTIONS(21),
    [aux_sym_octal_token1] = ACTIONS(23),
    [aux_sym_octal_token2] = ACTIONS(41),
    [sym_register] = ACTIONS(25),
    [aux_sym_float_token1] = ACTIONS(43),
    [aux_sym_float_token2] = ACTIONS(27),
    [sym_integer] = ACTIONS(29),
    [sym_string] = ACTIONS(45),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(47), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(53), 2,
      aux_sym_binary_token1,
      aux_sym_binary_token2,
    ACTIONS(55), 2,
      aux_sym_octal_token1,
      aux_sym_octal_token2,
    ACTIONS(57), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(49), 3,
      sym_identifier,
      sym_integer,
      sym_string,
    ACTIONS(51), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    STATE(15), 5,
      sym_hexadecimal,
      sym_binary,
      sym_octal,
      sym__constant,
      sym_float,
  [34] = 7,
    ACTIONS(53), 2,
      aux_sym_binary_token1,
      aux_sym_binary_token2,
    ACTIONS(55), 2,
      aux_sym_octal_token1,
      aux_sym_octal_token2,
    ACTIONS(57), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(59), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(51), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    ACTIONS(61), 3,
      sym_identifier,
      sym_integer,
      sym_string,
    STATE(33), 5,
      sym_hexadecimal,
      sym_binary,
      sym_octal,
      sym__constant,
      sym_float,
  [68] = 7,
    ACTIONS(53), 2,
      aux_sym_binary_token1,
      aux_sym_binary_token2,
    ACTIONS(55), 2,
      aux_sym_octal_token1,
      aux_sym_octal_token2,
    ACTIONS(57), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(63), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(51), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    ACTIONS(61), 3,
      sym_identifier,
      sym_integer,
      sym_string,
    STATE(33), 5,
      sym_hexadecimal,
      sym_binary,
      sym_octal,
      sym__constant,
      sym_float,
  [102] = 9,
    ACTIONS(51), 1,
      aux_sym_hexadecimal_token1,
    ACTIONS(55), 1,
      aux_sym_octal_token1,
    ACTIONS(67), 1,
      aux_sym_octal_token2,
    ACTIONS(69), 1,
      sym_string,
    ACTIONS(53), 2,
      aux_sym_binary_token1,
      aux_sym_binary_token2,
    ACTIONS(57), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(61), 2,
      sym_identifier,
      sym_integer,
    ACTIONS(65), 2,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    STATE(33), 5,
      sym_hexadecimal,
      sym_binary,
      sym_octal,
      sym__constant,
      sym_float,
  [138] = 7,
    ACTIONS(7), 1,
      aux_sym_label_token1,
    ACTIONS(9), 1,
      sym_gcc_mnemonic,
    ACTIONS(11), 1,
      sym_mnemonic,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    ACTIONS(73), 1,
      sym_comment,
    STATE(48), 2,
      sym__normal_instruction,
      sym__gcc_pseudo_op,
    STATE(49), 3,
      sym__statement,
      sym_instruction,
      sym_label,
  [163] = 7,
    ACTIONS(7), 1,
      aux_sym_label_token1,
    ACTIONS(9), 1,
      sym_gcc_mnemonic,
    ACTIONS(11), 1,
      sym_mnemonic,
    ACTIONS(73), 1,
      sym_comment,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    STATE(48), 2,
      sym__normal_instruction,
      sym__gcc_pseudo_op,
    STATE(49), 3,
      sym__statement,
      sym_instruction,
      sym_label,
  [188] = 6,
    ACTIONS(7), 1,
      aux_sym_label_token1,
    ACTIONS(9), 1,
      sym_gcc_mnemonic,
    ACTIONS(11), 1,
      sym_mnemonic,
    ACTIONS(73), 1,
      sym_comment,
    STATE(48), 2,
      sym__normal_instruction,
      sym__gcc_pseudo_op,
    STATE(49), 3,
      sym__statement,
      sym_instruction,
      sym_label,
  [210] = 3,
    ACTIONS(79), 1,
      anon_sym_RBRACK,
    STATE(14), 1,
      aux_sym__deregister_repeat1,
    ACTIONS(77), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
  [222] = 3,
    ACTIONS(84), 1,
      anon_sym_RBRACK,
    STATE(14), 1,
      aux_sym__deregister_repeat1,
    ACTIONS(81), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
  [234] = 4,
    ACTIONS(86), 1,
      ts_builtin_sym_end,
    ACTIONS(88), 1,
      anon_sym_LF,
    STATE(22), 1,
      aux_sym__gcc_pseudo_op_repeat1,
    ACTIONS(90), 2,
      anon_sym_COMMA,
      anon_sym_,
  [248] = 4,
    ACTIONS(92), 1,
      aux_sym_hexadecimal_token1,
    ACTIONS(96), 1,
      sym_register,
    STATE(17), 1,
      sym_hexadecimal,
    ACTIONS(94), 2,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
  [262] = 3,
    ACTIONS(98), 1,
      anon_sym_RBRACK,
    STATE(13), 1,
      aux_sym__deregister_repeat1,
    ACTIONS(77), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
  [274] = 3,
    ACTIONS(98), 1,
      anon_sym_RBRACK,
    STATE(14), 1,
      aux_sym__deregister_repeat1,
    ACTIONS(77), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
  [286] = 4,
    ACTIONS(100), 1,
      ts_builtin_sym_end,
    ACTIONS(102), 1,
      anon_sym_LF,
    STATE(19), 1,
      aux_sym__gcc_pseudo_op_repeat1,
    ACTIONS(104), 2,
      anon_sym_COMMA,
      anon_sym_,
  [300] = 4,
    ACTIONS(92), 1,
      aux_sym_hexadecimal_token1,
    ACTIONS(107), 1,
      sym_register,
    STATE(21), 1,
      sym_hexadecimal,
    ACTIONS(94), 2,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
  [314] = 3,
    ACTIONS(109), 1,
      anon_sym_RBRACK,
    STATE(18), 1,
      aux_sym__deregister_repeat1,
    ACTIONS(77), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
  [326] = 4,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    ACTIONS(111), 1,
      anon_sym_LF,
    STATE(19), 1,
      aux_sym__gcc_pseudo_op_repeat1,
    ACTIONS(113), 2,
      anon_sym_COMMA,
      anon_sym_,
  [340] = 3,
    ACTIONS(117), 1,
      anon_sym_COMMA,
    ACTIONS(119), 1,
      anon_sym_LBRACK,
    ACTIONS(115), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [351] = 2,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(123), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [360] = 1,
    ACTIONS(125), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_RBRACK,
  [367] = 1,
    ACTIONS(84), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_RBRACK,
  [374] = 3,
    ACTIONS(127), 1,
      anon_sym_COMMA,
    STATE(30), 1,
      aux_sym__normal_instruction_repeat1,
    ACTIONS(35), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [385] = 2,
    ACTIONS(125), 1,
      ts_builtin_sym_end,
    ACTIONS(129), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [394] = 2,
    ACTIONS(131), 1,
      ts_builtin_sym_end,
    ACTIONS(133), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [403] = 3,
    ACTIONS(137), 1,
      anon_sym_COMMA,
    STATE(30), 1,
      aux_sym__normal_instruction_repeat1,
    ACTIONS(135), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [414] = 2,
    ACTIONS(140), 1,
      ts_builtin_sym_end,
    ACTIONS(142), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [423] = 3,
    ACTIONS(146), 1,
      anon_sym_COMMA,
    STATE(27), 1,
      aux_sym__normal_instruction_repeat1,
    ACTIONS(144), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [434] = 2,
    ACTIONS(100), 1,
      ts_builtin_sym_end,
    ACTIONS(102), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [443] = 2,
    ACTIONS(148), 1,
      anon_sym_COMMA,
    ACTIONS(135), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [451] = 2,
    ACTIONS(152), 1,
      anon_sym_COMMA,
    ACTIONS(150), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [459] = 3,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(154), 1,
      sym_integer,
    STATE(44), 1,
      sym__deregister,
  [469] = 2,
    ACTIONS(123), 1,
      anon_sym_COMMA,
    ACTIONS(121), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [477] = 2,
    ACTIONS(158), 1,
      anon_sym_COMMA,
    ACTIONS(156), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [485] = 2,
    ACTIONS(142), 1,
      anon_sym_COMMA,
    ACTIONS(140), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [493] = 3,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    ACTIONS(160), 1,
      anon_sym_LF,
    STATE(45), 1,
      aux_sym_program_repeat1,
  [503] = 2,
    ACTIONS(133), 1,
      anon_sym_COMMA,
    ACTIONS(131), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [511] = 2,
    ACTIONS(164), 1,
      anon_sym_COMMA,
    ACTIONS(162), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [519] = 2,
    ACTIONS(129), 1,
      anon_sym_COMMA,
    ACTIONS(125), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [527] = 2,
    ACTIONS(168), 1,
      anon_sym_COMMA,
    ACTIONS(166), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [535] = 3,
    ACTIONS(170), 1,
      ts_builtin_sym_end,
    ACTIONS(172), 1,
      anon_sym_LF,
    STATE(45), 1,
      aux_sym_program_repeat1,
  [545] = 2,
    ACTIONS(177), 1,
      anon_sym_COMMA,
    ACTIONS(175), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [553] = 3,
    ACTIONS(179), 1,
      ts_builtin_sym_end,
    ACTIONS(181), 1,
      anon_sym_LF,
    STATE(40), 1,
      aux_sym_program_repeat1,
  [563] = 1,
    ACTIONS(183), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [568] = 1,
    ACTIONS(170), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [573] = 1,
    ACTIONS(185), 2,
      anon_sym_LBRACK,
      sym_integer,
  [578] = 1,
    ACTIONS(187), 2,
      anon_sym_PTR,
      anon_sym_ptr,
  [583] = 1,
    ACTIONS(189), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [588] = 1,
    ACTIONS(191), 1,
      ts_builtin_sym_end,
  [592] = 1,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
  [596] = 1,
    ACTIONS(195), 1,
      sym_integer,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 34,
  [SMALL_STATE(8)] = 68,
  [SMALL_STATE(9)] = 102,
  [SMALL_STATE(10)] = 138,
  [SMALL_STATE(11)] = 163,
  [SMALL_STATE(12)] = 188,
  [SMALL_STATE(13)] = 210,
  [SMALL_STATE(14)] = 222,
  [SMALL_STATE(15)] = 234,
  [SMALL_STATE(16)] = 248,
  [SMALL_STATE(17)] = 262,
  [SMALL_STATE(18)] = 274,
  [SMALL_STATE(19)] = 286,
  [SMALL_STATE(20)] = 300,
  [SMALL_STATE(21)] = 314,
  [SMALL_STATE(22)] = 326,
  [SMALL_STATE(23)] = 340,
  [SMALL_STATE(24)] = 351,
  [SMALL_STATE(25)] = 360,
  [SMALL_STATE(26)] = 367,
  [SMALL_STATE(27)] = 374,
  [SMALL_STATE(28)] = 385,
  [SMALL_STATE(29)] = 394,
  [SMALL_STATE(30)] = 403,
  [SMALL_STATE(31)] = 414,
  [SMALL_STATE(32)] = 423,
  [SMALL_STATE(33)] = 434,
  [SMALL_STATE(34)] = 443,
  [SMALL_STATE(35)] = 451,
  [SMALL_STATE(36)] = 459,
  [SMALL_STATE(37)] = 469,
  [SMALL_STATE(38)] = 477,
  [SMALL_STATE(39)] = 485,
  [SMALL_STATE(40)] = 493,
  [SMALL_STATE(41)] = 503,
  [SMALL_STATE(42)] = 511,
  [SMALL_STATE(43)] = 519,
  [SMALL_STATE(44)] = 527,
  [SMALL_STATE(45)] = 535,
  [SMALL_STATE(46)] = 545,
  [SMALL_STATE(47)] = 553,
  [SMALL_STATE(48)] = 563,
  [SMALL_STATE(49)] = 568,
  [SMALL_STATE(50)] = 573,
  [SMALL_STATE(51)] = 578,
  [SMALL_STATE(52)] = 583,
  [SMALL_STATE(53)] = 588,
  [SMALL_STATE(54)] = 592,
  [SMALL_STATE(55)] = 596,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__normal_instruction, 4),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__normal_instruction, 1),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__normal_instruction, 3),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gcc_pseudo_op, 1),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gcc_pseudo_op, 4),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gcc_pseudo_op, 3),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__deregister_repeat1, 2), SHIFT_REPEAT(55),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__deregister_repeat1, 2),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gcc_pseudo_op, 2),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__gcc_pseudo_op, 2),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__gcc_pseudo_op_repeat1, 2),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__gcc_pseudo_op_repeat1, 2),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__gcc_pseudo_op_repeat1, 2), SHIFT_REPEAT(9),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__gcc_pseudo_op, 3),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant, 1),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__constant, 1),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hexadecimal, 1),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hexadecimal, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary, 1),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__normal_instruction_repeat1, 2),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat1, 2), SHIFT_REPEAT(5),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_octal, 1),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_octal, 1),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__normal_instruction, 2),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat1, 2),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__deregister, 5),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__deregister, 5),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__deregister, 3),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__deregister, 3),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer, 1),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pointer, 1),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer, 2),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pointer, 2),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(12),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__deregister, 4),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__deregister, 4),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_width, 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [191] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
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
