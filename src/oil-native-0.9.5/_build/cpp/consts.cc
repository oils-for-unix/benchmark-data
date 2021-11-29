#include "consts.h"

namespace Id = id_kind_asdl::Id;
using id_kind_asdl::Kind;
using types_asdl::redir_arg_type_e;
using types_asdl::bool_arg_type_e;
using option_asdl::builtin_t;

namespace consts {

int NO_INDEX = 0;  // duplicated from frontend/consts.py

List<int>* STRICT_ALL = new List<int>({26, 27, 28, 29, 30, 34, 31, 33, 32});
List<int>* OIL_BASIC = new List<int>({43, 41, 1, 42, 4, 2, 5, 35, 36, 37, 38, 39, 3, 44, 48, 47, 40, 46, 45});
List<int>* OIL_ALL = new List<int>({43, 41, 1, 42, 4, 2, 5, 55, 35, 50, 51, 52, 36, 53, 49, 54, 37, 38, 39, 3, 44, 48, 47, 56, 57, 58, 40, 26, 27, 28, 29, 30, 34, 31, 33, 32, 46, 45});
List<int>* DEFAULT_TRUE = new List<int>({22, 41, 23, 42, 15, 51, 52, 53, 54, 48, 21, 46});
List<int>* PARSE_OPTION_NUMS = new List<int>({42, 55, 35, 50, 51, 52, 36, 53, 19, 49, 54, 37, 38, 59, 39});
List<int>* SHOPT_OPTION_NUMS = new List<int>({25, 22, 65, 66, 67, 68, 69, 70, 71, 64, 43, 20, 72, 41, 73, 74, 75, 23, 18, 76, 42, 77, 17, 78, 16, 79, 80, 81, 82, 62, 83, 84, 63, 85, 4, 86, 60, 87, 88, 89, 90, 91, 92, 93, 94, 5, 55, 35, 50, 51, 52, 36, 53, 19, 49, 54, 37, 38, 59, 39, 44, 61, 95, 96, 24, 48, 97, 98, 47, 56, 57, 58, 40, 99, 26, 27, 28, 29, 30, 34, 31, 33, 32, 21, 100, 46, 45});
List<int>* SET_OPTION_NUMS = new List<int>({13, 1, 15, 10, 6, 9, 2, 3, 11, 8, 12, 7});
List<int>* VISIBLE_SHOPT_NUMS = new List<int>({25, 22, 43, 20, 41, 23, 18, 42, 17, 16, 4, 5, 55, 35, 50, 51, 52, 36, 53, 19, 49, 54, 37, 38, 59, 39, 44, 24, 48, 47, 56, 57, 58, 40, 26, 27, 28, 29, 30, 34, 31, 33, 32, 21, 46, 45});

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
  case Id::Arith_PipeEqual: return Kind::Arith;
  case Id::Arith_CaretEqual: return Kind::Arith;
  case Id::Eof_Real: return Kind::Eof;
  case Id::Eof_RParen: return Kind::Eof;
  case Id::Eof_Backtick: return Kind::Eof;
  case Id::Undefined_Tok: return Kind::Undefined;
  case Id::Unknown_Tok: return Kind::Unknown;
  case Id::Unknown_Backslash: return Kind::Unknown;
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
  case Id::Lit_Underscore: return Kind::Lit;
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
  case Id::Expr_DColon: return Kind::Expr;
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
  case Id::Expr_As: return Kind::Expr;
  case Id::Expr_Virtual: return Kind::Expr;
  case Id::Expr_Override: return Kind::Expr;
  case Id::Expr_Abstract: return Kind::Expr;
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
  case Id::Redir_GreatPlus: return Kind::Redir;
  case Id::Redir_DGreatPlus: return Kind::Redir;
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
  case Id::KW_SetRef: return Kind::KW;
  case Id::KW_SetGlobal: return Kind::KW;
  case Id::KW_Proc: return Kind::KW;
  case Id::KW_Func: return Kind::KW;
  case Id::KW_Data: return Kind::KW;
  case Id::KW_Enum: return Kind::KW;
  case Id::KW_Class: return Kind::KW;
  case Id::KW_Import: return Kind::KW;
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
}

