#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 46
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 44
#define ALIAS_COUNT 0
#define TOKEN_COUNT 29
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
  anon_sym_LBRACK = 18,
  anon_sym_DASH = 19,
  anon_sym_PLUS = 20,
  anon_sym_STAR = 21,
  anon_sym_RBRACK = 22,
  sym_memory = 23,
  sym_register = 24,
  aux_sym_float_token1 = 25,
  aux_sym_float_token2 = 26,
  sym_integer = 27,
  sym_string = 28,
  sym_program = 29,
  sym__statement = 30,
  sym_instruction = 31,
  sym__normal_instruction = 32,
  sym__gcc_pseudo_op = 33,
  sym_label = 34,
  sym__operand = 35,
  sym_pointer = 36,
  sym__deregister = 37,
  sym__constant = 38,
  sym_float = 39,
  aux_sym_program_repeat1 = 40,
  aux_sym__normal_instruction_repeat1 = 41,
  aux_sym__gcc_pseudo_op_repeat1 = 42,
  aux_sym__deregister_repeat1 = 43,
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
  [anon_sym_LBRACK] = "[",
  [anon_sym_DASH] = "-",
  [anon_sym_PLUS] = "+",
  [anon_sym_STAR] = "*",
  [anon_sym_RBRACK] = "]",
  [sym_memory] = "memory",
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
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_memory] = sym_memory,
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
  [sym_memory] = {
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
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 24,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(67);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(71);
      if (lookahead == '*') ADVANCE(112);
      if (lookahead == '+') ADVANCE(111);
      if (lookahead == ',') ADVANCE(72);
      if (lookahead == '-') ADVANCE(110);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '0') ADVANCE(49);
      if (lookahead == 'B') ADVANCE(32);
      if (lookahead == 'D') ADVANCE(28);
      if (lookahead == 'P') ADVANCE(25);
      if (lookahead == 'Q') ADVANCE(29);
      if (lookahead == 'W') ADVANCE(18);
      if (lookahead == '[') ADVANCE(109);
      if (lookahead == ']') ADVANCE(113);
      if (lookahead == 'b') ADVANCE(50);
      if (lookahead == 'd') ADVANCE(46);
      if (lookahead == 'q') ADVANCE(48);
      if (lookahead == 'w') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(70);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(70);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == '0') ADVANCE(142);
      if (lookahead == 'B') ADVANCE(31);
      if (lookahead == 'D') ADVANCE(27);
      if (lookahead == 'Q') ADVANCE(30);
      if (lookahead == 'W') ADVANCE(17);
      if (lookahead == '[') ADVANCE(109);
      if (lookahead == 'b') ADVANCE(51);
      if (lookahead == 'd') ADVANCE(45);
      if (lookahead == 'q') ADVANCE(47);
      if (lookahead == 'w') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == '0') ADVANCE(142);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(143);
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(146);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == '0') ADVANCE(142);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(143);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(82);
      if (lookahead == '0') ADVANCE(78);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(71);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(70);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 10:
      if (lookahead == '0') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == 'D') ADVANCE(98);
      END_STATE();
    case 14:
      if (lookahead == 'D') ADVANCE(94);
      END_STATE();
    case 15:
      if (lookahead == 'D') ADVANCE(96);
      END_STATE();
    case 16:
      if (lookahead == 'E') ADVANCE(92);
      END_STATE();
    case 17:
      if (lookahead == 'O') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
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
      if (lookahead == 'R') ADVANCE(108);
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
      if (lookahead == 'W') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 28:
      if (lookahead == 'W') ADVANCE(19);
      END_STATE();
    case 29:
      if (lookahead == 'W') ADVANCE(20);
      END_STATE();
    case 30:
      if (lookahead == 'W') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 31:
      if (lookahead == 'Y') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 32:
      if (lookahead == 'Y') ADVANCE(26);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(106);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(102);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(104);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 37:
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 38:
      if (lookahead == 'o') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 39:
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 40:
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 41:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 42:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 43:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 45:
      if (lookahead == 'w') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 46:
      if (lookahead == 'w') ADVANCE(39);
      END_STATE();
    case 47:
      if (lookahead == 'w') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 48:
      if (lookahead == 'w') ADVANCE(40);
      END_STATE();
    case 49:
      if (lookahead == 'x') ADVANCE(59);
      END_STATE();
    case 50:
      if (lookahead == 'y') ADVANCE(44);
      END_STATE();
    case 51:
      if (lookahead == 'y') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 52:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      END_STATE();
    case 53:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(145);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 61:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 62:
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 63:
      if (eof) ADVANCE(67);
      if (lookahead == '\n') SKIP(63)
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(70);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 64:
      if (eof) ADVANCE(67);
      if (lookahead == '\n') ADVANCE(68);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == ',') ADVANCE(72);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == '0') ADVANCE(142);
      if (lookahead == 'B') ADVANCE(31);
      if (lookahead == 'D') ADVANCE(27);
      if (lookahead == 'Q') ADVANCE(30);
      if (lookahead == 'W') ADVANCE(17);
      if (lookahead == 'b') ADVANCE(51);
      if (lookahead == 'd') ADVANCE(45);
      if (lookahead == 'q') ADVANCE(47);
      if (lookahead == 'w') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(64)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 65:
      if (eof) ADVANCE(67);
      if (lookahead == '\n') ADVANCE(68);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == '0') ADVANCE(142);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(65)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(143);
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 66:
      if (eof) ADVANCE(67);
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == ' ') ADVANCE(73);
      if (lookahead == ',') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(66)
      END_STATE();
    case 67:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == ' ') ADVANCE(73);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == ':') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == ' ') ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+') ADVANCE(55);
      if (lookahead == '-') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+') ADVANCE(56);
      if (lookahead == '-') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(81);
      if (lookahead == '_') ADVANCE(85);
      if (lookahead == 'x') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(87);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(87);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_gcc_mnemonic);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_gcc_mnemonic);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_mnemonic);
      if (lookahead == ':') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_BYTE);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_BYTE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_DWORD);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_DWORD);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_QWORD);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_QWORD);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_WORD);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_WORD);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_byte);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_byte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_dword);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_dword);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_qword);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_qword);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_word);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_PTR);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_memory);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'D') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'D') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'D') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'E') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'O') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'O') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'R') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'R') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'R') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'T') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'd') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'd') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'd') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'e') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'o') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'o') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'r') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'r') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'r') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 't') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == '.') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == 'e') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == '.') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == 'e') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(140);
      if (lookahead == '_') ADVANCE(144);
      if (lookahead == 'x') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(140);
      if (lookahead == '_') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(145);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 63},
  [2] = {.lex_state = 64},
  [3] = {.lex_state = 64},
  [4] = {.lex_state = 64},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 63},
  [7] = {.lex_state = 63},
  [8] = {.lex_state = 65},
  [9] = {.lex_state = 63},
  [10] = {.lex_state = 65},
  [11] = {.lex_state = 65},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 66},
  [16] = {.lex_state = 66},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 66},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 64},
  [22] = {.lex_state = 64},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 66},
  [25] = {.lex_state = 66},
  [26] = {.lex_state = 64},
  [27] = {.lex_state = 64},
  [28] = {.lex_state = 64},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 64},
  [31] = {.lex_state = 64},
  [32] = {.lex_state = 64},
  [33] = {.lex_state = 64},
  [34] = {.lex_state = 64},
  [35] = {.lex_state = 64},
  [36] = {.lex_state = 64},
  [37] = {.lex_state = 10},
  [38] = {.lex_state = 64},
  [39] = {.lex_state = 10},
  [40] = {.lex_state = 64},
  [41] = {.lex_state = 64},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 0},
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
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_memory] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(45),
    [sym__statement] = STATE(34),
    [sym_instruction] = STATE(34),
    [sym__normal_instruction] = STATE(41),
    [sym__gcc_pseudo_op] = STATE(41),
    [sym_label] = STATE(34),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [aux_sym_label_token1] = ACTIONS(7),
    [sym_gcc_mnemonic] = ACTIONS(9),
    [sym_mnemonic] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(13), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(19), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(17), 3,
      sym_register,
      sym_integer,
      sym_string,
    STATE(21), 4,
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
  [30] = 5,
    ACTIONS(19), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(21), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(23), 3,
      sym_register,
      sym_integer,
      sym_string,
    STATE(27), 4,
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
  [60] = 5,
    ACTIONS(19), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(25), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(23), 3,
      sym_register,
      sym_integer,
      sym_string,
    STATE(27), 4,
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
  [90] = 6,
    ACTIONS(19), 1,
      aux_sym_float_token2,
    ACTIONS(27), 1,
      aux_sym_float_token1,
    ACTIONS(29), 1,
      sym_string,
    ACTIONS(23), 2,
      sym_register,
      sym_integer,
    STATE(27), 4,
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
  [120] = 7,
    ACTIONS(7), 1,
      aux_sym_label_token1,
    ACTIONS(9), 1,
      sym_gcc_mnemonic,
    ACTIONS(11), 1,
      sym_mnemonic,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 1,
      sym_comment,
    STATE(41), 2,
      sym__normal_instruction,
      sym__gcc_pseudo_op,
    STATE(38), 3,
      sym__statement,
      sym_instruction,
      sym_label,
  [145] = 7,
    ACTIONS(7), 1,
      aux_sym_label_token1,
    ACTIONS(9), 1,
      sym_gcc_mnemonic,
    ACTIONS(11), 1,
      sym_mnemonic,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    STATE(41), 2,
      sym__normal_instruction,
      sym__gcc_pseudo_op,
    STATE(38), 3,
      sym__statement,
      sym_instruction,
      sym_label,
  [170] = 4,
    ACTIONS(37), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(41), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    STATE(16), 2,
      sym__constant,
      sym_float,
    ACTIONS(39), 3,
      sym_identifier,
      sym_integer,
      sym_string,
  [188] = 6,
    ACTIONS(7), 1,
      aux_sym_label_token1,
    ACTIONS(9), 1,
      sym_gcc_mnemonic,
    ACTIONS(11), 1,
      sym_mnemonic,
    ACTIONS(33), 1,
      sym_comment,
    STATE(41), 2,
      sym__normal_instruction,
      sym__gcc_pseudo_op,
    STATE(38), 3,
      sym__statement,
      sym_instruction,
      sym_label,
  [210] = 4,
    ACTIONS(41), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(43), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(25), 2,
      sym__constant,
      sym_float,
    ACTIONS(45), 3,
      sym_identifier,
      sym_integer,
      sym_string,
  [228] = 4,
    ACTIONS(41), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(47), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(25), 2,
      sym__constant,
      sym_float,
    ACTIONS(45), 3,
      sym_identifier,
      sym_integer,
      sym_string,
  [246] = 4,
    ACTIONS(49), 1,
      sym_string,
    ACTIONS(41), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(45), 2,
      sym_identifier,
      sym_integer,
    STATE(25), 2,
      sym__constant,
      sym_float,
  [262] = 3,
    ACTIONS(53), 1,
      anon_sym_RBRACK,
    STATE(17), 1,
      aux_sym__deregister_repeat1,
    ACTIONS(51), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
  [274] = 3,
    ACTIONS(55), 1,
      anon_sym_RBRACK,
    STATE(20), 1,
      aux_sym__deregister_repeat1,
    ACTIONS(51), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
  [286] = 4,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(57), 1,
      anon_sym_LF,
    STATE(19), 1,
      aux_sym__gcc_pseudo_op_repeat1,
    ACTIONS(59), 2,
      anon_sym_COMMA,
      anon_sym_,
  [300] = 4,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    ACTIONS(63), 1,
      anon_sym_LF,
    STATE(15), 1,
      aux_sym__gcc_pseudo_op_repeat1,
    ACTIONS(65), 2,
      anon_sym_COMMA,
      anon_sym_,
  [314] = 3,
    ACTIONS(67), 1,
      anon_sym_RBRACK,
    STATE(20), 1,
      aux_sym__deregister_repeat1,
    ACTIONS(51), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
  [326] = 3,
    ACTIONS(67), 1,
      anon_sym_RBRACK,
    STATE(14), 1,
      aux_sym__deregister_repeat1,
    ACTIONS(51), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
  [338] = 4,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    ACTIONS(71), 1,
      anon_sym_LF,
    STATE(19), 1,
      aux_sym__gcc_pseudo_op_repeat1,
    ACTIONS(73), 2,
      anon_sym_COMMA,
      anon_sym_,
  [352] = 3,
    ACTIONS(79), 1,
      anon_sym_RBRACK,
    STATE(20), 1,
      aux_sym__deregister_repeat1,
    ACTIONS(76), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
  [364] = 3,
    ACTIONS(83), 1,
      anon_sym_COMMA,
    STATE(26), 1,
      aux_sym__normal_instruction_repeat1,
    ACTIONS(81), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [375] = 3,
    ACTIONS(87), 1,
      anon_sym_COMMA,
    STATE(22), 1,
      aux_sym__normal_instruction_repeat1,
    ACTIONS(85), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [386] = 1,
    ACTIONS(79), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_RBRACK,
  [393] = 2,
    ACTIONS(90), 1,
      ts_builtin_sym_end,
    ACTIONS(92), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [402] = 2,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    ACTIONS(71), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [411] = 3,
    ACTIONS(94), 1,
      anon_sym_COMMA,
    STATE(22), 1,
      aux_sym__normal_instruction_repeat1,
    ACTIONS(25), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [422] = 2,
    ACTIONS(96), 1,
      anon_sym_COMMA,
    ACTIONS(85), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [430] = 2,
    ACTIONS(100), 1,
      anon_sym_COMMA,
    ACTIONS(98), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [438] = 3,
    ACTIONS(102), 1,
      anon_sym_LBRACK,
    ACTIONS(104), 1,
      sym_integer,
    STATE(28), 1,
      sym__deregister,
  [448] = 3,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(106), 1,
      anon_sym_LF,
    STATE(32), 1,
      aux_sym_program_repeat1,
  [458] = 2,
    ACTIONS(110), 1,
      anon_sym_COMMA,
    ACTIONS(108), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [466] = 3,
    ACTIONS(112), 1,
      ts_builtin_sym_end,
    ACTIONS(114), 1,
      anon_sym_LF,
    STATE(32), 1,
      aux_sym_program_repeat1,
  [476] = 2,
    ACTIONS(119), 1,
      anon_sym_COMMA,
    ACTIONS(117), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [484] = 3,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(123), 1,
      anon_sym_LF,
    STATE(30), 1,
      aux_sym_program_repeat1,
  [494] = 2,
    ACTIONS(127), 1,
      anon_sym_COMMA,
    ACTIONS(125), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [502] = 2,
    ACTIONS(92), 1,
      anon_sym_COMMA,
    ACTIONS(90), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [510] = 1,
    ACTIONS(129), 2,
      sym_memory,
      sym_register,
  [515] = 1,
    ACTIONS(112), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [520] = 1,
    ACTIONS(131), 2,
      sym_memory,
      sym_register,
  [525] = 1,
    ACTIONS(133), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [530] = 1,
    ACTIONS(135), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [535] = 1,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
  [539] = 1,
    ACTIONS(139), 1,
      anon_sym_PTR,
  [543] = 1,
    ACTIONS(141), 1,
      sym_integer,
  [547] = 1,
    ACTIONS(143), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 30,
  [SMALL_STATE(4)] = 60,
  [SMALL_STATE(5)] = 90,
  [SMALL_STATE(6)] = 120,
  [SMALL_STATE(7)] = 145,
  [SMALL_STATE(8)] = 170,
  [SMALL_STATE(9)] = 188,
  [SMALL_STATE(10)] = 210,
  [SMALL_STATE(11)] = 228,
  [SMALL_STATE(12)] = 246,
  [SMALL_STATE(13)] = 262,
  [SMALL_STATE(14)] = 274,
  [SMALL_STATE(15)] = 286,
  [SMALL_STATE(16)] = 300,
  [SMALL_STATE(17)] = 314,
  [SMALL_STATE(18)] = 326,
  [SMALL_STATE(19)] = 338,
  [SMALL_STATE(20)] = 352,
  [SMALL_STATE(21)] = 364,
  [SMALL_STATE(22)] = 375,
  [SMALL_STATE(23)] = 386,
  [SMALL_STATE(24)] = 393,
  [SMALL_STATE(25)] = 402,
  [SMALL_STATE(26)] = 411,
  [SMALL_STATE(27)] = 422,
  [SMALL_STATE(28)] = 430,
  [SMALL_STATE(29)] = 438,
  [SMALL_STATE(30)] = 448,
  [SMALL_STATE(31)] = 458,
  [SMALL_STATE(32)] = 466,
  [SMALL_STATE(33)] = 476,
  [SMALL_STATE(34)] = 484,
  [SMALL_STATE(35)] = 494,
  [SMALL_STATE(36)] = 502,
  [SMALL_STATE(37)] = 510,
  [SMALL_STATE(38)] = 515,
  [SMALL_STATE(39)] = 520,
  [SMALL_STATE(40)] = 525,
  [SMALL_STATE(41)] = 530,
  [SMALL_STATE(42)] = 535,
  [SMALL_STATE(43)] = 539,
  [SMALL_STATE(44)] = 543,
  [SMALL_STATE(45)] = 547,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__normal_instruction, 1),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__normal_instruction, 4),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__normal_instruction, 3),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gcc_pseudo_op, 1),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gcc_pseudo_op, 3),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gcc_pseudo_op, 4),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__gcc_pseudo_op, 3),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gcc_pseudo_op, 2),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__gcc_pseudo_op, 2),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__gcc_pseudo_op_repeat1, 2),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__gcc_pseudo_op_repeat1, 2),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__gcc_pseudo_op_repeat1, 2), SHIFT_REPEAT(12),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__deregister_repeat1, 2), SHIFT_REPEAT(44),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__deregister_repeat1, 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__normal_instruction, 2),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__normal_instruction_repeat1, 2),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat1, 2), SHIFT_REPEAT(5),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 1),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat1, 2),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer, 3),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pointer, 3),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__deregister, 3),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__deregister, 3),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(9),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__deregister, 4),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__deregister, 4),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__deregister, 5),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__deregister, 5),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [143] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
