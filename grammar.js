module.exports = grammar({
  name: 'Factor',

  extras: $ => [$.comment],

  rules: {
    source_file: $ => seq(
        $._shebang,
        repeat(seq($._definition,$.ews))
    ),

    _shebang: $ => /#!.*\n/,

    _definition: $ => choice(
        $.word_defn,
        $.import_defn,
        $.tuple_or_class_defn,
        $.other_syntax_defn,
        $.vocab_private,
        $.expr
    ),

    word_defn: $ => choice(
        seq('::?',$.ws,$.sname,$.ws,$.stack_effect,$.ws,$.expr,$.ws,';'),
        seq('MACRO::?',$.ws,$.sname,$.ws,$.stack_effect,$.ws,$.expr,$.ws,';'),
        seq('MEMO::?',$.ws,$.sname,$.ws,$.stack_effect,$.ws,$.expr,$.ws,';'),
        seq('TYPED::?',$.ws,$.sname,$.ws,$.stack_effect,$.ws,$.expr,$.ws,';'),
        seq('M::?',$.ws,$.sname,$.ws,$.sname,$.ws,$.expr,$.ws,$.ws,';'),
        seq('GENERIC:',$.ws,$.sname,$.ws,$.stack_effect),
        seq('GENERIC#:',$.ws,$.sname,$.ws,/\d+/,$.ws,$.stack_effect),
        seq('GENERIC#:',$.ws,$.sname,$.ws,/\d+/,$.ws,$.stack_effect),
        seq('HOOK:',$.ws,$.sname,$.ws,$.sname,$.ws,$.stack_effect)
    ),

    stack_effect: $ => seq('(',$.ws,$.effect,'--',$.ws,$.effect,')'),

    effect: $ => repeat1(seq($.sname,optional(seq(':',$.ws,$.stack_effect)),$.ws)),

    import_defn: $ => choice( 
        seq('USING:',$.ws,$.namel,$.ws,';'),
        seq(/USE:|UNUSE:|IN:|QUALIFIED:/,$.ws,$.sname),
        seq('QUALIFIED-WITH:',$.ws,$.sname,$.ws,$.sname),
        seq(/FROM:|EXCLUDE:/,$.ws,$.sname,$.ws,'=>',$.ws,$.namel,';'),
        seq('RENAME:',$.ws,$.sname,$.ws,$.sname,$.ws,'=>',$.ws,$.sname),
        seq(/ALIAS:|TYPEDEF:/,$.ws,$.sname,$.ws,$.sname),
        seq(/DEFER:|FORGET:|POSTPONE:/,$.ws,$.sname)
    ),

    tuple_or_class_defn: $ => choice(
        seq(/TUPLE:|ERROR:/,$.ws,$.sname,$.ws,'<',$.ws,$.sname,$.ws,';'),
        seq(/TUPLE:|ERROR:|BUILTIN:/,$.ws,$.namel,';'),
        seq(/MIXIN:|UNION:|INTERSECTION:/,$.ws,$.sname),
        seq('PREDICATE:',$.ws,$.sname,$.ws,'<',$.ws,$.sname),
        seq('C:',$.ws,$.sname,$.ws,$.sname),
        seq('INSTANCE:',$.ws,$.sname,$.ws,$.sname),
        seq('SLOT:',$.ws,$.sname),
        seq('SINGLETON:',$.ws,$.sname),
        seq('SINGLETONS:',$.ws,$.namel,$.ws,';')
    ),

    other_syntax_defn: $ => choice(
        seq('CONSTANT:',$.ws,$.sname,$.ws,$.sname),
        seq('SYMBOL:',$.ws,$.sname),
        seq('MAIN:',$.ws,$.sname,$.ws,$.sname),
        seq('HELP:',$.ws,$.sname,$.ws,$.words,';'),
        seq('SYMBOLS:',$.ws,$.sname,$.ws,$.namel,';'),
        seq('SYNTAX:',$.ws,$.sname,$.ws,$.words,';'),
        seq('ALIEN:',$.ws,$.sname),
        seq('STRUCT:',$.ws,$.sname,$.ws,$.words,';'),
        seq('FUNCTION:',$.ws,$.sname,$.ws,$.sname,$.ws,'(',$.ws,$.words,')'),
        seq('FUNCTION-ALIAS:',$.ws,$.sname,$.ws,$.sname,$.ws,$.sname,$.ws,'(',$.ws,$.words,')'),
    ),

    vocab_private: $ => /<PRIVATE|PRIVATE>/,

    expr: $ => repeat1(
        seq(
            choice(
                $.string,
                $.bool,
                $.symbol,
                $.number,
                $.keyword
                // $.builtin
            ),
            $.ws
        )
    ),

    string: $ => choice(
        /"""\s(?:.|\n)*?\s"""/,
        /"(?:\\\\|\\"|[^"])*"/,
        /(\S+")(\s+)((?:\\\\|\\"|[^"])*")/,
        /(CHAR:)(\s+)(\\[\\abfnrstv]|[^\\]\S*)(\s)/
    ),

    bool: $ => /[tf]/,

    symbol: $ => choice(
        /[\\$]\s+\S+/,
        /M\\\s+\S+\s+\S+/,
    ),

    number: $ => choice(
        /[+-]?(?:[\d,]*\d)?\.(?:\d([\d,]*\d)?)?(?:[eE][+-]?\d+)?\s/,
        /[+-]?\d(?:[\d,]*\d)?(?:[eE][+-]?\d+)?\s/,
        /0x[a-fA-F\d](?:[a-fA-F\d,]*[a-fA-F\d])?(?:p\d([\d,]*\d)?)?\s/,
        /NAN:\s+[a-fA-F\d](?:[a-fA-F\d,]*[a-fA-F\d])?(?:p\d([\d,]*\d)?)?\s/,
        /0b[01]+\s/,
        /0o[0-7]+\s/,
        /(?:\d([\d,]*\d)?)?\+\d(?:[\d,]*\d)?\/\d(?:[\d,]*\d)?\s/,
        /(?:\-\d([\d,]*\d)?)?\-\d(?:[\d,]*\d)?\/\d(?:[\d,]*\d)?\s/,
    ),

    keyword: $ => /(?:deprecated|final|foldable|flushable|inline|recursive)\s/,

    sname: $ => /[^"\s](\S)*/,

    namel: $ => repeat1(seq($.sname,$.ws)),

    ws: $ => /\s+/,

    ews: $ => $.ws, // can't set $ here.

    word: $ => /\S+/,

    words: $ => repeat1(seq($.word,$.ws)),

    comment: $ => choice(
        /!\s+.*\n/,
        /#!\s+.*\n/,
        /\/\*\s+(?:.|\n)*?\s\*\//
    )
  }
});

