#ifndef ID_KIND_ASDL_H
#define ID_KIND_ASDL_H

namespace id_kind_asdl {
namespace Id {
  const int Word_Compound = 1;
  const int Arith_Semi = 2;
  const int Arith_Comma = 3;
  const int Arith_Plus = 4;
  const int Arith_Minus = 5;
  const int Arith_Star = 6;
  const int Arith_Slash = 7;
  const int Arith_Percent = 8;
  const int Arith_DPlus = 9;
  const int Arith_DMinus = 10;
  const int Arith_DStar = 11;
  const int Arith_LParen = 12;
  const int Arith_RParen = 13;
  const int Arith_LBracket = 14;
  const int Arith_RBracket = 15;
  const int Arith_RBrace = 16;
  const int Arith_QMark = 17;
  const int Arith_Colon = 18;
  const int Arith_LessEqual = 19;
  const int Arith_Less = 20;
  const int Arith_GreatEqual = 21;
  const int Arith_Great = 22;
  const int Arith_DEqual = 23;
  const int Arith_NEqual = 24;
  const int Arith_DAmp = 25;
  const int Arith_DPipe = 26;
  const int Arith_Bang = 27;
  const int Arith_DGreat = 28;
  const int Arith_DLess = 29;
  const int Arith_Amp = 30;
  const int Arith_Pipe = 31;
  const int Arith_Caret = 32;
  const int Arith_Tilde = 33;
  const int Arith_Equal = 34;
  const int Arith_PlusEqual = 35;
  const int Arith_MinusEqual = 36;
  const int Arith_StarEqual = 37;
  const int Arith_SlashEqual = 38;
  const int Arith_PercentEqual = 39;
  const int Arith_DGreatEqual = 40;
  const int Arith_DLessEqual = 41;
  const int Arith_AmpEqual = 42;
  const int Arith_PipeEqual = 43;
  const int Arith_CaretEqual = 44;
  const int Eof_Real = 45;
  const int Eof_RParen = 46;
  const int Eof_Backtick = 47;
  const int Undefined_Tok = 48;
  const int Unknown_Tok = 49;
  const int Eol_Tok = 50;
  const int Ignored_LineCont = 51;
  const int Ignored_Space = 52;
  const int Ignored_Comment = 53;
  const int WS_Space = 54;
  const int Lit_Chars = 55;
  const int Lit_VarLike = 56;
  const int Lit_ArrayLhsOpen = 57;
  const int Lit_ArrayLhsClose = 58;
  const int Lit_Splice = 59;
  const int Lit_Other = 60;
  const int Lit_EscapedChar = 61;
  const int Lit_RegexMeta = 62;
  const int Lit_LBracket = 63;
  const int Lit_RBracket = 64;
  const int Lit_Star = 65;
  const int Lit_QMark = 66;
  const int Lit_LBrace = 67;
  const int Lit_RBrace = 68;
  const int Lit_Comma = 69;
  const int Lit_Equals = 70;
  const int Lit_DRightBracket = 71;
  const int Lit_TildeLike = 72;
  const int Lit_Pound = 73;
  const int Lit_Slash = 74;
  const int Lit_Percent = 75;
  const int Lit_Digits = 76;
  const int Lit_At = 77;
  const int Lit_ArithVarLike = 78;
  const int Lit_CompDummy = 79;
  const int Backtick_Right = 80;
  const int Backtick_Quoted = 81;
  const int Backtick_Other = 82;
  const int History_Op = 83;
  const int History_Num = 84;
  const int History_Search = 85;
  const int History_Other = 86;
  const int Op_Newline = 87;
  const int Op_Amp = 88;
  const int Op_Pipe = 89;
  const int Op_PipeAmp = 90;
  const int Op_DAmp = 91;
  const int Op_DPipe = 92;
  const int Op_Semi = 93;
  const int Op_DSemi = 94;
  const int Op_LParen = 95;
  const int Op_RParen = 96;
  const int Op_DLeftParen = 97;
  const int Op_DRightParen = 98;
  const int Op_Less = 99;
  const int Op_Great = 100;
  const int Op_Bang = 101;
  const int Op_LBracket = 102;
  const int Op_RBracket = 103;
  const int Op_LBrace = 104;
  const int Op_RBrace = 105;
  const int Expr_Reserved = 106;
  const int Expr_Symbol = 107;
  const int Expr_Name = 108;
  const int Expr_DecInt = 109;
  const int Expr_BinInt = 110;
  const int Expr_OctInt = 111;
  const int Expr_HexInt = 112;
  const int Expr_Float = 113;
  const int Expr_Dot = 114;
  const int Expr_DColon = 115;
  const int Expr_RArrow = 116;
  const int Expr_RDArrow = 117;
  const int Expr_At = 118;
  const int Expr_DoubleAt = 119;
  const int Expr_Ellipsis = 120;
  const int Expr_Dollar = 121;
  const int Expr_NotTilde = 122;
  const int Expr_CastedDummy = 123;
  const int Expr_Null = 124;
  const int Expr_True = 125;
  const int Expr_False = 126;
  const int Expr_Div = 127;
  const int Expr_Mod = 128;
  const int Expr_Xor = 129;
  const int Expr_And = 130;
  const int Expr_Or = 131;
  const int Expr_Not = 132;
  const int Expr_For = 133;
  const int Expr_Is = 134;
  const int Expr_In = 135;
  const int Expr_If = 136;
  const int Expr_Else = 137;
  const int Expr_Func = 138;
  const int Char_OneChar = 139;
  const int Char_Stop = 140;
  const int Char_Hex = 141;
  const int Char_Octal3 = 142;
  const int Char_Octal4 = 143;
  const int Char_Unicode4 = 144;
  const int Char_Unicode8 = 145;
  const int Char_Literals = 146;
  const int Char_BadBackslash = 147;
  const int Re_Start = 148;
  const int Re_End = 149;
  const int Re_Dot = 150;
  const int Redir_Less = 151;
  const int Redir_Great = 152;
  const int Redir_DLess = 153;
  const int Redir_TLess = 154;
  const int Redir_DGreat = 155;
  const int Redir_GreatAnd = 156;
  const int Redir_LessAnd = 157;
  const int Redir_DLessDash = 158;
  const int Redir_LessGreat = 159;
  const int Redir_Clobber = 160;
  const int Redir_AndGreat = 161;
  const int Redir_AndDGreat = 162;
  const int Redir_GreatPlus = 163;
  const int Redir_DGreatPlus = 164;
  const int Left_DoubleQuote = 165;
  const int Left_SingleQuoteRaw = 166;
  const int Left_SingleQuoteC = 167;
  const int Left_Backtick = 168;
  const int Left_DollarParen = 169;
  const int Left_DollarBrace = 170;
  const int Left_DollarDParen = 171;
  const int Left_DollarBracket = 172;
  const int Left_DollarDoubleQuote = 173;
  const int Left_ProcSubIn = 174;
  const int Left_ProcSubOut = 175;
  const int Left_AtBracket = 176;
  const int Left_AtParen = 177;
  const int Right_DoubleQuote = 178;
  const int Right_SingleQuote = 179;
  const int Right_Backtick = 180;
  const int Right_DollarBrace = 181;
  const int Right_DollarDParen = 182;
  const int Right_DollarDoubleQuote = 183;
  const int Right_DollarSingleQuote = 184;
  const int Right_Subshell = 185;
  const int Right_ShFunction = 186;
  const int Right_CasePat = 187;
  const int Right_ShArrayLiteral = 188;
  const int Right_ExtGlob = 189;
  const int ExtGlob_At = 190;
  const int ExtGlob_Star = 191;
  const int ExtGlob_Plus = 192;
  const int ExtGlob_QMark = 193;
  const int ExtGlob_Bang = 194;
  const int VSub_DollarName = 195;
  const int VSub_Name = 196;
  const int VSub_Number = 197;
  const int VSub_Bang = 198;
  const int VSub_At = 199;
  const int VSub_Pound = 200;
  const int VSub_Dollar = 201;
  const int VSub_Star = 202;
  const int VSub_Hyphen = 203;
  const int VSub_QMark = 204;
  const int VTest_ColonHyphen = 205;
  const int VTest_Hyphen = 206;
  const int VTest_ColonEquals = 207;
  const int VTest_Equals = 208;
  const int VTest_ColonQMark = 209;
  const int VTest_QMark = 210;
  const int VTest_ColonPlus = 211;
  const int VTest_Plus = 212;
  const int VOp0_Q = 213;
  const int VOp0_E = 214;
  const int VOp0_P = 215;
  const int VOp0_A = 216;
  const int VOp0_a = 217;
  const int VOp1_Percent = 218;
  const int VOp1_DPercent = 219;
  const int VOp1_Pound = 220;
  const int VOp1_DPound = 221;
  const int VOp1_Caret = 222;
  const int VOp1_DCaret = 223;
  const int VOp1_Comma = 224;
  const int VOp1_DComma = 225;
  const int VOp2_Slash = 226;
  const int VOp2_Colon = 227;
  const int VOp2_LBracket = 228;
  const int VOp2_RBracket = 229;
  const int VOp3_At = 230;
  const int VOp3_Star = 231;
  const int Node_PostDPlus = 232;
  const int Node_PostDMinus = 233;
  const int Node_UnaryPlus = 234;
  const int Node_UnaryMinus = 235;
  const int Node_NotIn = 236;
  const int Node_IsNot = 237;
  const int KW_DLeftBracket = 238;
  const int KW_Bang = 239;
  const int KW_For = 240;
  const int KW_While = 241;
  const int KW_Until = 242;
  const int KW_Do = 243;
  const int KW_Done = 244;
  const int KW_In = 245;
  const int KW_Case = 246;
  const int KW_Esac = 247;
  const int KW_If = 248;
  const int KW_Fi = 249;
  const int KW_Then = 250;
  const int KW_Else = 251;
  const int KW_Elif = 252;
  const int KW_Function = 253;
  const int KW_Time = 254;
  const int KW_Const = 255;
  const int KW_Var = 256;
  const int KW_SetVar = 257;
  const int KW_SetRef = 258;
  const int KW_Set = 259;
  const int KW_SetLocal = 260;
  const int KW_SetGlobal = 261;
  const int KW_Proc = 262;
  const int KW_Func = 263;
  const int KW_Pass = 264;
  const int ControlFlow_Break = 265;
  const int ControlFlow_Continue = 266;
  const int ControlFlow_Return = 267;
  const int ControlFlow_Exit = 268;
  const int Glob_LBracket = 269;
  const int Glob_RBracket = 270;
  const int Glob_Star = 271;
  const int Glob_QMark = 272;
  const int Glob_Bang = 273;
  const int Glob_Caret = 274;
  const int Glob_EscapedChar = 275;
  const int Glob_BadBackslash = 276;
  const int Glob_CleanLiterals = 277;
  const int Glob_OtherLiteral = 278;
  const int Format_EscapedPercent = 279;
  const int Format_Percent = 280;
  const int Format_Flag = 281;
  const int Format_Num = 282;
  const int Format_Dot = 283;
  const int Format_Type = 284;
  const int Format_Star = 285;
  const int Format_Time = 286;
  const int Format_Zero = 287;
  const int PS_Subst = 288;
  const int PS_Octal3 = 289;
  const int PS_LBrace = 290;
  const int PS_RBrace = 291;
  const int PS_Literals = 292;
  const int PS_BadBackslash = 293;
  const int Range_Int = 294;
  const int Range_Char = 295;
  const int Range_Dots = 296;
  const int Range_Other = 297;
  const int QSN_LiteralBytes = 298;
  const int QSN_SpecialByte = 299;
  const int QSN_Begin2 = 300;
  const int QSN_Begin3 = 301;
  const int QSN_Begin4 = 302;
  const int QSN_Cont = 303;
  const int BoolUnary_z = 304;
  const int BoolUnary_n = 305;
  const int BoolUnary_o = 306;
  const int BoolUnary_t = 307;
  const int BoolUnary_v = 308;
  const int BoolUnary_R = 309;
  const int BoolUnary_a = 310;
  const int BoolUnary_b = 311;
  const int BoolUnary_c = 312;
  const int BoolUnary_d = 313;
  const int BoolUnary_e = 314;
  const int BoolUnary_f = 315;
  const int BoolUnary_g = 316;
  const int BoolUnary_h = 317;
  const int BoolUnary_k = 318;
  const int BoolUnary_L = 319;
  const int BoolUnary_p = 320;
  const int BoolUnary_r = 321;
  const int BoolUnary_s = 322;
  const int BoolUnary_S = 323;
  const int BoolUnary_u = 324;
  const int BoolUnary_w = 325;
  const int BoolUnary_x = 326;
  const int BoolUnary_O = 327;
  const int BoolUnary_G = 328;
  const int BoolUnary_N = 329;
  const int BoolBinary_GlobEqual = 330;
  const int BoolBinary_GlobDEqual = 331;
  const int BoolBinary_GlobNEqual = 332;
  const int BoolBinary_EqualTilde = 333;
  const int BoolBinary_ef = 334;
  const int BoolBinary_nt = 335;
  const int BoolBinary_ot = 336;
  const int BoolBinary_eq = 337;
  const int BoolBinary_ne = 338;
  const int BoolBinary_gt = 339;
  const int BoolBinary_ge = 340;
  const int BoolBinary_lt = 341;
  const int BoolBinary_le = 342;
  const int BoolBinary_Equal = 343;
  const int BoolBinary_DEqual = 344;
  const int BoolBinary_NEqual = 345;
  const int ARRAY_SIZE = 346;
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
  VOp2 = 24,
  VOp3 = 25,
  Node = 26,
  KW = 27,
  ControlFlow = 28,
  Glob = 29,
  Format = 30,
  PS = 31,
  Range = 32,
  QSN = 33,
  BoolUnary = 34,
  BoolBinary = 35,
};
typedef Kind Kind_t;

const char* Kind_str(Kind tag);


}  // namespace id_kind_asdl

#endif  // ID_KIND_ASDL_H
