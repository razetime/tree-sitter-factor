module.exports = grammar({
  name: 'factor',

  extras: $ => [$.comment],

  rules: {
    source_file: $ => seq(
        optional($.shebang),
        optional($._ws),
        seq(repeat(seq($._definition,$._ws)),optional($._definition))
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
        seq(/::?/,$._ws,$.sname,$._ws,$.stack_effect,$._ws,optional($.expr),';'),
        seq(/MACRO::?/,$._ws,$.sname,$._ws,$.stack_effect,$._ws,optional($.expr),';'),
        seq(/MEMO::?/,$._ws,$.sname,$._ws,$.stack_effect,$._ws,optional($.expr),';'),
        seq(/TYPED::?/,$._ws,$.sname,$._ws,$.stack_effect,$._ws,optional($.expr),';'),
        seq(/M::?/,$._ws,$.sname,$._ws,$.sname,$._ws,optional($.expr),';'),
        seq('GENERIC:',$._ws,$.sname,$._ws,$.stack_effect),
        seq('GENERIC#:',$._ws,$.sname,$._ws,/\d+/,$._ws,$.stack_effect),
        seq('GENERIC#:',$._ws,$.sname,$._ws,/\d+/,$._ws,$.stack_effect),
        seq('HOOK:',$._ws,$.sname,$._ws,$.sname,$._ws,$.stack_effect)
    ),

    expr: $ => repeat1(seq($._token,$._ws)),

    // stack_effect: $ => /\((\s+\S+)*\s+--(\s+\S+)*\s+\)/,
    
    stack_effect: $ => seq('(',$._ws,optional($.effect),'--',$._ws,optional($.effect),')'),

    effect: $ => repeat1(seq($.sname,optional(seq(':',$._ws,$.stack_effect)),$._ws)),

    import_defn: $ => choice( 
        seq('USING:',$._ws,$.namel,';'),
        seq(/USE:|UNUSE:|IN:|QUALIFIED:/,$._ws,$.sname),
        seq('QUALIFIED-WITH:',$._ws,$.sname,$._ws,$.sname),
        seq(/FROM:|EXCLUDE:/,$._ws,$.sname,$._ws,'=>',$._ws,$.namel,';'),
        seq('RENAME:',$._ws,$.sname,$._ws,$.sname,$._ws,'=>',$._ws,$.sname),
        seq(/ALIAS:|TYPEDEF:/,$._ws,$.sname,$._ws,$.sname),
        seq(/DEFER:|FORGET:|POSTPONE:/,$._ws,$.sname)
    ),
    
    tuple_or_class_defn: $ => choice(
        seq(/TUPLE:|ERROR:/,$._ws,$.sname,$._ws,'<',$._ws,$.sname,$._ws,';'),
        seq(/TUPLE:|ERROR:|BUILTIN:/,$._ws,$.namel,';'),
        seq(/MIXIN:|UNION:|INTERSECTION:/,$._ws,$.sname),
        seq('PREDICATE:',$._ws,$.sname,$._ws,'<',$._ws,$.sname),
        seq('C:',$._ws,$.sname,$._ws,$.sname),
        seq('INSTANCE:',$._ws,$.sname,$._ws,$.sname),
        seq('SLOT:',$._ws,$.sname),
        seq('SINGLETON:',$._ws,$.sname),
        seq('SINGLETONS:',$._ws,$.namel,$._ws,';')
    ),

    other_syntax_defn: $ => choice(
        seq('CONSTANT:',$._ws,$.sname,$._ws,$.sname),
        seq('SYMBOL:',$._ws,$.sname),
        seq('MAIN:',$._ws,$.sname,$._ws,$.sname),
        seq('HELP:',$._ws,$.sname,$._ws,$.words,';'),
        seq('SYMBOLS:',$._ws,$.sname,$._ws,$.namel,';'),
        seq('SYNTAX:',$._ws,$.sname,$._ws,$.words,';'),
        seq('ALIEN:',$._ws,$.sname),
        seq('STRUCT:',$._ws,$.sname,$._ws,$.words,';'),
        seq('FUNCTION:',$._ws,$.sname,$._ws,$.sname,$._ws,'(',$._ws,$.words,')'),
        seq('FUNCTION-ALIAS:',$._ws,$.sname,$._ws,$.sname,$._ws,$.sname,$._ws,'(',$._ws,$.words,')'),
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

    word: $ => choice($._keyword,/\S+/), // ordinary word.

    _keyword: $ => choice($.builtin_kernel, $.builtin_assocs, $.builtin_combinators, $.builtin_math, $.builtin_sequences,
                      $.builtin_namespaces, $.builtin_arrays, $.builtin_io, $.builtin_strings, $.builtin_vectors,
                      $.builtin_continuations), // keywords.

    builtin_kernel: $ => choice(
        '-rot', '2bi', '2bi@', '2bi*', '2curry', '2dip', '2drop', '2dup', '2keep', '2nip',
        '2over', '2tri', '2tri@', '2tri*', '3bi', '3curry', '3dip', '3drop', '3dup', '3keep',
        '3tri', '4dip', '4drop', '4dup', '4keep', '<wrapper>', '=', '>boolean', 'clone',
        '?', '?execute', '?if', 'and', 'assert', 'assert=', 'assert?', 'bi', 'bi-curry',
        'bi-curry@', 'bi-curry*', 'bi@', 'bi*', 'boa', 'boolean', 'boolean?', 'both?',
        'build', 'call', 'callstack', 'callstack>array', 'callstack?', 'clear', '(clone)',
        'compose', 'compose?', 'curry', 'curry?', 'datastack', 'die', 'dip', 'do', 'drop',
        'dup', 'dupd', 'either?', 'eq?', 'equal?', 'execute', 'hashcode', 'hashcode*',
        'identity-hashcode', 'identity-tuple', 'identity-tuple?', 'if', 'if*',
        'keep', 'loop', 'most', 'new', 'nip', 'not', 'null', 'object', 'or', 'over',
        'pick', 'prepose', 'retainstack', 'rot', 'same?', 'swap', 'swapd', 'throw',
        'tri', 'tri-curry', 'tri-curry@', 'tri-curry*', 'tri@', 'tri*', 'tuple',
        'tuple?', 'unless', 'unless*', 'until', 'when', 'when*', 'while', 'with',
        'wrapper', 'wrapper?', 'xor'),

    builtin_assocs: $ => choice(
        '2cache', '<enum>', '>alist', '?at', '?of', 'assoc', 'assoc-all?',
        'assoc-any?', 'assoc-clone-like', 'assoc-combine', 'assoc-diff',
        'assoc-diff!', 'assoc-differ', 'assoc-each', 'assoc-empty?',
        'assoc-filter', 'assoc-filter!', 'assoc-filter-as', 'assoc-find',
        'assoc-hashcode', 'assoc-intersect', 'assoc-like', 'assoc-map',
        'assoc-map-as', 'assoc-partition', 'assoc-refine', 'assoc-size',
        'assoc-stack', 'assoc-subset?', 'assoc-union', 'assoc-union!',
        'assoc=', 'assoc>map', 'assoc?', 'at', 'at+', 'at*', 'cache', 'change-at',
        'clear-assoc', 'delete-at', 'delete-at*', 'enum', 'enum?', 'extract-keys',
        'inc-at', 'key?', 'keys', 'map>assoc', 'maybe-set-at', 'new-assoc', 'of',
        'push-at', 'rename-at', 'set-at', 'sift-keys', 'sift-values', 'substitute',
        'unzip', 'value-at', 'value-at*', 'value?', 'values', 'zip'),

    builtin_combinators: $ => choice(
        '2cleave', '2cleave>quot', '3cleave', '3cleave>quot', '4cleave',
        '4cleave>quot', 'alist>quot', 'call-effect', 'case', 'case-find',
        'case>quot', 'cleave', 'cleave>quot', 'cond', 'cond>quot', 'deep-spread>quot',
        'execute-effect', 'linear-case-quot', 'no-case', 'no-case?', 'no-cond',
        'no-cond?', 'recursive-hashcode', 'shallow-spread>quot', 'spread',
        'to-fixed-point', 'wrong-values', 'wrong-values?'),
    
    builtin_math: $ => choice(
        '-', '/', '/f', '/i', '/mod', '2/', '2^', '<', '<=', '<fp-nan>', '>',
        '>=', '>bignum', '>fixnum', '>float', '>integer', '(all-integers?)',
        '(each-integer)', '(find-integer)', '*', '+', '?1+',
        'abs', 'align', 'all-integers?', 'bignum', 'bignum?', 'bit?', 'bitand',
        'bitnot', 'bitor', 'bits>double', 'bits>float', 'bitxor', 'complex',
        'complex?', 'denominator', 'double>bits', 'each-integer', 'even?',
        'find-integer', 'find-last-integer', 'fixnum', 'fixnum?', 'float',
        'float>bits', 'float?', 'fp-bitwise=', 'fp-infinity?', 'fp-nan-payload',
        'fp-nan?', 'fp-qnan?', 'fp-sign', 'fp-snan?', 'fp-special?',
        'if-zero', 'imaginary-part', 'integer', 'integer>fixnum',
        'integer>fixnum-strict', 'integer?', 'log2', 'log2-expects-positive',
        'log2-expects-positive?', 'mod', 'neg', 'neg?', 'next-float',
        'next-power-of-2', 'number', 'number=', 'number?', 'numerator', 'odd?',
        'out-of-fixnum-range', 'out-of-fixnum-range?', 'power-of-2?',
        'prev-float', 'ratio', 'ratio?', 'rational', 'rational?', 'real',
        'real-part', 'real?', 'recip', 'rem', 'sgn', 'shift', 'sq', 'times',
        'u<', 'u<=', 'u>', 'u>=', 'unless-zero', 'unordered?', 'when-zero',
        'zero?'),

    builtin_sequences: $ => choice(
        '1sequence', '2all?', '2each', '2map', '2map-as', '2map-reduce', '2reduce',
        '2selector', '2sequence', '3append', '3append-as', '3each', '3map', '3map-as',
        '3sequence', '4sequence', '<repetition>', '<reversed>', '<slice>', '?first',
        '?last', '?nth', '?second', '?set-nth', 'accumulate', 'accumulate!',
        'accumulate-as', 'all?', 'any?', 'append', 'append!', 'append-as',
        'assert-sequence', 'assert-sequence=', 'assert-sequence?',
        'binary-reduce', 'bounds-check', 'bounds-check?', 'bounds-error',
        'bounds-error?', 'but-last', 'but-last-slice', 'cartesian-each',
        'cartesian-map', 'cartesian-product', 'change-nth', 'check-slice',
        'check-slice-error', 'clone-like', 'collapse-slice', 'collector',
        'collector-for', 'concat', 'concat-as', 'copy', 'count', 'cut', 'cut-slice',
        'cut*', 'delete-all', 'delete-slice', 'drop-prefix', 'each', 'each-from',
        'each-index', 'empty?', 'exchange', 'filter', 'filter!', 'filter-as', 'find',
        'find-from', 'find-index', 'find-index-from', 'find-last', 'find-last-from',
        'first', 'first2', 'first3', 'first4', 'flip', 'follow', 'fourth', 'glue', 'halves',
        'harvest', 'head', 'head-slice', 'head-slice*', 'head*', 'head?',
        'if-empty', 'immutable', 'immutable-sequence', 'immutable-sequence?',
        'immutable?', 'index', 'index-from', 'indices', 'infimum', 'infimum-by',
        'insert-nth', 'interleave', 'iota', 'iota-tuple', 'iota-tuple?', 'join',
        'join-as', 'last', 'last-index', 'last-index-from', 'length', 'lengthen',
        'like', 'longer', 'longer?', 'longest', 'map', 'map!', 'map-as', 'map-find',
        'map-find-last', 'map-index', 'map-integers', 'map-reduce', 'map-sum',
        'max-length', 'member-eq?', 'member?', 'midpoint@', 'min-length',
        'mismatch', 'move', 'new-like', 'new-resizable', 'new-sequence',
        'non-negative-integer-expected', 'non-negative-integer-expected?',
        'nth', 'nths', 'pad-head', 'pad-tail', 'padding', 'partition', 'pop', 'pop*',
        'prefix', 'prepend', 'prepend-as', 'produce', 'produce-as', 'product', 'push',
        'push-all', 'push-either', 'push-if', 'reduce', 'reduce-index', 'remove',
        'remove!', 'remove-eq', 'remove-eq!', 'remove-nth', 'remove-nth!', 'repetition',
        'repetition?', 'replace-slice', 'replicate', 'replicate-as', 'rest',
        'rest-slice', 'reverse', 'reverse!', 'reversed', 'reversed?', 'second',
        'selector', 'selector-for', 'sequence', 'sequence-hashcode', 'sequence=',
        'sequence?', 'set-first', 'set-fourth', 'set-last', 'set-length', 'set-nth',
        'set-second', 'set-third', 'short', 'shorten', 'shorter', 'shorter?',
        'shortest', 'sift', 'slice', 'slice-error', 'slice-error?', 'slice?',
        'snip', 'snip-slice', 'start', 'start*', 'subseq', 'subseq?', 'suffix',
        'suffix!', 'sum', 'sum-lengths', 'supremum', 'supremum-by', 'surround', 'tail',
        'tail-slice', 'tail-slice*', 'tail*', 'tail?', 'third', 'trim',
        'trim-head', 'trim-head-slice', 'trim-slice', 'trim-tail', 'trim-tail-slice',
        'unclip', 'unclip-last', 'unclip-last-slice', 'unclip-slice', 'unless-empty',
        'virtual-exemplar', 'virtual-sequence', 'virtual-sequence?', 'virtual@',
        'when-empty'), 

    builtin_namespaces: $ => choice(
        '+@', 'change', 'change-global', 'counter', 'dec', 'get', 'get-global',
        'global', 'inc', 'init-namespaces', 'initialize', 'is-global', 'make-assoc',
        'namespace', 'namestack', 'off', 'on', 'set', 'set-global', 'set-namestack',
        'toggle', 'with-global', 'with-scope', 'with-variable', 'with-variables'),
        

    builtin_arrays: $ => choice(
        '1array', '2array', '3array', '4array', '<array>', '>array', 'array',
        'array?', 'pair', 'pair?', 'resize-array'), 

    builtin_io: $ => choice(
        '(each-stream-block-slice)', '(each-stream-block)',
        '(stream-contents-by-block)', '(stream-contents-by-element)',
        '(stream-contents-by-length-or-block)',
        '(stream-contents-by-length)', '+byte+', '+character+',
        'bad-seek-type', 'bad-seek-type?', 'bl', 'contents', 'each-block',
        'each-block-size', 'each-block-slice', 'each-line', 'each-morsel',
        'each-stream-block', 'each-stream-block-slice', 'each-stream-line',
        'error-stream', 'flush', 'input-stream', 'input-stream?',
        'invalid-read-buffer', 'invalid-read-buffer?', 'lines', 'nl',
        'output-stream', 'output-stream?', 'print', 'read', 'read-into',
        'read-partial', 'read-partial-into', 'read-until', 'read1', 'readln',
        'seek-absolute', 'seek-absolute?', 'seek-end', 'seek-end?',
        'seek-input', 'seek-output', 'seek-relative', 'seek-relative?',
        'stream-bl', 'stream-contents', 'stream-contents*', 'stream-copy',
        'stream-copy*', 'stream-element-type', 'stream-flush',
        'stream-length', 'stream-lines', 'stream-nl', 'stream-print',
        'stream-read', 'stream-read-into', 'stream-read-partial',
        'stream-read-partial-into', 'stream-read-partial-unsafe',
        'stream-read-unsafe', 'stream-read-until', 'stream-read1',
        'stream-readln', 'stream-seek', 'stream-seekable?', 'stream-tell',
        'stream-write', 'stream-write1', 'tell-input', 'tell-output',
        'with-error-stream', 'with-error-stream*', 'with-error>output',
        'with-input-output+error-streams',
        'with-input-output+error-streams*', 'with-input-stream',
        'with-input-stream*', 'with-output-stream', 'with-output-stream*',
        'with-output>error', 'with-output+error-stream',
        'with-output+error-stream*', 'with-streams', 'with-streams*',
        'write', 'write1'), 

    builtin_strings: $ => choice(
        '1string', '<string>', '>string', 'resize-string', 'string',
        'string?'), 

    builtin_vectors: $ => choice(
        '1vector', '<vector>', '>vector', '?push', 'vector', 'vector?'),
        

    builtin_continuations: $ => choice(
        '<condition>', '<continuation>', '<restart>', 'attempt-all',
        'attempt-all-error', 'attempt-all-error?', 'callback-error-hook',
        'callcc0', 'callcc1', 'cleanup', 'compute-restarts', 'condition',
        'condition?', 'continuation', 'continuation?', 'continue',
        'continue-restart', 'continue-with', 'current-continuation',
        'error', 'error-continuation', 'error-in-thread', 'error-thread',
        'ifcc', 'ignore-errors', 'in-callback?', 'original-error', 'recover',
        'restart', 'restart?', 'restarts', 'rethrow', 'rethrow-restarts',
        'return', 'return-continuation', 'thread-error-hook', 'throw-continue',
        'throw-restarts', 'with-datastack', 'with-return'), 

    words: $ => repeat1(seq($.sname, $._ws)),

    sname: $ => /[^"\s](\S)*/,

    namel: $ => repeat1(seq($.sname,$._ws)),

    _ws: $ => /\s+/,

    comment: $ => choice(
        /!\s+.*\n/,
        /#!\s+.*\n/,
        /\/\*\s+(?:.|\n)*?\s\*\//
    )
  }
});

