#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 52
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
  sym_gcc_mnemonic = 6,
  sym_mnemonic = 7,
  anon_sym_BYTE = 8,
  anon_sym_DWORD = 9,
  anon_sym_QWORD = 10,
  anon_sym_WORD = 11,
  anon_sym_byte = 12,
  anon_sym_dword = 13,
  anon_sym_qword = 14,
  anon_sym_word = 15,
  anon_sym_PTR = 16,
  anon_sym_ptr = 17,
  anon_sym_LBRACK = 18,
  anon_sym_DASH = 19,
  anon_sym_PLUS = 20,
  anon_sym_STAR = 21,
  anon_sym_RBRACK = 22,
  aux_sym_hexadecimal_token1 = 23,
  aux_sym_hexadecimal_token2 = 24,
  aux_sym_hexadecimal_token3 = 25,
  aux_sym_binary_token1 = 26,
  aux_sym_binary_token2 = 27,
  aux_sym_octal_token1 = 28,
  aux_sym_octal_token2 = 29,
  sym_register = 30,
  aux_sym_float_token1 = 31,
  aux_sym_float_token2 = 32,
  sym_integer = 33,
  sym_string = 34,
  sym_identifier = 35,
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
  [sym_identifier] = "identifier",
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
  [sym_identifier] = sym_identifier,
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
  [sym_identifier] = {
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
  [28] = 28,
  [29] = 29,
  [30] = 27,
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
  [49] = 49,
  [50] = 50,
  [51] = 51,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(75);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(79);
      if (lookahead == '$') ADVANCE(11);
      if (lookahead == '*') ADVANCE(107);
      if (lookahead == '+') ADVANCE(106);
      if (lookahead == ',') ADVANCE(80);
      if (lookahead == '-') ADVANCE(105);
      if (lookahead == '.') ADVANCE(69);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '0') ADVANCE(28);
      if (lookahead == '1') ADVANCE(29);
      if (lookahead == 'B') ADVANCE(26);
      if (lookahead == 'D') ADVANCE(22);
      if (lookahead == 'P') ADVANCE(20);
      if (lookahead == 'Q') ADVANCE(24);
      if (lookahead == 'W') ADVANCE(17);
      if (lookahead == '[') ADVANCE(104);
      if (lookahead == ']') ADVANCE(108);
      if (lookahead == '_') ADVANCE(50);
      if (lookahead == 'b') ADVANCE(46);
      if (lookahead == 'd') ADVANCE(42);
      if (lookahead == 'p') ADVANCE(40);
      if (lookahead == 'q') ADVANCE(44);
      if (lookahead == 'w') ADVANCE(38);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(78);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(78);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '$') ADVANCE(11);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == '0') ADVANCE(179);
      if (lookahead == '1') ADVANCE(180);
      if (lookahead == 'B') ADVANCE(27);
      if (lookahead == 'D') ADVANCE(23);
      if (lookahead == 'Q') ADVANCE(25);
      if (lookahead == 'W') ADVANCE(16);
      if (lookahead == '[') ADVANCE(104);
      if (lookahead == '_') ADVANCE(51);
      if (lookahead == 'b') ADVANCE(47);
      if (lookahead == 'd') ADVANCE(43);
      if (lookahead == 'q') ADVANCE(45);
      if (lookahead == 'w') ADVANCE(37);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(185);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(70);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(184);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(55);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '$') ADVANCE(11);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == '0') ADVANCE(179);
      if (lookahead == '1') ADVANCE(180);
      if (lookahead == '_') ADVANCE(51);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(185);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(184);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(207);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '$') ADVANCE(11);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '0') ADVANCE(194);
      if (lookahead == '[') ADVANCE(104);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(195);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(216);
      if (lookahead == '0') ADVANCE(192);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(193);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(79);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 10:
      if (lookahead == '0') ADVANCE(197);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(199);
      END_STATE();
    case 11:
      if (lookahead == '0') ADVANCE(66);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == 'D') ADVANCE(88);
      END_STATE();
    case 15:
      if (lookahead == 'D') ADVANCE(90);
      END_STATE();
    case 16:
      if (lookahead == 'O') ADVANCE(136);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 17:
      if (lookahead == 'O') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 18:
      if (lookahead == 'P') ADVANCE(21);
      if (lookahead == 'p') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      END_STATE();
    case 19:
      if (lookahead == 'R') ADVANCE(102);
      END_STATE();
    case 20:
      if (lookahead == 'T') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 21:
      if (lookahead == 'T') ADVANCE(19);
      END_STATE();
    case 22:
      if (lookahead == 'W') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(163);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 23:
      if (lookahead == 'W') ADVANCE(130);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(161);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 24:
      if (lookahead == 'W') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 25:
      if (lookahead == 'W') ADVANCE(132);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 26:
      if (lookahead == 'Y') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(163);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 27:
      if (lookahead == 'Y') ADVANCE(141);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(161);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 28:
      if (lookahead == '_') ADVANCE(50);
      if (lookahead == 'b') ADVANCE(114);
      if (lookahead == 'y') ADVANCE(116);
      if (lookahead == 'h' ||
          lookahead == 'x') ADVANCE(67);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(122);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(30);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(52);
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(61);
      END_STATE();
    case 29:
      if (lookahead == '_') ADVANCE(50);
      if (lookahead == 'b') ADVANCE(117);
      if (lookahead == 'y') ADVANCE(113);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(121);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(30);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(52);
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(61);
      END_STATE();
    case 30:
      if (lookahead == '_') ADVANCE(50);
      if (lookahead == 'b') ADVANCE(115);
      if (lookahead == 'y') ADVANCE(113);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(121);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(31);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(36);
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(35);
      END_STATE();
    case 31:
      if (lookahead == '_') ADVANCE(50);
      if (lookahead == 'h') ADVANCE(109);
      if (lookahead == 'b' ||
          lookahead == 'y') ADVANCE(113);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(121);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(32);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(53);
      END_STATE();
    case 32:
      if (lookahead == '_') ADVANCE(50);
      if (lookahead == 'b' ||
          lookahead == 'y') ADVANCE(113);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(121);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(32);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(53);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(96);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(98);
      END_STATE();
    case 35:
      if (lookahead == 'h') ADVANCE(109);
      END_STATE();
    case 36:
      if (lookahead == 'h') ADVANCE(109);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(53);
      END_STATE();
    case 37:
      if (lookahead == 'o') ADVANCE(155);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 38:
      if (lookahead == 'o') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 39:
      if (lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 42:
      if (lookahead == 'w') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(163);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 43:
      if (lookahead == 'w') ADVANCE(149);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(161);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 44:
      if (lookahead == 'w') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 45:
      if (lookahead == 'w') ADVANCE(151);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 46:
      if (lookahead == 'y') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(163);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 47:
      if (lookahead == 'y') ADVANCE(160);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(161);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 48:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      END_STATE();
    case 49:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      END_STATE();
    case 50:
      if (lookahead == 'b' ||
          lookahead == 'y') ADVANCE(113);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(50);
      END_STATE();
    case 51:
      if (lookahead == 'b' ||
          lookahead == 'y') ADVANCE(118);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(215);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('2' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 52:
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(36);
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(35);
      END_STATE();
    case 53:
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(53);
      END_STATE();
    case 54:
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(52);
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(61);
      END_STATE();
    case 55:
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(161);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 56:
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(163);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(35);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(111);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(112);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(219);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(61);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(62);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(63);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 69:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 70:
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 71:
      if (eof) ADVANCE(75);
      if (lookahead == '\n') SKIP(71)
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(78);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 72:
      if (eof) ADVANCE(75);
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '$') ADVANCE(11);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == '0') ADVANCE(179);
      if (lookahead == '1') ADVANCE(180);
      if (lookahead == 'B') ADVANCE(27);
      if (lookahead == 'D') ADVANCE(23);
      if (lookahead == 'Q') ADVANCE(25);
      if (lookahead == 'W') ADVANCE(16);
      if (lookahead == '[') ADVANCE(104);
      if (lookahead == '_') ADVANCE(51);
      if (lookahead == 'b') ADVANCE(47);
      if (lookahead == 'd') ADVANCE(43);
      if (lookahead == 'q') ADVANCE(45);
      if (lookahead == 'w') ADVANCE(37);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(185);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(72)
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(70);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(184);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(55);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 73:
      if (eof) ADVANCE(75);
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '$') ADVANCE(11);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == '0') ADVANCE(179);
      if (lookahead == '1') ADVANCE(180);
      if (lookahead == '_') ADVANCE(51);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(185);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(73)
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(184);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 74:
      if (eof) ADVANCE(75);
      if (lookahead == '\n') ADVANCE(77);
      if (lookahead == ' ') ADVANCE(81);
      if (lookahead == ',') ADVANCE(80);
      if (lookahead == '[') ADVANCE(104);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(74)
      END_STATE();
    case 75:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(77);
      if (lookahead == ' ') ADVANCE(81);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == ':') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(77);
      if (lookahead == ' ') ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_gcc_mnemonic);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_gcc_mnemonic);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_mnemonic);
      if (lookahead == ':') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_BYTE);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_BYTE);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_DWORD);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_DWORD);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_QWORD);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_QWORD);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_WORD);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_WORD);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_byte);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_byte);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_dword);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_dword);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_qword);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_qword);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_word);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_word);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_PTR);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_ptr);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_hexadecimal_token1);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_hexadecimal_token1);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_hexadecimal_token2);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_hexadecimal_token3);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (lookahead == '_') ADVANCE(120);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(119);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(35);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (lookahead == 'h') ADVANCE(109);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(120);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(35);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_binary_token2);
      if (lookahead == 'h') ADVANCE(109);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(120);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_binary_token2);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(120);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_octal_token1);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_octal_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(123);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_octal_token2);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_register);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'D') ADVANCE(92);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'D') ADVANCE(93);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'E') ADVANCE(86);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'E') ADVANCE(87);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'O') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'O') ADVANCE(137);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'O') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'O') ADVANCE(139);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'R') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'R') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'R') ADVANCE(14);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'R') ADVANCE(126);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'R') ADVANCE(210);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'R') ADVANCE(15);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'R') ADVANCE(211);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'T') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'T') ADVANCE(128);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'd') ADVANCE(100);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'd') ADVANCE(101);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'e') ADVANCE(95);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'h') ADVANCE(109);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'h') ADVANCE(110);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'o') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'o') ADVANCE(156);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'o') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'o') ADVANCE(158);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'r') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'r') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'r') ADVANCE(143);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'r') ADVANCE(212);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'r') ADVANCE(213);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 't') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 't') ADVANCE(145);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(147);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(146);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == '.') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == '.') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == 'e') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == 'e') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(170);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == '.') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == '.') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == 'e') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == 'e') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(177);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_integer);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(174);
      if (lookahead == '_') ADVANCE(50);
      if (lookahead == 'b') ADVANCE(114);
      if (lookahead == 'd') ADVANCE(203);
      if (lookahead == 'y') ADVANCE(116);
      if (lookahead == 'h' ||
          lookahead == 'x') ADVANCE(67);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(122);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(181);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(187);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(186);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(61);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(174);
      if (lookahead == '_') ADVANCE(50);
      if (lookahead == 'b') ADVANCE(117);
      if (lookahead == 'd') ADVANCE(205);
      if (lookahead == 'y') ADVANCE(113);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(121);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(181);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(187);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(186);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(61);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(174);
      if (lookahead == '_') ADVANCE(50);
      if (lookahead == 'b') ADVANCE(115);
      if (lookahead == 'd') ADVANCE(200);
      if (lookahead == 'y') ADVANCE(113);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(121);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(182);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(189);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(188);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(35);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(174);
      if (lookahead == '_') ADVANCE(50);
      if (lookahead == 'd') ADVANCE(178);
      if (lookahead == 'h') ADVANCE(109);
      if (lookahead == 'b' ||
          lookahead == 'y') ADVANCE(113);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(121);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(183);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(191);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(190);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(174);
      if (lookahead == '_') ADVANCE(50);
      if (lookahead == 'd') ADVANCE(178);
      if (lookahead == 'b' ||
          lookahead == 'y') ADVANCE(113);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(121);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(183);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(191);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(190);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(174);
      if (lookahead == 'd') ADVANCE(205);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(121);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(186);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(61);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(174);
      if (lookahead == 'd') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(187);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(61);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(174);
      if (lookahead == 'd') ADVANCE(200);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(121);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(188);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(35);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(174);
      if (lookahead == 'd') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(35);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(174);
      if (lookahead == 'd') ADVANCE(178);
      if (lookahead == 'h') ADVANCE(109);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(121);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(190);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(174);
      if (lookahead == 'd') ADVANCE(178);
      if (lookahead == 'h') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(174);
      if (lookahead == 'd') ADVANCE(178);
      if (lookahead == 'o' ||
          lookahead == 'q') ADVANCE(121);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(190);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(174);
      if (lookahead == 'd') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(175);
      if (lookahead == 'd') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(175);
      if (lookahead == 'd') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'd') ADVANCE(203);
      if (lookahead == 'h' ||
          lookahead == 'x') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(196);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(61);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'd') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(196);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(61);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'd') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(35);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'd') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'd') ADVANCE(178);
      if (lookahead == 'h') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'd') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'h') ADVANCE(109);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'h') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(204);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(202);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(35);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(204);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(35);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+') ADVANCE(59);
      if (lookahead == '-') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+') ADVANCE(58);
      if (lookahead == '-') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(89);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(91);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(97);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(99);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(110);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b' ||
          lookahead == 'y') ADVANCE(118);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(215);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('2' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(214);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 71},
  [2] = {.lex_state = 72},
  [3] = {.lex_state = 72},
  [4] = {.lex_state = 72},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 73},
  [7] = {.lex_state = 73},
  [8] = {.lex_state = 73},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 71},
  [11] = {.lex_state = 71},
  [12] = {.lex_state = 71},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 74},
  [15] = {.lex_state = 74},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 74},
  [19] = {.lex_state = 74},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 74},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 74},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 74},
  [27] = {.lex_state = 74},
  [28] = {.lex_state = 74},
  [29] = {.lex_state = 74},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 74},
  [32] = {.lex_state = 74},
  [33] = {.lex_state = 74},
  [34] = {.lex_state = 74},
  [35] = {.lex_state = 74},
  [36] = {.lex_state = 74},
  [37] = {.lex_state = 74},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 74},
  [40] = {.lex_state = 72},
  [41] = {.lex_state = 72},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 72},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 72},
  [46] = {.lex_state = 72},
  [47] = {.lex_state = 18},
  [48] = {.lex_state = 72},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 6},
  [51] = {.lex_state = 0},
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
    [sym_register] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(51),
    [sym__statement] = STATE(41),
    [sym_instruction] = STATE(41),
    [sym__normal_instruction] = STATE(45),
    [sym__gcc_pseudo_op] = STATE(45),
    [sym_label] = STATE(41),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [aux_sym_label_token1] = ACTIONS(7),
    [sym_gcc_mnemonic] = ACTIONS(9),
    [sym_mnemonic] = ACTIONS(11),
  },
  [2] = {
    [sym__operand] = STATE(19),
    [sym_pointer] = STATE(19),
    [sym_pointer_width] = STATE(42),
    [sym__deregister] = STATE(35),
    [sym_hexadecimal] = STATE(19),
    [sym_binary] = STATE(19),
    [sym_octal] = STATE(19),
    [sym__constant] = STATE(19),
    [sym_float] = STATE(19),
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
    [sym_identifier] = ACTIONS(25),
  },
  [3] = {
    [sym__operand] = STATE(28),
    [sym_pointer] = STATE(28),
    [sym_pointer_width] = STATE(42),
    [sym__deregister] = STATE(35),
    [sym_hexadecimal] = STATE(28),
    [sym_binary] = STATE(28),
    [sym_octal] = STATE(28),
    [sym__constant] = STATE(28),
    [sym_float] = STATE(28),
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
    [sym_identifier] = ACTIONS(33),
  },
  [4] = {
    [sym__operand] = STATE(28),
    [sym_pointer] = STATE(28),
    [sym_pointer_width] = STATE(42),
    [sym__deregister] = STATE(35),
    [sym_hexadecimal] = STATE(28),
    [sym_binary] = STATE(28),
    [sym_octal] = STATE(28),
    [sym__constant] = STATE(28),
    [sym_float] = STATE(28),
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
    [sym_register] = ACTIONS(33),
    [aux_sym_float_token1] = ACTIONS(27),
    [aux_sym_float_token2] = ACTIONS(27),
    [sym_integer] = ACTIONS(29),
    [sym_string] = ACTIONS(33),
    [sym_identifier] = ACTIONS(33),
  },
  [5] = {
    [sym__operand] = STATE(28),
    [sym_pointer] = STATE(28),
    [sym_pointer_width] = STATE(42),
    [sym__deregister] = STATE(35),
    [sym_hexadecimal] = STATE(28),
    [sym_binary] = STATE(28),
    [sym_octal] = STATE(28),
    [sym__constant] = STATE(28),
    [sym_float] = STATE(28),
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
    [sym_register] = ACTIONS(33),
    [aux_sym_float_token1] = ACTIONS(27),
    [aux_sym_float_token2] = ACTIONS(27),
    [sym_integer] = ACTIONS(29),
    [sym_string] = ACTIONS(43),
    [sym_identifier] = ACTIONS(33),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(21), 2,
      aux_sym_binary_token1,
      aux_sym_binary_token2,
    ACTIONS(23), 2,
      aux_sym_octal_token1,
      aux_sym_octal_token2,
    ACTIONS(27), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(45), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(19), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    ACTIONS(47), 3,
      sym_integer,
      sym_string,
      sym_identifier,
    STATE(15), 5,
      sym_hexadecimal,
      sym_binary,
      sym_octal,
      sym__constant,
      sym_float,
  [34] = 7,
    ACTIONS(21), 2,
      aux_sym_binary_token1,
      aux_sym_binary_token2,
    ACTIONS(23), 2,
      aux_sym_octal_token1,
      aux_sym_octal_token2,
    ACTIONS(27), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(49), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(19), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    ACTIONS(51), 3,
      sym_integer,
      sym_string,
      sym_identifier,
    STATE(33), 5,
      sym_hexadecimal,
      sym_binary,
      sym_octal,
      sym__constant,
      sym_float,
  [68] = 7,
    ACTIONS(21), 2,
      aux_sym_binary_token1,
      aux_sym_binary_token2,
    ACTIONS(23), 2,
      aux_sym_octal_token1,
      aux_sym_octal_token2,
    ACTIONS(27), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(53), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(19), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    ACTIONS(51), 3,
      sym_integer,
      sym_string,
      sym_identifier,
    STATE(33), 5,
      sym_hexadecimal,
      sym_binary,
      sym_octal,
      sym__constant,
      sym_float,
  [102] = 9,
    ACTIONS(19), 1,
      aux_sym_hexadecimal_token1,
    ACTIONS(23), 1,
      aux_sym_octal_token1,
    ACTIONS(41), 1,
      aux_sym_octal_token2,
    ACTIONS(55), 1,
      sym_string,
    ACTIONS(21), 2,
      aux_sym_binary_token1,
      aux_sym_binary_token2,
    ACTIONS(27), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(39), 2,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
    ACTIONS(51), 2,
      sym_integer,
      sym_identifier,
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
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    ACTIONS(59), 1,
      sym_comment,
    STATE(45), 2,
      sym__normal_instruction,
      sym__gcc_pseudo_op,
    STATE(48), 3,
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
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    STATE(45), 2,
      sym__normal_instruction,
      sym__gcc_pseudo_op,
    STATE(48), 3,
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
    ACTIONS(59), 1,
      sym_comment,
    STATE(45), 2,
      sym__normal_instruction,
      sym__gcc_pseudo_op,
    STATE(48), 3,
      sym__statement,
      sym_instruction,
      sym_label,
  [210] = 3,
    ACTIONS(65), 1,
      sym_register,
    STATE(22), 1,
      sym_hexadecimal,
    ACTIONS(63), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
  [222] = 4,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(67), 1,
      anon_sym_LF,
    STATE(21), 1,
      aux_sym__normal_instruction_repeat1,
    ACTIONS(69), 2,
      anon_sym_COMMA,
      anon_sym_,
  [236] = 4,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    ACTIONS(73), 1,
      anon_sym_LF,
    STATE(23), 1,
      aux_sym__gcc_pseudo_op_repeat1,
    ACTIONS(75), 2,
      anon_sym_COMMA,
      anon_sym_,
  [250] = 3,
    ACTIONS(79), 1,
      anon_sym_RBRACK,
    STATE(20), 1,
      aux_sym__deregister_repeat1,
    ACTIONS(77), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
  [262] = 3,
    ACTIONS(81), 1,
      sym_register,
    STATE(25), 1,
      sym_hexadecimal,
    ACTIONS(63), 3,
      aux_sym_hexadecimal_token1,
      aux_sym_hexadecimal_token2,
      aux_sym_hexadecimal_token3,
  [274] = 3,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
    ACTIONS(87), 1,
      anon_sym_LBRACK,
    ACTIONS(85), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [286] = 4,
    ACTIONS(89), 1,
      ts_builtin_sym_end,
    ACTIONS(91), 1,
      anon_sym_LF,
    STATE(14), 1,
      aux_sym__normal_instruction_repeat1,
    ACTIONS(93), 2,
      anon_sym_COMMA,
      anon_sym_,
  [300] = 3,
    ACTIONS(98), 1,
      anon_sym_RBRACK,
    STATE(20), 1,
      aux_sym__deregister_repeat1,
    ACTIONS(95), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
  [312] = 4,
    ACTIONS(100), 1,
      ts_builtin_sym_end,
    ACTIONS(102), 1,
      anon_sym_LF,
    STATE(21), 1,
      aux_sym__normal_instruction_repeat1,
    ACTIONS(104), 2,
      anon_sym_COMMA,
      anon_sym_,
  [326] = 3,
    ACTIONS(107), 1,
      anon_sym_RBRACK,
    STATE(16), 1,
      aux_sym__deregister_repeat1,
    ACTIONS(77), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
  [338] = 4,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    ACTIONS(109), 1,
      anon_sym_LF,
    STATE(26), 1,
      aux_sym__gcc_pseudo_op_repeat1,
    ACTIONS(111), 2,
      anon_sym_COMMA,
      anon_sym_,
  [352] = 3,
    ACTIONS(107), 1,
      anon_sym_RBRACK,
    STATE(20), 1,
      aux_sym__deregister_repeat1,
    ACTIONS(77), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
  [364] = 3,
    ACTIONS(113), 1,
      anon_sym_RBRACK,
    STATE(24), 1,
      aux_sym__deregister_repeat1,
    ACTIONS(77), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
  [376] = 4,
    ACTIONS(115), 1,
      ts_builtin_sym_end,
    ACTIONS(117), 1,
      anon_sym_LF,
    STATE(26), 1,
      aux_sym__gcc_pseudo_op_repeat1,
    ACTIONS(119), 2,
      anon_sym_COMMA,
      anon_sym_,
  [390] = 2,
    ACTIONS(122), 1,
      ts_builtin_sym_end,
    ACTIONS(124), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [399] = 2,
    ACTIONS(100), 1,
      ts_builtin_sym_end,
    ACTIONS(102), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [408] = 2,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
    ACTIONS(128), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [417] = 1,
    ACTIONS(122), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_RBRACK,
  [424] = 2,
    ACTIONS(130), 1,
      ts_builtin_sym_end,
    ACTIONS(132), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [433] = 2,
    ACTIONS(134), 1,
      ts_builtin_sym_end,
    ACTIONS(136), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [442] = 2,
    ACTIONS(115), 1,
      ts_builtin_sym_end,
    ACTIONS(117), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [451] = 2,
    ACTIONS(138), 1,
      ts_builtin_sym_end,
    ACTIONS(140), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [460] = 2,
    ACTIONS(142), 1,
      ts_builtin_sym_end,
    ACTIONS(144), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [469] = 2,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
    ACTIONS(148), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [478] = 2,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    ACTIONS(152), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [487] = 1,
    ACTIONS(98), 4,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_RBRACK,
  [494] = 2,
    ACTIONS(154), 1,
      ts_builtin_sym_end,
    ACTIONS(156), 3,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_,
  [503] = 3,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    ACTIONS(158), 1,
      anon_sym_LF,
    STATE(43), 1,
      aux_sym_program_repeat1,
  [513] = 3,
    ACTIONS(160), 1,
      ts_builtin_sym_end,
    ACTIONS(162), 1,
      anon_sym_LF,
    STATE(40), 1,
      aux_sym_program_repeat1,
  [523] = 3,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(164), 1,
      sym_integer,
    STATE(29), 1,
      sym__deregister,
  [533] = 3,
    ACTIONS(166), 1,
      ts_builtin_sym_end,
    ACTIONS(168), 1,
      anon_sym_LF,
    STATE(43), 1,
      aux_sym_program_repeat1,
  [543] = 1,
    ACTIONS(171), 2,
      anon_sym_LBRACK,
      sym_integer,
  [548] = 1,
    ACTIONS(173), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [553] = 1,
    ACTIONS(175), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [558] = 1,
    ACTIONS(177), 2,
      anon_sym_PTR,
      anon_sym_ptr,
  [563] = 1,
    ACTIONS(166), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [568] = 1,
    ACTIONS(179), 1,
      anon_sym_LBRACK,
  [572] = 1,
    ACTIONS(181), 1,
      sym_integer,
  [576] = 1,
    ACTIONS(183), 1,
      ts_builtin_sym_end,
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
  [SMALL_STATE(15)] = 236,
  [SMALL_STATE(16)] = 250,
  [SMALL_STATE(17)] = 262,
  [SMALL_STATE(18)] = 274,
  [SMALL_STATE(19)] = 286,
  [SMALL_STATE(20)] = 300,
  [SMALL_STATE(21)] = 312,
  [SMALL_STATE(22)] = 326,
  [SMALL_STATE(23)] = 338,
  [SMALL_STATE(24)] = 352,
  [SMALL_STATE(25)] = 364,
  [SMALL_STATE(26)] = 376,
  [SMALL_STATE(27)] = 390,
  [SMALL_STATE(28)] = 399,
  [SMALL_STATE(29)] = 408,
  [SMALL_STATE(30)] = 417,
  [SMALL_STATE(31)] = 424,
  [SMALL_STATE(32)] = 433,
  [SMALL_STATE(33)] = 442,
  [SMALL_STATE(34)] = 451,
  [SMALL_STATE(35)] = 460,
  [SMALL_STATE(36)] = 469,
  [SMALL_STATE(37)] = 478,
  [SMALL_STATE(38)] = 487,
  [SMALL_STATE(39)] = 494,
  [SMALL_STATE(40)] = 503,
  [SMALL_STATE(41)] = 513,
  [SMALL_STATE(42)] = 523,
  [SMALL_STATE(43)] = 533,
  [SMALL_STATE(44)] = 543,
  [SMALL_STATE(45)] = 548,
  [SMALL_STATE(46)] = 553,
  [SMALL_STATE(47)] = 558,
  [SMALL_STATE(48)] = 563,
  [SMALL_STATE(49)] = 568,
  [SMALL_STATE(50)] = 572,
  [SMALL_STATE(51)] = 576,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__normal_instruction, 1),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__normal_instruction, 4),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__normal_instruction, 3),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gcc_pseudo_op, 1),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gcc_pseudo_op, 4),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gcc_pseudo_op, 3),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__normal_instruction, 3),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gcc_pseudo_op, 2),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__gcc_pseudo_op, 2),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant, 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__constant, 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__normal_instruction, 2),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__normal_instruction, 2),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__deregister_repeat1, 2), SHIFT_REPEAT(50),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__deregister_repeat1, 2),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__normal_instruction_repeat1, 2),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat1, 2),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__normal_instruction_repeat1, 2), SHIFT_REPEAT(5),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__gcc_pseudo_op, 3),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__gcc_pseudo_op_repeat1, 2),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__gcc_pseudo_op_repeat1, 2),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__gcc_pseudo_op_repeat1, 2), SHIFT_REPEAT(9),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hexadecimal, 1),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hexadecimal, 1),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer, 2),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pointer, 2),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_octal, 1),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_octal, 1),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__deregister, 5),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__deregister, 5),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary, 1),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary, 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer, 1),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pointer, 1),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__deregister, 4),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__deregister, 4),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__deregister, 3),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__deregister, 3),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(12),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_width, 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [183] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
