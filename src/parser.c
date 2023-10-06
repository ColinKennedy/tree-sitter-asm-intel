#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 23
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 20
#define ALIAS_COUNT 0
#define TOKEN_COUNT 9
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LF = 1,
  anon_sym_POUND = 2,
  aux_sym_comment_token1 = 3,
  anon_sym_COMMA = 4,
  aux_sym_mnemonic_token1 = 5,
  aux_sym_float_token1 = 6,
  aux_sym_float_token2 = 7,
  sym_integer = 8,
  sym_program = 9,
  sym__statement = 10,
  sym_comment = 11,
  sym_instruction = 12,
  sym_mnemonic = 13,
  sym__operand = 14,
  sym_register = 15,
  sym__constant = 16,
  sym_float = 17,
  aux_sym_program_repeat1 = 18,
  aux_sym_instruction_repeat1 = 19,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_POUND] = "#",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_COMMA] = ",",
  [aux_sym_mnemonic_token1] = "mnemonic_token1",
  [aux_sym_float_token1] = "float_token1",
  [aux_sym_float_token2] = "float_token2",
  [sym_integer] = "integer",
  [sym_program] = "program",
  [sym__statement] = "_statement",
  [sym_comment] = "comment",
  [sym_instruction] = "instruction",
  [sym_mnemonic] = "mnemonic",
  [sym__operand] = "_operand",
  [sym_register] = "register",
  [sym__constant] = "_constant",
  [sym_float] = "float",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_instruction_repeat1] = "instruction_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_mnemonic_token1] = aux_sym_mnemonic_token1,
  [aux_sym_float_token1] = aux_sym_float_token1,
  [aux_sym_float_token2] = aux_sym_float_token2,
  [sym_integer] = sym_integer,
  [sym_program] = sym_program,
  [sym__statement] = sym__statement,
  [sym_comment] = sym_comment,
  [sym_instruction] = sym_instruction,
  [sym_mnemonic] = sym_mnemonic,
  [sym__operand] = sym__operand,
  [sym_register] = sym_register,
  [sym__constant] = sym__constant,
  [sym_float] = sym_float,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_instruction_repeat1] = aux_sym_instruction_repeat1,
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
  [aux_sym_mnemonic_token1] = {
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
  [sym_mnemonic] = {
    .visible = true,
    .named = true,
  },
  [sym__operand] = {
    .visible = false,
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
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_instruction_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(10);
      if (lookahead == '#') ADVANCE(12);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '-') ADVANCE(1);
      if (lookahead == '.') ADVANCE(4);
      if (lookahead == '0') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 1:
      if (lookahead == '.') ADVANCE(4);
      if (lookahead == '0') ADVANCE(28);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 2:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 3:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 4:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 5:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 6:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 7:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(31);
      END_STATE();
    case 8:
      if (eof) ADVANCE(10);
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '-') ADVANCE(1);
      if (lookahead == '.') ADVANCE(4);
      if (lookahead == '0') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 9:
      if (eof) ADVANCE(10);
      if (lookahead == '#') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(14);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_mnemonic_token1);
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == '_') ADVANCE(18);
      if (lookahead == 'x') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_mnemonic_token1);
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == '_') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_mnemonic_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_mnemonic_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(20);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_mnemonic_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(20);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_mnemonic_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == '.') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == 'e') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == '.') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == 'e') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == 'x') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == '_') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(31);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 9},
  [2] = {.lex_state = 8},
  [3] = {.lex_state = 8},
  [4] = {.lex_state = 8},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 9},
  [7] = {.lex_state = 9},
  [8] = {.lex_state = 8},
  [9] = {.lex_state = 9},
  [10] = {.lex_state = 8},
  [11] = {.lex_state = 8},
  [12] = {.lex_state = 8},
  [13] = {.lex_state = 8},
  [14] = {.lex_state = 8},
  [15] = {.lex_state = 8},
  [16] = {.lex_state = 8},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 8},
  [20] = {.lex_state = 8},
  [21] = {.lex_state = 13},
  [22] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym_mnemonic_token1] = ACTIONS(1),
    [aux_sym_float_token1] = ACTIONS(1),
    [aux_sym_float_token2] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(22),
    [sym__statement] = STATE(18),
    [sym_comment] = STATE(18),
    [sym_instruction] = STATE(18),
    [sym_mnemonic] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(5),
    [aux_sym_mnemonic_token1] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(11), 1,
      aux_sym_mnemonic_token1,
    ACTIONS(15), 1,
      sym_integer,
    ACTIONS(9), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(13), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    STATE(17), 4,
      sym__operand,
      sym_register,
      sym__constant,
      sym_float,
  [21] = 5,
    ACTIONS(11), 1,
      aux_sym_mnemonic_token1,
    ACTIONS(19), 1,
      sym_integer,
    ACTIONS(13), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(17), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(12), 4,
      sym__operand,
      sym_register,
      sym__constant,
      sym_float,
  [42] = 5,
    ACTIONS(11), 1,
      aux_sym_mnemonic_token1,
    ACTIONS(15), 1,
      sym_integer,
    ACTIONS(13), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(21), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(17), 4,
      sym__operand,
      sym_register,
      sym__constant,
      sym_float,
  [63] = 5,
    ACTIONS(11), 1,
      aux_sym_mnemonic_token1,
    ACTIONS(13), 1,
      aux_sym_float_token2,
    ACTIONS(15), 1,
      sym_integer,
    ACTIONS(23), 1,
      aux_sym_float_token1,
    STATE(17), 4,
      sym__operand,
      sym_register,
      sym__constant,
      sym_float,
  [82] = 5,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(7), 1,
      aux_sym_mnemonic_token1,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_mnemonic,
    STATE(19), 3,
      sym__statement,
      sym_comment,
      sym_instruction,
  [100] = 5,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(7), 1,
      aux_sym_mnemonic_token1,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_mnemonic,
    STATE(19), 3,
      sym__statement,
      sym_comment,
      sym_instruction,
  [118] = 2,
    ACTIONS(29), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(31), 4,
      aux_sym_mnemonic_token1,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_integer,
  [129] = 4,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(7), 1,
      aux_sym_mnemonic_token1,
    STATE(3), 1,
      sym_mnemonic,
    STATE(19), 3,
      sym__statement,
      sym_comment,
      sym_instruction,
  [144] = 3,
    ACTIONS(35), 1,
      anon_sym_COMMA,
    STATE(10), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(33), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [155] = 3,
    ACTIONS(38), 1,
      anon_sym_COMMA,
    STATE(10), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(21), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [166] = 3,
    ACTIONS(42), 1,
      anon_sym_COMMA,
    STATE(11), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(40), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [177] = 2,
    ACTIONS(46), 1,
      anon_sym_COMMA,
    ACTIONS(44), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [185] = 3,
    ACTIONS(48), 1,
      ts_builtin_sym_end,
    ACTIONS(50), 1,
      anon_sym_LF,
    STATE(14), 1,
      aux_sym_program_repeat1,
  [195] = 2,
    ACTIONS(55), 1,
      anon_sym_COMMA,
    ACTIONS(53), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [203] = 3,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(57), 1,
      anon_sym_LF,
    STATE(14), 1,
      aux_sym_program_repeat1,
  [213] = 2,
    ACTIONS(59), 1,
      anon_sym_COMMA,
    ACTIONS(33), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [221] = 3,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    ACTIONS(63), 1,
      anon_sym_LF,
    STATE(16), 1,
      aux_sym_program_repeat1,
  [231] = 1,
    ACTIONS(48), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [236] = 1,
    ACTIONS(65), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [241] = 1,
    ACTIONS(67), 1,
      aux_sym_comment_token1,
  [245] = 1,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 21,
  [SMALL_STATE(4)] = 42,
  [SMALL_STATE(5)] = 63,
  [SMALL_STATE(6)] = 82,
  [SMALL_STATE(7)] = 100,
  [SMALL_STATE(8)] = 118,
  [SMALL_STATE(9)] = 129,
  [SMALL_STATE(10)] = 144,
  [SMALL_STATE(11)] = 155,
  [SMALL_STATE(12)] = 166,
  [SMALL_STATE(13)] = 177,
  [SMALL_STATE(14)] = 185,
  [SMALL_STATE(15)] = 195,
  [SMALL_STATE(16)] = 203,
  [SMALL_STATE(17)] = 213,
  [SMALL_STATE(18)] = 221,
  [SMALL_STATE(19)] = 231,
  [SMALL_STATE(20)] = 236,
  [SMALL_STATE(21)] = 241,
  [SMALL_STATE(22)] = 245,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 4),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mnemonic, 1),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mnemonic, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(5),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register, 1),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_register, 1),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(9),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [69] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
