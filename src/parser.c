#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 37
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 37
#define ALIAS_COUNT 0
#define TOKEN_COUNT 25
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LF = 1,
  anon_sym_POUND = 2,
  aux_sym_comment_token1 = 3,
  anon_sym_COMMA = 4,
  sym_mnemonic = 5,
  anon_sym_BYTE = 6,
  anon_sym_DWORD = 7,
  anon_sym_QWORD = 8,
  anon_sym_WORD = 9,
  anon_sym_byte = 10,
  anon_sym_dword = 11,
  anon_sym_qword = 12,
  anon_sym_word = 13,
  anon_sym_PTR = 14,
  anon_sym_LBRACK = 15,
  anon_sym_DASH = 16,
  anon_sym_PLUS = 17,
  anon_sym_STAR = 18,
  anon_sym_RBRACK = 19,
  sym_memory = 20,
  sym_register = 21,
  aux_sym_float_token1 = 22,
  aux_sym_float_token2 = 23,
  sym_integer = 24,
  sym_program = 25,
  sym__statement = 26,
  sym_comment = 27,
  sym_instruction = 28,
  sym__operand = 29,
  sym_pointer = 30,
  sym__deregister = 31,
  sym__constant = 32,
  sym_float = 33,
  aux_sym_program_repeat1 = 34,
  aux_sym_instruction_repeat1 = 35,
  aux_sym__deregister_repeat1 = 36,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_POUND] = "#",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_COMMA] = ",",
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
  [sym_program] = "program",
  [sym__statement] = "_statement",
  [sym_comment] = "comment",
  [sym_instruction] = "instruction",
  [sym__operand] = "_operand",
  [sym_pointer] = "pointer",
  [sym__deregister] = "_deregister",
  [sym__constant] = "_constant",
  [sym_float] = "float",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_instruction_repeat1] = "instruction_repeat1",
  [aux_sym__deregister_repeat1] = "_deregister_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_COMMA] = anon_sym_COMMA,
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
  [sym_program] = sym_program,
  [sym__statement] = sym__statement,
  [sym_comment] = sym_comment,
  [sym_instruction] = sym_instruction,
  [sym__operand] = sym__operand,
  [sym_pointer] = sym_pointer,
  [sym__deregister] = sym__deregister,
  [sym__constant] = sym__constant,
  [sym_float] = sym_float,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_instruction_repeat1] = aux_sym_instruction_repeat1,
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
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
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
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_instruction] = {
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
  [aux_sym_instruction_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(60);
      if (lookahead == '#') ADVANCE(63);
      if (lookahead == '*') ADVANCE(88);
      if (lookahead == '+') ADVANCE(87);
      if (lookahead == ',') ADVANCE(66);
      if (lookahead == '-') ADVANCE(86);
      if (lookahead == 'B') ADVANCE(26);
      if (lookahead == 'D') ADVANCE(22);
      if (lookahead == 'P') ADVANCE(19);
      if (lookahead == 'Q') ADVANCE(23);
      if (lookahead == 'W') ADVANCE(12);
      if (lookahead == '[') ADVANCE(85);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == 'b') ADVANCE(44);
      if (lookahead == 'd') ADVANCE(40);
      if (lookahead == 'q') ADVANCE(42);
      if (lookahead == 'w') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == '0') ADVANCE(92);
      if (lookahead == 'B') ADVANCE(108);
      if (lookahead == 'D') ADVANCE(106);
      if (lookahead == 'Q') ADVANCE(107);
      if (lookahead == 'W') ADVANCE(99);
      if (lookahead == 'b') ADVANCE(124);
      if (lookahead == 'd') ADVANCE(121);
      if (lookahead == 'q') ADVANCE(122);
      if (lookahead == 'w') ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(56);
      END_STATE();
    case 2:
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == '0') ADVANCE(137);
      if (lookahead == 'B') ADVANCE(25);
      if (lookahead == 'D') ADVANCE(21);
      if (lookahead == 'Q') ADVANCE(24);
      if (lookahead == 'W') ADVANCE(11);
      if (lookahead == 'b') ADVANCE(45);
      if (lookahead == 'd') ADVANCE(39);
      if (lookahead == 'q') ADVANCE(41);
      if (lookahead == 'w') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (lookahead != 0) ADVANCE(56);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == '0') ADVANCE(92);
      if (lookahead == 'B') ADVANCE(108);
      if (lookahead == 'D') ADVANCE(106);
      if (lookahead == 'Q') ADVANCE(107);
      if (lookahead == 'W') ADVANCE(99);
      if (lookahead == 'b') ADVANCE(124);
      if (lookahead == 'd') ADVANCE(121);
      if (lookahead == 'q') ADVANCE(122);
      if (lookahead == 'w') ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(56);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == '0') ADVANCE(139);
      if (lookahead == '[') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == '0') ADVANCE(92);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 6:
      if (lookahead == '0') ADVANCE(139);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 7:
      if (lookahead == 'D') ADVANCE(74);
      END_STATE();
    case 8:
      if (lookahead == 'D') ADVANCE(70);
      END_STATE();
    case 9:
      if (lookahead == 'D') ADVANCE(72);
      END_STATE();
    case 10:
      if (lookahead == 'E') ADVANCE(68);
      END_STATE();
    case 11:
      if (lookahead == 'O') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 12:
      if (lookahead == 'O') ADVANCE(16);
      END_STATE();
    case 13:
      if (lookahead == 'O') ADVANCE(17);
      END_STATE();
    case 14:
      if (lookahead == 'O') ADVANCE(18);
      END_STATE();
    case 15:
      if (lookahead == 'R') ADVANCE(84);
      END_STATE();
    case 16:
      if (lookahead == 'R') ADVANCE(7);
      END_STATE();
    case 17:
      if (lookahead == 'R') ADVANCE(8);
      END_STATE();
    case 18:
      if (lookahead == 'R') ADVANCE(9);
      END_STATE();
    case 19:
      if (lookahead == 'T') ADVANCE(15);
      END_STATE();
    case 20:
      if (lookahead == 'T') ADVANCE(10);
      END_STATE();
    case 21:
      if (lookahead == 'W') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 22:
      if (lookahead == 'W') ADVANCE(13);
      END_STATE();
    case 23:
      if (lookahead == 'W') ADVANCE(14);
      END_STATE();
    case 24:
      if (lookahead == 'W') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 25:
      if (lookahead == 'Y') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 26:
      if (lookahead == 'Y') ADVANCE(20);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(82);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(78);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(80);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 31:
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 32:
      if (lookahead == 'o') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 33:
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 34:
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 35:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 36:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 37:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 39:
      if (lookahead == 'w') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 40:
      if (lookahead == 'w') ADVANCE(33);
      END_STATE();
    case 41:
      if (lookahead == 'w') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 42:
      if (lookahead == 'w') ADVANCE(34);
      END_STATE();
    case 43:
      if (lookahead == 'x') ADVANCE(50);
      END_STATE();
    case 44:
      if (lookahead == 'y') ADVANCE(38);
      END_STATE();
    case 45:
      if (lookahead == 'y') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 46:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      END_STATE();
    case 47:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 48:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      if (lookahead != 0) ADVANCE(56);
      END_STATE();
    case 49:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(56);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(141);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 57:
      if (eof) ADVANCE(60);
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == '0') ADVANCE(137);
      if (lookahead == 'B') ADVANCE(25);
      if (lookahead == 'D') ADVANCE(21);
      if (lookahead == 'Q') ADVANCE(24);
      if (lookahead == 'W') ADVANCE(11);
      if (lookahead == 'b') ADVANCE(45);
      if (lookahead == 'd') ADVANCE(39);
      if (lookahead == 'q') ADVANCE(41);
      if (lookahead == 'w') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (lookahead != 0) ADVANCE(56);
      END_STATE();
    case 58:
      if (eof) ADVANCE(60);
      if (lookahead == '\n') ADVANCE(62);
      if (lookahead == ',') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(58)
      END_STATE();
    case 59:
      if (eof) ADVANCE(60);
      if (lookahead == '#') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(59)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_mnemonic);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_BYTE);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_BYTE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_DWORD);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_DWORD);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_QWORD);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_QWORD);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_WORD);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_WORD);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_byte);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_byte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_dword);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_dword);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_qword);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_qword);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_word);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_PTR);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_memory);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_memory);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '.') ADVANCE(135);
      if (lookahead == '_') ADVANCE(127);
      if (lookahead == 'x') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '.') ADVANCE(135);
      if (lookahead == '_') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '.') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'D') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'D') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'D') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'E') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'O') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'O') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'O') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'R') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'R') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'R') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'T') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'W') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'W') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'Y') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'd') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'd') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'd') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'e') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'e') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'o') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'o') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'o') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'r') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'r') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'r') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 't') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'w') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'w') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'x') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'y') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(129);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(129);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == '.') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == 'e') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == '.') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == 'e') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(135);
      if (lookahead == '_') ADVANCE(140);
      if (lookahead == 'x') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(135);
      if (lookahead == '_') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'x') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(140);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(141);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 59},
  [2] = {.lex_state = 57},
  [3] = {.lex_state = 57},
  [4] = {.lex_state = 57},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 59},
  [7] = {.lex_state = 59},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 59},
  [14] = {.lex_state = 58},
  [15] = {.lex_state = 58},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 58},
  [18] = {.lex_state = 57},
  [19] = {.lex_state = 58},
  [20] = {.lex_state = 58},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 58},
  [23] = {.lex_state = 58},
  [24] = {.lex_state = 57},
  [25] = {.lex_state = 58},
  [26] = {.lex_state = 57},
  [27] = {.lex_state = 58},
  [28] = {.lex_state = 48},
  [29] = {.lex_state = 57},
  [30] = {.lex_state = 48},
  [31] = {.lex_state = 57},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 64},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
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
  },
  [1] = {
    [sym_program] = STATE(36),
    [sym__statement] = STATE(26),
    [sym_comment] = STATE(26),
    [sym_instruction] = STATE(26),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(5),
    [sym_mnemonic] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(9), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(13), 2,
      sym_register,
      sym_integer,
    ACTIONS(15), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    STATE(14), 4,
      sym__operand,
      sym_pointer,
      sym__constant,
      sym_float,
    ACTIONS(11), 8,
      anon_sym_BYTE,
      anon_sym_DWORD,
      anon_sym_QWORD,
      anon_sym_WORD,
      anon_sym_byte,
      anon_sym_dword,
      anon_sym_qword,
      anon_sym_word,
  [29] = 5,
    ACTIONS(15), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(17), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(19), 2,
      sym_register,
      sym_integer,
    STATE(20), 4,
      sym__operand,
      sym_pointer,
      sym__constant,
      sym_float,
    ACTIONS(11), 8,
      anon_sym_BYTE,
      anon_sym_DWORD,
      anon_sym_QWORD,
      anon_sym_WORD,
      anon_sym_byte,
      anon_sym_dword,
      anon_sym_qword,
      anon_sym_word,
  [58] = 5,
    ACTIONS(15), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(19), 2,
      sym_register,
      sym_integer,
    ACTIONS(21), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(20), 4,
      sym__operand,
      sym_pointer,
      sym__constant,
      sym_float,
    ACTIONS(11), 8,
      anon_sym_BYTE,
      anon_sym_DWORD,
      anon_sym_QWORD,
      anon_sym_WORD,
      anon_sym_byte,
      anon_sym_dword,
      anon_sym_qword,
      anon_sym_word,
  [87] = 4,
    ACTIONS(15), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(19), 2,
      sym_register,
      sym_integer,
    STATE(20), 4,
      sym__operand,
      sym_pointer,
      sym__constant,
      sym_float,
    ACTIONS(11), 8,
      anon_sym_BYTE,
      anon_sym_DWORD,
      anon_sym_QWORD,
      anon_sym_WORD,
      anon_sym_byte,
      anon_sym_dword,
      anon_sym_qword,
      anon_sym_word,
  [112] = 4,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(7), 1,
      sym_mnemonic,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    STATE(29), 3,
      sym__statement,
      sym_comment,
      sym_instruction,
  [127] = 4,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(7), 1,
      sym_mnemonic,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    STATE(29), 3,
      sym__statement,
      sym_comment,
      sym_instruction,
  [142] = 3,
    ACTIONS(29), 1,
      anon_sym_RBRACK,
    STATE(9), 1,
      aux_sym__deregister_repeat1,
    ACTIONS(27), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
  [154] = 3,
    ACTIONS(34), 1,
      anon_sym_RBRACK,
    STATE(9), 1,
      aux_sym__deregister_repeat1,
    ACTIONS(31), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
  [166] = 3,
    ACTIONS(36), 1,
      anon_sym_RBRACK,
    STATE(8), 1,
      aux_sym__deregister_repeat1,
    ACTIONS(27), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
  [178] = 3,
    ACTIONS(36), 1,
      anon_sym_RBRACK,
    STATE(9), 1,
      aux_sym__deregister_repeat1,
    ACTIONS(27), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
  [190] = 3,
    ACTIONS(38), 1,
      anon_sym_RBRACK,
    STATE(11), 1,
      aux_sym__deregister_repeat1,
    ACTIONS(27), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
  [202] = 3,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(7), 1,
      sym_mnemonic,
    STATE(29), 3,
      sym__statement,
      sym_comment,
      sym_instruction,
  [214] = 3,
    ACTIONS(42), 1,
      anon_sym_COMMA,
    STATE(17), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(40), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [225] = 3,
    ACTIONS(46), 1,
      anon_sym_COMMA,
    STATE(15), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(44), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [236] = 1,
    ACTIONS(34), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_RBRACK,
  [243] = 3,
    ACTIONS(49), 1,
      anon_sym_COMMA,
    STATE(15), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(21), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [254] = 3,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      anon_sym_LF,
    STATE(24), 1,
      aux_sym_program_repeat1,
  [264] = 2,
    ACTIONS(55), 1,
      anon_sym_COMMA,
    ACTIONS(53), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [272] = 2,
    ACTIONS(57), 1,
      anon_sym_COMMA,
    ACTIONS(44), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [280] = 3,
    ACTIONS(59), 1,
      anon_sym_LBRACK,
    ACTIONS(61), 1,
      sym_integer,
    STATE(19), 1,
      sym__deregister,
  [290] = 2,
    ACTIONS(65), 1,
      anon_sym_COMMA,
    ACTIONS(63), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [298] = 2,
    ACTIONS(69), 1,
      anon_sym_COMMA,
    ACTIONS(67), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [306] = 3,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    ACTIONS(73), 1,
      anon_sym_LF,
    STATE(24), 1,
      aux_sym_program_repeat1,
  [316] = 2,
    ACTIONS(78), 1,
      anon_sym_COMMA,
    ACTIONS(76), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [324] = 3,
    ACTIONS(80), 1,
      ts_builtin_sym_end,
    ACTIONS(82), 1,
      anon_sym_LF,
    STATE(18), 1,
      aux_sym_program_repeat1,
  [334] = 2,
    ACTIONS(86), 1,
      anon_sym_COMMA,
    ACTIONS(84), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [342] = 1,
    ACTIONS(88), 2,
      sym_memory,
      sym_register,
  [347] = 1,
    ACTIONS(71), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [352] = 1,
    ACTIONS(90), 2,
      sym_memory,
      sym_register,
  [357] = 1,
    ACTIONS(92), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [362] = 1,
    ACTIONS(94), 1,
      anon_sym_LBRACK,
  [366] = 1,
    ACTIONS(96), 1,
      aux_sym_comment_token1,
  [370] = 1,
    ACTIONS(98), 1,
      sym_integer,
  [374] = 1,
    ACTIONS(100), 1,
      anon_sym_PTR,
  [378] = 1,
    ACTIONS(102), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 29,
  [SMALL_STATE(4)] = 58,
  [SMALL_STATE(5)] = 87,
  [SMALL_STATE(6)] = 112,
  [SMALL_STATE(7)] = 127,
  [SMALL_STATE(8)] = 142,
  [SMALL_STATE(9)] = 154,
  [SMALL_STATE(10)] = 166,
  [SMALL_STATE(11)] = 178,
  [SMALL_STATE(12)] = 190,
  [SMALL_STATE(13)] = 202,
  [SMALL_STATE(14)] = 214,
  [SMALL_STATE(15)] = 225,
  [SMALL_STATE(16)] = 236,
  [SMALL_STATE(17)] = 243,
  [SMALL_STATE(18)] = 254,
  [SMALL_STATE(19)] = 264,
  [SMALL_STATE(20)] = 272,
  [SMALL_STATE(21)] = 280,
  [SMALL_STATE(22)] = 290,
  [SMALL_STATE(23)] = 298,
  [SMALL_STATE(24)] = 306,
  [SMALL_STATE(25)] = 316,
  [SMALL_STATE(26)] = 324,
  [SMALL_STATE(27)] = 334,
  [SMALL_STATE(28)] = 342,
  [SMALL_STATE(29)] = 347,
  [SMALL_STATE(30)] = 352,
  [SMALL_STATE(31)] = 357,
  [SMALL_STATE(32)] = 362,
  [SMALL_STATE(33)] = 366,
  [SMALL_STATE(34)] = 370,
  [SMALL_STATE(35)] = 374,
  [SMALL_STATE(36)] = 378,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 4),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__deregister_repeat1, 2), SHIFT_REPEAT(34),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__deregister_repeat1, 2),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(5),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer, 3),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pointer, 3),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__deregister, 3),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__deregister, 3),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(13),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__deregister, 4),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__deregister, 4),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__deregister, 5),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__deregister, 5),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [102] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
