#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 15
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 18
#define ALIAS_COUNT 0
#define TOKEN_COUNT 7
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 2
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_POUND = 1,
  aux_sym_comment_token1 = 2,
  aux_sym_mnemonic_token1 = 3,
  aux_sym_float_token1 = 4,
  aux_sym_float_token2 = 5,
  sym_other = 6,
  sym_module = 7,
  sym__statement = 8,
  sym_comment = 9,
  sym_instruction = 10,
  sym_mnemonic = 11,
  sym_operand = 12,
  sym_register = 13,
  sym_constant = 14,
  sym_float = 15,
  aux_sym_module_repeat1 = 16,
  aux_sym_instruction_repeat1 = 17,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_POUND] = "#",
  [aux_sym_comment_token1] = "comment_token1",
  [aux_sym_mnemonic_token1] = "mnemonic_token1",
  [aux_sym_float_token1] = "float_token1",
  [aux_sym_float_token2] = "float_token2",
  [sym_other] = "other",
  [sym_module] = "module",
  [sym__statement] = "_statement",
  [sym_comment] = "comment",
  [sym_instruction] = "instruction",
  [sym_mnemonic] = "mnemonic",
  [sym_operand] = "operand",
  [sym_register] = "register",
  [sym_constant] = "constant",
  [sym_float] = "float",
  [aux_sym_module_repeat1] = "module_repeat1",
  [aux_sym_instruction_repeat1] = "instruction_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [aux_sym_mnemonic_token1] = aux_sym_mnemonic_token1,
  [aux_sym_float_token1] = aux_sym_float_token1,
  [aux_sym_float_token2] = aux_sym_float_token2,
  [sym_other] = sym_other,
  [sym_module] = sym_module,
  [sym__statement] = sym__statement,
  [sym_comment] = sym_comment,
  [sym_instruction] = sym_instruction,
  [sym_mnemonic] = sym_mnemonic,
  [sym_operand] = sym_operand,
  [sym_register] = sym_register,
  [sym_constant] = sym_constant,
  [sym_float] = sym_float,
  [aux_sym_module_repeat1] = aux_sym_module_repeat1,
  [aux_sym_instruction_repeat1] = aux_sym_instruction_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
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
  [sym_other] = {
    .visible = true,
    .named = true,
  },
  [sym_module] = {
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
  [sym_operand] = {
    .visible = true,
    .named = true,
  },
  [sym_register] = {
    .visible = true,
    .named = true,
  },
  [sym_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_module_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(9);
      if (lookahead == '#') ADVANCE(10);
      if (lookahead == '-') ADVANCE(1);
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == 't') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 1:
      if (lookahead == '.') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == '.') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 4:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 5:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 6:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 7:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 8:
      if (eof) ADVANCE(9);
      if (lookahead == '#') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_mnemonic_token1);
      if (lookahead == '.') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_mnemonic_token1);
      if (lookahead == 'g') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_mnemonic_token1);
      if (lookahead == 'h') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_mnemonic_token1);
      if (lookahead == 'i') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_mnemonic_token1);
      if (lookahead == 'n') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_mnemonic_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == '.') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == 'e') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == '.') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == 'e') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_other);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 8},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 8},
  [6] = {.lex_state = 8},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 8},
  [13] = {.lex_state = 11},
  [14] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [aux_sym_mnemonic_token1] = ACTIONS(1),
    [aux_sym_float_token1] = ACTIONS(1),
    [aux_sym_float_token2] = ACTIONS(1),
    [sym_other] = ACTIONS(1),
  },
  [1] = {
    [sym_module] = STATE(14),
    [sym__statement] = STATE(5),
    [sym_comment] = STATE(5),
    [sym_instruction] = STATE(5),
    [sym_mnemonic] = STATE(2),
    [aux_sym_module_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(5),
    [aux_sym_mnemonic_token1] = ACTIONS(7),
  },
  [2] = {
    [sym_operand] = STATE(3),
    [sym_register] = STATE(11),
    [sym_constant] = STATE(11),
    [sym_float] = STATE(10),
    [aux_sym_instruction_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(9),
    [anon_sym_POUND] = ACTIONS(9),
    [aux_sym_mnemonic_token1] = ACTIONS(11),
    [aux_sym_float_token1] = ACTIONS(13),
    [aux_sym_float_token2] = ACTIONS(15),
    [sym_other] = ACTIONS(17),
  },
  [3] = {
    [sym_operand] = STATE(4),
    [sym_register] = STATE(11),
    [sym_constant] = STATE(11),
    [sym_float] = STATE(10),
    [aux_sym_instruction_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_POUND] = ACTIONS(19),
    [aux_sym_mnemonic_token1] = ACTIONS(21),
    [aux_sym_float_token1] = ACTIONS(13),
    [aux_sym_float_token2] = ACTIONS(15),
    [sym_other] = ACTIONS(17),
  },
  [4] = {
    [sym_operand] = STATE(4),
    [sym_register] = STATE(11),
    [sym_constant] = STATE(11),
    [sym_float] = STATE(10),
    [aux_sym_instruction_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(23),
    [anon_sym_POUND] = ACTIONS(23),
    [aux_sym_mnemonic_token1] = ACTIONS(25),
    [aux_sym_float_token1] = ACTIONS(28),
    [aux_sym_float_token2] = ACTIONS(31),
    [sym_other] = ACTIONS(34),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(7), 1,
      aux_sym_mnemonic_token1,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_mnemonic,
    STATE(6), 4,
      sym__statement,
      sym_comment,
      sym_instruction,
      aux_sym_module_repeat1,
  [19] = 5,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    ACTIONS(41), 1,
      anon_sym_POUND,
    ACTIONS(44), 1,
      aux_sym_mnemonic_token1,
    STATE(2), 1,
      sym_mnemonic,
    STATE(6), 4,
      sym__statement,
      sym_comment,
      sym_instruction,
      aux_sym_module_repeat1,
  [38] = 2,
    ACTIONS(47), 3,
      ts_builtin_sym_end,
      anon_sym_POUND,
      aux_sym_float_token1,
    ACTIONS(49), 3,
      aux_sym_mnemonic_token1,
      aux_sym_float_token2,
      sym_other,
  [49] = 2,
    ACTIONS(51), 3,
      ts_builtin_sym_end,
      anon_sym_POUND,
      aux_sym_float_token1,
    ACTIONS(53), 3,
      aux_sym_mnemonic_token1,
      aux_sym_float_token2,
      sym_other,
  [60] = 2,
    ACTIONS(55), 3,
      ts_builtin_sym_end,
      anon_sym_POUND,
      aux_sym_float_token1,
    ACTIONS(57), 3,
      aux_sym_mnemonic_token1,
      aux_sym_float_token2,
      sym_other,
  [71] = 2,
    ACTIONS(59), 3,
      ts_builtin_sym_end,
      anon_sym_POUND,
      aux_sym_float_token1,
    ACTIONS(61), 3,
      aux_sym_mnemonic_token1,
      aux_sym_float_token2,
      sym_other,
  [82] = 2,
    ACTIONS(63), 3,
      ts_builtin_sym_end,
      anon_sym_POUND,
      aux_sym_float_token1,
    ACTIONS(65), 3,
      aux_sym_mnemonic_token1,
      aux_sym_float_token2,
      sym_other,
  [93] = 1,
    ACTIONS(67), 3,
      ts_builtin_sym_end,
      anon_sym_POUND,
      aux_sym_mnemonic_token1,
  [99] = 1,
    ACTIONS(69), 1,
      aux_sym_comment_token1,
  [103] = 1,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 19,
  [SMALL_STATE(7)] = 38,
  [SMALL_STATE(8)] = 49,
  [SMALL_STATE(9)] = 60,
  [SMALL_STATE(10)] = 71,
  [SMALL_STATE(11)] = 82,
  [SMALL_STATE(12)] = 93,
  [SMALL_STATE(13)] = 99,
  [SMALL_STATE(14)] = 103,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1),
  [11] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 2),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(8),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(9),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(9),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2), SHIFT_REPEAT(10),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(13),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(7),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mnemonic, 1),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mnemonic, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register, 1),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_register, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand, 1),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [71] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
