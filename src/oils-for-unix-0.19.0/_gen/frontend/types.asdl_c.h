#define bool_arg_type__Undefined 1
#define bool_arg_type__Path 2
#define bool_arg_type__Int 3
#define bool_arg_type__Str 4
#define bool_arg_type__Other 5

#define redir_arg_type__Path 1
#define redir_arg_type__Desc 2
#define redir_arg_type__Here 3

#define opt_group__StrictAll 1
#define opt_group__YshUpgrade 2
#define opt_group__YshAll 3

#define lex_mode__Undefined 1
#define lex_mode__Comment 2
#define lex_mode__ShCommand 3
#define lex_mode__ShCommandBrack 4
#define lex_mode__Backtick 5
#define lex_mode__DBracket 6
#define lex_mode__SQ_Raw 7
#define lex_mode__DQ 8
#define lex_mode__SQ_C 9
#define lex_mode__Arith 10
#define lex_mode__ExtGlob 11
#define lex_mode__VSub_1 12
#define lex_mode__VSub_2 13
#define lex_mode__VSub_ArgUnquoted 14
#define lex_mode__VSub_ArgDQ 15
#define lex_mode__BashRegex 16
#define lex_mode__BashRegexChars 17
#define lex_mode__FuncParens 18
#define lex_mode__PrintfOuter 19
#define lex_mode__PrintfPercent 20
#define lex_mode__Expr 21
#define lex_mode__QSN 22

#define word_mode__ShCommand 1
#define word_mode__ShCommandBrack 2
#define word_mode__DBracket 3
#define word_mode__BashRegex 4

#define cmd_mode__Shell 1
#define cmd_mode__Func 2
#define cmd_mode__Proc 3

