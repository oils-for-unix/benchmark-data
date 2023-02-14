#ifndef ID_KIND_ASDL_H
#define ID_KIND_ASDL_H

namespace id_kind_asdl {

#define ASDL_NAMES struct
ASDL_NAMES Id {
  enum no_name {
  Word_Compound = 1,
  Arith_Semi = 2,
  Arith_Comma = 3,
  Arith_Plus = 4,
  Arith_Minus = 5,
  Arith_Star = 6,
  Arith_Slash = 7,
  Arith_Percent = 8,
  Arith_DPlus = 9,
  Arith_DMinus = 10,
  Arith_DStar = 11,
  Arith_LParen = 12,
  Arith_RParen = 13,
  Arith_LBracket = 14,
  Arith_RBracket = 15,
  Arith_RBrace = 16,
  Arith_QMark = 17,
  Arith_Colon = 18,
  Arith_LessEqual = 19,
  Arith_Less = 20,
  Arith_GreatEqual = 21,
  Arith_Great = 22,
  Arith_DEqual = 23,
  Arith_NEqual = 24,
  Arith_DAmp = 25,
  Arith_DPipe = 26,
  Arith_Bang = 27,
  Arith_DGreat = 28,
  Arith_DLess = 29,
  Arith_Amp = 30,
  Arith_Pipe = 31,
  Arith_Caret = 32,
  Arith_Tilde = 33,
  Arith_Equal = 34,
  Arith_PlusEqual = 35,
  Arith_MinusEqual = 36,
  Arith_StarEqual = 37,
  Arith_SlashEqual = 38,
  Arith_PercentEqual = 39,
  Arith_DGreatEqual = 40,
  Arith_DLessEqual = 41,
  Arith_AmpEqual = 42,
  Arith_PipeEqual = 43,
  Arith_CaretEqual = 44,
  Eof_Real = 45,
  Eof_RParen = 46,
  Eof_Backtick = 47,
  Undefined_Tok = 48,
  Unknown_Tok = 49,
  Unknown_Backslash = 50,
  Unknown_DEqual = 51,
  Eol_Tok = 52,
  Ignored_LineCont = 53,
  Ignored_Space = 54,
  Ignored_Comment = 55,
  WS_Space = 56,
  Lit_Chars = 57,
  Lit_VarLike = 58,
  Lit_ArrayLhsOpen = 59,
  Lit_ArrayLhsClose = 60,
  Lit_Splice = 61,
  Lit_AtLBraceDot = 62,
  Lit_Other = 63,
  Lit_EscapedChar = 64,
  Lit_RegexMeta = 65,
  Lit_LBracket = 66,
  Lit_RBracket = 67,
  Lit_Star = 68,
  Lit_QMark = 69,
  Lit_LBrace = 70,
  Lit_RBrace = 71,
  Lit_Comma = 72,
  Lit_Equals = 73,
  Lit_Underscore = 74,
  Lit_Dollar = 75,
  Lit_DRightBracket = 76,
  Lit_TildeLike = 77,
  Lit_Pound = 78,
  Lit_TPound = 79,
  Lit_TDot = 80,
  Lit_Slash = 81,
  Lit_Percent = 82,
  Lit_Colon = 83,
  Lit_Digits = 84,
  Lit_At = 85,
  Lit_ArithVarLike = 86,
  Lit_BadBackslash = 87,
  Lit_CompDummy = 88,
  Backtick_Right = 89,
  Backtick_Quoted = 90,
  Backtick_DoubleQuote = 91,
  Backtick_Other = 92,
  History_Op = 93,
  History_Num = 94,
  History_Search = 95,
  History_Other = 96,
  Op_Newline = 97,
  Op_Amp = 98,
  Op_Pipe = 99,
  Op_PipeAmp = 100,
  Op_DAmp = 101,
  Op_DPipe = 102,
  Op_Semi = 103,
  Op_DSemi = 104,
  Op_LParen = 105,
  Op_RParen = 106,
  Op_DLeftParen = 107,
  Op_DRightParen = 108,
  Op_Less = 109,
  Op_Great = 110,
  Op_Bang = 111,
  Op_LBracket = 112,
  Op_RBracket = 113,
  Op_LBrace = 114,
  Op_RBrace = 115,
  Expr_Reserved = 116,
  Expr_Symbol = 117,
  Expr_Name = 118,
  Expr_DecInt = 119,
  Expr_BinInt = 120,
  Expr_OctInt = 121,
  Expr_HexInt = 122,
  Expr_Float = 123,
  Expr_Bang = 124,
  Expr_Dot = 125,
  Expr_DColon = 126,
  Expr_RArrow = 127,
  Expr_RDArrow = 128,
  Expr_DSlash = 129,
  Expr_TEqual = 130,
  Expr_NotDEqual = 131,
  Expr_TildeDEqual = 132,
  Expr_At = 133,
  Expr_DoubleAt = 134,
  Expr_Ellipsis = 135,
  Expr_Dollar = 136,
  Expr_NotTilde = 137,
  Expr_DTilde = 138,
  Expr_NotDTilde = 139,
  Expr_CastedDummy = 140,
  Expr_Null = 141,
  Expr_True = 142,
  Expr_False = 143,
  Expr_And = 144,
  Expr_Or = 145,
  Expr_Not = 146,
  Expr_For = 147,
  Expr_Is = 148,
  Expr_In = 149,
  Expr_If = 150,
  Expr_Else = 151,
  Expr_Func = 152,
  Expr_As = 153,
  Expr_Virtual = 154,
  Expr_Override = 155,
  Expr_Abstract = 156,
  Expr_While = 157,
  Expr_Break = 158,
  Expr_Continue = 159,
  Expr_Return = 160,
  Char_OneChar = 161,
  Char_Stop = 162,
  Char_Hex = 163,
  Char_Octal3 = 164,
  Char_Octal4 = 165,
  Char_Unicode4 = 166,
  Char_Unicode8 = 167,
  Char_UBraced = 168,
  Char_Pound = 169,
  Char_Literals = 170,
  Re_Start = 171,
  Re_End = 172,
  Re_Dot = 173,
  Redir_Less = 174,
  Redir_Great = 175,
  Redir_DLess = 176,
  Redir_TLess = 177,
  Redir_DGreat = 178,
  Redir_GreatAnd = 179,
  Redir_LessAnd = 180,
  Redir_DLessDash = 181,
  Redir_LessGreat = 182,
  Redir_Clobber = 183,
  Redir_AndGreat = 184,
  Redir_AndDGreat = 185,
  Redir_GreatPlus = 186,
  Redir_DGreatPlus = 187,
  Left_DoubleQuote = 188,
  Left_SingleQuote = 189,
  Left_RSingleQuote = 190,
  Left_DollarSingleQuote = 191,
  Left_TDoubleQuote = 192,
  Left_TSingleQuote = 193,
  Left_RTSingleQuote = 194,
  Left_DollarTSingleQuote = 195,
  Left_Backtick = 196,
  Left_DollarParen = 197,
  Left_DollarBrace = 198,
  Left_DollarDParen = 199,
  Left_DollarBracket = 200,
  Left_DollarDoubleQuote = 201,
  Left_ProcSubIn = 202,
  Left_ProcSubOut = 203,
  Left_AtParen = 204,
  Left_CaretParen = 205,
  Left_CaretBracket = 206,
  Left_CaretBrace = 207,
  Left_PercentParen = 208,
  Right_DoubleQuote = 209,
  Right_SingleQuote = 210,
  Right_Backtick = 211,
  Right_DollarBrace = 212,
  Right_DollarDParen = 213,
  Right_DollarDoubleQuote = 214,
  Right_DollarSingleQuote = 215,
  Right_Subshell = 216,
  Right_ShFunction = 217,
  Right_CasePat = 218,
  Right_ShArrayLiteral = 219,
  Right_ExtGlob = 220,
  Right_BlockLiteral = 221,
  ExtGlob_Comma = 222,
  ExtGlob_At = 223,
  ExtGlob_Star = 224,
  ExtGlob_Plus = 225,
  ExtGlob_QMark = 226,
  ExtGlob_Bang = 227,
  VSub_DollarName = 228,
  VSub_Name = 229,
  VSub_Number = 230,
  VSub_Bang = 231,
  VSub_At = 232,
  VSub_Pound = 233,
  VSub_Dollar = 234,
  VSub_Star = 235,
  VSub_Hyphen = 236,
  VSub_QMark = 237,
  VSub_Dot = 238,
  VTest_ColonHyphen = 239,
  VTest_Hyphen = 240,
  VTest_ColonEquals = 241,
  VTest_Equals = 242,
  VTest_ColonQMark = 243,
  VTest_QMark = 244,
  VTest_ColonPlus = 245,
  VTest_Plus = 246,
  VOp0_Q = 247,
  VOp0_E = 248,
  VOp0_P = 249,
  VOp0_A = 250,
  VOp0_a = 251,
  VOp1_Percent = 252,
  VOp1_DPercent = 253,
  VOp1_Pound = 254,
  VOp1_DPound = 255,
  VOp1_Caret = 256,
  VOp1_DCaret = 257,
  VOp1_Comma = 258,
  VOp1_DComma = 259,
  VOpOil_Pipe = 260,
  VOpOil_Space = 261,
  VOp2_Slash = 262,
  VOp2_Colon = 263,
  VOp2_LBracket = 264,
  VOp2_RBracket = 265,
  VOp3_At = 266,
  VOp3_Star = 267,
  Node_PostDPlus = 268,
  Node_PostDMinus = 269,
  Node_UnaryPlus = 270,
  Node_UnaryMinus = 271,
  Node_NotIn = 272,
  Node_IsNot = 273,
  KW_DLeftBracket = 274,
  KW_Bang = 275,
  KW_For = 276,
  KW_While = 277,
  KW_Until = 278,
  KW_Do = 279,
  KW_Done = 280,
  KW_In = 281,
  KW_Case = 282,
  KW_Esac = 283,
  KW_If = 284,
  KW_Fi = 285,
  KW_Then = 286,
  KW_Else = 287,
  KW_Elif = 288,
  KW_Function = 289,
  KW_Time = 290,
  KW_Const = 291,
  KW_Var = 292,
  KW_SetVar = 293,
  KW_SetRef = 294,
  KW_SetGlobal = 295,
  KW_Proc = 296,
  KW_Func = 297,
  KW_Data = 298,
  KW_Enum = 299,
  KW_Class = 300,
  KW_Import = 301,
  ControlFlow_Break = 302,
  ControlFlow_Continue = 303,
  ControlFlow_Return = 304,
  ControlFlow_Exit = 305,
  LookAhead_FuncParens = 306,
  Glob_LBracket = 307,
  Glob_RBracket = 308,
  Glob_Star = 309,
  Glob_QMark = 310,
  Glob_Bang = 311,
  Glob_Caret = 312,
  Glob_EscapedChar = 313,
  Glob_BadBackslash = 314,
  Glob_CleanLiterals = 315,
  Glob_OtherLiteral = 316,
  Format_EscapedPercent = 317,
  Format_Percent = 318,
  Format_Flag = 319,
  Format_Num = 320,
  Format_Dot = 321,
  Format_Type = 322,
  Format_Star = 323,
  Format_Time = 324,
  Format_Zero = 325,
  PS_Subst = 326,
  PS_Octal3 = 327,
  PS_LBrace = 328,
  PS_RBrace = 329,
  PS_Literals = 330,
  PS_BadBackslash = 331,
  Range_Int = 332,
  Range_Char = 333,
  Range_Dots = 334,
  Range_Other = 335,
  QSN_LiteralBytes = 336,
  QSN_SpecialByte = 337,
  QSN_Begin2 = 338,
  QSN_Begin3 = 339,
  QSN_Begin4 = 340,
  QSN_Cont = 341,
  BoolUnary_z = 342,
  BoolUnary_n = 343,
  BoolUnary_o = 344,
  BoolUnary_t = 345,
  BoolUnary_v = 346,
  BoolUnary_R = 347,
  BoolUnary_a = 348,
  BoolUnary_b = 349,
  BoolUnary_c = 350,
  BoolUnary_d = 351,
  BoolUnary_e = 352,
  BoolUnary_f = 353,
  BoolUnary_g = 354,
  BoolUnary_h = 355,
  BoolUnary_k = 356,
  BoolUnary_L = 357,
  BoolUnary_p = 358,
  BoolUnary_r = 359,
  BoolUnary_s = 360,
  BoolUnary_S = 361,
  BoolUnary_u = 362,
  BoolUnary_w = 363,
  BoolUnary_x = 364,
  BoolUnary_O = 365,
  BoolUnary_G = 366,
  BoolUnary_N = 367,
  BoolBinary_GlobEqual = 368,
  BoolBinary_GlobDEqual = 369,
  BoolBinary_GlobNEqual = 370,
  BoolBinary_EqualTilde = 371,
  BoolBinary_ef = 372,
  BoolBinary_nt = 373,
  BoolBinary_ot = 374,
  BoolBinary_eq = 375,
  BoolBinary_ne = 376,
  BoolBinary_gt = 377,
  BoolBinary_ge = 378,
  BoolBinary_lt = 379,
  BoolBinary_le = 380,
  BoolBinary_Equal = 381,
  BoolBinary_DEqual = 382,
  BoolBinary_NEqual = 383,
  ARRAY_SIZE = 384,
  };
};

const char* Id_str(int tag);

typedef int Id_t;

enum class Kind {
  Word = 1,
  Arith = 2,
  Eof = 3,
  Undefined = 4,
  Unknown = 5,
  Eol = 6,
  Ignored = 7,
  WS = 8,
  Lit = 9,
  Backtick = 10,
  History = 11,
  Op = 12,
  Expr = 13,
  Char = 14,
  Re = 15,
  Redir = 16,
  Left = 17,
  Right = 18,
  ExtGlob = 19,
  VSub = 20,
  VTest = 21,
  VOp0 = 22,
  VOp1 = 23,
  VOpOil = 24,
  VOp2 = 25,
  VOp3 = 26,
  Node = 27,
  KW = 28,
  ControlFlow = 29,
  LookAhead = 30,
  Glob = 31,
  Format = 32,
  PS = 33,
  Range = 34,
  QSN = 35,
  BoolUnary = 36,
  BoolBinary = 37,
};
typedef Kind Kind_t;

const char* Kind_str(Kind tag);


}  // namespace id_kind_asdl

#endif  // ID_KIND_ASDL_H
