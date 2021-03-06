module.exports = grammar({
  name: 'factor',

  extras: $ => [$.comment],

  rules: {
    source_file: $ => seq(
        optional($.shebang),
        repeat(seq($._definition,$.ws))
    ),

    shebang: $ => /#!.*\s+/,

    _definition: $ => choice(
        $.word_defn,
        $.import_defn,
        $.tuple_or_class_defn,
        $.other_syntax_defn,
        $.vocab_private,
        $._token
    ),
    
    word_defn: $ => choice(
        seq(/::?/,$.ws,$.sname,$.ws,$.stack_effect,$.ws,optional($.expr),';'),
        seq(/MACRO::?/,$.ws,$.sname,$.ws,$.stack_effect,$.ws,optional($.expr),';'),
        seq(/MEMO::?/,$.ws,$.sname,$.ws,$.stack_effect,$.ws,optional($.expr),';'),
        seq(/TYPED::?/,$.ws,$.sname,$.ws,$.stack_effect,$.ws,optional($.expr),';'),
        seq(/M::?/,$.ws,$.sname,$.ws,$.sname,$.ws,optional($.expr),';'),
        seq('GENERIC:',$.ws,$.sname,$.ws,$.stack_effect),
        seq('GENERIC#:',$.ws,$.sname,$.ws,/\d+/,$.ws,$.stack_effect),
        seq('GENERIC#:',$.ws,$.sname,$.ws,/\d+/,$.ws,$.stack_effect),
        seq('HOOK:',$.ws,$.sname,$.ws,$.sname,$.ws,$.stack_effect)
    ),

    expr: $ => repeat1(seq($._token,$.ws)),

    // stack_effect: $ => /\((\s+\S+)*\s+--(\s+\S+)*\s+\)/,
    
    stack_effect: $ => seq('(',$.ws,optional($.effect),'--',$.ws,optional($.effect),')'),

    effect: $ => repeat1(seq($.sname,optional(seq(':',$.ws,$.stack_effect)),$.ws)),

    import_defn: $ => choice( 
        seq('USING:',$.ws,$.namel,';'),
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

    _token: $ => choice(
        $.number,
        $.string,
        $.bool,
        $.word
    ),

    string: $ => choice(
        /"""\s(?:.|\n)*?\s"""/,
        /"(?:\\\\|\\"|[^"])*"/,
        /(\S+")(\s+)((?:\\\\|\\"|[^"])*")/,
        /(CHAR:)(\s+)(\\[\\abfnrstv]|[^\\]\S*)(\s)/
    ),

    bool: $ => /[tf]/,

    number: $ => choice(
        /[+-]?(?:[\d,]*\d)?\.(?:\d([\d,]*\d)?)?(?:[eE][+-]?\d+)?/,
        /[+-]?\d(?:[\d,]*\d)?(?:[eE][+-]?\d+)?/,
        /0x[a-fA-F\d](?:[a-fA-F\d,]*[a-fA-F\d])?(?:p\d([\d,]*\d)?)?/,
        /NAN:\s+[a-fA-F\d](?:[a-fA-F\d,]*[a-fA-F\d])?(?:p\d([\d,]*\d)?)?/,
        /0b[01]+/,
        /0o[0-7]+/,
        /(?:\d([\d,]*\d)?)?\+\d(?:[\d,]*\d)?\/\d(?:[\d,]*\d)?/,
        /(?:\-\d([\d,]*\d)?)?\-\d(?:[\d,]*\d)?\/\d(?:[\d,]*\d)?/,
    ),

    vocab_private: $ => /<PRIVATE|PRIVATE>/,

    word: $ => /\S+/,

    sname: $ => /[^"\s](\S)*/,

    namel: $ => repeat1(seq($.sname,$.ws)),

    ws: $ => /\s+/,

    comment: $ => choice(
        /!\s+.*\n/,
        /#!\s+.*\n/,
        /\/\*\s+(?:.|\n)*?\s\*\//
    )
  }
});

