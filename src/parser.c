#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 38
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 39
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LF = 1,
  anon_sym_POUND = 2,
  aux_sym_comment_token1 = 3,
  anon_sym_COMMA = 4,
  aux_sym_label_token1 = 5,
  sym_mnemonic = 6,
  anon_sym_BYTE = 7,
  anon_sym_DWORD = 8,
  anon_sym_QWORD = 9,
  anon_sym_WORD = 10,
  anon_sym_byte = 11,
  anon_sym_dword = 12,
  anon_sym_qword = 13,
  anon_sym_word = 14,
  anon_sym_PTR = 15,
  anon_sym_LBRACK = 16,
  anon_sym_DASH = 17,
  anon_sym_PLUS = 18,
  anon_sym_STAR = 19,
  anon_sym_RBRACK = 20,
  sym_memory = 21,
  sym_register = 22,
  aux_sym_float_token1 = 23,
  aux_sym_float_token2 = 24,
  sym_integer = 25,
  sym_program = 26,
  sym__statement = 27,
  sym_comment = 28,
  sym_instruction = 29,
  sym_label = 30,
  sym__operand = 31,
  sym_pointer = 32,
  sym__deregister = 33,
  sym__constant = 34,
  sym_float = 35,
  aux_sym_program_repeat1 = 36,
  aux_sym_instruction_repeat1 = 37,
  aux_sym__deregister_repeat1 = 38,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_POUND] = "#",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_COMMA] = ",",
  [aux_sym_label_token1] = "label_token1",
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
  [sym_label] = "label",
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
  [aux_sym_label_token1] = aux_sym_label_token1,
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
  [sym_label] = sym_label,
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
  [aux_sym_label_token1] = {
    .visible = false,
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
  [37] = 37,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(56);
      if (lookahead == '#') ADVANCE(58);
      if (lookahead == '*') ADVANCE(85);
      if (lookahead == '+') ADVANCE(84);
      if (lookahead == ',') ADVANCE(62);
      if (lookahead == '-') ADVANCE(83);
      if (lookahead == 'B') ADVANCE(25);
      if (lookahead == 'D') ADVANCE(21);
      if (lookahead == 'P') ADVANCE(18);
      if (lookahead == 'Q') ADVANCE(22);
      if (lookahead == 'W') ADVANCE(11);
      if (lookahead == '[') ADVANCE(82);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == 'b') ADVANCE(43);
      if (lookahead == 'd') ADVANCE(39);
      if (lookahead == 'q') ADVANCE(41);
      if (lookahead == 'w') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '#') ADVANCE(59);
      if (lookahead == ':') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '#') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '.') ADVANCE(49);
      if (lookahead == '0') ADVANCE(115);
      if (lookahead == 'B') ADVANCE(24);
      if (lookahead == 'D') ADVANCE(20);
      if (lookahead == 'Q') ADVANCE(23);
      if (lookahead == 'W') ADVANCE(10);
      if (lookahead == '[') ADVANCE(82);
      if (lookahead == 'b') ADVANCE(44);
      if (lookahead == 'd') ADVANCE(38);
      if (lookahead == 'q') ADVANCE(40);
      if (lookahead == 'w') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(49);
      if (lookahead == '0') ADVANCE(115);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(116);
      END_STATE();
    case 5:
      if (lookahead == ':') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == 'D') ADVANCE(71);
      END_STATE();
    case 7:
      if (lookahead == 'D') ADVANCE(67);
      END_STATE();
    case 8:
      if (lookahead == 'D') ADVANCE(69);
      END_STATE();
    case 9:
      if (lookahead == 'E') ADVANCE(65);
      END_STATE();
    case 10:
      if (lookahead == 'O') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 11:
      if (lookahead == 'O') ADVANCE(15);
      END_STATE();
    case 12:
      if (lookahead == 'O') ADVANCE(16);
      END_STATE();
    case 13:
      if (lookahead == 'O') ADVANCE(17);
      END_STATE();
    case 14:
      if (lookahead == 'R') ADVANCE(81);
      END_STATE();
    case 15:
      if (lookahead == 'R') ADVANCE(6);
      END_STATE();
    case 16:
      if (lookahead == 'R') ADVANCE(7);
      END_STATE();
    case 17:
      if (lookahead == 'R') ADVANCE(8);
      END_STATE();
    case 18:
      if (lookahead == 'T') ADVANCE(14);
      END_STATE();
    case 19:
      if (lookahead == 'T') ADVANCE(9);
      END_STATE();
    case 20:
      if (lookahead == 'W') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 21:
      if (lookahead == 'W') ADVANCE(12);
      END_STATE();
    case 22:
      if (lookahead == 'W') ADVANCE(13);
      END_STATE();
    case 23:
      if (lookahead == 'W') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 24:
      if (lookahead == 'Y') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 25:
      if (lookahead == 'Y') ADVANCE(19);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(79);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(75);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(77);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 31:
      if (lookahead == 'o') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 32:
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 33:
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 34:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 35:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 36:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 37:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 38:
      if (lookahead == 'w') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 39:
      if (lookahead == 'w') ADVANCE(32);
      END_STATE();
    case 40:
      if (lookahead == 'w') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 41:
      if (lookahead == 'w') ADVANCE(33);
      END_STATE();
    case 42:
      if (lookahead == 'x') ADVANCE(48);
      END_STATE();
    case 43:
      if (lookahead == 'y') ADVANCE(37);
      END_STATE();
    case 44:
      if (lookahead == 'y') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 45:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      END_STATE();
    case 46:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 47:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(47)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(118);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 54:
      if (eof) ADVANCE(56);
      if (lookahead == '\n') SKIP(54)
      if (lookahead == '#') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 55:
      if (eof) ADVANCE(56);
      if (lookahead == '\n') ADVANCE(57);
      if (lookahead == ',') ADVANCE(62);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '.') ADVANCE(49);
      if (lookahead == '0') ADVANCE(115);
      if (lookahead == 'B') ADVANCE(24);
      if (lookahead == 'D') ADVANCE(20);
      if (lookahead == 'Q') ADVANCE(23);
      if (lookahead == 'W') ADVANCE(10);
      if (lookahead == 'b') ADVANCE(44);
      if (lookahead == 'd') ADVANCE(38);
      if (lookahead == 'q') ADVANCE(40);
      if (lookahead == 'w') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(55)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == ':') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(61);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == ':') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_mnemonic);
      if (lookahead == ':') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_BYTE);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_BYTE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_DWORD);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_DWORD);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_QWORD);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_QWORD);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_WORD);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_WORD);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_byte);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_byte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_dword);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_dword);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_qword);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_qword);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_word);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_PTR);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_memory);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'D') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'D') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'D') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'E') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'O') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'O') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'R') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'R') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'R') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'T') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'd') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'd') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'd') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'e') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'o') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'o') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'r') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'r') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'r') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 't') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == '.') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == 'e') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == '.') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == 'e') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(113);
      if (lookahead == '_') ADVANCE(117);
      if (lookahead == 'x') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(113);
      if (lookahead == '_') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(118);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 54},
  [2] = {.lex_state = 55},
  [3] = {.lex_state = 55},
  [4] = {.lex_state = 55},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 54},
  [7] = {.lex_state = 54},
  [8] = {.lex_state = 54},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 55},
  [16] = {.lex_state = 55},
  [17] = {.lex_state = 55},
  [18] = {.lex_state = 55},
  [19] = {.lex_state = 55},
  [20] = {.lex_state = 55},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 55},
  [23] = {.lex_state = 55},
  [24] = {.lex_state = 55},
  [25] = {.lex_state = 55},
  [26] = {.lex_state = 55},
  [27] = {.lex_state = 55},
  [28] = {.lex_state = 47},
  [29] = {.lex_state = 55},
  [30] = {.lex_state = 47},
  [31] = {.lex_state = 55},
  [32] = {.lex_state = 55},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 60},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
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
    [sym_program] = STATE(37),
    [sym__statement] = STATE(25),
    [sym_comment] = STATE(25),
    [sym_instruction] = STATE(25),
    [sym_label] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(5),
    [aux_sym_label_token1] = ACTIONS(7),
    [sym_mnemonic] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(11), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(15), 2,
      sym_register,
      sym_integer,
    ACTIONS(17), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    STATE(15), 4,
      sym__operand,
      sym_pointer,
      sym__constant,
      sym_float,
    ACTIONS(13), 8,
      anon_sym_BYTE,
      anon_sym_DWORD,
      anon_sym_QWORD,
      anon_sym_WORD,
      anon_sym_byte,
      anon_sym_dword,
      anon_sym_qword,
      anon_sym_word,
  [29] = 5,
    ACTIONS(17), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(19), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(21), 2,
      sym_register,
      sym_integer,
    STATE(20), 4,
      sym__operand,
      sym_pointer,
      sym__constant,
      sym_float,
    ACTIONS(13), 8,
      anon_sym_BYTE,
      anon_sym_DWORD,
      anon_sym_QWORD,
      anon_sym_WORD,
      anon_sym_byte,
      anon_sym_dword,
      anon_sym_qword,
      anon_sym_word,
  [58] = 5,
    ACTIONS(17), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(21), 2,
      sym_register,
      sym_integer,
    ACTIONS(23), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(20), 4,
      sym__operand,
      sym_pointer,
      sym__constant,
      sym_float,
    ACTIONS(13), 8,
      anon_sym_BYTE,
      anon_sym_DWORD,
      anon_sym_QWORD,
      anon_sym_WORD,
      anon_sym_byte,
      anon_sym_dword,
      anon_sym_qword,
      anon_sym_word,
  [87] = 5,
    ACTIONS(17), 1,
      aux_sym_float_token2,
    ACTIONS(25), 1,
      aux_sym_float_token1,
    ACTIONS(21), 2,
      sym_register,
      sym_integer,
    STATE(20), 4,
      sym__operand,
      sym_pointer,
      sym__constant,
      sym_float,
    ACTIONS(13), 8,
      anon_sym_BYTE,
      anon_sym_DWORD,
      anon_sym_QWORD,
      anon_sym_WORD,
      anon_sym_byte,
      anon_sym_dword,
      anon_sym_qword,
      anon_sym_word,
  [114] = 5,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(7), 1,
      aux_sym_label_token1,
    ACTIONS(9), 1,
      sym_mnemonic,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    STATE(29), 4,
      sym__statement,
      sym_comment,
      sym_instruction,
      sym_label,
  [133] = 5,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(7), 1,
      aux_sym_label_token1,
    ACTIONS(9), 1,
      sym_mnemonic,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    STATE(29), 4,
      sym__statement,
      sym_comment,
      sym_instruction,
      sym_label,
  [152] = 4,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(7), 1,
      aux_sym_label_token1,
    ACTIONS(9), 1,
      sym_mnemonic,
    STATE(29), 4,
      sym__statement,
      sym_comment,
      sym_instruction,
      sym_label,
  [168] = 3,
    ACTIONS(33), 1,
      anon_sym_RBRACK,
    STATE(10), 1,
      aux_sym__deregister_repeat1,
    ACTIONS(31), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
  [180] = 3,
    ACTIONS(38), 1,
      anon_sym_RBRACK,
    STATE(10), 1,
      aux_sym__deregister_repeat1,
    ACTIONS(35), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
  [192] = 3,
    ACTIONS(40), 1,
      anon_sym_RBRACK,
    STATE(9), 1,
      aux_sym__deregister_repeat1,
    ACTIONS(31), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
  [204] = 3,
    ACTIONS(40), 1,
      anon_sym_RBRACK,
    STATE(10), 1,
      aux_sym__deregister_repeat1,
    ACTIONS(31), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
  [216] = 3,
    ACTIONS(42), 1,
      anon_sym_RBRACK,
    STATE(12), 1,
      aux_sym__deregister_repeat1,
    ACTIONS(31), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
  [228] = 1,
    ACTIONS(38), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_RBRACK,
  [235] = 3,
    ACTIONS(46), 1,
      anon_sym_COMMA,
    STATE(17), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(44), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [246] = 3,
    ACTIONS(50), 1,
      anon_sym_COMMA,
    STATE(16), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(48), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [257] = 3,
    ACTIONS(53), 1,
      anon_sym_COMMA,
    STATE(16), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(19), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [268] = 3,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    ACTIONS(57), 1,
      anon_sym_LF,
    STATE(18), 1,
      aux_sym_program_repeat1,
  [278] = 2,
    ACTIONS(62), 1,
      anon_sym_COMMA,
    ACTIONS(60), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [286] = 2,
    ACTIONS(64), 1,
      anon_sym_COMMA,
    ACTIONS(48), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [294] = 3,
    ACTIONS(66), 1,
      anon_sym_LBRACK,
    ACTIONS(68), 1,
      sym_integer,
    STATE(19), 1,
      sym__deregister,
  [304] = 3,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(70), 1,
      anon_sym_LF,
    STATE(18), 1,
      aux_sym_program_repeat1,
  [314] = 2,
    ACTIONS(74), 1,
      anon_sym_COMMA,
    ACTIONS(72), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [322] = 2,
    ACTIONS(78), 1,
      anon_sym_COMMA,
    ACTIONS(76), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [330] = 3,
    ACTIONS(80), 1,
      ts_builtin_sym_end,
    ACTIONS(82), 1,
      anon_sym_LF,
    STATE(22), 1,
      aux_sym_program_repeat1,
  [340] = 2,
    ACTIONS(86), 1,
      anon_sym_COMMA,
    ACTIONS(84), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [348] = 2,
    ACTIONS(90), 1,
      anon_sym_COMMA,
    ACTIONS(88), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [356] = 1,
    ACTIONS(92), 2,
      sym_memory,
      sym_register,
  [361] = 1,
    ACTIONS(55), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [366] = 1,
    ACTIONS(94), 2,
      sym_memory,
      sym_register,
  [371] = 1,
    ACTIONS(96), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [376] = 1,
    ACTIONS(98), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [381] = 1,
    ACTIONS(100), 1,
      anon_sym_LBRACK,
  [385] = 1,
    ACTIONS(102), 1,
      aux_sym_comment_token1,
  [389] = 1,
    ACTIONS(104), 1,
      sym_integer,
  [393] = 1,
    ACTIONS(106), 1,
      anon_sym_PTR,
  [397] = 1,
    ACTIONS(108), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 29,
  [SMALL_STATE(4)] = 58,
  [SMALL_STATE(5)] = 87,
  [SMALL_STATE(6)] = 114,
  [SMALL_STATE(7)] = 133,
  [SMALL_STATE(8)] = 152,
  [SMALL_STATE(9)] = 168,
  [SMALL_STATE(10)] = 180,
  [SMALL_STATE(11)] = 192,
  [SMALL_STATE(12)] = 204,
  [SMALL_STATE(13)] = 216,
  [SMALL_STATE(14)] = 228,
  [SMALL_STATE(15)] = 235,
  [SMALL_STATE(16)] = 246,
  [SMALL_STATE(17)] = 257,
  [SMALL_STATE(18)] = 268,
  [SMALL_STATE(19)] = 278,
  [SMALL_STATE(20)] = 286,
  [SMALL_STATE(21)] = 294,
  [SMALL_STATE(22)] = 304,
  [SMALL_STATE(23)] = 314,
  [SMALL_STATE(24)] = 322,
  [SMALL_STATE(25)] = 330,
  [SMALL_STATE(26)] = 340,
  [SMALL_STATE(27)] = 348,
  [SMALL_STATE(28)] = 356,
  [SMALL_STATE(29)] = 361,
  [SMALL_STATE(30)] = 366,
  [SMALL_STATE(31)] = 371,
  [SMALL_STATE(32)] = 376,
  [SMALL_STATE(33)] = 381,
  [SMALL_STATE(34)] = 385,
  [SMALL_STATE(35)] = 389,
  [SMALL_STATE(36)] = 393,
  [SMALL_STATE(37)] = 397,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 4),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__deregister_repeat1, 2), SHIFT_REPEAT(35),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__deregister_repeat1, 2),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(5),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(8),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer, 3),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pointer, 3),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__deregister, 3),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__deregister, 3),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__deregister, 4),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__deregister, 4),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__deregister, 5),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__deregister, 5),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [108] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
