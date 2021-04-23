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
  const int Unknown_Backslash = 50;
  const int Eol_Tok = 51;
  const int Ignored_LineCont = 52;
  const int Ignored_Space = 53;
  const int Ignored_Comment = 54;
  const int WS_Space = 55;
  const int Lit_Chars = 56;
  const int Lit_VarLike = 57;
  const int Lit_ArrayLhsOpen = 58;
  const int Lit_ArrayLhsClose = 59;
  const int Lit_Splice = 60;
  const int Lit_Other = 61;
  const int Lit_EscapedChar = 62;
  const int Lit_RegexMeta = 63;
  const int Lit_LBracket = 64;
  const int Lit_RBracket = 65;
  const int Lit_Star = 66;
  const int Lit_QMark = 67;
  const int Lit_LBrace = 68;
  const int Lit_RBrace = 69;
  const int Lit_Comma = 70;
  const int Lit_Equals = 71;
  const int Lit_Underscore = 72;
  const int Lit_Dollar = 73;
  const int Lit_DRightBracket = 74;
  const int Lit_TildeLike = 75;
  const int Lit_Pound = 76;
  const int Lit_TPound = 77;
  const int Lit_Slash = 78;
  const int Lit_Percent = 79;
  const int Lit_Colon = 80;
  const int Lit_Digits = 81;
  const int Lit_At = 82;
  const int Lit_ArithVarLike = 83;
  const int Lit_BadBackslash = 84;
  const int Lit_CompDummy = 85;
  const int Backtick_Right = 86;
  const int Backtick_Quoted = 87;
  const int Backtick_Other = 88;
  const int History_Op = 89;
  const int History_Num = 90;
  const int History_Search = 91;
  const int History_Other = 92;
  const int Op_Newline = 93;
  const int Op_Amp = 94;
  const int Op_Pipe = 95;
  const int Op_PipeAmp = 96;
  const int Op_DAmp = 97;
  const int Op_DPipe = 98;
  const int Op_Semi = 99;
  const int Op_DSemi = 100;
  const int Op_LParen = 101;
  const int Op_RParen = 102;
  const int Op_DLeftParen = 103;
  const int Op_DRightParen = 104;
  const int Op_Less = 105;
  const int Op_Great = 106;
  const int Op_Bang = 107;
  const int Op_LBracket = 108;
  const int Op_RBracket = 109;
  const int Op_LBrace = 110;
  const int Op_RBrace = 111;
  const int Expr_Reserved = 112;
  const int Expr_Symbol = 113;
  const int Expr_Name = 114;
  const int Expr_DecInt = 115;
  const int Expr_BinInt = 116;
  const int Expr_OctInt = 117;
  const int Expr_HexInt = 118;
  const int Expr_Float = 119;
  const int Expr_Bang = 120;
  const int Expr_Dot = 121;
  const int Expr_DColon = 122;
  const int Expr_RArrow = 123;
  const int Expr_RDArrow = 124;
  const int Expr_DSlash = 125;
  const int Expr_TildeDEqual = 126;
  const int Expr_At = 127;
  const int Expr_DoubleAt = 128;
  const int Expr_Ellipsis = 129;
  const int Expr_Dollar = 130;
  const int Expr_NotTilde = 131;
  const int Expr_DTilde = 132;
  const int Expr_NotDTilde = 133;
  const int Expr_CastedDummy = 134;
  const int Expr_Null = 135;
  const int Expr_True = 136;
  const int Expr_False = 137;
  const int Expr_And = 138;
  const int Expr_Or = 139;
  const int Expr_Not = 140;
  const int Expr_For = 141;
  const int Expr_Is = 142;
  const int Expr_In = 143;
  const int Expr_If = 144;
  const int Expr_Else = 145;
  const int Expr_Func = 146;
  const int Expr_As = 147;
  const int Expr_Virtual = 148;
  const int Expr_Override = 149;
  const int Expr_Abstract = 150;
  const int Expr_While = 151;
  const int Expr_Break = 152;
  const int Expr_Continue = 153;
  const int Expr_Return = 154;
  const int Char_OneChar = 155;
  const int Char_Stop = 156;
  const int Char_Hex = 157;
  const int Char_Octal3 = 158;
  const int Char_Octal4 = 159;
  const int Char_Unicode4 = 160;
  const int Char_Unicode8 = 161;
  const int Char_UBraced = 162;
  const int Char_Literals = 163;
  const int Re_Start = 164;
  const int Re_End = 165;
  const int Re_Dot = 166;
  const int Redir_Less = 167;
  const int Redir_Great = 168;
  const int Redir_DLess = 169;
  const int Redir_TLess = 170;
  const int Redir_DGreat = 171;
  const int Redir_GreatAnd = 172;
  const int Redir_LessAnd = 173;
  const int Redir_DLessDash = 174;
  const int Redir_LessGreat = 175;
  const int Redir_Clobber = 176;
  const int Redir_AndGreat = 177;
  const int Redir_AndDGreat = 178;
  const int Redir_GreatPlus = 179;
  const int Redir_DGreatPlus = 180;
  const int Left_DoubleQuote = 181;
  const int Left_SingleQuote = 182;
  const int Left_RSingleQuote = 183;
  const int Left_CSingleQuote = 184;
  const int Left_Backtick = 185;
  const int Left_DollarParen = 186;
  const int Left_DollarBrace = 187;
  const int Left_DollarDParen = 188;
  const int Left_DollarBracket = 189;
  const int Left_DollarDoubleQuote = 190;
  const int Left_ProcSubIn = 191;
  const int Left_ProcSubOut = 192;
  const int Left_AtParen = 193;
  const int Left_AmpParen = 194;
  const int Left_PercentParen = 195;
  const int Right_DoubleQuote = 196;
  const int Right_SingleQuote = 197;
  const int Right_Backtick = 198;
  const int Right_DollarBrace = 199;
  const int Right_DollarDParen = 200;
  const int Right_DollarDoubleQuote = 201;
  const int Right_DollarSingleQuote = 202;
  const int Right_Subshell = 203;
  const int Right_ShFunction = 204;
  const int Right_CasePat = 205;
  const int Right_ShArrayLiteral = 206;
  const int Right_ExtGlob = 207;
  const int Right_BlockLiteral = 208;
  const int ExtGlob_Comma = 209;
  const int ExtGlob_At = 210;
  const int ExtGlob_Star = 211;
  const int ExtGlob_Plus = 212;
  const int ExtGlob_QMark = 213;
  const int ExtGlob_Bang = 214;
  const int VSub_DollarName = 215;
  const int VSub_Name = 216;
  const int VSub_Number = 217;
  const int VSub_Bang = 218;
  const int VSub_At = 219;
  const int VSub_Pound = 220;
  const int VSub_Dollar = 221;
  const int VSub_Star = 222;
  const int VSub_Hyphen = 223;
  const int VSub_QMark = 224;
  const int VTest_ColonHyphen = 225;
  const int VTest_Hyphen = 226;
  const int VTest_ColonEquals = 227;
  const int VTest_Equals = 228;
  const int VTest_ColonQMark = 229;
  const int VTest_QMark = 230;
  const int VTest_ColonPlus = 231;
  const int VTest_Plus = 232;
  const int VOp0_Q = 233;
  const int VOp0_E = 234;
  const int VOp0_P = 235;
  const int VOp0_A = 236;
  const int VOp0_a = 237;
  const int VOp1_Percent = 238;
  const int VOp1_DPercent = 239;
  const int VOp1_Pound = 240;
  const int VOp1_DPound = 241;
  const int VOp1_Caret = 242;
  const int VOp1_DCaret = 243;
  const int VOp1_Comma = 244;
  const int VOp1_DComma = 245;
  const int VOp2_Slash = 246;
  const int VOp2_Colon = 247;
  const int VOp2_LBracket = 248;
  const int VOp2_RBracket = 249;
  const int VOp3_At = 250;
  const int VOp3_Star = 251;
  const int Node_PostDPlus = 252;
  const int Node_PostDMinus = 253;
  const int Node_UnaryPlus = 254;
  const int Node_UnaryMinus = 255;
  const int Node_NotIn = 256;
  const int Node_IsNot = 257;
  const int KW_DLeftBracket = 258;
  const int KW_Bang = 259;
  const int KW_For = 260;
  const int KW_While = 261;
  const int KW_Until = 262;
  const int KW_Do = 263;
  const int KW_Done = 264;
  const int KW_In = 265;
  const int KW_Case = 266;
  const int KW_Esac = 267;
  const int KW_If = 268;
  const int KW_Fi = 269;
  const int KW_Then = 270;
  const int KW_Else = 271;
  const int KW_Elif = 272;
  const int KW_Function = 273;
  const int KW_Time = 274;
  const int KW_Const = 275;
  const int KW_Var = 276;
  const int KW_SetVar = 277;
  const int KW_SetRef = 278;
  const int KW_Set = 279;
  const int KW_SetLocal = 280;
  const int KW_SetGlobal = 281;
  const int KW_Proc = 282;
  const int KW_Func = 283;
  const int KW_Data = 284;
  const int KW_Enum = 285;
  const int KW_Class = 286;
  const int KW_Import = 287;
  const int ControlFlow_Break = 288;
  const int ControlFlow_Continue = 289;
  const int ControlFlow_Return = 290;
  const int ControlFlow_Exit = 291;
  const int Glob_LBracket = 292;
  const int Glob_RBracket = 293;
  const int Glob_Star = 294;
  const int Glob_QMark = 295;
  const int Glob_Bang = 296;
  const int Glob_Caret = 297;
  const int Glob_EscapedChar = 298;
  const int Glob_BadBackslash = 299;
  const int Glob_CleanLiterals = 300;
  const int Glob_OtherLiteral = 301;
  const int Format_EscapedPercent = 302;
  const int Format_Percent = 303;
  const int Format_Flag = 304;
  const int Format_Num = 305;
  const int Format_Dot = 306;
  const int Format_Type = 307;
  const int Format_Star = 308;
  const int Format_Time = 309;
  const int Format_Zero = 310;
  const int PS_Subst = 311;
  const int PS_Octal3 = 312;
  const int PS_LBrace = 313;
  const int PS_RBrace = 314;
  const int PS_Literals = 315;
  const int PS_BadBackslash = 316;
  const int Range_Int = 317;
  const int Range_Char = 318;
  const int Range_Dots = 319;
  const int Range_Other = 320;
  const int QSN_LiteralBytes = 321;
  const int QSN_SpecialByte = 322;
  const int QSN_Begin2 = 323;
  const int QSN_Begin3 = 324;
  const int QSN_Begin4 = 325;
  const int QSN_Cont = 326;
  const int BoolUnary_z = 327;
  const int BoolUnary_n = 328;
  const int BoolUnary_o = 329;
  const int BoolUnary_t = 330;
  const int BoolUnary_v = 331;
  const int BoolUnary_R = 332;
  const int BoolUnary_a = 333;
  const int BoolUnary_b = 334;
  const int BoolUnary_c = 335;
  const int BoolUnary_d = 336;
  const int BoolUnary_e = 337;
  const int BoolUnary_f = 338;
  const int BoolUnary_g = 339;
  const int BoolUnary_h = 340;
  const int BoolUnary_k = 341;
  const int BoolUnary_L = 342;
  const int BoolUnary_p = 343;
  const int BoolUnary_r = 344;
  const int BoolUnary_s = 345;
  const int BoolUnary_S = 346;
  const int BoolUnary_u = 347;
  const int BoolUnary_w = 348;
  const int BoolUnary_x = 349;
  const int BoolUnary_O = 350;
  const int BoolUnary_G = 351;
  const int BoolUnary_N = 352;
  const int BoolBinary_GlobEqual = 353;
  const int BoolBinary_GlobDEqual = 354;
  const int BoolBinary_GlobNEqual = 355;
  const int BoolBinary_EqualTilde = 356;
  const int BoolBinary_ef = 357;
  const int BoolBinary_nt = 358;
  const int BoolBinary_ot = 359;
  const int BoolBinary_eq = 360;
  const int BoolBinary_ne = 361;
  const int BoolBinary_gt = 362;
  const int BoolBinary_ge = 363;
  const int BoolBinary_lt = 364;
  const int BoolBinary_le = 365;
  const int BoolBinary_Equal = 366;
  const int BoolBinary_DEqual = 367;
  const int BoolBinary_NEqual = 368;
  const int ARRAY_SIZE = 369;
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
