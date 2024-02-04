#include <assert.h>
#include "_gen/frontend/id_kind.asdl.h"
#include "mycpp/gc_alloc.h"  // StrFromC()

namespace id_kind_asdl {

BigStr* Id_str(int tag, bool dot) {
  char buf[32];
  const char* v = nullptr;
  switch (tag) {
  case Id::Word_Compound:
    v = "Word_Compound"; break;
  case Id::Arith_Semi:
    v = "Arith_Semi"; break;
  case Id::Arith_Comma:
    v = "Arith_Comma"; break;
  case Id::Arith_Plus:
    v = "Arith_Plus"; break;
  case Id::Arith_Minus:
    v = "Arith_Minus"; break;
  case Id::Arith_Star:
    v = "Arith_Star"; break;
  case Id::Arith_Slash:
    v = "Arith_Slash"; break;
  case Id::Arith_Percent:
    v = "Arith_Percent"; break;
  case Id::Arith_DPlus:
    v = "Arith_DPlus"; break;
  case Id::Arith_DMinus:
    v = "Arith_DMinus"; break;
  case Id::Arith_DStar:
    v = "Arith_DStar"; break;
  case Id::Arith_LParen:
    v = "Arith_LParen"; break;
  case Id::Arith_RParen:
    v = "Arith_RParen"; break;
  case Id::Arith_LBracket:
    v = "Arith_LBracket"; break;
  case Id::Arith_RBracket:
    v = "Arith_RBracket"; break;
  case Id::Arith_RBrace:
    v = "Arith_RBrace"; break;
  case Id::Arith_QMark:
    v = "Arith_QMark"; break;
  case Id::Arith_Colon:
    v = "Arith_Colon"; break;
  case Id::Arith_LessEqual:
    v = "Arith_LessEqual"; break;
  case Id::Arith_Less:
    v = "Arith_Less"; break;
  case Id::Arith_GreatEqual:
    v = "Arith_GreatEqual"; break;
  case Id::Arith_Great:
    v = "Arith_Great"; break;
  case Id::Arith_DEqual:
    v = "Arith_DEqual"; break;
  case Id::Arith_NEqual:
    v = "Arith_NEqual"; break;
  case Id::Arith_DAmp:
    v = "Arith_DAmp"; break;
  case Id::Arith_DPipe:
    v = "Arith_DPipe"; break;
  case Id::Arith_Bang:
    v = "Arith_Bang"; break;
  case Id::Arith_DGreat:
    v = "Arith_DGreat"; break;
  case Id::Arith_DLess:
    v = "Arith_DLess"; break;
  case Id::Arith_Amp:
    v = "Arith_Amp"; break;
  case Id::Arith_Pipe:
    v = "Arith_Pipe"; break;
  case Id::Arith_Caret:
    v = "Arith_Caret"; break;
  case Id::Arith_Tilde:
    v = "Arith_Tilde"; break;
  case Id::Arith_Equal:
    v = "Arith_Equal"; break;
  case Id::Arith_PlusEqual:
    v = "Arith_PlusEqual"; break;
  case Id::Arith_MinusEqual:
    v = "Arith_MinusEqual"; break;
  case Id::Arith_StarEqual:
    v = "Arith_StarEqual"; break;
  case Id::Arith_SlashEqual:
    v = "Arith_SlashEqual"; break;
  case Id::Arith_PercentEqual:
    v = "Arith_PercentEqual"; break;
  case Id::Arith_DGreatEqual:
    v = "Arith_DGreatEqual"; break;
  case Id::Arith_DLessEqual:
    v = "Arith_DLessEqual"; break;
  case Id::Arith_AmpEqual:
    v = "Arith_AmpEqual"; break;
  case Id::Arith_CaretEqual:
    v = "Arith_CaretEqual"; break;
  case Id::Arith_PipeEqual:
    v = "Arith_PipeEqual"; break;
  case Id::Eof_Real:
    v = "Eof_Real"; break;
  case Id::Eof_RParen:
    v = "Eof_RParen"; break;
  case Id::Eof_Backtick:
    v = "Eof_Backtick"; break;
  case Id::Undefined_Tok:
    v = "Undefined_Tok"; break;
  case Id::Unknown_Tok:
    v = "Unknown_Tok"; break;
  case Id::Unknown_Backslash:
    v = "Unknown_Backslash"; break;
  case Id::Unknown_DEqual:
    v = "Unknown_DEqual"; break;
  case Id::Eol_Tok:
    v = "Eol_Tok"; break;
  case Id::Ignored_LineCont:
    v = "Ignored_LineCont"; break;
  case Id::Ignored_Space:
    v = "Ignored_Space"; break;
  case Id::Ignored_Comment:
    v = "Ignored_Comment"; break;
  case Id::WS_Space:
    v = "WS_Space"; break;
  case Id::Lit_Chars:
    v = "Lit_Chars"; break;
  case Id::Lit_VarLike:
    v = "Lit_VarLike"; break;
  case Id::Lit_ArrayLhsOpen:
    v = "Lit_ArrayLhsOpen"; break;
  case Id::Lit_ArrayLhsClose:
    v = "Lit_ArrayLhsClose"; break;
  case Id::Lit_Splice:
    v = "Lit_Splice"; break;
  case Id::Lit_AtLBracket:
    v = "Lit_AtLBracket"; break;
  case Id::Lit_AtLBraceDot:
    v = "Lit_AtLBraceDot"; break;
  case Id::Lit_Other:
    v = "Lit_Other"; break;
  case Id::Lit_EscapedChar:
    v = "Lit_EscapedChar"; break;
  case Id::Lit_RegexMeta:
    v = "Lit_RegexMeta"; break;
  case Id::Lit_LBracket:
    v = "Lit_LBracket"; break;
  case Id::Lit_RBracket:
    v = "Lit_RBracket"; break;
  case Id::Lit_Star:
    v = "Lit_Star"; break;
  case Id::Lit_QMark:
    v = "Lit_QMark"; break;
  case Id::Lit_LBrace:
    v = "Lit_LBrace"; break;
  case Id::Lit_RBrace:
    v = "Lit_RBrace"; break;
  case Id::Lit_Comma:
    v = "Lit_Comma"; break;
  case Id::Lit_Equals:
    v = "Lit_Equals"; break;
  case Id::Lit_Dollar:
    v = "Lit_Dollar"; break;
  case Id::Lit_DRightBracket:
    v = "Lit_DRightBracket"; break;
  case Id::Lit_TildeLike:
    v = "Lit_TildeLike"; break;
  case Id::Lit_Pound:
    v = "Lit_Pound"; break;
  case Id::Lit_TPound:
    v = "Lit_TPound"; break;
  case Id::Lit_TDot:
    v = "Lit_TDot"; break;
  case Id::Lit_Slash:
    v = "Lit_Slash"; break;
  case Id::Lit_Percent:
    v = "Lit_Percent"; break;
  case Id::Lit_Colon:
    v = "Lit_Colon"; break;
  case Id::Lit_Digits:
    v = "Lit_Digits"; break;
  case Id::Lit_At:
    v = "Lit_At"; break;
  case Id::Lit_ArithVarLike:
    v = "Lit_ArithVarLike"; break;
  case Id::Lit_BadBackslash:
    v = "Lit_BadBackslash"; break;
  case Id::Lit_CompDummy:
    v = "Lit_CompDummy"; break;
  case Id::Backtick_Right:
    v = "Backtick_Right"; break;
  case Id::Backtick_Quoted:
    v = "Backtick_Quoted"; break;
  case Id::Backtick_DoubleQuote:
    v = "Backtick_DoubleQuote"; break;
  case Id::Backtick_Other:
    v = "Backtick_Other"; break;
  case Id::History_Op:
    v = "History_Op"; break;
  case Id::History_Num:
    v = "History_Num"; break;
  case Id::History_Search:
    v = "History_Search"; break;
  case Id::History_Other:
    v = "History_Other"; break;
  case Id::Op_Newline:
    v = "Op_Newline"; break;
  case Id::Op_Amp:
    v = "Op_Amp"; break;
  case Id::Op_Pipe:
    v = "Op_Pipe"; break;
  case Id::Op_PipeAmp:
    v = "Op_PipeAmp"; break;
  case Id::Op_DAmp:
    v = "Op_DAmp"; break;
  case Id::Op_DPipe:
    v = "Op_DPipe"; break;
  case Id::Op_Semi:
    v = "Op_Semi"; break;
  case Id::Op_DSemi:
    v = "Op_DSemi"; break;
  case Id::Op_LParen:
    v = "Op_LParen"; break;
  case Id::Op_RParen:
    v = "Op_RParen"; break;
  case Id::Op_DLeftParen:
    v = "Op_DLeftParen"; break;
  case Id::Op_DRightParen:
    v = "Op_DRightParen"; break;
  case Id::Op_Less:
    v = "Op_Less"; break;
  case Id::Op_Great:
    v = "Op_Great"; break;
  case Id::Op_Bang:
    v = "Op_Bang"; break;
  case Id::Op_LBracket:
    v = "Op_LBracket"; break;
  case Id::Op_RBracket:
    v = "Op_RBracket"; break;
  case Id::Op_LBrace:
    v = "Op_LBrace"; break;
  case Id::Op_RBrace:
    v = "Op_RBrace"; break;
  case Id::Expr_Reserved:
    v = "Expr_Reserved"; break;
  case Id::Expr_Symbol:
    v = "Expr_Symbol"; break;
  case Id::Expr_Name:
    v = "Expr_Name"; break;
  case Id::Expr_DecInt:
    v = "Expr_DecInt"; break;
  case Id::Expr_BinInt:
    v = "Expr_BinInt"; break;
  case Id::Expr_OctInt:
    v = "Expr_OctInt"; break;
  case Id::Expr_HexInt:
    v = "Expr_HexInt"; break;
  case Id::Expr_Float:
    v = "Expr_Float"; break;
  case Id::Expr_Bang:
    v = "Expr_Bang"; break;
  case Id::Expr_Dot:
    v = "Expr_Dot"; break;
  case Id::Expr_DDot:
    v = "Expr_DDot"; break;
  case Id::Expr_Colon:
    v = "Expr_Colon"; break;
  case Id::Expr_RArrow:
    v = "Expr_RArrow"; break;
  case Id::Expr_RDArrow:
    v = "Expr_RDArrow"; break;
  case Id::Expr_DSlash:
    v = "Expr_DSlash"; break;
  case Id::Expr_TEqual:
    v = "Expr_TEqual"; break;
  case Id::Expr_NotDEqual:
    v = "Expr_NotDEqual"; break;
  case Id::Expr_TildeDEqual:
    v = "Expr_TildeDEqual"; break;
  case Id::Expr_At:
    v = "Expr_At"; break;
  case Id::Expr_DoubleAt:
    v = "Expr_DoubleAt"; break;
  case Id::Expr_Ellipsis:
    v = "Expr_Ellipsis"; break;
  case Id::Expr_Dollar:
    v = "Expr_Dollar"; break;
  case Id::Expr_NotTilde:
    v = "Expr_NotTilde"; break;
  case Id::Expr_DTilde:
    v = "Expr_DTilde"; break;
  case Id::Expr_NotDTilde:
    v = "Expr_NotDTilde"; break;
  case Id::Expr_DStarEqual:
    v = "Expr_DStarEqual"; break;
  case Id::Expr_DSlashEqual:
    v = "Expr_DSlashEqual"; break;
  case Id::Expr_CastedDummy:
    v = "Expr_CastedDummy"; break;
  case Id::Expr_Null:
    v = "Expr_Null"; break;
  case Id::Expr_True:
    v = "Expr_True"; break;
  case Id::Expr_False:
    v = "Expr_False"; break;
  case Id::Expr_And:
    v = "Expr_And"; break;
  case Id::Expr_Or:
    v = "Expr_Or"; break;
  case Id::Expr_Not:
    v = "Expr_Not"; break;
  case Id::Expr_For:
    v = "Expr_For"; break;
  case Id::Expr_Is:
    v = "Expr_Is"; break;
  case Id::Expr_In:
    v = "Expr_In"; break;
  case Id::Expr_If:
    v = "Expr_If"; break;
  case Id::Expr_Else:
    v = "Expr_Else"; break;
  case Id::Expr_Func:
    v = "Expr_Func"; break;
  case Id::Expr_Capture:
    v = "Expr_Capture"; break;
  case Id::Expr_As:
    v = "Expr_As"; break;
  case Id::Expr_While:
    v = "Expr_While"; break;
  case Id::Expr_Break:
    v = "Expr_Break"; break;
  case Id::Expr_Continue:
    v = "Expr_Continue"; break;
  case Id::Expr_Return:
    v = "Expr_Return"; break;
  case Id::Char_OneChar:
    v = "Char_OneChar"; break;
  case Id::Char_Stop:
    v = "Char_Stop"; break;
  case Id::Char_Hex:
    v = "Char_Hex"; break;
  case Id::Char_YHex:
    v = "Char_YHex"; break;
  case Id::Char_Octal3:
    v = "Char_Octal3"; break;
  case Id::Char_Octal4:
    v = "Char_Octal4"; break;
  case Id::Char_Unicode4:
    v = "Char_Unicode4"; break;
  case Id::Char_SurrogatePair:
    v = "Char_SurrogatePair"; break;
  case Id::Char_Unicode8:
    v = "Char_Unicode8"; break;
  case Id::Char_UBraced:
    v = "Char_UBraced"; break;
  case Id::Char_Pound:
    v = "Char_Pound"; break;
  case Id::Char_Literals:
    v = "Char_Literals"; break;
  case Id::Char_AsciiControl:
    v = "Char_AsciiControl"; break;
  case Id::Re_Start:
    v = "Re_Start"; break;
  case Id::Re_End:
    v = "Re_End"; break;
  case Id::Re_Dot:
    v = "Re_Dot"; break;
  case Id::Redir_Less:
    v = "Redir_Less"; break;
  case Id::Redir_Great:
    v = "Redir_Great"; break;
  case Id::Redir_DLess:
    v = "Redir_DLess"; break;
  case Id::Redir_TLess:
    v = "Redir_TLess"; break;
  case Id::Redir_DGreat:
    v = "Redir_DGreat"; break;
  case Id::Redir_GreatAnd:
    v = "Redir_GreatAnd"; break;
  case Id::Redir_LessAnd:
    v = "Redir_LessAnd"; break;
  case Id::Redir_DLessDash:
    v = "Redir_DLessDash"; break;
  case Id::Redir_LessGreat:
    v = "Redir_LessGreat"; break;
  case Id::Redir_Clobber:
    v = "Redir_Clobber"; break;
  case Id::Redir_AndGreat:
    v = "Redir_AndGreat"; break;
  case Id::Redir_AndDGreat:
    v = "Redir_AndDGreat"; break;
  case Id::Left_DoubleQuote:
    v = "Left_DoubleQuote"; break;
  case Id::Left_SingleQuote:
    v = "Left_SingleQuote"; break;
  case Id::Left_DollarSingleQuote:
    v = "Left_DollarSingleQuote"; break;
  case Id::Left_RSingleQuote:
    v = "Left_RSingleQuote"; break;
  case Id::Left_USingleQuote:
    v = "Left_USingleQuote"; break;
  case Id::Left_BSingleQuote:
    v = "Left_BSingleQuote"; break;
  case Id::Left_TDoubleQuote:
    v = "Left_TDoubleQuote"; break;
  case Id::Left_TSingleQuote:
    v = "Left_TSingleQuote"; break;
  case Id::Left_RTSingleQuote:
    v = "Left_RTSingleQuote"; break;
  case Id::Left_UTSingleQuote:
    v = "Left_UTSingleQuote"; break;
  case Id::Left_BTSingleQuote:
    v = "Left_BTSingleQuote"; break;
  case Id::Left_Backtick:
    v = "Left_Backtick"; break;
  case Id::Left_DollarParen:
    v = "Left_DollarParen"; break;
  case Id::Left_DollarBrace:
    v = "Left_DollarBrace"; break;
  case Id::Left_DollarDParen:
    v = "Left_DollarDParen"; break;
  case Id::Left_DollarBracket:
    v = "Left_DollarBracket"; break;
  case Id::Left_DollarDoubleQuote:
    v = "Left_DollarDoubleQuote"; break;
  case Id::Left_ProcSubIn:
    v = "Left_ProcSubIn"; break;
  case Id::Left_ProcSubOut:
    v = "Left_ProcSubOut"; break;
  case Id::Left_AtParen:
    v = "Left_AtParen"; break;
  case Id::Left_CaretParen:
    v = "Left_CaretParen"; break;
  case Id::Left_CaretBracket:
    v = "Left_CaretBracket"; break;
  case Id::Left_CaretBrace:
    v = "Left_CaretBrace"; break;
  case Id::Left_CaretDoubleQuote:
    v = "Left_CaretDoubleQuote"; break;
  case Id::Left_ColonPipe:
    v = "Left_ColonPipe"; break;
  case Id::Left_PercentParen:
    v = "Left_PercentParen"; break;
  case Id::Right_DoubleQuote:
    v = "Right_DoubleQuote"; break;
  case Id::Right_SingleQuote:
    v = "Right_SingleQuote"; break;
  case Id::Right_Backtick:
    v = "Right_Backtick"; break;
  case Id::Right_DollarBrace:
    v = "Right_DollarBrace"; break;
  case Id::Right_DollarDParen:
    v = "Right_DollarDParen"; break;
  case Id::Right_DollarDoubleQuote:
    v = "Right_DollarDoubleQuote"; break;
  case Id::Right_DollarSingleQuote:
    v = "Right_DollarSingleQuote"; break;
  case Id::Right_Subshell:
    v = "Right_Subshell"; break;
  case Id::Right_ShFunction:
    v = "Right_ShFunction"; break;
  case Id::Right_CasePat:
    v = "Right_CasePat"; break;
  case Id::Right_ShArrayLiteral:
    v = "Right_ShArrayLiteral"; break;
  case Id::Right_ExtGlob:
    v = "Right_ExtGlob"; break;
  case Id::Right_BlockLiteral:
    v = "Right_BlockLiteral"; break;
  case Id::ExtGlob_Comma:
    v = "ExtGlob_Comma"; break;
  case Id::ExtGlob_At:
    v = "ExtGlob_At"; break;
  case Id::ExtGlob_Star:
    v = "ExtGlob_Star"; break;
  case Id::ExtGlob_Plus:
    v = "ExtGlob_Plus"; break;
  case Id::ExtGlob_QMark:
    v = "ExtGlob_QMark"; break;
  case Id::ExtGlob_Bang:
    v = "ExtGlob_Bang"; break;
  case Id::VSub_DollarName:
    v = "VSub_DollarName"; break;
  case Id::VSub_Name:
    v = "VSub_Name"; break;
  case Id::VSub_Number:
    v = "VSub_Number"; break;
  case Id::VSub_Bang:
    v = "VSub_Bang"; break;
  case Id::VSub_At:
    v = "VSub_At"; break;
  case Id::VSub_Pound:
    v = "VSub_Pound"; break;
  case Id::VSub_Dollar:
    v = "VSub_Dollar"; break;
  case Id::VSub_Star:
    v = "VSub_Star"; break;
  case Id::VSub_Hyphen:
    v = "VSub_Hyphen"; break;
  case Id::VSub_QMark:
    v = "VSub_QMark"; break;
  case Id::VSub_Dot:
    v = "VSub_Dot"; break;
  case Id::VTest_ColonHyphen:
    v = "VTest_ColonHyphen"; break;
  case Id::VTest_Hyphen:
    v = "VTest_Hyphen"; break;
  case Id::VTest_ColonEquals:
    v = "VTest_ColonEquals"; break;
  case Id::VTest_Equals:
    v = "VTest_Equals"; break;
  case Id::VTest_ColonQMark:
    v = "VTest_ColonQMark"; break;
  case Id::VTest_QMark:
    v = "VTest_QMark"; break;
  case Id::VTest_ColonPlus:
    v = "VTest_ColonPlus"; break;
  case Id::VTest_Plus:
    v = "VTest_Plus"; break;
  case Id::VOp0_Q:
    v = "VOp0_Q"; break;
  case Id::VOp0_E:
    v = "VOp0_E"; break;
  case Id::VOp0_P:
    v = "VOp0_P"; break;
  case Id::VOp0_A:
    v = "VOp0_A"; break;
  case Id::VOp0_a:
    v = "VOp0_a"; break;
  case Id::VOp1_Percent:
    v = "VOp1_Percent"; break;
  case Id::VOp1_DPercent:
    v = "VOp1_DPercent"; break;
  case Id::VOp1_Pound:
    v = "VOp1_Pound"; break;
  case Id::VOp1_DPound:
    v = "VOp1_DPound"; break;
  case Id::VOp1_Caret:
    v = "VOp1_Caret"; break;
  case Id::VOp1_DCaret:
    v = "VOp1_DCaret"; break;
  case Id::VOp1_Comma:
    v = "VOp1_Comma"; break;
  case Id::VOp1_DComma:
    v = "VOp1_DComma"; break;
  case Id::VOpOil_Pipe:
    v = "VOpOil_Pipe"; break;
  case Id::VOpOil_Space:
    v = "VOpOil_Space"; break;
  case Id::VOp2_Slash:
    v = "VOp2_Slash"; break;
  case Id::VOp2_Colon:
    v = "VOp2_Colon"; break;
  case Id::VOp2_LBracket:
    v = "VOp2_LBracket"; break;
  case Id::VOp2_RBracket:
    v = "VOp2_RBracket"; break;
  case Id::VOp3_At:
    v = "VOp3_At"; break;
  case Id::VOp3_Star:
    v = "VOp3_Star"; break;
  case Id::Node_PostDPlus:
    v = "Node_PostDPlus"; break;
  case Id::Node_PostDMinus:
    v = "Node_PostDMinus"; break;
  case Id::Node_UnaryPlus:
    v = "Node_UnaryPlus"; break;
  case Id::Node_UnaryMinus:
    v = "Node_UnaryMinus"; break;
  case Id::Node_NotIn:
    v = "Node_NotIn"; break;
  case Id::Node_IsNot:
    v = "Node_IsNot"; break;
  case Id::KW_DLeftBracket:
    v = "KW_DLeftBracket"; break;
  case Id::KW_Bang:
    v = "KW_Bang"; break;
  case Id::KW_For:
    v = "KW_For"; break;
  case Id::KW_While:
    v = "KW_While"; break;
  case Id::KW_Until:
    v = "KW_Until"; break;
  case Id::KW_Do:
    v = "KW_Do"; break;
  case Id::KW_Done:
    v = "KW_Done"; break;
  case Id::KW_In:
    v = "KW_In"; break;
  case Id::KW_Case:
    v = "KW_Case"; break;
  case Id::KW_Esac:
    v = "KW_Esac"; break;
  case Id::KW_If:
    v = "KW_If"; break;
  case Id::KW_Fi:
    v = "KW_Fi"; break;
  case Id::KW_Then:
    v = "KW_Then"; break;
  case Id::KW_Else:
    v = "KW_Else"; break;
  case Id::KW_Elif:
    v = "KW_Elif"; break;
  case Id::KW_Function:
    v = "KW_Function"; break;
  case Id::KW_Time:
    v = "KW_Time"; break;
  case Id::KW_Const:
    v = "KW_Const"; break;
  case Id::KW_Var:
    v = "KW_Var"; break;
  case Id::KW_SetVar:
    v = "KW_SetVar"; break;
  case Id::KW_SetGlobal:
    v = "KW_SetGlobal"; break;
  case Id::KW_Call:
    v = "KW_Call"; break;
  case Id::KW_Proc:
    v = "KW_Proc"; break;
  case Id::KW_Func:
    v = "KW_Func"; break;
  case Id::KW_Class:
    v = "KW_Class"; break;
  case Id::KW_Data:
    v = "KW_Data"; break;
  case Id::KW_Enum:
    v = "KW_Enum"; break;
  case Id::ControlFlow_Break:
    v = "ControlFlow_Break"; break;
  case Id::ControlFlow_Continue:
    v = "ControlFlow_Continue"; break;
  case Id::ControlFlow_Return:
    v = "ControlFlow_Return"; break;
  case Id::ControlFlow_Exit:
    v = "ControlFlow_Exit"; break;
  case Id::LookAhead_FuncParens:
    v = "LookAhead_FuncParens"; break;
  case Id::Glob_LBracket:
    v = "Glob_LBracket"; break;
  case Id::Glob_RBracket:
    v = "Glob_RBracket"; break;
  case Id::Glob_Star:
    v = "Glob_Star"; break;
  case Id::Glob_QMark:
    v = "Glob_QMark"; break;
  case Id::Glob_Bang:
    v = "Glob_Bang"; break;
  case Id::Glob_Caret:
    v = "Glob_Caret"; break;
  case Id::Glob_EscapedChar:
    v = "Glob_EscapedChar"; break;
  case Id::Glob_BadBackslash:
    v = "Glob_BadBackslash"; break;
  case Id::Glob_CleanLiterals:
    v = "Glob_CleanLiterals"; break;
  case Id::Glob_OtherLiteral:
    v = "Glob_OtherLiteral"; break;
  case Id::Format_EscapedPercent:
    v = "Format_EscapedPercent"; break;
  case Id::Format_Percent:
    v = "Format_Percent"; break;
  case Id::Format_Flag:
    v = "Format_Flag"; break;
  case Id::Format_Num:
    v = "Format_Num"; break;
  case Id::Format_Dot:
    v = "Format_Dot"; break;
  case Id::Format_Type:
    v = "Format_Type"; break;
  case Id::Format_Star:
    v = "Format_Star"; break;
  case Id::Format_Time:
    v = "Format_Time"; break;
  case Id::Format_Zero:
    v = "Format_Zero"; break;
  case Id::PS_Subst:
    v = "PS_Subst"; break;
  case Id::PS_Octal3:
    v = "PS_Octal3"; break;
  case Id::PS_LBrace:
    v = "PS_LBrace"; break;
  case Id::PS_RBrace:
    v = "PS_RBrace"; break;
  case Id::PS_Literals:
    v = "PS_Literals"; break;
  case Id::PS_BadBackslash:
    v = "PS_BadBackslash"; break;
  case Id::Range_Int:
    v = "Range_Int"; break;
  case Id::Range_Char:
    v = "Range_Char"; break;
  case Id::Range_Dots:
    v = "Range_Dots"; break;
  case Id::Range_Other:
    v = "Range_Other"; break;
  case Id::J8_LBracket:
    v = "J8_LBracket"; break;
  case Id::J8_RBracket:
    v = "J8_RBracket"; break;
  case Id::J8_LBrace:
    v = "J8_LBrace"; break;
  case Id::J8_RBrace:
    v = "J8_RBrace"; break;
  case Id::J8_LParen:
    v = "J8_LParen"; break;
  case Id::J8_RParen:
    v = "J8_RParen"; break;
  case Id::J8_Comma:
    v = "J8_Comma"; break;
  case Id::J8_Colon:
    v = "J8_Colon"; break;
  case Id::J8_Null:
    v = "J8_Null"; break;
  case Id::J8_Bool:
    v = "J8_Bool"; break;
  case Id::J8_Int:
    v = "J8_Int"; break;
  case Id::J8_Float:
    v = "J8_Float"; break;
  case Id::J8_String:
    v = "J8_String"; break;
  case Id::BoolUnary_z:
    v = "BoolUnary_z"; break;
  case Id::BoolUnary_n:
    v = "BoolUnary_n"; break;
  case Id::BoolUnary_o:
    v = "BoolUnary_o"; break;
  case Id::BoolUnary_t:
    v = "BoolUnary_t"; break;
  case Id::BoolUnary_v:
    v = "BoolUnary_v"; break;
  case Id::BoolUnary_R:
    v = "BoolUnary_R"; break;
  case Id::BoolUnary_a:
    v = "BoolUnary_a"; break;
  case Id::BoolUnary_b:
    v = "BoolUnary_b"; break;
  case Id::BoolUnary_c:
    v = "BoolUnary_c"; break;
  case Id::BoolUnary_d:
    v = "BoolUnary_d"; break;
  case Id::BoolUnary_e:
    v = "BoolUnary_e"; break;
  case Id::BoolUnary_f:
    v = "BoolUnary_f"; break;
  case Id::BoolUnary_g:
    v = "BoolUnary_g"; break;
  case Id::BoolUnary_h:
    v = "BoolUnary_h"; break;
  case Id::BoolUnary_k:
    v = "BoolUnary_k"; break;
  case Id::BoolUnary_L:
    v = "BoolUnary_L"; break;
  case Id::BoolUnary_p:
    v = "BoolUnary_p"; break;
  case Id::BoolUnary_r:
    v = "BoolUnary_r"; break;
  case Id::BoolUnary_s:
    v = "BoolUnary_s"; break;
  case Id::BoolUnary_S:
    v = "BoolUnary_S"; break;
  case Id::BoolUnary_u:
    v = "BoolUnary_u"; break;
  case Id::BoolUnary_w:
    v = "BoolUnary_w"; break;
  case Id::BoolUnary_x:
    v = "BoolUnary_x"; break;
  case Id::BoolUnary_O:
    v = "BoolUnary_O"; break;
  case Id::BoolUnary_G:
    v = "BoolUnary_G"; break;
  case Id::BoolUnary_N:
    v = "BoolUnary_N"; break;
  case Id::BoolBinary_GlobEqual:
    v = "BoolBinary_GlobEqual"; break;
  case Id::BoolBinary_GlobDEqual:
    v = "BoolBinary_GlobDEqual"; break;
  case Id::BoolBinary_GlobNEqual:
    v = "BoolBinary_GlobNEqual"; break;
  case Id::BoolBinary_EqualTilde:
    v = "BoolBinary_EqualTilde"; break;
  case Id::BoolBinary_ef:
    v = "BoolBinary_ef"; break;
  case Id::BoolBinary_nt:
    v = "BoolBinary_nt"; break;
  case Id::BoolBinary_ot:
    v = "BoolBinary_ot"; break;
  case Id::BoolBinary_eq:
    v = "BoolBinary_eq"; break;
  case Id::BoolBinary_ne:
    v = "BoolBinary_ne"; break;
  case Id::BoolBinary_gt:
    v = "BoolBinary_gt"; break;
  case Id::BoolBinary_ge:
    v = "BoolBinary_ge"; break;
  case Id::BoolBinary_lt:
    v = "BoolBinary_lt"; break;
  case Id::BoolBinary_le:
    v = "BoolBinary_le"; break;
  case Id::BoolBinary_Equal:
    v = "BoolBinary_Equal"; break;
  case Id::BoolBinary_DEqual:
    v = "BoolBinary_DEqual"; break;
  case Id::BoolBinary_NEqual:
    v = "BoolBinary_NEqual"; break;
  default:
    assert(0);
  }
  if (dot) {
    snprintf(buf, 32, "Id.%s", v);
    return StrFromC(buf);
  } else {
    return StrFromC(v);
  }
}
BigStr* Kind_str(Kind tag, bool dot) {
  char buf[32];
  const char* v = nullptr;
  switch (tag) {
  case Kind::Word:
    v = "Word"; break;
  case Kind::Arith:
    v = "Arith"; break;
  case Kind::Eof:
    v = "Eof"; break;
  case Kind::Undefined:
    v = "Undefined"; break;
  case Kind::Unknown:
    v = "Unknown"; break;
  case Kind::Eol:
    v = "Eol"; break;
  case Kind::Ignored:
    v = "Ignored"; break;
  case Kind::WS:
    v = "WS"; break;
  case Kind::Lit:
    v = "Lit"; break;
  case Kind::Backtick:
    v = "Backtick"; break;
  case Kind::History:
    v = "History"; break;
  case Kind::Op:
    v = "Op"; break;
  case Kind::Expr:
    v = "Expr"; break;
  case Kind::Char:
    v = "Char"; break;
  case Kind::Re:
    v = "Re"; break;
  case Kind::Redir:
    v = "Redir"; break;
  case Kind::Left:
    v = "Left"; break;
  case Kind::Right:
    v = "Right"; break;
  case Kind::ExtGlob:
    v = "ExtGlob"; break;
  case Kind::VSub:
    v = "VSub"; break;
  case Kind::VTest:
    v = "VTest"; break;
  case Kind::VOp0:
    v = "VOp0"; break;
  case Kind::VOp1:
    v = "VOp1"; break;
  case Kind::VOpOil:
    v = "VOpOil"; break;
  case Kind::VOp2:
    v = "VOp2"; break;
  case Kind::VOp3:
    v = "VOp3"; break;
  case Kind::Node:
    v = "Node"; break;
  case Kind::KW:
    v = "KW"; break;
  case Kind::ControlFlow:
    v = "ControlFlow"; break;
  case Kind::LookAhead:
    v = "LookAhead"; break;
  case Kind::Glob:
    v = "Glob"; break;
  case Kind::Format:
    v = "Format"; break;
  case Kind::PS:
    v = "PS"; break;
  case Kind::Range:
    v = "Range"; break;
  case Kind::J8:
    v = "J8"; break;
  case Kind::BoolUnary:
    v = "BoolUnary"; break;
  case Kind::BoolBinary:
    v = "BoolBinary"; break;
  default:
    assert(0);
  }
  if (dot) {
    snprintf(buf, 32, "Kind.%s", v);
    return StrFromC(buf);
  } else {
    return StrFromC(v);
  }
}
}  // namespace id_kind_asdl
