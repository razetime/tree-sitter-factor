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
#define STATE_COUNT 193
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 88
#define ALIAS_COUNT 0
#define TOKEN_COUNT 67
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 12
#define PRODUCTION_ID_COUNT 1

enum {
  sym__shebang = 1,
  anon_sym_COLON_COLON_QMARK = 2,
  anon_sym_SEMI = 3,
  anon_sym_MACRO_COLON_COLON_QMARK = 4,
  anon_sym_MEMO_COLON_COLON_QMARK = 5,
  anon_sym_TYPED_COLON_COLON_QMARK = 6,
  anon_sym_M_COLON_COLON_QMARK = 7,
  anon_sym_GENERIC_COLON = 8,
  anon_sym_GENERIC_POUND_COLON = 9,
  aux_sym_word_defn_token1 = 10,
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
  anon_sym_CONSTANT_COLON = 34,
  anon_sym_SYMBOL_COLON = 35,
  anon_sym_MAIN_COLON = 36,
  anon_sym_HELP_COLON = 37,
  anon_sym_SYMBOLS_COLON = 38,
  anon_sym_SYNTAX_COLON = 39,
  anon_sym_ALIEN_COLON = 40,
  anon_sym_STRUCT_COLON = 41,
  anon_sym_FUNCTION_COLON = 42,
  anon_sym_FUNCTION_DASHALIAS_COLON = 43,
  sym_vocab_private = 44,
  aux_sym_string_token1 = 45,
  aux_sym_string_token2 = 46,
  aux_sym_string_token3 = 47,
  aux_sym_string_token4 = 48,
  sym_bool = 49,
  aux_sym_symbol_token1 = 50,
  aux_sym_symbol_token2 = 51,
  aux_sym_number_token1 = 52,
  aux_sym_number_token2 = 53,
  aux_sym_number_token3 = 54,
  aux_sym_number_token4 = 55,
  aux_sym_number_token5 = 56,
  aux_sym_number_token6 = 57,
  aux_sym_number_token7 = 58,
  aux_sym_number_token8 = 59,
  sym_keyword = 60,
  sym_sname = 61,
  sym_ws = 62,
  sym_word = 63,
  aux_sym_comment_token1 = 64,
  aux_sym_comment_token2 = 65,
  aux_sym_comment_token3 = 66,
  sym_source_file = 67,
  sym__definition = 68,
  sym_word_defn = 69,
  sym_stack_effect = 70,
  sym_effect = 71,
  sym_import_defn = 72,
  sym_tuple_or_class_defn = 73,
  sym_other_syntax_defn = 74,
  sym_expr = 75,
  sym_string = 76,
  sym_symbol = 77,
  sym_number = 78,
  sym_namel = 79,
  sym_ews = 80,
  sym_words = 81,
  sym_comment = 82,
  aux_sym_source_file_repeat1 = 83,
  aux_sym_effect_repeat1 = 84,
  aux_sym_expr_repeat1 = 85,
  aux_sym_namel_repeat1 = 86,
  aux_sym_words_repeat1 = 87,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__shebang] = "_shebang",
  [anon_sym_COLON_COLON_QMARK] = "::\?",
  [anon_sym_SEMI] = ";",
  [anon_sym_MACRO_COLON_COLON_QMARK] = "MACRO::\?",
  [anon_sym_MEMO_COLON_COLON_QMARK] = "MEMO::\?",
  [anon_sym_TYPED_COLON_COLON_QMARK] = "TYPED::\?",
  [anon_sym_M_COLON_COLON_QMARK] = "M::\?",
  [anon_sym_GENERIC_COLON] = "GENERIC:",
  [anon_sym_GENERIC_POUND_COLON] = "GENERIC#:",
  [aux_sym_word_defn_token1] = "word_defn_token1",
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
  [anon_sym_CONSTANT_COLON] = "CONSTANT:",
  [anon_sym_SYMBOL_COLON] = "SYMBOL:",
  [anon_sym_MAIN_COLON] = "MAIN:",
  [anon_sym_HELP_COLON] = "HELP:",
  [anon_sym_SYMBOLS_COLON] = "SYMBOLS:",
  [anon_sym_SYNTAX_COLON] = "SYNTAX:",
  [anon_sym_ALIEN_COLON] = "ALIEN:",
  [anon_sym_STRUCT_COLON] = "STRUCT:",
  [anon_sym_FUNCTION_COLON] = "FUNCTION:",
  [anon_sym_FUNCTION_DASHALIAS_COLON] = "FUNCTION-ALIAS:",
  [sym_vocab_private] = "vocab_private",
  [aux_sym_string_token1] = "string_token1",
  [aux_sym_string_token2] = "string_token2",
  [aux_sym_string_token3] = "string_token3",
  [aux_sym_string_token4] = "string_token4",
  [sym_bool] = "bool",
  [aux_sym_symbol_token1] = "symbol_token1",
  [aux_sym_symbol_token2] = "symbol_token2",
  [aux_sym_number_token1] = "number_token1",
  [aux_sym_number_token2] = "number_token2",
  [aux_sym_number_token3] = "number_token3",
  [aux_sym_number_token4] = "number_token4",
  [aux_sym_number_token5] = "number_token5",
  [aux_sym_number_token6] = "number_token6",
  [aux_sym_number_token7] = "number_token7",
  [aux_sym_number_token8] = "number_token8",
  [sym_keyword] = "keyword",
  [sym_sname] = "sname",
  [sym_ws] = "ws",
  [sym_word] = "word",
  [aux_sym_comment_token1] = "comment_token1",
  [aux_sym_comment_token2] = "comment_token2",
  [aux_sym_comment_token3] = "comment_token3",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_word_defn] = "word_defn",
  [sym_stack_effect] = "stack_effect",
  [sym_effect] = "effect",
  [sym_import_defn] = "import_defn",
  [sym_tuple_or_class_defn] = "tuple_or_class_defn",
  [sym_other_syntax_defn] = "other_syntax_defn",
  [sym_expr] = "expr",
  [sym_string] = "string",
  [sym_symbol] = "symbol",
  [sym_number] = "number",
  [sym_namel] = "namel",
  [sym_ews] = "ews",
  [sym_words] = "words",
  [sym_comment] = "comment",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_effect_repeat1] = "effect_repeat1",
  [aux_sym_expr_repeat1] = "expr_repeat1",
  [aux_sym_namel_repeat1] = "namel_repeat1",
  [aux_sym_words_repeat1] = "words_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__shebang] = sym__shebang,
  [anon_sym_COLON_COLON_QMARK] = anon_sym_COLON_COLON_QMARK,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_MACRO_COLON_COLON_QMARK] = anon_sym_MACRO_COLON_COLON_QMARK,
  [anon_sym_MEMO_COLON_COLON_QMARK] = anon_sym_MEMO_COLON_COLON_QMARK,
  [anon_sym_TYPED_COLON_COLON_QMARK] = anon_sym_TYPED_COLON_COLON_QMARK,
  [anon_sym_M_COLON_COLON_QMARK] = anon_sym_M_COLON_COLON_QMARK,
  [anon_sym_GENERIC_COLON] = anon_sym_GENERIC_COLON,
  [anon_sym_GENERIC_POUND_COLON] = anon_sym_GENERIC_POUND_COLON,
  [aux_sym_word_defn_token1] = aux_sym_word_defn_token1,
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
  [anon_sym_CONSTANT_COLON] = anon_sym_CONSTANT_COLON,
  [anon_sym_SYMBOL_COLON] = anon_sym_SYMBOL_COLON,
  [anon_sym_MAIN_COLON] = anon_sym_MAIN_COLON,
  [anon_sym_HELP_COLON] = anon_sym_HELP_COLON,
  [anon_sym_SYMBOLS_COLON] = anon_sym_SYMBOLS_COLON,
  [anon_sym_SYNTAX_COLON] = anon_sym_SYNTAX_COLON,
  [anon_sym_ALIEN_COLON] = anon_sym_ALIEN_COLON,
  [anon_sym_STRUCT_COLON] = anon_sym_STRUCT_COLON,
  [anon_sym_FUNCTION_COLON] = anon_sym_FUNCTION_COLON,
  [anon_sym_FUNCTION_DASHALIAS_COLON] = anon_sym_FUNCTION_DASHALIAS_COLON,
  [sym_vocab_private] = sym_vocab_private,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [aux_sym_string_token3] = aux_sym_string_token3,
  [aux_sym_string_token4] = aux_sym_string_token4,
  [sym_bool] = sym_bool,
  [aux_sym_symbol_token1] = aux_sym_symbol_token1,
  [aux_sym_symbol_token2] = aux_sym_symbol_token2,
  [aux_sym_number_token1] = aux_sym_number_token1,
  [aux_sym_number_token2] = aux_sym_number_token2,
  [aux_sym_number_token3] = aux_sym_number_token3,
  [aux_sym_number_token4] = aux_sym_number_token4,
  [aux_sym_number_token5] = aux_sym_number_token5,
  [aux_sym_number_token6] = aux_sym_number_token6,
  [aux_sym_number_token7] = aux_sym_number_token7,
  [aux_sym_number_token8] = aux_sym_number_token8,
  [sym_keyword] = sym_keyword,
  [sym_sname] = sym_sname,
  [sym_ws] = sym_ws,
  [sym_word] = sym_word,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [aux_sym_comment_token2] = aux_sym_comment_token2,
  [aux_sym_comment_token3] = aux_sym_comment_token3,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_word_defn] = sym_word_defn,
  [sym_stack_effect] = sym_stack_effect,
  [sym_effect] = sym_effect,
  [sym_import_defn] = sym_import_defn,
  [sym_tuple_or_class_defn] = sym_tuple_or_class_defn,
  [sym_other_syntax_defn] = sym_other_syntax_defn,
  [sym_expr] = sym_expr,
  [sym_string] = sym_string,
  [sym_symbol] = sym_symbol,
  [sym_number] = sym_number,
  [sym_namel] = sym_namel,
  [sym_ews] = sym_ews,
  [sym_words] = sym_words,
  [sym_comment] = sym_comment,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_effect_repeat1] = aux_sym_effect_repeat1,
  [aux_sym_expr_repeat1] = aux_sym_expr_repeat1,
  [aux_sym_namel_repeat1] = aux_sym_namel_repeat1,
  [aux_sym_words_repeat1] = aux_sym_words_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__shebang] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_COLON_COLON_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MACRO_COLON_COLON_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MEMO_COLON_COLON_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TYPED_COLON_COLON_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_M_COLON_COLON_QMARK] = {
    .visible = true,
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
  [aux_sym_word_defn_token1] = {
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
  [anon_sym_CONSTANT_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SYMBOL_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MAIN_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HELP_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SYMBOLS_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SYNTAX_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ALIEN_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STRUCT_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FUNCTION_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FUNCTION_DASHALIAS_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_vocab_private] = {
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
  [aux_sym_symbol_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_symbol_token2] = {
    .visible = false,
    .named = false,
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
  [sym_keyword] = {
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
  [sym_word] = {
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
  [sym_tuple_or_class_defn] = {
    .visible = true,
    .named = true,
  },
  [sym_other_syntax_defn] = {
    .visible = true,
    .named = true,
  },
  [sym_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol] = {
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
  [sym_ews] = {
    .visible = true,
    .named = true,
  },
  [sym_words] = {
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
  [aux_sym_effect_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expr_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_namel_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_words_repeat1] = {
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
      if (eof) ADVANCE(358);
      if (lookahead == '!') ADVANCE(681);
      if (lookahead == '"') ADVANCE(691);
      if (lookahead == '#') ADVANCE(473);
      if (lookahead == '(') ADVANCE(382);
      if (lookahead == ')') ADVANCE(385);
      if (lookahead == '-') ADVANCE(476);
      if (lookahead == '/') ADVANCE(475);
      if (lookahead == ':') ADVANCE(387);
      if (lookahead == ';') ADVANCE(364);
      if (lookahead == '<') ADVANCE(407);
      if (lookahead == '=') ADVANCE(515);
      if (lookahead == 'A') ADVANCE(592);
      if (lookahead == 'B') ADVANCE(673);
      if (lookahead == 'C') ADVANCE(479);
      if (lookahead == 'D') ADVANCE(546);
      if (lookahead == 'E') ADVANCE(640);
      if (lookahead == 'F') ADVANCE(625);
      if (lookahead == 'G') ADVANCE(555);
      if (lookahead == 'H') ADVANCE(550);
      if (lookahead == 'I') ADVANCE(605);
      if (lookahead == 'M') ADVANCE(480);
      if (lookahead == 'P') ADVANCE(622);
      if (lookahead == 'Q') ADVANCE(671);
      if (lookahead == 'R') ADVANCE(557);
      if (lookahead == 'S') ADVANCE(581);
      if (lookahead == 'T') ADVANCE(672);
      if (lookahead == 'U') ADVANCE(606);
      if (lookahead == 'f' ||
          lookahead == 't') ADVANCE(461);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(685);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (lookahead != 0) ADVANCE(684);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(693);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(692);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(695);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(694);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(360);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(5);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(359);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(681);
      if (lookahead == '#') ADVANCE(473);
      if (lookahead == ')') ADVANCE(385);
      if (lookahead == '/') ADVANCE(475);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead)) ADVANCE(684);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(681);
      if (lookahead == '#') ADVANCE(473);
      if (lookahead == '-') ADVANCE(476);
      if (lookahead == '/') ADVANCE(475);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead)) ADVANCE(684);
      END_STATE();
    case 9:
      if (lookahead == '!') ADVANCE(681);
      if (lookahead == '#') ADVANCE(473);
      if (lookahead == '/') ADVANCE(475);
      if (lookahead == ';') ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead)) ADVANCE(684);
      END_STATE();
    case 10:
      if (lookahead == '!') ADVANCE(681);
      if (lookahead == '#') ADVANCE(473);
      if (lookahead == '/') ADVANCE(475);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(685);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(684);
      END_STATE();
    case 11:
      if (lookahead == '!') ADVANCE(334);
      if (lookahead == '#') ADVANCE(16);
      if (lookahead == '/') ADVANCE(326);
      END_STATE();
    case 12:
      if (lookahead == '!') ADVANCE(334);
      if (lookahead == '#') ADVANCE(17);
      if (lookahead == '(') ADVANCE(381);
      if (lookahead == '/') ADVANCE(326);
      if (lookahead == ':') ADVANCE(386);
      if (lookahead == '<') ADVANCE(406);
      if (lookahead == '=') ADVANCE(331);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(685);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(378);
      END_STATE();
    case 13:
      if (lookahead == '!') ADVANCE(688);
      if (lookahead == '#') ADVANCE(686);
      if (lookahead == ')') ADVANCE(384);
      if (lookahead == '/') ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(691);
      END_STATE();
    case 14:
      if (lookahead == '!') ADVANCE(688);
      if (lookahead == '#') ADVANCE(686);
      if (lookahead == '/') ADVANCE(687);
      if (lookahead == ';') ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(691);
      END_STATE();
    case 15:
      if (lookahead == '!') ADVANCE(688);
      if (lookahead == '#') ADVANCE(686);
      if (lookahead == '/') ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(691);
      END_STATE();
    case 16:
      if (lookahead == '!') ADVANCE(5);
      END_STATE();
    case 17:
      if (lookahead == '!') ADVANCE(347);
      END_STATE();
    case 18:
      if (lookahead == '!') ADVANCE(311);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(450);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0) ADVANCE(325);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(451);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0) ADVANCE(325);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(447);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(447);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(452);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(452);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == '"') ADVANCE(448);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 26:
      if (lookahead == '"') ADVANCE(453);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 27:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == '#') ADVANCE(78);
      if (lookahead == ':') ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 28:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == '*') ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 29:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == '+') ADVANCE(317);
      if (lookahead == ',') ADVANCE(37);
      if (lookahead == '.') ADVANCE(299);
      if (lookahead == 'b') ADVANCE(301);
      if (lookahead == 'o') ADVANCE(315);
      if (lookahead == 'x') ADVANCE(323);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      if (lookahead != 0) ADVANCE(324);
      END_STATE();
    case 30:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == '+') ADVANCE(317);
      if (lookahead == ',') ADVANCE(37);
      if (lookahead == '.') ADVANCE(299);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      if (lookahead != 0) ADVANCE(324);
      END_STATE();
    case 31:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == ',') ADVANCE(34);
      if (lookahead == '.') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 32:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == ',') ADVANCE(34);
      if (lookahead == '.') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 33:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == ',') ADVANCE(34);
      if (lookahead == '.') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 34:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == ',') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 35:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == ',') ADVANCE(36);
      if (lookahead == 'p') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(35);
      if (lookahead != 0) ADVANCE(324);
      END_STATE();
    case 36:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == ',') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 37:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == ',') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 38:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == ',') ADVANCE(39);
      if (lookahead == '.') ADVANCE(299);
      if (lookahead == '/') ADVANCE(318);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (lookahead != 0) ADVANCE(324);
      END_STATE();
    case 39:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == ',') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 40:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == ',') ADVANCE(41);
      if (lookahead == '-') ADVANCE(322);
      if (lookahead == '.') ADVANCE(299);
      if (lookahead == '/') ADVANCE(320);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (lookahead != 0) ADVANCE(324);
      END_STATE();
    case 41:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == ',') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 42:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == ',') ADVANCE(43);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (lookahead != 0) ADVANCE(324);
      END_STATE();
    case 43:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == ',') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 44:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == ',') ADVANCE(45);
      if (lookahead == '/') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 45:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == ',') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 46:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == ',') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (lookahead != 0) ADVANCE(324);
      END_STATE();
    case 47:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == ',') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 48:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == ',') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      if (lookahead != 0) ADVANCE(324);
      END_STATE();
    case 49:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == ',') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 50:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == ',') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      if (lookahead != 0) ADVANCE(324);
      END_STATE();
    case 51:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == ',') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 52:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == ',') ADVANCE(53);
      if (lookahead == '/') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 53:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == ',') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 54:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == '-') ADVANCE(262);
      if (lookahead == ':') ADVANCE(390);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 55:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == '-') ADVANCE(113);
      if (lookahead == ':') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 56:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == ':') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 57:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == ':') ADVANCE(414);
      if (lookahead == 'H') ADVANCE(105);
      if (lookahead == 'O') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 58:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == ':') ADVANCE(390);
      if (lookahead == 'S') ADVANCE(249);
      if (lookahead == 'T') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 59:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == ':') ADVANCE(390);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 60:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == ':') ADVANCE(394);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 61:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == ':') ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 62:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == ':') ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 63:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == ':') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 64:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == ':') ADVANCE(418);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 65:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == ':') ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 66:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == ':') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 67:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == ':') ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 68:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == ':') ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 69:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == ':') ADVANCE(410);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 70:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == ':') ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 71:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == ':') ADVANCE(398);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 72:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == ':') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 73:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == ':') ADVANCE(426);
      if (lookahead == 'S') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 74:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == ':') ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 75:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == ':') ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 76:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == ':') ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 77:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == ':') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 78:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == ':') ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 79:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == ':') ADVANCE(416);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 80:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == ':') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 81:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == ':') ADVANCE(420);
      if (lookahead == 'S') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 82:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == ':') ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 83:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == ':') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 84:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == ':') ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 85:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == ':') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 86:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 87:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == ':') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 88:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 89:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == ':') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 90:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == ':') ADVANCE(309);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 91:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'A') ADVANCE(118);
      if (lookahead == 'E') ADVANCE(184);
      if (lookahead == 'I') ADVANCE(263);
      if (lookahead == '\\') ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 92:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 93:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == ':') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 94:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == ':') ADVANCE(88);
      if (lookahead == 'E') ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 95:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == '>') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 96:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == '?') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 97:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == '?') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 98:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == '?') ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 99:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == '?') ADVANCE(365);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 100:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == '?') ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 101:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'A') ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 102:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'A') ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 103:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'A') ADVANCE(235);
      if (lookahead == 'E') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 104:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'A') ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 105:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'A') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 106:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'A') ADVANCE(245);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 107:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'A') ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 108:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'A') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 109:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'A') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 110:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'A') ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 111:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'A') ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 112:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'A') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 113:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'A') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 114:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'B') ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 115:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'C') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 116:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'C') ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 117:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'C') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 118:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'C') ADVANCE(232);
      if (lookahead == 'I') ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 119:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'C') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 120:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'C') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 121:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'C') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 122:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'C') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 123:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'D') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 124:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'D') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 125:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'D') ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 126:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'D') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 127:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'E') ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 128:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'E') ADVANCE(125);
      if (lookahead == 'I') ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 129:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'E') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 130:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'E') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 131:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'E') ADVANCE(175);
      if (lookahead == 'O') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 132:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'E') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 133:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'E') ADVANCE(59);
      if (lookahead == 'I') ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 134:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'E') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 135:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'E') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 136:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'E') ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 137:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'E') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 138:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'E') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 139:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'E') ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 140:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'E') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 141:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'E') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 142:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'E') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 143:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'E') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 144:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'E') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 145:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'E') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 146:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'E') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 147:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'E') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 148:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'E') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 149:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'E') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 150:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'F') ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 151:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'F') ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 152:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'F') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 153:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'G') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 154:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'G') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 155:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'G') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 156:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'H') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 157:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'I') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 158:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'I') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 159:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'I') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 160:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'I') ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 161:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'I') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 162:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'I') ADVANCE(215);
      if (lookahead == 'U') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 163:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'I') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 164:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'I') ADVANCE(191);
      if (lookahead == 'L') ADVANCE(208);
      if (lookahead == 'T') ADVANCE(224);
      if (lookahead == 'Y') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 165:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'I') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 166:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'I') ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 167:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'I') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 168:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'I') ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 169:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'I') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 170:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'I') ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 171:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'I') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 172:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'K') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 173:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'L') ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 174:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'L') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 175:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'L') ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 176:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'L') ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 177:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'L') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 178:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'L') ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 179:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'L') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 180:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'L') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 181:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'L') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 182:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'M') ADVANCE(114);
      if (lookahead == 'N') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 183:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'M') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 184:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'M') ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 185:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'M') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 186:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'N') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 187:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'N') ADVANCE(162);
      if (lookahead == 'S') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 188:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'N') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 189:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'N') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 190:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'N') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 191:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'N') ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 192:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'N') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 193:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'N') ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 194:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'N') ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 195:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'N') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 196:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'N') ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 197:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'N') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 198:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'N') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 199:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'N') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 200:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'N') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 201:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'N') ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 202:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'N') ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 203:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'N') ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 204:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'O') ADVANCE(233);
      if (lookahead == 'R') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 205:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'O') ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 206:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'O') ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 207:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'O') ADVANCE(222);
      if (lookahead == 'R') ADVANCE(206);
      if (lookahead == 'U') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 208:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'O') ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 209:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'O') ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 210:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'O') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 211:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'O') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 212:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'O') ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 213:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'O') ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 214:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'O') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 215:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'O') ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 216:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'O') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 217:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'P') ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 218:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'P') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 219:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'P') ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 220:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'P') ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 221:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'P') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 222:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'R') ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 223:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'R') ADVANCE(226);
      if (lookahead == 'X') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 224:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'R') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 225:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'R') ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 226:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'R') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 227:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'R') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 228:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'R') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 229:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'R') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 230:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'R') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 231:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'R') ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 232:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'R') ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 233:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'S') ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 234:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'S') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 235:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'S') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 236:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'S') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 237:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'S') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 238:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'S') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 239:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'T') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 240:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'T') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 241:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'T') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 242:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'T') ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 243:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'T') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 244:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'T') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 245:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'T') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 246:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'T') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 247:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'T') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 248:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'T') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 249:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'T') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 250:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'T') ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 251:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'T') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 252:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'T') ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 253:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'T') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 254:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'T') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 255:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'U') ADVANCE(219);
      if (lookahead == 'Y') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 256:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'U') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 257:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'U') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 258:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'U') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 259:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'U') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 260:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'V') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 261:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'V') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 262:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'W') ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 263:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'X') ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 264:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'X') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 265:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'a') ADVANCE(268);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 266:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'a') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 267:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'a') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 268:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'b') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 269:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'c') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 270:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'c') ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 271:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'd') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 272:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'd') ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 273:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'e') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 274:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'e') ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 275:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'e') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 276:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'e') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 277:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'e') ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 278:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'h') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 279:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'i') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 280:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'i') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 281:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'l') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 282:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'l') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 283:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'l') ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 284:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'l') ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 285:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'n') ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 286:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'n') ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 287:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'n') ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 288:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'p') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 289:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'r') ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 290:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'r') ADVANCE(275);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 291:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 's') ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 292:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 's') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 293:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 't') ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 294:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'u') ADVANCE(291);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 295:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'u') ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 296:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'v') ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 297:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 298:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 299:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (lookahead != 0) ADVANCE(324);
      END_STATE();
    case 300:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(300);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(468);
      if (lookahead != 0) ADVANCE(324);
      END_STATE();
    case 301:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 302:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead != 0) ADVANCE(324);
      END_STATE();
    case 303:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(338);
      if (lookahead != 0) ADVANCE(324);
      END_STATE();
    case 304:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(304);
      if (lookahead != 0) ADVANCE(324);
      END_STATE();
    case 305:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead != 0) ADVANCE(324);
      END_STATE();
    case 306:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(349);
      if (lookahead != 0) ADVANCE(324);
      END_STATE();
    case 307:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(307);
      if (lookahead != 0) ADVANCE(324);
      END_STATE();
    case 308:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(339);
      if (lookahead != 0) ADVANCE(324);
      END_STATE();
    case 309:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(332);
      if (lookahead != 0) ADVANCE(324);
      END_STATE();
    case 310:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(472);
      if (lookahead != 0) ADVANCE(324);
      END_STATE();
    case 311:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0) ADVANCE(324);
      END_STATE();
    case 312:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(348);
      if (lookahead != 0) ADVANCE(324);
      END_STATE();
    case 313:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(352);
      if (lookahead != 0) ADVANCE(324);
      END_STATE();
    case 314:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0) ADVANCE(324);
      END_STATE();
    case 315:
      if (lookahead == '"') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 316:
      if (lookahead == '"') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 317:
      if (lookahead == '"') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 318:
      if (lookahead == '"') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 319:
      if (lookahead == '"') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 320:
      if (lookahead == '"') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 321:
      if (lookahead == '"') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 322:
      if (lookahead == '"') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 323:
      if (lookahead == '"') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 324:
      if (lookahead == '"') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 325:
      if (lookahead == '"') ADVANCE(449);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0) ADVANCE(325);
      END_STATE();
    case 326:
      if (lookahead == '*') ADVANCE(335);
      END_STATE();
    case 327:
      if (lookahead == ',') ADVANCE(328);
      if (lookahead == 'p') ADVANCE(356);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(327);
      END_STATE();
    case 328:
      if (lookahead == ',') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(327);
      END_STATE();
    case 329:
      if (lookahead == ',') ADVANCE(330);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      END_STATE();
    case 330:
      if (lookahead == ',') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      END_STATE();
    case 331:
      if (lookahead == '>') ADVANCE(396);
      END_STATE();
    case 332:
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(333);
      if (lookahead != 0) ADVANCE(346);
      END_STATE();
    case 333:
      if (lookahead == '\\') ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(458);
      if (lookahead != 0) ADVANCE(346);
      END_STATE();
    case 334:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      END_STATE();
    case 335:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(338);
      END_STATE();
    case 336:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(336);
      if (lookahead == '*') ADVANCE(337);
      if (lookahead != 0) ADVANCE(338);
      END_STATE();
    case 337:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(336);
      if (lookahead == '/') ADVANCE(696);
      if (lookahead != 0) ADVANCE(338);
      END_STATE();
    case 338:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(336);
      if (lookahead != 0) ADVANCE(338);
      END_STATE();
    case 339:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(327);
      END_STATE();
    case 340:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(342);
      if (lookahead == '"') ADVANCE(446);
      if (lookahead != 0) ADVANCE(343);
      END_STATE();
    case 341:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(342);
      if (lookahead == '"') ADVANCE(340);
      if (lookahead != 0) ADVANCE(343);
      END_STATE();
    case 342:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(342);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead != 0) ADVANCE(343);
      END_STATE();
    case 343:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(342);
      if (lookahead != 0) ADVANCE(343);
      END_STATE();
    case 344:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(457);
      END_STATE();
    case 345:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(457);
      if (lookahead == '\\' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          ('r' <= lookahead && lookahead <= 't') ||
          lookahead == 'v') ADVANCE(346);
      if (lookahead != 0) ADVANCE(346);
      END_STATE();
    case 346:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(457);
      if (lookahead != 0) ADVANCE(346);
      END_STATE();
    case 347:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 348:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(348);
      if (lookahead != 0) ADVANCE(462);
      END_STATE();
    case 349:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(350);
      if (lookahead == '"') ADVANCE(455);
      if (lookahead == '\\') ADVANCE(351);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 350:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(350);
      if (lookahead == '"') ADVANCE(454);
      if (lookahead == '\\') ADVANCE(351);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 351:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(350);
      if (lookahead == '"') ADVANCE(456);
      if (lookahead == '\\') ADVANCE(351);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 352:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(352);
      if (lookahead != 0) ADVANCE(354);
      END_STATE();
    case 353:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(353);
      if (lookahead != 0) ADVANCE(463);
      END_STATE();
    case 354:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(353);
      if (lookahead != 0) ADVANCE(354);
      END_STATE();
    case 355:
      if (lookahead == '\\' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          ('r' <= lookahead && lookahead <= 't') ||
          lookahead == 'v') ADVANCE(344);
      END_STATE();
    case 356:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      END_STATE();
    case 357:
      if (eof) ADVANCE(358);
      if (lookahead == '!') ADVANCE(302);
      if (lookahead == '"') ADVANCE(19);
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == '+') ADVANCE(31);
      if (lookahead == ',') ADVANCE(34);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(299);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '0') ADVANCE(29);
      if (lookahead == ':') ADVANCE(56);
      if (lookahead == '<') ADVANCE(217);
      if (lookahead == 'A') ADVANCE(173);
      if (lookahead == 'B') ADVANCE(256);
      if (lookahead == 'C') ADVANCE(57);
      if (lookahead == 'D') ADVANCE(127);
      if (lookahead == 'E') ADVANCE(223);
      if (lookahead == 'F') ADVANCE(207);
      if (lookahead == 'G') ADVANCE(136);
      if (lookahead == 'H') ADVANCE(131);
      if (lookahead == 'I') ADVANCE(186);
      if (lookahead == 'M') ADVANCE(91);
      if (lookahead == 'N') ADVANCE(104);
      if (lookahead == 'P') ADVANCE(204);
      if (lookahead == 'Q') ADVANCE(257);
      if (lookahead == 'R') ADVANCE(138);
      if (lookahead == 'S') ADVANCE(164);
      if (lookahead == 'T') ADVANCE(255);
      if (lookahead == 'U') ADVANCE(187);
      if (lookahead == 'd') ADVANCE(273);
      if (lookahead == 'f') ADVANCE(459);
      if (lookahead == 'i') ADVANCE(286);
      if (lookahead == 'r') ADVANCE(274);
      if (lookahead == 't') ADVANCE(460);
      if (lookahead == '$' ||
          lookahead == '\\') ADVANCE(312);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(685);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(30);
      if (lookahead != 0) ADVANCE(324);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym__shebang);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym__shebang);
      if (lookahead == '\n') ADVANCE(695);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_COLON_COLON_QMARK);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_COLON_COLON_QMARK);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(691);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_MACRO_COLON_COLON_QMARK);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_MACRO_COLON_COLON_QMARK);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_MEMO_COLON_COLON_QMARK);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_MEMO_COLON_COLON_QMARK);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_TYPED_COLON_COLON_QMARK);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_TYPED_COLON_COLON_QMARK);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_M_COLON_COLON_QMARK);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_M_COLON_COLON_QMARK);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_GENERIC_COLON);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_GENERIC_COLON);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_GENERIC_POUND_COLON);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_GENERIC_POUND_COLON);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_word_defn_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_word_defn_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(378);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_HOOK_COLON);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_HOOK_COLON);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(691);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(517);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_USING_COLON);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_USING_COLON);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_import_defn_token1);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_import_defn_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_QUALIFIED_DASHWITH_COLON);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_QUALIFIED_DASHWITH_COLON);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_import_defn_token2);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_import_defn_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_RENAME_COLON);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_RENAME_COLON);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_import_defn_token3);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_import_defn_token3);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_import_defn_token4);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_import_defn_token4);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_tuple_or_class_defn_token1);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_tuple_or_class_defn_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == 'P') ADVANCE(642);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_tuple_or_class_defn_token2);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_tuple_or_class_defn_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_tuple_or_class_defn_token3);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_tuple_or_class_defn_token3);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_PREDICATE_COLON);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_PREDICATE_COLON);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_C_COLON);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_C_COLON);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_INSTANCE_COLON);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_INSTANCE_COLON);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_SLOT_COLON);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_SLOT_COLON);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_SINGLETON_COLON);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_SINGLETON_COLON);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_SINGLETONS_COLON);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_SINGLETONS_COLON);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_CONSTANT_COLON);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_CONSTANT_COLON);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_SYMBOL_COLON);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_SYMBOL_COLON);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_MAIN_COLON);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_MAIN_COLON);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_HELP_COLON);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_HELP_COLON);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_SYMBOLS_COLON);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_SYMBOLS_COLON);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_SYNTAX_COLON);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_SYNTAX_COLON);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_ALIEN_COLON);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_ALIEN_COLON);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_STRUCT_COLON);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_STRUCT_COLON);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_FUNCTION_COLON);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_FUNCTION_COLON);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_FUNCTION_DASHALIAS_COLON);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_FUNCTION_DASHALIAS_COLON);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_vocab_private);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_vocab_private);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(342);
      if (lookahead != 0) ADVANCE(343);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '"') ADVANCE(447);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0) ADVANCE(324);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '"') ADVANCE(306);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0) ADVANCE(324);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '"') ADVANCE(449);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(325);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_string_token3);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '"') ADVANCE(452);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(342);
      if (lookahead == '"') ADVANCE(340);
      if (lookahead != 0) ADVANCE(343);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(342);
      if (lookahead != 0) ADVANCE(343);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(350);
      if (lookahead == '"') ADVANCE(455);
      if (lookahead == '\\') ADVANCE(351);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_string_token4);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_string_token4);
      if (lookahead == '\\') ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(458);
      if (lookahead != 0) ADVANCE(346);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_bool);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == 'i') ADVANCE(285);
      if (lookahead == 'l') ADVANCE(294);
      if (lookahead == 'o') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_bool);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_bool);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(462);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_symbol_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(463);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_number_token1);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_number_token2);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_number_token3);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_number_token4);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_number_token5);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_number_token6);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_number_token7);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_number_token8);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_keyword);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == '!') ADVANCE(683);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == '#') ADVANCE(501);
      if (lookahead == ':') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == '*') ADVANCE(682);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == '-') ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == '-') ADVANCE(678);
      if (lookahead == ':') ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == '-') ADVANCE(531);
      if (lookahead == ':') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == ':') ADVANCE(415);
      if (lookahead == 'O') ADVANCE(619);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == ':') ADVANCE(508);
      if (lookahead == 'A') ADVANCE(537);
      if (lookahead == 'E') ADVANCE(603);
      if (lookahead == 'I') ADVANCE(679);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == ':') ADVANCE(391);
      if (lookahead == 'S') ADVANCE(656);
      if (lookahead == 'T') ADVANCE(559);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == ':') ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == ':') ADVANCE(395);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == ':') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == ':') ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == ':') ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == ':') ADVANCE(419);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == ':') ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == ':') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == ':') ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == ':') ADVANCE(405);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == ':') ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == ':') ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == ':') ADVANCE(399);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == ':') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == ':') ADVANCE(427);
      if (lookahead == 'S') ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == ':') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == ':') ADVANCE(409);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == ':') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == ':') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == ':') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == ':') ADVANCE(417);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == ':') ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == ':') ADVANCE(421);
      if (lookahead == 'S') ADVANCE(505);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == ':') ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == ':') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == ':') ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == ':') ADVANCE(518);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == ':') ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == ':') ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == ':') ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == ':') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == ':') ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == ':') ADVANCE(511);
      if (lookahead == 'E') ADVANCE(571);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == '>') ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == '>') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == '?') ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == '?') ADVANCE(372);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == '?') ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == '?') ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == '?') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'A') ADVANCE(680);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'A') ADVANCE(604);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'A') ADVANCE(651);
      if (lookahead == 'E') ADVANCE(616);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'A') ADVANCE(662);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'A') ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'A') ADVANCE(620);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'A') ADVANCE(597);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'A') ADVANCE(653);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'A') ADVANCE(663);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'A') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'A') ADVANCE(669);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'B') ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'C') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'C') ADVANCE(595);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'C') ADVANCE(659);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'C') ADVANCE(648);
      if (lookahead == 'I') ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'C') ADVANCE(664);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'C') ADVANCE(564);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'C') ADVANCE(667);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'C') ADVANCE(532);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'D') ADVANCE(514);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'D') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'D') ADVANCE(579);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'D') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'E') ADVANCE(569);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'E') ADVANCE(544);
      if (lookahead == 'I') ADVANCE(676);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'E') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'E') ADVANCE(516);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'E') ADVANCE(594);
      if (lookahead == 'O') ADVANCE(623);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'E') ADVANCE(482);
      if (lookahead == 'I') ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'E') ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'E') ADVANCE(542);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'E') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'E') ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'E') ADVANCE(543);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'E') ADVANCE(609);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'E') ADVANCE(645);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'E') ADVANCE(647);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'E') ADVANCE(668);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'E') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'E') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'E') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'E') ADVANCE(502);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'E') ADVANCE(503);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'E') ADVANCE(644);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'E') ADVANCE(661);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'E') ADVANCE(540);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'F') ADVANCE(558);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'F') ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'F') ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'G') ADVANCE(567);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'G') ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'G') ADVANCE(599);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'H') ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'I') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'I') ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'I') ADVANCE(596);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'I') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'I') ADVANCE(534);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'I') ADVANCE(610);
      if (lookahead == 'L') ADVANCE(626);
      if (lookahead == 'T') ADVANCE(641);
      if (lookahead == 'Y') ADVANCE(601);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'I') ADVANCE(633);
      if (lookahead == 'U') ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'I') ADVANCE(633);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'I') ADVANCE(529);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'I') ADVANCE(655);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'I') ADVANCE(556);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'I') ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'I') ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'I') ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'I') ADVANCE(677);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'K') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'L') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'L') ADVANCE(496);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'L') ADVANCE(635);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'L') ADVANCE(674);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'L') ADVANCE(670);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'L') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'L') ADVANCE(562);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'L') ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'L') ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'M') ADVANCE(533);
      if (lookahead == 'N') ADVANCE(658);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'M') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'M') ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'M') ADVANCE(563);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'N') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'N') ADVANCE(582);
      if (lookahead == 'S') ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'N') ADVANCE(478);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'N') ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'N') ADVANCE(523);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'N') ADVANCE(574);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'N') ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'N') ADVANCE(573);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'N') ADVANCE(566);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'N') ADVANCE(539);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'N') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'N') ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'N') ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'N') ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'N') ADVANCE(654);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'N') ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'N') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'O') ADVANCE(649);
      if (lookahead == 'R') ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'O') ADVANCE(591);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'O') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'O') ADVANCE(639);
      if (lookahead == 'R') ADVANCE(624);
      if (lookahead == 'U') ADVANCE(608);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'O') ADVANCE(660);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'O') ADVANCE(593);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'O') ADVANCE(512);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'O') ADVANCE(621);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'O') ADVANCE(607);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'O') ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'O') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'O') ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'O') ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'P') ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'P') ADVANCE(598);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'P') ADVANCE(553);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'P') ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'R') ADVANCE(572);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'R') ADVANCE(643);
      if (lookahead == 'X') ADVANCE(535);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'R') ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'R') ADVANCE(590);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'R') ADVANCE(632);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'R') ADVANCE(580);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'R') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'R') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'R') ADVANCE(652);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'R') ADVANCE(634);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'S') ADVANCE(657);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'S') ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'S') ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'S') ADVANCE(568);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'S') ADVANCE(506);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'S') ADVANCE(666);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'T') ADVANCE(575);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'T') ADVANCE(526);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'T') ADVANCE(638);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'T') ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'T') ADVANCE(588);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'T') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'T') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'T') ADVANCE(549);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'T') ADVANCE(548);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'T') ADVANCE(495);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'T') ADVANCE(500);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'T') ADVANCE(527);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'T') ADVANCE(583);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'T') ADVANCE(631);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'T') ADVANCE(565);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'T') ADVANCE(589);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'U') ADVANCE(528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'U') ADVANCE(636);
      if (lookahead == 'Y') ADVANCE(637);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'U') ADVANCE(578);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'U') ADVANCE(545);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'U') ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'V') ADVANCE(525);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'V') ADVANCE(530);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'W') ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'X') ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == 'X') ADVANCE(497);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead != 0) ADVANCE(684);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(338);
      if (lookahead != 0) ADVANCE(684);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0) ADVANCE(684);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_sname);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(684);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_ws);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(685);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '!') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(691);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '*') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(691);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead != 0) ADVANCE(691);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(338);
      if (lookahead != 0) ADVANCE(691);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0) ADVANCE(691);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_word);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(691);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(693);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\n') ADVANCE(695);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym_comment_token3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(336);
      if (lookahead != 0) ADVANCE(338);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 11},
  [2] = {.lex_state = 357},
  [3] = {.lex_state = 357},
  [4] = {.lex_state = 357},
  [5] = {.lex_state = 357},
  [6] = {.lex_state = 357},
  [7] = {.lex_state = 357},
  [8] = {.lex_state = 357},
  [9] = {.lex_state = 357},
  [10] = {.lex_state = 357},
  [11] = {.lex_state = 357},
  [12] = {.lex_state = 8},
  [13] = {.lex_state = 10},
  [14] = {.lex_state = 13},
  [15] = {.lex_state = 10},
  [16] = {.lex_state = 13},
  [17] = {.lex_state = 9},
  [18] = {.lex_state = 10},
  [19] = {.lex_state = 9},
  [20] = {.lex_state = 7},
  [21] = {.lex_state = 15},
  [22] = {.lex_state = 10},
  [23] = {.lex_state = 14},
  [24] = {.lex_state = 15},
  [25] = {.lex_state = 10},
  [26] = {.lex_state = 8},
  [27] = {.lex_state = 15},
  [28] = {.lex_state = 14},
  [29] = {.lex_state = 10},
  [30] = {.lex_state = 10},
  [31] = {.lex_state = 7},
  [32] = {.lex_state = 10},
  [33] = {.lex_state = 10},
  [34] = {.lex_state = 12},
  [35] = {.lex_state = 7},
  [36] = {.lex_state = 13},
  [37] = {.lex_state = 14},
  [38] = {.lex_state = 12},
  [39] = {.lex_state = 8},
  [40] = {.lex_state = 12},
  [41] = {.lex_state = 10},
  [42] = {.lex_state = 12},
  [43] = {.lex_state = 12},
  [44] = {.lex_state = 7},
  [45] = {.lex_state = 8},
  [46] = {.lex_state = 12},
  [47] = {.lex_state = 12},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 9},
  [50] = {.lex_state = 12},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 10},
  [53] = {.lex_state = 10},
  [54] = {.lex_state = 10},
  [55] = {.lex_state = 10},
  [56] = {.lex_state = 10},
  [57] = {.lex_state = 10},
  [58] = {.lex_state = 10},
  [59] = {.lex_state = 10},
  [60] = {.lex_state = 10},
  [61] = {.lex_state = 10},
  [62] = {.lex_state = 10},
  [63] = {.lex_state = 10},
  [64] = {.lex_state = 10},
  [65] = {.lex_state = 10},
  [66] = {.lex_state = 10},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
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
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 10},
  [91] = {.lex_state = 12},
  [92] = {.lex_state = 10},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 10},
  [95] = {.lex_state = 12},
  [96] = {.lex_state = 10},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 12},
  [99] = {.lex_state = 10},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 10},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 10},
  [104] = {.lex_state = 10},
  [105] = {.lex_state = 10},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 10},
  [121] = {.lex_state = 10},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 10},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 12},
  [129] = {.lex_state = 10},
  [130] = {.lex_state = 10},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 12},
  [135] = {.lex_state = 10},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 8},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 10},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 12},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON_COLON_QMARK] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_MACRO_COLON_COLON_QMARK] = ACTIONS(1),
    [anon_sym_MEMO_COLON_COLON_QMARK] = ACTIONS(1),
    [anon_sym_TYPED_COLON_COLON_QMARK] = ACTIONS(1),
    [anon_sym_M_COLON_COLON_QMARK] = ACTIONS(1),
    [anon_sym_GENERIC_COLON] = ACTIONS(1),
    [anon_sym_GENERIC_POUND_COLON] = ACTIONS(1),
    [aux_sym_word_defn_token1] = ACTIONS(1),
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
    [anon_sym_CONSTANT_COLON] = ACTIONS(1),
    [anon_sym_SYMBOL_COLON] = ACTIONS(1),
    [anon_sym_MAIN_COLON] = ACTIONS(1),
    [anon_sym_HELP_COLON] = ACTIONS(1),
    [anon_sym_SYMBOLS_COLON] = ACTIONS(1),
    [anon_sym_SYNTAX_COLON] = ACTIONS(1),
    [anon_sym_ALIEN_COLON] = ACTIONS(1),
    [anon_sym_STRUCT_COLON] = ACTIONS(1),
    [anon_sym_FUNCTION_COLON] = ACTIONS(1),
    [anon_sym_FUNCTION_DASHALIAS_COLON] = ACTIONS(1),
    [sym_vocab_private] = ACTIONS(1),
    [sym_bool] = ACTIONS(1),
    [sym_sname] = ACTIONS(1),
    [sym_ws] = ACTIONS(1),
    [sym_word] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(3),
    [aux_sym_comment_token2] = ACTIONS(5),
    [aux_sym_comment_token3] = ACTIONS(5),
  },
  [1] = {
    [sym_source_file] = STATE(102),
    [sym_comment] = STATE(1),
    [sym__shebang] = ACTIONS(7),
    [aux_sym_comment_token1] = ACTIONS(3),
    [aux_sym_comment_token2] = ACTIONS(7),
    [aux_sym_comment_token3] = ACTIONS(5),
  },
  [2] = {
    [sym__definition] = STATE(48),
    [sym_word_defn] = STATE(131),
    [sym_import_defn] = STATE(131),
    [sym_tuple_or_class_defn] = STATE(131),
    [sym_other_syntax_defn] = STATE(131),
    [sym_expr] = STATE(131),
    [sym_string] = STATE(126),
    [sym_symbol] = STATE(126),
    [sym_number] = STATE(126),
    [sym_comment] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_expr_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(9),
    [anon_sym_COLON_COLON_QMARK] = ACTIONS(11),
    [anon_sym_MACRO_COLON_COLON_QMARK] = ACTIONS(11),
    [anon_sym_MEMO_COLON_COLON_QMARK] = ACTIONS(11),
    [anon_sym_TYPED_COLON_COLON_QMARK] = ACTIONS(11),
    [anon_sym_M_COLON_COLON_QMARK] = ACTIONS(13),
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
    [aux_sym_tuple_or_class_defn_token1] = ACTIONS(31),
    [aux_sym_tuple_or_class_defn_token2] = ACTIONS(33),
    [aux_sym_tuple_or_class_defn_token3] = ACTIONS(35),
    [anon_sym_PREDICATE_COLON] = ACTIONS(37),
    [anon_sym_C_COLON] = ACTIONS(39),
    [anon_sym_INSTANCE_COLON] = ACTIONS(39),
    [anon_sym_SLOT_COLON] = ACTIONS(35),
    [anon_sym_SINGLETON_COLON] = ACTIONS(35),
    [anon_sym_SINGLETONS_COLON] = ACTIONS(41),
    [anon_sym_CONSTANT_COLON] = ACTIONS(43),
    [anon_sym_SYMBOL_COLON] = ACTIONS(45),
    [anon_sym_MAIN_COLON] = ACTIONS(43),
    [anon_sym_HELP_COLON] = ACTIONS(47),
    [anon_sym_SYMBOLS_COLON] = ACTIONS(49),
    [anon_sym_SYNTAX_COLON] = ACTIONS(47),
    [anon_sym_ALIEN_COLON] = ACTIONS(45),
    [anon_sym_STRUCT_COLON] = ACTIONS(47),
    [anon_sym_FUNCTION_COLON] = ACTIONS(51),
    [anon_sym_FUNCTION_DASHALIAS_COLON] = ACTIONS(53),
    [sym_vocab_private] = ACTIONS(55),
    [aux_sym_string_token1] = ACTIONS(57),
    [aux_sym_string_token2] = ACTIONS(59),
    [aux_sym_string_token3] = ACTIONS(59),
    [aux_sym_string_token4] = ACTIONS(57),
    [sym_bool] = ACTIONS(61),
    [aux_sym_symbol_token1] = ACTIONS(63),
    [aux_sym_symbol_token2] = ACTIONS(63),
    [aux_sym_number_token1] = ACTIONS(65),
    [aux_sym_number_token2] = ACTIONS(65),
    [aux_sym_number_token3] = ACTIONS(65),
    [aux_sym_number_token4] = ACTIONS(65),
    [aux_sym_number_token5] = ACTIONS(65),
    [aux_sym_number_token6] = ACTIONS(65),
    [aux_sym_number_token7] = ACTIONS(65),
    [aux_sym_number_token8] = ACTIONS(65),
    [sym_keyword] = ACTIONS(67),
    [aux_sym_comment_token1] = ACTIONS(3),
    [aux_sym_comment_token2] = ACTIONS(5),
    [aux_sym_comment_token3] = ACTIONS(5),
  },
  [3] = {
    [sym__definition] = STATE(48),
    [sym_word_defn] = STATE(131),
    [sym_import_defn] = STATE(131),
    [sym_tuple_or_class_defn] = STATE(131),
    [sym_other_syntax_defn] = STATE(131),
    [sym_expr] = STATE(131),
    [sym_string] = STATE(126),
    [sym_symbol] = STATE(126),
    [sym_number] = STATE(126),
    [sym_comment] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(4),
    [aux_sym_expr_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(69),
    [anon_sym_COLON_COLON_QMARK] = ACTIONS(11),
    [anon_sym_MACRO_COLON_COLON_QMARK] = ACTIONS(11),
    [anon_sym_MEMO_COLON_COLON_QMARK] = ACTIONS(11),
    [anon_sym_TYPED_COLON_COLON_QMARK] = ACTIONS(11),
    [anon_sym_M_COLON_COLON_QMARK] = ACTIONS(13),
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
    [aux_sym_tuple_or_class_defn_token1] = ACTIONS(31),
    [aux_sym_tuple_or_class_defn_token2] = ACTIONS(33),
    [aux_sym_tuple_or_class_defn_token3] = ACTIONS(35),
    [anon_sym_PREDICATE_COLON] = ACTIONS(37),
    [anon_sym_C_COLON] = ACTIONS(39),
    [anon_sym_INSTANCE_COLON] = ACTIONS(39),
    [anon_sym_SLOT_COLON] = ACTIONS(35),
    [anon_sym_SINGLETON_COLON] = ACTIONS(35),
    [anon_sym_SINGLETONS_COLON] = ACTIONS(41),
    [anon_sym_CONSTANT_COLON] = ACTIONS(43),
    [anon_sym_SYMBOL_COLON] = ACTIONS(45),
    [anon_sym_MAIN_COLON] = ACTIONS(43),
    [anon_sym_HELP_COLON] = ACTIONS(47),
    [anon_sym_SYMBOLS_COLON] = ACTIONS(49),
    [anon_sym_SYNTAX_COLON] = ACTIONS(47),
    [anon_sym_ALIEN_COLON] = ACTIONS(45),
    [anon_sym_STRUCT_COLON] = ACTIONS(47),
    [anon_sym_FUNCTION_COLON] = ACTIONS(51),
    [anon_sym_FUNCTION_DASHALIAS_COLON] = ACTIONS(53),
    [sym_vocab_private] = ACTIONS(55),
    [aux_sym_string_token1] = ACTIONS(57),
    [aux_sym_string_token2] = ACTIONS(59),
    [aux_sym_string_token3] = ACTIONS(59),
    [aux_sym_string_token4] = ACTIONS(57),
    [sym_bool] = ACTIONS(61),
    [aux_sym_symbol_token1] = ACTIONS(63),
    [aux_sym_symbol_token2] = ACTIONS(63),
    [aux_sym_number_token1] = ACTIONS(65),
    [aux_sym_number_token2] = ACTIONS(65),
    [aux_sym_number_token3] = ACTIONS(65),
    [aux_sym_number_token4] = ACTIONS(65),
    [aux_sym_number_token5] = ACTIONS(65),
    [aux_sym_number_token6] = ACTIONS(65),
    [aux_sym_number_token7] = ACTIONS(65),
    [aux_sym_number_token8] = ACTIONS(65),
    [sym_keyword] = ACTIONS(67),
    [aux_sym_comment_token1] = ACTIONS(3),
    [aux_sym_comment_token2] = ACTIONS(5),
    [aux_sym_comment_token3] = ACTIONS(5),
  },
  [4] = {
    [sym__definition] = STATE(48),
    [sym_word_defn] = STATE(131),
    [sym_import_defn] = STATE(131),
    [sym_tuple_or_class_defn] = STATE(131),
    [sym_other_syntax_defn] = STATE(131),
    [sym_expr] = STATE(131),
    [sym_string] = STATE(126),
    [sym_symbol] = STATE(126),
    [sym_number] = STATE(126),
    [sym_comment] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
    [aux_sym_expr_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(71),
    [anon_sym_COLON_COLON_QMARK] = ACTIONS(73),
    [anon_sym_MACRO_COLON_COLON_QMARK] = ACTIONS(73),
    [anon_sym_MEMO_COLON_COLON_QMARK] = ACTIONS(73),
    [anon_sym_TYPED_COLON_COLON_QMARK] = ACTIONS(73),
    [anon_sym_M_COLON_COLON_QMARK] = ACTIONS(76),
    [anon_sym_GENERIC_COLON] = ACTIONS(79),
    [anon_sym_GENERIC_POUND_COLON] = ACTIONS(82),
    [anon_sym_HOOK_COLON] = ACTIONS(85),
    [anon_sym_USING_COLON] = ACTIONS(88),
    [aux_sym_import_defn_token1] = ACTIONS(91),
    [anon_sym_QUALIFIED_DASHWITH_COLON] = ACTIONS(94),
    [aux_sym_import_defn_token2] = ACTIONS(97),
    [anon_sym_RENAME_COLON] = ACTIONS(100),
    [aux_sym_import_defn_token3] = ACTIONS(94),
    [aux_sym_import_defn_token4] = ACTIONS(91),
    [aux_sym_tuple_or_class_defn_token1] = ACTIONS(103),
    [aux_sym_tuple_or_class_defn_token2] = ACTIONS(106),
    [aux_sym_tuple_or_class_defn_token3] = ACTIONS(109),
    [anon_sym_PREDICATE_COLON] = ACTIONS(112),
    [anon_sym_C_COLON] = ACTIONS(115),
    [anon_sym_INSTANCE_COLON] = ACTIONS(115),
    [anon_sym_SLOT_COLON] = ACTIONS(109),
    [anon_sym_SINGLETON_COLON] = ACTIONS(109),
    [anon_sym_SINGLETONS_COLON] = ACTIONS(118),
    [anon_sym_CONSTANT_COLON] = ACTIONS(121),
    [anon_sym_SYMBOL_COLON] = ACTIONS(124),
    [anon_sym_MAIN_COLON] = ACTIONS(121),
    [anon_sym_HELP_COLON] = ACTIONS(127),
    [anon_sym_SYMBOLS_COLON] = ACTIONS(130),
    [anon_sym_SYNTAX_COLON] = ACTIONS(127),
    [anon_sym_ALIEN_COLON] = ACTIONS(124),
    [anon_sym_STRUCT_COLON] = ACTIONS(127),
    [anon_sym_FUNCTION_COLON] = ACTIONS(133),
    [anon_sym_FUNCTION_DASHALIAS_COLON] = ACTIONS(136),
    [sym_vocab_private] = ACTIONS(139),
    [aux_sym_string_token1] = ACTIONS(142),
    [aux_sym_string_token2] = ACTIONS(145),
    [aux_sym_string_token3] = ACTIONS(145),
    [aux_sym_string_token4] = ACTIONS(142),
    [sym_bool] = ACTIONS(148),
    [aux_sym_symbol_token1] = ACTIONS(151),
    [aux_sym_symbol_token2] = ACTIONS(151),
    [aux_sym_number_token1] = ACTIONS(154),
    [aux_sym_number_token2] = ACTIONS(154),
    [aux_sym_number_token3] = ACTIONS(154),
    [aux_sym_number_token4] = ACTIONS(154),
    [aux_sym_number_token5] = ACTIONS(154),
    [aux_sym_number_token6] = ACTIONS(154),
    [aux_sym_number_token7] = ACTIONS(154),
    [aux_sym_number_token8] = ACTIONS(154),
    [sym_keyword] = ACTIONS(157),
    [aux_sym_comment_token1] = ACTIONS(3),
    [aux_sym_comment_token2] = ACTIONS(5),
    [aux_sym_comment_token3] = ACTIONS(5),
  },
  [5] = {
    [sym_comment] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(71),
    [anon_sym_COLON_COLON_QMARK] = ACTIONS(160),
    [anon_sym_MACRO_COLON_COLON_QMARK] = ACTIONS(160),
    [anon_sym_MEMO_COLON_COLON_QMARK] = ACTIONS(160),
    [anon_sym_TYPED_COLON_COLON_QMARK] = ACTIONS(160),
    [anon_sym_M_COLON_COLON_QMARK] = ACTIONS(160),
    [anon_sym_GENERIC_COLON] = ACTIONS(160),
    [anon_sym_GENERIC_POUND_COLON] = ACTIONS(160),
    [anon_sym_HOOK_COLON] = ACTIONS(160),
    [anon_sym_USING_COLON] = ACTIONS(160),
    [aux_sym_import_defn_token1] = ACTIONS(160),
    [anon_sym_QUALIFIED_DASHWITH_COLON] = ACTIONS(160),
    [aux_sym_import_defn_token2] = ACTIONS(160),
    [anon_sym_RENAME_COLON] = ACTIONS(160),
    [aux_sym_import_defn_token3] = ACTIONS(160),
    [aux_sym_import_defn_token4] = ACTIONS(160),
    [aux_sym_tuple_or_class_defn_token1] = ACTIONS(160),
    [aux_sym_tuple_or_class_defn_token2] = ACTIONS(160),
    [aux_sym_tuple_or_class_defn_token3] = ACTIONS(160),
    [anon_sym_PREDICATE_COLON] = ACTIONS(160),
    [anon_sym_C_COLON] = ACTIONS(160),
    [anon_sym_INSTANCE_COLON] = ACTIONS(160),
    [anon_sym_SLOT_COLON] = ACTIONS(160),
    [anon_sym_SINGLETON_COLON] = ACTIONS(160),
    [anon_sym_SINGLETONS_COLON] = ACTIONS(160),
    [anon_sym_CONSTANT_COLON] = ACTIONS(160),
    [anon_sym_SYMBOL_COLON] = ACTIONS(160),
    [anon_sym_MAIN_COLON] = ACTIONS(160),
    [anon_sym_HELP_COLON] = ACTIONS(160),
    [anon_sym_SYMBOLS_COLON] = ACTIONS(160),
    [anon_sym_SYNTAX_COLON] = ACTIONS(160),
    [anon_sym_ALIEN_COLON] = ACTIONS(160),
    [anon_sym_STRUCT_COLON] = ACTIONS(160),
    [anon_sym_FUNCTION_COLON] = ACTIONS(160),
    [anon_sym_FUNCTION_DASHALIAS_COLON] = ACTIONS(160),
    [sym_vocab_private] = ACTIONS(160),
    [aux_sym_string_token1] = ACTIONS(71),
    [aux_sym_string_token2] = ACTIONS(160),
    [aux_sym_string_token3] = ACTIONS(160),
    [aux_sym_string_token4] = ACTIONS(71),
    [sym_bool] = ACTIONS(160),
    [aux_sym_symbol_token1] = ACTIONS(71),
    [aux_sym_symbol_token2] = ACTIONS(71),
    [aux_sym_number_token1] = ACTIONS(71),
    [aux_sym_number_token2] = ACTIONS(71),
    [aux_sym_number_token3] = ACTIONS(71),
    [aux_sym_number_token4] = ACTIONS(71),
    [aux_sym_number_token5] = ACTIONS(71),
    [aux_sym_number_token6] = ACTIONS(71),
    [aux_sym_number_token7] = ACTIONS(71),
    [aux_sym_number_token8] = ACTIONS(71),
    [sym_keyword] = ACTIONS(71),
    [aux_sym_comment_token1] = ACTIONS(3),
    [aux_sym_comment_token2] = ACTIONS(5),
    [aux_sym_comment_token3] = ACTIONS(5),
  },
  [6] = {
    [sym_comment] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(162),
    [anon_sym_COLON_COLON_QMARK] = ACTIONS(164),
    [anon_sym_MACRO_COLON_COLON_QMARK] = ACTIONS(164),
    [anon_sym_MEMO_COLON_COLON_QMARK] = ACTIONS(164),
    [anon_sym_TYPED_COLON_COLON_QMARK] = ACTIONS(164),
    [anon_sym_M_COLON_COLON_QMARK] = ACTIONS(164),
    [anon_sym_GENERIC_COLON] = ACTIONS(164),
    [anon_sym_GENERIC_POUND_COLON] = ACTIONS(164),
    [anon_sym_HOOK_COLON] = ACTIONS(164),
    [anon_sym_USING_COLON] = ACTIONS(164),
    [aux_sym_import_defn_token1] = ACTIONS(164),
    [anon_sym_QUALIFIED_DASHWITH_COLON] = ACTIONS(164),
    [aux_sym_import_defn_token2] = ACTIONS(164),
    [anon_sym_RENAME_COLON] = ACTIONS(164),
    [aux_sym_import_defn_token3] = ACTIONS(164),
    [aux_sym_import_defn_token4] = ACTIONS(164),
    [aux_sym_tuple_or_class_defn_token1] = ACTIONS(164),
    [aux_sym_tuple_or_class_defn_token2] = ACTIONS(164),
    [aux_sym_tuple_or_class_defn_token3] = ACTIONS(164),
    [anon_sym_PREDICATE_COLON] = ACTIONS(164),
    [anon_sym_C_COLON] = ACTIONS(164),
    [anon_sym_INSTANCE_COLON] = ACTIONS(164),
    [anon_sym_SLOT_COLON] = ACTIONS(164),
    [anon_sym_SINGLETON_COLON] = ACTIONS(164),
    [anon_sym_SINGLETONS_COLON] = ACTIONS(164),
    [anon_sym_CONSTANT_COLON] = ACTIONS(164),
    [anon_sym_SYMBOL_COLON] = ACTIONS(164),
    [anon_sym_MAIN_COLON] = ACTIONS(164),
    [anon_sym_HELP_COLON] = ACTIONS(164),
    [anon_sym_SYMBOLS_COLON] = ACTIONS(164),
    [anon_sym_SYNTAX_COLON] = ACTIONS(164),
    [anon_sym_ALIEN_COLON] = ACTIONS(164),
    [anon_sym_STRUCT_COLON] = ACTIONS(164),
    [anon_sym_FUNCTION_COLON] = ACTIONS(164),
    [anon_sym_FUNCTION_DASHALIAS_COLON] = ACTIONS(164),
    [sym_vocab_private] = ACTIONS(164),
    [aux_sym_string_token1] = ACTIONS(162),
    [aux_sym_string_token2] = ACTIONS(164),
    [aux_sym_string_token3] = ACTIONS(164),
    [aux_sym_string_token4] = ACTIONS(162),
    [sym_bool] = ACTIONS(164),
    [aux_sym_symbol_token1] = ACTIONS(162),
    [aux_sym_symbol_token2] = ACTIONS(162),
    [aux_sym_number_token1] = ACTIONS(162),
    [aux_sym_number_token2] = ACTIONS(162),
    [aux_sym_number_token3] = ACTIONS(162),
    [aux_sym_number_token4] = ACTIONS(162),
    [aux_sym_number_token5] = ACTIONS(162),
    [aux_sym_number_token6] = ACTIONS(162),
    [aux_sym_number_token7] = ACTIONS(162),
    [aux_sym_number_token8] = ACTIONS(162),
    [sym_keyword] = ACTIONS(162),
    [aux_sym_comment_token1] = ACTIONS(3),
    [aux_sym_comment_token2] = ACTIONS(5),
    [aux_sym_comment_token3] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(61), 1,
      sym_bool,
    ACTIONS(67), 1,
      sym_keyword,
    ACTIONS(166), 1,
      sym_ws,
    STATE(7), 1,
      sym_comment,
    STATE(8), 1,
      aux_sym_expr_repeat1,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(57), 2,
      aux_sym_string_token1,
      aux_sym_string_token4,
    ACTIONS(59), 2,
      aux_sym_string_token2,
      aux_sym_string_token3,
    ACTIONS(63), 2,
      aux_sym_symbol_token1,
      aux_sym_symbol_token2,
    STATE(126), 3,
      sym_string,
      sym_symbol,
      sym_number,
    ACTIONS(65), 8,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_number_token5,
      aux_sym_number_token6,
      aux_sym_number_token7,
      aux_sym_number_token8,
  [50] = 11,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(174), 1,
      sym_bool,
    ACTIONS(183), 1,
      sym_keyword,
    ACTIONS(186), 1,
      sym_ws,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(168), 2,
      aux_sym_string_token1,
      aux_sym_string_token4,
    ACTIONS(171), 2,
      aux_sym_string_token2,
      aux_sym_string_token3,
    ACTIONS(177), 2,
      aux_sym_symbol_token1,
      aux_sym_symbol_token2,
    STATE(8), 2,
      sym_comment,
      aux_sym_expr_repeat1,
    STATE(126), 3,
      sym_string,
      sym_symbol,
      sym_number,
    ACTIONS(180), 8,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_number_token5,
      aux_sym_number_token6,
      aux_sym_number_token7,
      aux_sym_number_token8,
  [98] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(61), 1,
      sym_bool,
    ACTIONS(67), 1,
      sym_keyword,
    STATE(7), 1,
      aux_sym_expr_repeat1,
    STATE(9), 1,
      sym_comment,
    STATE(139), 1,
      sym_expr,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(57), 2,
      aux_sym_string_token1,
      aux_sym_string_token4,
    ACTIONS(59), 2,
      aux_sym_string_token2,
      aux_sym_string_token3,
    ACTIONS(63), 2,
      aux_sym_symbol_token1,
      aux_sym_symbol_token2,
    STATE(126), 3,
      sym_string,
      sym_symbol,
      sym_number,
    ACTIONS(65), 8,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_number_token5,
      aux_sym_number_token6,
      aux_sym_number_token7,
      aux_sym_number_token8,
  [148] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(61), 1,
      sym_bool,
    ACTIONS(67), 1,
      sym_keyword,
    STATE(7), 1,
      aux_sym_expr_repeat1,
    STATE(10), 1,
      sym_comment,
    STATE(140), 1,
      sym_expr,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(57), 2,
      aux_sym_string_token1,
      aux_sym_string_token4,
    ACTIONS(59), 2,
      aux_sym_string_token2,
      aux_sym_string_token3,
    ACTIONS(63), 2,
      aux_sym_symbol_token1,
      aux_sym_symbol_token2,
    STATE(126), 3,
      sym_string,
      sym_symbol,
      sym_number,
    ACTIONS(65), 8,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_number_token5,
      aux_sym_number_token6,
      aux_sym_number_token7,
      aux_sym_number_token8,
  [198] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(11), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(188), 3,
      aux_sym_string_token2,
      aux_sym_string_token3,
      sym_bool,
    ACTIONS(186), 14,
      aux_sym_string_token1,
      aux_sym_string_token4,
      aux_sym_symbol_token1,
      aux_sym_symbol_token2,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_number_token5,
      aux_sym_number_token6,
      aux_sym_number_token7,
      aux_sym_number_token8,
      sym_keyword,
      sym_ws,
  [230] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(190), 1,
      anon_sym_DASH_DASH,
    ACTIONS(192), 1,
      sym_sname,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    STATE(12), 2,
      sym_comment,
      aux_sym_effect_repeat1,
  [248] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(195), 1,
      sym_sname,
    ACTIONS(198), 1,
      sym_ws,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    STATE(13), 2,
      sym_comment,
      aux_sym_namel_repeat1,
  [266] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(200), 1,
      anon_sym_RPAREN,
    ACTIONS(202), 1,
      sym_word,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    STATE(14), 2,
      sym_comment,
      aux_sym_words_repeat1,
  [284] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(205), 1,
      sym_sname,
    STATE(15), 1,
      sym_comment,
    STATE(25), 1,
      aux_sym_namel_repeat1,
    STATE(83), 1,
      sym_namel,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [304] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(207), 1,
      anon_sym_RPAREN,
    ACTIONS(209), 1,
      sym_word,
    STATE(14), 1,
      aux_sym_words_repeat1,
    STATE(16), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [324] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(211), 1,
      anon_sym_SEMI,
    ACTIONS(213), 1,
      sym_sname,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    STATE(17), 2,
      sym_comment,
      aux_sym_namel_repeat1,
  [342] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(216), 1,
      sym_sname,
    STATE(18), 1,
      sym_comment,
    STATE(19), 1,
      aux_sym_namel_repeat1,
    STATE(79), 1,
      sym_namel,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [362] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(216), 1,
      sym_sname,
    ACTIONS(218), 1,
      anon_sym_SEMI,
    STATE(17), 1,
      aux_sym_namel_repeat1,
    STATE(19), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [382] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(190), 1,
      anon_sym_RPAREN,
    ACTIONS(220), 1,
      sym_sname,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    STATE(20), 2,
      sym_comment,
      aux_sym_effect_repeat1,
  [400] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(209), 1,
      sym_word,
    STATE(16), 1,
      aux_sym_words_repeat1,
    STATE(21), 1,
      sym_comment,
    STATE(174), 1,
      sym_words,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [420] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(223), 1,
      sym_sname,
    STATE(22), 1,
      sym_comment,
    STATE(31), 1,
      aux_sym_effect_repeat1,
    STATE(168), 1,
      sym_effect,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [440] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(207), 1,
      anon_sym_SEMI,
    ACTIONS(225), 1,
      sym_word,
    STATE(23), 1,
      sym_comment,
    STATE(28), 1,
      aux_sym_words_repeat1,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [460] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(209), 1,
      sym_word,
    STATE(16), 1,
      aux_sym_words_repeat1,
    STATE(24), 1,
      sym_comment,
    STATE(165), 1,
      sym_words,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [480] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(205), 1,
      sym_sname,
    ACTIONS(227), 1,
      sym_ws,
    STATE(13), 1,
      aux_sym_namel_repeat1,
    STATE(25), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [500] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(229), 1,
      anon_sym_DASH_DASH,
    ACTIONS(231), 1,
      sym_sname,
    STATE(12), 1,
      aux_sym_effect_repeat1,
    STATE(26), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [520] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(225), 1,
      sym_word,
    STATE(23), 1,
      aux_sym_words_repeat1,
    STATE(27), 1,
      sym_comment,
    STATE(119), 1,
      sym_words,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [540] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(200), 1,
      anon_sym_SEMI,
    ACTIONS(233), 1,
      sym_word,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    STATE(28), 2,
      sym_comment,
      aux_sym_words_repeat1,
  [558] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(216), 1,
      sym_sname,
    STATE(19), 1,
      aux_sym_namel_repeat1,
    STATE(29), 1,
      sym_comment,
    STATE(119), 1,
      sym_namel,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [578] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(216), 1,
      sym_sname,
    STATE(19), 1,
      aux_sym_namel_repeat1,
    STATE(30), 1,
      sym_comment,
    STATE(142), 1,
      sym_namel,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [598] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(223), 1,
      sym_sname,
    ACTIONS(229), 1,
      anon_sym_RPAREN,
    STATE(20), 1,
      aux_sym_effect_repeat1,
    STATE(31), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [618] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(205), 1,
      sym_sname,
    STATE(25), 1,
      aux_sym_namel_repeat1,
    STATE(32), 1,
      sym_comment,
    STATE(73), 1,
      sym_namel,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [638] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(231), 1,
      sym_sname,
    STATE(26), 1,
      aux_sym_effect_repeat1,
    STATE(33), 1,
      sym_comment,
    STATE(137), 1,
      sym_effect,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [658] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    STATE(34), 1,
      sym_comment,
    STATE(141), 1,
      sym_stack_effect,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [675] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(35), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(190), 2,
      anon_sym_RPAREN,
      sym_sname,
  [690] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(36), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(200), 2,
      anon_sym_RPAREN,
      sym_word,
  [705] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(37), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(200), 2,
      anon_sym_SEMI,
      sym_word,
  [720] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(238), 1,
      anon_sym_COLON,
    ACTIONS(240), 1,
      sym_ws,
    STATE(38), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [737] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(39), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(190), 2,
      anon_sym_DASH_DASH,
      sym_sname,
  [752] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    STATE(40), 1,
      sym_comment,
    STATE(107), 1,
      sym_stack_effect,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [769] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(198), 1,
      sym_ws,
    ACTIONS(211), 1,
      sym_sname,
    STATE(41), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [786] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    STATE(42), 1,
      sym_comment,
    STATE(109), 1,
      sym_stack_effect,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [803] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    STATE(43), 1,
      sym_comment,
    STATE(167), 1,
      sym_stack_effect,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [820] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(44), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(242), 2,
      anon_sym_RPAREN,
      sym_sname,
  [835] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(45), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(242), 2,
      anon_sym_DASH_DASH,
      sym_sname,
  [850] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(244), 1,
      anon_sym_COLON,
    ACTIONS(246), 1,
      sym_ws,
    STATE(46), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [867] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    STATE(47), 1,
      sym_comment,
    STATE(189), 1,
      sym_stack_effect,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [884] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(248), 1,
      sym_ws,
    STATE(5), 1,
      sym_ews,
    STATE(48), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [901] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(49), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
    ACTIONS(211), 2,
      anon_sym_SEMI,
      sym_sname,
  [916] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(250), 1,
      anon_sym_LT,
    STATE(50), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [930] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(252), 1,
      sym_ws,
    STATE(51), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [944] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(254), 1,
      sym_sname,
    STATE(52), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [958] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(256), 1,
      sym_sname,
    STATE(53), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [972] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(258), 1,
      sym_sname,
    STATE(54), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [986] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(260), 1,
      sym_sname,
    STATE(55), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1000] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(262), 1,
      sym_sname,
    STATE(56), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1014] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(264), 1,
      sym_sname,
    STATE(57), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1028] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(266), 1,
      sym_sname,
    STATE(58), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1042] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(268), 1,
      sym_sname,
    STATE(59), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1056] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(270), 1,
      sym_sname,
    STATE(60), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1070] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(272), 1,
      sym_sname,
    STATE(61), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1084] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(274), 1,
      sym_sname,
    STATE(62), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1098] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(276), 1,
      sym_sname,
    STATE(63), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1112] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(278), 1,
      sym_sname,
    STATE(64), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1126] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(280), 1,
      sym_sname,
    STATE(65), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1140] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(282), 1,
      sym_sname,
    STATE(66), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1154] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(284), 1,
      sym_ws,
    STATE(67), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1168] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(286), 1,
      sym_ws,
    STATE(68), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1182] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(288), 1,
      sym_ws,
    STATE(69), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1196] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(290), 1,
      sym_ws,
    STATE(70), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1210] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(292), 1,
      sym_ws,
    STATE(71), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1224] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(294), 1,
      sym_ws,
    STATE(72), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1238] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(296), 1,
      sym_ws,
    STATE(73), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1252] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(298), 1,
      sym_ws,
    STATE(74), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1266] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(300), 1,
      sym_ws,
    STATE(75), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1280] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(302), 1,
      sym_ws,
    STATE(76), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1294] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(304), 1,
      sym_ws,
    STATE(77), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1308] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(306), 1,
      sym_ws,
    STATE(78), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1322] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(308), 1,
      anon_sym_SEMI,
    STATE(79), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1336] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(310), 1,
      sym_ws,
    STATE(80), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1350] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(312), 1,
      sym_ws,
    STATE(81), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1364] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(314), 1,
      sym_ws,
    STATE(82), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1378] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(316), 1,
      sym_ws,
    STATE(83), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1392] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(318), 1,
      sym_ws,
    STATE(84), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1406] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(320), 1,
      sym_ws,
    STATE(85), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1420] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(322), 1,
      sym_ws,
    STATE(86), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1434] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(324), 1,
      sym_ws,
    STATE(87), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1448] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(326), 1,
      sym_ws,
    STATE(88), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1462] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(328), 1,
      sym_ws,
    STATE(89), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1476] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(330), 1,
      sym_sname,
    STATE(90), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1490] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(332), 1,
      aux_sym_word_defn_token1,
    STATE(91), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1504] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(334), 1,
      sym_sname,
    STATE(92), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1518] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(336), 1,
      anon_sym_SEMI,
    STATE(93), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1532] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(338), 1,
      sym_sname,
    STATE(94), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1546] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(340), 1,
      anon_sym_EQ_GT,
    STATE(95), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1560] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(342), 1,
      sym_sname,
    STATE(96), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1574] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(344), 1,
      sym_ws,
    STATE(97), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1588] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(346), 1,
      anon_sym_LT,
    STATE(98), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1602] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(348), 1,
      sym_sname,
    STATE(99), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1616] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(350), 1,
      anon_sym_SEMI,
    STATE(100), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1630] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(352), 1,
      sym_sname,
    STATE(101), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1644] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(354), 1,
      ts_builtin_sym_end,
    STATE(102), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1658] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(356), 1,
      sym_sname,
    STATE(103), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1672] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(358), 1,
      sym_sname,
    STATE(104), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1686] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(360), 1,
      sym_sname,
    STATE(105), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1700] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(362), 1,
      sym_ws,
    STATE(106), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1714] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(364), 1,
      sym_ws,
    STATE(107), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1728] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(366), 1,
      sym_ws,
    STATE(108), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1742] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(368), 1,
      sym_ws,
    STATE(109), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1756] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(370), 1,
      sym_ws,
    STATE(110), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1770] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(372), 1,
      sym_ws,
    STATE(111), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1784] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(374), 1,
      sym_ws,
    STATE(112), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1798] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(376), 1,
      sym_ws,
    STATE(113), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1812] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(378), 1,
      sym_ws,
    STATE(114), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1826] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(380), 1,
      sym_ws,
    STATE(115), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1840] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(382), 1,
      sym_ws,
    STATE(116), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1854] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(384), 1,
      sym_ws,
    STATE(117), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1868] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(386), 1,
      sym_ws,
    STATE(118), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1882] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(388), 1,
      anon_sym_SEMI,
    STATE(119), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1896] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(390), 1,
      sym_sname,
    STATE(120), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1910] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(392), 1,
      sym_sname,
    STATE(121), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1924] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(394), 1,
      sym_ws,
    STATE(122), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1938] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(396), 1,
      sym_sname,
    STATE(123), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1952] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(398), 1,
      sym_ws,
    STATE(124), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1966] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(400), 1,
      sym_ws,
    STATE(125), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1980] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(402), 1,
      sym_ws,
    STATE(126), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [1994] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(404), 1,
      sym_ws,
    STATE(127), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [2008] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(406), 1,
      anon_sym_EQ_GT,
    STATE(128), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [2022] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(408), 1,
      sym_sname,
    STATE(129), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [2036] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(410), 1,
      sym_sname,
    STATE(130), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [2050] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(412), 1,
      sym_ws,
    STATE(131), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [2064] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(414), 1,
      sym_ws,
    STATE(132), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [2078] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(416), 1,
      sym_ws,
    STATE(133), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [2092] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    STATE(134), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [2106] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(420), 1,
      sym_sname,
    STATE(135), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [2120] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(422), 1,
      sym_ws,
    STATE(136), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [2134] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(424), 1,
      anon_sym_DASH_DASH,
    STATE(137), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [2148] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(426), 1,
      sym_ws,
    STATE(138), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [2162] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(428), 1,
      sym_ws,
    STATE(139), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [2176] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(430), 1,
      sym_ws,
    STATE(140), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [2190] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(432), 1,
      sym_ws,
    STATE(141), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [2204] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(434), 1,
      anon_sym_SEMI,
    STATE(142), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [2218] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(436), 1,
      sym_ws,
    STATE(143), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [2232] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(438), 1,
      sym_ws,
    STATE(144), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [2246] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(440), 1,
      sym_ws,
    STATE(145), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [2260] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(442), 1,
      sym_ws,
    STATE(146), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [2274] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(444), 1,
      sym_ws,
    STATE(147), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [2288] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(446), 1,
      sym_ws,
    STATE(148), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [2302] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(448), 1,
      sym_ws,
    STATE(149), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [2316] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(450), 1,
      sym_ws,
    STATE(150), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [2330] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(452), 1,
      sym_ws,
    STATE(151), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [2344] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(454), 1,
      anon_sym_SEMI,
    STATE(152), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [2358] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(456), 1,
      sym_ws,
    STATE(153), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [2372] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(458), 1,
      sym_ws,
    STATE(154), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [2386] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(460), 1,
      sym_sname,
    STATE(155), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [2400] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(462), 1,
      anon_sym_SEMI,
    STATE(156), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [2414] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(464), 1,
      sym_ws,
    STATE(157), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [2428] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(466), 1,
      anon_sym_LPAREN,
    STATE(158), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [2442] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(468), 1,
      sym_ws,
    STATE(159), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [2456] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(470), 1,
      sym_ws,
    STATE(160), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [2470] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(472), 1,
      sym_ws,
    STATE(161), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [2484] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(474), 1,
      anon_sym_SEMI,
    STATE(162), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [2498] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(476), 1,
      sym_ws,
    STATE(163), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [2512] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(478), 1,
      sym_ws,
    STATE(164), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [2526] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(480), 1,
      anon_sym_RPAREN,
    STATE(165), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [2540] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(482), 1,
      sym_ws,
    STATE(166), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [2554] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(484), 1,
      sym_ws,
    STATE(167), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [2568] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(486), 1,
      anon_sym_RPAREN,
    STATE(168), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [2582] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(488), 1,
      sym_ws,
    STATE(169), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [2596] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(490), 1,
      sym_ws,
    STATE(170), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [2610] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(492), 1,
      sym_ws,
    STATE(171), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [2624] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(494), 1,
      sym_ws,
    STATE(172), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [2638] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(496), 1,
      sym_ws,
    STATE(173), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [2652] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(498), 1,
      anon_sym_RPAREN,
    STATE(174), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [2666] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(500), 1,
      sym_ws,
    STATE(175), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [2680] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(502), 1,
      sym_ws,
    STATE(176), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [2694] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(504), 1,
      sym_ws,
    STATE(177), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [2708] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(506), 1,
      sym_ws,
    STATE(178), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [2722] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(508), 1,
      sym_ws,
    STATE(179), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [2736] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(510), 1,
      sym_ws,
    STATE(180), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [2750] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(512), 1,
      sym_ws,
    STATE(181), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [2764] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(514), 1,
      sym_ws,
    STATE(182), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [2778] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(516), 1,
      sym_ws,
    STATE(183), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [2792] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(518), 1,
      sym_ws,
    STATE(184), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [2806] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(520), 1,
      sym_ws,
    STATE(185), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [2820] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(522), 1,
      sym_ws,
    STATE(186), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [2834] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(524), 1,
      sym_ws,
    STATE(187), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [2848] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(526), 1,
      sym_ws,
    STATE(188), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [2862] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(528), 1,
      sym_ws,
    STATE(189), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [2876] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(530), 1,
      sym_ws,
    STATE(190), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [2890] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(532), 1,
      sym_ws,
    STATE(191), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token2,
      aux_sym_comment_token3,
  [2904] = 1,
    ACTIONS(534), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 50,
  [SMALL_STATE(9)] = 98,
  [SMALL_STATE(10)] = 148,
  [SMALL_STATE(11)] = 198,
  [SMALL_STATE(12)] = 230,
  [SMALL_STATE(13)] = 248,
  [SMALL_STATE(14)] = 266,
  [SMALL_STATE(15)] = 284,
  [SMALL_STATE(16)] = 304,
  [SMALL_STATE(17)] = 324,
  [SMALL_STATE(18)] = 342,
  [SMALL_STATE(19)] = 362,
  [SMALL_STATE(20)] = 382,
  [SMALL_STATE(21)] = 400,
  [SMALL_STATE(22)] = 420,
  [SMALL_STATE(23)] = 440,
  [SMALL_STATE(24)] = 460,
  [SMALL_STATE(25)] = 480,
  [SMALL_STATE(26)] = 500,
  [SMALL_STATE(27)] = 520,
  [SMALL_STATE(28)] = 540,
  [SMALL_STATE(29)] = 558,
  [SMALL_STATE(30)] = 578,
  [SMALL_STATE(31)] = 598,
  [SMALL_STATE(32)] = 618,
  [SMALL_STATE(33)] = 638,
  [SMALL_STATE(34)] = 658,
  [SMALL_STATE(35)] = 675,
  [SMALL_STATE(36)] = 690,
  [SMALL_STATE(37)] = 705,
  [SMALL_STATE(38)] = 720,
  [SMALL_STATE(39)] = 737,
  [SMALL_STATE(40)] = 752,
  [SMALL_STATE(41)] = 769,
  [SMALL_STATE(42)] = 786,
  [SMALL_STATE(43)] = 803,
  [SMALL_STATE(44)] = 820,
  [SMALL_STATE(45)] = 835,
  [SMALL_STATE(46)] = 850,
  [SMALL_STATE(47)] = 867,
  [SMALL_STATE(48)] = 884,
  [SMALL_STATE(49)] = 901,
  [SMALL_STATE(50)] = 916,
  [SMALL_STATE(51)] = 930,
  [SMALL_STATE(52)] = 944,
  [SMALL_STATE(53)] = 958,
  [SMALL_STATE(54)] = 972,
  [SMALL_STATE(55)] = 986,
  [SMALL_STATE(56)] = 1000,
  [SMALL_STATE(57)] = 1014,
  [SMALL_STATE(58)] = 1028,
  [SMALL_STATE(59)] = 1042,
  [SMALL_STATE(60)] = 1056,
  [SMALL_STATE(61)] = 1070,
  [SMALL_STATE(62)] = 1084,
  [SMALL_STATE(63)] = 1098,
  [SMALL_STATE(64)] = 1112,
  [SMALL_STATE(65)] = 1126,
  [SMALL_STATE(66)] = 1140,
  [SMALL_STATE(67)] = 1154,
  [SMALL_STATE(68)] = 1168,
  [SMALL_STATE(69)] = 1182,
  [SMALL_STATE(70)] = 1196,
  [SMALL_STATE(71)] = 1210,
  [SMALL_STATE(72)] = 1224,
  [SMALL_STATE(73)] = 1238,
  [SMALL_STATE(74)] = 1252,
  [SMALL_STATE(75)] = 1266,
  [SMALL_STATE(76)] = 1280,
  [SMALL_STATE(77)] = 1294,
  [SMALL_STATE(78)] = 1308,
  [SMALL_STATE(79)] = 1322,
  [SMALL_STATE(80)] = 1336,
  [SMALL_STATE(81)] = 1350,
  [SMALL_STATE(82)] = 1364,
  [SMALL_STATE(83)] = 1378,
  [SMALL_STATE(84)] = 1392,
  [SMALL_STATE(85)] = 1406,
  [SMALL_STATE(86)] = 1420,
  [SMALL_STATE(87)] = 1434,
  [SMALL_STATE(88)] = 1448,
  [SMALL_STATE(89)] = 1462,
  [SMALL_STATE(90)] = 1476,
  [SMALL_STATE(91)] = 1490,
  [SMALL_STATE(92)] = 1504,
  [SMALL_STATE(93)] = 1518,
  [SMALL_STATE(94)] = 1532,
  [SMALL_STATE(95)] = 1546,
  [SMALL_STATE(96)] = 1560,
  [SMALL_STATE(97)] = 1574,
  [SMALL_STATE(98)] = 1588,
  [SMALL_STATE(99)] = 1602,
  [SMALL_STATE(100)] = 1616,
  [SMALL_STATE(101)] = 1630,
  [SMALL_STATE(102)] = 1644,
  [SMALL_STATE(103)] = 1658,
  [SMALL_STATE(104)] = 1672,
  [SMALL_STATE(105)] = 1686,
  [SMALL_STATE(106)] = 1700,
  [SMALL_STATE(107)] = 1714,
  [SMALL_STATE(108)] = 1728,
  [SMALL_STATE(109)] = 1742,
  [SMALL_STATE(110)] = 1756,
  [SMALL_STATE(111)] = 1770,
  [SMALL_STATE(112)] = 1784,
  [SMALL_STATE(113)] = 1798,
  [SMALL_STATE(114)] = 1812,
  [SMALL_STATE(115)] = 1826,
  [SMALL_STATE(116)] = 1840,
  [SMALL_STATE(117)] = 1854,
  [SMALL_STATE(118)] = 1868,
  [SMALL_STATE(119)] = 1882,
  [SMALL_STATE(120)] = 1896,
  [SMALL_STATE(121)] = 1910,
  [SMALL_STATE(122)] = 1924,
  [SMALL_STATE(123)] = 1938,
  [SMALL_STATE(124)] = 1952,
  [SMALL_STATE(125)] = 1966,
  [SMALL_STATE(126)] = 1980,
  [SMALL_STATE(127)] = 1994,
  [SMALL_STATE(128)] = 2008,
  [SMALL_STATE(129)] = 2022,
  [SMALL_STATE(130)] = 2036,
  [SMALL_STATE(131)] = 2050,
  [SMALL_STATE(132)] = 2064,
  [SMALL_STATE(133)] = 2078,
  [SMALL_STATE(134)] = 2092,
  [SMALL_STATE(135)] = 2106,
  [SMALL_STATE(136)] = 2120,
  [SMALL_STATE(137)] = 2134,
  [SMALL_STATE(138)] = 2148,
  [SMALL_STATE(139)] = 2162,
  [SMALL_STATE(140)] = 2176,
  [SMALL_STATE(141)] = 2190,
  [SMALL_STATE(142)] = 2204,
  [SMALL_STATE(143)] = 2218,
  [SMALL_STATE(144)] = 2232,
  [SMALL_STATE(145)] = 2246,
  [SMALL_STATE(146)] = 2260,
  [SMALL_STATE(147)] = 2274,
  [SMALL_STATE(148)] = 2288,
  [SMALL_STATE(149)] = 2302,
  [SMALL_STATE(150)] = 2316,
  [SMALL_STATE(151)] = 2330,
  [SMALL_STATE(152)] = 2344,
  [SMALL_STATE(153)] = 2358,
  [SMALL_STATE(154)] = 2372,
  [SMALL_STATE(155)] = 2386,
  [SMALL_STATE(156)] = 2400,
  [SMALL_STATE(157)] = 2414,
  [SMALL_STATE(158)] = 2428,
  [SMALL_STATE(159)] = 2442,
  [SMALL_STATE(160)] = 2456,
  [SMALL_STATE(161)] = 2470,
  [SMALL_STATE(162)] = 2484,
  [SMALL_STATE(163)] = 2498,
  [SMALL_STATE(164)] = 2512,
  [SMALL_STATE(165)] = 2526,
  [SMALL_STATE(166)] = 2540,
  [SMALL_STATE(167)] = 2554,
  [SMALL_STATE(168)] = 2568,
  [SMALL_STATE(169)] = 2582,
  [SMALL_STATE(170)] = 2596,
  [SMALL_STATE(171)] = 2610,
  [SMALL_STATE(172)] = 2624,
  [SMALL_STATE(173)] = 2638,
  [SMALL_STATE(174)] = 2652,
  [SMALL_STATE(175)] = 2666,
  [SMALL_STATE(176)] = 2680,
  [SMALL_STATE(177)] = 2694,
  [SMALL_STATE(178)] = 2708,
  [SMALL_STATE(179)] = 2722,
  [SMALL_STATE(180)] = 2736,
  [SMALL_STATE(181)] = 2750,
  [SMALL_STATE(182)] = 2764,
  [SMALL_STATE(183)] = 2778,
  [SMALL_STATE(184)] = 2792,
  [SMALL_STATE(185)] = 2806,
  [SMALL_STATE(186)] = 2820,
  [SMALL_STATE(187)] = 2834,
  [SMALL_STATE(188)] = 2848,
  [SMALL_STATE(189)] = 2862,
  [SMALL_STATE(190)] = 2876,
  [SMALL_STATE(191)] = 2890,
  [SMALL_STATE(192)] = 2904,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(190),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(188),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(185),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(184),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(183),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(182),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(181),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(180),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(179),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(178),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(177),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(176),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(172),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(171),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(160),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(159),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(157),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(151),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(149),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(138),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(136),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(133),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(131),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(127),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(127),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(126),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(125),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(124),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(126),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ews, 1),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ews, 1),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_repeat1, 2), SHIFT_REPEAT(127),
  [171] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_repeat1, 2), SHIFT_REPEAT(127),
  [174] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expr_repeat1, 2), SHIFT_REPEAT(126),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_repeat1, 2), SHIFT_REPEAT(125),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_repeat1, 2), SHIFT_REPEAT(124),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_repeat1, 2), SHIFT_REPEAT(126),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_repeat1, 2),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expr_repeat1, 2),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_effect_repeat1, 2),
  [192] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_effect_repeat1, 2), SHIFT_REPEAT(38),
  [195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_namel_repeat1, 2), SHIFT_REPEAT(72),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_namel_repeat1, 2),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_words_repeat1, 2),
  [202] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_words_repeat1, 2), SHIFT_REPEAT(187),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_words, 1),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_namel_repeat1, 2),
  [213] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_namel_repeat1, 2), SHIFT_REPEAT(186),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namel, 1),
  [220] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_effect_repeat1, 2), SHIFT_REPEAT(46),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namel, 1),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_effect, 1),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [233] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_words_repeat1, 2), SHIFT_REPEAT(118),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_effect_repeat1, 5),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_defn, 3),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_or_class_defn, 3),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_other_syntax_defn, 3),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_or_class_defn, 4),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [354] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_defn, 5),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_defn, 5),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_or_class_defn, 5),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_other_syntax_defn, 5),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__definition, 1),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_other_syntax_defn, 6),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_defn, 7),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_or_class_defn, 7),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_defn, 8),
  [460] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_defn, 9),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_defn, 9),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_or_class_defn, 9),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_defn, 10),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_other_syntax_defn, 10),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stack_effect, 7),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_other_syntax_defn, 12),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_Factor(void) {
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
