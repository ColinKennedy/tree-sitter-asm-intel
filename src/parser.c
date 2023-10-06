#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 49
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 46
#define ALIAS_COUNT 0
#define TOKEN_COUNT 30
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
  sym_hexadecimal = 24,
  sym_register = 25,
  aux_sym_float_token1 = 26,
  aux_sym_float_token2 = 27,
  sym_integer = 28,
  sym_string = 29,
  sym_program = 30,
  sym__statement = 31,
  sym_instruction = 32,
  sym__normal_instruction = 33,
  sym__gcc_pseudo_op = 34,
  sym_label = 35,
  sym__operand = 36,
  sym_pointer = 37,
  sym_pointer_width = 38,
  sym__deregister = 39,
  sym__constant = 40,
  sym_float = 41,
  aux_sym_program_repeat1 = 42,
  aux_sym__normal_instruction_repeat1 = 43,
  aux_sym__gcc_pseudo_op_repeat1 = 44,
  aux_sym__deregister_repeat1 = 45,
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
  [sym_hexadecimal] = "hexadecimal",
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
  [sym_hexadecimal] = sym_hexadecimal,
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
  [sym_hexadecimal] = {
    .visible = true,
    .named = true,
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
  [28] = 22,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(68);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(72);
      if (lookahead == '*') ADVANCE(111);
      if (lookahead == '+') ADVANCE(110);
      if (lookahead == ',') ADVANCE(73);
      if (lookahead == '-') ADVANCE(109);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '0') ADVANCE(51);
      if (lookahead == 'B') ADVANCE(32);
      if (lookahead == 'D') ADVANCE(28);
      if (lookahead == 'P') ADVANCE(25);
      if (lookahead == 'Q') ADVANCE(29);
      if (lookahead == 'W') ADVANCE(18);
      if (lookahead == '[') ADVANCE(108);
      if (lookahead == ']') ADVANCE(112);
      if (lookahead == 'b') ADVANCE(53);
      if (lookahead == 'd') ADVANCE(48);
      if (lookahead == 'p') ADVANCE(45);
      if (lookahead == 'q') ADVANCE(49);
      if (lookahead == 'w') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(71);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(71);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == '.') ADVANCE(56);
      if (lookahead == '0') ADVANCE(141);
      if (lookahead == 'B') ADVANCE(31);
      if (lookahead == 'D') ADVANCE(27);
      if (lookahead == 'Q') ADVANCE(30);
      if (lookahead == 'W') ADVANCE(17);
      if (lookahead == '[') ADVANCE(108);
      if (lookahead == 'b') ADVANCE(52);
      if (lookahead == 'd') ADVANCE(47);
      if (lookahead == 'q') ADVANCE(50);
      if (lookahead == 'w') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '.') ADVANCE(59);
      if (lookahead == '0') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(144);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(72);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(71);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 10:
      if (lookahead == '0') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == 'D') ADVANCE(96);
      END_STATE();
    case 14:
      if (lookahead == 'D') ADVANCE(92);
      END_STATE();
    case 15:
      if (lookahead == 'D') ADVANCE(94);
      END_STATE();
    case 16:
      if (lookahead == 'E') ADVANCE(90);
      END_STATE();
    case 17:
      if (lookahead == 'O') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 18:
      if (lookahead == 'O') ADVANCE(22);
      END_STATE();
    case 19:
      if (lookahead == 'O') ADVANCE(23);
      END_STATE();
    case 20:
      if (lookahead == 'O') ADVANCE(24);
      END_STATE();
    case 21:
      if (lookahead == 'R') ADVANCE(106);
      END_STATE();
    case 22:
      if (lookahead == 'R') ADVANCE(13);
      END_STATE();
    case 23:
      if (lookahead == 'R') ADVANCE(14);
      END_STATE();
    case 24:
      if (lookahead == 'R') ADVANCE(15);
      END_STATE();
    case 25:
      if (lookahead == 'T') ADVANCE(21);
      END_STATE();
    case 26:
      if (lookahead == 'T') ADVANCE(16);
      END_STATE();
    case 27:
      if (lookahead == 'W') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 28:
      if (lookahead == 'W') ADVANCE(19);
      END_STATE();
    case 29:
      if (lookahead == 'W') ADVANCE(20);
      END_STATE();
    case 30:
      if (lookahead == 'W') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 31:
      if (lookahead == 'Y') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 32:
      if (lookahead == 'Y') ADVANCE(26);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(104);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(100);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(102);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 37:
      if (lookahead == 'o') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 38:
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 39:
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 40:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 41:
      if (lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 42:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 43:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 44:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 47:
      if (lookahead == 'w') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 48:
      if (lookahead == 'w') ADVANCE(39);
      END_STATE();
    case 49:
      if (lookahead == 'w') ADVANCE(40);
      END_STATE();
    case 50:
      if (lookahead == 'w') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 51:
      if (lookahead == 'x') ADVANCE(60);
      END_STATE();
    case 52:
      if (lookahead == 'y') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 53:
      if (lookahead == 'y') ADVANCE(46);
      END_STATE();
    case 54:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 55:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(113);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 62:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 63:
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 64:
      if (eof) ADVANCE(68);
      if (lookahead == '\n') SKIP(64)
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(71);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 65:
      if (eof) ADVANCE(68);
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == ',') ADVANCE(73);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == '.') ADVANCE(56);
      if (lookahead == '0') ADVANCE(141);
      if (lookahead == 'B') ADVANCE(31);
      if (lookahead == 'D') ADVANCE(27);
      if (lookahead == 'Q') ADVANCE(30);
      if (lookahead == 'W') ADVANCE(17);
      if (lookahead == '[') ADVANCE(108);
      if (lookahead == 'b') ADVANCE(52);
      if (lookahead == 'd') ADVANCE(47);
      if (lookahead == 'q') ADVANCE(50);
      if (lookahead == 'w') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(65)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 66:
      if (eof) ADVANCE(68);
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '.') ADVANCE(59);
      if (lookahead == '0') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(66)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 67:
      if (eof) ADVANCE(68);
      if (lookahead == '\n') ADVANCE(70);
      if (lookahead == ' ') ADVANCE(74);
      if (lookahead == ',') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(67)
      END_STATE();
    case 68:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(70);
      if (lookahead == ' ') ADVANCE(74);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == ':') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(70);
      if (lookahead == ' ') ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+') ADVANCE(57);
      if (lookahead == '-') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+') ADVANCE(58);
      if (lookahead == '-') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(81);
      if (lookahead == '_') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(85);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_gcc_mnemonic);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_gcc_mnemonic);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_mnemonic);
      if (lookahead == ':') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_BYTE);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_BYTE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_DWORD);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_DWORD);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_QWORD);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_QWORD);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_WORD);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_WORD);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_byte);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_byte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_dword);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_dword);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_qword);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_qword);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_word);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_PTR);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_ptr);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_hexadecimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'D') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'D') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'D') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'E') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'O') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'O') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'R') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'R') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'R') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'T') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'd') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'd') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'd') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'e') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'o') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'o') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'r') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'r') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'r') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 't') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == '.') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == 'e') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == '.') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == 'e') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(139);
      if (lookahead == '_') ADVANCE(143);
      if (lookahead == 'x') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(139);
      if (lookahead == '_') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 64},
  [2] = {.lex_state = 65},
  [3] = {.lex_state = 65},
  [4] = {.lex_state = 65},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 66},
  [7] = {.lex_state = 66},
  [8] = {.lex_state = 64},
  [9] = {.lex_state = 64},
  [10] = {.lex_state = 66},
  [11] = {.lex_state = 64},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 67},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 67},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 67},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 65},
  [22] = {.lex_state = 67},
  [23] = {.lex_state = 65},
  [24] = {.lex_state = 67},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 65},
  [27] = {.lex_state = 65},
  [28] = {.lex_state = 65},
  [29] = {.lex_state = 65},
  [30] = {.lex_state = 65},
  [31] = {.lex_state = 65},
  [32] = {.lex_state = 65},
  [33] = {.lex_state = 65},
  [34] = {.lex_state = 65},
  [35] = {.lex_state = 65},
  [36] = {.lex_state = 65},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 65},
  [39] = {.lex_state = 65},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 10},
  [42] = {.lex_state = 10},
  [43] = {.lex_state = 65},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 65},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
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
    [sym_hexadecimal] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(47),
    [sym__statement] = STATE(31),
    [sym_instruction] = STATE(31),
    [sym__normal_instruction] = STATE(43),
    [sym__gcc_pseudo_op] = STATE(43),
    [sym_label] = STATE(31),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [aux_sym_label_token1] = ACTIONS(7),
    [sym_gcc_mnemonic] = ACTIONS(9),
    [sym_mnemonic] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      sym_integer,
    STATE(35), 1,
      sym__deregister,
    STATE(37), 1,
      sym_pointer_width,
    ACTIONS(13), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(21), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(19), 3,
      sym_hexadecimal,
      sym_register,
      sym_string,
    STATE(38), 4,
      sym__operand,
      sym_pointer,
      sym__constant,
      sym_float,
    ACTIONS(15), 8,
      anon_sym_BYTE,
      anon_sym_DWORD,
      anon_sym_QWORD,
      anon_sym_WORD,
      anon_sym_byte,
      anon_sym_dword,
      anon_sym_qword,
      anon_sym_word,
  [42] = 9,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      sym_integer,
    STATE(35), 1,
      sym__deregister,
    STATE(37), 1,
      sym_pointer_width,
    ACTIONS(21), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(25), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(19), 3,
      sym_hexadecimal,
      sym_register,
      sym_string,
    STATE(38), 4,
      sym__operand,
      sym_pointer,
      sym__constant,
      sym_float,
    ACTIONS(15), 8,
      anon_sym_BYTE,
      anon_sym_DWORD,
      anon_sym_QWORD,
      anon_sym_WORD,
      anon_sym_byte,
      anon_sym_dword,
      anon_sym_qword,
      anon_sym_word,
  [84] = 9,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      sym_integer,
    STATE(35), 1,
      sym__deregister,
    STATE(37), 1,
      sym_pointer_width,
    ACTIONS(21), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(27), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(29), 3,
      sym_hexadecimal,
      sym_register,
      sym_string,
    STATE(26), 4,
      sym__operand,
      sym_pointer,
      sym__constant,
      sym_float,
    ACTIONS(15), 8,
      anon_sym_BYTE,
      anon_sym_DWORD,
      anon_sym_QWORD,
      anon_sym_WORD,
      anon_sym_byte,
      anon_sym_dword,
      anon_sym_qword,
      anon_sym_word,
  [126] = 10,
    ACTIONS(19), 1,
      sym_register,
    ACTIONS(21), 1,
      aux_sym_float_token2,
    ACTIONS(23), 1,
      sym_integer,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      aux_sym_float_token1,
    STATE(35), 1,
      sym__deregister,
    STATE(37), 1,
      sym_pointer_width,
    ACTIONS(33), 2,
      sym_hexadecimal,
      sym_string,
    STATE(38), 4,
      sym__operand,
      sym_pointer,
      sym__constant,
      sym_float,
    ACTIONS(15), 8,
      anon_sym_BYTE,
      anon_sym_DWORD,
      anon_sym_QWORD,
      anon_sym_WORD,
      anon_sym_byte,
      anon_sym_dword,
      anon_sym_qword,
      anon_sym_word,
  [168] = 4,
    ACTIONS(37), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(41), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    STATE(24), 2,
      sym__constant,
      sym_float,
    ACTIONS(39), 4,
      sym_identifier,
      sym_hexadecimal,
      sym_integer,
      sym_string,
  [187] = 4,
    ACTIONS(41), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(43), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(14), 2,
      sym__constant,
      sym_float,
    ACTIONS(45), 4,
      sym_identifier,
      sym_hexadecimal,
      sym_integer,
      sym_string,
  [206] = 7,
    ACTIONS(7), 1,
      aux_sym_label_token1,
    ACTIONS(9), 1,
      sym_gcc_mnemonic,
    ACTIONS(11), 1,
      sym_mnemonic,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(49), 1,
      sym_comment,
    STATE(43), 2,
      sym__normal_instruction,
      sym__gcc_pseudo_op,
    STATE(45), 3,
      sym__statement,
      sym_instruction,
      sym_label,
  [231] = 7,
    ACTIONS(7), 1,
      aux_sym_label_token1,
    ACTIONS(9), 1,
      sym_gcc_mnemonic,
    ACTIONS(11), 1,
      sym_mnemonic,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    STATE(43), 2,
      sym__normal_instruction,
      sym__gcc_pseudo_op,
    STATE(45), 3,
      sym__statement,
      sym_instruction,
      sym_label,
  [256] = 4,
    ACTIONS(41), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(53), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(24), 2,
      sym__constant,
      sym_float,
    ACTIONS(39), 4,
      sym_identifier,
      sym_hexadecimal,
      sym_integer,
      sym_string,
  [275] = 6,
    ACTIONS(7), 1,
      aux_sym_label_token1,
    ACTIONS(9), 1,
      sym_gcc_mnemonic,
    ACTIONS(11), 1,
      sym_mnemonic,
    ACTIONS(49), 1,
      sym_comment,
    STATE(43), 2,
      sym__normal_instruction,
      sym__gcc_pseudo_op,
    STATE(45), 3,
      sym__statement,
      sym_instruction,
      sym_label,
  [297] = 4,
    ACTIONS(39), 2,
      sym_identifier,
      sym_integer,
    ACTIONS(41), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(55), 2,
      sym_hexadecimal,
      sym_string,
    STATE(24), 2,
      sym__constant,
      sym_float,
  [314] = 3,
    ACTIONS(60), 1,
      anon_sym_RBRACK,
    STATE(13), 1,
      aux_sym__deregister_repeat1,
    ACTIONS(57), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
  [326] = 4,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
    ACTIONS(64), 1,
      anon_sym_LF,
    STATE(19), 1,
      aux_sym__gcc_pseudo_op_repeat1,
    ACTIONS(66), 2,
      anon_sym_COMMA,
      anon_sym_,
  [340] = 3,
    ACTIONS(70), 1,
      anon_sym_RBRACK,
    STATE(20), 1,
      aux_sym__deregister_repeat1,
    ACTIONS(68), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
  [352] = 3,
    ACTIONS(70), 1,
      anon_sym_RBRACK,
    STATE(13), 1,
      aux_sym__deregister_repeat1,
    ACTIONS(68), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
  [364] = 4,
    ACTIONS(72), 1,
      ts_builtin_sym_end,
    ACTIONS(74), 1,
      anon_sym_LF,
    STATE(17), 1,
      aux_sym__gcc_pseudo_op_repeat1,
    ACTIONS(76), 2,
      anon_sym_COMMA,
      anon_sym_,
  [378] = 3,
    ACTIONS(79), 1,
      anon_sym_RBRACK,
    STATE(16), 1,
      aux_sym__deregister_repeat1,
    ACTIONS(68), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
  [390] = 4,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    ACTIONS(81), 1,
      anon_sym_LF,
    STATE(17), 1,
      aux_sym__gcc_pseudo_op_repeat1,
    ACTIONS(83), 2,
      anon_sym_COMMA,
      anon_sym_,
  [404] = 3,
    ACTIONS(85), 1,
      anon_sym_RBRACK,
    STATE(13), 1,
      aux_sym__deregister_repeat1,
    ACTIONS(68), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
  [416] = 3,
    ACTIONS(89), 1,
      anon_sym_COMMA,
    ACTIONS(91), 1,
      anon_sym_LBRACK,
    ACTIONS(87), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [427] = 2,
    ACTIONS(93), 1,
      ts_builtin_sym_end,
    ACTIONS(95), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [436] = 3,
    ACTIONS(97), 1,
      anon_sym_COMMA,
    STATE(27), 1,
      aux_sym__normal_instruction_repeat1,
    ACTIONS(25), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [447] = 2,
    ACTIONS(72), 1,
      ts_builtin_sym_end,
    ACTIONS(74), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [456] = 1,
    ACTIONS(60), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_RBRACK,
  [463] = 3,
    ACTIONS(101), 1,
      anon_sym_COMMA,
    STATE(23), 1,
      aux_sym__normal_instruction_repeat1,
    ACTIONS(99), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [474] = 3,
    ACTIONS(105), 1,
      anon_sym_COMMA,
    STATE(27), 1,
      aux_sym__normal_instruction_repeat1,
    ACTIONS(103), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [485] = 2,
    ACTIONS(95), 1,
      anon_sym_COMMA,
    ACTIONS(93), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [493] = 2,
    ACTIONS(110), 1,
      anon_sym_COMMA,
    ACTIONS(108), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [501] = 2,
    ACTIONS(114), 1,
      anon_sym_COMMA,
    ACTIONS(112), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [509] = 3,
    ACTIONS(116), 1,
      ts_builtin_sym_end,
    ACTIONS(118), 1,
      anon_sym_LF,
    STATE(34), 1,
      aux_sym_program_repeat1,
  [519] = 2,
    ACTIONS(122), 1,
      anon_sym_COMMA,
    ACTIONS(120), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [527] = 3,
    ACTIONS(124), 1,
      ts_builtin_sym_end,
    ACTIONS(126), 1,
      anon_sym_LF,
    STATE(33), 1,
      aux_sym_program_repeat1,
  [537] = 3,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(129), 1,
      anon_sym_LF,
    STATE(33), 1,
      aux_sym_program_repeat1,
  [547] = 2,
    ACTIONS(133), 1,
      anon_sym_COMMA,
    ACTIONS(131), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [555] = 2,
    ACTIONS(137), 1,
      anon_sym_COMMA,
    ACTIONS(135), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [563] = 3,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(139), 1,
      sym_integer,
    STATE(30), 1,
      sym__deregister,
  [573] = 2,
    ACTIONS(141), 1,
      anon_sym_COMMA,
    ACTIONS(103), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [581] = 1,
    ACTIONS(143), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [586] = 1,
    ACTIONS(145), 2,
      anon_sym_PTR,
      anon_sym_ptr,
  [591] = 1,
    ACTIONS(147), 2,
      sym_hexadecimal,
      sym_register,
  [596] = 1,
    ACTIONS(149), 2,
      sym_hexadecimal,
      sym_register,
  [601] = 1,
    ACTIONS(151), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [606] = 1,
    ACTIONS(153), 2,
      anon_sym_LBRACK,
      sym_integer,
  [611] = 1,
    ACTIONS(124), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [616] = 1,
    ACTIONS(155), 1,
      sym_integer,
  [620] = 1,
    ACTIONS(157), 1,
      ts_builtin_sym_end,
  [624] = 1,
    ACTIONS(159), 1,
      anon_sym_LBRACK,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 42,
  [SMALL_STATE(4)] = 84,
  [SMALL_STATE(5)] = 126,
  [SMALL_STATE(6)] = 168,
  [SMALL_STATE(7)] = 187,
  [SMALL_STATE(8)] = 206,
  [SMALL_STATE(9)] = 231,
  [SMALL_STATE(10)] = 256,
  [SMALL_STATE(11)] = 275,
  [SMALL_STATE(12)] = 297,
  [SMALL_STATE(13)] = 314,
  [SMALL_STATE(14)] = 326,
  [SMALL_STATE(15)] = 340,
  [SMALL_STATE(16)] = 352,
  [SMALL_STATE(17)] = 364,
  [SMALL_STATE(18)] = 378,
  [SMALL_STATE(19)] = 390,
  [SMALL_STATE(20)] = 404,
  [SMALL_STATE(21)] = 416,
  [SMALL_STATE(22)] = 427,
  [SMALL_STATE(23)] = 436,
  [SMALL_STATE(24)] = 447,
  [SMALL_STATE(25)] = 456,
  [SMALL_STATE(26)] = 463,
  [SMALL_STATE(27)] = 474,
  [SMALL_STATE(28)] = 485,
  [SMALL_STATE(29)] = 493,
  [SMALL_STATE(30)] = 501,
  [SMALL_STATE(31)] = 509,
  [SMALL_STATE(32)] = 519,
  [SMALL_STATE(33)] = 527,
  [SMALL_STATE(34)] = 537,
  [SMALL_STATE(35)] = 547,
  [SMALL_STATE(36)] = 555,
  [SMALL_STATE(37)] = 563,
  [SMALL_STATE(38)] = 573,
  [SMALL_STATE(39)] = 581,
  [SMALL_STATE(40)] = 586,
  [SMALL_STATE(41)] = 591,
  [SMALL_STATE(42)] = 596,
  [SMALL_STATE(43)] = 601,
  [SMALL_STATE(44)] = 606,
  [SMALL_STATE(45)] = 611,
  [SMALL_STATE(46)] = 616,
  [SMALL_STATE(47)] = 620,
  [SMALL_STATE(48)] = 624,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__normal_instruction, 4),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__normal_instruction, 3),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__normal_instruction, 1),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gcc_pseudo_op, 4),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gcc_pseudo_op, 1),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gcc_pseudo_op, 3),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__deregister_repeat1, 2), SHIFT_REPEAT(46),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__deregister_repeat1, 2),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gcc_pseudo_op, 2),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__gcc_pseudo_op, 2),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__gcc_pseudo_op_repeat1, 2),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__gcc_pseudo_op_repeat1, 2),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__gcc_pseudo_op_repeat1, 2), SHIFT_REPEAT(12),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__gcc_pseudo_op, 3),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant, 1),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__constant, 1),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 1),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__normal_instruction, 2),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__normal_instruction_repeat1, 2),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat1, 2), SHIFT_REPEAT(5),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__deregister, 5),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__deregister, 5),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer, 2),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pointer, 2),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__deregister, 4),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__deregister, 4),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(11),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer, 1),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pointer, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__deregister, 3),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__deregister, 3),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat1, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_width, 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [157] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
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