builtin_t LookupNormalBuiltin(Str* s) {
  int len = s->len_;
  if (len == 0) return 0;  // consts.NO_INDEX

  const char* data = s->data_;
  switch (data[0]) {
  case '[':
    if (len == 1 && memcmp("[", data, 1) == 0) return 17;
    break;
  case '_':
    if (len == 5 && memcmp("__cat", data, 5) == 0) return 64;
    break;
  case 'a':
    if (len == 5 && memcmp("alias", data, 5) == 0) return 48;
    if (len == 6 && memcmp("append", data, 6) == 0) return 51;
    if (len == 8 && memcmp("argparse", data, 8) == 0) return 58;
    break;
  case 'b':
    if (len == 2 && memcmp("bg", data, 2) == 0) return 36;
    if (len == 4 && memcmp("bind", data, 4) == 0) return 50;
    break;
  case 'c':
    if (len == 2 && memcmp("cd", data, 2) == 0) return 26;
    if (len == 8 && memcmp("complete", data, 8) == 0) return 38;
    if (len == 7 && memcmp("compgen", data, 7) == 0) return 39;
    if (len == 7 && memcmp("compopt", data, 7) == 0) return 40;
    if (len == 10 && memcmp("compadjust", data, 10) == 0) return 41;
    if (len == 7 && memcmp("command", data, 7) == 0) return 43;
    break;
  case 'd':
    if (len == 4 && memcmp("dirs", data, 4) == 0) return 29;
    break;
  case 'e':
    if (len == 4 && memcmp("echo", data, 4) == 0) return 22;
    break;
  case 'f':
    if (len == 5 && memcmp("false", data, 5) == 0) return 19;
    if (len == 2 && memcmp("fg", data, 2) == 0) return 35;
    if (len == 5 && memcmp("fopen", data, 5) == 0) return 59;
    if (len == 4 && memcmp("fork", data, 4) == 0) return 60;
    if (len == 8 && memcmp("forkwait", data, 8) == 0) return 61;
    break;
  case 'g':
    if (len == 7 && memcmp("getopts", data, 7) == 0) return 42;
    break;
  case 'h':
    if (len == 4 && memcmp("hash", data, 4) == 0) return 45;
    if (len == 4 && memcmp("help", data, 4) == 0) return 46;
    if (len == 7 && memcmp("history", data, 7) == 0) return 47;
    break;
  case 'j':
    if (len == 4 && memcmp("jobs", data, 4) == 0) return 34;
    if (len == 4 && memcmp("json", data, 4) == 0) return 54;
    break;
  case 'm':
    if (len == 7 && memcmp("mapfile", data, 7) == 0) return 24;
    if (len == 6 && memcmp("module", data, 6) == 0) return 56;
    break;
  case 'p':
    if (len == 6 && memcmp("printf", data, 6) == 0) return 23;
    if (len == 5 && memcmp("pushd", data, 5) == 0) return 27;
    if (len == 4 && memcmp("popd", data, 4) == 0) return 28;
    if (len == 3 && memcmp("pwd", data, 3) == 0) return 30;
    if (len == 2 && memcmp("pp", data, 2) == 0) return 55;
    if (len == 14 && memcmp("push-registers", data, 14) == 0) return 63;
    break;
  case 'r':
    if (len == 4 && memcmp("read", data, 4) == 0) return 21;
    if (len == 9 && memcmp("readarray", data, 9) == 0) return 25;
    if (len == 7 && memcmp("runproc", data, 7) == 0) return 62;
    break;
  case 's':
    if (len == 6 && memcmp("source", data, 6) == 0) return 31;
    if (len == 5 && memcmp("shopt", data, 5) == 0) return 37;
    if (len == 5 && memcmp("shvar", data, 5) == 0) return 52;
    break;
  case 't':
    if (len == 4 && memcmp("test", data, 4) == 0) return 16;
    if (len == 4 && memcmp("true", data, 4) == 0) return 18;
    if (len == 3 && memcmp("try", data, 3) == 0) return 20;
    if (len == 4 && memcmp("type", data, 4) == 0) return 44;
    break;
  case 'u':
    if (len == 5 && memcmp("umask", data, 5) == 0) return 32;
    if (len == 7 && memcmp("unalias", data, 7) == 0) return 49;
    if (len == 3 && memcmp("use", data, 3) == 0) return 57;
    break;
  case 'w':
    if (len == 4 && memcmp("wait", data, 4) == 0) return 33;
    if (len == 5 && memcmp("write", data, 5) == 0) return 53;
    break;
  }

  return 0;  // consts.NO_INDEX
}

