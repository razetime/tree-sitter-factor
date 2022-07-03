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

#define LANGUAGE_VERSION 13
#define STATE_COUNT 107
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 69
#define ALIAS_COUNT 0
#define TOKEN_COUNT 53
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 1

enum {
  sym_shebang = 1,
  aux_sym_word_defn_token1 = 2,
  anon_sym_SEMI = 3,
  aux_sym_word_defn_token2 = 4,
  aux_sym_word_defn_token3 = 5,
  aux_sym_word_defn_token4 = 6,
  aux_sym_word_defn_token5 = 7,
  anon_sym_GENERIC_COLON = 8,
  anon_sym_GENERIC_POUND_COLON = 9,
  aux_sym_word_defn_token6 = 10,
  anon_sym_HOOK_COLON = 11,
  anon_sym_LPAREN = 12,
  anon_sym_DASH_DASH = 13,
  anon_sym_RPAREN = 14,
  anon_sym_COLON = 15,
  anon_sym_USING_COLON = 16,
  aux_sym_import_defn_token1 = 17,
  anon_sym_QUALIFIED_DASHWITH_COLON = 18,
  aux_sym_import_defn_token2 = 19,
  anon_sym_EQ_GT = 20,
  anon_sym_RENAME_COLON = 21,
  aux_sym_import_defn_token3 = 22,
  aux_sym_import_defn_token4 = 23,
  aux_sym_tuple_or_class_defn_token1 = 24,
  anon_sym_LT = 25,
  aux_sym_tuple_or_class_defn_token2 = 26,
  aux_sym_tuple_or_class_defn_token3 = 27,
  anon_sym_PREDICATE_COLON = 28,
  anon_sym_C_COLON = 29,
  anon_sym_INSTANCE_COLON = 30,
  anon_sym_SLOT_COLON = 31,
  anon_sym_SINGLETON_COLON = 32,
  anon_sym_SINGLETONS_COLON = 33,
  aux_sym_string_token1 = 34,
  aux_sym_string_token2 = 35,
  aux_sym_string_token3 = 36,
  aux_sym_string_token4 = 37,
  sym_bool = 38,
  aux_sym_number_token1 = 39,
  aux_sym_number_token2 = 40,
  aux_sym_number_token3 = 41,
  aux_sym_number_token4 = 42,
  aux_sym_number_token5 = 43,
  aux_sym_number_token6 = 44,
  aux_sym_number_token7 = 45,
  aux_sym_number_token8 = 46,
  sym_word = 47,
  sym_sname = 48,
  sym_ws = 49,
  aux_sym_comment_token1 = 50,
  aux_sym_comment_token2 = 51,
  aux_sym_comment_token3 = 52,
  sym_source_file = 53,
  sym__definition = 54,
  sym_word_defn = 55,
  sym_expr = 56,
  sym_stack_effect = 57,
  sym_effect = 58,
  sym_import_defn = 59,
  sym__token = 60,
  sym_string = 61,
  sym_number = 62,
  sym_namel = 63,
  sym_comment = 64,
  aux_sym_source_file_repeat1 = 65,
  aux_sym_expr_repeat1 = 66,
  aux_sym_effect_repeat1 = 67,
  aux_sym_namel_repeat1 = 68,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_shebang] = "shebang",
  [aux_sym_word_defn_token1] = "word_defn_token1",
  [anon_sym_SEMI] = ";",
  [aux_sym_word_defn_token2] = "word_defn_token2",
  [aux_sym_word_defn_token3] = "word_defn_token3",
  [aux_sym_word_defn_token4] = "word_defn_token4",
  [aux_sym_word_defn_token5] = "word_defn_token5",
  [anon_sym_GENERIC_COLON] = "GENERIC:",
  [anon_sym_GENERIC_POUND_COLON] = "GENERIC#:",
  [aux_sym_word_defn_token6] = "word_defn_token6",
  [anon_sym_HOOK_COLON] = "HOOK:",
  [anon_sym_LPAREN] = "(",
  [anon_sym_DASH_DASH] = "--",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COLON] = ":",
  [anon_sym_USING_COLON] = "USING:",
  [aux_sym_import_defn_token1] = "import_defn_token1",
  [anon_sym_QUALIFIED_DASHWITH_COLON] = "QUALIFIED-WITH:",
  [aux_sym_import_defn_token2] = "import_defn_token2",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_RENAME_COLON] = "RENAME:",
  [aux_sym_import_defn_token3] = "import_defn_token3",
  [aux_sym_import_defn_token4] = "import_defn_token4",
  [aux_sym_tuple_or_class_defn_token1] = "tuple_or_class_defn_token1",
  [anon_sym_LT] = "<",
  [aux_sym_tuple_or_class_defn_token2] = "tuple_or_class_defn_token2",
  [aux_sym_tuple_or_class_defn_token3] = "tuple_or_class_defn_token3",
  [anon_sym_PREDICATE_COLON] = "PREDICATE:",
  [anon_sym_C_COLON] = "C:",
  [anon_sym_INSTANCE_COLON] = "INSTANCE:",
  [anon_sym_SLOT_COLON] = "SLOT:",
  [anon_sym_SINGLETON_COLON] = "SINGLETON:",
  [anon_sym_SINGLETONS_COLON] = "SINGLETONS:",
  [aux_sym_string_token1] = "string_token1",
  [aux_sym_string_token2] = "string_token2",
  [aux_sym_string_token3] = "string_token3",
  [aux_sym_string_token4] = "string_token4",
  [sym_bool] = "bool",
  [aux_sym_number_token1] = "number_token1",
  [aux_sym_number_token2] = "number_token2",
  [aux_sym_number_token3] = "number_token3",
  [aux_sym_number_token4] = "number_token4",
  [aux_sym_number_token5] = "number_token5",
  [aux_sym_number_token6] = "number_token6",
  [aux_sym_number_token7] = "number_token7",
  [aux_sym_number_token8] = "number_token8",
  [sym_word] = "word",
  [sym_sname] = "sname",
  [sym_ws] = "ws",
  [aux_sym_comment_token1] = "comment_token1",
  [aux_sym_comment_token2] = "comment_token2",
  [aux_sym_comment_token3] = "comment_token3",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_word_defn] = "word_defn",
  [sym_expr] = "expr",
  [sym_stack_effect] = "stack_effect",
  [sym_effect] = "effect",
  [sym_import_defn] = "import_defn",
  [sym__token] = "_token",
  [sym_string] = "string",
  [sym_number] = "number",
  [sym_namel] = "namel",
  [sym_comment] = "comment",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_expr_repeat1] = "expr_repeat1",
  [aux_sym_effect_repeat1] = "effect_repeat1",
  [aux_sym_namel_repeat1] = "namel_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_shebang] = sym_shebang,
  [aux_sym_word_defn_token1] = aux_sym_word_defn_token1,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [aux_sym_word_defn_token2] = aux_sym_word_defn_token2,
  [aux_sym_word_defn_token3] = aux_sym_word_defn_token3,
  [aux_sym_word_defn_token4] = aux_sym_word_defn_token4,
  [aux_sym_word_defn_token5] = aux_sym_word_defn_token5,
  [anon_sym_GENERIC_COLON] = anon_sym_GENERIC_COLON,
  [anon_sym_GENERIC_POUND_COLON] = anon_sym_GENERIC_POUND_COLON,
  [aux_sym_word_defn_token6] = aux_sym_word_defn_token6,
  [anon_sym_HOOK_COLON] = anon_sym_HOOK_COLON,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_USING_COLON] = anon_sym_USING_COLON,
  [aux_sym_import_defn_token1] = aux_sym_import_defn_token1,
  [anon_sym_QUALIFIED_DASHWITH_COLON] = anon_sym_QUALIFIED_DASHWITH_COLON,
  [aux_sym_import_defn_token2] = aux_sym_import_defn_token2,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_RENAME_COLON] = anon_sym_RENAME_COLON,
  [aux_sym_import_defn_token3] = aux_sym_import_defn_token3,
  [aux_sym_import_defn_token4] = aux_sym_import_defn_token4,
  [aux_sym_tuple_or_class_defn_token1] = aux_sym_tuple_or_class_defn_token1,
  [anon_sym_LT] = anon_sym_LT,
  [aux_sym_tuple_or_class_defn_token2] = aux_sym_tuple_or_class_defn_token2,
  [aux_sym_tuple_or_class_defn_token3] = aux_sym_tuple_or_class_defn_token3,
  [anon_sym_PREDICATE_COLON] = anon_sym_PREDICATE_COLON,
  [anon_sym_C_COLON] = anon_sym_C_COLON,
  [anon_sym_INSTANCE_COLON] = anon_sym_INSTANCE_COLON,
  [anon_sym_SLOT_COLON] = anon_sym_SLOT_COLON,
  [anon_sym_SINGLETON_COLON] = anon_sym_SINGLETON_COLON,
  [anon_sym_SINGLETONS_COLON] = anon_sym_SINGLETONS_COLON,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [aux_sym_string_token3] = aux_sym_string_token3,
  [aux_sym_string_token4] = aux_sym_string_token4,
  [sym_bool] = sym_bool,
  [aux_sym_number_token1] = aux_sym_number_token1,
  [aux_sym_number_token2] = aux_sym_number_token2,
  [aux_sym_number_token3] = aux_sym_number_token3,
  [aux_sym_number_token4] = aux_sym_number_token4,
  [aux_sym_number_token5] = aux_sym_number_token5,
  [aux_sym_number_token6] = aux_sym_number_token6,
  [aux_sym_number_token7] = aux_sym_number_token7,
  [aux_sym_number_token8] = aux_sym_number_token8,
  [sym_word] = sym_word,
  [sym_sname] = sym_sname,
  [sym_ws] = sym_ws,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [aux_sym_comment_token2] = aux_sym_comment_token2,
  [aux_sym_comment_token3] = aux_sym_comment_token3,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_word_defn] = sym_word_defn,
  [sym_expr] = sym_expr,
  [sym_stack_effect] = sym_stack_effect,
  [sym_effect] = sym_effect,
  [sym_import_defn] = sym_import_defn,
  [sym__token] = sym__token,
  [sym_string] = sym_string,
  [sym_number] = sym_number,
  [sym_namel] = sym_namel,
  [sym_comment] = sym_comment,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_expr_repeat1] = aux_sym_expr_repeat1,
  [aux_sym_effect_repeat1] = aux_sym_effect_repeat1,
  [aux_sym_namel_repeat1] = aux_sym_namel_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_shebang] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_word_defn_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_word_defn_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_word_defn_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_word_defn_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_word_defn_token5] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_GENERIC_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GENERIC_POUND_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_word_defn_token6] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_HOOK_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_USING_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_import_defn_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_QUALIFIED_DASHWITH_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_import_defn_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RENAME_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_import_defn_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_import_defn_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tuple_or_class_defn_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_tuple_or_class_defn_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tuple_or_class_defn_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PREDICATE_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_C_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INSTANCE_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLOT_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SINGLETON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SINGLETONS_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_token4] = {
    .visible = false,
    .named = false,
  },
  [sym_bool] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_number_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_token8] = {
    .visible = false,
    .named = false,
  },
  [sym_word] = {
    .visible = true,
    .named = true,
  },
  [sym_sname] = {
    .visible = true,
    .named = true,
  },
  [sym_ws] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_token3] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_word_defn] = {
    .visible = true,
    .named = true,
  },
  [sym_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_stack_effect] = {
    .visible = true,
    .named = true,
  },
  [sym_effect] = {
    .visible = true,
    .named = true,
  },
  [sym_import_defn] = {
    .visible = true,
    .named = true,
  },
  [sym__token] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_namel] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expr_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_effect_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_namel_repeat1] = {
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(48);
      if (lookahead == '!') ADVANCE(475);
      if (lookahead == '"') ADVANCE(175);
      if (lookahead == '#') ADVANCE(174);
      if (lookahead == '(') ADVANCE(87);
      if (lookahead == ')') ADVANCE(90);
      if (lookahead == '+') ADVANCE(315);
      if (lookahead == ',') ADVANCE(317);
      if (lookahead == '-') ADVANCE(314);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == '/') ADVANCE(313);
      if (lookahead == '0') ADVANCE(81);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == ';') ADVANCE(59);
      if (lookahead == '<') ADVANCE(111);
      if (lookahead == '=') ADVANCE(354);
      if (lookahead == 'A') ADVANCE(410);
      if (lookahead == 'B') ADVANCE(468);
      if (lookahead == 'C') ADVANCE(331);
      if (lookahead == 'D') ADVANCE(370);
      if (lookahead == 'E') ADVANCE(445);
      if (lookahead == 'F') ADVANCE(432);
      if (lookahead == 'G') ADVANCE(374);
      if (lookahead == 'H') ADVANCE(434);
      if (lookahead == 'I') ADVANCE(419);
      if (lookahead == 'M') ADVANCE(332);
      if (lookahead == 'P') ADVANCE(430);
      if (lookahead == 'Q') ADVANCE(466);
      if (lookahead == 'R') ADVANCE(377);
      if (lookahead == 'S') ADVANCE(401);
      if (lookahead == 'T') ADVANCE(467);
      if (lookahead == 'U') ADVANCE(420);
      if (lookahead == 'f' ||
          lookahead == 't') ADVANCE(139);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(496);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (lookahead != 0) ADVANCE(488);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(498);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(497);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(500);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(499);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(53);
      if (lookahead == '"') ADVANCE(131);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(51);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(53);
      if (lookahead == '"') ADVANCE(130);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(51);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(52);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(294);
      if (lookahead == '"') ADVANCE(178);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '+') ADVANCE(182);
      if (lookahead == ',') ADVANCE(185);
      if (lookahead == '-') ADVANCE(183);
      if (lookahead == '.') ADVANCE(141);
      if (lookahead == '/') ADVANCE(181);
      if (lookahead == '0') ADVANCE(146);
      if (lookahead == ';') ADVANCE(58);
      if (lookahead == 'C') ADVANCE(243);
      if (lookahead == 'N') ADVANCE(218);
      if (lookahead == 'f' ||
          lookahead == 't') ADVANCE(138);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 9:
      if (lookahead == '!') ADVANCE(492);
      if (lookahead == '#') ADVANCE(489);
      if (lookahead == ')') ADVANCE(91);
      if (lookahead == '/') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead)) ADVANCE(495);
      END_STATE();
    case 10:
      if (lookahead == '!') ADVANCE(492);
      if (lookahead == '#') ADVANCE(489);
      if (lookahead == '-') ADVANCE(491);
      if (lookahead == '/') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead)) ADVANCE(495);
      END_STATE();
    case 11:
      if (lookahead == '!') ADVANCE(492);
      if (lookahead == '#') ADVANCE(489);
      if (lookahead == '/') ADVANCE(490);
      if (lookahead == ';') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead)) ADVANCE(495);
      END_STATE();
    case 12:
      if (lookahead == '!') ADVANCE(492);
      if (lookahead == '#') ADVANCE(489);
      if (lookahead == '/') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead)) ADVANCE(495);
      END_STATE();
    case 13:
      if (lookahead == '!') ADVANCE(27);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == '(') ADVANCE(86);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == '=') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 14:
      if (lookahead == '!') ADVANCE(40);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(121);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == '"') ADVANCE(121);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(122);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(129);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(129);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(132);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 21:
      if (lookahead == '*') ADVANCE(28);
      END_STATE();
    case 22:
      if (lookahead == ',') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(159);
      END_STATE();
    case 23:
      if (lookahead == ',') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      END_STATE();
    case 24:
      if (lookahead == '>') ADVANCE(102);
      END_STATE();
    case 25:
      if (lookahead == '\\') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 26:
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(137);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 27:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      END_STATE();
    case 28:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(31);
      END_STATE();
    case 29:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead == '*') ADVANCE(30);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 30:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead == '/') ADVANCE(501);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 31:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead == '"') ADVANCE(120);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 33:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead == '"') ADVANCE(32);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 34:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead == '"') ADVANCE(33);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 35:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 36:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(159);
      END_STATE();
    case 37:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(136);
      END_STATE();
    case 38:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(136);
      if (lookahead == '\\' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          ('r' <= lookahead && lookahead <= 't') ||
          lookahead == 'v') ADVANCE(39);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 39:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(136);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 40:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 41:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead == '"') ADVANCE(134);
      if (lookahead == '\\') ADVANCE(43);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 42:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead == '"') ADVANCE(133);
      if (lookahead == '\\') ADVANCE(43);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 43:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead == '"') ADVANCE(135);
      if (lookahead == '\\') ADVANCE(43);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 44:
      if (lookahead == '\\' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          ('r' <= lookahead && lookahead <= 't') ||
          lookahead == 'v') ADVANCE(37);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      END_STATE();
    case 46:
      if (eof) ADVANCE(48);
      if (lookahead == '!') ADVANCE(294);
      if (lookahead == '"') ADVANCE(178);
      if (lookahead == '#') ADVANCE(172);
      if (lookahead == '+') ADVANCE(182);
      if (lookahead == ',') ADVANCE(185);
      if (lookahead == '-') ADVANCE(183);
      if (lookahead == '.') ADVANCE(141);
      if (lookahead == '/') ADVANCE(181);
      if (lookahead == '0') ADVANCE(146);
      if (lookahead == ':') ADVANCE(55);
      if (lookahead == 'A') ADVANCE(251);
      if (lookahead == 'C') ADVANCE(243);
      if (lookahead == 'D') ADVANCE(225);
      if (lookahead == 'E') ADVANCE(289);
      if (lookahead == 'F') ADVANCE(264);
      if (lookahead == 'G') ADVANCE(229);
      if (lookahead == 'H') ADVANCE(268);
      if (lookahead == 'I') ADVANCE(257);
      if (lookahead == 'M') ADVANCE(199);
      if (lookahead == 'N') ADVANCE(218);
      if (lookahead == 'P') ADVANCE(265);
      if (lookahead == 'Q') ADVANCE(287);
      if (lookahead == 'R') ADVANCE(231);
      if (lookahead == 'T') ADVANCE(290);
      if (lookahead == 'U') ADVANCE(258);
      if (lookahead == 'f' ||
          lookahead == 't') ADVANCE(138);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 47:
      if (eof) ADVANCE(48);
      if (lookahead == '!') ADVANCE(294);
      if (lookahead == '"') ADVANCE(178);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '+') ADVANCE(182);
      if (lookahead == ',') ADVANCE(185);
      if (lookahead == '-') ADVANCE(183);
      if (lookahead == '.') ADVANCE(141);
      if (lookahead == '/') ADVANCE(181);
      if (lookahead == '0') ADVANCE(146);
      if (lookahead == ':') ADVANCE(55);
      if (lookahead == 'A') ADVANCE(251);
      if (lookahead == 'C') ADVANCE(243);
      if (lookahead == 'D') ADVANCE(225);
      if (lookahead == 'E') ADVANCE(289);
      if (lookahead == 'F') ADVANCE(264);
      if (lookahead == 'G') ADVANCE(229);
      if (lookahead == 'H') ADVANCE(268);
      if (lookahead == 'I') ADVANCE(257);
      if (lookahead == 'M') ADVANCE(199);
      if (lookahead == 'N') ADVANCE(218);
      if (lookahead == 'P') ADVANCE(265);
      if (lookahead == 'Q') ADVANCE(287);
      if (lookahead == 'R') ADVANCE(231);
      if (lookahead == 'T') ADVANCE(290);
      if (lookahead == 'U') ADVANCE(258);
      if (lookahead == 'f' ||
          lookahead == 't') ADVANCE(138);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_shebang);
      if (lookahead == '\n') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_shebang);
      if (lookahead == '\n') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(50);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_shebang);
      if (lookahead == '\n') ADVANCE(53);
      if (lookahead == '"') ADVANCE(131);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(51);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_shebang);
      if (lookahead == '\n') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(52);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_shebang);
      if (lookahead == '"') ADVANCE(129);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(53);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_shebang);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_word_defn_token1);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == ':') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_word_defn_token1);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_word_defn_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(495);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_word_defn_token2);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_word_defn_token2);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_word_defn_token2);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_word_defn_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_word_defn_token3);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_word_defn_token3);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_word_defn_token3);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_word_defn_token3);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_word_defn_token4);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == ':') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_word_defn_token4);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_word_defn_token4);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_word_defn_token4);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_word_defn_token5);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_word_defn_token5);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_word_defn_token5);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_word_defn_token5);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_GENERIC_COLON);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_GENERIC_COLON);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_GENERIC_POUND_COLON);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_GENERIC_POUND_COLON);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_word_defn_token6);
      if (lookahead == '+') ADVANCE(481);
      if (lookahead == ',') ADVANCE(319);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 'b') ADVANCE(474);
      if (lookahead == 'o') ADVANCE(479);
      if (lookahead == 'x') ADVANCE(487);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_word_defn_token6);
      if (lookahead == '+') ADVANCE(481);
      if (lookahead == ',') ADVANCE(319);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_word_defn_token6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_HOOK_COLON);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_HOOK_COLON);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(495);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(495);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_USING_COLON);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_USING_COLON);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_import_defn_token1);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_import_defn_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_QUALIFIED_DASHWITH_COLON);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_QUALIFIED_DASHWITH_COLON);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_import_defn_token2);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_import_defn_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_RENAME_COLON);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_RENAME_COLON);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_import_defn_token3);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_import_defn_token3);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_import_defn_token4);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_import_defn_token4);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_tuple_or_class_defn_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_tuple_or_class_defn_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_tuple_or_class_defn_token3);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_PREDICATE_COLON);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_C_COLON);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_INSTANCE_COLON);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_SLOT_COLON);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_SINGLETON_COLON);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_SINGLETONS_COLON);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '"') ADVANCE(121);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '"') ADVANCE(128);
      if (lookahead == '\\') ADVANCE(176);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0) ADVANCE(177);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead != 0) ADVANCE(310);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '"') ADVANCE(478);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '"') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead != 0) ADVANCE(310);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '"') ADVANCE(124);
      if (lookahead == '\\') ADVANCE(179);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead != 0) ADVANCE(311);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_string_token3);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '\n') ADVANCE(53);
      if (lookahead == '"') ADVANCE(131);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(51);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '\n') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(52);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '"') ADVANCE(129);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead == '"') ADVANCE(32);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead == '"') ADVANCE(134);
      if (lookahead == '\\') ADVANCE(43);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_string_token4);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(137);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_bool);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_bool);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == ',') ADVANCE(190);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '"') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == ',') ADVANCE(322);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == '+') ADVANCE(303);
      if (lookahead == ',') ADVANCE(187);
      if (lookahead == '.') ADVANCE(141);
      if (lookahead == 'b') ADVANCE(293);
      if (lookahead == 'o') ADVANCE(301);
      if (lookahead == 'x') ADVANCE(309);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == '+') ADVANCE(303);
      if (lookahead == ',') ADVANCE(187);
      if (lookahead == '.') ADVANCE(141);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == ',') ADVANCE(188);
      if (lookahead == '.') ADVANCE(141);
      if (lookahead == '/') ADVANCE(305);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == ',') ADVANCE(189);
      if (lookahead == '-') ADVANCE(308);
      if (lookahead == '.') ADVANCE(141);
      if (lookahead == '/') ADVANCE(306);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '"') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '+') ADVANCE(481);
      if (lookahead == ',') ADVANCE(319);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == ',') ADVANCE(320);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == '/') ADVANCE(483);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == ',') ADVANCE(321);
      if (lookahead == '-') ADVANCE(486);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == '/') ADVANCE(484);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == ',') ADVANCE(186);
      if (lookahead == 'p') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == ',') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (lookahead == ',') ADVANCE(318);
      if (lookahead == 'p') ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (lookahead == ',') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (lookahead == ',') ADVANCE(22);
      if (lookahead == 'p') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(159);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (lookahead == ',') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_number_token5);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_number_token5);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (lookahead == '"') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == ',') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (lookahead == ',') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_number_token8);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == ',') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_number_token8);
      if (lookahead == ',') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\n') ADVANCE(49);
      if (lookahead == '"') ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(50);
      if (lookahead != 0) ADVANCE(171);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\n') ADVANCE(53);
      if (lookahead == '"') ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(51);
      if (lookahead != 0) ADVANCE(171);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\n') ADVANCE(54);
      if (lookahead == '"') ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(52);
      if (lookahead != 0) ADVANCE(171);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '!') ADVANCE(169);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '!') ADVANCE(300);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '!') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(125);
      if (lookahead == '\\') ADVANCE(176);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0) ADVANCE(177);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(123);
      if (lookahead == '\\') ADVANCE(176);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0) ADVANCE(177);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(128);
      if (lookahead == '\\') ADVANCE(176);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0) ADVANCE(177);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(126);
      if (lookahead == '\\') ADVANCE(179);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0) ADVANCE(311);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(127);
      if (lookahead == '\\') ADVANCE(179);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0) ADVANCE(311);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == '#') ADVANCE(210);
      if (lookahead == ':') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == '*') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == ',') ADVANCE(185);
      if (lookahead == '.') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == ',') ADVANCE(185);
      if (lookahead == '.') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == ',') ADVANCE(185);
      if (lookahead == '.') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == ',') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == ',') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == ',') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == ',') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == ',') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == ',') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == ',') ADVANCE(192);
      if (lookahead == '/') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == ',') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == ',') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == ',') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == ',') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == ',') ADVANCE(197);
      if (lookahead == '/') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == ',') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == '-') ADVANCE(288);
      if (lookahead == ':') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == ':') ADVANCE(73);
      if (lookahead == 'A') ADVANCE(221);
      if (lookahead == 'E') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == ':') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == ':') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == ':') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == ':') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == ':') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == 'E') ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == ':') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == ':') ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == ':') ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == 'A') ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == 'A') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == 'A') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == 'A') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == 'A') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == 'C') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == 'C') ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == 'C') ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == 'D') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == 'D') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == 'D') ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == 'E') ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == 'E') ADVANCE(200);
      if (lookahead == 'I') ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == 'E') ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == 'E') ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == 'E') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == 'E') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == 'E') ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == 'E') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == 'E') ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == 'E') ADVANCE(275);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == 'E') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == 'E') ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == 'E') ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == 'F') ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == 'F') ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == 'F') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == 'G') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == 'G') ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == 'H') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == 'H') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == 'I') ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == 'I') ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == 'I') ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == 'I') ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == 'I') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == 'K') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == 'L') ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == 'L') ADVANCE(245);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == 'L') ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == 'M') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == 'M') ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == 'M') ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == 'N') ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == 'N') ADVANCE(285);
      if (lookahead == 'S') ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == 'N') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == 'N') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == 'N') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == 'N') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == 'N') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == 'O') ADVANCE(274);
      if (lookahead == 'R') ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == 'O') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == 'O') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == 'O') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == 'O') ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == 'O') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == 'O') ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == 'O') ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == 'P') ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == 'P') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == 'R') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == 'R') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == 'R') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == 'R') ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == 'R') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == 'S') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == 'S') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == 'S') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == 'T') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == 'T') ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == 'T') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == 'U') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == 'U') ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == 'U') ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == 'W') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == 'X') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == 'Y') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead != 0) ADVANCE(310);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(31);
      if (lookahead != 0) ADVANCE(310);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead != 0) ADVANCE(310);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0) ADVANCE(310);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead != 0) ADVANCE(310);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0) ADVANCE(310);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0) ADVANCE(310);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(310);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(124);
      if (lookahead == '\\') ADVANCE(179);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0) ADVANCE(311);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '#') ADVANCE(348);
      if (lookahead == ':') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '*') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ',') ADVANCE(317);
      if (lookahead == '-') ADVANCE(88);
      if (lookahead == '.') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ',') ADVANCE(317);
      if (lookahead == '.') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ',') ADVANCE(317);
      if (lookahead == '.') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ',') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ',') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ',') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ',') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ',') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ',') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ',') ADVANCE(324);
      if (lookahead == '/') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ',') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ',') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ',') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ',') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ',') ADVANCE(329);
      if (lookahead == '/') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ',') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(470);
      if (lookahead == ':') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == 'A') ADVANCE(364);
      if (lookahead == 'E') ADVANCE(417);
      if (lookahead == 'I') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(97);
      if (lookahead == 'S') ADVANCE(459);
      if (lookahead == 'T') ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(71);
      if (lookahead == 'E') ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'S') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '>') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(418);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'C') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'C') ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'C') ADVANCE(357);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'C') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'C') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'C') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'D') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'D') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'D') ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'D') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(390);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(334);
      if (lookahead == 'I') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'F') ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'F') ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'F') ADVANCE(407);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'G') ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'G') ADVANCE(345);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'G') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'H') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(422);
      if (lookahead == 'L') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(437);
      if (lookahead == 'U') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'K') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'L') ADVANCE(399);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'L') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'L') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'L') ADVANCE(398);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'L') ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'L') ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'M') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'M') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'M') ADVANCE(386);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(404);
      if (lookahead == 'S') ADVANCE(372);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(395);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(394);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(365);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(453);
      if (lookahead == 'R') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(409);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(446);
      if (lookahead == 'R') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(416);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'P') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'P') ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'P') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(447);
      if (lookahead == 'X') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'S') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'S') ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'S') ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'S') ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(405);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'U') ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'U') ADVANCE(442);
      if (lookahead == 'Y') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'U') ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'U') ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'W') ADVANCE(406);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'X') ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead != 0) ADVANCE(488);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(31);
      if (lookahead != 0) ADVANCE(488);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0) ADVANCE(488);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(488);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_word);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == '!') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(495);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == '*') ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(495);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == '-') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(495);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead != 0) ADVANCE(495);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(31);
      if (lookahead != 0) ADVANCE(495);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0) ADVANCE(495);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(495);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_ws);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(496);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(498);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\n') ADVANCE(500);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_comment_token3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 46},
  [2] = {.lex_state = 47},
  [3] = {.lex_state = 47},
  [4] = {.lex_state = 47},
  [5] = {.lex_state = 47},
  [6] = {.lex_state = 47},
  [7] = {.lex_state = 8},
  [8] = {.lex_state = 8},
  [9] = {.lex_state = 8},
  [10] = {.lex_state = 8},
  [11] = {.lex_state = 9},
  [12] = {.lex_state = 10},
  [13] = {.lex_state = 9},
  [14] = {.lex_state = 12},
  [15] = {.lex_state = 10},
  [16] = {.lex_state = 10},
  [17] = {.lex_state = 9},
  [18] = {.lex_state = 12},
  [19] = {.lex_state = 9},
  [20] = {.lex_state = 11},
  [21] = {.lex_state = 11},
  [22] = {.lex_state = 10},
  [23] = {.lex_state = 13},
  [24] = {.lex_state = 13},
  [25] = {.lex_state = 13},
  [26] = {.lex_state = 13},
  [27] = {.lex_state = 9},
  [28] = {.lex_state = 13},
  [29] = {.lex_state = 10},
  [30] = {.lex_state = 11},
  [31] = {.lex_state = 13},
  [32] = {.lex_state = 9},
  [33] = {.lex_state = 13},
  [34] = {.lex_state = 12},
  [35] = {.lex_state = 10},
  [36] = {.lex_state = 12},
  [37] = {.lex_state = 12},
  [38] = {.lex_state = 12},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 12},
  [51] = {.lex_state = 13},
  [52] = {.lex_state = 12},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 12},
  [55] = {.lex_state = 13},
  [56] = {.lex_state = 12},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 12},
  [66] = {.lex_state = 12},
  [67] = {.lex_state = 12},
  [68] = {.lex_state = 13},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 12},
  [71] = {.lex_state = 12},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 12},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 9},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 9},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_word_defn_token1] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [aux_sym_word_defn_token2] = ACTIONS(1),
    [aux_sym_word_defn_token3] = ACTIONS(1),
    [aux_sym_word_defn_token4] = ACTIONS(1),
    [aux_sym_word_defn_token5] = ACTIONS(1),
    [anon_sym_GENERIC_COLON] = ACTIONS(1),
    [anon_sym_GENERIC_POUND_COLON] = ACTIONS(1),
    [aux_sym_word_defn_token6] = ACTIONS(1),
    [anon_sym_HOOK_COLON] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_USING_COLON] = ACTIONS(1),
    [aux_sym_import_defn_token1] = ACTIONS(1),
    [anon_sym_QUALIFIED_DASHWITH_COLON] = ACTIONS(1),
    [aux_sym_import_defn_token2] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_RENAME_COLON] = ACTIONS(1),
    [aux_sym_import_defn_token3] = ACTIONS(1),
    [aux_sym_import_defn_token4] = ACTIONS(1),
    [aux_sym_tuple_or_class_defn_token1] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [aux_sym_tuple_or_class_defn_token2] = ACTIONS(1),
    [aux_sym_tuple_or_class_defn_token3] = ACTIONS(1),
    [anon_sym_PREDICATE_COLON] = ACTIONS(1),
    [anon_sym_C_COLON] = ACTIONS(1),
    [anon_sym_INSTANCE_COLON] = ACTIONS(1),
    [anon_sym_SLOT_COLON] = ACTIONS(1),
    [anon_sym_SINGLETON_COLON] = ACTIONS(1),
    [anon_sym_SINGLETONS_COLON] = ACTIONS(1),
    [aux_sym_string_token1] = ACTIONS(1),
    [aux_sym_string_token2] = ACTIONS(1),
    [sym_bool] = ACTIONS(1),
    [aux_sym_number_token1] = ACTIONS(1),
    [aux_sym_number_token2] = ACTIONS(1),
    [aux_sym_number_token3] = ACTIONS(1),
    [aux_sym_number_token5] = ACTIONS(1),
    [aux_sym_number_token6] = ACTIONS(1),
    [aux_sym_number_token7] = ACTIONS(1),
    [aux_sym_number_token8] = ACTIONS(1),
    [sym_word] = ACTIONS(1),
    [sym_sname] = ACTIONS(1),
    [sym_ws] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(3),
    [aux_sym_comment_token2] = ACTIONS(5),
    [aux_sym_comment_token3] = ACTIONS(5),
  },
  [1] = {
    [sym_source_file] = STATE(79),
    [sym__definition] = STATE(76),
    [sym_word_defn] = STATE(72),
    [sym_import_defn] = STATE(72),
    [sym__token] = STATE(72),
    [sym_string] = STATE(83),
    [sym_number] = STATE(83),
    [sym_comment] = STATE(1),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_shebang] = ACTIONS(9),
    [aux_sym_word_defn_token1] = ACTIONS(11),
    [aux_sym_word_defn_token2] = ACTIONS(11),
    [aux_sym_word_defn_token3] = ACTIONS(11),
    [aux_sym_word_defn_token4] = ACTIONS(11),
    [aux_sym_word_defn_token5] = ACTIONS(13),
    [anon_sym_GENERIC_COLON] = ACTIONS(15),
    [anon_sym_GENERIC_POUND_COLON] = ACTIONS(17),
    [anon_sym_HOOK_COLON] = ACTIONS(19),
    [anon_sym_USING_COLON] = ACTIONS(21),
    [aux_sym_import_defn_token1] = ACTIONS(23),
    [anon_sym_QUALIFIED_DASHWITH_COLON] = ACTIONS(25),
    [aux_sym_import_defn_token2] = ACTIONS(27),
    [anon_sym_RENAME_COLON] = ACTIONS(29),
    [aux_sym_import_defn_token3] = ACTIONS(25),
    [aux_sym_import_defn_token4] = ACTIONS(23),
    [aux_sym_string_token1] = ACTIONS(31),
    [aux_sym_string_token2] = ACTIONS(33),
    [aux_sym_string_token3] = ACTIONS(33),
    [aux_sym_string_token4] = ACTIONS(31),
    [sym_bool] = ACTIONS(35),
    [aux_sym_number_token1] = ACTIONS(37),
    [aux_sym_number_token2] = ACTIONS(37),
    [aux_sym_number_token3] = ACTIONS(37),
    [aux_sym_number_token4] = ACTIONS(39),
    [aux_sym_number_token5] = ACTIONS(37),
    [aux_sym_number_token6] = ACTIONS(37),
    [aux_sym_number_token7] = ACTIONS(37),
    [aux_sym_number_token8] = ACTIONS(37),
    [sym_word] = ACTIONS(35),
    [aux_sym_comment_token1] = ACTIONS(3),
    [aux_sym_comment_token2] = ACTIONS(9),
    [aux_sym_comment_token3] = ACTIONS(5),
  },
  [2] = {
    [sym__definition] = STATE(76),
    [sym_word_defn] = STATE(72),
    [sym_import_defn] = STATE(72),
    [sym__token] = STATE(72),
    [sym_string] = STATE(83),
    [sym_number] = STATE(83),
    [sym_comment] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(41),
    [aux_sym_word_defn_token1] = ACTIONS(43),
    [aux_sym_word_defn_token2] = ACTIONS(43),
    [aux_sym_word_defn_token3] = ACTIONS(43),
    [aux_sym_word_defn_token4] = ACTIONS(43),
    [aux_sym_word_defn_token5] = ACTIONS(46),
    [anon_sym_GENERIC_COLON] = ACTIONS(49),
    [anon_sym_GENERIC_POUND_COLON] = ACTIONS(52),
    [anon_sym_HOOK_COLON] = ACTIONS(55),
    [anon_sym_USING_COLON] = ACTIONS(58),
    [aux_sym_import_defn_token1] = ACTIONS(61),
    [anon_sym_QUALIFIED_DASHWITH_COLON] = ACTIONS(64),
    [aux_sym_import_defn_token2] = ACTIONS(67),
    [anon_sym_RENAME_COLON] = ACTIONS(70),
    [aux_sym_import_defn_token3] = ACTIONS(64),
    [aux_sym_import_defn_token4] = ACTIONS(61),
    [aux_sym_string_token1] = ACTIONS(73),
    [aux_sym_string_token2] = ACTIONS(76),
    [aux_sym_string_token3] = ACTIONS(76),
    [aux_sym_string_token4] = ACTIONS(73),
    [sym_bool] = ACTIONS(79),
    [aux_sym_number_token1] = ACTIONS(82),
    [aux_sym_number_token2] = ACTIONS(82),
    [aux_sym_number_token3] = ACTIONS(82),
    [aux_sym_number_token4] = ACTIONS(85),
    [aux_sym_number_token5] = ACTIONS(82),
    [aux_sym_number_token6] = ACTIONS(82),
    [aux_sym_number_token7] = ACTIONS(82),
    [aux_sym_number_token8] = ACTIONS(82),
    [sym_word] = ACTIONS(79),
    [aux_sym_comment_token1] = ACTIONS(3),
    [aux_sym_comment_token2] = ACTIONS(5),
    [aux_sym_comment_token3] = ACTIONS(5),
  },
  [3] = {
    [sym__definition] = STATE(76),
    [sym_word_defn] = STATE(72),
    [sym_import_defn] = STATE(72),
    [sym__token] = STATE(72),
    [sym_string] = STATE(83),
    [sym_number] = STATE(83),
    [sym_comment] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(88),
    [aux_sym_word_defn_token1] = ACTIONS(11),
    [aux_sym_word_defn_token2] = ACTIONS(11),
    [aux_sym_word_defn_token3] = ACTIONS(11),
    [aux_sym_word_defn_token4] = ACTIONS(11),
    [aux_sym_word_defn_token5] = ACTIONS(13),
    [anon_sym_GENERIC_COLON] = ACTIONS(15),
    [anon_sym_GENERIC_POUND_COLON] = ACTIONS(17),
    [anon_sym_HOOK_COLON] = ACTIONS(19),
    [anon_sym_USING_COLON] = ACTIONS(21),
    [aux_sym_import_defn_token1] = ACTIONS(23),
    [anon_sym_QUALIFIED_DASHWITH_COLON] = ACTIONS(25),
    [aux_sym_import_defn_token2] = ACTIONS(27),
    [anon_sym_RENAME_COLON] = ACTIONS(29),
    [aux_sym_import_defn_token3] = ACTIONS(25),
    [aux_sym_import_defn_token4] = ACTIONS(23),
    [aux_sym_string_token1] = ACTIONS(31),
    [aux_sym_string_token2] = ACTIONS(33),
    [aux_sym_string_token3] = ACTIONS(33),
    [aux_sym_string_token4] = ACTIONS(31),
    [sym_bool] = ACTIONS(35),
    [aux_sym_number_token1] = ACTIONS(37),
    [aux_sym_number_token2] = ACTIONS(37),
    [aux_sym_number_token3] = ACTIONS(37),
    [aux_sym_number_token4] = ACTIONS(39),
    [aux_sym_number_token5] = ACTIONS(37),
    [aux_sym_number_token6] = ACTIONS(37),
    [aux_sym_number_token7] = ACTIONS(37),
    [aux_sym_number_token8] = ACTIONS(37),
    [sym_word] = ACTIONS(35),
    [aux_sym_comment_token1] = ACTIONS(3),
    [aux_sym_comment_token2] = ACTIONS(5),
    [aux_sym_comment_token3] = ACTIONS(5),
  },
  [4] = {
    [sym__definition] = STATE(76),
    [sym_word_defn] = STATE(72),
    [sym_import_defn] = STATE(72),
    [sym__token] = STATE(72),
    [sym_string] = STATE(83),
    [sym_number] = STATE(83),
    [sym_comment] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(90),
    [aux_sym_word_defn_token1] = ACTIONS(11),
    [aux_sym_word_defn_token2] = ACTIONS(11),
    [aux_sym_word_defn_token3] = ACTIONS(11),
    [aux_sym_word_defn_token4] = ACTIONS(11),
    [aux_sym_word_defn_token5] = ACTIONS(13),
    [anon_sym_GENERIC_COLON] = ACTIONS(15),
    [anon_sym_GENERIC_POUND_COLON] = ACTIONS(17),
    [anon_sym_HOOK_COLON] = ACTIONS(19),
    [anon_sym_USING_COLON] = ACTIONS(21),
    [aux_sym_import_defn_token1] = ACTIONS(23),
    [anon_sym_QUALIFIED_DASHWITH_COLON] = ACTIONS(25),
    [aux_sym_import_defn_token2] = ACTIONS(27),
    [anon_sym_RENAME_COLON] = ACTIONS(29),
    [aux_sym_import_defn_token3] = ACTIONS(25),
    [aux_sym_import_defn_token4] = ACTIONS(23),
    [aux_sym_string_token1] = ACTIONS(31),
    [aux_sym_string_token2] = ACTIONS(33),
    [aux_sym_string_token3] = ACTIONS(33),
    [aux_sym_string_token4] = ACTIONS(31),
    [sym_bool] = ACTIONS(35),
    [aux_sym_number_token1] = ACTIONS(37),
    [aux_sym_number_token2] = ACTIONS(37),
    [aux_sym_number_token3] = ACTIONS(37),
    [aux_sym_number_token4] = ACTIONS(39),
    [aux_sym_number_token5] = ACTIONS(37),
    [aux_sym_number_token6] = ACTIONS(37),
    [aux_sym_number_token7] = ACTIONS(37),
    [aux_sym_number_token8] = ACTIONS(37),
    [sym_word] = ACTIONS(35),
    [aux_sym_comment_token1] = ACTIONS(3),
    [aux_sym_comment_token2] = ACTIONS(5),
    [aux_sym_comment_token3] = ACTIONS(5),
  },
  [5] = {
    [sym__definition] = STATE(76),
    [sym_word_defn] = STATE(72),
    [sym_import_defn] = STATE(72),
    [sym__token] = STATE(72),
    [sym_string] = STATE(83),
    [sym_number] = STATE(83),
    [sym_comment] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(88),
    [aux_sym_word_defn_token1] = ACTIONS(11),
    [aux_sym_word_defn_token2] = ACTIONS(11),
    [aux_sym_word_defn_token3] = ACTIONS(11),
    [aux_sym_word_defn_token4] = ACTIONS(11),
    [aux_sym_word_defn_token5] = ACTIONS(13),
    [anon_sym_GENERIC_COLON] = ACTIONS(15),
    [anon_sym_GENERIC_POUND_COLON] = ACTIONS(17),
    [anon_sym_HOOK_COLON] = ACTIONS(19),
    [anon_sym_USING_COLON] = ACTIONS(21),
    [aux_sym_import_defn_token1] = ACTIONS(23),
    [anon_sym_QUALIFIED_DASHWITH_COLON] = ACTIONS(25),
    [aux_sym_import_defn_token2] = ACTIONS(27),
    [anon_sym_RENAME_COLON] = ACTIONS(29),
    [aux_sym_import_defn_token3] = ACTIONS(25),
    [aux_sym_import_defn_token4] = ACTIONS(23),
    [aux_sym_string_token1] = ACTIONS(31),
    [aux_sym_string_token2] = ACTIONS(33),
    [aux_sym_string_token3] = ACTIONS(33),
    [aux_sym_string_token4] = ACTIONS(31),
    [sym_bool] = ACTIONS(35),
    [aux_sym_number_token1] = ACTIONS(37),
    [aux_sym_number_token2] = ACTIONS(37),
    [aux_sym_number_token3] = ACTIONS(37),
    [aux_sym_number_token4] = ACTIONS(39),
    [aux_sym_number_token5] = ACTIONS(37),
    [aux_sym_number_token6] = ACTIONS(37),
    [aux_sym_number_token7] = ACTIONS(37),
    [aux_sym_number_token8] = ACTIONS(37),
    [sym_word] = ACTIONS(35),
    [aux_sym_comment_token1] = ACTIONS(3),
    [aux_sym_comment_token2] = ACTIONS(5),
    [aux_sym_comment_token3] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(6), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(41), 4,
      ts_builtin_sym_end,
      aux_sym_string_token1,
      aux_sym_string_token4,
      aux_sym_number_token4,
    ACTIONS(92), 26,
      aux_sym_word_defn_token1,
      aux_sym_word_defn_token2,
      aux_sym_word_defn_token3,
      aux_sym_word_defn_token4,
      aux_sym_word_defn_token5,
      anon_sym_GENERIC_COLON,
      anon_sym_GENERIC_POUND_COLON,
      anon_sym_HOOK_COLON,
      anon_sym_USING_COLON,
      aux_sym_import_defn_token1,
      anon_sym_QUALIFIED_DASHWITH_COLON,
      aux_sym_import_defn_token2,
      anon_sym_RENAME_COLON,
      aux_sym_import_defn_token3,
      aux_sym_import_defn_token4,
      aux_sym_string_token2,
      aux_sym_string_token3,
      sym_bool,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token5,
      aux_sym_number_token6,
      aux_sym_number_token7,
      aux_sym_number_token8,
      sym_word,
  [45] = 13,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(39), 1,
      aux_sym_number_token4,
    ACTIONS(94), 1,
      anon_sym_SEMI,
    STATE(7), 1,
      sym_comment,
    STATE(8), 1,
      aux_sym_expr_repeat1,
    STATE(74), 1,
      sym_expr,
    STATE(75), 1,
      sym__token,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(31), 2,
      aux_sym_string_token1,
      aux_sym_string_token4,
    ACTIONS(33), 2,
      aux_sym_string_token2,
      aux_sym_string_token3,
    ACTIONS(35), 2,
      sym_bool,
      sym_word,
    STATE(83), 2,
      sym_string,
      sym_number,
    ACTIONS(37), 7,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token5,
      aux_sym_number_token6,
      aux_sym_number_token7,
      aux_sym_number_token8,
  [96] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(39), 1,
      aux_sym_number_token4,
    ACTIONS(96), 1,
      anon_sym_SEMI,
    STATE(8), 1,
      sym_comment,
    STATE(9), 1,
      aux_sym_expr_repeat1,
    STATE(75), 1,
      sym__token,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(31), 2,
      aux_sym_string_token1,
      aux_sym_string_token4,
    ACTIONS(33), 2,
      aux_sym_string_token2,
      aux_sym_string_token3,
    ACTIONS(35), 2,
      sym_bool,
      sym_word,
    STATE(83), 2,
      sym_string,
      sym_number,
    ACTIONS(37), 7,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token5,
      aux_sym_number_token6,
      aux_sym_number_token7,
      aux_sym_number_token8,
  [144] = 11,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(98), 1,
      anon_sym_SEMI,
    ACTIONS(112), 1,
      aux_sym_number_token4,
    STATE(75), 1,
      sym__token,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(100), 2,
      aux_sym_string_token1,
      aux_sym_string_token4,
    ACTIONS(103), 2,
      aux_sym_string_token2,
      aux_sym_string_token3,
    ACTIONS(106), 2,
      sym_bool,
      sym_word,
    STATE(9), 2,
      sym_comment,
      aux_sym_expr_repeat1,
    STATE(83), 2,
      sym_string,
      sym_number,
    ACTIONS(109), 7,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token5,
      aux_sym_number_token6,
      aux_sym_number_token7,
      aux_sym_number_token8,
  [190] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(10), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(115), 3,
      aux_sym_string_token1,
      aux_sym_string_token4,
      aux_sym_number_token4,
    ACTIONS(98), 12,
      anon_sym_SEMI,
      aux_sym_string_token2,
      aux_sym_string_token3,
      sym_bool,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token5,
      aux_sym_number_token6,
      aux_sym_number_token7,
      aux_sym_number_token8,
      sym_word,
  [220] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(117), 1,
      anon_sym_RPAREN,
    ACTIONS(119), 1,
      sym_sname,
    STATE(11), 1,
      sym_comment,
    STATE(17), 1,
      aux_sym_effect_repeat1,
    STATE(90), 1,
      sym_effect,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [243] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(121), 1,
      anon_sym_DASH_DASH,
    ACTIONS(123), 1,
      sym_sname,
    STATE(12), 1,
      sym_comment,
    STATE(16), 1,
      aux_sym_effect_repeat1,
    STATE(35), 1,
      sym_effect,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [266] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(119), 1,
      sym_sname,
    ACTIONS(125), 1,
      anon_sym_RPAREN,
    STATE(13), 1,
      sym_comment,
    STATE(17), 1,
      aux_sym_effect_repeat1,
    STATE(96), 1,
      sym_effect,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [289] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(127), 1,
      sym_sname,
    STATE(14), 1,
      sym_comment,
    STATE(20), 1,
      aux_sym_namel_repeat1,
    STATE(45), 1,
      sym_namel,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [309] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(129), 1,
      anon_sym_DASH_DASH,
    ACTIONS(131), 1,
      sym_sname,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    STATE(15), 2,
      sym_comment,
      aux_sym_effect_repeat1,
  [327] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(123), 1,
      sym_sname,
    ACTIONS(134), 1,
      anon_sym_DASH_DASH,
    STATE(15), 1,
      aux_sym_effect_repeat1,
    STATE(16), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [347] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(119), 1,
      sym_sname,
    ACTIONS(134), 1,
      anon_sym_RPAREN,
    STATE(17), 1,
      sym_comment,
    STATE(19), 1,
      aux_sym_effect_repeat1,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [367] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(127), 1,
      sym_sname,
    STATE(18), 1,
      sym_comment,
    STATE(20), 1,
      aux_sym_namel_repeat1,
    STATE(77), 1,
      sym_namel,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [387] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(129), 1,
      anon_sym_RPAREN,
    ACTIONS(136), 1,
      sym_sname,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    STATE(19), 2,
      sym_comment,
      aux_sym_effect_repeat1,
  [405] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(127), 1,
      sym_sname,
    ACTIONS(139), 1,
      anon_sym_SEMI,
    STATE(20), 1,
      sym_comment,
    STATE(21), 1,
      aux_sym_namel_repeat1,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [425] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(141), 1,
      anon_sym_SEMI,
    ACTIONS(143), 1,
      sym_sname,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    STATE(21), 2,
      sym_comment,
      aux_sym_namel_repeat1,
  [443] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(22), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(129), 2,
      anon_sym_DASH_DASH,
      sym_sname,
  [458] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(146), 1,
      anon_sym_LPAREN,
    STATE(23), 1,
      sym_comment,
    STATE(59), 1,
      sym_stack_effect,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [475] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(148), 1,
      anon_sym_COLON,
    ACTIONS(150), 1,
      sym_ws,
    STATE(24), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [492] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(146), 1,
      anon_sym_LPAREN,
    STATE(25), 1,
      sym_comment,
    STATE(104), 1,
      sym_stack_effect,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [509] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(146), 1,
      anon_sym_LPAREN,
    STATE(26), 1,
      sym_comment,
    STATE(73), 1,
      sym_stack_effect,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [526] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(27), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(129), 2,
      anon_sym_RPAREN,
      sym_sname,
  [541] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(146), 1,
      anon_sym_LPAREN,
    STATE(28), 1,
      sym_comment,
    STATE(95), 1,
      sym_stack_effect,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [558] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(29), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(152), 2,
      anon_sym_DASH_DASH,
      sym_sname,
  [573] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(30), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(141), 2,
      anon_sym_SEMI,
      sym_sname,
  [588] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(146), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      sym_comment,
    STATE(58), 1,
      sym_stack_effect,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [605] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(32), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(152), 2,
      anon_sym_RPAREN,
      sym_sname,
  [620] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(154), 1,
      anon_sym_COLON,
    ACTIONS(156), 1,
      sym_ws,
    STATE(33), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [637] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(158), 1,
      sym_sname,
    STATE(34), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [651] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(160), 1,
      anon_sym_DASH_DASH,
    STATE(35), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [665] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(162), 1,
      sym_sname,
    STATE(36), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [679] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(164), 1,
      sym_sname,
    STATE(37), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [693] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(166), 1,
      sym_sname,
    STATE(38), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [707] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(168), 1,
      sym_ws,
    STATE(39), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [721] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(170), 1,
      sym_ws,
    STATE(40), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [735] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(172), 1,
      sym_ws,
    STATE(41), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [749] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(174), 1,
      sym_ws,
    STATE(42), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [763] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(176), 1,
      sym_ws,
    STATE(43), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [777] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(178), 1,
      sym_ws,
    STATE(44), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [791] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(180), 1,
      anon_sym_SEMI,
    STATE(45), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [805] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(182), 1,
      sym_ws,
    STATE(46), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [819] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(184), 1,
      sym_ws,
    STATE(47), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [833] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(186), 1,
      sym_ws,
    STATE(48), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [847] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(188), 1,
      sym_ws,
    STATE(49), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [861] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(190), 1,
      sym_sname,
    STATE(50), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [875] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(192), 1,
      aux_sym_word_defn_token6,
    STATE(51), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [889] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(194), 1,
      sym_sname,
    STATE(52), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [903] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(196), 1,
      sym_ws,
    STATE(53), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [917] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(198), 1,
      sym_sname,
    STATE(54), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [931] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(200), 1,
      anon_sym_EQ_GT,
    STATE(55), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [945] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(202), 1,
      sym_sname,
    STATE(56), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [959] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(204), 1,
      sym_ws,
    STATE(57), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [973] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(206), 1,
      sym_ws,
    STATE(58), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [987] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(208), 1,
      sym_ws,
    STATE(59), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1001] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(210), 1,
      sym_ws,
    STATE(60), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1015] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(212), 1,
      sym_ws,
    STATE(61), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1029] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(214), 1,
      sym_ws,
    STATE(62), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1043] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(216), 1,
      sym_ws,
    STATE(63), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1057] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(218), 1,
      sym_ws,
    STATE(64), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1071] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(220), 1,
      sym_sname,
    STATE(65), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1085] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(222), 1,
      sym_sname,
    STATE(66), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1099] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(224), 1,
      sym_sname,
    STATE(67), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1113] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(226), 1,
      anon_sym_EQ_GT,
    STATE(68), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1127] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(228), 1,
      sym_ws,
    STATE(69), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1141] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(230), 1,
      sym_sname,
    STATE(70), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1155] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(232), 1,
      sym_sname,
    STATE(71), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1169] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(234), 1,
      sym_ws,
    STATE(72), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1183] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(236), 1,
      sym_ws,
    STATE(73), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1197] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(238), 1,
      anon_sym_SEMI,
    STATE(74), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1211] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(240), 1,
      sym_ws,
    STATE(75), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1225] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(242), 1,
      sym_ws,
    STATE(76), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1239] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(244), 1,
      anon_sym_SEMI,
    STATE(77), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1253] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(246), 1,
      sym_ws,
    STATE(78), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1267] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(248), 1,
      ts_builtin_sym_end,
    STATE(79), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1281] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(250), 1,
      sym_ws,
    STATE(80), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1295] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(252), 1,
      sym_ws,
    STATE(81), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1309] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(254), 1,
      sym_ws,
    STATE(82), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1323] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(256), 1,
      sym_ws,
    STATE(83), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1337] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(258), 1,
      sym_ws,
    STATE(84), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1351] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(260), 1,
      sym_ws,
    STATE(85), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1365] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(262), 1,
      sym_ws,
    STATE(86), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1379] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(264), 1,
      sym_ws,
    STATE(87), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1393] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(266), 1,
      sym_sname,
    STATE(88), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1407] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(268), 1,
      sym_ws,
    STATE(89), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1421] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(270), 1,
      anon_sym_RPAREN,
    STATE(90), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1435] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(272), 1,
      sym_ws,
    STATE(91), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1449] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(274), 1,
      sym_ws,
    STATE(92), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1463] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(276), 1,
      sym_ws,
    STATE(93), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1477] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(278), 1,
      sym_ws,
    STATE(94), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1491] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(280), 1,
      sym_ws,
    STATE(95), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1505] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(282), 1,
      anon_sym_RPAREN,
    STATE(96), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1519] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(284), 1,
      sym_ws,
    STATE(97), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1533] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(286), 1,
      sym_ws,
    STATE(98), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1547] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(288), 1,
      sym_ws,
    STATE(99), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1561] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(290), 1,
      sym_ws,
    STATE(100), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1575] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(292), 1,
      sym_ws,
    STATE(101), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1589] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(294), 1,
      sym_ws,
    STATE(102), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1603] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(296), 1,
      sym_ws,
    STATE(103), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1617] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(298), 1,
      sym_ws,
    STATE(104), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1631] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(300), 1,
      sym_ws,
    STATE(105), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1645] = 1,
    ACTIONS(302), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 45,
  [SMALL_STATE(8)] = 96,
  [SMALL_STATE(9)] = 144,
  [SMALL_STATE(10)] = 190,
  [SMALL_STATE(11)] = 220,
  [SMALL_STATE(12)] = 243,
  [SMALL_STATE(13)] = 266,
  [SMALL_STATE(14)] = 289,
  [SMALL_STATE(15)] = 309,
  [SMALL_STATE(16)] = 327,
  [SMALL_STATE(17)] = 347,
  [SMALL_STATE(18)] = 367,
  [SMALL_STATE(19)] = 387,
  [SMALL_STATE(20)] = 405,
  [SMALL_STATE(21)] = 425,
  [SMALL_STATE(22)] = 443,
  [SMALL_STATE(23)] = 458,
  [SMALL_STATE(24)] = 475,
  [SMALL_STATE(25)] = 492,
  [SMALL_STATE(26)] = 509,
  [SMALL_STATE(27)] = 526,
  [SMALL_STATE(28)] = 541,
  [SMALL_STATE(29)] = 558,
  [SMALL_STATE(30)] = 573,
  [SMALL_STATE(31)] = 588,
  [SMALL_STATE(32)] = 605,
  [SMALL_STATE(33)] = 620,
  [SMALL_STATE(34)] = 637,
  [SMALL_STATE(35)] = 651,
  [SMALL_STATE(36)] = 665,
  [SMALL_STATE(37)] = 679,
  [SMALL_STATE(38)] = 693,
  [SMALL_STATE(39)] = 707,
  [SMALL_STATE(40)] = 721,
  [SMALL_STATE(41)] = 735,
  [SMALL_STATE(42)] = 749,
  [SMALL_STATE(43)] = 763,
  [SMALL_STATE(44)] = 777,
  [SMALL_STATE(45)] = 791,
  [SMALL_STATE(46)] = 805,
  [SMALL_STATE(47)] = 819,
  [SMALL_STATE(48)] = 833,
  [SMALL_STATE(49)] = 847,
  [SMALL_STATE(50)] = 861,
  [SMALL_STATE(51)] = 875,
  [SMALL_STATE(52)] = 889,
  [SMALL_STATE(53)] = 903,
  [SMALL_STATE(54)] = 917,
  [SMALL_STATE(55)] = 931,
  [SMALL_STATE(56)] = 945,
  [SMALL_STATE(57)] = 959,
  [SMALL_STATE(58)] = 973,
  [SMALL_STATE(59)] = 987,
  [SMALL_STATE(60)] = 1001,
  [SMALL_STATE(61)] = 1015,
  [SMALL_STATE(62)] = 1029,
  [SMALL_STATE(63)] = 1043,
  [SMALL_STATE(64)] = 1057,
  [SMALL_STATE(65)] = 1071,
  [SMALL_STATE(66)] = 1085,
  [SMALL_STATE(67)] = 1099,
  [SMALL_STATE(68)] = 1113,
  [SMALL_STATE(69)] = 1127,
  [SMALL_STATE(70)] = 1141,
  [SMALL_STATE(71)] = 1155,
  [SMALL_STATE(72)] = 1169,
  [SMALL_STATE(73)] = 1183,
  [SMALL_STATE(74)] = 1197,
  [SMALL_STATE(75)] = 1211,
  [SMALL_STATE(76)] = 1225,
  [SMALL_STATE(77)] = 1239,
  [SMALL_STATE(78)] = 1253,
  [SMALL_STATE(79)] = 1267,
  [SMALL_STATE(80)] = 1281,
  [SMALL_STATE(81)] = 1295,
  [SMALL_STATE(82)] = 1309,
  [SMALL_STATE(83)] = 1323,
  [SMALL_STATE(84)] = 1337,
  [SMALL_STATE(85)] = 1351,
  [SMALL_STATE(86)] = 1365,
  [SMALL_STATE(87)] = 1379,
  [SMALL_STATE(88)] = 1393,
  [SMALL_STATE(89)] = 1407,
  [SMALL_STATE(90)] = 1421,
  [SMALL_STATE(91)] = 1435,
  [SMALL_STATE(92)] = 1449,
  [SMALL_STATE(93)] = 1463,
  [SMALL_STATE(94)] = 1477,
  [SMALL_STATE(95)] = 1491,
  [SMALL_STATE(96)] = 1505,
  [SMALL_STATE(97)] = 1519,
  [SMALL_STATE(98)] = 1533,
  [SMALL_STATE(99)] = 1547,
  [SMALL_STATE(100)] = 1561,
  [SMALL_STATE(101)] = 1575,
  [SMALL_STATE(102)] = 1589,
  [SMALL_STATE(103)] = 1603,
  [SMALL_STATE(104)] = 1617,
  [SMALL_STATE(105)] = 1631,
  [SMALL_STATE(106)] = 1645,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(105),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(103),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(102),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(101),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(100),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(99),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(97),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(92),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(91),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(86),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(85),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(85),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(83),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(81),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(81),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 1),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expr_repeat1, 2),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_repeat1, 2), SHIFT_REPEAT(85),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_repeat1, 2), SHIFT_REPEAT(85),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_repeat1, 2), SHIFT_REPEAT(83),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_repeat1, 2), SHIFT_REPEAT(81),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_repeat1, 2), SHIFT_REPEAT(81),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_repeat1, 2),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_effect_repeat1, 2),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_effect_repeat1, 2), SHIFT_REPEAT(24),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_effect, 1),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_effect_repeat1, 2), SHIFT_REPEAT(33),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namel, 1),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_namel_repeat1, 2),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_namel_repeat1, 2), SHIFT_REPEAT(44),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_effect_repeat1, 5),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_defn, 3),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_defn, 4),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_defn, 5),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_defn, 5),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__definition, 1),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_defn, 7),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [248] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__token, 1),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_defn, 8),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_defn, 8),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stack_effect, 5),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_defn, 9),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stack_effect, 6),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stack_effect, 7),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_factor(void) {
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
