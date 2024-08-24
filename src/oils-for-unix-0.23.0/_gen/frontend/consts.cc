#include "_gen/frontend/consts.h"

using id_kind_asdl::Id;
using id_kind_asdl::Kind;
using types_asdl::redir_arg_type_e;
using types_asdl::bool_arg_type_e;
using option_asdl::builtin_t;

namespace consts {

int NO_INDEX = 0;  // duplicated from frontend/consts.py

GLOBAL_STR(gVersion, "0.23.0");

GLOBAL_LIST(STRICT_ALL, int, 10, {34 COMMA 35 COMMA 36 COMMA 37 COMMA 38 COMMA 42 COMMA 39 COMMA 33 COMMA 41 COMMA 40});
GLOBAL_LIST(YSH_UPGRADE, int, 23, {54 COMMA 53 COMMA 1 COMMA 4 COMMA 2 COMMA 5 COMMA 43 COMMA 46 COMMA 47 COMMA 48 COMMA 45 COMMA 49 COMMA 44 COMMA 51 COMMA 50 COMMA 3 COMMA 55 COMMA 59 COMMA 58 COMMA 52 COMMA 6 COMMA 57 COMMA 56});
GLOBAL_LIST(YSH_ALL, int, 46, {54 COMMA 53 COMMA 1 COMMA 72 COMMA 4 COMMA 2 COMMA 5 COMMA 43 COMMA 60 COMMA 61 COMMA 62 COMMA 68 COMMA 46 COMMA 47 COMMA 67 COMMA 63 COMMA 66 COMMA 48 COMMA 45 COMMA 64 COMMA 49 COMMA 44 COMMA 65 COMMA 51 COMMA 50 COMMA 3 COMMA 55 COMMA 59 COMMA 58 COMMA 69 COMMA 70 COMMA 71 COMMA 52 COMMA 34 COMMA 35 COMMA 36 COMMA 37 COMMA 38 COMMA 42 COMMA 39 COMMA 33 COMMA 41 COMMA 40 COMMA 6 COMMA 57 COMMA 56});
GLOBAL_LIST(DEFAULT_TRUE, int, 16, {25 COMMA 26 COMMA 53 COMMA 27 COMMA 72 COMMA 17 COMMA 61 COMMA 62 COMMA 68 COMMA 67 COMMA 63 COMMA 66 COMMA 64 COMMA 65 COMMA 59 COMMA 57});
GLOBAL_LIST(PARSE_OPTION_NUMS, int, 20, {72 COMMA 43 COMMA 60 COMMA 61 COMMA 62 COMMA 68 COMMA 46 COMMA 47 COMMA 67 COMMA 63 COMMA 66 COMMA 48 COMMA 45 COMMA 64 COMMA 49 COMMA 44 COMMA 65 COMMA 51 COMMA 50 COMMA 33});
GLOBAL_LIST(SHOPT_OPTION_NUMS, int, 98, {25 COMMA 26 COMMA 31 COMMA 32 COMMA 30 COMMA 29 COMMA 78 COMMA 79 COMMA 80 COMMA 81 COMMA 82 COMMA 83 COMMA 84 COMMA 77 COMMA 54 COMMA 85 COMMA 53 COMMA 86 COMMA 87 COMMA 88 COMMA 27 COMMA 22 COMMA 89 COMMA 72 COMMA 90 COMMA 19 COMMA 91 COMMA 18 COMMA 92 COMMA 93 COMMA 94 COMMA 95 COMMA 75 COMMA 96 COMMA 97 COMMA 76 COMMA 98 COMMA 23 COMMA 24 COMMA 4 COMMA 99 COMMA 73 COMMA 100 COMMA 101 COMMA 102 COMMA 103 COMMA 104 COMMA 21 COMMA 105 COMMA 106 COMMA 20 COMMA 5 COMMA 43 COMMA 60 COMMA 61 COMMA 62 COMMA 68 COMMA 46 COMMA 47 COMMA 67 COMMA 63 COMMA 66 COMMA 48 COMMA 45 COMMA 64 COMMA 49 COMMA 44 COMMA 65 COMMA 51 COMMA 50 COMMA 55 COMMA 74 COMMA 107 COMMA 108 COMMA 28 COMMA 59 COMMA 109 COMMA 110 COMMA 58 COMMA 69 COMMA 70 COMMA 71 COMMA 52 COMMA 111 COMMA 34 COMMA 35 COMMA 36 COMMA 37 COMMA 38 COMMA 42 COMMA 39 COMMA 33 COMMA 41 COMMA 40 COMMA 6 COMMA 112 COMMA 57 COMMA 56});
GLOBAL_LIST(SET_OPTION_NUMS, int, 13, {15 COMMA 1 COMMA 12 COMMA 17 COMMA 11 COMMA 7 COMMA 10 COMMA 2 COMMA 3 COMMA 13 COMMA 9 COMMA 14 COMMA 8});
GLOBAL_LIST(VISIBLE_SHOPT_NUMS, int, 58, {25 COMMA 26 COMMA 31 COMMA 32 COMMA 30 COMMA 29 COMMA 54 COMMA 53 COMMA 27 COMMA 22 COMMA 72 COMMA 19 COMMA 18 COMMA 23 COMMA 24 COMMA 4 COMMA 21 COMMA 20 COMMA 5 COMMA 43 COMMA 60 COMMA 61 COMMA 62 COMMA 68 COMMA 46 COMMA 47 COMMA 67 COMMA 63 COMMA 66 COMMA 48 COMMA 45 COMMA 64 COMMA 49 COMMA 44 COMMA 65 COMMA 51 COMMA 50 COMMA 55 COMMA 28 COMMA 59 COMMA 58 COMMA 69 COMMA 70 COMMA 71 COMMA 52 COMMA 34 COMMA 35 COMMA 36 COMMA 37 COMMA 38 COMMA 42 COMMA 39 COMMA 33 COMMA 41 COMMA 40 COMMA 6 COMMA 57 COMMA 56});

int RedirDefaultFd(id_kind_asdl::Id_t id) {
  // relies on "switch lowering"
  switch (id) {

  case Id::Redir_Less: return 0;
  case Id::Redir_Great: return 1;
  case Id::Redir_DLess: return 0;
  case Id::Redir_TLess: return 0;
  case Id::Redir_DGreat: return 1;
  case Id::Redir_GreatAnd: return 1;
  case Id::Redir_LessAnd: return 0;
  case Id::Redir_DLessDash: return 0;
  case Id::Redir_LessGreat: return 0;
  case Id::Redir_Clobber: return 1;
  case Id::Redir_AndGreat: return 1;
  case Id::Redir_AndDGreat: return 1;
  }
  FAIL(kShouldNotGetHere);
}

types_asdl::redir_arg_type_t RedirArgType(id_kind_asdl::Id_t id) {
  // relies on "switch lowering"
  switch (id) {

  case Id::Redir_Less: return redir_arg_type_e::Path;
  case Id::Redir_Great: return redir_arg_type_e::Path;
  case Id::Redir_TLess: return redir_arg_type_e::Here;
  case Id::Redir_DGreat: return redir_arg_type_e::Path;
  case Id::Redir_GreatAnd: return redir_arg_type_e::Desc;
  case Id::Redir_LessAnd: return redir_arg_type_e::Desc;
  case Id::Redir_LessGreat: return redir_arg_type_e::Path;
  case Id::Redir_Clobber: return redir_arg_type_e::Path;
  case Id::Redir_AndGreat: return redir_arg_type_e::Path;
  case Id::Redir_AndDGreat: return redir_arg_type_e::Path;
  }
  FAIL(kShouldNotGetHere);
}

types_asdl::bool_arg_type_t BoolArgType(id_kind_asdl::Id_t id) {
  // relies on "switch lowering"
  switch (id) {

  case Id::Op_DAmp: return bool_arg_type_e::Undefined;
  case Id::Op_DPipe: return bool_arg_type_e::Undefined;
  case Id::Op_Less: return bool_arg_type_e::Str;
  case Id::Op_Great: return bool_arg_type_e::Str;
  case Id::KW_Bang: return bool_arg_type_e::Undefined;
  case Id::BoolUnary_z: return bool_arg_type_e::Str;
  case Id::BoolUnary_n: return bool_arg_type_e::Str;
  case Id::BoolUnary_o: return bool_arg_type_e::Other;
  case Id::BoolUnary_t: return bool_arg_type_e::Other;
  case Id::BoolUnary_v: return bool_arg_type_e::Other;
  case Id::BoolUnary_R: return bool_arg_type_e::Other;
  case Id::BoolUnary_a: return bool_arg_type_e::Path;
  case Id::BoolUnary_b: return bool_arg_type_e::Path;
  case Id::BoolUnary_c: return bool_arg_type_e::Path;
  case Id::BoolUnary_d: return bool_arg_type_e::Path;
  case Id::BoolUnary_e: return bool_arg_type_e::Path;
  case Id::BoolUnary_f: return bool_arg_type_e::Path;
  case Id::BoolUnary_g: return bool_arg_type_e::Path;
  case Id::BoolUnary_h: return bool_arg_type_e::Path;
  case Id::BoolUnary_k: return bool_arg_type_e::Path;
  case Id::BoolUnary_L: return bool_arg_type_e::Path;
  case Id::BoolUnary_p: return bool_arg_type_e::Path;
  case Id::BoolUnary_r: return bool_arg_type_e::Path;
  case Id::BoolUnary_s: return bool_arg_type_e::Path;
  case Id::BoolUnary_S: return bool_arg_type_e::Path;
  case Id::BoolUnary_u: return bool_arg_type_e::Path;
  case Id::BoolUnary_w: return bool_arg_type_e::Path;
  case Id::BoolUnary_x: return bool_arg_type_e::Path;
  case Id::BoolUnary_O: return bool_arg_type_e::Path;
  case Id::BoolUnary_G: return bool_arg_type_e::Path;
  case Id::BoolUnary_N: return bool_arg_type_e::Path;
  case Id::BoolBinary_GlobEqual: return bool_arg_type_e::Str;
  case Id::BoolBinary_GlobDEqual: return bool_arg_type_e::Str;
  case Id::BoolBinary_GlobNEqual: return bool_arg_type_e::Str;
  case Id::BoolBinary_EqualTilde: return bool_arg_type_e::Str;
  case Id::BoolBinary_ef: return bool_arg_type_e::Path;
  case Id::BoolBinary_nt: return bool_arg_type_e::Path;
  case Id::BoolBinary_ot: return bool_arg_type_e::Path;
  case Id::BoolBinary_eq: return bool_arg_type_e::Int;
  case Id::BoolBinary_ne: return bool_arg_type_e::Int;
  case Id::BoolBinary_gt: return bool_arg_type_e::Int;
  case Id::BoolBinary_ge: return bool_arg_type_e::Int;
  case Id::BoolBinary_lt: return bool_arg_type_e::Int;
  case Id::BoolBinary_le: return bool_arg_type_e::Int;
  case Id::BoolBinary_Equal: return bool_arg_type_e::Str;
  case Id::BoolBinary_DEqual: return bool_arg_type_e::Str;
  case Id::BoolBinary_NEqual: return bool_arg_type_e::Str;
  }
  FAIL(kShouldNotGetHere);
}

Kind GetKind(id_kind_asdl::Id_t id) {
  // relies on "switch lowering"
  switch (id) {

  case Id::Word_Compound: return Kind::Word;
  case Id::Arith_Semi: return Kind::Arith;
  case Id::Arith_Comma: return Kind::Arith;
  case Id::Arith_Plus: return Kind::Arith;
  case Id::Arith_Minus: return Kind::Arith;
  case Id::Arith_Star: return Kind::Arith;
  case Id::Arith_Slash: return Kind::Arith;
  case Id::Arith_Percent: return Kind::Arith;
  case Id::Arith_DPlus: return Kind::Arith;
  case Id::Arith_DMinus: return Kind::Arith;
  case Id::Arith_DStar: return Kind::Arith;
  case Id::Arith_LParen: return Kind::Arith;
  case Id::Arith_RParen: return Kind::Arith;
  case Id::Arith_LBracket: return Kind::Arith;
  case Id::Arith_RBracket: return Kind::Arith;
  case Id::Arith_RBrace: return Kind::Arith;
  case Id::Arith_QMark: return Kind::Arith;
  case Id::Arith_Colon: return Kind::Arith;
  case Id::Arith_LessEqual: return Kind::Arith;
  case Id::Arith_Less: return Kind::Arith;
  case Id::Arith_GreatEqual: return Kind::Arith;
  case Id::Arith_Great: return Kind::Arith;
  case Id::Arith_DEqual: return Kind::Arith;
  case Id::Arith_NEqual: return Kind::Arith;
  case Id::Arith_DAmp: return Kind::Arith;
  case Id::Arith_DPipe: return Kind::Arith;
  case Id::Arith_Bang: return Kind::Arith;
  case Id::Arith_DGreat: return Kind::Arith;
  case Id::Arith_DLess: return Kind::Arith;
  case Id::Arith_Amp: return Kind::Arith;
  case Id::Arith_Pipe: return Kind::Arith;
  case Id::Arith_Caret: return Kind::Arith;
  case Id::Arith_Tilde: return Kind::Arith;
  case Id::Arith_Equal: return Kind::Arith;
  case Id::Arith_PlusEqual: return Kind::Arith;
  case Id::Arith_MinusEqual: return Kind::Arith;
  case Id::Arith_StarEqual: return Kind::Arith;
  case Id::Arith_SlashEqual: return Kind::Arith;
  case Id::Arith_PercentEqual: return Kind::Arith;
  case Id::Arith_DGreatEqual: return Kind::Arith;
  case Id::Arith_DLessEqual: return Kind::Arith;
  case Id::Arith_AmpEqual: return Kind::Arith;
  case Id::Arith_CaretEqual: return Kind::Arith;
  case Id::Arith_PipeEqual: return Kind::Arith;
  case Id::Eof_Real: return Kind::Eof;
  case Id::Eof_RParen: return Kind::Eof;
  case Id::Eof_Backtick: return Kind::Eof;
  case Id::Undefined_Tok: return Kind::Undefined;
  case Id::Unknown_Tok: return Kind::Unknown;
  case Id::Unknown_Backslash: return Kind::Unknown;
  case Id::Unknown_DEqual: return Kind::Unknown;
  case Id::Eol_Tok: return Kind::Eol;
  case Id::Ignored_LineCont: return Kind::Ignored;
  case Id::Ignored_Space: return Kind::Ignored;
  case Id::Ignored_Comment: return Kind::Ignored;
  case Id::Ignored_Newline: return Kind::Ignored;
  case Id::WS_Space: return Kind::WS;
  case Id::Lit_Chars: return Kind::Lit;
  case Id::Lit_CharsWithoutPrefix: return Kind::Lit;
  case Id::Lit_VarLike: return Kind::Lit;
  case Id::Lit_ArrayLhsOpen: return Kind::Lit;
  case Id::Lit_ArrayLhsClose: return Kind::Lit;
  case Id::Lit_Splice: return Kind::Lit;
  case Id::Lit_AtLBracket: return Kind::Lit;
  case Id::Lit_AtLBraceDot: return Kind::Lit;
  case Id::Lit_Other: return Kind::Lit;
  case Id::Lit_EscapedChar: return Kind::Lit;
  case Id::Lit_LBracket: return Kind::Lit;
  case Id::Lit_RBracket: return Kind::Lit;
  case Id::Lit_Star: return Kind::Lit;
  case Id::Lit_QMark: return Kind::Lit;
  case Id::Lit_LBrace: return Kind::Lit;
  case Id::Lit_RBrace: return Kind::Lit;
  case Id::Lit_Comma: return Kind::Lit;
  case Id::Lit_Equals: return Kind::Lit;
  case Id::Lit_Dollar: return Kind::Lit;
  case Id::Lit_DRightBracket: return Kind::Lit;
  case Id::Lit_Tilde: return Kind::Lit;
  case Id::Lit_Pound: return Kind::Lit;
  case Id::Lit_TPound: return Kind::Lit;
  case Id::Lit_TDot: return Kind::Lit;
  case Id::Lit_Slash: return Kind::Lit;
  case Id::Lit_Percent: return Kind::Lit;
  case Id::Lit_Colon: return Kind::Lit;
  case Id::Lit_Digits: return Kind::Lit;
  case Id::Lit_At: return Kind::Lit;
  case Id::Lit_ArithVarLike: return Kind::Lit;
  case Id::Lit_BadBackslash: return Kind::Lit;
  case Id::Lit_CompDummy: return Kind::Lit;
  case Id::Backtick_Right: return Kind::Backtick;
  case Id::Backtick_Quoted: return Kind::Backtick;
  case Id::Backtick_DoubleQuote: return Kind::Backtick;
  case Id::Backtick_Other: return Kind::Backtick;
  case Id::History_Op: return Kind::History;
  case Id::History_Num: return Kind::History;
  case Id::History_Search: return Kind::History;
  case Id::History_Other: return Kind::History;
  case Id::Op_Newline: return Kind::Op;
  case Id::Op_Amp: return Kind::Op;
  case Id::Op_Pipe: return Kind::Op;
  case Id::Op_PipeAmp: return Kind::Op;
  case Id::Op_DAmp: return Kind::Op;
  case Id::Op_DPipe: return Kind::Op;
  case Id::Op_Semi: return Kind::Op;
  case Id::Op_DSemi: return Kind::Op;
  case Id::Op_SemiAmp: return Kind::Op;
  case Id::Op_DSemiAmp: return Kind::Op;
  case Id::Op_LParen: return Kind::Op;
  case Id::Op_RParen: return Kind::Op;
  case Id::Op_DLeftParen: return Kind::Op;
  case Id::Op_DRightParen: return Kind::Op;
  case Id::Op_Less: return Kind::Op;
  case Id::Op_Great: return Kind::Op;
  case Id::Op_Bang: return Kind::Op;
  case Id::Op_LBracket: return Kind::Op;
  case Id::Op_RBracket: return Kind::Op;
  case Id::Op_LBrace: return Kind::Op;
  case Id::Op_RBrace: return Kind::Op;
  case Id::Expr_Reserved: return Kind::Expr;
  case Id::Expr_Symbol: return Kind::Expr;
  case Id::Expr_Name: return Kind::Expr;
  case Id::Expr_DecInt: return Kind::Expr;
  case Id::Expr_BinInt: return Kind::Expr;
  case Id::Expr_OctInt: return Kind::Expr;
  case Id::Expr_HexInt: return Kind::Expr;
  case Id::Expr_Float: return Kind::Expr;
  case Id::Expr_Bang: return Kind::Expr;
  case Id::Expr_Dot: return Kind::Expr;
  case Id::Expr_DDot: return Kind::Expr;
  case Id::Expr_Colon: return Kind::Expr;
  case Id::Expr_RArrow: return Kind::Expr;
  case Id::Expr_RDArrow: return Kind::Expr;
  case Id::Expr_DSlash: return Kind::Expr;
  case Id::Expr_TEqual: return Kind::Expr;
  case Id::Expr_NotDEqual: return Kind::Expr;
  case Id::Expr_TildeDEqual: return Kind::Expr;
  case Id::Expr_At: return Kind::Expr;
  case Id::Expr_DoubleAt: return Kind::Expr;
  case Id::Expr_Ellipsis: return Kind::Expr;
  case Id::Expr_Dollar: return Kind::Expr;
  case Id::Expr_NotTilde: return Kind::Expr;
  case Id::Expr_DTilde: return Kind::Expr;
  case Id::Expr_NotDTilde: return Kind::Expr;
  case Id::Expr_DStarEqual: return Kind::Expr;
  case Id::Expr_DSlashEqual: return Kind::Expr;
  case Id::Expr_CastedDummy: return Kind::Expr;
  case Id::Expr_Null: return Kind::Expr;
  case Id::Expr_True: return Kind::Expr;
  case Id::Expr_False: return Kind::Expr;
  case Id::Expr_And: return Kind::Expr;
  case Id::Expr_Or: return Kind::Expr;
  case Id::Expr_Not: return Kind::Expr;
  case Id::Expr_For: return Kind::Expr;
  case Id::Expr_Is: return Kind::Expr;
  case Id::Expr_In: return Kind::Expr;
  case Id::Expr_If: return Kind::Expr;
  case Id::Expr_Else: return Kind::Expr;
  case Id::Expr_Func: return Kind::Expr;
  case Id::Expr_Capture: return Kind::Expr;
  case Id::Expr_As: return Kind::Expr;
  case Id::Char_OneChar: return Kind::Char;
  case Id::Char_Stop: return Kind::Char;
  case Id::Char_Hex: return Kind::Char;
  case Id::Char_YHex: return Kind::Char;
  case Id::Char_Octal3: return Kind::Char;
  case Id::Char_Octal4: return Kind::Char;
  case Id::Char_Unicode4: return Kind::Char;
  case Id::Char_SurrogatePair: return Kind::Char;
  case Id::Char_Unicode8: return Kind::Char;
  case Id::Char_UBraced: return Kind::Char;
  case Id::Char_Pound: return Kind::Char;
  case Id::Char_AsciiControl: return Kind::Char;
  case Id::BashRegex_LParen: return Kind::BashRegex;
  case Id::BashRegex_AllowedInParens: return Kind::BashRegex;
  case Id::Eggex_Start: return Kind::Eggex;
  case Id::Eggex_End: return Kind::Eggex;
  case Id::Eggex_Dot: return Kind::Eggex;
  case Id::Redir_Less: return Kind::Redir;
  case Id::Redir_Great: return Kind::Redir;
  case Id::Redir_DLess: return Kind::Redir;
  case Id::Redir_TLess: return Kind::Redir;
  case Id::Redir_DGreat: return Kind::Redir;
  case Id::Redir_GreatAnd: return Kind::Redir;
  case Id::Redir_LessAnd: return Kind::Redir;
  case Id::Redir_DLessDash: return Kind::Redir;
  case Id::Redir_LessGreat: return Kind::Redir;
  case Id::Redir_Clobber: return Kind::Redir;
  case Id::Redir_AndGreat: return Kind::Redir;
  case Id::Redir_AndDGreat: return Kind::Redir;
  case Id::Left_DoubleQuote: return Kind::Left;
  case Id::Left_JDoubleQuote: return Kind::Left;
  case Id::Left_SingleQuote: return Kind::Left;
  case Id::Left_DollarSingleQuote: return Kind::Left;
  case Id::Left_RSingleQuote: return Kind::Left;
  case Id::Left_USingleQuote: return Kind::Left;
  case Id::Left_BSingleQuote: return Kind::Left;
  case Id::Left_TDoubleQuote: return Kind::Left;
  case Id::Left_DollarTDoubleQuote: return Kind::Left;
  case Id::Left_TSingleQuote: return Kind::Left;
  case Id::Left_RTSingleQuote: return Kind::Left;
  case Id::Left_UTSingleQuote: return Kind::Left;
  case Id::Left_BTSingleQuote: return Kind::Left;
  case Id::Left_Backtick: return Kind::Left;
  case Id::Left_DollarParen: return Kind::Left;
  case Id::Left_DollarBrace: return Kind::Left;
  case Id::Left_DollarBraceZsh: return Kind::Left;
  case Id::Left_DollarDParen: return Kind::Left;
  case Id::Left_DollarBracket: return Kind::Left;
  case Id::Left_DollarDoubleQuote: return Kind::Left;
  case Id::Left_ProcSubIn: return Kind::Left;
  case Id::Left_ProcSubOut: return Kind::Left;
  case Id::Left_AtParen: return Kind::Left;
  case Id::Left_CaretParen: return Kind::Left;
  case Id::Left_CaretBracket: return Kind::Left;
  case Id::Left_CaretBrace: return Kind::Left;
  case Id::Left_CaretDoubleQuote: return Kind::Left;
  case Id::Left_ColonPipe: return Kind::Left;
  case Id::Left_PercentParen: return Kind::Left;
  case Id::Right_DoubleQuote: return Kind::Right;
  case Id::Right_SingleQuote: return Kind::Right;
  case Id::Right_Backtick: return Kind::Right;
  case Id::Right_DollarBrace: return Kind::Right;
  case Id::Right_DollarDParen: return Kind::Right;
  case Id::Right_DollarDoubleQuote: return Kind::Right;
  case Id::Right_DollarSingleQuote: return Kind::Right;
  case Id::Right_Subshell: return Kind::Right;
  case Id::Right_ShFunction: return Kind::Right;
  case Id::Right_CasePat: return Kind::Right;
  case Id::Right_ShArrayLiteral: return Kind::Right;
  case Id::Right_ExtGlob: return Kind::Right;
  case Id::Right_BashRegexGroup: return Kind::Right;
  case Id::Right_BlockLiteral: return Kind::Right;
  case Id::ExtGlob_Comma: return Kind::ExtGlob;
  case Id::ExtGlob_At: return Kind::ExtGlob;
  case Id::ExtGlob_Star: return Kind::ExtGlob;
  case Id::ExtGlob_Plus: return Kind::ExtGlob;
  case Id::ExtGlob_QMark: return Kind::ExtGlob;
  case Id::ExtGlob_Bang: return Kind::ExtGlob;
  case Id::VSub_DollarName: return Kind::VSub;
  case Id::VSub_Name: return Kind::VSub;
  case Id::VSub_Number: return Kind::VSub;
  case Id::VSub_Bang: return Kind::VSub;
  case Id::VSub_At: return Kind::VSub;
  case Id::VSub_Pound: return Kind::VSub;
  case Id::VSub_Dollar: return Kind::VSub;
  case Id::VSub_Star: return Kind::VSub;
  case Id::VSub_Hyphen: return Kind::VSub;
  case Id::VSub_QMark: return Kind::VSub;
  case Id::VSub_Dot: return Kind::VSub;
  case Id::VTest_ColonHyphen: return Kind::VTest;
  case Id::VTest_Hyphen: return Kind::VTest;
  case Id::VTest_ColonEquals: return Kind::VTest;
  case Id::VTest_Equals: return Kind::VTest;
  case Id::VTest_ColonQMark: return Kind::VTest;
  case Id::VTest_QMark: return Kind::VTest;
  case Id::VTest_ColonPlus: return Kind::VTest;
  case Id::VTest_Plus: return Kind::VTest;
  case Id::VOp0_Q: return Kind::VOp0;
  case Id::VOp0_E: return Kind::VOp0;
  case Id::VOp0_P: return Kind::VOp0;
  case Id::VOp0_A: return Kind::VOp0;
  case Id::VOp0_a: return Kind::VOp0;
  case Id::VOp1_Percent: return Kind::VOp1;
  case Id::VOp1_DPercent: return Kind::VOp1;
  case Id::VOp1_Pound: return Kind::VOp1;
  case Id::VOp1_DPound: return Kind::VOp1;
  case Id::VOp1_Caret: return Kind::VOp1;
  case Id::VOp1_DCaret: return Kind::VOp1;
  case Id::VOp1_Comma: return Kind::VOp1;
  case Id::VOp1_DComma: return Kind::VOp1;
  case Id::VOpYsh_Pipe: return Kind::VOpYsh;
  case Id::VOpYsh_Space: return Kind::VOpYsh;
  case Id::VOp2_Slash: return Kind::VOp2;
  case Id::VOp2_Colon: return Kind::VOp2;
  case Id::VOp2_LBracket: return Kind::VOp2;
  case Id::VOp2_RBracket: return Kind::VOp2;
  case Id::VOp3_At: return Kind::VOp3;
  case Id::VOp3_Star: return Kind::VOp3;
  case Id::Node_PostDPlus: return Kind::Node;
  case Id::Node_PostDMinus: return Kind::Node;
  case Id::Node_UnaryPlus: return Kind::Node;
  case Id::Node_UnaryMinus: return Kind::Node;
  case Id::Node_NotIn: return Kind::Node;
  case Id::Node_IsNot: return Kind::Node;
  case Id::KW_DLeftBracket: return Kind::KW;
  case Id::KW_Bang: return Kind::KW;
  case Id::KW_For: return Kind::KW;
  case Id::KW_While: return Kind::KW;
  case Id::KW_Until: return Kind::KW;
  case Id::KW_Do: return Kind::KW;
  case Id::KW_Done: return Kind::KW;
  case Id::KW_In: return Kind::KW;
  case Id::KW_Case: return Kind::KW;
  case Id::KW_Esac: return Kind::KW;
  case Id::KW_If: return Kind::KW;
  case Id::KW_Fi: return Kind::KW;
  case Id::KW_Then: return Kind::KW;
  case Id::KW_Else: return Kind::KW;
  case Id::KW_Elif: return Kind::KW;
  case Id::KW_Function: return Kind::KW;
  case Id::KW_Time: return Kind::KW;
  case Id::KW_Const: return Kind::KW;
  case Id::KW_Var: return Kind::KW;
  case Id::KW_SetVar: return Kind::KW;
  case Id::KW_SetGlobal: return Kind::KW;
  case Id::KW_Call: return Kind::KW;
  case Id::KW_Proc: return Kind::KW;
  case Id::KW_Typed: return Kind::KW;
  case Id::KW_Func: return Kind::KW;
  case Id::ControlFlow_Break: return Kind::ControlFlow;
  case Id::ControlFlow_Continue: return Kind::ControlFlow;
  case Id::ControlFlow_Return: return Kind::ControlFlow;
  case Id::ControlFlow_Exit: return Kind::ControlFlow;
  case Id::LookAhead_FuncParens: return Kind::LookAhead;
  case Id::Glob_LBracket: return Kind::Glob;
  case Id::Glob_RBracket: return Kind::Glob;
  case Id::Glob_Star: return Kind::Glob;
  case Id::Glob_QMark: return Kind::Glob;
  case Id::Glob_Bang: return Kind::Glob;
  case Id::Glob_Caret: return Kind::Glob;
  case Id::Glob_EscapedChar: return Kind::Glob;
  case Id::Glob_BadBackslash: return Kind::Glob;
  case Id::Glob_CleanLiterals: return Kind::Glob;
  case Id::Glob_OtherLiteral: return Kind::Glob;
  case Id::Format_EscapedPercent: return Kind::Format;
  case Id::Format_Percent: return Kind::Format;
  case Id::Format_Flag: return Kind::Format;
  case Id::Format_Num: return Kind::Format;
  case Id::Format_Dot: return Kind::Format;
  case Id::Format_Type: return Kind::Format;
  case Id::Format_Star: return Kind::Format;
  case Id::Format_Time: return Kind::Format;
  case Id::Format_Zero: return Kind::Format;
  case Id::PS_Subst: return Kind::PS;
  case Id::PS_Octal3: return Kind::PS;
  case Id::PS_LBrace: return Kind::PS;
  case Id::PS_RBrace: return Kind::PS;
  case Id::PS_Literals: return Kind::PS;
  case Id::PS_BadBackslash: return Kind::PS;
  case Id::Range_Int: return Kind::Range;
  case Id::Range_Char: return Kind::Range;
  case Id::Range_Dots: return Kind::Range;
  case Id::Range_Other: return Kind::Range;
  case Id::J8_LBracket: return Kind::J8;
  case Id::J8_RBracket: return Kind::J8;
  case Id::J8_LBrace: return Kind::J8;
  case Id::J8_RBrace: return Kind::J8;
  case Id::J8_Comma: return Kind::J8;
  case Id::J8_Colon: return Kind::J8;
  case Id::J8_Null: return Kind::J8;
  case Id::J8_Bool: return Kind::J8;
  case Id::J8_Int: return Kind::J8;
  case Id::J8_Float: return Kind::J8;
  case Id::J8_String: return Kind::J8;
  case Id::J8_Identifier: return Kind::J8;
  case Id::J8_Newline: return Kind::J8;
  case Id::J8_Tab: return Kind::J8;
  case Id::J8_LParen: return Kind::J8;
  case Id::J8_RParen: return Kind::J8;
  case Id::J8_Operator: return Kind::J8;
  case Id::BoolUnary_z: return Kind::BoolUnary;
  case Id::BoolUnary_n: return Kind::BoolUnary;
  case Id::BoolUnary_o: return Kind::BoolUnary;
  case Id::BoolUnary_t: return Kind::BoolUnary;
  case Id::BoolUnary_v: return Kind::BoolUnary;
  case Id::BoolUnary_R: return Kind::BoolUnary;
  case Id::BoolUnary_a: return Kind::BoolUnary;
  case Id::BoolUnary_b: return Kind::BoolUnary;
  case Id::BoolUnary_c: return Kind::BoolUnary;
  case Id::BoolUnary_d: return Kind::BoolUnary;
  case Id::BoolUnary_e: return Kind::BoolUnary;
  case Id::BoolUnary_f: return Kind::BoolUnary;
  case Id::BoolUnary_g: return Kind::BoolUnary;
  case Id::BoolUnary_h: return Kind::BoolUnary;
  case Id::BoolUnary_k: return Kind::BoolUnary;
  case Id::BoolUnary_L: return Kind::BoolUnary;
  case Id::BoolUnary_p: return Kind::BoolUnary;
  case Id::BoolUnary_r: return Kind::BoolUnary;
  case Id::BoolUnary_s: return Kind::BoolUnary;
  case Id::BoolUnary_S: return Kind::BoolUnary;
  case Id::BoolUnary_u: return Kind::BoolUnary;
  case Id::BoolUnary_w: return Kind::BoolUnary;
  case Id::BoolUnary_x: return Kind::BoolUnary;
  case Id::BoolUnary_O: return Kind::BoolUnary;
  case Id::BoolUnary_G: return Kind::BoolUnary;
  case Id::BoolUnary_N: return Kind::BoolUnary;
  case Id::BoolBinary_GlobEqual: return Kind::BoolBinary;
  case Id::BoolBinary_GlobDEqual: return Kind::BoolBinary;
  case Id::BoolBinary_GlobNEqual: return Kind::BoolBinary;
  case Id::BoolBinary_EqualTilde: return Kind::BoolBinary;
  case Id::BoolBinary_ef: return Kind::BoolBinary;
  case Id::BoolBinary_nt: return Kind::BoolBinary;
  case Id::BoolBinary_ot: return Kind::BoolBinary;
  case Id::BoolBinary_eq: return Kind::BoolBinary;
  case Id::BoolBinary_ne: return Kind::BoolBinary;
  case Id::BoolBinary_gt: return Kind::BoolBinary;
  case Id::BoolBinary_ge: return Kind::BoolBinary;
  case Id::BoolBinary_lt: return Kind::BoolBinary;
  case Id::BoolBinary_le: return Kind::BoolBinary;
  case Id::BoolBinary_Equal: return Kind::BoolBinary;
  case Id::BoolBinary_DEqual: return Kind::BoolBinary;
  case Id::BoolBinary_NEqual: return Kind::BoolBinary;
  }
  FAIL(kShouldNotGetHere);
}

types_asdl::opt_group_t OptionGroupNum(BigStr* s) {
  int length = len(s);
  if (length == 0) return 0;  // consts.NO_INDEX

  const char* data = s->data_;
  switch (data[0]) {
  case 'o':
    if (length == 7 && memcmp("oil:all", data, 7) == 0) return 3;
    if (length == 11 && memcmp("oil:upgrade", data, 11) == 0) return 2;
    break;
  case 's':
    if (length == 10 && memcmp("strict:all", data, 10) == 0) return 1;
    break;
  case 'y':
    if (length == 7 && memcmp("ysh:all", data, 7) == 0) return 3;
    if (length == 11 && memcmp("ysh:upgrade", data, 11) == 0) return 2;
    break;
  }

  return 0;  // consts.NO_INDEX
}

option_asdl::option_t OptionNum(BigStr* s) {
  int length = len(s);
  if (length == 0) return 0;  // consts.NO_INDEX

  const char* data = s->data_;
  switch (data[0]) {
  case '_':
    if (length == 18 && memcmp("_allow_command_sub", data, 18) == 0) return 25;
    if (length == 18 && memcmp("_allow_process_sub", data, 18) == 0) return 26;
    if (length == 13 && memcmp("_running_trap", data, 13) == 0) return 29;
    if (length == 12 && memcmp("_running_hay", data, 12) == 0) return 30;
    if (length == 14 && memcmp("_no_debug_trap", data, 14) == 0) return 31;
    if (length == 12 && memcmp("_no_err_trap", data, 12) == 0) return 32;
    break;
  case 'a':
    if (length == 17 && memcmp("assoc_expand_once", data, 17) == 0) return 78;
    if (length == 6 && memcmp("autocd", data, 6) == 0) return 79;
    break;
  case 'c':
    if (length == 19 && memcmp("command_sub_errexit", data, 19) == 0) return 54;
    if (length == 7 && memcmp("cmdhist", data, 7) == 0) return 77;
    if (length == 11 && memcmp("cdable_vars", data, 11) == 0) return 80;
    if (length == 7 && memcmp("cdspell", data, 7) == 0) return 81;
    if (length == 9 && memcmp("checkhash", data, 9) == 0) return 82;
    if (length == 9 && memcmp("checkjobs", data, 9) == 0) return 83;
    if (length == 12 && memcmp("checkwinsize", data, 12) == 0) return 84;
    if (length == 18 && memcmp("complete_fullquote", data, 18) == 0) return 85;
    break;
  case 'd':
    if (length == 13 && memcmp("dynamic_scope", data, 13) == 0) return 27;
    if (length == 8 && memcmp("dashglob", data, 8) == 0) return 53;
    if (length == 9 && memcmp("direxpand", data, 9) == 0) return 86;
    if (length == 8 && memcmp("dirspell", data, 8) == 0) return 87;
    if (length == 7 && memcmp("dotglob", data, 7) == 0) return 88;
    break;
  case 'e':
    if (length == 7 && memcmp("errexit", data, 7) == 0) return 1;
    if (length == 8 && memcmp("errtrace", data, 8) == 0) return 12;
    if (length == 5 && memcmp("emacs", data, 5) == 0) return 15;
    if (length == 7 && memcmp("extglob", data, 7) == 0) return 19;
    if (length == 17 && memcmp("eval_unsafe_arith", data, 17) == 0) return 22;
    if (length == 14 && memcmp("expand_aliases", data, 14) == 0) return 72;
    if (length == 8 && memcmp("execfail", data, 8) == 0) return 89;
    if (length == 8 && memcmp("extdebug", data, 8) == 0) return 90;
    if (length == 8 && memcmp("extquote", data, 8) == 0) return 91;
    break;
  case 'f':
    if (length == 8 && memcmp("failglob", data, 8) == 0) return 18;
    if (length == 13 && memcmp("force_fignore", data, 13) == 0) return 92;
    break;
  case 'g':
    if (length == 15 && memcmp("globasciiranges", data, 15) == 0) return 93;
    if (length == 8 && memcmp("globstar", data, 8) == 0) return 94;
    if (length == 10 && memcmp("gnu_errfmt", data, 10) == 0) return 95;
    break;
  case 'h':
    if (length == 7 && memcmp("hashall", data, 7) == 0) return 17;
    if (length == 10 && memcmp("histappend", data, 10) == 0) return 75;
    if (length == 12 && memcmp("hostcomplete", data, 12) == 0) return 76;
    if (length == 10 && memcmp("histreedit", data, 10) == 0) return 96;
    if (length == 10 && memcmp("histverify", data, 10) == 0) return 97;
    if (length == 9 && memcmp("huponexit", data, 9) == 0) return 98;
    break;
  case 'i':
    if (length == 15 && memcmp("inherit_errexit", data, 15) == 0) return 4;
    if (length == 11 && memcmp("interactive", data, 11) == 0) return 16;
    if (length == 21 && memcmp("ignore_flags_not_impl", data, 21) == 0) return 23;
    if (length == 20 && memcmp("ignore_opts_not_impl", data, 20) == 0) return 24;
    if (length == 20 && memcmp("interactive_comments", data, 20) == 0) return 99;
    break;
  case 'l':
    if (length == 8 && memcmp("lastpipe", data, 8) == 0) return 73;
    if (length == 7 && memcmp("lithist", data, 7) == 0) return 100;
    if (length == 16 && memcmp("localvar_inherit", data, 16) == 0) return 101;
    if (length == 14 && memcmp("localvar_unset", data, 14) == 0) return 102;
    if (length == 11 && memcmp("login_shell", data, 11) == 0) return 103;
    break;
  case 'm':
    if (length == 8 && memcmp("mailwarn", data, 8) == 0) return 104;
    break;
  case 'n':
    if (length == 7 && memcmp("nounset", data, 7) == 0) return 2;
    if (length == 8 && memcmp("nullglob", data, 8) == 0) return 5;
    if (length == 6 && memcmp("noexec", data, 6) == 0) return 7;
    if (length == 6 && memcmp("noglob", data, 6) == 0) return 10;
    if (length == 9 && memcmp("noclobber", data, 9) == 0) return 11;
    if (length == 11 && memcmp("nocasematch", data, 11) == 0) return 20;
    if (length == 11 && memcmp("no_copy_env", data, 11) == 0) return 21;
    if (length == 23 && memcmp("no_empty_cmd_completion", data, 23) == 0) return 105;
    if (length == 10 && memcmp("nocaseglob", data, 10) == 0) return 106;
    break;
  case 'p':
    if (length == 8 && memcmp("pipefail", data, 8) == 0) return 3;
    if (length == 5 && memcmp("posix", data, 5) == 0) return 13;
    if (length == 8 && memcmp("parse_at", data, 8) == 0) return 43;
    if (length == 10 && memcmp("parse_proc", data, 10) == 0) return 44;
    if (length == 10 && memcmp("parse_func", data, 10) == 0) return 45;
    if (length == 11 && memcmp("parse_brace", data, 11) == 0) return 46;
    if (length == 13 && memcmp("parse_bracket", data, 13) == 0) return 47;
    if (length == 12 && memcmp("parse_equals", data, 12) == 0) return 48;
    if (length == 11 && memcmp("parse_paren", data, 11) == 0) return 49;
    if (length == 16 && memcmp("parse_ysh_string", data, 16) == 0) return 50;
    if (length == 18 && memcmp("parse_triple_quote", data, 18) == 0) return 51;
    if (length == 16 && memcmp("process_sub_fail", data, 16) == 0) return 55;
    if (length == 12 && memcmp("parse_at_all", data, 12) == 0) return 60;
    if (length == 15 && memcmp("parse_backslash", data, 15) == 0) return 61;
    if (length == 15 && memcmp("parse_backticks", data, 15) == 0) return 62;
    if (length == 12 && memcmp("parse_dollar", data, 12) == 0) return 63;
    if (length == 13 && memcmp("parse_ignored", data, 13) == 0) return 64;
    if (length == 14 && memcmp("parse_sh_arith", data, 14) == 0) return 65;
    if (length == 12 && memcmp("parse_dparen", data, 12) == 0) return 66;
    if (length == 14 && memcmp("parse_dbracket", data, 14) == 0) return 67;
    if (length == 15 && memcmp("parse_bare_word", data, 15) == 0) return 68;
    if (length == 8 && memcmp("progcomp", data, 8) == 0) return 74;
    if (length == 14 && memcmp("progcomp_alias", data, 14) == 0) return 107;
    if (length == 10 && memcmp("promptvars", data, 10) == 0) return 108;
    break;
  case 'r':
    if (length == 15 && memcmp("redefine_module", data, 15) == 0) return 28;
    if (length == 18 && memcmp("redefine_proc_func", data, 18) == 0) return 59;
    if (length == 16 && memcmp("restricted_shell", data, 16) == 0) return 109;
    break;
  case 's':
    if (length == 18 && memcmp("strict_parse_slice", data, 18) == 0) return 33;
    if (length == 11 && memcmp("strict_argv", data, 11) == 0) return 34;
    if (length == 12 && memcmp("strict_arith", data, 12) == 0) return 35;
    if (length == 12 && memcmp("strict_array", data, 12) == 0) return 36;
    if (length == 19 && memcmp("strict_control_flow", data, 19) == 0) return 37;
    if (length == 14 && memcmp("strict_errexit", data, 14) == 0) return 38;
    if (length == 14 && memcmp("strict_nameref", data, 14) == 0) return 39;
    if (length == 16 && memcmp("strict_word_eval", data, 16) == 0) return 40;
    if (length == 12 && memcmp("strict_tilde", data, 12) == 0) return 41;
    if (length == 11 && memcmp("strict_glob", data, 11) == 0) return 42;
    if (length == 16 && memcmp("simple_word_eval", data, 16) == 0) return 52;
    if (length == 17 && memcmp("sigpipe_status_ok", data, 17) == 0) return 58;
    if (length == 11 && memcmp("simple_echo", data, 11) == 0) return 69;
    if (length == 19 && memcmp("simple_eval_builtin", data, 19) == 0) return 70;
    if (length == 19 && memcmp("simple_test_builtin", data, 19) == 0) return 71;
    if (length == 13 && memcmp("shift_verbose", data, 13) == 0) return 110;
    if (length == 10 && memcmp("sourcepath", data, 10) == 0) return 111;
    break;
  case 'v':
    if (length == 15 && memcmp("verbose_errexit", data, 15) == 0) return 6;
    if (length == 7 && memcmp("verbose", data, 7) == 0) return 9;
    if (length == 2 && memcmp("vi", data, 2) == 0) return 14;
    break;
  case 'x':
    if (length == 6 && memcmp("xtrace", data, 6) == 0) return 8;
    if (length == 11 && memcmp("xtrace_rich", data, 11) == 0) return 56;
    if (length == 14 && memcmp("xtrace_details", data, 14) == 0) return 57;
    if (length == 8 && memcmp("xpg_echo", data, 8) == 0) return 112;
    break;
  }

  return 0;  // consts.NO_INDEX
}

builtin_t LookupNormalBuiltin(BigStr* s) {
  int length = len(s);
  if (length == 0) return 0;  // consts.NO_INDEX

  const char* data = s->data_;
  switch (data[0]) {
  case '[':
    if (length == 1 && memcmp("[", data, 1) == 0) return 70;
    break;
  case '_':
    if (length == 5 && memcmp("__cat", data, 5) == 0) return 74;
    break;
  case 'a':
    if (length == 6 && memcmp("assert", data, 6) == 0) return 18;
    if (length == 5 && memcmp("alias", data, 5) == 0) return 49;
    if (length == 6 && memcmp("append", data, 6) == 0) return 52;
    break;
  case 'b':
    if (length == 2 && memcmp("bg", data, 2) == 0) return 35;
    if (length == 7 && memcmp("builtin", data, 7) == 0) return 43;
    if (length == 4 && memcmp("bind", data, 4) == 0) return 51;
    if (length == 10 && memcmp("boolstatus", data, 10) == 0) return 68;
    break;
  case 'c':
    if (length == 2 && memcmp("cd", data, 2) == 0) return 24;
    if (length == 8 && memcmp("complete", data, 8) == 0) return 37;
    if (length == 7 && memcmp("compgen", data, 7) == 0) return 38;
    if (length == 7 && memcmp("compopt", data, 7) == 0) return 39;
    if (length == 10 && memcmp("compadjust", data, 10) == 0) return 40;
    if (length == 10 && memcmp("compexport", data, 10) == 0) return 41;
    if (length == 7 && memcmp("command", data, 7) == 0) return 44;
    if (length == 3 && memcmp("ctx", data, 3) == 0) return 66;
    break;
  case 'd':
    if (length == 4 && memcmp("dirs", data, 4) == 0) return 27;
    break;
  case 'e':
    if (length == 4 && memcmp("echo", data, 4) == 0) return 20;
    if (length == 5 && memcmp("error", data, 5) == 0) return 60;
    break;
  case 'f':
    if (length == 5 && memcmp("false", data, 5) == 0) return 16;
    if (length == 2 && memcmp("fg", data, 2) == 0) return 34;
    if (length == 6 && memcmp("failed", data, 6) == 0) return 61;
    if (length == 4 && memcmp("fork", data, 4) == 0) return 62;
    if (length == 8 && memcmp("forkwait", data, 8) == 0) return 63;
    if (length == 5 && memcmp("fopen", data, 5) == 0) return 64;
    break;
  case 'g':
    if (length == 7 && memcmp("getopts", data, 7) == 0) return 42;
    break;
  case 'h':
    if (length == 4 && memcmp("hash", data, 4) == 0) return 46;
    if (length == 4 && memcmp("help", data, 4) == 0) return 47;
    if (length == 7 && memcmp("history", data, 7) == 0) return 48;
    if (length == 3 && memcmp("hay", data, 3) == 0) return 57;
    if (length == 7 && memcmp("haynode", data, 7) == 0) return 58;
    break;
  case 'i':
    if (length == 7 && memcmp("is-main", data, 7) == 0) return 73;
    break;
  case 'j':
    if (length == 4 && memcmp("jobs", data, 4) == 0) return 33;
    if (length == 4 && memcmp("json", data, 4) == 0) return 54;
    if (length == 5 && memcmp("json8", data, 5) == 0) return 55;
    break;
  case 'm':
    if (length == 7 && memcmp("mapfile", data, 7) == 0) return 22;
    break;
  case 'p':
    if (length == 6 && memcmp("printf", data, 6) == 0) return 21;
    if (length == 5 && memcmp("pushd", data, 5) == 0) return 25;
    if (length == 4 && memcmp("popd", data, 4) == 0) return 26;
    if (length == 3 && memcmp("pwd", data, 3) == 0) return 28;
    if (length == 2 && memcmp("pp", data, 2) == 0) return 56;
    if (length == 14 && memcmp("push-registers", data, 14) == 0) return 71;
    break;
  case 'r':
    if (length == 4 && memcmp("read", data, 4) == 0) return 19;
    if (length == 9 && memcmp("readarray", data, 9) == 0) return 23;
    if (length == 7 && memcmp("runproc", data, 7) == 0) return 67;
    break;
  case 's':
    if (length == 6 && memcmp("source", data, 6) == 0) return 29;
    if (length == 5 && memcmp("shopt", data, 5) == 0) return 36;
    if (length == 5 && memcmp("shvar", data, 5) == 0) return 65;
    if (length == 12 && memcmp("source-guard", data, 12) == 0) return 72;
    break;
  case 't':
    if (length == 4 && memcmp("true", data, 4) == 0) return 15;
    if (length == 3 && memcmp("try", data, 3) == 0) return 17;
    if (length == 4 && memcmp("type", data, 4) == 0) return 45;
    if (length == 4 && memcmp("test", data, 4) == 0) return 69;
    break;
  case 'u':
    if (length == 5 && memcmp("umask", data, 5) == 0) return 30;
    if (length == 6 && memcmp("ulimit", data, 6) == 0) return 31;
    if (length == 7 && memcmp("unalias", data, 7) == 0) return 50;
    if (length == 3 && memcmp("use", data, 3) == 0) return 59;
    break;
  case 'w':
    if (length == 4 && memcmp("wait", data, 4) == 0) return 32;
    if (length == 5 && memcmp("write", data, 5) == 0) return 53;
    break;
  }

  return 0;  // consts.NO_INDEX
}

builtin_t LookupAssignBuiltin(BigStr* s) {
  int length = len(s);
  if (length == 0) return 0;  // consts.NO_INDEX

  const char* data = s->data_;
  switch (data[0]) {
  case 'd':
    if (length == 7 && memcmp("declare", data, 7) == 0) return 12;
    break;
  case 'e':
    if (length == 6 && memcmp("export", data, 6) == 0) return 14;
    break;
  case 'l':
    if (length == 5 && memcmp("local", data, 5) == 0) return 11;
    break;
  case 'r':
    if (length == 8 && memcmp("readonly", data, 8) == 0) return 10;
    break;
  case 't':
    if (length == 7 && memcmp("typeset", data, 7) == 0) return 13;
    break;
  }

  return 0;  // consts.NO_INDEX
}

builtin_t LookupSpecialBuiltin(BigStr* s) {
  int length = len(s);
  if (length == 0) return 0;  // consts.NO_INDEX

  const char* data = s->data_;
  switch (data[0]) {
  case '.':
    if (length == 1 && memcmp(".", data, 1) == 0) return 2;
    break;
  case ':':
    if (length == 1 && memcmp(":", data, 1) == 0) return 1;
    break;
  case 'e':
    if (length == 4 && memcmp("exec", data, 4) == 0) return 3;
    if (length == 4 && memcmp("eval", data, 4) == 0) return 4;
    break;
  case 's':
    if (length == 3 && memcmp("set", data, 3) == 0) return 5;
    if (length == 5 && memcmp("shift", data, 5) == 0) return 6;
    break;
  case 't':
    if (length == 5 && memcmp("times", data, 5) == 0) return 7;
    if (length == 4 && memcmp("trap", data, 4) == 0) return 8;
    break;
  case 'u':
    if (length == 5 && memcmp("unset", data, 5) == 0) return 9;
    break;
  }

  return 0;  // consts.NO_INDEX
}

bool IsControlFlow(BigStr* s) {
  int length = len(s);
  if (length == 0) return false;

  const char* data = s->data_;
  switch (data[0]) {
  case 'b':
    if (length == 5 && memcmp("break", data, 5) == 0) return true;
    break;
  case 'c':
    if (length == 8 && memcmp("continue", data, 8) == 0) return true;
    break;
  case 'e':
    if (length == 4 && memcmp("exit", data, 4) == 0) return true;
    break;
  case 'r':
    if (length == 6 && memcmp("return", data, 6) == 0) return true;
    break;
  }

  return false;
}

GLOBAL_STR(kControlFlowName_310, "break");
GLOBAL_STR(kControlFlowName_311, "continue");
GLOBAL_STR(kControlFlowName_312, "return");
GLOBAL_STR(kControlFlowName_313, "exit");

BigStr* ControlFlowName(int i) {
  switch (i) {
  case 310:
    return kControlFlowName_310;
    break;
  case 311:
    return kControlFlowName_311;
    break;
  case 312:
    return kControlFlowName_312;
    break;
  case 313:
    return kControlFlowName_313;
    break;
  default:
    FAIL(kShouldNotGetHere);
  }
}

bool IsKeyword(BigStr* s) {
  int length = len(s);
  if (length == 0) return false;

  const char* data = s->data_;
  switch (data[0]) {
  case '!':
    if (length == 1 && memcmp("!", data, 1) == 0) return true;
    break;
  case '=':
    if (length == 1 && memcmp("=", data, 1) == 0) return true;
    break;
  case '[':
    if (length == 2 && memcmp("[[", data, 2) == 0) return true;
    break;
  case ']':
    if (length == 2 && memcmp("]]", data, 2) == 0) return true;
    break;
  case 'c':
    if (length == 4 && memcmp("case", data, 4) == 0) return true;
    if (length == 5 && memcmp("const", data, 5) == 0) return true;
    if (length == 4 && memcmp("call", data, 4) == 0) return true;
    break;
  case 'd':
    if (length == 2 && memcmp("do", data, 2) == 0) return true;
    if (length == 4 && memcmp("done", data, 4) == 0) return true;
    break;
  case 'e':
    if (length == 4 && memcmp("esac", data, 4) == 0) return true;
    if (length == 4 && memcmp("else", data, 4) == 0) return true;
    if (length == 4 && memcmp("elif", data, 4) == 0) return true;
    break;
  case 'f':
    if (length == 3 && memcmp("for", data, 3) == 0) return true;
    if (length == 2 && memcmp("fi", data, 2) == 0) return true;
    if (length == 8 && memcmp("function", data, 8) == 0) return true;
    if (length == 4 && memcmp("func", data, 4) == 0) return true;
    break;
  case 'i':
    if (length == 2 && memcmp("in", data, 2) == 0) return true;
    if (length == 2 && memcmp("if", data, 2) == 0) return true;
    break;
  case 'p':
    if (length == 4 && memcmp("proc", data, 4) == 0) return true;
    break;
  case 's':
    if (length == 6 && memcmp("setvar", data, 6) == 0) return true;
    if (length == 9 && memcmp("setglobal", data, 9) == 0) return true;
    break;
  case 't':
    if (length == 4 && memcmp("then", data, 4) == 0) return true;
    if (length == 4 && memcmp("time", data, 4) == 0) return true;
    if (length == 5 && memcmp("typed", data, 5) == 0) return true;
    break;
  case 'u':
    if (length == 5 && memcmp("until", data, 5) == 0) return true;
    break;
  case 'v':
    if (length == 3 && memcmp("var", data, 3) == 0) return true;
    break;
  case 'w':
    if (length == 5 && memcmp("while", data, 5) == 0) return true;
    break;
  case '{':
    if (length == 1 && memcmp("{", data, 1) == 0) return true;
    break;
  case '}':
    if (length == 1 && memcmp("}", data, 1) == 0) return true;
    break;
  }

  return false;
}

BigStr* LookupCharC(BigStr* c) {
  assert(len(c) == 1);

  char ch = c->data_[0];

  // TODO-intern: return value
  switch (ch) {
  case '\"':
    return StrFromC("\"", 1);
    break;
  case '\'':
    return StrFromC("\'", 1);
    break;
  case '/':
    return StrFromC("/", 1);
    break;
  case '0':
    return StrFromC("\0", 1);
    break;
  case 'E':
    return StrFromC("\x1b", 1);
    break;
  case '\\':
    return StrFromC("\\", 1);
    break;
  case 'a':
    return StrFromC("\a", 1);
    break;
  case 'b':
    return StrFromC("\b", 1);
    break;
  case 'e':
    return StrFromC("\x1b", 1);
    break;
  case 'f':
    return StrFromC("\f", 1);
    break;
  case 'n':
    return StrFromC("\n", 1);
    break;
  case 'r':
    return StrFromC("\r", 1);
    break;
  case 't':
    return StrFromC("\t", 1);
    break;
  case 'v':
    return StrFromC("\v", 1);
    break;
  default:
    assert(0);

  }
}
BigStr* LookupCharPrompt(BigStr* c) {
  assert(len(c) == 1);

  char ch = c->data_[0];

  // TODO-intern: return value
  switch (ch) {
  case '\\':
    return StrFromC("\\", 1);
    break;
  case 'a':
    return StrFromC("\a", 1);
    break;
  case 'e':
    return StrFromC("\x1b", 1);
    break;
  case 'n':
    return StrFromC("\n", 1);
    break;
  case 'r':
    return StrFromC("\r", 1);
    break;
  default:
    return nullptr;

  }
}
GLOBAL_STR(kOptionName_1, "errexit");
GLOBAL_STR(kOptionName_2, "nounset");
GLOBAL_STR(kOptionName_3, "pipefail");
GLOBAL_STR(kOptionName_4, "inherit_errexit");
GLOBAL_STR(kOptionName_5, "nullglob");
GLOBAL_STR(kOptionName_6, "verbose_errexit");
GLOBAL_STR(kOptionName_7, "noexec");
GLOBAL_STR(kOptionName_8, "xtrace");
GLOBAL_STR(kOptionName_9, "verbose");
GLOBAL_STR(kOptionName_10, "noglob");
GLOBAL_STR(kOptionName_11, "noclobber");
GLOBAL_STR(kOptionName_12, "errtrace");
GLOBAL_STR(kOptionName_13, "posix");
GLOBAL_STR(kOptionName_14, "vi");
GLOBAL_STR(kOptionName_15, "emacs");
GLOBAL_STR(kOptionName_16, "interactive");
GLOBAL_STR(kOptionName_17, "hashall");
GLOBAL_STR(kOptionName_18, "failglob");
GLOBAL_STR(kOptionName_19, "extglob");
GLOBAL_STR(kOptionName_20, "nocasematch");
GLOBAL_STR(kOptionName_21, "no_copy_env");
GLOBAL_STR(kOptionName_22, "eval_unsafe_arith");
GLOBAL_STR(kOptionName_23, "ignore_flags_not_impl");
GLOBAL_STR(kOptionName_24, "ignore_opts_not_impl");
GLOBAL_STR(kOptionName_25, "_allow_command_sub");
GLOBAL_STR(kOptionName_26, "_allow_process_sub");
GLOBAL_STR(kOptionName_27, "dynamic_scope");
GLOBAL_STR(kOptionName_28, "redefine_module");
GLOBAL_STR(kOptionName_29, "_running_trap");
GLOBAL_STR(kOptionName_30, "_running_hay");
GLOBAL_STR(kOptionName_31, "_no_debug_trap");
GLOBAL_STR(kOptionName_32, "_no_err_trap");
GLOBAL_STR(kOptionName_33, "strict_parse_slice");
GLOBAL_STR(kOptionName_34, "strict_argv");
GLOBAL_STR(kOptionName_35, "strict_arith");
GLOBAL_STR(kOptionName_36, "strict_array");
GLOBAL_STR(kOptionName_37, "strict_control_flow");
GLOBAL_STR(kOptionName_38, "strict_errexit");
GLOBAL_STR(kOptionName_39, "strict_nameref");
GLOBAL_STR(kOptionName_40, "strict_word_eval");
GLOBAL_STR(kOptionName_41, "strict_tilde");
GLOBAL_STR(kOptionName_42, "strict_glob");
GLOBAL_STR(kOptionName_43, "parse_at");
GLOBAL_STR(kOptionName_44, "parse_proc");
GLOBAL_STR(kOptionName_45, "parse_func");
GLOBAL_STR(kOptionName_46, "parse_brace");
GLOBAL_STR(kOptionName_47, "parse_bracket");
GLOBAL_STR(kOptionName_48, "parse_equals");
GLOBAL_STR(kOptionName_49, "parse_paren");
GLOBAL_STR(kOptionName_50, "parse_ysh_string");
GLOBAL_STR(kOptionName_51, "parse_triple_quote");
GLOBAL_STR(kOptionName_52, "simple_word_eval");
GLOBAL_STR(kOptionName_53, "dashglob");
GLOBAL_STR(kOptionName_54, "command_sub_errexit");
GLOBAL_STR(kOptionName_55, "process_sub_fail");
GLOBAL_STR(kOptionName_56, "xtrace_rich");
GLOBAL_STR(kOptionName_57, "xtrace_details");
GLOBAL_STR(kOptionName_58, "sigpipe_status_ok");
GLOBAL_STR(kOptionName_59, "redefine_proc_func");
GLOBAL_STR(kOptionName_60, "parse_at_all");
GLOBAL_STR(kOptionName_61, "parse_backslash");
GLOBAL_STR(kOptionName_62, "parse_backticks");
GLOBAL_STR(kOptionName_63, "parse_dollar");
GLOBAL_STR(kOptionName_64, "parse_ignored");
GLOBAL_STR(kOptionName_65, "parse_sh_arith");
GLOBAL_STR(kOptionName_66, "parse_dparen");
GLOBAL_STR(kOptionName_67, "parse_dbracket");
GLOBAL_STR(kOptionName_68, "parse_bare_word");
GLOBAL_STR(kOptionName_69, "simple_echo");
GLOBAL_STR(kOptionName_70, "simple_eval_builtin");
GLOBAL_STR(kOptionName_71, "simple_test_builtin");
GLOBAL_STR(kOptionName_72, "expand_aliases");
GLOBAL_STR(kOptionName_73, "lastpipe");
GLOBAL_STR(kOptionName_74, "progcomp");
GLOBAL_STR(kOptionName_75, "histappend");
GLOBAL_STR(kOptionName_76, "hostcomplete");
GLOBAL_STR(kOptionName_77, "cmdhist");
GLOBAL_STR(kOptionName_78, "assoc_expand_once");
GLOBAL_STR(kOptionName_79, "autocd");
GLOBAL_STR(kOptionName_80, "cdable_vars");
GLOBAL_STR(kOptionName_81, "cdspell");
GLOBAL_STR(kOptionName_82, "checkhash");
GLOBAL_STR(kOptionName_83, "checkjobs");
GLOBAL_STR(kOptionName_84, "checkwinsize");
GLOBAL_STR(kOptionName_85, "complete_fullquote");
GLOBAL_STR(kOptionName_86, "direxpand");
GLOBAL_STR(kOptionName_87, "dirspell");
GLOBAL_STR(kOptionName_88, "dotglob");
GLOBAL_STR(kOptionName_89, "execfail");
GLOBAL_STR(kOptionName_90, "extdebug");
GLOBAL_STR(kOptionName_91, "extquote");
GLOBAL_STR(kOptionName_92, "force_fignore");
GLOBAL_STR(kOptionName_93, "globasciiranges");
GLOBAL_STR(kOptionName_94, "globstar");
GLOBAL_STR(kOptionName_95, "gnu_errfmt");
GLOBAL_STR(kOptionName_96, "histreedit");
GLOBAL_STR(kOptionName_97, "histverify");
GLOBAL_STR(kOptionName_98, "huponexit");
GLOBAL_STR(kOptionName_99, "interactive_comments");
GLOBAL_STR(kOptionName_100, "lithist");
GLOBAL_STR(kOptionName_101, "localvar_inherit");
GLOBAL_STR(kOptionName_102, "localvar_unset");
GLOBAL_STR(kOptionName_103, "login_shell");
GLOBAL_STR(kOptionName_104, "mailwarn");
GLOBAL_STR(kOptionName_105, "no_empty_cmd_completion");
GLOBAL_STR(kOptionName_106, "nocaseglob");
GLOBAL_STR(kOptionName_107, "progcomp_alias");
GLOBAL_STR(kOptionName_108, "promptvars");
GLOBAL_STR(kOptionName_109, "restricted_shell");
GLOBAL_STR(kOptionName_110, "shift_verbose");
GLOBAL_STR(kOptionName_111, "sourcepath");
GLOBAL_STR(kOptionName_112, "xpg_echo");

BigStr* OptionName(int i) {
  switch (i) {
  case 1:
    return kOptionName_1;
    break;
  case 2:
    return kOptionName_2;
    break;
  case 3:
    return kOptionName_3;
    break;
  case 4:
    return kOptionName_4;
    break;
  case 5:
    return kOptionName_5;
    break;
  case 6:
    return kOptionName_6;
    break;
  case 7:
    return kOptionName_7;
    break;
  case 8:
    return kOptionName_8;
    break;
  case 9:
    return kOptionName_9;
    break;
  case 10:
    return kOptionName_10;
    break;
  case 11:
    return kOptionName_11;
    break;
  case 12:
    return kOptionName_12;
    break;
  case 13:
    return kOptionName_13;
    break;
  case 14:
    return kOptionName_14;
    break;
  case 15:
    return kOptionName_15;
    break;
  case 16:
    return kOptionName_16;
    break;
  case 17:
    return kOptionName_17;
    break;
  case 18:
    return kOptionName_18;
    break;
  case 19:
    return kOptionName_19;
    break;
  case 20:
    return kOptionName_20;
    break;
  case 21:
    return kOptionName_21;
    break;
  case 22:
    return kOptionName_22;
    break;
  case 23:
    return kOptionName_23;
    break;
  case 24:
    return kOptionName_24;
    break;
  case 25:
    return kOptionName_25;
    break;
  case 26:
    return kOptionName_26;
    break;
  case 27:
    return kOptionName_27;
    break;
  case 28:
    return kOptionName_28;
    break;
  case 29:
    return kOptionName_29;
    break;
  case 30:
    return kOptionName_30;
    break;
  case 31:
    return kOptionName_31;
    break;
  case 32:
    return kOptionName_32;
    break;
  case 33:
    return kOptionName_33;
    break;
  case 34:
    return kOptionName_34;
    break;
  case 35:
    return kOptionName_35;
    break;
  case 36:
    return kOptionName_36;
    break;
  case 37:
    return kOptionName_37;
    break;
  case 38:
    return kOptionName_38;
    break;
  case 39:
    return kOptionName_39;
    break;
  case 40:
    return kOptionName_40;
    break;
  case 41:
    return kOptionName_41;
    break;
  case 42:
    return kOptionName_42;
    break;
  case 43:
    return kOptionName_43;
    break;
  case 44:
    return kOptionName_44;
    break;
  case 45:
    return kOptionName_45;
    break;
  case 46:
    return kOptionName_46;
    break;
  case 47:
    return kOptionName_47;
    break;
  case 48:
    return kOptionName_48;
    break;
  case 49:
    return kOptionName_49;
    break;
  case 50:
    return kOptionName_50;
    break;
  case 51:
    return kOptionName_51;
    break;
  case 52:
    return kOptionName_52;
    break;
  case 53:
    return kOptionName_53;
    break;
  case 54:
    return kOptionName_54;
    break;
  case 55:
    return kOptionName_55;
    break;
  case 56:
    return kOptionName_56;
    break;
  case 57:
    return kOptionName_57;
    break;
  case 58:
    return kOptionName_58;
    break;
  case 59:
    return kOptionName_59;
    break;
  case 60:
    return kOptionName_60;
    break;
  case 61:
    return kOptionName_61;
    break;
  case 62:
    return kOptionName_62;
    break;
  case 63:
    return kOptionName_63;
    break;
  case 64:
    return kOptionName_64;
    break;
  case 65:
    return kOptionName_65;
    break;
  case 66:
    return kOptionName_66;
    break;
  case 67:
    return kOptionName_67;
    break;
  case 68:
    return kOptionName_68;
    break;
  case 69:
    return kOptionName_69;
    break;
  case 70:
    return kOptionName_70;
    break;
  case 71:
    return kOptionName_71;
    break;
  case 72:
    return kOptionName_72;
    break;
  case 73:
    return kOptionName_73;
    break;
  case 74:
    return kOptionName_74;
    break;
  case 75:
    return kOptionName_75;
    break;
  case 76:
    return kOptionName_76;
    break;
  case 77:
    return kOptionName_77;
    break;
  case 78:
    return kOptionName_78;
    break;
  case 79:
    return kOptionName_79;
    break;
  case 80:
    return kOptionName_80;
    break;
  case 81:
    return kOptionName_81;
    break;
  case 82:
    return kOptionName_82;
    break;
  case 83:
    return kOptionName_83;
    break;
  case 84:
    return kOptionName_84;
    break;
  case 85:
    return kOptionName_85;
    break;
  case 86:
    return kOptionName_86;
    break;
  case 87:
    return kOptionName_87;
    break;
  case 88:
    return kOptionName_88;
    break;
  case 89:
    return kOptionName_89;
    break;
  case 90:
    return kOptionName_90;
    break;
  case 91:
    return kOptionName_91;
    break;
  case 92:
    return kOptionName_92;
    break;
  case 93:
    return kOptionName_93;
    break;
  case 94:
    return kOptionName_94;
    break;
  case 95:
    return kOptionName_95;
    break;
  case 96:
    return kOptionName_96;
    break;
  case 97:
    return kOptionName_97;
    break;
  case 98:
    return kOptionName_98;
    break;
  case 99:
    return kOptionName_99;
    break;
  case 100:
    return kOptionName_100;
    break;
  case 101:
    return kOptionName_101;
    break;
  case 102:
    return kOptionName_102;
    break;
  case 103:
    return kOptionName_103;
    break;
  case 104:
    return kOptionName_104;
    break;
  case 105:
    return kOptionName_105;
    break;
  case 106:
    return kOptionName_106;
    break;
  case 107:
    return kOptionName_107;
    break;
  case 108:
    return kOptionName_108;
    break;
  case 109:
    return kOptionName_109;
    break;
  case 110:
    return kOptionName_110;
    break;
  case 111:
    return kOptionName_111;
    break;
  case 112:
    return kOptionName_112;
    break;
  default:
    FAIL(kShouldNotGetHere);
  }
}

int _IFS_EDGE[8][6] = { 
  {        -1,         -1,         -1,         -1,         -1,         -1 },
  {        -1,         -1,         -1,         -1,         -1,         -1 },
  {        -1,  (1<<16)|5,  (4<<16)|3,  (6<<16)|5,  (7<<16)|5,  (8<<16)|5 },
  {        -1,  (3<<16)|5,  (4<<16)|5,  (6<<16)|2,  (7<<16)|2,  (8<<16)|5 },
  {        -1,  (5<<16)|5,  (4<<16)|3,  (6<<16)|2,  (6<<16)|2,  (8<<16)|2 },
  {        -1,  (5<<16)|5,  (4<<16)|3,  (6<<16)|2,  (7<<16)|2,  (8<<16)|2 },
  {        -1,  (3<<16)|1,  (4<<16)|1,  (6<<16)|5,  (7<<16)|1,  (8<<16)|1 },
  {        -1,  (6<<16)|4,  (6<<16)|4,  (6<<16)|4,  (6<<16)|4,  (8<<16)|4 },

};

// Note: all of these are integers, e.g. state_i, emit_i, char_kind_i
using runtime_asdl::state_t;
using runtime_asdl::emit_t;
using runtime_asdl::char_kind_t;

Tuple2<state_t, emit_t> IfsEdge(state_t state, runtime_asdl::char_kind_t ch) {
  int cell = _IFS_EDGE[state][ch];
  state_t new_state = cell >> 16;
  emit_t emit = cell & 0xFFFF;
  return Tuple2<state_t, emit_t>(new_state, emit);
}

GLOBAL_STR(kBUILTIN_NAMES_0, ":");
GLOBAL_STR(kBUILTIN_NAMES_1, ".");
GLOBAL_STR(kBUILTIN_NAMES_2, "exec");
GLOBAL_STR(kBUILTIN_NAMES_3, "eval");
GLOBAL_STR(kBUILTIN_NAMES_4, "set");
GLOBAL_STR(kBUILTIN_NAMES_5, "shift");
GLOBAL_STR(kBUILTIN_NAMES_6, "times");
GLOBAL_STR(kBUILTIN_NAMES_7, "trap");
GLOBAL_STR(kBUILTIN_NAMES_8, "unset");
GLOBAL_STR(kBUILTIN_NAMES_9, "readonly");
GLOBAL_STR(kBUILTIN_NAMES_10, "local");
GLOBAL_STR(kBUILTIN_NAMES_11, "declare");
GLOBAL_STR(kBUILTIN_NAMES_12, "typeset");
GLOBAL_STR(kBUILTIN_NAMES_13, "export");
GLOBAL_STR(kBUILTIN_NAMES_14, "true");
GLOBAL_STR(kBUILTIN_NAMES_15, "false");
GLOBAL_STR(kBUILTIN_NAMES_16, "try");
GLOBAL_STR(kBUILTIN_NAMES_17, "assert");
GLOBAL_STR(kBUILTIN_NAMES_18, "read");
GLOBAL_STR(kBUILTIN_NAMES_19, "echo");
GLOBAL_STR(kBUILTIN_NAMES_20, "printf");
GLOBAL_STR(kBUILTIN_NAMES_21, "mapfile");
GLOBAL_STR(kBUILTIN_NAMES_22, "readarray");
GLOBAL_STR(kBUILTIN_NAMES_23, "cd");
GLOBAL_STR(kBUILTIN_NAMES_24, "pushd");
GLOBAL_STR(kBUILTIN_NAMES_25, "popd");
GLOBAL_STR(kBUILTIN_NAMES_26, "dirs");
GLOBAL_STR(kBUILTIN_NAMES_27, "pwd");
GLOBAL_STR(kBUILTIN_NAMES_28, "source");
GLOBAL_STR(kBUILTIN_NAMES_29, "umask");
GLOBAL_STR(kBUILTIN_NAMES_30, "ulimit");
GLOBAL_STR(kBUILTIN_NAMES_31, "wait");
GLOBAL_STR(kBUILTIN_NAMES_32, "jobs");
GLOBAL_STR(kBUILTIN_NAMES_33, "fg");
GLOBAL_STR(kBUILTIN_NAMES_34, "bg");
GLOBAL_STR(kBUILTIN_NAMES_35, "shopt");
GLOBAL_STR(kBUILTIN_NAMES_36, "complete");
GLOBAL_STR(kBUILTIN_NAMES_37, "compgen");
GLOBAL_STR(kBUILTIN_NAMES_38, "compopt");
GLOBAL_STR(kBUILTIN_NAMES_39, "compadjust");
GLOBAL_STR(kBUILTIN_NAMES_40, "compexport");
GLOBAL_STR(kBUILTIN_NAMES_41, "getopts");
GLOBAL_STR(kBUILTIN_NAMES_42, "builtin");
GLOBAL_STR(kBUILTIN_NAMES_43, "command");
GLOBAL_STR(kBUILTIN_NAMES_44, "type");
GLOBAL_STR(kBUILTIN_NAMES_45, "hash");
GLOBAL_STR(kBUILTIN_NAMES_46, "help");
GLOBAL_STR(kBUILTIN_NAMES_47, "history");
GLOBAL_STR(kBUILTIN_NAMES_48, "alias");
GLOBAL_STR(kBUILTIN_NAMES_49, "unalias");
GLOBAL_STR(kBUILTIN_NAMES_50, "bind");
GLOBAL_STR(kBUILTIN_NAMES_51, "append");
GLOBAL_STR(kBUILTIN_NAMES_52, "write");
GLOBAL_STR(kBUILTIN_NAMES_53, "json");
GLOBAL_STR(kBUILTIN_NAMES_54, "json8");
GLOBAL_STR(kBUILTIN_NAMES_55, "pp");
GLOBAL_STR(kBUILTIN_NAMES_56, "hay");
GLOBAL_STR(kBUILTIN_NAMES_57, "haynode");
GLOBAL_STR(kBUILTIN_NAMES_58, "use");
GLOBAL_STR(kBUILTIN_NAMES_59, "error");
GLOBAL_STR(kBUILTIN_NAMES_60, "failed");
GLOBAL_STR(kBUILTIN_NAMES_61, "fork");
GLOBAL_STR(kBUILTIN_NAMES_62, "forkwait");
GLOBAL_STR(kBUILTIN_NAMES_63, "fopen");
GLOBAL_STR(kBUILTIN_NAMES_64, "shvar");
GLOBAL_STR(kBUILTIN_NAMES_65, "ctx");
GLOBAL_STR(kBUILTIN_NAMES_66, "runproc");
GLOBAL_STR(kBUILTIN_NAMES_67, "boolstatus");
GLOBAL_STR(kBUILTIN_NAMES_68, "test");
GLOBAL_STR(kBUILTIN_NAMES_69, "[");
GLOBAL_STR(kBUILTIN_NAMES_70, "push-registers");
GLOBAL_STR(kBUILTIN_NAMES_71, "source-guard");
GLOBAL_STR(kBUILTIN_NAMES_72, "is-main");
GLOBAL_STR(kBUILTIN_NAMES_73, "__cat");
GLOBAL_LIST(BUILTIN_NAMES, BigStr*, 74, {kBUILTIN_NAMES_0 COMMA kBUILTIN_NAMES_1 COMMA kBUILTIN_NAMES_2 COMMA kBUILTIN_NAMES_3 COMMA kBUILTIN_NAMES_4 COMMA kBUILTIN_NAMES_5 COMMA kBUILTIN_NAMES_6 COMMA kBUILTIN_NAMES_7 COMMA kBUILTIN_NAMES_8 COMMA kBUILTIN_NAMES_9 COMMA kBUILTIN_NAMES_10 COMMA kBUILTIN_NAMES_11 COMMA kBUILTIN_NAMES_12 COMMA kBUILTIN_NAMES_13 COMMA kBUILTIN_NAMES_14 COMMA kBUILTIN_NAMES_15 COMMA kBUILTIN_NAMES_16 COMMA kBUILTIN_NAMES_17 COMMA kBUILTIN_NAMES_18 COMMA kBUILTIN_NAMES_19 COMMA kBUILTIN_NAMES_20 COMMA kBUILTIN_NAMES_21 COMMA kBUILTIN_NAMES_22 COMMA kBUILTIN_NAMES_23 COMMA kBUILTIN_NAMES_24 COMMA kBUILTIN_NAMES_25 COMMA kBUILTIN_NAMES_26 COMMA kBUILTIN_NAMES_27 COMMA kBUILTIN_NAMES_28 COMMA kBUILTIN_NAMES_29 COMMA kBUILTIN_NAMES_30 COMMA kBUILTIN_NAMES_31 COMMA kBUILTIN_NAMES_32 COMMA kBUILTIN_NAMES_33 COMMA kBUILTIN_NAMES_34 COMMA kBUILTIN_NAMES_35 COMMA kBUILTIN_NAMES_36 COMMA kBUILTIN_NAMES_37 COMMA kBUILTIN_NAMES_38 COMMA kBUILTIN_NAMES_39 COMMA kBUILTIN_NAMES_40 COMMA kBUILTIN_NAMES_41 COMMA kBUILTIN_NAMES_42 COMMA kBUILTIN_NAMES_43 COMMA kBUILTIN_NAMES_44 COMMA kBUILTIN_NAMES_45 COMMA kBUILTIN_NAMES_46 COMMA kBUILTIN_NAMES_47 COMMA kBUILTIN_NAMES_48 COMMA kBUILTIN_NAMES_49 COMMA kBUILTIN_NAMES_50 COMMA kBUILTIN_NAMES_51 COMMA kBUILTIN_NAMES_52 COMMA kBUILTIN_NAMES_53 COMMA kBUILTIN_NAMES_54 COMMA kBUILTIN_NAMES_55 COMMA kBUILTIN_NAMES_56 COMMA kBUILTIN_NAMES_57 COMMA kBUILTIN_NAMES_58 COMMA kBUILTIN_NAMES_59 COMMA kBUILTIN_NAMES_60 COMMA kBUILTIN_NAMES_61 COMMA kBUILTIN_NAMES_62 COMMA kBUILTIN_NAMES_63 COMMA kBUILTIN_NAMES_64 COMMA kBUILTIN_NAMES_65 COMMA kBUILTIN_NAMES_66 COMMA kBUILTIN_NAMES_67 COMMA kBUILTIN_NAMES_68 COMMA kBUILTIN_NAMES_69 COMMA kBUILTIN_NAMES_70 COMMA kBUILTIN_NAMES_71 COMMA kBUILTIN_NAMES_72 COMMA kBUILTIN_NAMES_73});

GLOBAL_STR(kOSH_KEYWORD_NAMES_0, "[[");
GLOBAL_STR(kOSH_KEYWORD_NAMES_1, "!");
GLOBAL_STR(kOSH_KEYWORD_NAMES_2, "for");
GLOBAL_STR(kOSH_KEYWORD_NAMES_3, "while");
GLOBAL_STR(kOSH_KEYWORD_NAMES_4, "until");
GLOBAL_STR(kOSH_KEYWORD_NAMES_5, "do");
GLOBAL_STR(kOSH_KEYWORD_NAMES_6, "done");
GLOBAL_STR(kOSH_KEYWORD_NAMES_7, "in");
GLOBAL_STR(kOSH_KEYWORD_NAMES_8, "case");
GLOBAL_STR(kOSH_KEYWORD_NAMES_9, "esac");
GLOBAL_STR(kOSH_KEYWORD_NAMES_10, "if");
GLOBAL_STR(kOSH_KEYWORD_NAMES_11, "fi");
GLOBAL_STR(kOSH_KEYWORD_NAMES_12, "then");
GLOBAL_STR(kOSH_KEYWORD_NAMES_13, "else");
GLOBAL_STR(kOSH_KEYWORD_NAMES_14, "elif");
GLOBAL_STR(kOSH_KEYWORD_NAMES_15, "function");
GLOBAL_STR(kOSH_KEYWORD_NAMES_16, "time");
GLOBAL_STR(kOSH_KEYWORD_NAMES_17, "const");
GLOBAL_STR(kOSH_KEYWORD_NAMES_18, "var");
GLOBAL_STR(kOSH_KEYWORD_NAMES_19, "setvar");
GLOBAL_STR(kOSH_KEYWORD_NAMES_20, "setglobal");
GLOBAL_STR(kOSH_KEYWORD_NAMES_21, "call");
GLOBAL_STR(kOSH_KEYWORD_NAMES_22, "proc");
GLOBAL_STR(kOSH_KEYWORD_NAMES_23, "typed");
GLOBAL_STR(kOSH_KEYWORD_NAMES_24, "func");
GLOBAL_STR(kOSH_KEYWORD_NAMES_25, "{");
GLOBAL_STR(kOSH_KEYWORD_NAMES_26, "=");
GLOBAL_STR(kOSH_KEYWORD_NAMES_27, "}");
GLOBAL_STR(kOSH_KEYWORD_NAMES_28, "]]");
GLOBAL_LIST(OSH_KEYWORD_NAMES, BigStr*, 29, {kOSH_KEYWORD_NAMES_0 COMMA kOSH_KEYWORD_NAMES_1 COMMA kOSH_KEYWORD_NAMES_2 COMMA kOSH_KEYWORD_NAMES_3 COMMA kOSH_KEYWORD_NAMES_4 COMMA kOSH_KEYWORD_NAMES_5 COMMA kOSH_KEYWORD_NAMES_6 COMMA kOSH_KEYWORD_NAMES_7 COMMA kOSH_KEYWORD_NAMES_8 COMMA kOSH_KEYWORD_NAMES_9 COMMA kOSH_KEYWORD_NAMES_10 COMMA kOSH_KEYWORD_NAMES_11 COMMA kOSH_KEYWORD_NAMES_12 COMMA kOSH_KEYWORD_NAMES_13 COMMA kOSH_KEYWORD_NAMES_14 COMMA kOSH_KEYWORD_NAMES_15 COMMA kOSH_KEYWORD_NAMES_16 COMMA kOSH_KEYWORD_NAMES_17 COMMA kOSH_KEYWORD_NAMES_18 COMMA kOSH_KEYWORD_NAMES_19 COMMA kOSH_KEYWORD_NAMES_20 COMMA kOSH_KEYWORD_NAMES_21 COMMA kOSH_KEYWORD_NAMES_22 COMMA kOSH_KEYWORD_NAMES_23 COMMA kOSH_KEYWORD_NAMES_24 COMMA kOSH_KEYWORD_NAMES_25 COMMA kOSH_KEYWORD_NAMES_26 COMMA kOSH_KEYWORD_NAMES_27 COMMA kOSH_KEYWORD_NAMES_28});

GLOBAL_STR(kSET_OPTION_NAMES_0, "emacs");
GLOBAL_STR(kSET_OPTION_NAMES_1, "errexit");
GLOBAL_STR(kSET_OPTION_NAMES_2, "errtrace");
GLOBAL_STR(kSET_OPTION_NAMES_3, "hashall");
GLOBAL_STR(kSET_OPTION_NAMES_4, "noclobber");
GLOBAL_STR(kSET_OPTION_NAMES_5, "noexec");
GLOBAL_STR(kSET_OPTION_NAMES_6, "noglob");
GLOBAL_STR(kSET_OPTION_NAMES_7, "nounset");
GLOBAL_STR(kSET_OPTION_NAMES_8, "pipefail");
GLOBAL_STR(kSET_OPTION_NAMES_9, "posix");
GLOBAL_STR(kSET_OPTION_NAMES_10, "verbose");
GLOBAL_STR(kSET_OPTION_NAMES_11, "vi");
GLOBAL_STR(kSET_OPTION_NAMES_12, "xtrace");
GLOBAL_LIST(SET_OPTION_NAMES, BigStr*, 13, {kSET_OPTION_NAMES_0 COMMA kSET_OPTION_NAMES_1 COMMA kSET_OPTION_NAMES_2 COMMA kSET_OPTION_NAMES_3 COMMA kSET_OPTION_NAMES_4 COMMA kSET_OPTION_NAMES_5 COMMA kSET_OPTION_NAMES_6 COMMA kSET_OPTION_NAMES_7 COMMA kSET_OPTION_NAMES_8 COMMA kSET_OPTION_NAMES_9 COMMA kSET_OPTION_NAMES_10 COMMA kSET_OPTION_NAMES_11 COMMA kSET_OPTION_NAMES_12});

GLOBAL_STR(kSHOPT_OPTION_NAMES_0, "_allow_command_sub");
GLOBAL_STR(kSHOPT_OPTION_NAMES_1, "_allow_process_sub");
GLOBAL_STR(kSHOPT_OPTION_NAMES_2, "_no_debug_trap");
GLOBAL_STR(kSHOPT_OPTION_NAMES_3, "_no_err_trap");
GLOBAL_STR(kSHOPT_OPTION_NAMES_4, "_running_hay");
GLOBAL_STR(kSHOPT_OPTION_NAMES_5, "_running_trap");
GLOBAL_STR(kSHOPT_OPTION_NAMES_6, "assoc_expand_once");
GLOBAL_STR(kSHOPT_OPTION_NAMES_7, "autocd");
GLOBAL_STR(kSHOPT_OPTION_NAMES_8, "cdable_vars");
GLOBAL_STR(kSHOPT_OPTION_NAMES_9, "cdspell");
GLOBAL_STR(kSHOPT_OPTION_NAMES_10, "checkhash");
GLOBAL_STR(kSHOPT_OPTION_NAMES_11, "checkjobs");
GLOBAL_STR(kSHOPT_OPTION_NAMES_12, "checkwinsize");
GLOBAL_STR(kSHOPT_OPTION_NAMES_13, "cmdhist");
GLOBAL_STR(kSHOPT_OPTION_NAMES_14, "command_sub_errexit");
GLOBAL_STR(kSHOPT_OPTION_NAMES_15, "complete_fullquote");
GLOBAL_STR(kSHOPT_OPTION_NAMES_16, "dashglob");
GLOBAL_STR(kSHOPT_OPTION_NAMES_17, "direxpand");
GLOBAL_STR(kSHOPT_OPTION_NAMES_18, "dirspell");
GLOBAL_STR(kSHOPT_OPTION_NAMES_19, "dotglob");
GLOBAL_STR(kSHOPT_OPTION_NAMES_20, "dynamic_scope");
GLOBAL_STR(kSHOPT_OPTION_NAMES_21, "eval_unsafe_arith");
GLOBAL_STR(kSHOPT_OPTION_NAMES_22, "execfail");
GLOBAL_STR(kSHOPT_OPTION_NAMES_23, "expand_aliases");
GLOBAL_STR(kSHOPT_OPTION_NAMES_24, "extdebug");
GLOBAL_STR(kSHOPT_OPTION_NAMES_25, "extglob");
GLOBAL_STR(kSHOPT_OPTION_NAMES_26, "extquote");
GLOBAL_STR(kSHOPT_OPTION_NAMES_27, "failglob");
GLOBAL_STR(kSHOPT_OPTION_NAMES_28, "force_fignore");
GLOBAL_STR(kSHOPT_OPTION_NAMES_29, "globasciiranges");
GLOBAL_STR(kSHOPT_OPTION_NAMES_30, "globstar");
GLOBAL_STR(kSHOPT_OPTION_NAMES_31, "gnu_errfmt");
GLOBAL_STR(kSHOPT_OPTION_NAMES_32, "histappend");
GLOBAL_STR(kSHOPT_OPTION_NAMES_33, "histreedit");
GLOBAL_STR(kSHOPT_OPTION_NAMES_34, "histverify");
GLOBAL_STR(kSHOPT_OPTION_NAMES_35, "hostcomplete");
GLOBAL_STR(kSHOPT_OPTION_NAMES_36, "huponexit");
GLOBAL_STR(kSHOPT_OPTION_NAMES_37, "ignore_flags_not_impl");
GLOBAL_STR(kSHOPT_OPTION_NAMES_38, "ignore_opts_not_impl");
GLOBAL_STR(kSHOPT_OPTION_NAMES_39, "inherit_errexit");
GLOBAL_STR(kSHOPT_OPTION_NAMES_40, "interactive_comments");
GLOBAL_STR(kSHOPT_OPTION_NAMES_41, "lastpipe");
GLOBAL_STR(kSHOPT_OPTION_NAMES_42, "lithist");
GLOBAL_STR(kSHOPT_OPTION_NAMES_43, "localvar_inherit");
GLOBAL_STR(kSHOPT_OPTION_NAMES_44, "localvar_unset");
GLOBAL_STR(kSHOPT_OPTION_NAMES_45, "login_shell");
GLOBAL_STR(kSHOPT_OPTION_NAMES_46, "mailwarn");
GLOBAL_STR(kSHOPT_OPTION_NAMES_47, "no_copy_env");
GLOBAL_STR(kSHOPT_OPTION_NAMES_48, "no_empty_cmd_completion");
GLOBAL_STR(kSHOPT_OPTION_NAMES_49, "nocaseglob");
GLOBAL_STR(kSHOPT_OPTION_NAMES_50, "nocasematch");
GLOBAL_STR(kSHOPT_OPTION_NAMES_51, "nullglob");
GLOBAL_STR(kSHOPT_OPTION_NAMES_52, "parse_at");
GLOBAL_STR(kSHOPT_OPTION_NAMES_53, "parse_at_all");
GLOBAL_STR(kSHOPT_OPTION_NAMES_54, "parse_backslash");
GLOBAL_STR(kSHOPT_OPTION_NAMES_55, "parse_backticks");
GLOBAL_STR(kSHOPT_OPTION_NAMES_56, "parse_bare_word");
GLOBAL_STR(kSHOPT_OPTION_NAMES_57, "parse_brace");
GLOBAL_STR(kSHOPT_OPTION_NAMES_58, "parse_bracket");
GLOBAL_STR(kSHOPT_OPTION_NAMES_59, "parse_dbracket");
GLOBAL_STR(kSHOPT_OPTION_NAMES_60, "parse_dollar");
GLOBAL_STR(kSHOPT_OPTION_NAMES_61, "parse_dparen");
GLOBAL_STR(kSHOPT_OPTION_NAMES_62, "parse_equals");
GLOBAL_STR(kSHOPT_OPTION_NAMES_63, "parse_func");
GLOBAL_STR(kSHOPT_OPTION_NAMES_64, "parse_ignored");
GLOBAL_STR(kSHOPT_OPTION_NAMES_65, "parse_paren");
GLOBAL_STR(kSHOPT_OPTION_NAMES_66, "parse_proc");
GLOBAL_STR(kSHOPT_OPTION_NAMES_67, "parse_sh_arith");
GLOBAL_STR(kSHOPT_OPTION_NAMES_68, "parse_triple_quote");
GLOBAL_STR(kSHOPT_OPTION_NAMES_69, "parse_ysh_string");
GLOBAL_STR(kSHOPT_OPTION_NAMES_70, "process_sub_fail");
GLOBAL_STR(kSHOPT_OPTION_NAMES_71, "progcomp");
GLOBAL_STR(kSHOPT_OPTION_NAMES_72, "progcomp_alias");
GLOBAL_STR(kSHOPT_OPTION_NAMES_73, "promptvars");
GLOBAL_STR(kSHOPT_OPTION_NAMES_74, "redefine_module");
GLOBAL_STR(kSHOPT_OPTION_NAMES_75, "redefine_proc_func");
GLOBAL_STR(kSHOPT_OPTION_NAMES_76, "restricted_shell");
GLOBAL_STR(kSHOPT_OPTION_NAMES_77, "shift_verbose");
GLOBAL_STR(kSHOPT_OPTION_NAMES_78, "sigpipe_status_ok");
GLOBAL_STR(kSHOPT_OPTION_NAMES_79, "simple_echo");
GLOBAL_STR(kSHOPT_OPTION_NAMES_80, "simple_eval_builtin");
GLOBAL_STR(kSHOPT_OPTION_NAMES_81, "simple_test_builtin");
GLOBAL_STR(kSHOPT_OPTION_NAMES_82, "simple_word_eval");
GLOBAL_STR(kSHOPT_OPTION_NAMES_83, "sourcepath");
GLOBAL_STR(kSHOPT_OPTION_NAMES_84, "strict_argv");
GLOBAL_STR(kSHOPT_OPTION_NAMES_85, "strict_arith");
GLOBAL_STR(kSHOPT_OPTION_NAMES_86, "strict_array");
GLOBAL_STR(kSHOPT_OPTION_NAMES_87, "strict_control_flow");
GLOBAL_STR(kSHOPT_OPTION_NAMES_88, "strict_errexit");
GLOBAL_STR(kSHOPT_OPTION_NAMES_89, "strict_glob");
GLOBAL_STR(kSHOPT_OPTION_NAMES_90, "strict_nameref");
GLOBAL_STR(kSHOPT_OPTION_NAMES_91, "strict_parse_slice");
GLOBAL_STR(kSHOPT_OPTION_NAMES_92, "strict_tilde");
GLOBAL_STR(kSHOPT_OPTION_NAMES_93, "strict_word_eval");
GLOBAL_STR(kSHOPT_OPTION_NAMES_94, "verbose_errexit");
GLOBAL_STR(kSHOPT_OPTION_NAMES_95, "xpg_echo");
GLOBAL_STR(kSHOPT_OPTION_NAMES_96, "xtrace_details");
GLOBAL_STR(kSHOPT_OPTION_NAMES_97, "xtrace_rich");
GLOBAL_LIST(SHOPT_OPTION_NAMES, BigStr*, 98, {kSHOPT_OPTION_NAMES_0 COMMA kSHOPT_OPTION_NAMES_1 COMMA kSHOPT_OPTION_NAMES_2 COMMA kSHOPT_OPTION_NAMES_3 COMMA kSHOPT_OPTION_NAMES_4 COMMA kSHOPT_OPTION_NAMES_5 COMMA kSHOPT_OPTION_NAMES_6 COMMA kSHOPT_OPTION_NAMES_7 COMMA kSHOPT_OPTION_NAMES_8 COMMA kSHOPT_OPTION_NAMES_9 COMMA kSHOPT_OPTION_NAMES_10 COMMA kSHOPT_OPTION_NAMES_11 COMMA kSHOPT_OPTION_NAMES_12 COMMA kSHOPT_OPTION_NAMES_13 COMMA kSHOPT_OPTION_NAMES_14 COMMA kSHOPT_OPTION_NAMES_15 COMMA kSHOPT_OPTION_NAMES_16 COMMA kSHOPT_OPTION_NAMES_17 COMMA kSHOPT_OPTION_NAMES_18 COMMA kSHOPT_OPTION_NAMES_19 COMMA kSHOPT_OPTION_NAMES_20 COMMA kSHOPT_OPTION_NAMES_21 COMMA kSHOPT_OPTION_NAMES_22 COMMA kSHOPT_OPTION_NAMES_23 COMMA kSHOPT_OPTION_NAMES_24 COMMA kSHOPT_OPTION_NAMES_25 COMMA kSHOPT_OPTION_NAMES_26 COMMA kSHOPT_OPTION_NAMES_27 COMMA kSHOPT_OPTION_NAMES_28 COMMA kSHOPT_OPTION_NAMES_29 COMMA kSHOPT_OPTION_NAMES_30 COMMA kSHOPT_OPTION_NAMES_31 COMMA kSHOPT_OPTION_NAMES_32 COMMA kSHOPT_OPTION_NAMES_33 COMMA kSHOPT_OPTION_NAMES_34 COMMA kSHOPT_OPTION_NAMES_35 COMMA kSHOPT_OPTION_NAMES_36 COMMA kSHOPT_OPTION_NAMES_37 COMMA kSHOPT_OPTION_NAMES_38 COMMA kSHOPT_OPTION_NAMES_39 COMMA kSHOPT_OPTION_NAMES_40 COMMA kSHOPT_OPTION_NAMES_41 COMMA kSHOPT_OPTION_NAMES_42 COMMA kSHOPT_OPTION_NAMES_43 COMMA kSHOPT_OPTION_NAMES_44 COMMA kSHOPT_OPTION_NAMES_45 COMMA kSHOPT_OPTION_NAMES_46 COMMA kSHOPT_OPTION_NAMES_47 COMMA kSHOPT_OPTION_NAMES_48 COMMA kSHOPT_OPTION_NAMES_49 COMMA kSHOPT_OPTION_NAMES_50 COMMA kSHOPT_OPTION_NAMES_51 COMMA kSHOPT_OPTION_NAMES_52 COMMA kSHOPT_OPTION_NAMES_53 COMMA kSHOPT_OPTION_NAMES_54 COMMA kSHOPT_OPTION_NAMES_55 COMMA kSHOPT_OPTION_NAMES_56 COMMA kSHOPT_OPTION_NAMES_57 COMMA kSHOPT_OPTION_NAMES_58 COMMA kSHOPT_OPTION_NAMES_59 COMMA kSHOPT_OPTION_NAMES_60 COMMA kSHOPT_OPTION_NAMES_61 COMMA kSHOPT_OPTION_NAMES_62 COMMA kSHOPT_OPTION_NAMES_63 COMMA kSHOPT_OPTION_NAMES_64 COMMA kSHOPT_OPTION_NAMES_65 COMMA kSHOPT_OPTION_NAMES_66 COMMA kSHOPT_OPTION_NAMES_67 COMMA kSHOPT_OPTION_NAMES_68 COMMA kSHOPT_OPTION_NAMES_69 COMMA kSHOPT_OPTION_NAMES_70 COMMA kSHOPT_OPTION_NAMES_71 COMMA kSHOPT_OPTION_NAMES_72 COMMA kSHOPT_OPTION_NAMES_73 COMMA kSHOPT_OPTION_NAMES_74 COMMA kSHOPT_OPTION_NAMES_75 COMMA kSHOPT_OPTION_NAMES_76 COMMA kSHOPT_OPTION_NAMES_77 COMMA kSHOPT_OPTION_NAMES_78 COMMA kSHOPT_OPTION_NAMES_79 COMMA kSHOPT_OPTION_NAMES_80 COMMA kSHOPT_OPTION_NAMES_81 COMMA kSHOPT_OPTION_NAMES_82 COMMA kSHOPT_OPTION_NAMES_83 COMMA kSHOPT_OPTION_NAMES_84 COMMA kSHOPT_OPTION_NAMES_85 COMMA kSHOPT_OPTION_NAMES_86 COMMA kSHOPT_OPTION_NAMES_87 COMMA kSHOPT_OPTION_NAMES_88 COMMA kSHOPT_OPTION_NAMES_89 COMMA kSHOPT_OPTION_NAMES_90 COMMA kSHOPT_OPTION_NAMES_91 COMMA kSHOPT_OPTION_NAMES_92 COMMA kSHOPT_OPTION_NAMES_93 COMMA kSHOPT_OPTION_NAMES_94 COMMA kSHOPT_OPTION_NAMES_95 COMMA kSHOPT_OPTION_NAMES_96 COMMA kSHOPT_OPTION_NAMES_97});

GLOBAL_STR(ASSIGN_ARG_RE, "^([a-zA-Z_][a-zA-Z0-9_]*)((=|\\+=)(.*))?$");
GLOBAL_STR(TEST_V_RE, "^([a-zA-Z_][a-zA-Z0-9_]*)(\\[([^][]*)\\])?$");
}  // namespace consts