builtin_t LookupAssignBuiltin(Str* s) {
  int len = s->len_;
  if (len == 0) return 0;  // consts.NO_INDEX

  const char* data = s->data_;
  switch (data[0]) {
  case 'd':
    if (len == 7 && memcmp("declare", data, 7) == 0) return 13;
    break;
  case 'e':
    if (len == 6 && memcmp("export", data, 6) == 0) return 15;
    break;
  case 'l':
    if (len == 5 && memcmp("local", data, 5) == 0) return 12;
    break;
  case 'r':
    if (len == 8 && memcmp("readonly", data, 8) == 0) return 11;
    break;
  case 't':
    if (len == 7 && memcmp("typeset", data, 7) == 0) return 14;
    break;
  }

  return 0;  // consts.NO_INDEX
}

builtin_t LookupSpecialBuiltin(Str* s) {
  int len = s->len_;
  if (len == 0) return 0;  // consts.NO_INDEX

  const char* data = s->data_;
  switch (data[0]) {
  case '.':
    if (len == 1 && memcmp(".", data, 1) == 0) return 2;
    break;
  case ':':
    if (len == 1 && memcmp(":", data, 1) == 0) return 1;
    break;
  case 'b':
    if (len == 7 && memcmp("builtin", data, 7) == 0) return 10;
    break;
  case 'e':
    if (len == 4 && memcmp("exec", data, 4) == 0) return 3;
    if (len == 4 && memcmp("eval", data, 4) == 0) return 4;
    break;
  case 's':
    if (len == 3 && memcmp("set", data, 3) == 0) return 5;
    if (len == 5 && memcmp("shift", data, 5) == 0) return 6;
    break;
  case 't':
    if (len == 5 && memcmp("times", data, 5) == 0) return 7;
    if (len == 4 && memcmp("trap", data, 4) == 0) return 8;
    break;
  case 'u':
    if (len == 5 && memcmp("unset", data, 5) == 0) return 9;
    break;
  }

  return 0;  // consts.NO_INDEX
}

bool IsControlFlow(Str* s) {
  int len = s->len_;
  if (len == 0) return false;

  const char* data = s->data_;
  switch (data[0]) {
  case 'b':
    if (len == 5 && memcmp("break", data, 5) == 0) return true;
    break;
  case 'c':
    if (len == 8 && memcmp("continue", data, 8) == 0) return true;
    break;
  case 'e':
    if (len == 4 && memcmp("exit", data, 4) == 0) return true;
    break;
  case 'r':
    if (len == 6 && memcmp("return", data, 6) == 0) return true;
    break;
  }

  return false;
}

