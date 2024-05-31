
#include "cpp/embedded_file.h"

namespace embedded_file {
GLOBAL_STR(gStr0, R"zZXx(
  Errors
  <a class="group-link" href="chap-errors.html">errors</a>


  [UTF8]      err-utf8-encode       err-utf8-decode
  [J8 String] err-j8-str-encode     err-j8-str-decode
  [J8 Lines]  err-j8-lines-encode   err-j8-lines-decode
  [JSON]      err-json-encode       err-json-decode
  [JSON8]     err-json8-encode      err-json8-decode
)zZXx");

GLOBAL_STR(gStr1, R"zZXx(
  
  Front End <a class="group-link" href="chap-front-end.html">front-end</a>


  [Lexing]        ascii-whitespace [ \t\r\n]
                  ascii-control-chars
)zZXx");

GLOBAL_STR(gStr2, R"zZXx(
  J8 Notation
  <a class="group-link" href="chap-j8.html">j8</a>


  [J8 Strings]   json-string        "hi"
                 json-escape        \"  \\  \u1234
                 surrogate-pair     \ud83e\udd26
                 j8-escape          \'  \u{1f926}  \yff
                 u-prefix           u'hi'
                 b-prefix           b'hi'
                 no-prefix          'hi'
  [J8 Lines]     unquoted-line
  [JSON8]        json8-num          json8-str
               X json8-list       X json8-dict
                 json8-comment
  [TSV8]         column-attrs       column-types
)zZXx");

GLOBAL_STR(gStr3, R"zZXx(Usage: help TOPIC?

Examples:

    help               # this help
    help echo          # help on the 'echo' builtin
    help command-sub   # help on command sub $(date)

    help oils-usage    # identical to oils-for-unix --help
    help osh-usage     #              osh --help
    help ysh-usage     #              ysh --help
)zZXx");

GLOBAL_STR(gStr4, R"zZXx(bin/oils-for-unix is an executable that contains OSH, YSH, and more.

Usage: oils-for-unix MAIN_NAME ARG*
       MAIN_NAME ARG*

It behaves like busybox.  The command name can be passed as the first argument:

    oils-for-unix ysh -c 'echo hi'

More commonly, it's invoked through a symlink like 'ysh', which causes it to
behave like that command:

    ysh -c 'echo hi'
)zZXx");

GLOBAL_STR(gStr5, R"zZXx(
  Builtin Commands <a class="group-link" href="chap-builtin-cmd.html">builtin-cmd</a>


  [I/O]           read        echo      printf
                  readarray   mapfile
  [Run Code]      source .    eval      trap
  [Set Options]   set         shopt
  [Working Dir]   cd          pwd       pushd     popd         dirs
  [Completion]    complete    compgen   compopt   compadjust   compexport
  [Shell Process] exec      X logout 
                  umask       ulimit    times
  [Child Process] jobs        wait
                  fg        X bg      X kill        X disown 
  [External]      test [      getopts
  [Introspection] help        hash      cmd/type    X caller
  [Word Lookup]   command     builtin
  [Interactive]   alias       unalias   history     X fc     X bind
X [Unsupported]   enable
)zZXx");

GLOBAL_STR(gStr6, R"zZXx(The reference is divided in to "chapters", each of which has its own table of
contents.  Type:

    help osh-$CHAPTER

Where $CHAPTER is one of:

    front-end
    command-lang
    osh-assign
    word-lang
    mini-lang
    builtin-cmd
    option
    special-var
    plugin

Example:

    help osh-word-lang
)zZXx");

GLOBAL_STR(gStr7, R"zZXx(
  Command Language <a class="group-link" href="chap-cmd-lang.html">cmd-lang</a>


  [Commands]      simple-command            semicolon ;
  [Conditional]   case        if            dbracket [[
                  true        false         colon :
                  bang !      and &&        or ||
  [Iteration]     while       until         for            for-expr-sh ((
  [Control Flow]  break       continue      return         exit
  [Grouping]      sh-func     sh-block {    subshell (
  [Concurrency]   pipe |    X pipe-amp |&   ampersand &
  [Redirects]     redir-file  >  >>  >|  <  <>   not impl: &>
                  redir-desc  >&  <&
                  here-doc    <<  <<-  <<<
  [Other Command] dparen ((   time        X coproc       X select
)zZXx");

GLOBAL_STR(gStr8, R"zZXx(
  Front End <a class="group-link" href="chap-front-end.html">front-end</a>


  [Usage]         oils-usage   osh-usage             config
                  startup      line-editing          exit-codes
  [Lexing]        comment #    line-continuation \   ascii-whitespace [ \t\r\n]
)zZXx");

GLOBAL_STR(gStr9, R"zZXx(
  Other Mini Languages <a class="group-link" href="chap-mini-lang.html">mini-lang</a>


  [Arithmetic]    arith-context Where legacy arithmetic is allowed
                  sh-numbers    0xFF  0755  etc.
                  sh-arith      1 + 2*3   a *= 2
                  sh-logical    !a && b
                  sh-bitwise    ~a ^ b
  [Boolean]       bool-expr     [[ ! $x && $y || $z ]]
                                test ! $x -a $y -o $z
                  bool-infix    [[ $a -nt $b ]]  [[ $x == $y ]]
                  bool-path     [[ -d /etc ]]
                  bool-str      [[ -z '' ]]
                  bool-other    [[ -o errexit ]]
  [Patterns]      glob-pat      *.py
                  extglob       ,(*.py|*.sh)
                  regex         [[ foo =~ [a-z]+ ]]
  [Other Sublang] braces        {alice,bob}@example.com
                  histsub       !$  !!  !n
                  char-escapes  \t  \c  \x00  \u03bc
)zZXx");

GLOBAL_STR(gStr10, R"zZXx(
  Global Shell Options <a class="group-link" href="chap-option.html">option</a>


  [Errors]         nounset -u      errexit -e   inherit_errexit   pipefail
  [Globbing]       noglob -f       nullglob     failglob        X dotglob
                   dashglob (true)
  [Debugging]      xtrace        X verbose    X extdebug
  [Interactive]    emacs           vi
  [Other POSIX]  X noclobber
  [Compat]         eval_unsafe_arith
)zZXx");

GLOBAL_STR(gStr11, R"zZXx(
  Assignments and Expressions <a class="group-link" href="chap-osh-assign.html">osh-assign</a>


  [Literals]      sh-array      array=(a b c)   array[1]=B   "${a[@]}"
                  sh-assoc      assoc=(['a']=1 ['b']=2)   assoc['x']=b
  [Operators]     sh-assign     str='xyz'
                  sh-append     str+='abc'
  [Builtins]      local     readonly    export   unset   shift
                  declare   typeset   X let
)zZXx");

GLOBAL_STR(gStr12, R"zZXx(
  Plugins and Hooks <a class="group-link" href="chap-plugin.html">plugin</a>


  [Signals]       SIGTERM     SIGINT     SIGQUIT
                  SIGTTIN     SIGTTOU    SIGWINCH
  [Traps]         DEBUG       ERR        EXIT    X RETURN
  [Words]         PS1       X PS2      X PS3       PS4
  [Completion]    complete
  [Other Plugin]  PROMPT_COMMAND       X command_not_found    
)zZXx");

GLOBAL_STR(gStr13, R"zZXx(
  Special Variables <a class="group-link" href="chap-special-var.html">special-var</a>


  [POSIX Special] $@  $*  $#     $?  $-     $$  $!   $0  $9
  [Shell Vars]    IFS             X LANG       X GLOBIGNORE
  [Shell Options] SHELLOPTS       X BASHOPTS
  [Other Env]     HOME              PATH
  [Other Special] BASH_REMATCH     @PIPESTATUS
  [Platform]      HOSTNAME          OSTYPE
  [Call Stack]    @BASH_SOURCE     @FUNCNAME    @BASH_LINENO   
                X @BASH_ARGV     X @BASH_ARGC
  [Tracing]       LINENO
  [Process State] UID               EUID         PPID       X BASHPID
X [Process Stack] BASH_SUBSHELL     SHLVL
X [Shell State]   BASH_CMDS        @DIRSTACK
  [Completion]   @COMP_WORDS        COMP_CWORD    COMP_LINE   COMP_POINT
                  COMP_WORDBREAKS  @COMPREPLY   X COMP_KEY
                X COMP_TYPE         COMP_ARGV
  [History]       HISTFILE
  [cd]            PWD               OLDPWD      X CDPATH
  [getopts]       OPTIND            OPTARG      X OPTERR
  [read]          REPLY
  [Functions]   X RANDOM            SECONDS
)zZXx");

GLOBAL_STR(gStr14, R"zZXx(
  OSH Types <a class="group-link" href="chap-type-method.html">type-method</a>


  [OSH]           BashArray   BashAssoc
)zZXx");

GLOBAL_STR(gStr15, R"zZXx(bin/osh is compatible with POSIX shell, bash, and other shells.

Usage: osh FLAG* SCRIPT ARG*
       osh FLAG* -c COMMAND ARG*
       osh FLAG*

The command line accepted by `bin/osh` is compatible with /bin/sh and bash.

    osh -c 'echo hi'
    osh myscript.sh
    echo 'echo hi' | osh

It also has a few enhancements:

    osh -n -c 'hello'                    # pretty-print the AST
    osh --ast-format text -n -c 'hello'  # print it full

osh accepts POSIX sh flags, with these additions:

    -n             parse the program but don't execute it.  Print the AST.
    --ast-format   what format the AST should be in
)zZXx");

GLOBAL_STR(gStr16, R"zZXx(
  Word Language <a class="group-link" href="chap-word-lang.html">word-lang</a>


  [Quotes]        osh-string    'abc'  $'line\n'  "$var"
  [Substitutions] command-sub   $(command)   `command`
                  var-sub       ${var}   $0   $9   
                  arith-sub     $((1 + 2))
                  tilde-sub     ~/src
                  proc-sub      diff <(sort L.txt) <(sort R.txt)
  [Var Ops]       op-test       ${x:-default}  
                  op-strip      ${x%%suffix}  etc.
                  op-replace    ${x//y/z}
                  op-index      ${a[i+1}
                  op-slice      ${a[@]:0:1}
                  op-format     ${x@P}
)zZXx");

GLOBAL_STR(gStr17, R"zZXx(
  Builtin Commands <a class="group-link" href="chap-builtin-cmd">builtin-cmd</a>


  [Memory]        cmd/append             Add elements to end of array
                  pp                     asdl   cell   X gc-stats   line   proc
  [Handle Errors] try                    Run with errexit, set _status _error
                  boolstatus             Enforce 0 or 1 exit status
                  error                  error 'failed' (status=2)
  [Shell State]   ysh-cd       ysh-shopt compatible, and takes a block
                  shvar                  Temporary modify global settings
                  ctx                    Share and update a temporary "context"
                  push-registers         Save registers like $?, PIPESTATUS
  [Modules]       runproc                Run a proc; use as main entry point
                  module                 guard against duplicate 'source'
                  is-main                false when sourcing a file
                  use                    change first word lookup
  [I/O]           ysh-read               flags --all, -0
                  ysh-echo               no -e -n with simple_echo
                  write                  Like echo, with --, --sep, --end
                  fork         forkwait  Replace & and (), and takes a block
                  fopen                  Open multiple streams, takes a block
                X dbg                    Only thing that can be used in funcs
                X log        X die       Common functions (polyfill)
  [Hay Config]    hay          haynode   For DSLs and config files
  [Completion]    compadjust   compexport
  [Data Formats]  json                   read write
                  json8                  read write
X [TSV8]          rows                   pick rows; dplyr filter()
                  cols                   pick columns ('select' already taken)
                  group-by               add a column with a group ID [ext]
                  sort-by                sort by columns; dplyr arrange() [ext]
                  summary                count, sum, histogram, etc. [ext]
  [Args Parser]   parser                 Parse command line arguments
                  flag
                  arg
                  rest
                  parseArgs()
X [Testing]       describe               Test harness
                  assert                 takes an expression
)zZXx");

GLOBAL_STR(gStr18, R"zZXx(
  Builtin Functions <a class="group-link" href="chap-builtin-func.html">builtin-func</a>


  [Values]        len()        func/type()       X repeat()
  [Conversions]   bool()       int()      float()   str()   list()   dict()
                X chr()      X ord()    X runes()
  [Str]         X strcmp()   X split()    shSplit()
  [List]          join()       any()      all()
  [Collections] X copy()     X deepCopy()
  [Word]          glob()       maybe()
  [Math]          abs()        max()      min()   X round()   sum()
  [Serialize]     toJson()     fromJson()
                  toJson8()    fromJson8()
X [J8 Decode]     J8.Bool()    J8.Int()   ...
  [Pattern]       _group()     _start()   _end()
  [Introspection] shvarGet()   getVar()   evalExpr()
  [Hay Config]    parseHay()   evalHay()
X [Hashing]       sha1dc()     sha256()
)zZXx");

GLOBAL_STR(gStr19, R"zZXx(The reference is divided in to "chapters", each of which has its own table of
contents.  Type:

    help ysh-$CHAPTER

Where $CHAPTER is one of:

    front-end
    command-lang
    expr-lang
    word-lang
    builtin-cmd
    option
    special-var
    type-method
    builtin-func

Example:

    help ysh-expr-lang
)zZXx");

GLOBAL_STR(gStr20, R"zZXx(
  Command Language <a class="group-link" href="chap-cmd-lang.html">cmd-lang</a>


  [YSH Simple]    typed-arg     json write (x)
                  lazy-expr-arg assert [42 === x]
                  block-arg     cd /tmp { echo $PWD }; cd /tmp (; ; blockexpr)
  [YSH Cond]      ysh-case      case (x) { *.py { echo 'python' } }
                  ysh-if        if (x > 0) { echo }
  [YSH Iter]      ysh-while     while (x > 0) { echo }
                  ysh-for       for i, item in (mylist) { echo }
)zZXx");

GLOBAL_STR(gStr21, R"zZXx(
  Expression Language and Assignments <a class="group-link" href="chap-expr-lang.html">expr-lang</a>


  [Assignment]    assign        =
                  aug-assign    +=   -=   *=   /=   **=   //=   %=
                                &=   |=   ^=   <<=   >>=
  [Literals]      atom-literal  true   false   null
                  int-literal   42  65_536  0xFF  0o755  0b10
                  float-lit     3.14  1.5e-10
                X num-suffix    42 K Ki M Mi G Gi T Ti / ms us
                  ysh-string    "x is $x"  $"x is $x"   r'[a-z]\n'
                                u'line\n'  b'byte \yff'
                  triple-quoted """  $"""  r'''  u'''  b'''
                  str-template  ^"$a and $b" for Str::replace()
                  list-literal  ['one', 'two', 3]  :| unquoted words |
                  dict-literal  {name: 'bob'}  {a, b}
                  range         1 .. n+1
                  block-expr    ^(echo $PWD)
                  expr-literal  ^[1 + 2*3]
                X expr-sub      $[myobj]
                X expr-splice   @[myobj]
  [Operators]     op-precedence Like Python
                  concat        s1 ++ s2,  L1 ++ L2
                  ysh-equals    ===   !==   ~==   is, is not
                  ysh-in        in, not in
                  ysh-compare   <  <=  >  >=  (numbers only)
                  ysh-logical   not  and  or
                  ysh-arith     +  -  *  /  //  %   ** 
                  ysh-bitwise   ~  &  |  ^  <<  >>
                  ysh-ternary   '+' if x >= 0 else '-'
                  ysh-index     s[0]  mylist[3]  mydict['key']
                  ysh-attr      mydict.key
                  ysh-slice     a[1:-1]  s[1:-1]
                  func-call     f(x, y; ...named)
                  thin-arrow    mylist->pop()
                  fat-arrow     mystr => startsWith('prefix')
                  match-ops     ~   !~   ~~   !~~
  [Eggex]         re-literal    / d+ ; re-flags ; ERE /
                  re-primitive  %zero    'sq'
                  class-literal [c a-z 'abc' @str_var \\ \xFF \u0100]
                  named-class    dot   digit   space   word   d  s  w
                  re-repeat     d?   d*   d+   d{3}   d{2,4}
                  re-compound    seq1 seq2   alt1|alt2   (expr1 expr2)
                  re-capture    <capture d+ as name: int>
                  re-splice     Subpattern   @subpattern
                  re-flags      reg_icase   reg_newline
                X re-multiline  ///
)zZXx");

GLOBAL_STR(gStr22, R"zZXx(
  Front End <a class="group-link" href="chap-front-end.html">front-end</a>


  [Usage]         oils-usage                   ysh-usage
  [Lexing]        ascii-whitespace [ \t\r\n]
                  doc-comment ###              multiline-command ...
  [Tools]         cat-em
)zZXx");

GLOBAL_STR(gStr23, R"zZXx(
  Other Mini Languages <a class="group-link" href="chap-mini-lang.html">mini-lang</a>


  [Patterns]      glob-pat      *.py
  [Other Sublang] braces        {alice,bob}@example.com
)zZXx");

GLOBAL_STR(gStr24, R"zZXx(
  Global Shell Options <a class="group-link" href="chap-option.html">option</a>


  [Groups]       strict:all      ysh:upgrade     ysh:all
  [YSH Details]  opts-redefine   opts-internal
)zZXx");

GLOBAL_STR(gStr25, R"zZXx(
  Plugins and Hooks <a class="group-link" href="chap-plugin.html">plugin</a>


  [YSH]   renderPrompt()
)zZXx");

GLOBAL_STR(gStr26, R"zZXx(
  Special Variables <a class="group-link" href="chap-special-var.html">special-var</a>


  [YSH Vars]      ARGV              X ENV                 X _ESCAPE
                  _this_dir
  [YSH Status]    _status             _error
                  _pipeline_status    _process_sub_status
  [YSH Tracing]   SHX_indent          SHX_punct             SHX_pid_str
  [YSH read]      _reply
  [History]       YSH_HISTFILE
  [Oils VM]       OILS_VERSION
                  OILS_GC_THRESHOLD   OILS_GC_ON_EXIT
                  OILS_GC_STATS       OILS_GC_STATS_FD
)zZXx");

GLOBAL_STR(gStr27, R"zZXx(
  Types and Methods <a class="group-link" href="chap-type-method.html">type-method</a>


  [Atom Types]     Null           Bool
  [Number Types]   Int            Float
  [Str]          X find()         replace()
                   trim()         trimStart()   trimEnd()
                   startsWith()   endsWith()
                   upper()        lower()
                   search()       leftMatch()
  [List]           List/append()  pop()         extend()    indexOf()
                 X insert()     X remove()      reverse()
  [Dict]           keys()         values()    X get()     X erase()
                 X inc()        X accum()
  [Range] 
  [Eggex] 
  [Match]          group()        start()       end()
                 X groups()     X groupDict()
  [Place]          setValue()
  [Code Types]     Expr           Command
                   BuiltinFunc    BoundFunc
X [Func]           name()         location()    toJson()
X [Proc]           name()         location()    toJson()
X [Module]         name()         filename()
  [IO]           X eval()       X captureStdout()
                   promptVal()
                 X time()       X strftime()
                 X glob()
X [Guts]           heapId()
)zZXx");

GLOBAL_STR(gStr28, R"zZXx(bin/ysh is the shell with data tYpes, influenced by pYthon, JavaScript, ...

Usage: ysh FLAG* SCRIPT ARG*
       ysh FLAG* -c COMMAND ARG*
       ysh FLAG*

`bin/ysh` is the same as `bin/osh` with a the `ysh:all` option group set.  So
`bin/ysh` also accepts shell flags.

    ysh -c 'echo hi'
    ysh myscript.ysh
    echo 'echo hi' | ysh
)zZXx");

GLOBAL_STR(gStr29, R"zZXx(
  Word Language <a class="group-link" href="chap-word-lang.html">word-lang</a>


  [Quotes]        ysh-string    "x is $x"  $"x is $x"  r'[a-z]\n'
                                u'line\n'  b'byte \yff'
                  triple-quoted """  $"""  r'''  u'''  b'''
                X tagged-str    "<span id=$x>"html
  [Substitutions] expr-sub      echo $[42 + a[i]]
                  expr-splice   echo @[split(x)]
                  var-splice    @myarray @ARGV
                  command-sub   @(split command)
  [Formatting]  X ysh-printf    ${x %.3f}
                X ysh-format    ${x|html}
)zZXx");

GLOBAL_STR(gStr30, R"zZXx(
  YSH Command Language Keywords <a class="group-link" href="chap-ysh-cmd.html">ysh-cmd</a>


  [Assignment]    const   var   Declare variables
                  setvar        setvar a[i] = 42
                  setglobal     setglobal d.key = 'foo'
  [Expression]    equal =       = 1 + 2*3
                  call          call mylist->append(42)
  [Definitions]   proc          proc p (s, ...rest) {
                                typed proc p (; typed, ...rest; n=0; b) {
                  func          func f(x; opt1, opt2) { return (x + 1) }
                  ysh-return    return (myexpr)
)zZXx");

GLOBAL_STR(gStr31, R"zZXx(# args.ysh
#
# Usage:
#   source --builtin args.sh
#
# parser (&spec) {
#   flag -v --verbose (help="Verbosely")  # default is Bool, false
#
#   flag -P --max-procs ('int', default=-1, doc='''
#     Run at most P processes at a time
#     ''')
#
#   flag -i --invert ('bool', default=true, doc='''
#     Long multiline
#     Description
#     ''')
#
#   arg src (help='Source')
#   arg dest (help='Dest')
#   arg times (help='Foo')
#
#   rest files
# }
#
# var args = parseArgs(spec, ARGV)
#
# echo "Verbose $[args.verbose]"

# TODO: See list
# - It would be nice to keep `flag` and `arg` private, injecting them into the
#   proc namespace only within `Args`
# - We need "type object" to replace the strings 'int', 'bool', etc.
# - flag builtin:
#   - handle only long flag or only short flag
#   - flag aliases

proc parser (; place ; ; block_def) {
  ## Create an args spec which can be passed to parseArgs.
  ##
  ## Example:
  ##
  ##   # NOTE: &spec will create a variable named spec
  ##   parser (&spec) {
  ##     flag -v --verbose ('bool')
  ##   }
  ##
  ##   var args = parseArgs(spec, ARGV)

  var p = {flags: [], args: []}
  ctx push (p; ; block_def)

  # Validate that p.rest = [name] or null and reduce p.rest into name or null.
  if ('rest' in p) {
    if (len(p.rest) > 1) {
      error '`rest` was called more than once' (status=3)
    } else {
      setvar p.rest = p.rest[0]
    }
  } else {
    setvar p.rest = null
  }

  var names = {}
  for items in ([p.flags, p.args]) {
    for x in (items) {
      if (x.name in names) {
        error "Duplicate flag/arg name $[x.name] in spec" (status=3)
      }

      setvar names[x.name] = null
    }
  }

  # TODO: what about `flag --name` and then `arg name`?

  call place->setValue(p)
}

proc flag (short, long ; type='bool' ; default=null, help=null) {
  ## Declare a flag within an `arg-parse`.
  ##
  ## Examples:
  ##
  ##   arg-parse (&spec) {
  ##     flag -v --verbose
  ##     flag -n --count ('int', default=1)
  ##     flag -f --file ('str', help="File to process")
  ##   }

  # bool has a default of false, not null
  if (type === 'bool' and default === null) {
    setvar default = false
  }

  # TODO: validate `type`

  # TODO: Should use "trimPrefix"
  var name = long[2:]

  ctx emit flags ({short, long, name, type, default, help})
}

proc arg (name ; ; help=null) {
  ## Declare a positional argument within an `arg-parse`.
  ##
  ## Examples:
  ##
  ##   arg-parse (&spec) {
  ##     arg name
  ##     arg config (help="config file path")
  ##   }

  ctx emit args ({name, help})
}

proc rest (name) {
  ## Take the remaining positional arguments within an `arg-parse`.
  ##
  ## Examples:
  ##
  ##   arg-parse (&grepSpec) {
  ##     arg query
  ##     rest files
  ##   }

  # We emit instead of set to detect multiple invocations of "rest"
  ctx emit rest (name)
}

func parseArgs(spec, argv) {
  ## Given a spec created by `parser`. Parse an array of strings `argv` per
  ## that spec.
  ##
  ## See `parser` for examples of use.

  var i = 0
  var positionalPos = 0
  var argc = len(argv)
  var args = {}
  var rest = []

  var value
  var found
  while (i < argc) {
    var arg = argv[i]
    if (arg->startsWith('-')) {
      setvar found = false

      for flag in (spec.flags) {
        if ( (flag.short and flag.short === arg) or
             (flag.long and flag.long === arg) ) {
          case (flag.type) {
            ('bool') | (null) { setvar value = true }
            int {
              setvar i += 1
              if (i >= len(argv)) {
                error "Expected integer after '$arg'" (status=2)
              }

              try { setvar value = int(argv[i]) }
              if (_status !== 0) {
                error "Expected integer after '$arg', got '$[argv[i]]'" (status=2)
              }
            }
          }

          setvar args[flag.name] = value
          setvar found = true
          break
        }
      }

      if (not found) {
        error "Unknown flag '$arg'" (status=2)
      }
    } elif (positionalPos >= len(spec.args)) {
      if (not spec.rest) {
        error "Too many arguments, unexpected '$arg'" (status=2)
      }

      call rest->append(arg)
    } else {
      var pos = spec.args[positionalPos]
      setvar positionalPos += 1
      setvar value = arg
      setvar args[pos.name] = value
    }

    setvar i += 1
  }

  if (spec.rest) {
    setvar args[spec.rest] = rest
  }

  # Set defaults for flags
  for flag in (spec.flags) {
    if (flag.name not in args) {
      setvar args[flag.name] = flag.default
    }
  }

  # Raise error on missing args
  for arg in (spec.args) {
    if (arg.name not in args) {
      error "Usage Error: Missing required argument $[arg.name]" (status=2)
    }
  }

  return (args)
}
)zZXx");

GLOBAL_STR(gStr32, R"zZXx(#!/usr/bin/env ysh

module stdlib/synch || return 0

############################
### FIFO File Desriptors ###
############################

proc fifo-fd-new(; out_fd) {
  # WARN: this section should be critical but for now it's not
  # A solution may be retry on fail.
  #====================
  var fifo = $(mktemp -u)
  mkfifo $fifo
  #====================
  exec {fd}<>$fifo
  call out_fd->setValue(fd)
}

proc fifo-fd-destroy(; fd) {
  var fifoFile = $(readlink /proc/$$/fd/$fd)
  exec {fd}>&-
  exec {fd}<&-
  rm $fifoFile
}

#################
### Semaphore ###
#################

proc sema-new(; value, out_sema) {
  fifo-fd-new (&sema)
  sema-up (sema, value)
  call out_sema->setValue(sema)
}

proc sema-down(; sema) {
  read <&$sema
}

proc sema-up(; sema, delta = 1) {
  fork {
    for _ in (0 .. delta) {
      echo >&$sema
    }
  }
}

proc sema-destroy(; sema) {
  fifo-fd-destroy (sema)
}
)zZXx");

GLOBAL_STR(gStr33, R"zZXx(func identity(x) {
  ## The identity function. Returns its argument.

  return (x)
}
)zZXx");

GLOBAL_STR(gStr34, R"zZXx(func any(list) {
  ## Returns true if any value in the list is truthy.
  ##
  ## If the list is empty, return false.

  for item in (list) {
    if (item) {
      return (true)
    }
  }
  return (false)
}

func all(list) {
  ## Returns true if all values in the list are truthy.
  ##
  ## If the list is empty, return true.

  for item in (list) {
    if (not item) {
      return (false)
    }
  }
  return (true)
}

func sum(list; start=0) {
  ## Computes the sum of all elements in the list.
  ##
  ## Returns 0 for an empty list.

  var sum = start
  for item in (list) {
    setvar sum += item
  }
  return (sum)
}
)zZXx");

GLOBAL_STR(gStr35, R"zZXx(func __math_select(list, cmp) {
  ## Internal helper for `max` and `min`.
  ##
  ## NOTE: If `list` is empty, then an error is thrown.

  if (len(list) === 0) {
    error "Unexpected empty list" (status=3)
  }

  if (len(list) === 1) {
    return (list[0])
  }

  var match = list[0]
  for i in (1 .. len(list)) {
    setvar match = cmp(list[i], match)
  }
  return (match)
}

func max(...args) {
  ## Compute the maximum of 2 or more values.
  ##
  ## `max` takes two different signatures:
  ##  - `max(a, b)` to return the maximum of `a`, `b`
  ##  - `max(list)` to return the greatest item in the `list`
  ##
  ## So, for example:
  ##
  ##   max(1, 2)  # => 2
  ##   max([1, 2, 3])  # => 3

  case (len(args)) {
    (1) { return (__math_select(args[0], max)) }
    (2) {
      if (args[0] > args[1]) {
        return (args[0])
      } else {
        return (args[1])
      }
    }
    (else) { error "max expects 1 or 2 args" (status=3) }
  }
}

func min(...args) {
  ## Compute the minimum of 2 or more values.
  ##
  ## `min` takes two different signatures:
  ##  - `min(a, b)` to return the minimum of `a`, `b`
  ##  - `min(list)` to return the least item in the `list`
  ##
  ## So, for example:
  ##
  ##   min(2, 3)  # => 2
  ##   max([1, 2, 3])  # => 1

  case (len(args)) {
    (1) { return (__math_select(args[0], min)) }
    (2) {
      if (args[0] < args[1]) {
        return (args[0])
      } else {
        return (args[1])
      }
    }
    (else) { error "min expects 1 or 2 args" (status=3) }
  }
}

func abs(x) {
  ## Compute the absolute (positive) value of a number (float or int).

  if (x < 0) {
    return (-x)
  } else {
    return (x)
  }
}
)zZXx");

GLOBAL_STR(gStr36, R"zZXx(# Can we define methods in pure YSH?
#
# (mylist->find(42) !== -1)
#
#   instead of 
#
# ('42' in mylist)
#
# Because 'in' is for Dict

func find (haystack List, needle) {
  for i, x in (haystack) {
    if (x === needle) {
      return (i)
    }
  }
  return (-1)
}
)zZXx");

GLOBAL_STR(gStr37, R"zZXx(# These were helpful while implementing args.ysh
# Maybe we will want to export them in a prelude so that others can use them too?
#
# Prior art: Rust has `todo!()` which is quite nice. Other languages allow
# users to `raise NotImplmentedError()`.

# Andy comments:
# - 'pass' can be : or true in shell.  It's a little obscure / confusing, but
#   there is an argument for minimalism.  Although I prefer words like 'true',
#   and that already means something.
#   - UPDATE: we once took 'pass' as a keyword, but users complained because
#     there is a command 'pass'.  So we probably can't have this by default.
#     Need to discuss source --builtin.

# - todo could be more static?  Rust presumably does it at compile time

proc todo () {
  ## Raises a not implemented error when run.
  error ("TODO: not implemented")  # TODO: is error code 1 ok?
}

proc pass () {
  ## Use when you want to temporarily leave a block empty.
  _ null
}
)zZXx");

GLOBAL_STR(gStr38, R"zZXx(# testing.ysh
#
# Usage:
#   source --builtin testing.sh
#
# func f(x) { return (x + 1) }
#
# describe foo {
#   assert (43 === f(42))
# }
#
# if is-main {
#   run-tests @ARGV   # --filter
# }

module stdlib/testing || return 0

source --builtin args.ysh

# Opt in to lazy evaluation

proc assert ( ; cond LAZY ) {
  echo hi

  # TODO: evalExpr() builtin
  var val = evalExpr(cond) 
  if (not val) {
    # TODO: if it's an expr.Binary
    # Then
    #
    # Then print $left != $right
    #
    # I think you need to introspect on the source code
    #
    # Or print '5 != 3'
    #
    # Or you can evaluate left and right separately, and then compare them

    echo
  }
}

# What happens when there are duplicate test IDs?
#
# Also I think filter by "$test_id/$case_id"

proc __it (case_id ; ; ; block) {
  # This uses a clean directory
  echo TODO
}

# is this accessible to users?
# It can contain a global list of things to run

# Naming convention: a proc named 'describe' mutates a global named _describe?
# Or maybe _describe_list ?

var _describe_list = []

proc describe (test_id ; ; ; block) {
  echo describe
  = desc

  # TODO:
  # - need append
  # - need ::
  # _ _describe->append(cmd)
  #
  # Need to clean this up
  # append (_describe, cmd)  # does NOT work!

  _ _describe_list->append(block)
}

# Problem: this creates a global variable?
Args :spec {
  flag --filter 'Regex of test descriptions'
}

proc run-tests {

  # TODO: fix this crap
  var opt = null
  var i = null
  setvar opt, i = parseArgs(spec, ARGV)

  # TODO:
  # - parse --filter foo, which you can use eggex for!

  for cmd in (_describe) {
    # TODO: print filename and 'describe' name?
    try {
      eval (cmd)
    }
    if (_status !== 0) {
      echo 'failed'
    }
  }
}
)zZXx");



TextFile array[] = {
    {.rel_path = "_devbuild/help/data-errors", .contents = gStr0},
    {.rel_path = "_devbuild/help/data-front-end", .contents = gStr1},
    {.rel_path = "_devbuild/help/data-j8-notation", .contents = gStr2},
    {.rel_path = "_devbuild/help/help", .contents = gStr3},
    {.rel_path = "_devbuild/help/oils-usage", .contents = gStr4},
    {.rel_path = "_devbuild/help/osh-builtin-cmd", .contents = gStr5},
    {.rel_path = "_devbuild/help/osh-chapters", .contents = gStr6},
    {.rel_path = "_devbuild/help/osh-cmd-lang", .contents = gStr7},
    {.rel_path = "_devbuild/help/osh-front-end", .contents = gStr8},
    {.rel_path = "_devbuild/help/osh-mini-lang", .contents = gStr9},
    {.rel_path = "_devbuild/help/osh-option", .contents = gStr10},
    {.rel_path = "_devbuild/help/osh-osh-assign", .contents = gStr11},
    {.rel_path = "_devbuild/help/osh-plugin", .contents = gStr12},
    {.rel_path = "_devbuild/help/osh-special-var", .contents = gStr13},
    {.rel_path = "_devbuild/help/osh-type-method", .contents = gStr14},
    {.rel_path = "_devbuild/help/osh-usage", .contents = gStr15},
    {.rel_path = "_devbuild/help/osh-word-lang", .contents = gStr16},
    {.rel_path = "_devbuild/help/ysh-builtin-cmd", .contents = gStr17},
    {.rel_path = "_devbuild/help/ysh-builtin-func", .contents = gStr18},
    {.rel_path = "_devbuild/help/ysh-chapters", .contents = gStr19},
    {.rel_path = "_devbuild/help/ysh-cmd-lang", .contents = gStr20},
    {.rel_path = "_devbuild/help/ysh-expr-lang", .contents = gStr21},
    {.rel_path = "_devbuild/help/ysh-front-end", .contents = gStr22},
    {.rel_path = "_devbuild/help/ysh-mini-lang", .contents = gStr23},
    {.rel_path = "_devbuild/help/ysh-option", .contents = gStr24},
    {.rel_path = "_devbuild/help/ysh-plugin", .contents = gStr25},
    {.rel_path = "_devbuild/help/ysh-special-var", .contents = gStr26},
    {.rel_path = "_devbuild/help/ysh-type-method", .contents = gStr27},
    {.rel_path = "_devbuild/help/ysh-usage", .contents = gStr28},
    {.rel_path = "_devbuild/help/ysh-word-lang", .contents = gStr29},
    {.rel_path = "_devbuild/help/ysh-ysh-cmd", .contents = gStr30},
    {.rel_path = "stdlib/args.ysh", .contents = gStr31},
    {.rel_path = "stdlib/draft-synch.ysh", .contents = gStr32},
    {.rel_path = "stdlib/funcs.ysh", .contents = gStr33},
    {.rel_path = "stdlib/list.ysh", .contents = gStr34},
    {.rel_path = "stdlib/math.ysh", .contents = gStr35},
    {.rel_path = "stdlib/methods.ysh", .contents = gStr36},
    {.rel_path = "stdlib/prelude.ysh", .contents = gStr37},
    {.rel_path = "stdlib/testing.ysh", .contents = gStr38},

    {.rel_path = nullptr, .contents = nullptr},
};

}  // namespace embedded_file

TextFile* gEmbeddedFiles = embedded_file::array;  // turn array into pointer
