#include "_gen/frontend/consts.h"

using id_kind_asdl::Id;
using id_kind_asdl::Kind;
using types_asdl::redir_arg_type_e;
using types_asdl::bool_arg_type_e;
using option_asdl::builtin_t;

namespace consts {

int NO_INDEX = 0;  // duplicated from frontend/consts.py

GLOBAL_STR(gVersion, "0.19.0");

GLOBAL_LIST(STRICT_ALL, int, 9, {27 COMMA 28 COMMA 29 COMMA 30 COMMA 31 COMMA 35 COMMA 32 COMMA 34 COMMA 33});
GLOBAL_LIST(YSH_UPGRADE, int, 24, {48 COMMA 46 COMMA 1 COMMA 47 COMMA 4 COMMA 2 COMMA 5 COMMA 36 COMMA 39 COMMA 40 COMMA 41 COMMA 38 COMMA 42 COMMA 37 COMMA 43 COMMA 44 COMMA 3 COMMA 49 COMMA 53 COMMA 52 COMMA 45 COMMA 6 COMMA 51 COMMA 50});
GLOBAL_LIST(YSH_ALL, int, 44, {48 COMMA 46 COMMA 1 COMMA 47 COMMA 4 COMMA 2 COMMA 5 COMMA 36 COMMA 54 COMMA 55 COMMA 56 COMMA 61 COMMA 39 COMMA 40 COMMA 57 COMMA 60 COMMA 41 COMMA 38 COMMA 58 COMMA 42 COMMA 37 COMMA 43 COMMA 59 COMMA 44 COMMA 3 COMMA 49 COMMA 53 COMMA 52 COMMA 62 COMMA 63 COMMA 64 COMMA 45 COMMA 27 COMMA 28 COMMA 29 COMMA 30 COMMA 31 COMMA 35 COMMA 32 COMMA 34 COMMA 33 COMMA 6 COMMA 51 COMMA 50});
GLOBAL_LIST(DEFAULT_TRUE, int, 15, {21 COMMA 22 COMMA 46 COMMA 23 COMMA 47 COMMA 16 COMMA 55 COMMA 56 COMMA 61 COMMA 57 COMMA 60 COMMA 58 COMMA 59 COMMA 53 COMMA 51});
GLOBAL_LIST(PARSE_OPTION_NUMS, int, 19, {47 COMMA 36 COMMA 54 COMMA 55 COMMA 56 COMMA 61 COMMA 39 COMMA 40 COMMA 57 COMMA 60 COMMA 41 COMMA 38 COMMA 58 COMMA 42 COMMA 37 COMMA 43 COMMA 59 COMMA 65 COMMA 44});
GLOBAL_LIST(SHOPT_OPTION_NUMS, int, 92, {21 COMMA 22 COMMA 26 COMMA 25 COMMA 71 COMMA 72 COMMA 73 COMMA 74 COMMA 75 COMMA 76 COMMA 77 COMMA 70 COMMA 48 COMMA 78 COMMA 46 COMMA 79 COMMA 80 COMMA 81 COMMA 23 COMMA 20 COMMA 82 COMMA 47 COMMA 83 COMMA 18 COMMA 84 COMMA 17 COMMA 85 COMMA 86 COMMA 87 COMMA 88 COMMA 68 COMMA 89 COMMA 90 COMMA 69 COMMA 91 COMMA 4 COMMA 92 COMMA 66 COMMA 93 COMMA 94 COMMA 95 COMMA 96 COMMA 97 COMMA 98 COMMA 99 COMMA 19 COMMA 5 COMMA 36 COMMA 54 COMMA 55 COMMA 56 COMMA 61 COMMA 39 COMMA 40 COMMA 57 COMMA 60 COMMA 41 COMMA 38 COMMA 58 COMMA 42 COMMA 37 COMMA 43 COMMA 59 COMMA 65 COMMA 44 COMMA 49 COMMA 67 COMMA 100 COMMA 101 COMMA 24 COMMA 53 COMMA 102 COMMA 103 COMMA 52 COMMA 62 COMMA 63 COMMA 64 COMMA 45 COMMA 104 COMMA 27 COMMA 28 COMMA 29 COMMA 30 COMMA 31 COMMA 35 COMMA 32 COMMA 34 COMMA 33 COMMA 6 COMMA 105 COMMA 51 COMMA 50});
GLOBAL_LIST(SET_OPTION_NUMS, int, 12, {14 COMMA 1 COMMA 16 COMMA 11 COMMA 7 COMMA 10 COMMA 2 COMMA 3 COMMA 12 COMMA 9 COMMA 13 COMMA 8});
GLOBAL_LIST(VISIBLE_SHOPT_NUMS, int, 52, {21 COMMA 22 COMMA 26 COMMA 25 COMMA 48 COMMA 46 COMMA 23 COMMA 20 COMMA 47 COMMA 18 COMMA 17 COMMA 4 COMMA 19 COMMA 5 COMMA 36 COMMA 54 COMMA 55 COMMA 56 COMMA 61 COMMA 39 COMMA 40 COMMA 57 COMMA 60 COMMA 41 COMMA 38 COMMA 58 COMMA 42 COMMA 37 COMMA 43 COMMA 59 COMMA 65 COMMA 44 COMMA 49 COMMA 24 COMMA 53 COMMA 52 COMMA 62 COMMA 63 COMMA 64 COMMA 45 COMMA 27 COMMA 28 COMMA 29 COMMA 30 COMMA 31 COMMA 35 COMMA 32 COMMA 34 COMMA 33 COMMA 6 COMMA 51 COMMA 50});

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
  case Id::WS_Space: return Kind::WS;
  case Id::Lit_Chars: return Kind::Lit;
  case Id::Lit_VarLike: return Kind::Lit;
  case Id::Lit_ArrayLhsOpen: return Kind::Lit;
  case Id::Lit_ArrayLhsClose: return Kind::Lit;
  case Id::Lit_Splice: return Kind::Lit;
  case Id::Lit_AtLBracket: return Kind::Lit;
  case Id::Lit_AtLBraceDot: return Kind::Lit;
  case Id::Lit_Other: return Kind::Lit;
  case Id::Lit_EscapedChar: return Kind::Lit;
  case Id::Lit_RegexMeta: return Kind::Lit;
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
  case Id::Lit_TildeLike: return Kind::Lit;
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
  case Id::Expr_While: return Kind::Expr;
  case Id::Expr_Break: return Kind::Expr;
  case Id::Expr_Continue: return Kind::Expr;
  case Id::Expr_Return: return Kind::Expr;
  case Id::Char_OneChar: return Kind::Char;
  case Id::Char_Stop: return Kind::Char;
  case Id::Char_Hex: return Kind::Char;
  case Id::Char_Octal3: return Kind::Char;
  case Id::Char_Octal4: return Kind::Char;
  case Id::Char_Unicode4: return Kind::Char;
  case Id::Char_Unicode8: return Kind::Char;
  case Id::Char_UBraced: return Kind::Char;
  case Id::Char_Pound: return Kind::Char;
  case Id::Char_Literals: return Kind::Char;
  case Id::Re_Start: return Kind::Re;
  case Id::Re_End: return Kind::Re;
  case Id::Re_Dot: return Kind::Re;
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
  case Id::Left_SingleQuote: return Kind::Left;
  case Id::Left_RSingleQuote: return Kind::Left;
  case Id::Left_DollarSingleQuote: return Kind::Left;
  case Id::Left_TDoubleQuote: return Kind::Left;
  case Id::Left_TSingleQuote: return Kind::Left;
  case Id::Left_RTSingleQuote: return Kind::Left;
  case Id::Left_DollarTSingleQuote: return Kind::Left;
  case Id::Left_Backtick: return Kind::Left;
  case Id::Left_DollarParen: return Kind::Left;
  case Id::Left_DollarBrace: return Kind::Left;
  case Id::Left_DollarDParen: return Kind::Left;
  case Id::Left_DollarBracket: return Kind::Left;
  case Id::Left_DollarDoubleQuote: return Kind::Left;
  case Id::Left_ProcSubIn: return Kind::Left;
  case Id::Left_ProcSubOut: return Kind::Left;
  case Id::Left_AtParen: return Kind::Left;
  case Id::Left_CaretParen: return Kind::Left;
  case Id::Left_CaretBracket: return Kind::Left;
  case Id::Left_CaretBrace: return Kind::Left;
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
  case Id::VOpOil_Pipe: return Kind::VOpOil;
  case Id::VOpOil_Space: return Kind::VOpOil;
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
  case Id::KW_Func: return Kind::KW;
  case Id::KW_Class: return Kind::KW;
  case Id::KW_Data: return Kind::KW;
  case Id::KW_Enum: return Kind::KW;
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
  case Id::QSN_LiteralBytes: return Kind::QSN;
  case Id::QSN_SpecialByte: return Kind::QSN;
  case Id::QSN_Begin2: return Kind::QSN;
  case Id::QSN_Begin3: return Kind::QSN;
  case Id::QSN_Begin4: return Kind::QSN;
  case Id::QSN_Cont: return Kind::QSN;
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
    if (length == 18 && memcmp("_allow_command_sub", data, 18) == 0) return 21;
    if (length == 18 && memcmp("_allow_process_sub", data, 18) == 0) return 22;
    if (length == 13 && memcmp("_running_trap", data, 13) == 0) return 25;
    if (length == 12 && memcmp("_running_hay", data, 12) == 0) return 26;
    break;
  case 'a':
    if (length == 17 && memcmp("assoc_expand_once", data, 17) == 0) return 71;
    if (length == 6 && memcmp("autocd", data, 6) == 0) return 72;
    break;
  case 'c':
    if (length == 19 && memcmp("command_sub_errexit", data, 19) == 0) return 48;
    if (length == 7 && memcmp("cmdhist", data, 7) == 0) return 70;
    if (length == 11 && memcmp("cdable_vars", data, 11) == 0) return 73;
    if (length == 7 && memcmp("cdspell", data, 7) == 0) return 74;
    if (length == 9 && memcmp("checkhash", data, 9) == 0) return 75;
    if (length == 9 && memcmp("checkjobs", data, 9) == 0) return 76;
    if (length == 12 && memcmp("checkwinsize", data, 12) == 0) return 77;
    if (length == 18 && memcmp("complete_fullquote", data, 18) == 0) return 78;
    break;
  case 'd':
    if (length == 13 && memcmp("dynamic_scope", data, 13) == 0) return 23;
    if (length == 8 && memcmp("dashglob", data, 8) == 0) return 46;
    if (length == 9 && memcmp("direxpand", data, 9) == 0) return 79;
    if (length == 8 && memcmp("dirspell", data, 8) == 0) return 80;
    if (length == 7 && memcmp("dotglob", data, 7) == 0) return 81;
    break;
  case 'e':
    if (length == 7 && memcmp("errexit", data, 7) == 0) return 1;
    if (length == 5 && memcmp("emacs", data, 5) == 0) return 14;
    if (length == 7 && memcmp("extglob", data, 7) == 0) return 18;
    if (length == 17 && memcmp("eval_unsafe_arith", data, 17) == 0) return 20;
    if (length == 14 && memcmp("expand_aliases", data, 14) == 0) return 47;
    if (length == 8 && memcmp("execfail", data, 8) == 0) return 82;
    if (length == 8 && memcmp("extdebug", data, 8) == 0) return 83;
    if (length == 8 && memcmp("extquote", data, 8) == 0) return 84;
    break;
  case 'f':
    if (length == 8 && memcmp("failglob", data, 8) == 0) return 17;
    if (length == 13 && memcmp("force_fignore", data, 13) == 0) return 85;
    break;
  case 'g':
    if (length == 15 && memcmp("globasciiranges", data, 15) == 0) return 86;
    if (length == 8 && memcmp("globstar", data, 8) == 0) return 87;
    if (length == 10 && memcmp("gnu_errfmt", data, 10) == 0) return 88;
    break;
  case 'h':
    if (length == 7 && memcmp("hashall", data, 7) == 0) return 16;
    if (length == 10 && memcmp("histappend", data, 10) == 0) return 68;
    if (length == 12 && memcmp("hostcomplete", data, 12) == 0) return 69;
    if (length == 10 && memcmp("histreedit", data, 10) == 0) return 89;
    if (length == 10 && memcmp("histverify", data, 10) == 0) return 90;
    if (length == 9 && memcmp("huponexit", data, 9) == 0) return 91;
    break;
  case 'i':
    if (length == 15 && memcmp("inherit_errexit", data, 15) == 0) return 4;
    if (length == 11 && memcmp("interactive", data, 11) == 0) return 15;
    if (length == 20 && memcmp("interactive_comments", data, 20) == 0) return 92;
    break;
  case 'l':
    if (length == 8 && memcmp("lastpipe", data, 8) == 0) return 66;
    if (length == 7 && memcmp("lithist", data, 7) == 0) return 93;
    if (length == 16 && memcmp("localvar_inherit", data, 16) == 0) return 94;
    if (length == 14 && memcmp("localvar_unset", data, 14) == 0) return 95;
    if (length == 11 && memcmp("login_shell", data, 11) == 0) return 96;
    break;
  case 'm':
    if (length == 8 && memcmp("mailwarn", data, 8) == 0) return 97;
    break;
  case 'n':
    if (length == 7 && memcmp("nounset", data, 7) == 0) return 2;
    if (length == 8 && memcmp("nullglob", data, 8) == 0) return 5;
    if (length == 6 && memcmp("noexec", data, 6) == 0) return 7;
    if (length == 6 && memcmp("noglob", data, 6) == 0) return 10;
    if (length == 9 && memcmp("noclobber", data, 9) == 0) return 11;
    if (length == 11 && memcmp("nocasematch", data, 11) == 0) return 19;
    if (length == 23 && memcmp("no_empty_cmd_completion", data, 23) == 0) return 98;
    if (length == 10 && memcmp("nocaseglob", data, 10) == 0) return 99;
    break;
  case 'p':
    if (length == 8 && memcmp("pipefail", data, 8) == 0) return 3;
    if (length == 5 && memcmp("posix", data, 5) == 0) return 12;
    if (length == 8 && memcmp("parse_at", data, 8) == 0) return 36;
    if (length == 10 && memcmp("parse_proc", data, 10) == 0) return 37;
    if (length == 10 && memcmp("parse_func", data, 10) == 0) return 38;
    if (length == 11 && memcmp("parse_brace", data, 11) == 0) return 39;
    if (length == 13 && memcmp("parse_bracket", data, 13) == 0) return 40;
    if (length == 12 && memcmp("parse_equals", data, 12) == 0) return 41;
    if (length == 11 && memcmp("parse_paren", data, 11) == 0) return 42;
    if (length == 16 && memcmp("parse_raw_string", data, 16) == 0) return 43;
    if (length == 18 && memcmp("parse_triple_quote", data, 18) == 0) return 44;
    if (length == 16 && memcmp("process_sub_fail", data, 16) == 0) return 49;
    if (length == 12 && memcmp("parse_at_all", data, 12) == 0) return 54;
    if (length == 15 && memcmp("parse_backslash", data, 15) == 0) return 55;
    if (length == 15 && memcmp("parse_backticks", data, 15) == 0) return 56;
    if (length == 12 && memcmp("parse_dollar", data, 12) == 0) return 57;
    if (length == 13 && memcmp("parse_ignored", data, 13) == 0) return 58;
    if (length == 14 && memcmp("parse_sh_arith", data, 14) == 0) return 59;
    if (length == 12 && memcmp("parse_dparen", data, 12) == 0) return 60;
    if (length == 15 && memcmp("parse_bare_word", data, 15) == 0) return 61;
    if (length == 9 && memcmp("parse_tea", data, 9) == 0) return 65;
    if (length == 8 && memcmp("progcomp", data, 8) == 0) return 67;
    if (length == 14 && memcmp("progcomp_alias", data, 14) == 0) return 100;
    if (length == 10 && memcmp("promptvars", data, 10) == 0) return 101;
    break;
  case 'r':
    if (length == 15 && memcmp("redefine_module", data, 15) == 0) return 24;
    if (length == 18 && memcmp("redefine_proc_func", data, 18) == 0) return 53;
    if (length == 16 && memcmp("restricted_shell", data, 16) == 0) return 102;
    break;
  case 's':
    if (length == 11 && memcmp("strict_argv", data, 11) == 0) return 27;
    if (length == 12 && memcmp("strict_arith", data, 12) == 0) return 28;
    if (length == 12 && memcmp("strict_array", data, 12) == 0) return 29;
    if (length == 19 && memcmp("strict_control_flow", data, 19) == 0) return 30;
    if (length == 14 && memcmp("strict_errexit", data, 14) == 0) return 31;
    if (length == 14 && memcmp("strict_nameref", data, 14) == 0) return 32;
    if (length == 16 && memcmp("strict_word_eval", data, 16) == 0) return 33;
    if (length == 12 && memcmp("strict_tilde", data, 12) == 0) return 34;
    if (length == 11 && memcmp("strict_glob", data, 11) == 0) return 35;
    if (length == 16 && memcmp("simple_word_eval", data, 16) == 0) return 45;
    if (length == 17 && memcmp("sigpipe_status_ok", data, 17) == 0) return 52;
    if (length == 11 && memcmp("simple_echo", data, 11) == 0) return 62;
    if (length == 19 && memcmp("simple_eval_builtin", data, 19) == 0) return 63;
    if (length == 19 && memcmp("simple_test_builtin", data, 19) == 0) return 64;
    if (length == 13 && memcmp("shift_verbose", data, 13) == 0) return 103;
    if (length == 10 && memcmp("sourcepath", data, 10) == 0) return 104;
    break;
  case 'v':
    if (length == 15 && memcmp("verbose_errexit", data, 15) == 0) return 6;
    if (length == 7 && memcmp("verbose", data, 7) == 0) return 9;
    if (length == 2 && memcmp("vi", data, 2) == 0) return 13;
    break;
  case 'x':
    if (length == 6 && memcmp("xtrace", data, 6) == 0) return 8;
    if (length == 11 && memcmp("xtrace_rich", data, 11) == 0) return 50;
    if (length == 14 && memcmp("xtrace_details", data, 14) == 0) return 51;
    if (length == 8 && memcmp("xpg_echo", data, 8) == 0) return 105;
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
    if (length == 1 && memcmp("[", data, 1) == 0) return 67;
    break;
  case '_':
    if (length == 5 && memcmp("__cat", data, 5) == 0) return 70;
    break;
  case 'a':
    if (length == 5 && memcmp("alias", data, 5) == 0) return 47;
    if (length == 6 && memcmp("append", data, 6) == 0) return 50;
    break;
  case 'b':
    if (length == 2 && memcmp("bg", data, 2) == 0) return 34;
    if (length == 4 && memcmp("bind", data, 4) == 0) return 49;
    if (length == 10 && memcmp("boolstatus", data, 10) == 0) return 65;
    break;
  case 'c':
    if (length == 2 && memcmp("cd", data, 2) == 0) return 24;
    if (length == 8 && memcmp("complete", data, 8) == 0) return 36;
    if (length == 7 && memcmp("compgen", data, 7) == 0) return 37;
    if (length == 7 && memcmp("compopt", data, 7) == 0) return 38;
    if (length == 10 && memcmp("compadjust", data, 10) == 0) return 39;
    if (length == 10 && memcmp("compexport", data, 10) == 0) return 40;
    if (length == 7 && memcmp("command", data, 7) == 0) return 42;
    break;
  case 'd':
    if (length == 4 && memcmp("dirs", data, 4) == 0) return 27;
    break;
  case 'e':
    if (length == 4 && memcmp("echo", data, 4) == 0) return 20;
    if (length == 5 && memcmp("error", data, 5) == 0) return 59;
    break;
  case 'f':
    if (length == 5 && memcmp("false", data, 5) == 0) return 17;
    if (length == 2 && memcmp("fg", data, 2) == 0) return 33;
    if (length == 4 && memcmp("fork", data, 4) == 0) return 60;
    if (length == 8 && memcmp("forkwait", data, 8) == 0) return 61;
    if (length == 5 && memcmp("fopen", data, 5) == 0) return 62;
    break;
  case 'g':
    if (length == 7 && memcmp("getopts", data, 7) == 0) return 41;
    break;
  case 'h':
    if (length == 4 && memcmp("hash", data, 4) == 0) return 44;
    if (length == 4 && memcmp("help", data, 4) == 0) return 45;
    if (length == 7 && memcmp("history", data, 7) == 0) return 46;
    if (length == 3 && memcmp("hay", data, 3) == 0) return 55;
    if (length == 7 && memcmp("haynode", data, 7) == 0) return 56;
    break;
  case 'i':
    if (length == 7 && memcmp("is-main", data, 7) == 0) return 69;
    break;
  case 'j':
    if (length == 4 && memcmp("jobs", data, 4) == 0) return 32;
    if (length == 4 && memcmp("json", data, 4) == 0) return 52;
    if (length == 2 && memcmp("j8", data, 2) == 0) return 53;
    break;
  case 'm':
    if (length == 7 && memcmp("mapfile", data, 7) == 0) return 22;
    if (length == 6 && memcmp("module", data, 6) == 0) return 57;
    break;
  case 'p':
    if (length == 6 && memcmp("printf", data, 6) == 0) return 21;
    if (length == 5 && memcmp("pushd", data, 5) == 0) return 25;
    if (length == 4 && memcmp("popd", data, 4) == 0) return 26;
    if (length == 3 && memcmp("pwd", data, 3) == 0) return 28;
    if (length == 2 && memcmp("pp", data, 2) == 0) return 54;
    if (length == 14 && memcmp("push-registers", data, 14) == 0) return 68;
    break;
  case 'r':
    if (length == 4 && memcmp("read", data, 4) == 0) return 19;
    if (length == 9 && memcmp("readarray", data, 9) == 0) return 23;
    if (length == 7 && memcmp("runproc", data, 7) == 0) return 64;
    break;
  case 's':
    if (length == 6 && memcmp("source", data, 6) == 0) return 29;
    if (length == 5 && memcmp("shopt", data, 5) == 0) return 35;
    if (length == 5 && memcmp("shvar", data, 5) == 0) return 63;
    break;
  case 't':
    if (length == 4 && memcmp("true", data, 4) == 0) return 16;
    if (length == 3 && memcmp("try", data, 3) == 0) return 18;
    if (length == 4 && memcmp("type", data, 4) == 0) return 43;
    if (length == 4 && memcmp("test", data, 4) == 0) return 66;
    break;
  case 'u':
    if (length == 5 && memcmp("umask", data, 5) == 0) return 30;
    if (length == 7 && memcmp("unalias", data, 7) == 0) return 48;
    if (length == 3 && memcmp("use", data, 3) == 0) return 58;
    break;
  case 'w':
    if (length == 4 && memcmp("wait", data, 4) == 0) return 31;
    if (length == 5 && memcmp("write", data, 5) == 0) return 51;
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
    if (length == 7 && memcmp("declare", data, 7) == 0) return 13;
    break;
  case 'e':
    if (length == 6 && memcmp("export", data, 6) == 0) return 15;
    break;
  case 'l':
    if (length == 5 && memcmp("local", data, 5) == 0) return 12;
    break;
  case 'r':
    if (length == 8 && memcmp("readonly", data, 8) == 0) return 11;
    break;
  case 't':
    if (length == 7 && memcmp("typeset", data, 7) == 0) return 14;
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
  case 'b':
    if (length == 7 && memcmp("builtin", data, 7) == 0) return 10;
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

bool IsKeyword(BigStr* s) {
  int length = len(s);
  if (length == 0) return false;

  const char* data = s->data_;
  switch (data[0]) {
  case '!':
    if (length == 1 && memcmp("!", data, 1) == 0) return true;
    break;
  case '[':
    if (length == 2 && memcmp("[[", data, 2) == 0) return true;
    break;
  case 'c':
    if (length == 4 && memcmp("case", data, 4) == 0) return true;
    if (length == 5 && memcmp("const", data, 5) == 0) return true;
    if (length == 4 && memcmp("call", data, 4) == 0) return true;
    if (length == 5 && memcmp("class", data, 5) == 0) return true;
    break;
  case 'd':
    if (length == 2 && memcmp("do", data, 2) == 0) return true;
    if (length == 4 && memcmp("done", data, 4) == 0) return true;
    if (length == 4 && memcmp("data", data, 4) == 0) return true;
    break;
  case 'e':
    if (length == 4 && memcmp("esac", data, 4) == 0) return true;
    if (length == 4 && memcmp("else", data, 4) == 0) return true;
    if (length == 4 && memcmp("elif", data, 4) == 0) return true;
    if (length == 4 && memcmp("enum", data, 4) == 0) return true;
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
BigStr* OptionName(option_asdl::option_t opt_num) {
  const char* s;
  switch (opt_num) {

  case 1:
    s = "errexit";
    break;
  case 2:
    s = "nounset";
    break;
  case 3:
    s = "pipefail";
    break;
  case 4:
    s = "inherit_errexit";
    break;
  case 5:
    s = "nullglob";
    break;
  case 6:
    s = "verbose_errexit";
    break;
  case 7:
    s = "noexec";
    break;
  case 8:
    s = "xtrace";
    break;
  case 9:
    s = "verbose";
    break;
  case 10:
    s = "noglob";
    break;
  case 11:
    s = "noclobber";
    break;
  case 12:
    s = "posix";
    break;
  case 13:
    s = "vi";
    break;
  case 14:
    s = "emacs";
    break;
  case 15:
    s = "interactive";
    break;
  case 16:
    s = "hashall";
    break;
  case 17:
    s = "failglob";
    break;
  case 18:
    s = "extglob";
    break;
  case 19:
    s = "nocasematch";
    break;
  case 20:
    s = "eval_unsafe_arith";
    break;
  case 21:
    s = "_allow_command_sub";
    break;
  case 22:
    s = "_allow_process_sub";
    break;
  case 23:
    s = "dynamic_scope";
    break;
  case 24:
    s = "redefine_module";
    break;
  case 25:
    s = "_running_trap";
    break;
  case 26:
    s = "_running_hay";
    break;
  case 27:
    s = "strict_argv";
    break;
  case 28:
    s = "strict_arith";
    break;
  case 29:
    s = "strict_array";
    break;
  case 30:
    s = "strict_control_flow";
    break;
  case 31:
    s = "strict_errexit";
    break;
  case 32:
    s = "strict_nameref";
    break;
  case 33:
    s = "strict_word_eval";
    break;
  case 34:
    s = "strict_tilde";
    break;
  case 35:
    s = "strict_glob";
    break;
  case 36:
    s = "parse_at";
    break;
  case 37:
    s = "parse_proc";
    break;
  case 38:
    s = "parse_func";
    break;
  case 39:
    s = "parse_brace";
    break;
  case 40:
    s = "parse_bracket";
    break;
  case 41:
    s = "parse_equals";
    break;
  case 42:
    s = "parse_paren";
    break;
  case 43:
    s = "parse_raw_string";
    break;
  case 44:
    s = "parse_triple_quote";
    break;
  case 45:
    s = "simple_word_eval";
    break;
  case 46:
    s = "dashglob";
    break;
  case 47:
    s = "expand_aliases";
    break;
  case 48:
    s = "command_sub_errexit";
    break;
  case 49:
    s = "process_sub_fail";
    break;
  case 50:
    s = "xtrace_rich";
    break;
  case 51:
    s = "xtrace_details";
    break;
  case 52:
    s = "sigpipe_status_ok";
    break;
  case 53:
    s = "redefine_proc_func";
    break;
  case 54:
    s = "parse_at_all";
    break;
  case 55:
    s = "parse_backslash";
    break;
  case 56:
    s = "parse_backticks";
    break;
  case 57:
    s = "parse_dollar";
    break;
  case 58:
    s = "parse_ignored";
    break;
  case 59:
    s = "parse_sh_arith";
    break;
  case 60:
    s = "parse_dparen";
    break;
  case 61:
    s = "parse_bare_word";
    break;
  case 62:
    s = "simple_echo";
    break;
  case 63:
    s = "simple_eval_builtin";
    break;
  case 64:
    s = "simple_test_builtin";
    break;
  case 65:
    s = "parse_tea";
    break;
  case 66:
    s = "lastpipe";
    break;
  case 67:
    s = "progcomp";
    break;
  case 68:
    s = "histappend";
    break;
  case 69:
    s = "hostcomplete";
    break;
  case 70:
    s = "cmdhist";
    break;
  case 71:
    s = "assoc_expand_once";
    break;
  case 72:
    s = "autocd";
    break;
  case 73:
    s = "cdable_vars";
    break;
  case 74:
    s = "cdspell";
    break;
  case 75:
    s = "checkhash";
    break;
  case 76:
    s = "checkjobs";
    break;
  case 77:
    s = "checkwinsize";
    break;
  case 78:
    s = "complete_fullquote";
    break;
  case 79:
    s = "direxpand";
    break;
  case 80:
    s = "dirspell";
    break;
  case 81:
    s = "dotglob";
    break;
  case 82:
    s = "execfail";
    break;
  case 83:
    s = "extdebug";
    break;
  case 84:
    s = "extquote";
    break;
  case 85:
    s = "force_fignore";
    break;
  case 86:
    s = "globasciiranges";
    break;
  case 87:
    s = "globstar";
    break;
  case 88:
    s = "gnu_errfmt";
    break;
  case 89:
    s = "histreedit";
    break;
  case 90:
    s = "histverify";
    break;
  case 91:
    s = "huponexit";
    break;
  case 92:
    s = "interactive_comments";
    break;
  case 93:
    s = "lithist";
    break;
  case 94:
    s = "localvar_inherit";
    break;
  case 95:
    s = "localvar_unset";
    break;
  case 96:
    s = "login_shell";
    break;
  case 97:
    s = "mailwarn";
    break;
  case 98:
    s = "no_empty_cmd_completion";
    break;
  case 99:
    s = "nocaseglob";
    break;
  case 100:
    s = "progcomp_alias";
    break;
  case 101:
    s = "promptvars";
    break;
  case 102:
    s = "restricted_shell";
    break;
  case 103:
    s = "shift_verbose";
    break;
  case 104:
    s = "sourcepath";
    break;
  case 105:
    s = "xpg_echo";
    break;
  default:
    FAIL(kShouldNotGetHere);
  }
  return StrFromC(s);  // TODO-intern
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
GLOBAL_STR(kBUILTIN_NAMES_9, "builtin");
GLOBAL_STR(kBUILTIN_NAMES_10, "readonly");
GLOBAL_STR(kBUILTIN_NAMES_11, "local");
GLOBAL_STR(kBUILTIN_NAMES_12, "declare");
GLOBAL_STR(kBUILTIN_NAMES_13, "typeset");
GLOBAL_STR(kBUILTIN_NAMES_14, "export");
GLOBAL_STR(kBUILTIN_NAMES_15, "true");
GLOBAL_STR(kBUILTIN_NAMES_16, "false");
GLOBAL_STR(kBUILTIN_NAMES_17, "try");
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
GLOBAL_STR(kBUILTIN_NAMES_30, "wait");
GLOBAL_STR(kBUILTIN_NAMES_31, "jobs");
GLOBAL_STR(kBUILTIN_NAMES_32, "fg");
GLOBAL_STR(kBUILTIN_NAMES_33, "bg");
GLOBAL_STR(kBUILTIN_NAMES_34, "shopt");
GLOBAL_STR(kBUILTIN_NAMES_35, "complete");
GLOBAL_STR(kBUILTIN_NAMES_36, "compgen");
GLOBAL_STR(kBUILTIN_NAMES_37, "compopt");
GLOBAL_STR(kBUILTIN_NAMES_38, "compadjust");
GLOBAL_STR(kBUILTIN_NAMES_39, "compexport");
GLOBAL_STR(kBUILTIN_NAMES_40, "getopts");
GLOBAL_STR(kBUILTIN_NAMES_41, "command");
GLOBAL_STR(kBUILTIN_NAMES_42, "type");
GLOBAL_STR(kBUILTIN_NAMES_43, "hash");
GLOBAL_STR(kBUILTIN_NAMES_44, "help");
GLOBAL_STR(kBUILTIN_NAMES_45, "history");
GLOBAL_STR(kBUILTIN_NAMES_46, "alias");
GLOBAL_STR(kBUILTIN_NAMES_47, "unalias");
GLOBAL_STR(kBUILTIN_NAMES_48, "bind");
GLOBAL_STR(kBUILTIN_NAMES_49, "append");
GLOBAL_STR(kBUILTIN_NAMES_50, "write");
GLOBAL_STR(kBUILTIN_NAMES_51, "json");
GLOBAL_STR(kBUILTIN_NAMES_52, "j8");
GLOBAL_STR(kBUILTIN_NAMES_53, "pp");
GLOBAL_STR(kBUILTIN_NAMES_54, "hay");
GLOBAL_STR(kBUILTIN_NAMES_55, "haynode");
GLOBAL_STR(kBUILTIN_NAMES_56, "module");
GLOBAL_STR(kBUILTIN_NAMES_57, "use");
GLOBAL_STR(kBUILTIN_NAMES_58, "error");
GLOBAL_STR(kBUILTIN_NAMES_59, "fork");
GLOBAL_STR(kBUILTIN_NAMES_60, "forkwait");
GLOBAL_STR(kBUILTIN_NAMES_61, "fopen");
GLOBAL_STR(kBUILTIN_NAMES_62, "shvar");
GLOBAL_STR(kBUILTIN_NAMES_63, "runproc");
GLOBAL_STR(kBUILTIN_NAMES_64, "boolstatus");
GLOBAL_STR(kBUILTIN_NAMES_65, "test");
GLOBAL_STR(kBUILTIN_NAMES_66, "[");
GLOBAL_STR(kBUILTIN_NAMES_67, "push-registers");
GLOBAL_STR(kBUILTIN_NAMES_68, "is-main");
GLOBAL_STR(kBUILTIN_NAMES_69, "__cat");
GLOBAL_LIST(BUILTIN_NAMES, BigStr*, 70, {kBUILTIN_NAMES_0 COMMA kBUILTIN_NAMES_1 COMMA kBUILTIN_NAMES_2 COMMA kBUILTIN_NAMES_3 COMMA kBUILTIN_NAMES_4 COMMA kBUILTIN_NAMES_5 COMMA kBUILTIN_NAMES_6 COMMA kBUILTIN_NAMES_7 COMMA kBUILTIN_NAMES_8 COMMA kBUILTIN_NAMES_9 COMMA kBUILTIN_NAMES_10 COMMA kBUILTIN_NAMES_11 COMMA kBUILTIN_NAMES_12 COMMA kBUILTIN_NAMES_13 COMMA kBUILTIN_NAMES_14 COMMA kBUILTIN_NAMES_15 COMMA kBUILTIN_NAMES_16 COMMA kBUILTIN_NAMES_17 COMMA kBUILTIN_NAMES_18 COMMA kBUILTIN_NAMES_19 COMMA kBUILTIN_NAMES_20 COMMA kBUILTIN_NAMES_21 COMMA kBUILTIN_NAMES_22 COMMA kBUILTIN_NAMES_23 COMMA kBUILTIN_NAMES_24 COMMA kBUILTIN_NAMES_25 COMMA kBUILTIN_NAMES_26 COMMA kBUILTIN_NAMES_27 COMMA kBUILTIN_NAMES_28 COMMA kBUILTIN_NAMES_29 COMMA kBUILTIN_NAMES_30 COMMA kBUILTIN_NAMES_31 COMMA kBUILTIN_NAMES_32 COMMA kBUILTIN_NAMES_33 COMMA kBUILTIN_NAMES_34 COMMA kBUILTIN_NAMES_35 COMMA kBUILTIN_NAMES_36 COMMA kBUILTIN_NAMES_37 COMMA kBUILTIN_NAMES_38 COMMA kBUILTIN_NAMES_39 COMMA kBUILTIN_NAMES_40 COMMA kBUILTIN_NAMES_41 COMMA kBUILTIN_NAMES_42 COMMA kBUILTIN_NAMES_43 COMMA kBUILTIN_NAMES_44 COMMA kBUILTIN_NAMES_45 COMMA kBUILTIN_NAMES_46 COMMA kBUILTIN_NAMES_47 COMMA kBUILTIN_NAMES_48 COMMA kBUILTIN_NAMES_49 COMMA kBUILTIN_NAMES_50 COMMA kBUILTIN_NAMES_51 COMMA kBUILTIN_NAMES_52 COMMA kBUILTIN_NAMES_53 COMMA kBUILTIN_NAMES_54 COMMA kBUILTIN_NAMES_55 COMMA kBUILTIN_NAMES_56 COMMA kBUILTIN_NAMES_57 COMMA kBUILTIN_NAMES_58 COMMA kBUILTIN_NAMES_59 COMMA kBUILTIN_NAMES_60 COMMA kBUILTIN_NAMES_61 COMMA kBUILTIN_NAMES_62 COMMA kBUILTIN_NAMES_63 COMMA kBUILTIN_NAMES_64 COMMA kBUILTIN_NAMES_65 COMMA kBUILTIN_NAMES_66 COMMA kBUILTIN_NAMES_67 COMMA kBUILTIN_NAMES_68 COMMA kBUILTIN_NAMES_69});

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
GLOBAL_STR(kOSH_KEYWORD_NAMES_23, "func");
GLOBAL_STR(kOSH_KEYWORD_NAMES_24, "class");
GLOBAL_STR(kOSH_KEYWORD_NAMES_25, "data");
GLOBAL_STR(kOSH_KEYWORD_NAMES_26, "enum");
GLOBAL_STR(kOSH_KEYWORD_NAMES_27, "{");
GLOBAL_LIST(OSH_KEYWORD_NAMES, BigStr*, 28, {kOSH_KEYWORD_NAMES_0 COMMA kOSH_KEYWORD_NAMES_1 COMMA kOSH_KEYWORD_NAMES_2 COMMA kOSH_KEYWORD_NAMES_3 COMMA kOSH_KEYWORD_NAMES_4 COMMA kOSH_KEYWORD_NAMES_5 COMMA kOSH_KEYWORD_NAMES_6 COMMA kOSH_KEYWORD_NAMES_7 COMMA kOSH_KEYWORD_NAMES_8 COMMA kOSH_KEYWORD_NAMES_9 COMMA kOSH_KEYWORD_NAMES_10 COMMA kOSH_KEYWORD_NAMES_11 COMMA kOSH_KEYWORD_NAMES_12 COMMA kOSH_KEYWORD_NAMES_13 COMMA kOSH_KEYWORD_NAMES_14 COMMA kOSH_KEYWORD_NAMES_15 COMMA kOSH_KEYWORD_NAMES_16 COMMA kOSH_KEYWORD_NAMES_17 COMMA kOSH_KEYWORD_NAMES_18 COMMA kOSH_KEYWORD_NAMES_19 COMMA kOSH_KEYWORD_NAMES_20 COMMA kOSH_KEYWORD_NAMES_21 COMMA kOSH_KEYWORD_NAMES_22 COMMA kOSH_KEYWORD_NAMES_23 COMMA kOSH_KEYWORD_NAMES_24 COMMA kOSH_KEYWORD_NAMES_25 COMMA kOSH_KEYWORD_NAMES_26 COMMA kOSH_KEYWORD_NAMES_27});

GLOBAL_STR(kSET_OPTION_NAMES_0, "emacs");
GLOBAL_STR(kSET_OPTION_NAMES_1, "errexit");
GLOBAL_STR(kSET_OPTION_NAMES_2, "hashall");
GLOBAL_STR(kSET_OPTION_NAMES_3, "noclobber");
GLOBAL_STR(kSET_OPTION_NAMES_4, "noexec");
GLOBAL_STR(kSET_OPTION_NAMES_5, "noglob");
GLOBAL_STR(kSET_OPTION_NAMES_6, "nounset");
GLOBAL_STR(kSET_OPTION_NAMES_7, "pipefail");
GLOBAL_STR(kSET_OPTION_NAMES_8, "posix");
GLOBAL_STR(kSET_OPTION_NAMES_9, "verbose");
GLOBAL_STR(kSET_OPTION_NAMES_10, "vi");
GLOBAL_STR(kSET_OPTION_NAMES_11, "xtrace");
GLOBAL_LIST(SET_OPTION_NAMES, BigStr*, 12, {kSET_OPTION_NAMES_0 COMMA kSET_OPTION_NAMES_1 COMMA kSET_OPTION_NAMES_2 COMMA kSET_OPTION_NAMES_3 COMMA kSET_OPTION_NAMES_4 COMMA kSET_OPTION_NAMES_5 COMMA kSET_OPTION_NAMES_6 COMMA kSET_OPTION_NAMES_7 COMMA kSET_OPTION_NAMES_8 COMMA kSET_OPTION_NAMES_9 COMMA kSET_OPTION_NAMES_10 COMMA kSET_OPTION_NAMES_11});

GLOBAL_STR(kSHOPT_OPTION_NAMES_0, "_allow_command_sub");
GLOBAL_STR(kSHOPT_OPTION_NAMES_1, "_allow_process_sub");
GLOBAL_STR(kSHOPT_OPTION_NAMES_2, "_running_hay");
GLOBAL_STR(kSHOPT_OPTION_NAMES_3, "_running_trap");
GLOBAL_STR(kSHOPT_OPTION_NAMES_4, "assoc_expand_once");
GLOBAL_STR(kSHOPT_OPTION_NAMES_5, "autocd");
GLOBAL_STR(kSHOPT_OPTION_NAMES_6, "cdable_vars");
GLOBAL_STR(kSHOPT_OPTION_NAMES_7, "cdspell");
GLOBAL_STR(kSHOPT_OPTION_NAMES_8, "checkhash");
GLOBAL_STR(kSHOPT_OPTION_NAMES_9, "checkjobs");
GLOBAL_STR(kSHOPT_OPTION_NAMES_10, "checkwinsize");
GLOBAL_STR(kSHOPT_OPTION_NAMES_11, "cmdhist");
GLOBAL_STR(kSHOPT_OPTION_NAMES_12, "command_sub_errexit");
GLOBAL_STR(kSHOPT_OPTION_NAMES_13, "complete_fullquote");
GLOBAL_STR(kSHOPT_OPTION_NAMES_14, "dashglob");
GLOBAL_STR(kSHOPT_OPTION_NAMES_15, "direxpand");
GLOBAL_STR(kSHOPT_OPTION_NAMES_16, "dirspell");
GLOBAL_STR(kSHOPT_OPTION_NAMES_17, "dotglob");
GLOBAL_STR(kSHOPT_OPTION_NAMES_18, "dynamic_scope");
GLOBAL_STR(kSHOPT_OPTION_NAMES_19, "eval_unsafe_arith");
GLOBAL_STR(kSHOPT_OPTION_NAMES_20, "execfail");
GLOBAL_STR(kSHOPT_OPTION_NAMES_21, "expand_aliases");
GLOBAL_STR(kSHOPT_OPTION_NAMES_22, "extdebug");
GLOBAL_STR(kSHOPT_OPTION_NAMES_23, "extglob");
GLOBAL_STR(kSHOPT_OPTION_NAMES_24, "extquote");
GLOBAL_STR(kSHOPT_OPTION_NAMES_25, "failglob");
GLOBAL_STR(kSHOPT_OPTION_NAMES_26, "force_fignore");
GLOBAL_STR(kSHOPT_OPTION_NAMES_27, "globasciiranges");
GLOBAL_STR(kSHOPT_OPTION_NAMES_28, "globstar");
GLOBAL_STR(kSHOPT_OPTION_NAMES_29, "gnu_errfmt");
GLOBAL_STR(kSHOPT_OPTION_NAMES_30, "histappend");
GLOBAL_STR(kSHOPT_OPTION_NAMES_31, "histreedit");
GLOBAL_STR(kSHOPT_OPTION_NAMES_32, "histverify");
GLOBAL_STR(kSHOPT_OPTION_NAMES_33, "hostcomplete");
GLOBAL_STR(kSHOPT_OPTION_NAMES_34, "huponexit");
GLOBAL_STR(kSHOPT_OPTION_NAMES_35, "inherit_errexit");
GLOBAL_STR(kSHOPT_OPTION_NAMES_36, "interactive_comments");
GLOBAL_STR(kSHOPT_OPTION_NAMES_37, "lastpipe");
GLOBAL_STR(kSHOPT_OPTION_NAMES_38, "lithist");
GLOBAL_STR(kSHOPT_OPTION_NAMES_39, "localvar_inherit");
GLOBAL_STR(kSHOPT_OPTION_NAMES_40, "localvar_unset");
GLOBAL_STR(kSHOPT_OPTION_NAMES_41, "login_shell");
GLOBAL_STR(kSHOPT_OPTION_NAMES_42, "mailwarn");
GLOBAL_STR(kSHOPT_OPTION_NAMES_43, "no_empty_cmd_completion");
GLOBAL_STR(kSHOPT_OPTION_NAMES_44, "nocaseglob");
GLOBAL_STR(kSHOPT_OPTION_NAMES_45, "nocasematch");
GLOBAL_STR(kSHOPT_OPTION_NAMES_46, "nullglob");
GLOBAL_STR(kSHOPT_OPTION_NAMES_47, "parse_at");
GLOBAL_STR(kSHOPT_OPTION_NAMES_48, "parse_at_all");
GLOBAL_STR(kSHOPT_OPTION_NAMES_49, "parse_backslash");
GLOBAL_STR(kSHOPT_OPTION_NAMES_50, "parse_backticks");
GLOBAL_STR(kSHOPT_OPTION_NAMES_51, "parse_bare_word");
GLOBAL_STR(kSHOPT_OPTION_NAMES_52, "parse_brace");
GLOBAL_STR(kSHOPT_OPTION_NAMES_53, "parse_bracket");
GLOBAL_STR(kSHOPT_OPTION_NAMES_54, "parse_dollar");
GLOBAL_STR(kSHOPT_OPTION_NAMES_55, "parse_dparen");
GLOBAL_STR(kSHOPT_OPTION_NAMES_56, "parse_equals");
GLOBAL_STR(kSHOPT_OPTION_NAMES_57, "parse_func");
GLOBAL_STR(kSHOPT_OPTION_NAMES_58, "parse_ignored");
GLOBAL_STR(kSHOPT_OPTION_NAMES_59, "parse_paren");
GLOBAL_STR(kSHOPT_OPTION_NAMES_60, "parse_proc");
GLOBAL_STR(kSHOPT_OPTION_NAMES_61, "parse_raw_string");
GLOBAL_STR(kSHOPT_OPTION_NAMES_62, "parse_sh_arith");
GLOBAL_STR(kSHOPT_OPTION_NAMES_63, "parse_tea");
GLOBAL_STR(kSHOPT_OPTION_NAMES_64, "parse_triple_quote");
GLOBAL_STR(kSHOPT_OPTION_NAMES_65, "process_sub_fail");
GLOBAL_STR(kSHOPT_OPTION_NAMES_66, "progcomp");
GLOBAL_STR(kSHOPT_OPTION_NAMES_67, "progcomp_alias");
GLOBAL_STR(kSHOPT_OPTION_NAMES_68, "promptvars");
GLOBAL_STR(kSHOPT_OPTION_NAMES_69, "redefine_module");
GLOBAL_STR(kSHOPT_OPTION_NAMES_70, "redefine_proc_func");
GLOBAL_STR(kSHOPT_OPTION_NAMES_71, "restricted_shell");
GLOBAL_STR(kSHOPT_OPTION_NAMES_72, "shift_verbose");
GLOBAL_STR(kSHOPT_OPTION_NAMES_73, "sigpipe_status_ok");
GLOBAL_STR(kSHOPT_OPTION_NAMES_74, "simple_echo");
GLOBAL_STR(kSHOPT_OPTION_NAMES_75, "simple_eval_builtin");
GLOBAL_STR(kSHOPT_OPTION_NAMES_76, "simple_test_builtin");
GLOBAL_STR(kSHOPT_OPTION_NAMES_77, "simple_word_eval");
GLOBAL_STR(kSHOPT_OPTION_NAMES_78, "sourcepath");
GLOBAL_STR(kSHOPT_OPTION_NAMES_79, "strict_argv");
GLOBAL_STR(kSHOPT_OPTION_NAMES_80, "strict_arith");
GLOBAL_STR(kSHOPT_OPTION_NAMES_81, "strict_array");
GLOBAL_STR(kSHOPT_OPTION_NAMES_82, "strict_control_flow");
GLOBAL_STR(kSHOPT_OPTION_NAMES_83, "strict_errexit");
GLOBAL_STR(kSHOPT_OPTION_NAMES_84, "strict_glob");
GLOBAL_STR(kSHOPT_OPTION_NAMES_85, "strict_nameref");
GLOBAL_STR(kSHOPT_OPTION_NAMES_86, "strict_tilde");
GLOBAL_STR(kSHOPT_OPTION_NAMES_87, "strict_word_eval");
GLOBAL_STR(kSHOPT_OPTION_NAMES_88, "verbose_errexit");
GLOBAL_STR(kSHOPT_OPTION_NAMES_89, "xpg_echo");
GLOBAL_STR(kSHOPT_OPTION_NAMES_90, "xtrace_details");
GLOBAL_STR(kSHOPT_OPTION_NAMES_91, "xtrace_rich");
GLOBAL_LIST(SHOPT_OPTION_NAMES, BigStr*, 92, {kSHOPT_OPTION_NAMES_0 COMMA kSHOPT_OPTION_NAMES_1 COMMA kSHOPT_OPTION_NAMES_2 COMMA kSHOPT_OPTION_NAMES_3 COMMA kSHOPT_OPTION_NAMES_4 COMMA kSHOPT_OPTION_NAMES_5 COMMA kSHOPT_OPTION_NAMES_6 COMMA kSHOPT_OPTION_NAMES_7 COMMA kSHOPT_OPTION_NAMES_8 COMMA kSHOPT_OPTION_NAMES_9 COMMA kSHOPT_OPTION_NAMES_10 COMMA kSHOPT_OPTION_NAMES_11 COMMA kSHOPT_OPTION_NAMES_12 COMMA kSHOPT_OPTION_NAMES_13 COMMA kSHOPT_OPTION_NAMES_14 COMMA kSHOPT_OPTION_NAMES_15 COMMA kSHOPT_OPTION_NAMES_16 COMMA kSHOPT_OPTION_NAMES_17 COMMA kSHOPT_OPTION_NAMES_18 COMMA kSHOPT_OPTION_NAMES_19 COMMA kSHOPT_OPTION_NAMES_20 COMMA kSHOPT_OPTION_NAMES_21 COMMA kSHOPT_OPTION_NAMES_22 COMMA kSHOPT_OPTION_NAMES_23 COMMA kSHOPT_OPTION_NAMES_24 COMMA kSHOPT_OPTION_NAMES_25 COMMA kSHOPT_OPTION_NAMES_26 COMMA kSHOPT_OPTION_NAMES_27 COMMA kSHOPT_OPTION_NAMES_28 COMMA kSHOPT_OPTION_NAMES_29 COMMA kSHOPT_OPTION_NAMES_30 COMMA kSHOPT_OPTION_NAMES_31 COMMA kSHOPT_OPTION_NAMES_32 COMMA kSHOPT_OPTION_NAMES_33 COMMA kSHOPT_OPTION_NAMES_34 COMMA kSHOPT_OPTION_NAMES_35 COMMA kSHOPT_OPTION_NAMES_36 COMMA kSHOPT_OPTION_NAMES_37 COMMA kSHOPT_OPTION_NAMES_38 COMMA kSHOPT_OPTION_NAMES_39 COMMA kSHOPT_OPTION_NAMES_40 COMMA kSHOPT_OPTION_NAMES_41 COMMA kSHOPT_OPTION_NAMES_42 COMMA kSHOPT_OPTION_NAMES_43 COMMA kSHOPT_OPTION_NAMES_44 COMMA kSHOPT_OPTION_NAMES_45 COMMA kSHOPT_OPTION_NAMES_46 COMMA kSHOPT_OPTION_NAMES_47 COMMA kSHOPT_OPTION_NAMES_48 COMMA kSHOPT_OPTION_NAMES_49 COMMA kSHOPT_OPTION_NAMES_50 COMMA kSHOPT_OPTION_NAMES_51 COMMA kSHOPT_OPTION_NAMES_52 COMMA kSHOPT_OPTION_NAMES_53 COMMA kSHOPT_OPTION_NAMES_54 COMMA kSHOPT_OPTION_NAMES_55 COMMA kSHOPT_OPTION_NAMES_56 COMMA kSHOPT_OPTION_NAMES_57 COMMA kSHOPT_OPTION_NAMES_58 COMMA kSHOPT_OPTION_NAMES_59 COMMA kSHOPT_OPTION_NAMES_60 COMMA kSHOPT_OPTION_NAMES_61 COMMA kSHOPT_OPTION_NAMES_62 COMMA kSHOPT_OPTION_NAMES_63 COMMA kSHOPT_OPTION_NAMES_64 COMMA kSHOPT_OPTION_NAMES_65 COMMA kSHOPT_OPTION_NAMES_66 COMMA kSHOPT_OPTION_NAMES_67 COMMA kSHOPT_OPTION_NAMES_68 COMMA kSHOPT_OPTION_NAMES_69 COMMA kSHOPT_OPTION_NAMES_70 COMMA kSHOPT_OPTION_NAMES_71 COMMA kSHOPT_OPTION_NAMES_72 COMMA kSHOPT_OPTION_NAMES_73 COMMA kSHOPT_OPTION_NAMES_74 COMMA kSHOPT_OPTION_NAMES_75 COMMA kSHOPT_OPTION_NAMES_76 COMMA kSHOPT_OPTION_NAMES_77 COMMA kSHOPT_OPTION_NAMES_78 COMMA kSHOPT_OPTION_NAMES_79 COMMA kSHOPT_OPTION_NAMES_80 COMMA kSHOPT_OPTION_NAMES_81 COMMA kSHOPT_OPTION_NAMES_82 COMMA kSHOPT_OPTION_NAMES_83 COMMA kSHOPT_OPTION_NAMES_84 COMMA kSHOPT_OPTION_NAMES_85 COMMA kSHOPT_OPTION_NAMES_86 COMMA kSHOPT_OPTION_NAMES_87 COMMA kSHOPT_OPTION_NAMES_88 COMMA kSHOPT_OPTION_NAMES_89 COMMA kSHOPT_OPTION_NAMES_90 COMMA kSHOPT_OPTION_NAMES_91});

}  // namespace consts

