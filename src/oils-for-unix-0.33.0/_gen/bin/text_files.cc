
#include "cpp/embedded_file.h"

namespace embedded_file {
GLOBAL_STR(gStr0, R"zZXx(Errors

  [UTF8]      err-utf8-encode       err-utf8-decode
  [J8 String] err-j8-str-encode     err-j8-str-decode
  [J8 Lines]  err-j8-lines-encode   err-j8-lines-decode
  [JSON]      err-json-encode       err-json-decode
  [JSON8]     err-json8-encode      err-json8-decode
)zZXx");

GLOBAL_STR(gStr1, R"zZXx(Front End

  [Lexing]        ascii-whitespace [ \t\r\n]
                  ascii-control-chars
)zZXx");

GLOBAL_STR(gStr2, R"zZXx(J8 Notation

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

Usage:
    oils-for-unix MAIN_NAME ARG*
    MAIN_NAME ARG*

It behaves like busybox.  The command name can be passed as the first argument:

    oils-for-unix ysh -c 'echo hi'

More commonly, it's invoked through a symlink like 'ysh', which causes it to
behave like that command:

    ysh -c 'echo hi'
)zZXx");

GLOBAL_STR(gStr5, R"zZXx(Builtin Commands

  [I/O]           read        echo       printf
                  readarray   mapfile
  [Run Code]      source .    cmd/eval   trap
  [Set Options]   set         shopt
  [Working Dir]   cd          pwd        pushd     popd         dirs
  [Completion]    complete    compgen    compopt   compadjust   compexport
  [Shell Process] exec      X logout 
                  umask       ulimit     times
  [Child Process] jobs        wait
                  fg        X bg       X kill        X disown 
  [External]      test [      getopts
  [Conditional]   cmd/true    cmd/false               colon :
  [Introspection] help        hash       cmd/type    X caller
  [Word Lookup]   command     builtin
  [Interactive]   alias       unalias    history     X fc     X bind
X [Unsupported]   enable
)zZXx");

GLOBAL_STR(gStr6, R"zZXx(The reference is divided in to "chapters", each of which has its own table of
contents.  Type:

    help osh-$CHAPTER

Where $CHAPTER is one of:

    type-method
    builtin-cmd
    stdlib
    front-end
    cmd-lang
    osh-assign
    word-lang
    mini-lang
    option
    special-var
    plugin

Example:

    help osh-word-lang
)zZXx");

GLOBAL_STR(gStr7, R"zZXx(Command Language

  [Commands]      simple-command               command-lookup-order
                  prefix-binding               semicolon ;    
  [Conditional]   case           if            dbracket [[
                  bang !         and &&        or ||
  [Iteration]     while          until         for            for-expr-sh ((
  [Control Flow]  break          continue      return         exit
  [Grouping]      sh-func        sh-block {    subshell (
  [Concurrency]   pipe |       X pipe-amp |&   ampersand &
  [Redirects]     redir-file     >  >>  >|  <  <>   not impl: &>
                  redir-desc     >&  <&
                  here-doc       <<  <<-
                  here-str       <<<
  [Other Command] dparen ((      time        X coproc       X select
)zZXx");

GLOBAL_STR(gStr8, R"zZXx(Front End

  [Usage]         oils-usage   osh-usage             shell-flags
                  config       startup               line-editing          
                  exit-codes
  [Lexing]        comment #    line-continuation \   ascii-whitespace [ \t\r\n]
)zZXx");

GLOBAL_STR(gStr9, R"zZXx(Other Mini Languages

  [Arithmetic]    arith-context Where legacy arithmetic is allowed
                  sh-numbers    0xFF  0755  etc.
                  sh-arith      1 + 2*3   a *= 2
                  sh-logical    !a && b
                  sh-bitwise    ~a ^ b
  [Boolean]       bool-expr     [[ ! $x && $y || $z ]]
                                test ! $x -a $y -o $z
                  bool-infix    $a -nt $b    $x == $y
                  bool-path     -d /etc
                  bool-str      -n foo   -z '' 
                  bool-other    -o errexit   -v name[index]
  [Patterns]      glob-pat      *.py
                  extglob       ,(*.py|*.sh)
                  regex         [[ foo =~ [a-z]+ ]]
  [Other Sublang] braces        {alice,bob}@example.com
                  histsub       !$  !!  !n
                  char-escapes  \t  \c  \x00  \u03bc
)zZXx");

GLOBAL_STR(gStr10, R"zZXx(Global Shell Options

  [Errors]         nounset -u      errexit -e   inherit_errexit   pipefail
  [Globbing]       noglob -f       nullglob     failglob        X dotglob
                   dashglob (true)
  [Other Option]   noclobber -C
  [Debugging]      errtrace -E     extdebug   X verbose           xtrace -x     
  [Interactive]    emacs           vi
  [Compat]         eval_unsafe_arith            ignore_flags_not_impl
                   ignore_shopt_not_impl
  [Optimize]       rewrite_extern
)zZXx");

GLOBAL_STR(gStr11, R"zZXx(Assignments and Expressions

  [Literals]      sh-init-list  a=(v1 [i]=v2 [k]+=v3)   a+=(v1 [i]=v2 [k]+=v3)
                  sh-array      array[123]=v   "${array[@]}"
                  sh-assoc      assoc['k']=v   "${assoc[@]}"   "${!assoc[@]}"  
  [Operators]     sh-assign     str='xyz'
                  sh-append     str+='abc'
  [Builtins]      local     readonly    export   unset   shift
                  declare   typeset   X let
)zZXx");

GLOBAL_STR(gStr12, R"zZXx(Plugins and Hooks

  [Signals]       SIGTERM     SIGINT     SIGQUIT
                  SIGTTIN     SIGTTOU    SIGWINCH
  [Traps]         DEBUG       ERR        EXIT    X RETURN
  [Words]         PS1       X PS2      X PS3       PS4
  [Completion]    complete
  [Other Plugin]  PROMPT_COMMAND       X command_not_found    
)zZXx");

GLOBAL_STR(gStr13, R"zZXx(Special Variables

  [Interactive]   OILS_COMP_UI
  [Oils VM]       OILS_VERSION      LIB_OSH
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

GLOBAL_STR(gStr14, R"zZXx(Standard Library

  [two]           log             die
  [no-quotes]     nq-assert       nq-run          
                  nq-capture      nq-capture-2
                  nq-redir        nq-redir-2
  [bash-strict]   
  [task-five]     
)zZXx");

GLOBAL_STR(gStr15, R"zZXx(OSH Types

  [OSH]           BashArray   BashAssoc
)zZXx");

GLOBAL_STR(gStr16, R"zZXx(bin/osh is compatible with POSIX shell, bash, and other shells.

Usage:
   osh FLAG* SCRIPT ARG*
   osh FLAG* -c COMMAND ARG*
   osh FLAG*

Examples:
    osh -c 'echo hi'
    osh myscript.sh
    echo 'echo hi' | osh
)zZXx");

GLOBAL_STR(gStr17, R"zZXx(Word Language

  [Joining]       osh-word-join 'single'\'$myvar"double $x"
  [Quotes]        osh-string    'abc'  $'line\n'  "$var"
  [Substitutions] command-sub   $(date)   `date`
                  var-sub       ${var}   $0   $9   
                  arith-sub     $((1 + 2))
                  tilde-sub     ~/src
                  proc-sub      diff <(sort L.txt) <(sort R.txt)
  [Var Ops]       op-bracket    ${a[i+1]}, ${a[*]}
                  op-indirect   ${!x}
                  op-test       ${x:-default}
                  op-strip      ${x%%suffix}  etc.
                  op-patsub     ${x//y/z}
                  op-slice      ${a[@]:0:1}
                  op-format     ${x@P} ${x@Q} etc.
)zZXx");

GLOBAL_STR(gStr18, R"zZXx(osh and ysh accept standard POSIX shell flags, like:

    bin/osh -o errexit -c 'false'
    bin/ysh -n myfile.ysh
    bin/ysh +o errexit -c 'false; echo ok'

They also accept these flags:

    --eval FILE
        Evaluate the given file, similar to the 'source' builtin.  Specify it
        multiple times to run multiple files.  If the errexit option is on
        (e.g. in YSH), then the shell stops when $? is non-zero after
        evaluating a file.

    --eval-pure FILE
        Like --eval, but disallow I/O (known as "pure mode").

    --location-str
        Use this string to display error messages.
        See 'help sourceCode' for an example.

    --location-start-line
        Use this line number offset to display error messages.

    --tool            Run a tool instead of the shell (cat-em|syntax-tree)
    -n                Parse the program but don't execute it.  Print the AST.
    --ast-format FMT  The format for the AST (text|text-abbrev)

Examples:

    ysh --eval one.ysh --eval two.ysh -c 'echo hi'  # Run 2 files first
    osh -n -c 'hello'                               # pretty-print the AST
    ysh --ast-format text -n -c 'hello'             # in unabridged format
)zZXx");

GLOBAL_STR(gStr19, R"zZXx(Builtin Commands

  [Memory]        cmd/append             Add elements to end of array
                  pp                     value   proc      test_
                                         asdl_   cell_   X gc-stats_
  [Handle Errors] error                  error 'failed' (status=2)
                  try                    Run with errexit, set _error
                  failed                 Test if _error.code !== 0
                  boolstatus             Enforce 0 or 1 exit status
                  assert                 assert [42 === f(x)]
  [Shell State]   ysh-cd       ysh-shopt compatible, and takes a block
                  shvar                  Temporary modify global settings
                  ctx                    Share and update a temporary "context"
                  push-registers         Save registers like $?, PIPESTATUS
  [Word Lookup]   invoke                 Run a command, and control name lookup
                  runproc                Run a proc; use as main entry point
                X extern                 Run an external command, with an ENV
  [Modules]       
                  source-guard           guard against duplicate 'source'
                  is-main                false when sourcing a file
                  use                    create a module Obj from a source file
  [I/O]           ysh-read               flags --all, -0
                  ysh-echo               no -e -n with simple_echo
                  ysh-test               --file --true etc.
                  ysh-wait               wait --all --verbose
                  write                  Like echo, with --, --sep, --end
                  fork         forkwait  Replace & and (), and takes a block
                  fopen                  Open multiple streams, takes a block
  [Private]       cat          rm        POSIX-compatible
                  sleep
  [Hay Config]    hay          haynode   For DSLs and config files
  [Completion]    compadjust   compexport
  [Data Formats]  json                   read write
                  json8                  read write
)zZXx");

GLOBAL_STR(gStr20, R"zZXx(Builtin Functions

  [Values]        len()             func/type()
  [Conversions]   bool()            int()              float()
                  str()             list()             dict()
                X runes()         X encodeRunes()
                X bytes()         X encodeBytes()
  [Str]         X strcmp()          shSplit()
  [List]          join()       
  [Dict]          keys()            values()           get()       
  [Float]         floatsEqual()   X isinf()          X isnan()
  [Obj]           first()           rest()             get()
  [Word]          glob()            maybe()
  [Serialize]     toJson()          fromJson()
                  toJson8()         fromJson8()
                X toJ8Line()      X fromJ8Line()
  [Pattern]       _group()          _start()           _end()
  [Reflection]    func/eval()       func/evalExpr()  
  [Introspect]    shvarGet()        getVar()           setVar()  
                  parseCommand()  X parseExpr()      X bindFrame()
  [Hay Config]    parseHay()        evalHay()
X [Hashing]       sha1dc()          sha256()
)zZXx");

GLOBAL_STR(gStr21, R"zZXx(The reference is divided in to "chapters", each of which has its own table of
contents.  Type:

    help ysh-$CHAPTER

Where $CHAPTER is one of:

    type-method
    builtin-func
    builtin-cmd
    stdlib
    front-end
    cmd-lang
    ysh-cmd
    expr-lang
    word-lang
    option
    special-var
    plugin

Example:

    help ysh-expr-lang
    help ysh-ysh-cmd    # may change
)zZXx");

GLOBAL_STR(gStr22, R"zZXx(Command Language

  [Commands]      simple-command
                  command-lookup-order
                  ysh-prefix-binding
                  semicolon ;
  [Redirects]     ysh-here-str    read <<< '''
  [YSH Simple]    typed-arg       json write (x)
                  lazy-expr-arg   assert [42 === x]
                  block-arg       cd /tmp { echo $PWD }; cd /tmp (; ; blockexpr)
  [YSH Cond]      ysh-case        case (x) { *.py { echo 'python' } }
                  ysh-if          if (x > 0) { echo }
  [YSH Iter]      ysh-for         for i, item in (mylist) { echo }
                  ysh-while       while (x > 0) { echo }
)zZXx");

GLOBAL_STR(gStr23, R"zZXx(Expression Language and Assignments

  [Assignment]    assign        =
                  aug-assign    +=   -=   *=   /=   **=   //=   %=
                                &=   |=   ^=   <<=   >>=
  [Literals]      atom-literal  null   true   false
                  int-literal   42  65_536  0xFF  0o755  0b10
                  float-literal 3.14  1.5e-10
                X num-suffix    42 K Ki M Mi G Gi T Ti / ms us
                  char-literal  \\ \t \"   \y00   \u{3bc}
                  ysh-string    "x is $x"  $"x is $x"   r'[a-z]\n'
                                u'line\n'  b'byte \yff'
                  triple-quoted """  $"""  r'''  u'''  b'''
                  list-literal  ['one', 'two', 3]  :| unquoted words |
                  dict-literal  {name: 'bob'}  {a, b}
                  range         1 ..< n  1 ..= n
                  block-expr    ^(echo $PWD)
                  expr-literal  ^[1 + 2*3]
                  str-template  ^"$a and $b" for Str.replace()
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
                  ysh-attr      mydict.key  mystr.startsWith('x')
                  ysh-slice     a[1:-1]  s[1:-1]
                  ysh-func-call f(x, y, ...pos; n=1, ...named)
                  thin-arrow    mylist->pop()
                  fat-arrow     mylist => join() => upper()
                  match-ops     ~   !~   ~~   !~~
  [Eggex]         re-literal    / d+ ; re-flags ; ERE /
                  re-primitive  %zero    'sq'
                  class-literal [c a-z 'abc' @str_var \\ \xFF \u{3bc}]
                  named-class    dot   digit   space   word   d  s  w
                  re-repeat     d?   d*   d+   d{3}   d{2,4}
                  re-compound    seq1 seq2   alt1|alt2   (expr1 expr2)
                  re-capture    <capture d+ as name: int>
                  re-splice     Subpattern   @subpattern
                  re-flags      reg_icase   reg_newline
                X re-multiline  ///
)zZXx");

GLOBAL_STR(gStr24, R"zZXx(Front End

  [Usage]         oils-usage   ysh-usage             shell-flags
                  config       startup               line-editing          
                  exit-codes
  [Lexing]        comment #    line-continuation \   ascii-whitespace [ \t\r\n]
  [Lexing]        doc-comment ###                    multiline-command ...
  [Tools]         cat-em                             syntax-tree
)zZXx");

GLOBAL_STR(gStr25, R"zZXx(Other Mini Languages

  [Patterns]      glob-pat      *.py
  [Other Sublang] braces        {alice,bob}@example.com
)zZXx");

GLOBAL_STR(gStr26, R"zZXx(Global Shell Options

  [Optimize]     rewrite_extern
  [Groups]       strict:all      ysh:upgrade     ysh:all
  [YSH Details]  opts-redefine   opts-internal
)zZXx");

GLOBAL_STR(gStr27, R"zZXx(Plugins and Hooks

  [YSH]   renderPrompt()
)zZXx");

GLOBAL_STR(gStr28, R"zZXx(Special Variables

  [YSH Vars]      ARGV                ENV
                  __defaults__        __builtins__        X __sh_function__
                  _this_dir
  [YSH Status]    _error
                  _pipeline_status    _process_sub_status
  [YSH Tracing]   SHX_indent          SHX_punct             SHX_pid_str
  [YSH read]      _reply
  [History]       YSH_HISTFILE
  [Interactive]   OILS_COMP_UI
  [Oils VM]       OILS_VERSION
                  OILS_GC_THRESHOLD   OILS_GC_ON_EXIT
                  OILS_GC_STATS       OILS_GC_STATS_FD
                  LIB_YSH
  [Float]         NAN                 INFINITY
  [Module]        __provide__ 
  [Other Env]     HOME                PATH
)zZXx");

GLOBAL_STR(gStr29, R"zZXx(Standard Library

  [math]          abs()         max()          min()    X round()
                  sum()     
  [list]          all()         any()          repeat()
  [yblocks]       yb-capture    yb-capture-2
  [args]          parser        flag           arg        rest
                  parseArgs()
  [binascii]    X toBase16()  X fromBase16()
                X toBase64()  X fromBase64()
)zZXx");

GLOBAL_STR(gStr30, R"zZXx(Types and Methods

  [Atoms]          Null        null
                   Bool        expr/true        expr/false
  [Numbers]        Int
                   Float
                   Range
  [String]         Str       X find()         X findLast()
                             X contains()       replace()
                               trim()           trimStart()       trimEnd()
                               startsWith()     endsWith()
                               upper()          lower()
                               search()         leftMatch()
                               split()          lines()
  [Patterns]       Eggex
                   Match       group()          start()           end()
                             X groups()       X groupDict()
  [Containers]     List        List/append()    pop()             extend()
                               indexOf()        lastIndexOf()   X includes()
                               insert()         remove()
                               reverse()        List/clear()
                   Dict        erase()        X Dict/clear()    X accum()
                             X update()
                   Place       setValue()
  [Code Types]     Func        
                   BuiltinFunc
                   BoundFunc
                   Proc        docComment()   
                   BuiltinProc
  [Objects]        Obj         __invoke__       new
                             X __call__         __index__       X __str__
  [Reflection]     Command     sourceCode()
                   Expr
                   Frame
                   DebugFrame  toString()
                   io          stdin            io/eval()         io/evalExpr()
                               captureStdout()  captureAll()      promptVal()
                             X time()         X strftime()      X glob()
                   vm          getFrame()       getDebugStack()   id() 
)zZXx");

GLOBAL_STR(gStr31, R"zZXx(bin/ysh is the shell with data tYpes, influenced by pYthon, JavaScript, ...

Usage:
    ysh FLAG* SCRIPT ARG*
    ysh FLAG* -c COMMAND ARG*
    ysh FLAG*

Examples:
    ysh -c 'echo hi'
    ysh myscript.ysh
    echo 'echo hi' | ysh

Note that bin/ysh is the same as bin/osh with the ysh:all option group set:
    osh -o ysh:all -c 'echo hi'  # Same as YSH
)zZXx");

GLOBAL_STR(gStr32, R"zZXx(Word Language

  [Joining]       ysh-word-join    --flag='value'  PATH="value"
  [Quotes]        ysh-string       "x is $x"  $"x is $x"  r'[a-z]\n'
                                   u'line\n'  b'byte \yff'
                  triple-quoted    """  $"""  r'''  u'''  b'''
                X tagged-str       "<span id=$x>"html
  [Substitutions] expr-sub         echo $[42 + a[i]]
                  expr-splice      echo @[split(x)]
                  var-splice       @myarray @ARGV
                  command-sub      $(date)
                  ysh-command-sub  @(cat my-j8-lines.txt)
  [Formatting]  X ysh-printf       ${x %.3f}
                X ysh-format       ${x|html}
)zZXx");

GLOBAL_STR(gStr33, R"zZXx(YSH Command Language Keywords

  [Assignment]    const   var     Declare variables
                  setvar          setvar a[i] = 42
                  setglobal       setglobal d.key = 'foo'
  [Expression]    equal =         = 1 + 2*3
                  call            call mylist->append(42)
  [Definitions]   proc            proc p (s, ...rest) {
                                  typed proc p (; typed, ...rest; n=0; b) {
                  func            func f(x; opt1, opt2) { return (x + 1) }
                  ysh-return      return (myexpr)
)zZXx");

GLOBAL_STR(gStr34, R"zZXx(# Can we define methods in pure YSH?
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

GLOBAL_STR(gStr35, R"zZXx(# Bash strict mode, updated for 2024

set -o nounset
set -o pipefail
set -o errexit
shopt -s inherit_errexit
shopt -s strict:all 2>/dev/null || true  # dogfood for OSH

)zZXx");

GLOBAL_STR(gStr36, R"zZXx(# Library to turn a shell file into a "BYO test server"
#
# Usage:
#
#   # from both bash and OSH
#   if test -z "$LIB_OSH"; then LIB_OSH=stdlib/osh; fi
#   source $LIB_OSH/byo-server-lib.sh
#
# The client creates a clean process state and directory state for each tests.
#
# (This file requires compgen -A, and maybe declare -f, so it's not POSIX
# shell.)

: ${LIB_OSH:-stdlib/osh}
source $LIB_OSH/two.sh

# List all functions defined in this file (and not in sourced files).
_bash-print-funcs() {
  ### Print shell functions in this file that don't start with _ (bash reflection)

  local funcs
  funcs=($(compgen -A function))

  # extdebug makes `declare -F` print the file path, but, annoyingly, only
  # if you pass the function names as arguments.
  shopt -s extdebug

  # bash format:
  # func1 1 path1
  # func2 2 path2  # where 2 is the linen umber

  #declare -F "${funcs[@]}"

  # TODO: do we need to normalize the LHS and RHS of $3 == path?
  declare -F "${funcs[@]}" | awk -v "path=$0" '$3 == path { print $1 }'

  shopt -u extdebug
}

_gawk-print-funcs() {
  ### Print shell functions in this file that don't start with _ (awk parsing)

  # Using gawk because it has match()
  # - doesn't start with _

  # space     = / ' '* /
  # shfunc    = / %begin
  #               <capture !['_' ' '] ![' ']*>
  #               '()' space '{' space
  #               %end /
  # docstring = / %begin
  #               space '###' ' '+
  #               <capture dot*>
  #               %end /
  gawk '
  match($0, /^([^_ ][^ ]*)\(\)[ ]*{[ ]*$/, m) {
    #print NR " shfunc " m[1]
    print m[1]
    #print m[0]
  }

  match($0, /^[ ]*###[ ]+(.*)$/, m) {
    print NR " docstring " m[1]
  }
' $0
}

_print-funcs() {
  _bash-print-funcs
  return

  # TODO: make gawk work, with docstrings
  if command -v gawk > /dev/null; then
    _gawk-print-funcs
  else
    _bash-print-funcs
  fi
}


byo-maybe-run() {
  local command=${BYO_COMMAND:-}

  case $command in
    '')
      # Do nothing if it's not specified
      return 
      ;;

    detect)
      # all the commands supported, except 'detect'
      echo list-tests
      echo run-test

      exit 66  # ASCII code for 'B' - what the protocol specifies
      ;;

    list-tests)
      # TODO: use _bash-print-funcs?  This fixes the transitive test problem,
      # which happened in soil/web-remote-test.sh
      # But it should work with OSH, not just bash!  We need shopt -s extdebug
      compgen -A function | grep '^test-'
      exit 0
      ;;

    run-test)
      local test_name=${BYO_ARG:-}
      if test -z "$test_name"; then
        die "BYO run-test: Expected BYO_ARG"
      fi

      # Avoid issues polluting recursive calls!
      unset BYO_COMMAND BYO_ARG

      # Shell convention: we name functions test-*
      "$test_name"

      # Only run if not set -e.  Either way it's equivalent
      exit $?
      ;;

    *)
      die "Invalid BYO command '$command'"
      ;;
  esac

  # Do nothing if BYO_COMMAND is not set.
  # The program continues to its "main".
}

byo-must-run() {
  local command=${BYO_COMMAND:-}
  if test -z "$command"; then
    die "Expected BYO_COMMAND= in environment"
  fi

  byo-maybe-run
}
)zZXx");

GLOBAL_STR(gStr37, R"zZXx(#!/usr/bin/env bash
#
# Testing library for bash and OSH.
#
# Capture status/stdout/stderr, and nq-assert those values.

: ${LIB_OSH=stdlib/osh}
source $LIB_OSH/two.sh

nq-assert() {
  ### Assertion with same syntax as shell 'test'

  if ! test "$@"; then
    die "line ${BASH_LINENO[0]}: nq-assert $(printf '%q ' "$@") failed"
  fi
}

# Problem: we want to capture status and stdout at the same time
#
# We use:
#
#  __stdout=$(set -o errexit; "$@")
#  __status=$?
#
# However, we lose the trailing \n, since that's how command subs work.

# Here is another possibility:
#
# shopt -s lastpipe  # need this too
# ( set -o errexit; "$@" ) | read -r -d __stdout
# __status=${PIPESTATUS[0]}
# shopt -u lastpipe
#
# But this feels complex for just the \n issue, which can be easily worked
# around.

nq-run() {
  ### capture status only

  local -n out_status=$1
  shift

  local __status

  # Tricky: turn errexit off so we can capture it, but turn it on against
  set +o errexit
  ( set -o errexit; "$@" )
  __status=$?
  set -o errexit

  out_status=$__status
}

nq-capture() {
  ### capture status and stdout

  local -n out_status=$1
  local -n out_stdout=$2
  shift 2

  local __status
  local __stdout

  # Tricky: turn errexit off so we can capture it, but turn it on against
  set +o errexit
  __stdout=$(set -o errexit; "$@")
  __status=$?
  set -o errexit

  out_status=$__status
  out_stdout=$__stdout
}

nq-capture-2() {
  ### capture status and stderr 
  
  # This is almost identical to the above

  local -n out_status=$1
  local -n out_stderr=$2
  shift 2

  local __status
  local __stderr

  # Tricky: turn errexit off so we can capture it, but turn it on against
  set +o errexit
  __stderr=$(set -o errexit; "$@" 2>&1)
  __status=$?
  set -o errexit

  out_status=$__status
  out_stderr=$__stderr
}

# 'byo test' can set this?
: ${NQ_TEST_TEMP=/tmp}

nq-redir() {
  ### capture status and stdout

  local -n out_status=$1
  local -n out_stdout_file=$2
  shift 2

  local __status
  local __stdout_file=$NQ_TEST_TEMP/nq-redir-$$.txt

  # Tricky: turn errexit off so we can capture it, but turn it on against
  set +o errexit
  ( set -o errexit; "$@" ) > $__stdout_file
  __status=$?
  set -o errexit

  out_status=$__status
  out_stdout_file=$__stdout_file
}

nq-redir-2() {
  ### capture status and stdout

  local -n out_status=$1
  local -n out_stderr_file=$2
  shift 2

  local __status
  local __stderr_file=$NQ_TEST_TEMP/nq-redir-$$.txt

  # Tricky: turn errexit off so we can capture it, but turn it on against
  set +o errexit
  ( set -o errexit; "$@" ) 2> $__stderr_file
  __status=$?
  set -o errexit

  out_status=$__status
  out_stderr_file=$__stderr_file
}
)zZXx");

GLOBAL_STR(gStr38, R"zZXx(#!/usr/bin/env bash
#
# Common shell functions for task scripts.
#
# Usage:
#   source $LIB_OSH/task-five.sh
#
#   test-foo() {  # define task functions
#     echo foo
#   }
#   task-five "$@"

# Definition of a "task"
#
# - File invokes task-five "$@"
#   - or maybe you can look at its source
# - It's a shell function
#   - Has ### docstring
#   - Doesn't start with _

: ${LIB_OSH=stdlib/osh}
source $LIB_OSH/byo-server.sh

_show-help() {
  # TODO:
  # - Use awk to find comments at the top of the file?
  # - Use OSH to extract docstrings
  # - BYO_COMMAND=list-tasks will reuse that logic?  It only applies to the
  #   current file, not anything in a different file?

  echo "Usage: $0 TASK_NAME ARGS..."
  echo
  echo "To complete tasks, run:"
  echo "   source devtools/completion.bash"
  echo
  echo "Tasks:"

  if command -v column >/dev/null; then
    _print-funcs | column
  else
    _print-funcs
  fi
}

task-five() {
  # Respond to BYO_COMMAND=list-tasks, etc.  All task files need this.
  byo-maybe-run

  case ${1:-} in
    ''|--help|-h)
      _show-help
      exit 0
      ;;
  esac

  if ! declare -f "$1" >/dev/null; then
    echo "$0: '$1' isn't an action in this task file.  Try '$0 --help'"
    exit 1
  fi

  "$@"
}
)zZXx");

GLOBAL_STR(gStr39, R"zZXx(# Two functions I actually use, all the time.
#
# To keep depenedencies small, this library will NEVER grow other functions
# (and is named to imply that.)
#
# Usage:
#   source --builtin two.sh
#
# Examples:
#    log 'hi'
#    die 'expected a number'

if command -v source-guard >/dev/null; then  # include guard for YSH
  source-guard two || return 0
fi

log() {
  ### Write a message to stderr.
  echo "$@" >&2
}

die() {
  ### Write an error message with the script name, and exit with status 1.
  log "$0: fatal: $@"
  exit 1
}

)zZXx");

GLOBAL_STR(gStr40, R"zZXx(# These were helpful while implementing args.ysh
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

GLOBAL_STR(gStr41, R"zZXx(# args.ysh
#
# Usage:
#   source --builtin args.sh

const __provide__ = :| parser parseArgs |

#
#
# parser (&spec) {
#   flag -v --verbose (help="Verbosely")  # default is Bool, false
#
#   flag -P --max-procs (Int, default=-1, doc='''
#     Run at most P processes at a time
#     ''')
#
#   flag -i --invert (Bool, default=true, doc='''
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
# - flag builtin:
#   - handle only long flag or only short flag
#   - flag aliases
#   - assert that default value has the declared type

proc parser (; place ; ; block_def) {
  ## Create an args spec which can be passed to parseArgs.
  ##
  ## Example:
  ##
  ##   # NOTE: &spec will create a variable named spec
  ##   parser (&spec) {
  ##     flag -v --verbose (Bool)
  ##   }
  ##
  ##   var args = parseArgs(spec, ARGV)

  var p = {flags: [], args: []}
  ctx push (p) {
    call io->eval(block_def, vars={flag, arg, rest})
  }

  # Validate that p.rest = [name] or null and reduce p.rest into name or null.
  if ('rest' in p) {
    if (len(p.rest) > 1) {
      error '`rest` was called more than once' (code=3)
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
        error "Duplicate flag/arg name $[x.name] in spec" (code=3)
      }

      setvar names[x.name] = null
    }
  }

  # TODO: what about `flag --name` and then `arg name`?

  call place->setValue(p)
}

const kValidTypes = [Bool, Float, List[Float], Int, List[Int], Str, List[Str]]
const kValidTypeNames = []
for vt in (kValidTypes) {
  var name = vt.name if ('name' in propView(vt)) else vt.unique_id
  call kValidTypeNames->append(name)
}

func isValidType (type) {
  for valid in (kValidTypes) {
    if (type is valid) {
      return (true)
    }
  }
  return (false)
}

proc flag (short, long ; type=Bool ; default=null, help=null) {
  ## Declare a flag within an `arg-parse`.
  ##
  ## Examples:
  ##
  ##   arg-parse (&spec) {
  ##     flag -v --verbose
  ##     flag -n --count (Int, default=1)
  ##     flag -p --percent (Float, default=0.0)
  ##     flag -f --file (Str, help="File to process")
  ##     flag -e --exclude (List[Str], help="File to exclude")
  ##   }

  if (type !== null and not isValidType(type)) {
    var type_names = ([null] ++ kValidTypeNames) => join(', ')
    error "Expected flag type to be one of: $type_names" (code=2)
  }

  # Bool has a default of false, not null
  if (type is Bool and default === null) {
    setvar default = false
  }

  var name = long => trimStart('--')

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
    if (arg.startsWith('-')) {
      setvar found = false

      for flag in (spec.flags) {
        if ( (flag.short and flag.short === arg) or
             (flag.long and flag.long === arg) ) {
          if (flag.type === null or flag.type is Bool) {
            setvar value = true
          } elif (flag.type is Int) {
            setvar i += 1
            if (i >= len(argv)) {
              error "Expected Int after '$arg'" (code=2)
            }

            try { setvar value = int(argv[i]) }
            if (_status !== 0) {
              error "Expected Int after '$arg', got '$[argv[i]]'" (code=2)
            }
          } elif (flag.type is List[Int]) {
            setvar i += 1
            if (i >= len(argv)) {
              error "Expected Int after '$arg'" (code=2)
            }

            setvar value = get(args, flag.name, [])
            try { call value->append(int(argv[i])) }
            if (_status !== 0) {
              error "Expected Int after '$arg', got '$[argv[i]]'" (code=2)
            }
          } elif (flag.type is Float) {
            setvar i += 1
            if (i >= len(argv)) {
              error "Expected Float after '$arg'" (code=2)
            }

            try { setvar value = float(argv[i]) }
            if (_status !== 0) {
              error "Expected Float after '$arg', got '$[argv[i]]'" (code=2)
            }
          } elif (flag.type is List[Float]) {
            setvar i += 1
            if (i >= len(argv)) {
              error "Expected Float after '$arg'" (code=2)
            }

            setvar value = get(args, flag.name, [])
            try { call value->append(float(argv[i])) }
            if (_status !== 0) {
              error "Expected Float after '$arg', got '$[argv[i]]'" (code=2)
            }
          } elif (flag.type is Str) {
            setvar i += 1
            if (i >= len(argv)) {
              error "Expected Str after '$arg'" (code=2)
            }

            setvar value = argv[i]
          } elif (flag.type is List[Str]) {
            setvar i += 1
            if (i >= len(argv)) {
              error "Expected Str after '$arg'" (code=2)
            }

            setvar value = get(args, flag.name, [])
            call value->append(argv[i])
          }

          setvar args[flag.name] = value
          setvar found = true
          break
        }
      }

      if (not found) {
        error "Unknown flag '$arg'" (code=2)
      }
    } elif (positionalPos >= len(spec.args)) {
      if (not spec.rest) {
        error "Too many arguments, unexpected '$arg'" (code=2)
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
      error "Usage Error: Missing required argument $[arg.name]" (code=2)
    }
  }

  return (args)
}
)zZXx");

GLOBAL_STR(gStr42, R"zZXx(const __provide__ = :| Dict |

proc Dict ( ; out; ; block) {
  var d = io->evalToDict(block)
  call out->setValue(d)
}

)zZXx");

GLOBAL_STR(gStr43, R"zZXx(const __provide__ = :| any all repeat |

func any(list) {
  ### Returns true if any value in the list is truthy.
  # Empty list: returns false

  for item in (list) {
    if (item) {
      return (true)
    }
  }
  return (false)
}

func all(list) {
  ### Returns true if all values in the list are truthy.
  # Empty list: returns true

  for item in (list) {
    if (not item) {
      return (false)
    }
  }
  return (true)
}

func repeat(x, n) {
  ### Repeats a given Str or List, returning another Str or List

  # Like Python's 'foo'*3 or ['foo', 'bar']*3
  # negative numbers are like 0 in Python

  var t = type(x)
  case (t) {
    Str {
      var parts = []
      for i in (0 ..< n) {
        call parts->append(x)
      }
      return (join(parts))
    }
    List {
      var result = []
      for i in (0 ..< n) {
        call result->extend(x)
      }
      return (result)
    }
    (else) {
      error "Expected Str or List, got $t"
    }
  }
}
)zZXx");

GLOBAL_STR(gStr44, R"zZXx(const __provide__ = :| identity max min abs sum |

func identity(x) {
  ### The identity function. Returns its argument.

  return (x)
}

func __math_select(list, cmp) {
  ## Internal helper for `max` and `min`.
  ##
  ## NOTE: If `list` is empty, then an error is thrown.

  if (len(list) === 0) {
    error "Unexpected empty list" (code=3)
  }

  if (len(list) === 1) {
    return (list[0])
  }

  var match = list[0]
  for i in (1 ..< len(list)) {
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
    (else) { error "max expects 1 or 2 args" (code=3) }
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
    (else) { error "min expects 1 or 2 args" (code=3) }
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

func sum(list; start=0) {
  ### Returns the sum of all elements in the list.
  # Empty list: returns 0

  var sum = start
  for item in (list) {
    setvar sum += item
  }
  return (sum)
}
)zZXx");

GLOBAL_STR(gStr45, R"zZXx(const __provide__ = :| sh shell ninja make |

# Issues for quoting:
#
# 1. What is the alphabet we're quoting to?
#    - Output can be "all bytes", "all unicode strings", or "ASCII"
# 2. Start with a simple algorithm to quote everything
#    - POSIX shell may take ' to ''\'''
# 3. Heuristic that may avoid quotes, to make it more readable
#    - But really it should be \'
#   - If the ' appears at the beginning or the end, we could have a different
#     algorithm.  Or we could strip leading and trailing ''
# 4. Are there any byte strings / unicode strings that can't be quoted?
#    - e.g. NUL bytes?
#    - for JSON/JS, binary strings?  Only Unicode strings can be encoded.
#
# Builtins:
#   toJson() toJson8() 
#   toJ8Line() - does the "maybe unquoted" logic
#
# Related functions:
#   encode.base{16,32,64} - Crockford has a base32
#   decode.base{16,32,64}
#   Also base85, and maybe base58 base36
#
# In Python: bin() oct() hex() int(i, 9) and %o %x (there is no %b)
#
# Other:
#   Punycode for Unicode domain names uses xn-- ?
#   CSS has escapes with \
#   HTTP Cookies have "" and \?
#
# Related:
#   demo/url-search-params.ysh is the PARSER / unquoter for quote.urlParam()

func sh(s) {
  ### Quote POSIX sh string

  # replace ' with sequence ' \' '
  # Note: the \\ is hard to read - '' doesn't help
  return ("'" ++ s.replace("'", "'\\''") ++ "'")
}

func shell(s) {
  ### Quote shell string, where bash and zsh style $'\n' is allowed

  # TODO: Binding for j8_lite.MaybeShellEncode / ShellEncode
  return (toJson(s))
}

func ysh(s) {
  ### Quote YSH string as b'\n'

  # TODO: Binding for j8_lite.YshEncode(unquoted_ok)
  return (toJson(s))
}

#
# Build Tools
#

func make(s) {
  var out = []
  var n = len(s)
  for i in (0 ..< n) {
    var ch = s[i]

    case (ch) {
      (\r) |
      (\n) {
        error "Can't quote newlines for Make?"
      }
      ('$') {
        call out->append('$')
        call out->append('$')
      }
      ('%') |
      (r'\') |
      # glob characters
      ('[') | (']') | ('*') | ('?') {
        call out->append(r'\')
        call out->append(ch)
      }
      (else) {
        call out->append(ch)
      }
    }
  }
  return (join(out, ''))
}

# https://ninja-build.org/manual.html#ref_lexer
# $ escapes newline, space, : and $
# and then the rest is interpreted by /bin/sh
func ninja(s) {
  var out = []
  var n = len(s)
  for i in (0 ..< n) {
    var ch = s[i]

    case (ch) {
      # Subtlety: Ninja allows $ to escape a newline, but it's only for
      # line continuations - for breaking long lists of files.
      # - A file itself should not have a newline.
      # - It strips literal newlines out of shell commands.
      # So disallow it
      (\r) |
      (\n) {
        error "Can't quote newlines for Ninja"
      }
      ('$') |
      (' ') |
      #('#') |  # Ninja has no way to escape comments!
      (':') {
        call out->append('$')
        call out->append(ch)
      }
      (else) {
        call out->append(ch)
      }
    }
  }
  return (join(out, ''))
}

# I don't know the rule here - uses \?
func cmake(s) {
  return (s)
}

#
# Tables, Objects, Documents
#

func csv(s) {
  # double up " etc.
  return (s)
}

func sql(s) {
  # double up ' etc.
  return (s)
}

# quote.json is just toJson()

func html(s) {
  ### Quote shell string, where bash and zsh style $'\n' is allowed

  # Binding for j8_lite.MaybeShellEncode / ShellEncode
  return (toJson(s))
}

#
# Web
#

func urlParam(s) {
  # urllib.quote
  # 'foo bar %' -> 'foo+bar %AB'
  return (toJson(s))
}

#
# Programming Languages
#

# Python 2 or 3
func py(s) {
  return (s)
}

# C or C++
# Can it be Unicode?
func c(s) {
  return (s)
}

# quote.js is just toJson() ?
# But it can't handle binary strings?
# We can make a table?

#
# Windows
#

# We want something that works everywhere -- it should never DOUBLE-ESCAPE, but
# it can "unnecessarily" ESCAPE certain characters.

# C runtime
func win32_crt(s) {
  return (s)
}

# win32 cmd.exe batch files?
func win32_cmd(s) {
  return (s)
}

# batch different than cmd.exe?
func win32_batch(s) {
  return (s)
}
)zZXx");

GLOBAL_STR(gStr46, R"zZXx(# stream.ysh
#
# Usage:
#   source --builtin stream.ysh
#
# For reading lines, decoding, extracting, splitting

# make this file a test server
source $LIB_OSH/byo-server.sh

source $LIB_YSH/args.ysh

proc slurp-by (; num_lines) {
  var buf = []
  for line in (io.stdin) {
    call buf->append(line)
    if (len(buf) === num_lines) {
      json write (buf, space=0)

      # TODO:
      #call buf->clear()
      setvar buf = []
    }
  }
  if (buf) {
    json write (buf, space=0)
  }
}

proc test-slurp-by {
  seq 8 | slurp-by (3)
}

### Awk

# Naming
#
# TEXT INPUT
#   each-word  # this doesn't go by lines, it does a global regex split or something?
#
# LINE INPUT
#   each-line --j8 { echo "-- $_line" }  # similar to @()
#   each-line --j8 (^"-- $_line")  # is this superfluous?
#
#   each-split name1 name2
#               (delim=' ')
#               (ifs=' ')
#               (pat=/d+/)
#               # also assign names for each part?
#
#   each-match  # regex match
#   must-match  # assert that every line matches
#
# TABLE INPUT
#   each-row  # TSV and TSV8 input?
#
# They all take templates or blocks?

proc each-line (...words; template=null; ; block=null) {
  # TODO: 
  # parse --j8 --max-jobs flag

  # parse template_str as string
  # TODO: this is dangerous though ... because you can execute code
  # I think you need a SAFE version

  # evaluate template string expression - I guess that allows $(echo hi) and so
  # forth

  # evaluate block with _line binding
  # block: execute in parallel with --max-jobs

  for line in (stdin) {
    echo TODO
  }
}

proc test-each-line {
  echo 'TODO: need basic test runner'

  # ysh-tool test stream.ysh
  # 
  # Col
}

proc each-j8-line (; ; ; block) {
  for _line in (io.stdin) {
    # TODO: fromJ8Line() toJ8Line()
    # var _line = fromJson(_line)
    call io->eval(block, vars={_line})
  }
}

proc test-each-j8-line {
  var lines = []
  var prefix = 'z'

  # unquoted
  seq 3 | each-j8-line {
    call lines->append(prefix ++ _line)
  }
  pp test_ (lines)

  # Note: no trailing new lines, since they aren't significant in Unix
  var expected = ['z1', 'z2', 'z3']
  assert [expected === lines]
}

proc each-row (; ; block) {
  echo TODO
}

proc split-by (; delim; ifs=null; block) {

  # TODO: provide the option to bind names?  Or is that a separate thing?
  # The output of this is "ragged"

  for line in (io.stdin) {
    #pp (line)
    var parts = line.split(delim)
    pp (parts)

    # variable number
    call io->eval(block, dollar0=line, pos_args=parts)
  }
}

proc chop () {
  ### alias for split-by
  echo TODO
}

proc test-split-by {
  var z = 'z'  # test out scoping
  var count = 0  # test out mutation

  # TODO: need split by space
  # Where the leading and trailing are split
  # if-split-by(' ') doesn't work well

  line-data | split-by (/s+/) {

    # how do we deal with nonexistent?
    # should we also bind _parts or _words?

    echo "$z | $0 | $1 | $z"

    setvar count += 1
  }
  echo "count = $count"
}

proc must-split-by (; ; ifs=null; block) {
  ### like if-split-by

  echo TODO
}

# Naming: each-match, each-split?

proc if-match (; pattern, template=null; ; block=null) {
  ### like 'grep' but with submatches

  for line in (io.stdin) {
    var m = line.search(pattern)
    if (m) {
      #pp asdl_ (m)
      #var groups = m.groups()

      # Should we also pass _line?

      if (block) {
        call io->eval(block, dollar0=m.group(0))
      } elif (template) {
        echo TEMPLATE
      } else {
        echo TSV
      }
    }
  }

  # always succeeds - I think must-match is the one that can fail
}

proc must-match (; pattern; block) {
  ### like if-match

  echo TODO
}

proc line-data {
  # note: trailing ''' issue, I should probably get rid of the last line

  write --end '' -- '''
  prefix 30 foo  
  oils
  /// 42 bar
  '''
}

const pat = /<capture d+> s+ <capture w+>/

proc test-if-match {
  var z = 'z'  # test out scoping
  var count = 0  # test out mutation

  # Test cases should be like:
  #   grep: print the matches, or just count them
  #   sed: print a new line based on submatches
  #   awk: re-arrange the cols, and also accumulate counters

  line-data | if-match (pat) {
    echo "$z $0 $z"
    # TODO: need pos_args

    #echo "-- $2 $1 --"

    setvar count += 1
  }
  echo "count = $count"
}

proc test-if-match-2 {
  # If there's no block or template, it should print out a TSV with:
  #
  # $0  ...
  # $1 $2
  # $_line maybe?

  #line-data | if-match (pat)

  var z = 'z'  # scoping
  line-data | if-match (pat, ^"$z $0 $z")
  line-data | if-match (pat, ^"-- $0 --")
}

# might be a nice way to write it, not sure if byo.sh can discover it
if false {
tests 'if-match' {
  proc case-block {
    echo TODO
  }
  proc case-template {
    echo TODO
  }
}
}

# Protocol:
#
# - The file lists its tests the "actions"
# - Then the test harness runs them
# - But should it be ENV vars
#
# - BYO_LIST_TESTS=1
# - BYO_RUN_TEST=foo
# - $PWD is a CLEAN temp dir, the process doesn't have to do anything

#   - silent on success, but prints file on output
#   - OK this makes sense
#
# The trivial test in Python:
#   
# from test import byo
# byo.maybe_main()
#
# bash library:
#  source --builtin byo-server.sh
#
# byo-maybe-main   # reads env variables, and then exits
#
#  source --builtin assertions.ysh
#
# assert-ok 'echo hi'
# assert-stdout 'hi' 'echo -n hi'
#
# "$@"
#
# Run all tests
# util/byo-client.sh run-tests $YSH stdlib/table.ysh
# util/byo-client.sh run-tests -f x $YSH stdlib/table.ysh

# Clean process
# Clean working dir

#
# Stream Protocol:
#     #.byo - is this she-dot, that's for a file
# Do we need metadata?
#

# The harness
#
# It's process based testing.
#
# Test runner process: bash or OSH (unlike sharness!)
# Tested process: any language - bash, 
#
# Key point: you don't have to quote shell code?

list-byo-tests() {
  echo TODO
}

run-byo-tests() {
  # source it
  echo TODO
}

byo-maybe-run
)zZXx");

GLOBAL_STR(gStr47, R"zZXx(# table.ysh - Library for tables.
#
# Usage:
#   source --builtin table.ysh

# make this file a test server
source $LIB_OSH/byo-server.sh

proc table (...words; place; ; block) {
  var n = len(words)

  # TODO: parse flags
  #
  # --by-row
  # --by-col
  #
  # Place is optional

  if (n === 0) {
    echo TODO
    return
  }

  var action = words[0]

  # textual operations
  case (action) {
    cat {
      echo todo
    }
    align {
      echo todo
    }
    tabify {
      echo todo
    }
    tabify {
      echo todo
    }
    header {
      echo todo
    }
    slice {
      # this has typed args
      # do we do some sort of splat?
      echo todo
    }
    to-tsv {
      echo todo
    }
  }

  echo TODO
}

proc test-table {
  return

  table (&files1) {
    cols  num_bytes path
    type  Int       Str

    row   10        README.md
    row   12        main.py

    row   (12,      'lib.py')
    row   (num_bytes=12, path='util.py')
  }

  # 2 columns - The default is by column?
  assert ['Dict' === type(files1)]
  assert [2 === len(files1)]

  # Same table
  table --by-row (&files2) {
    cols  num_bytes path
    type  Int       Str

    row   10        README.md
    row   12        main.py

    row   (12,      'lib.py')
    row   (num_bytes=12, path='util.py')
  }

  # 4 rows
  assert ['List' === type(files2)]
  assert [4 === len(files2)]
}

# "subcommands" of the dialect

proc cols (...names) {
  # cols name age
  echo TODO
}

proc types (...types) {
  # types - Int? Str?
  echo TODO
}

proc attr (name; ...values) {
  # attr units ('-', 'secs')
  echo TODO
}

# is this allowed outside table {} blocks too?
proc row {
  echo TODO
}

#
# dplyr names
#

# TODO: can we parse select?

proc where {
  echo
}

# TODO: should be able to test argv[0] or something
# Or pass to _mutate-transmute

proc mutate {
  echo TODO
}

proc transmute {
  echo TODO
}

proc rename {
  echo TODO
}

proc group-by {
  echo TODO
}

proc sort-by {
  echo TODO
}

proc summary {
  echo TODO
}

byo-maybe-run
)zZXx");

GLOBAL_STR(gStr48, R"zZXx(#!/usr/bin/env bash
#
# Testing library for bash and OSH.
#
# Capture status/stdout/stderr, and nq-assert those values.

const __provide__ = :| yb-capture yb-capture-2 |

: ${LIB_OSH=stdlib/osh}
source $LIB_OSH/two.sh

# There is no yb-run, because you can just use try { } and inspect _error.code
# There is no yb-redir, because you can just use try >$tmp { } and inspect _error.code

proc yb-capture(; out; ; block) {
  ### capture status and stdout

  var stdout = ''
  try {
    { call io->eval(block) } | read --all (&stdout)

    # Note that this doesn't parse because of expression issue:
    #     call io->eval(block) | read --all (&stdout)
    # used to be eval (block)
  }
  # TODO: if 'block' contains a pipeline, we lose this magic var
  var result = {status: _pipeline_status[0], stdout}

  #echo 'result-1'
  #pp test_ (result)

  call out->setValue(result)
}

proc yb-capture-2(; out; ; block) {
  ### capture status and stderr 

  var stderr = ''
  try {
    redir 2>&1 { call io->eval(block); } | read --all (&stderr)

    # Note that this doesn't parse because of expression issue:
    #     call io->eval(block) 2>&1 | read --all (&stderr)
    # used to be eval (block) 2>&1
  }
  #pp test_ (_pipeline_status)

  var result = {status: _pipeline_status[0], stderr}
  #echo 'result-2'
  #pp test_ (result)

  call out->setValue(result)
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
    {.rel_path = "_devbuild/help/osh-stdlib", .contents = gStr14},
    {.rel_path = "_devbuild/help/osh-type-method", .contents = gStr15},
    {.rel_path = "_devbuild/help/osh-usage", .contents = gStr16},
    {.rel_path = "_devbuild/help/osh-word-lang", .contents = gStr17},
    {.rel_path = "_devbuild/help/shell-flags", .contents = gStr18},
    {.rel_path = "_devbuild/help/ysh-builtin-cmd", .contents = gStr19},
    {.rel_path = "_devbuild/help/ysh-builtin-func", .contents = gStr20},
    {.rel_path = "_devbuild/help/ysh-chapters", .contents = gStr21},
    {.rel_path = "_devbuild/help/ysh-cmd-lang", .contents = gStr22},
    {.rel_path = "_devbuild/help/ysh-expr-lang", .contents = gStr23},
    {.rel_path = "_devbuild/help/ysh-front-end", .contents = gStr24},
    {.rel_path = "_devbuild/help/ysh-mini-lang", .contents = gStr25},
    {.rel_path = "_devbuild/help/ysh-option", .contents = gStr26},
    {.rel_path = "_devbuild/help/ysh-plugin", .contents = gStr27},
    {.rel_path = "_devbuild/help/ysh-special-var", .contents = gStr28},
    {.rel_path = "_devbuild/help/ysh-stdlib", .contents = gStr29},
    {.rel_path = "_devbuild/help/ysh-type-method", .contents = gStr30},
    {.rel_path = "_devbuild/help/ysh-usage", .contents = gStr31},
    {.rel_path = "_devbuild/help/ysh-word-lang", .contents = gStr32},
    {.rel_path = "_devbuild/help/ysh-ysh-cmd", .contents = gStr33},
    {.rel_path = "stdlib/methods.ysh", .contents = gStr34},
    {.rel_path = "stdlib/osh/bash-strict.sh", .contents = gStr35},
    {.rel_path = "stdlib/osh/byo-server.sh", .contents = gStr36},
    {.rel_path = "stdlib/osh/no-quotes.sh", .contents = gStr37},
    {.rel_path = "stdlib/osh/task-five.sh", .contents = gStr38},
    {.rel_path = "stdlib/osh/two.sh", .contents = gStr39},
    {.rel_path = "stdlib/prelude.ysh", .contents = gStr40},
    {.rel_path = "stdlib/ysh/args.ysh", .contents = gStr41},
    {.rel_path = "stdlib/ysh/def.ysh", .contents = gStr42},
    {.rel_path = "stdlib/ysh/list.ysh", .contents = gStr43},
    {.rel_path = "stdlib/ysh/math.ysh", .contents = gStr44},
    {.rel_path = "stdlib/ysh/quote.ysh", .contents = gStr45},
    {.rel_path = "stdlib/ysh/stream.ysh", .contents = gStr46},
    {.rel_path = "stdlib/ysh/table.ysh", .contents = gStr47},
    {.rel_path = "stdlib/ysh/yblocks.ysh", .contents = gStr48},

    {.rel_path = nullptr, .contents = nullptr},
};

}  // namespace embedded_file

TextFile* gEmbeddedFiles = embedded_file::array;  // turn array into pointer