bool IsKeyword(Str* s) {
  int len = s->len_;
  if (len == 0) return false;

  const char* data = s->data_;
  switch (data[0]) {
  case '!':
    if (len == 1 && memcmp("!", data, 1) == 0) return true;
    break;
  case '[':
    if (len == 2 && memcmp("[[", data, 2) == 0) return true;
    break;
  case 'c':
    if (len == 4 && memcmp("case", data, 4) == 0) return true;
    if (len == 5 && memcmp("const", data, 5) == 0) return true;
    if (len == 5 && memcmp("class", data, 5) == 0) return true;
    break;
  case 'd':
    if (len == 2 && memcmp("do", data, 2) == 0) return true;
    if (len == 4 && memcmp("done", data, 4) == 0) return true;
    if (len == 4 && memcmp("data", data, 4) == 0) return true;
    break;
  case 'e':
    if (len == 4 && memcmp("esac", data, 4) == 0) return true;
    if (len == 4 && memcmp("else", data, 4) == 0) return true;
    if (len == 4 && memcmp("elif", data, 4) == 0) return true;
    if (len == 4 && memcmp("enum", data, 4) == 0) return true;
    break;
  case 'f':
    if (len == 3 && memcmp("for", data, 3) == 0) return true;
    if (len == 2 && memcmp("fi", data, 2) == 0) return true;
    if (len == 8 && memcmp("function", data, 8) == 0) return true;
    if (len == 4 && memcmp("func", data, 4) == 0) return true;
    break;
  case 'i':
    if (len == 2 && memcmp("in", data, 2) == 0) return true;
    if (len == 2 && memcmp("if", data, 2) == 0) return true;
    if (len == 6 && memcmp("import", data, 6) == 0) return true;
    break;
  case 'p':
    if (len == 4 && memcmp("proc", data, 4) == 0) return true;
    break;
  case 's':
    if (len == 6 && memcmp("setvar", data, 6) == 0) return true;
    if (len == 6 && memcmp("setref", data, 6) == 0) return true;
    if (len == 9 && memcmp("setglobal", data, 9) == 0) return true;
    break;
  case 't':
    if (len == 4 && memcmp("then", data, 4) == 0) return true;
    if (len == 4 && memcmp("time", data, 4) == 0) return true;
    break;
  case 'u':
    if (len == 5 && memcmp("until", data, 5) == 0) return true;
    break;
  case 'v':
    if (len == 3 && memcmp("var", data, 3) == 0) return true;
    break;
  case 'w':
    if (len == 5 && memcmp("while", data, 5) == 0) return true;
    break;
  case '{':
    if (len == 1 && memcmp("{", data, 1) == 0) return true;
    break;
  }

  return false;
}

Str* LookupCharC(Str* c) {
  assert(c->len_ == 1);

  char ch = c->data_[0];

  // TODO-intern: return value
  switch (ch) {
  case '\"':
    return new Str("\"");
    break;
  case '\'':
    return new Str("\'");
    break;
  case '0':
    return new Str("\0");
    break;
  case 'E':
    return new Str("\x1b");
    break;
  case '\\':
    return new Str("\\");
    break;
  case 'a':
    return new Str("\a");
    break;
  case 'b':
    return new Str("\b");
    break;
  case 'e':
    return new Str("\x1b");
    break;
  case 'f':
    return new Str("\f");
    break;
  case 'n':
    return new Str("\n");
    break;
  case 'r':
    return new Str("\r");
    break;
  case 't':
    return new Str("\t");
    break;
  case 'v':
    return new Str("\v");
    break;
  default:
    assert(0);

  }
}
Str* LookupCharPrompt(Str* c) {
  assert(c->len_ == 1);

  char ch = c->data_[0];

  // TODO-intern: return value
  switch (ch) {
  case '\\':
    return new Str("\\");
    break;
  case 'a':
    return new Str("\a");
    break;
  case 'e':
    return new Str("\x1b");
    break;
  case 'n':
    return new Str("\n");
    break;
  case 'r':
    return new Str("\r");
    break;
  default:
    return nullptr;

  }
}
Str* OptionName(option_asdl::option_t opt_num) {
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
  case 6:
    s = "noexec";
    break;
  case 7:
    s = "xtrace";
    break;
  case 8:
    s = "verbose";
    break;
  case 9:
    s = "noglob";
    break;
  case 10:
    s = "noclobber";
    break;
  case 11:
    s = "posix";
    break;
  case 12:
    s = "vi";
    break;
  case 13:
    s = "emacs";
    break;
  case 15:
    s = "hashall";
    break;
  default:
    assert(0);
  }
  return new Str(s);  // TODO-intern
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

}  // namespace consts

