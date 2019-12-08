// osh_parse.cc: translated from Python by mycpp

#include "mylib.h"
#include "preamble.h"  // hard-coded stuff

Str* str0 = new Str("(");
Str* str1 = new Str(")");
Str* str2 = new Str("_");
Str* str3 = new Str("T");
Str* str4 = new Str("F");
Str* str5 = new Str("");
Str* str6 = new Str("-c");
Str* str7 = new Str("-n");
Str* str8 = new Str("\n");
Str* str9 = new Str("\n<html>\n  <head>\n     <title>oil AST</title>\n     <style>\n      .n { color: brown }\n      .s { font-weight: bold }\n      .o { color: darkgreen }\n     </style>\n  </head>\n  <body>\n    <pre>\n");
Str* str10 = new Str("\n    </pre>\n  </body>\n</html>\n    ");
Str* str11 = new Str("n");
Str* str12 = new Str("s");
Str* str13 = new Str("o");
Str* str14 = new Str("o");
Str* str15 = new Str("o");
Str* str16 = new Str("<span class=\"%s\">");
Str* str17 = new Str("</span>");
Str* str18 = new Str("\u001b[0;0m");
Str* str19 = new Str("\u001b[1m");
Str* str20 = new Str("\u001b[31m");
Str* str21 = new Str("\u001b[32m");
Str* str22 = new Str("\u001b[34m");
Str* str23 = new Str("\u001b[33m");
Str* str24 = new Str("\u001b[36m");
Str* str25 = new Str(" ");
Str* str26 = new Str("\n");
Str* str27 = new Str(" ");
Str* str28 = new Str("]");
Str* str29 = new Str(" ");
Str* str30 = new Str(" ");
Str* str31 = new Str("\n");
Str* str32 = new Str("\n");
Str* str33 = new Str(" ");
Str* str34 = new Str("%s%s: [");
Str* str35 = new Str("\n");
Str* str36 = new Str("\n");
Str* str37 = new Str("%s]");
Str* str38 = new Str("%s%s: ");
Str* str39 = new Str("\n");
Str* str40 = new Str("\n");
Str* str41 = new Str(" ");
Str* str42 = new Str(" ");
Str* str43 = new Str(" ");
Str* str44 = new Str(" %s:");
Str* str45 = new Str("[");
Str* str46 = new Str(" ");
Str* str47 = new Str("]");
Str* str48 = new Str("-c flag");
Str* str49 = new Str("Span ID out of range: %d is greater than %d");
Str* str50 = new Str("/");
Str* str51 = new Str("~");
Str* str52 = new Str("  ");
Str* str53 = new Str("\n  ");
Str* str54 = new Str("\t");
Str* str55 = new Str("\t");
Str* str56 = new Str(" ");
Str* str57 = new Str("^");
Str* str58 = new Str("~");
Str* str59 = new Str("\n");
Str* str60 = new Str("[ interactive ]");
Str* str61 = new Str("[ -c flag ]");
Str* str62 = new Str("[ stdin%s ]");
Str* str63 = new Str("[ expansion of alias %r ]");
Str* str64 = new Str("[ backticks at ... ]");
Str* str65 = new Str("[ array LValue in %s ]");
Str* str66 = new Str("[ eval at line %d of %s ]");
Str* str67 = new Str("[ trap ]");
Str* str68 = new Str("%s:%d: %s%s\n");
Str* str69 = new Str("[??? no location ???] %s%s\n");
Str* str70 = new Str("");
Str* str71 = new Str("");
Str* str72 = new Str("<Trail %s %s %s %s>");
Str* str73 = new Str("");
Str* str74 = new Str("ShAssignment expression can't be nested like this");
Str* str75 = new Str("Here docs aren't allowed in expressions");
Str* str76 = new Str("Couldn't find terminator for here doc that starts here");
Str* str77 = new Str("\t");
Str* str78 = new Str("Invalid here doc delimiter");
Str* str79 = new Str("+");
Str* str80 = new Str("+");
Str* str81 = new Str("+");
Str* str82 = new Str("%d != %d");
Str* str83 = new Str("Environment binding shouldn't look like an array assignment");
Str* str84 = new Str("+");
Str* str85 = new Str("Expected = in environment binding, got +=");
Str* str86 = new Str("Environment bindings can't contain array literals");
Str* str87 = new Str("Expected word type %s, got %s");
Str* str88 = new Str("Invalid token after redirect operator");
Str* str89 = new Str(" ");
Str* str90 = new Str(" ");
Str* str91 = new Str("line IDs %d != %d");
Str* str92 = new Str(" ");
Str* str93 = new Str("");
Str* str94 = new Str("Unexpected block");
Str* str95 = new Str("=word isn't allowed when shopt 'parse_equals' is on.\nHint: add a space after = to pretty print an expression");
Str* str96 = new Str("name=val isn't allowed when shopt 'parse_equals' is on.\nHint: add 'env' before it, or spaces around =");
Str* str97 = new Str("Unexpected block");
Str* str98 = new Str("Unexpected block");
Str* str99 = new Str("Control flow shouldn't have redirects");
Str* str100 = new Str("Control flow shouldn't have environment bindings");
Str* str101 = new Str("Unexpected argument to %r");
Str* str102 = new Str("Invalid word in for loop");
Str* str103 = new Str("Invalid word after for expression");
Str* str104 = new Str("Loop variable name should be a constant");
Str* str105 = new Str("Invalid loop variable name");
Str* str106 = new Str("Unexpected word after for loop variable");
Str* str107 = new Str("Expected ;; or esac");
Str* str108 = new Str("Unexpected word while parsing compound command");
Str* str109 = new Str("Invalid function name");
Str* str110 = new Str("Expected ) in function definition");
Str* str111 = new Str("Invalid KSH-style function name");
Str* str112 = new Str("Unexpected word when parsing command");
Str* str113 = new Str("Unexpected right brace");
Str* str114 = new Str("Unexpected EOF while parsing command");
Str* str115 = new Str("Invalid word while parsing command");
Str* str116 = new Str("Unexpected word while parsing command line");
Str* str117 = new Str("Unterminated here doc began here");
Str* str118 = new Str("&");
Str* str119 = new Str("&amp;");
Str* str120 = new Str("<");
Str* str121 = new Str("&lt;");
Str* str122 = new Str(">");
Str* str123 = new Str("&gt;");
Str* str124 = new Str("");
Str* str125 = new Str("Expected %d, got %d");
Str* str126 = new Str("Step can't be 0");
Str* str127 = new Str("Invalid step %d for ascending integer range");
Str* str128 = new Str("Invalid step %d for descending integer range");
Str* str129 = new Str("Invalid step %d for ascending character range");
Str* str130 = new Str("Invalid step %d for descending character range");
Str* str131 = new Str("Mismatched cases in character range");
Str* str132 = new Str("");
Str* str133 = new Str("0");
Str* str134 = new Str("0");
Str* str135 = new Str("");
Str* str136 = new Str("");
Str* str137 = new Str("");
Str* str138 = new Str("");
Str* str139 = new Str("");
Str* str140 = new Str("");
Str* str141 = new Str("");
Str* str142 = new Str("");
Str* str143 = new Str("");
Str* str144 = new Str("Compound shouldn't be empty");
Str* str145 = new Str("/");
Str* str146 = new Str("");
Str* str147 = new Str("EOF");
Str* str148 = new Str("%s: type=%d, tok=%r");
Str* str149 = new Str("typ");
Str* str150 = new Str("tok");
Str* str151 = new Str("children");
Str* str152 = new Str("-");
Str* str153 = new Str("with %d children");
Str* str154 = new Str("");
Str* str155 = new Str("(PNode %s %s %s)");
Str* str156 = new Str("too much input");
Str* str157 = new Str("bad input");
Str* str158 = new Str("<LineLexer at pos %d of line %r (id = %d)>");
Str* str159 = new Str("");
Str* str160 = new Str("");
Str* str161 = new Str("");
Str* str162 = new Str("");
Str* str163 = new Str("");
Str* str164 = new Str("Unexpected token in slice: %r");
Str* str165 = new Str("/");
Str* str166 = new Str("Pattern in ${x/pat/replace} must not be empty");
Str* str167 = new Str("Expected } after replacement string, got %s");
Str* str168 = new Str("Expected } after pat sub, got %r");
Str* str169 = new Str("Expected ] after subscript, got %r");
Str* str170 = new Str("Unexpected token %r (after %s)");
Str* str171 = new Str("VTest");
Str* str172 = new Str("Unexpected token %r (after %s)");
Str* str173 = new Str("VOp1");
Str* str174 = new Str("Unexpected token after slice: %r");
Str* str175 = new Str("Unexpected token %r (%s)");
Str* str176 = new Str("VOp2");
Str* str177 = new Str("Unexpected token %r (%s)");
Str* str178 = new Str("VOp3");
Str* str179 = new Str("Expected } after var sub, got %r");
Str* str180 = new Str("Expected } after length expression, got %r");
Str* str181 = new Str("Unexpected token %r");
Str* str182 = new Str("\\");
Str* str183 = new Str("Strings with backslashes should look like r'\\n' or c'\\n'");
Str* str184 = new Str("Unexpected EOF in single-quoted string that began here");
Str* str185 = new Str("Unexpected EOF reading extended glob that began here");
Str* str186 = new Str("Unexpected EOF reading double-quoted string that began here");
Str* str187 = new Str("Unexpected EOF while looking for closing backtick");
Str* str188 = new Str("");
Str* str189 = new Str("Invalid proc name %r");
Str* str190 = new Str("Expected first ) to end arith sub, got %r");
Str* str191 = new Str("Expected second ) to end arith sub, got %r");
Str* str192 = new Str("Expected first ) to end arith statement, got %r");
Str* str193 = new Str("Expected second ) to end arith statement, got %r");
Str* str194 = new Str("Expected ) to end for loop expression, got %r");
Str* str195 = new Str("Expected ( after =, got %r");
Str* str196 = new Str("Unexpected token in array literal: %r");
Str* str197 = new Str("Expected associative array pair");
Str* str198 = new Str("Unexpected token after array literal");
Str* str199 = new Str("Unexpected token after array splice");
Str* str200 = new Str("Word has unbalanced { }.  Maybe add a space or quote it like \\{");
Str* str201 = new Str("Unexpected token in arithmetic context");
Str* str202 = new Str("Unhandled: %s (%s)");
Str* str203 = new Str("Invalid lex state %s");
Str* str204 = new Str("Token can't be used in prefix position");
Str* str205 = new Str("Token can't be used in infix position");
Str* str206 = new Str("Left-hand side of this assignment is invalid");
Str* str207 = new Str("Parser expected %s, got %s");
Str* str208 = new Str("Unexpected end of input");
Str* str209 = new Str("Invalid token %s");
Str* str210 = new Str("This value can't be assigned to");
Str* str211 = new Str("The [ operarator doesn't apply to this expression");
Str* str212 = new Str("Expected ]]");
Str* str213 = new Str("Unexpected trailing word %s");
Str* str214 = new Str("Invalid argument to unary operator");
Str* str215 = new Str("Expected ), got %s");
Str* str216 = new Str("Unexpected token in boolean expression");
Str* str217 = new Str("  ");
Str* str218 = new Str("-");
Str* str219 = new Str("%s%d %s %s\n");
Str* str220 = new Str("");
Str* str221 = new Str(" (%s)");
Str* str222 = new Str("Unexpected token in expression mode%s");
Str* str223 = new Str("Syntax error in expression");
Str* str224 = new Str("alnum");
Str* str225 = new Str("cntrl");
Str* str226 = new Str("lower");
Str* str227 = new Str("space");
Str* str228 = new Str("alpha");
Str* str229 = new Str("digit");
Str* str230 = new Str("print");
Str* str231 = new Str("upper");
Str* str232 = new Str("blank");
Str* str233 = new Str("graph");
Str* str234 = new Str("punct");
Str* str235 = new Str("xdigit");
Str* str236 = new Str("Range start/end shouldn't have more than one character");
Str* str237 = new Str("Write singleton tuples with tup(), not a trailing comma");
Str* str238 = new Str("testlist_comp");
Str* str239 = new Str("PNode type %d (%s) wasn't handled");
Str* str240 = new Str("Can't assign to this expression");
Str* str241 = new Str("PNode type %d (%s) wasn't handled");
Str* str242 = new Str("TODO");
Str* str243 = new Str("dot");
Str* str244 = new Str("Can't negate this symbol");
Str* str245 = new Str("%r isn't a character class");
Str* str246 = new Str("%r isn't a character class");
Str* str247 = new Str("%start");
Str* str248 = new Str("%end");
Str* str249 = new Str("dot");
Str* str250 = new Str("Unexpected token %r in regex");

namespace runtime {  // forward declare

}  // forward declare namespace runtime

namespace osh_parse {  // forward declare

}  // forward declare namespace osh_parse

namespace format {  // forward declare
  class ColorOutput;
  class TextOutput;
  class HtmlOutput;
  class AnsiOutput;
  class _PrettyPrinter;

}  // forward declare namespace format

namespace alloc {  // forward declare
  class Arena;

}  // forward declare namespace alloc

namespace error {  // forward declare
  class RedirectEval;
  class FatalRuntime;
  class InvalidSlice;
  class InvalidUtf8;
  class ErrExit;

}  // forward declare namespace error

namespace ui {  // forward declare
  class ErrorFormatter;

}  // forward declare namespace ui

namespace parse_lib {  // forward declare
  class _BaseTrail;
  class _NullTrail;
  class Trail;
  class OilParseOptions;
  class ParseContext;

}  // forward declare namespace parse_lib

namespace reader {  // forward declare
  class _Reader;
  class DisallowedLineReader;
  class FileLineReader;
  class VirtualLineReader;

}  // forward declare namespace reader

namespace cmd_parse {  // forward declare
  class CommandParser;

}  // forward declare namespace cmd_parse

namespace grammar {  // forward declare
  class Grammar;

}  // forward declare namespace grammar

namespace cgi {  // forward declare

}  // forward declare namespace cgi

namespace braces {  // forward declare
  class _NotARange;
  class _RangeParser;
  class _StackFrame;

}  // forward declare namespace braces

namespace word_ {  // forward declare

}  // forward declare namespace word_

namespace parse {  // forward declare
  class ParseError;
  class PNode;
  class Parser;

}  // forward declare namespace parse

namespace lexer {  // forward declare
  class LineLexer;
  class Lexer;

}  // forward declare namespace lexer

namespace word_parse {  // forward declare
  class WordEmitter;
  class WordParser;

}  // forward declare namespace word_parse

namespace tdop {  // forward declare
  class TdopParser;

}  // forward declare namespace tdop

namespace arith_parse {  // forward declare

}  // forward declare namespace arith_parse

namespace bool_parse {  // forward declare
  class BoolParser;

}  // forward declare namespace bool_parse

namespace expr_parse {  // forward declare
  class ParseTreePrinter;
  class ExprParser;

}  // forward declare namespace expr_parse

namespace expr_to_ast {  // forward declare
  class Transformer;

}  // forward declare namespace expr_to_ast

namespace runtime {  // declare
hnode_asdl::hnode__Record* NewRecord(Str* node_type);
hnode_asdl::hnode__Leaf* NewLeaf(Str* s, hnode_asdl::color_t e_color);

}  // declare namespace runtime

namespace osh_parse {  // declare
syntax_asdl::command_t* ParseWholeFile(cmd_parse::CommandParser* c_parser);
int main(List<Str*>* argv);

}  // declare namespace osh_parse

namespace format {  // declare
format::ColorOutput* DetectConsoleOutput(mylib::Writer* f);

class ColorOutput {
 public:
  ColorOutput(mylib::Writer* f);
  virtual format::ColorOutput* NewTempBuffer();
  virtual void FileHeader();
  virtual void FileFooter();
  virtual void PushColor(hnode_asdl::color_t e_color);
  virtual void PopColor();
  virtual void write(Str* s);
  void WriteRaw(Tuple2<Str*, int>* raw);
  int NumChars();
  Tuple2<Str*, int>* GetRaw();

  mylib::Writer* f;
  int num_chars;
};

class TextOutput : public ColorOutput {
 public:
  TextOutput(mylib::Writer* f);
  virtual format::TextOutput* NewTempBuffer();
  virtual void PushColor(hnode_asdl::color_t e_color);
  virtual void PopColor();
};

class HtmlOutput : public ColorOutput {
 public:
  HtmlOutput(mylib::Writer* f);
  virtual format::HtmlOutput* NewTempBuffer();
  virtual void FileHeader();
  virtual void FileFooter();
  virtual void PushColor(hnode_asdl::color_t e_color);
  virtual void PopColor();
  virtual void write(Str* s);
};

class AnsiOutput : public ColorOutput {
 public:
  AnsiOutput(mylib::Writer* f);
  virtual format::AnsiOutput* NewTempBuffer();
  virtual void PushColor(hnode_asdl::color_t e_color);
  virtual void PopColor();
};

class _PrettyPrinter {
 public:
  _PrettyPrinter(int max_col);
  bool _PrintWrappedArray(List<hnode_asdl::hnode_t*>* array, int prefix_len, format::ColorOutput* f, int indent);
  bool _PrintWholeArray(List<hnode_asdl::hnode_t*>* array, int prefix_len, format::ColorOutput* f, int indent);
  void _PrintRecord(hnode_asdl::hnode__Record* node, format::ColorOutput* f, int indent);
  void PrintNode(hnode_asdl::hnode_t* node, format::ColorOutput* f, int indent);

  int max_col;
};
bool _TrySingleLineObj(hnode_asdl::hnode__Record* node, format::ColorOutput* f, int max_chars);
bool _TrySingleLine(hnode_asdl::hnode_t* node, format::ColorOutput* f, int max_chars);
void PrintTree(hnode_asdl::hnode_t* node, format::ColorOutput* f);
Str* fmt1(Str* a0) {
  gBuf.reset();
  gBuf.write_const("<span class=\"", 13);
  gBuf.format_s(a0);
  gBuf.write_const("\">", 2);
  return gBuf.getvalue();
}

Str* fmt2(Str* a0, Str* a1) {
  gBuf.reset();
  gBuf.format_s(a0);
  gBuf.format_s(a1);
  gBuf.write_const(": [", 3);
  return gBuf.getvalue();
}

Str* fmt3(Str* a0) {
  gBuf.reset();
  gBuf.format_s(a0);
  gBuf.write_const("]", 1);
  return gBuf.getvalue();
}

Str* fmt4(Str* a0, Str* a1) {
  gBuf.reset();
  gBuf.format_s(a0);
  gBuf.format_s(a1);
  gBuf.write_const(": ", 2);
  return gBuf.getvalue();
}

Str* fmt5(Str* a0) {
  gBuf.reset();
  gBuf.write_const(" ", 1);
  gBuf.format_s(a0);
  gBuf.write_const(":", 1);
  return gBuf.getvalue();
}


}  // declare namespace format

namespace alloc {  // declare

class Arena {
 public:
  Arena();
  void PushSource(syntax_asdl::source_t* src);
  void PopSource();
  int AddLine(Str* line, int line_num);
  Str* GetLine(int line_id);
  int GetLineNumber(int line_id);
  Str* GetLineNumStr(int line_id);
  syntax_asdl::source_t* GetLineSource(int line_id);
  Str* GetLineSourceString(int line_id);
  int AddLineSpan(int line_id, int col, int length);
  syntax_asdl::line_span* GetLineSpan(int span_id);
  int LastSpanId();

  Dict<int, Str*>* line_num_strs;
  List<int>* line_nums;
  List<syntax_asdl::source_t*>* line_srcs;
  List<Str*>* line_vals;
  List<syntax_asdl::source_t*>* source_instances;
  List<syntax_asdl::line_span*>* spans;
};
Str* fmt0(int a0, int a1) {
  gBuf.reset();
  gBuf.write_const("Span ID out of range: ", 22);
  gBuf.format_d(a0);
  gBuf.write_const(" is greater than ", 17);
  gBuf.format_d(a1);
  return gBuf.getvalue();
}


}  // declare namespace alloc

namespace error {  // declare

class RedirectEval : public _ErrorWithLocation {
 public:
};

class FatalRuntime : public _ErrorWithLocation {
 public:
};

class InvalidSlice : public FatalRuntime {
 public:
};

class InvalidUtf8 : public FatalRuntime {
 public:
};

class ErrExit : public FatalRuntime {
 public:
};

}  // declare namespace error

namespace ui {  // declare
Str* PrettyDir(Str* dir_name, runtime_asdl::value_t* UP_home_dir);
void _PrintCodeExcerpt(Str* line, int col, int length, mylib::Writer* f);
void _PrintWithSpanId(Str* prefix, Str* msg, int span_id, alloc::Arena* arena, mylib::Writer* f);
void _PrintWithOptionalSpanId(Str* prefix, Str* msg, int span_id, alloc::Arena* arena);
void _pp(error::_ErrorWithLocation* err, alloc::Arena* arena, Str* prefix);
void PrettyPrintError(error::_ErrorWithLocation* err, alloc::Arena* arena);
void PrettyPrintError(error::_ErrorWithLocation* err, alloc::Arena* arena, Str* prefix);

class ErrorFormatter {
 public:
  ErrorFormatter(alloc::Arena* arena);
  void PushLocation(int spid);
  void PopLocation();
  int CurrentLocation();
  void PrettyPrintError(error::_ErrorWithLocation* err);
  void PrettyPrintError(error::_ErrorWithLocation* err, Str* prefix);

  alloc::Arena* arena;
  int last_spid;
  List<int>* spid_stack;
};
Str* fmt0(Str* a0) {
  gBuf.reset();
  gBuf.write_const("[ stdin", 7);
  gBuf.format_s(a0);
  gBuf.write_const(" ]", 2);
  return gBuf.getvalue();
}

Str* fmt1(Str* a0) {
  gBuf.reset();
  gBuf.write_const("[ expansion of alias ", 21);
  gBuf.format_r(a0);
  gBuf.write_const(" ]", 2);
  return gBuf.getvalue();
}

Str* fmt2(Str* a0) {
  gBuf.reset();
  gBuf.write_const("[ array LValue in ", 18);
  gBuf.format_s(a0);
  gBuf.write_const(" ]", 2);
  return gBuf.getvalue();
}

Str* fmt3(int a0, Str* a1) {
  gBuf.reset();
  gBuf.write_const("[ eval at line ", 15);
  gBuf.format_d(a0);
  gBuf.write_const(" of ", 4);
  gBuf.format_s(a1);
  gBuf.write_const(" ]", 2);
  return gBuf.getvalue();
}

Str* fmt4(Str* a0, int a1, Str* a2, Str* a3) {
  gBuf.reset();
  gBuf.format_s(a0);
  gBuf.write_const(":", 1);
  gBuf.format_d(a1);
  gBuf.write_const(": ", 2);
  gBuf.format_s(a2);
  gBuf.format_s(a3);
  gBuf.write_const("\n", 1);
  return gBuf.getvalue();
}

Str* fmt5(Str* a0, Str* a1) {
  gBuf.reset();
  gBuf.write_const("[??? no location ???] ", 22);
  gBuf.format_s(a0);
  gBuf.format_s(a1);
  gBuf.write_const("\n", 1);
  return gBuf.getvalue();
}


}  // declare namespace ui

namespace parse_lib {  // declare

class _BaseTrail {
 public:
  _BaseTrail();
  virtual void Clear();
  virtual void SetLatestWords(List<syntax_asdl::compound_word*>* words, List<syntax_asdl::redir_t*>* redirects);
  virtual void AppendToken(syntax_asdl::Token* token);
  virtual void BeginAliasExpansion();
  virtual void EndAliasExpansion();

  List<syntax_asdl::compound_word*>* alias_words;
  bool expanding_alias;
  List<syntax_asdl::redir_t*>* redirects;
  List<syntax_asdl::Token*>* tokens;
  List<syntax_asdl::compound_word*>* words;
};

class _NullTrail : public _BaseTrail {
 public:
};

class Trail : public _BaseTrail {
 public:
  virtual void Clear();
  virtual void SetLatestWords(List<syntax_asdl::compound_word*>* words, List<syntax_asdl::redir_t*>* redirects);
  virtual void AppendToken(syntax_asdl::Token* token);
  virtual void BeginAliasExpansion();
  virtual void EndAliasExpansion();

  List<syntax_asdl::compound_word*>* alias_words;
  bool expanding_alias;
  List<syntax_asdl::redir_t*>* redirects;
  List<syntax_asdl::compound_word*>* words;
};

class OilParseOptions {
 public:
  OilParseOptions();

  bool parse_at;
  bool parse_brace;
  bool parse_do;
  bool parse_equals;
  bool parse_index_expr;
  bool parse_paren;
  bool parse_rawc;
  bool parse_set;
};

class ParseContext {
 public:
  ParseContext(alloc::Arena* arena, parse_lib::OilParseOptions* parse_opts, Dict<Str*, Str*>* aliases, grammar::Grammar* oil_grammar);
  void Init_Trail(parse_lib::_BaseTrail* trail);
  void Init_OnePassParse(bool b);
  lexer::Lexer* _MakeLexer(reader::_Reader* line_reader);
  cmd_parse::CommandParser* MakeOshParser(reader::_Reader* line_reader);
  cmd_parse::CommandParser* MakeOshParser(reader::_Reader* line_reader, bool emit_comp_dummy);
  word_parse::WordParser* MakeWordParserForHereDoc(reader::_Reader* line_reader);
  word_parse::WordParser* MakeWordParser(lexer::Lexer* lx, reader::_Reader* line_reader);
  tdop::TdopParser* MakeArithParser(Str* code_str);
  cmd_parse::CommandParser* MakeParserForCommandSub(reader::_Reader* line_reader, lexer::Lexer* lexer, int eof_id);
  word_parse::WordParser* MakeWordParserForPlugin(Str* code_str);
  Tuple2<parse::PNode*, syntax_asdl::Token*>* _ParseOil(lexer::Lexer* lexer, int start_symbol);
  Tuple2<syntax_asdl::command__VarDecl*, syntax_asdl::Token*>* ParseVarDecl(syntax_asdl::Token* kw_token, lexer::Lexer* lexer);
  Tuple2<syntax_asdl::command__PlaceMutation*, syntax_asdl::Token*>* ParsePlaceMutation(syntax_asdl::Token* kw_token, lexer::Lexer* lexer);
  syntax_asdl::Token* ParseOilArgList(lexer::Lexer* lexer, syntax_asdl::arg_list* out);
  Tuple2<syntax_asdl::expr_t*, syntax_asdl::Token*>* ParseOilExpr(lexer::Lexer* lexer, int start_symbol);
  Tuple3<List<syntax_asdl::name_type*>*, syntax_asdl::expr_t*, syntax_asdl::Token*>* ParseOilForExpr(lexer::Lexer* lexer, int start_symbol);
  syntax_asdl::Token* ParseProc(lexer::Lexer* lexer, syntax_asdl::command__Proc* out);
  syntax_asdl::Token* ParseFunc(lexer::Lexer* lexer, syntax_asdl::command__Func* out);

  Dict<Str*, Str*>* aliases;
  alloc::Arena* arena;
  expr_parse::ExprParser* e_parser;
  bool one_pass_parse;
  parse_lib::OilParseOptions* parse_opts;
  bool parsing_expr;
  expr_to_ast::Transformer* tr;
  parse_lib::_BaseTrail* trail;
};
Str* fmt0() {
  gBuf.reset();
  gBuf.write_const("ShAssignment expression can't be nested like this", 49);
  return gBuf.getvalue();
}


}  // declare namespace parse_lib

namespace reader {  // declare

class _Reader {
 public:
  _Reader(alloc::Arena* arena);
  virtual Str* _GetLine();
  virtual Tuple3<int, Str*, int>* GetLine();
  void Reset();

  alloc::Arena* arena;
  int line_num;
};

class DisallowedLineReader : public _Reader {
 public:
  DisallowedLineReader(alloc::Arena* arena, syntax_asdl::Token* blame_token);
  virtual Str* _GetLine();

  syntax_asdl::Token* blame_token;
};

class FileLineReader : public _Reader {
 public:
  FileLineReader(mylib::LineReader* f, alloc::Arena* arena);
  virtual Str* _GetLine();

  mylib::LineReader* f;
};
reader::FileLineReader* StringLineReader(Str* s, alloc::Arena* arena);

class VirtualLineReader : public _Reader {
 public:
  VirtualLineReader(List<Tuple3<int, Str*, int>*>* lines, alloc::Arena* arena);
  virtual Tuple3<int, Str*, int>* GetLine();

  List<Tuple3<int, Str*, int>*>* lines;
  int num_lines;
  int pos;
};
Str* fmt0() {
  gBuf.reset();
  gBuf.write_const("Here docs aren't allowed in expressions", 39);
  return gBuf.getvalue();
}


}  // declare namespace reader

namespace cmd_parse {  // declare
int _KeywordSpid(syntax_asdl::word_t* w);
syntax_asdl::Token* _KeywordToken(syntax_asdl::word_t* UP_w);
Tuple2<List<Tuple3<int, Str*, int>*>*, Tuple3<int, Str*, int>*>* _ReadHereLines(reader::_Reader* line_reader, syntax_asdl::redir__HereDoc* h, Str* delimiter);
List<syntax_asdl::word_part_t*>* _MakeLiteralHereLines(List<Tuple3<int, Str*, int>*>* here_lines, alloc::Arena* arena);
void _ParseHereDocBody(parse_lib::ParseContext* parse_ctx, syntax_asdl::redir__HereDoc* h, reader::_Reader* line_reader, alloc::Arena* arena);
syntax_asdl::assign_pair* _MakeAssignPair(parse_lib::ParseContext* parse_ctx, Tuple4<syntax_asdl::Token*, syntax_asdl::Token*, int, syntax_asdl::compound_word*>* preparsed, alloc::Arena* arena);
void _AppendMoreEnv(List<Tuple4<syntax_asdl::Token*, syntax_asdl::Token*, int, syntax_asdl::compound_word*>*>* preparsed_list, List<syntax_asdl::env_pair*>* more_env);
Tuple2<List<Tuple4<syntax_asdl::Token*, syntax_asdl::Token*, int, syntax_asdl::compound_word*>*>*, List<syntax_asdl::compound_word*>*>* _SplitSimpleCommandPrefix(List<syntax_asdl::compound_word*>* words);
syntax_asdl::command__Simple* _MakeSimpleCommand(List<Tuple4<syntax_asdl::Token*, syntax_asdl::Token*, int, syntax_asdl::compound_word*>*>* preparsed_list, List<syntax_asdl::compound_word*>* suffix_words, List<syntax_asdl::redir_t*>* redirects, syntax_asdl::command_t* block);

class CommandParser {
 public:
  CommandParser(parse_lib::ParseContext* parse_ctx, word_parse::WordParser* w_parser, lexer::Lexer* lexer, reader::_Reader* line_reader);
  void Init_EofId(int eof_id);
  void Init_AliasesInFlight(List<Tuple2<Str*, int>*>* aliases_in_flight);
  void Reset();
  void ResetInputObjects();
  void _Next();
  void _Next(types_asdl::lex_mode_t lex_mode);
  void _Peek();
  void _Eat(int c_id);
  void _Eat2(int c_id, Str* msg);
  void _NewlineOk();
  bool _AtSecondaryKeyword();
  syntax_asdl::redir_t* ParseRedirect();
  List<syntax_asdl::redir_t*>* _ParseRedirectList();
  Tuple3<List<syntax_asdl::redir_t*>*, List<syntax_asdl::compound_word*>*, syntax_asdl::command__BraceGroup*>* _ScanSimpleCommand();
  syntax_asdl::command_t* _MaybeExpandAliases(List<syntax_asdl::compound_word*>* words);
  syntax_asdl::command_t* ParseSimpleCommand();
  syntax_asdl::command__BraceGroup* ParseBraceGroup();
  syntax_asdl::command__DoGroup* ParseDoGroup();
  Tuple2<List<syntax_asdl::compound_word*>*, int>* ParseForWords();
  syntax_asdl::command__ForExpr* _ParseForExprLoop();
  syntax_asdl::command__ForEach* _ParseForEachLoop(int for_spid);
  syntax_asdl::command_t* ParseFor();
  syntax_asdl::command__WhileUntil* ParseWhileUntil(syntax_asdl::Token* keyword);
  syntax_asdl::case_arm* ParseCaseItem();
  void ParseCaseList(List<syntax_asdl::case_arm*>* arms);
  syntax_asdl::command__Case* ParseCase();
  void _ParseOilElifElse(syntax_asdl::command__If* if_node);
  syntax_asdl::command__If* _ParseOilIf(int if_spid, List<syntax_asdl::command_t*>* cond_list);
  void _ParseElifElse(syntax_asdl::command__If* if_node);
  syntax_asdl::command__If* ParseIf();
  syntax_asdl::command_t* ParseTime();
  syntax_asdl::command_t* ParseCompoundCommand();
  syntax_asdl::command__ShFunction* ParseFunctionDef();
  syntax_asdl::command__ShFunction* ParseKshFunctionDef();
  syntax_asdl::command__Proc* ParseOilProc();
  syntax_asdl::command__Func* ParseOilFunc();
  syntax_asdl::command_t* ParseCoproc();
  syntax_asdl::command__Subshell* ParseSubshell();
  syntax_asdl::command__DBracket* ParseDBracket();
  syntax_asdl::command__DParen* ParseDParen();
  syntax_asdl::command_t* ParseCommand();
  syntax_asdl::command_t* ParsePipeline();
  syntax_asdl::command_t* ParseAndOr();
  syntax_asdl::command_t* _ParseCommandLine();
  syntax_asdl::command__CommandList* _ParseCommandTerm();
  syntax_asdl::command__CommandList* _ParseCommandList();
  syntax_asdl::command_t* ParseLogicalLine();
  syntax_asdl::parse_result_t* ParseInteractiveLine();
  syntax_asdl::command_t* ParseCommandSub();
  void CheckForPendingHereDocs();

  Dict<Str*, Str*>* aliases;
  List<Tuple2<Str*, int>*>* aliases_in_flight;
  bool allow_block;
  alloc::Arena* arena;
  int c_id;
  id_kind_asdl::Kind_t c_kind;
  syntax_asdl::word_t* cur_word;
  int eof_id;
  lexer::Lexer* lexer;
  reader::_Reader* line_reader;
  types_asdl::lex_mode_t next_lex_mode;
  parse_lib::ParseContext* parse_ctx;
  parse_lib::OilParseOptions* parse_opts;
  List<syntax_asdl::redir__HereDoc*>* pending_here_docs;
  bool return_expr;
  word_parse::WordParser* w_parser;
};
Str* fmt1() {
  gBuf.reset();
  gBuf.write_const("Couldn't find terminator for here doc that starts here", 54);
  return gBuf.getvalue();
}

Str* fmt4() {
  gBuf.reset();
  gBuf.write_const("Invalid here doc delimiter", 26);
  return gBuf.getvalue();
}

Str* fmt8(int a0, int a1) {
  gBuf.reset();
  gBuf.format_d(a0);
  gBuf.write_const(" != ", 4);
  gBuf.format_d(a1);
  return gBuf.getvalue();
}

Str* fmt10() {
  gBuf.reset();
  gBuf.write_const("Environment binding shouldn't look like an array assignment", 59);
  return gBuf.getvalue();
}

Str* fmt11() {
  gBuf.reset();
  gBuf.write_const("Expected = in environment binding, got +=", 41);
  return gBuf.getvalue();
}

Str* fmt14() {
  gBuf.reset();
  gBuf.write_const("Environment bindings can't contain array literals", 49);
  return gBuf.getvalue();
}

Str* fmt15(Str* a0, Str* a1) {
  gBuf.reset();
  gBuf.write_const("Expected word type ", 19);
  gBuf.format_s(a0);
  gBuf.write_const(", got ", 6);
  gBuf.format_s(a1);
  return gBuf.getvalue();
}

Str* fmt16() {
  gBuf.reset();
  gBuf.write_const("Invalid token after redirect operator", 37);
  return gBuf.getvalue();
}

Str* fmt18(int a0, int a1) {
  gBuf.reset();
  gBuf.write_const("line IDs ", 9);
  gBuf.format_d(a0);
  gBuf.write_const(" != ", 4);
  gBuf.format_d(a1);
  return gBuf.getvalue();
}

Str* fmt20() {
  gBuf.reset();
  gBuf.write_const("Unexpected block", 16);
  return gBuf.getvalue();
}

Str* fmt21() {
  gBuf.reset();
  gBuf.write_const("=word isn't allowed when shopt 'parse_equals' is on.\nHint: add a space after = to pretty print an expression", 108);
  return gBuf.getvalue();
}

Str* fmt24() {
  gBuf.reset();
  gBuf.write_const("name=val isn't allowed when shopt 'parse_equals' is on.\nHint: add 'env' before it, or spaces around =", 101);
  return gBuf.getvalue();
}

Str* fmt25() {
  gBuf.reset();
  gBuf.write_const("Unexpected block", 16);
  return gBuf.getvalue();
}

Str* fmt27() {
  gBuf.reset();
  gBuf.write_const("Unexpected block", 16);
  return gBuf.getvalue();
}

Str* fmt28() {
  gBuf.reset();
  gBuf.write_const("Control flow shouldn't have redirects", 37);
  return gBuf.getvalue();
}

Str* fmt30() {
  gBuf.reset();
  gBuf.write_const("Control flow shouldn't have environment bindings", 48);
  return gBuf.getvalue();
}

Str* fmt31(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Unexpected argument to ", 23);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}

Str* fmt32() {
  gBuf.reset();
  gBuf.write_const("Invalid word in for loop", 24);
  return gBuf.getvalue();
}

Str* fmt33() {
  gBuf.reset();
  gBuf.write_const("Invalid word after for expression", 33);
  return gBuf.getvalue();
}

Str* fmt35() {
  gBuf.reset();
  gBuf.write_const("Loop variable name should be a constant", 39);
  return gBuf.getvalue();
}

Str* fmt36() {
  gBuf.reset();
  gBuf.write_const("Invalid loop variable name", 26);
  return gBuf.getvalue();
}

Str* fmt38() {
  gBuf.reset();
  gBuf.write_const("Unexpected word after for loop variable", 39);
  return gBuf.getvalue();
}

Str* fmt41() {
  gBuf.reset();
  gBuf.write_const("Expected ;; or esac", 19);
  return gBuf.getvalue();
}

Str* fmt44() {
  gBuf.reset();
  gBuf.write_const("Unexpected word while parsing compound command", 46);
  return gBuf.getvalue();
}

Str* fmt45() {
  gBuf.reset();
  gBuf.write_const("Invalid function name", 21);
  return gBuf.getvalue();
}

Str* fmt46() {
  gBuf.reset();
  gBuf.write_const("Invalid KSH-style function name", 31);
  return gBuf.getvalue();
}

Str* fmt48() {
  gBuf.reset();
  gBuf.write_const("Unexpected word when parsing command", 36);
  return gBuf.getvalue();
}

Str* fmt49() {
  gBuf.reset();
  gBuf.write_const("Unexpected right brace", 22);
  return gBuf.getvalue();
}

Str* fmt50() {
  gBuf.reset();
  gBuf.write_const("Unexpected EOF while parsing command", 36);
  return gBuf.getvalue();
}

Str* fmt51() {
  gBuf.reset();
  gBuf.write_const("Invalid word while parsing command", 34);
  return gBuf.getvalue();
}

Str* fmt52() {
  gBuf.reset();
  gBuf.write_const("Unexpected word while parsing command line", 42);
  return gBuf.getvalue();
}

Str* fmt53() {
  gBuf.reset();
  gBuf.write_const("Unterminated here doc began here", 32);
  return gBuf.getvalue();
}


}  // declare namespace cmd_parse

namespace grammar {  // declare

class Grammar {
 public:
  Grammar();

  Dict<int, Tuple2<List<List<Tuple2<int, int>*>*>*, Dict<int, int>*>*>* dfas;
  Dict<Str*, int>* keywords;
  List<int>* labels;
  Dict<int, Str*>* number2symbol;
  int start;
  List<List<Tuple2<int, int>*>*>* states;
  Dict<Str*, int>* symbol2label;
  Dict<Str*, int>* symbol2number;
  Dict<int, int>* tokens;
};

}  // declare namespace grammar

namespace cgi {  // declare
Str* escape(Str* s);

}  // declare namespace cgi

namespace braces {  // declare

class _NotARange {
 public:
  _NotARange(Str* s);
};

class _RangeParser {
 public:
  _RangeParser(match::SimpleLexer* lexer, int span_id);
  void _Next();
  Str* _Eat(int token_type);
  int _ParseStep();
  syntax_asdl::word_part__BracedRange* _ParseRange(int range_kind);
  syntax_asdl::word_part__BracedRange* Parse();

  match::SimpleLexer* lexer;
  int span_id;
  int token_type;
  Str* token_val;
};
syntax_asdl::word_part_t* _RangePartDetect(syntax_asdl::Token* tok);

class _StackFrame {
 public:
  _StackFrame(List<syntax_asdl::word_part_t*>* cur_parts);

  syntax_asdl::word_part__BracedTuple* alt_part;
  List<syntax_asdl::word_part_t*>* cur_parts;
  bool saw_comma;
};
syntax_asdl::word__BracedTree* _BraceDetect(syntax_asdl::compound_word* w);
List<syntax_asdl::word_t*>* BraceDetectAll(List<syntax_asdl::compound_word*>* words);
int _LeadingZeros(Str* s);
Str* _IntToString(int i, int width);
List<Str*>* _RangeStrings(syntax_asdl::word_part__BracedRange* part);
List<List<syntax_asdl::word_part_t*>*>* _ExpandPart(List<syntax_asdl::word_part_t*>* parts, int first_alt_index, List<List<syntax_asdl::word_part_t*>*>* suffixes);
List<List<syntax_asdl::word_part_t*>*>* _BraceExpand(List<syntax_asdl::word_part_t*>* parts);
List<syntax_asdl::compound_word*>* BraceExpandWords(List<syntax_asdl::word_t*>* words);
Str* fmt1(int a0, int a1) {
  gBuf.reset();
  gBuf.write_const("Expected ", 9);
  gBuf.format_d(a0);
  gBuf.write_const(", got ", 6);
  gBuf.format_d(a1);
  return gBuf.getvalue();
}

Str* fmt2() {
  gBuf.reset();
  gBuf.write_const("Step can't be 0", 15);
  return gBuf.getvalue();
}

Str* fmt3(int a0) {
  gBuf.reset();
  gBuf.write_const("Invalid step ", 13);
  gBuf.format_d(a0);
  gBuf.write_const(" for ascending integer range", 28);
  return gBuf.getvalue();
}

Str* fmt4(int a0) {
  gBuf.reset();
  gBuf.write_const("Invalid step ", 13);
  gBuf.format_d(a0);
  gBuf.write_const(" for descending integer range", 29);
  return gBuf.getvalue();
}

Str* fmt5(int a0) {
  gBuf.reset();
  gBuf.write_const("Invalid step ", 13);
  gBuf.format_d(a0);
  gBuf.write_const(" for ascending character range", 30);
  return gBuf.getvalue();
}

Str* fmt6(int a0) {
  gBuf.reset();
  gBuf.write_const("Invalid step ", 13);
  gBuf.format_d(a0);
  gBuf.write_const(" for descending character range", 31);
  return gBuf.getvalue();
}

Str* fmt7() {
  gBuf.reset();
  gBuf.write_const("Mismatched cases in character range", 35);
  return gBuf.getvalue();
}


}  // declare namespace braces

namespace word_ {  // declare
int _LiteralId(syntax_asdl::word_part_t* p);
Tuple3<bool, Str*, bool>* _EvalWordPart(syntax_asdl::word_part_t* part);
Tuple3<bool, Str*, bool>* StaticEval(syntax_asdl::word_t* UP_w);
int LeftMostSpanForPart(syntax_asdl::word_part_t* part);
int _RightMostSpanForPart(syntax_asdl::word_part_t* part);
int LeftMostSpanForWord(syntax_asdl::word_t* w);
int RightMostSpanForWord(syntax_asdl::word_t* w);
syntax_asdl::word_t* TildeDetect(syntax_asdl::word_t* UP_w);
List<syntax_asdl::word_t*>* TildeDetectAll(List<syntax_asdl::word_t*>* words);
bool HasArrayPart(syntax_asdl::compound_word* w);
Str* ShFunctionName(syntax_asdl::compound_word* w);
syntax_asdl::Token* LooksLikeArithVar(syntax_asdl::word_t* UP_w);
bool IsVarLike(syntax_asdl::compound_word* w);
Tuple3<syntax_asdl::Token*, syntax_asdl::Token*, int>* DetectShAssignment(syntax_asdl::compound_word* w);
Tuple2<syntax_asdl::compound_word*, syntax_asdl::compound_word*>* DetectAssocPair(syntax_asdl::compound_word* w);
Tuple2<id_kind_asdl::Kind_t, syntax_asdl::Token*>* KeywordToken(syntax_asdl::compound_word* w);
syntax_asdl::Token* LiteralToken(syntax_asdl::word_t* UP_w);
int ArithId(syntax_asdl::word_t* w);
int BoolId(syntax_asdl::word_t* w);
int CommandId(syntax_asdl::word_t* w);
id_kind_asdl::Kind_t CommandKind(syntax_asdl::word_t* w);
bool IsVarSub(syntax_asdl::word_t* w);
int SpanForLhsExpr(syntax_asdl::sh_lhs_expr__Name* node);
int SpanIdFromError(error::_ErrorWithLocation* error);
Str* Pretty(syntax_asdl::word_t* w);

}  // declare namespace word_

namespace parse {  // declare

class ParseError {
 public:
  ParseError(Str* msg, int type_, syntax_asdl::Token* tok);

  Str* msg;
  syntax_asdl::Token* tok;
  int type;
};

class PNode {
 public:
  PNode(int typ, syntax_asdl::Token* tok, List<parse::PNode*>* children);

  List<parse::PNode*>* children;
  syntax_asdl::Token* tok;
  int typ;
};

class Parser {
 public:
  Parser(grammar::Grammar* grammar);
  void setup(int start);
  bool addtoken(int typ, syntax_asdl::Token* opaque, int ilabel);
  void shift(int typ, syntax_asdl::Token* opaque, int newstate);
  void push(int typ, syntax_asdl::Token* opaque, Tuple2<List<List<Tuple2<int, int>*>*>*, Dict<int, int>*>* newdfa, int newstate);
  void pop();

  grammar::Grammar* grammar;
  parse::PNode* rootnode;
  List<Tuple3<Tuple2<List<List<Tuple2<int, int>*>*>*, Dict<int, int>*>*, int, parse::PNode*>*>* stack;
};

}  // declare namespace parse

namespace lexer {  // declare

class LineLexer {
 public:
  LineLexer(Str* line, alloc::Arena* arena);
  void Reset(Str* line, int line_id, int line_pos);
  bool MaybeUnreadOne();
  int GetSpanIdForEof();
  syntax_asdl::Token* LookAhead(types_asdl::lex_mode_t lex_mode);
  syntax_asdl::Token* Read(types_asdl::lex_mode_t lex_mode);

  alloc::Arena* arena;
  bool arena_skip;
  int last_span_id;
  Str* line;
  int line_id;
  int line_pos;
};

class Lexer {
 public:
  Lexer(lexer::LineLexer* line_lexer, reader::_Reader* line_reader);
  void ResetInputObjects();
  bool MaybeUnreadOne();
  syntax_asdl::Token* LookAhead(types_asdl::lex_mode_t lex_mode);
  void EmitCompDummy();
  void PushHint(int old_id, int new_id);
  syntax_asdl::Token* _Read(types_asdl::lex_mode_t lex_mode);
  syntax_asdl::Token* Read(types_asdl::lex_mode_t lex_mode);

  bool emit_comp_dummy;
  int line_id;
  lexer::LineLexer* line_lexer;
  reader::_Reader* line_reader;
  List<Tuple2<int, int>*>* translation_stack;
};

}  // declare namespace lexer

namespace word_parse {  // declare

class WordEmitter {
 public:
  virtual syntax_asdl::word_t* ReadWord(types_asdl::lex_mode_t lex_mode);
};

class WordParser : public WordEmitter {
 public:
  WordParser(parse_lib::ParseContext* parse_ctx, lexer::Lexer* lexer, reader::_Reader* line_reader);
  void Init(types_asdl::lex_mode_t lex_mode);
  void Reset();
  syntax_asdl::Token* _Peek();
  void _Next(types_asdl::lex_mode_t lex_mode);
  syntax_asdl::word_t* _ReadVarOpArg(types_asdl::lex_mode_t arg_lex_mode);
  syntax_asdl::word_t* _ReadVarOpArg3(types_asdl::lex_mode_t arg_lex_mode, int eof_type, bool empty_ok);
  syntax_asdl::suffix_op__Slice* _ReadSliceVarOp();
  syntax_asdl::suffix_op__PatSub* _ReadPatSubVarOp(types_asdl::lex_mode_t lex_mode);
  syntax_asdl::bracket_op_t* _ReadSubscript();
  syntax_asdl::braced_var_sub* _ParseVarOf();
  syntax_asdl::braced_var_sub* _ParseVarExpr(types_asdl::lex_mode_t arg_lex_mode);
  syntax_asdl::braced_var_sub* _ParseVarExpr(types_asdl::lex_mode_t arg_lex_mode, bool allow_query);
  Tuple2<syntax_asdl::braced_var_sub*, syntax_asdl::Token*>* ReadBracedVarSub(syntax_asdl::Token* left_token);
  syntax_asdl::braced_var_sub* _ReadBracedVarSub(syntax_asdl::Token* left_token, bool d_quoted);
  syntax_asdl::single_quoted* _ReadSingleQuoted(types_asdl::lex_mode_t lex_mode);
  syntax_asdl::Token* ReadSingleQuoted(types_asdl::lex_mode_t lex_mode, syntax_asdl::Token* left_token, List<syntax_asdl::Token*>* tokens, bool no_backslashes);
  syntax_asdl::word_part_t* _ReadDoubleQuotedLeftParts();
  syntax_asdl::word_part_t* _ReadLeftParts();
  syntax_asdl::word_part__ExtGlob* _ReadExtGlob();
  void _ReadLikeDQ(syntax_asdl::Token* left_dq_token, List<syntax_asdl::word_part_t*>* out_parts);
  syntax_asdl::double_quoted* _ReadDoubleQuoted();
  syntax_asdl::Token* ReadDoubleQuoted(syntax_asdl::Token* left_token, List<syntax_asdl::word_part_t*>* parts);
  syntax_asdl::command_sub* _ReadCommandSub(int left_id);
  syntax_asdl::word_part__ExprSub* _ReadExprSub(types_asdl::lex_mode_t lex_mode);
  syntax_asdl::command_t* ParseVarDecl(syntax_asdl::Token* kw_token);
  syntax_asdl::command_t* ParsePlaceMutation(syntax_asdl::Token* kw_token);
  syntax_asdl::expr_t* ParseBareDecl();
  syntax_asdl::expr_t* ParseCommandExpr();
  void ParseProc(syntax_asdl::command__Proc* node);
  void ParseFunc(syntax_asdl::command__Func* node);
  syntax_asdl::arith_expr_t* _ReadArithExpr();
  syntax_asdl::word_part__ArithSub* _ReadArithSub();
  Tuple2<syntax_asdl::arith_expr_t*, int>* ReadDParen();
  void _NextNonSpace();
  syntax_asdl::command__ForExpr* ReadForExpression();
  syntax_asdl::word_part_t* _ReadArrayLiteral();
  void _ParseCallArguments(syntax_asdl::arg_list* arglist);
  syntax_asdl::compound_word* _ReadCompoundWord(types_asdl::lex_mode_t lex_mode);
  syntax_asdl::compound_word* _ReadCompoundWord3(types_asdl::lex_mode_t lex_mode, int eof_type, bool empty_ok);
  Tuple2<syntax_asdl::word_t*, bool>* _ReadArithWord();
  Tuple2<syntax_asdl::word_t*, bool>* _ReadWord(types_asdl::lex_mode_t lex_mode);
  int LookAhead();
  virtual syntax_asdl::word_t* ReadWord(types_asdl::lex_mode_t lex_mode);
  void ReadHereDocBody(List<syntax_asdl::word_part_t*>* parts);
  syntax_asdl::compound_word* ReadForPlugin();

  syntax_asdl::word_t* buffered_word;
  syntax_asdl::Token* cur_token;
  syntax_asdl::word_t* cursor;
  bool cursor_was_newline;
  lexer::Lexer* lexer;
  reader::_Reader* line_reader;
  types_asdl::lex_mode_t next_lex_mode;
  parse_lib::ParseContext* parse_ctx;
  parse_lib::OilParseOptions* parse_opts;
  id_kind_asdl::Kind_t token_kind;
  int token_type;
};
Str* fmt0(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Unexpected token in slice: ", 27);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}

Str* fmt2() {
  gBuf.reset();
  gBuf.write_const("Pattern in ${x/pat/replace} must not be empty", 45);
  return gBuf.getvalue();
}

Str* fmt3(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Expected } after replacement string, got ", 41);
  gBuf.format_s(a0);
  return gBuf.getvalue();
}

Str* fmt4(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Expected } after pat sub, got ", 30);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}

Str* fmt5(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Expected ] after subscript, got ", 32);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}

Str* fmt6(Str* a0, Str* a1) {
  gBuf.reset();
  gBuf.write_const("Unexpected token ", 17);
  gBuf.format_r(a0);
  gBuf.write_const(" (after ", 8);
  gBuf.format_s(a1);
  gBuf.write_const(")", 1);
  return gBuf.getvalue();
}

Str* fmt7(Str* a0, Str* a1) {
  gBuf.reset();
  gBuf.write_const("Unexpected token ", 17);
  gBuf.format_r(a0);
  gBuf.write_const(" (after ", 8);
  gBuf.format_s(a1);
  gBuf.write_const(")", 1);
  return gBuf.getvalue();
}

Str* fmt8(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Unexpected token after slice: ", 30);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}

Str* fmt9(Str* a0, Str* a1) {
  gBuf.reset();
  gBuf.write_const("Unexpected token ", 17);
  gBuf.format_r(a0);
  gBuf.write_const(" (", 2);
  gBuf.format_s(a1);
  gBuf.write_const(")", 1);
  return gBuf.getvalue();
}

Str* fmt10(Str* a0, Str* a1) {
  gBuf.reset();
  gBuf.write_const("Unexpected token ", 17);
  gBuf.format_r(a0);
  gBuf.write_const(" (", 2);
  gBuf.format_s(a1);
  gBuf.write_const(")", 1);
  return gBuf.getvalue();
}

Str* fmt11(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Expected } after var sub, got ", 30);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}

Str* fmt12(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Expected } after length expression, got ", 40);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}

Str* fmt13(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Unexpected token ", 17);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}

Str* fmt14() {
  gBuf.reset();
  gBuf.write_const("Strings with backslashes should look like r'\\n' or c'\\n'", 56);
  return gBuf.getvalue();
}

Str* fmt15() {
  gBuf.reset();
  gBuf.write_const("Unexpected EOF in single-quoted string that began here", 54);
  return gBuf.getvalue();
}

Str* fmt16() {
  gBuf.reset();
  gBuf.write_const("Unexpected EOF reading extended glob that began here", 52);
  return gBuf.getvalue();
}

Str* fmt17() {
  gBuf.reset();
  gBuf.write_const("Unexpected EOF reading double-quoted string that began here", 59);
  return gBuf.getvalue();
}

Str* fmt18() {
  gBuf.reset();
  gBuf.write_const("Unexpected EOF while looking for closing backtick", 49);
  return gBuf.getvalue();
}

Str* fmt24(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Invalid proc name ", 18);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}

Str* fmt25(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Expected first ) to end arith sub, got ", 39);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}

Str* fmt26(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Expected second ) to end arith sub, got ", 40);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}

Str* fmt27(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Expected first ) to end arith statement, got ", 45);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}

Str* fmt28(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Expected second ) to end arith statement, got ", 46);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}

Str* fmt29(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Expected ) to end for loop expression, got ", 43);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}

Str* fmt30(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Expected ( after =, got ", 24);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}

Str* fmt31(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Unexpected token in array literal: ", 35);
  gBuf.format_r(a0);
  return gBuf.getvalue();
}

Str* fmt33() {
  gBuf.reset();
  gBuf.write_const("Expected associative array pair", 31);
  return gBuf.getvalue();
}

Str* fmt35() {
  gBuf.reset();
  gBuf.write_const("Unexpected token after array literal", 36);
  return gBuf.getvalue();
}

Str* fmt36() {
  gBuf.reset();
  gBuf.write_const("Unexpected token after array splice", 35);
  return gBuf.getvalue();
}

Str* fmt37() {
  gBuf.reset();
  gBuf.write_const("Word has unbalanced { }.  Maybe add a space or quote it like \\{", 63);
  return gBuf.getvalue();
}

Str* fmt38() {
  gBuf.reset();
  gBuf.write_const("Unexpected token in arithmetic context", 38);
  return gBuf.getvalue();
}


}  // declare namespace word_parse

namespace tdop {  // declare
bool IsIndexable(syntax_asdl::arith_expr_t* node);
syntax_asdl::sh_lhs_expr_t* ToLValue(syntax_asdl::arith_expr_t* node);
syntax_asdl::arith_expr_t* NullError(tdop::TdopParser* p, syntax_asdl::word_t* t, int bp);
syntax_asdl::arith_expr_t* NullConstant(tdop::TdopParser* p, syntax_asdl::word_t* w, int bp);
syntax_asdl::arith_expr_t* NullParen(tdop::TdopParser* p, syntax_asdl::word_t* t, int bp);
syntax_asdl::arith_expr_t* NullPrefixOp(tdop::TdopParser* p, syntax_asdl::word_t* w, int bp);
syntax_asdl::arith_expr_t* LeftError(tdop::TdopParser* p, syntax_asdl::word_t* t, syntax_asdl::arith_expr_t* left, int rbp);
syntax_asdl::arith_expr_t* LeftBinaryOp(tdop::TdopParser* p, syntax_asdl::word_t* w, syntax_asdl::arith_expr_t* left, int rbp);
syntax_asdl::arith_expr_t* LeftAssign(tdop::TdopParser* p, syntax_asdl::word_t* w, syntax_asdl::arith_expr_t* left, int rbp);

class TdopParser {
 public:
  TdopParser(tdop::ParserSpec* spec, word_parse::WordParser* w_parser);
  bool AtToken(int token_type);
  void Eat(int token_type);
  bool Next();
  syntax_asdl::arith_expr_t* ParseUntil(int rbp);
  syntax_asdl::arith_expr_t* Parse();

  syntax_asdl::word_t* cur_word;
  int op_id;
  tdop::ParserSpec* spec;
  word_parse::WordParser* w_parser;
};
Str* fmt0() {
  gBuf.reset();
  gBuf.write_const("Token can't be used in prefix position", 38);
  return gBuf.getvalue();
}

Str* fmt1() {
  gBuf.reset();
  gBuf.write_const("Token can't be used in infix position", 37);
  return gBuf.getvalue();
}

Str* fmt2() {
  gBuf.reset();
  gBuf.write_const("Left-hand side of this assignment is invalid", 44);
  return gBuf.getvalue();
}

Str* fmt3(Str* a0, Str* a1) {
  gBuf.reset();
  gBuf.write_const("Parser expected ", 16);
  gBuf.format_s(a0);
  gBuf.write_const(", got ", 6);
  gBuf.format_s(a1);
  return gBuf.getvalue();
}

Str* fmt4() {
  gBuf.reset();
  gBuf.write_const("Unexpected end of input", 23);
  return gBuf.getvalue();
}


}  // declare namespace tdop

namespace arith_parse {  // declare
syntax_asdl::arith_expr_t* NullIncDec(tdop::TdopParser* p, syntax_asdl::word_t* w, int bp);
syntax_asdl::arith_expr_t* NullUnaryPlus(tdop::TdopParser* p, syntax_asdl::word_t* t, int bp);
syntax_asdl::arith_expr_t* NullUnaryMinus(tdop::TdopParser* p, syntax_asdl::word_t* t, int bp);
syntax_asdl::arith_expr_t* LeftIncDec(tdop::TdopParser* p, syntax_asdl::word_t* w, syntax_asdl::arith_expr_t* left, int rbp);
syntax_asdl::arith_expr_t* LeftIndex(tdop::TdopParser* p, syntax_asdl::word_t* w, syntax_asdl::arith_expr_t* left, int unused_bp);
syntax_asdl::arith_expr_t* LeftTernary(tdop::TdopParser* p, syntax_asdl::word_t* t, syntax_asdl::arith_expr_t* left, int bp);
Str* fmt0() {
  gBuf.reset();
  gBuf.write_const("This value can't be assigned to", 31);
  return gBuf.getvalue();
}

Str* fmt1() {
  gBuf.reset();
  gBuf.write_const("The [ operarator doesn't apply to this expression", 49);
  return gBuf.getvalue();
}


}  // declare namespace arith_parse

namespace bool_parse {  // declare

class BoolParser {
 public:
  BoolParser(word_parse::WordEmitter* w_parser);
  void _NextOne(types_asdl::lex_mode_t lex_mode);
  void _Next();
  void _Next(types_asdl::lex_mode_t lex_mode);
  syntax_asdl::word_t* _LookAhead();
  syntax_asdl::bool_expr_t* Parse();
  bool _TestAtEnd();
  syntax_asdl::bool_expr_t* ParseForBuiltin();
  syntax_asdl::bool_expr_t* ParseExpr();
  syntax_asdl::bool_expr_t* ParseTerm();
  syntax_asdl::bool_expr_t* ParseNegatedFactor();
  syntax_asdl::bool_expr_t* ParseFactor();

  id_kind_asdl::Kind_t b_kind;
  syntax_asdl::word_t* cur_word;
  int op_id;
  word_parse::WordEmitter* w_parser;
  List<syntax_asdl::word_t*>* words;
};
Str* fmt0() {
  gBuf.reset();
  gBuf.write_const("Expected ]]", 11);
  return gBuf.getvalue();
}

Str* fmt1(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Unexpected trailing word ", 25);
  gBuf.format_s(a0);
  return gBuf.getvalue();
}

Str* fmt2() {
  gBuf.reset();
  gBuf.write_const("Invalid argument to unary operator", 34);
  return gBuf.getvalue();
}

Str* fmt3(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Expected ), got ", 16);
  gBuf.format_s(a0);
  return gBuf.getvalue();
}

Str* fmt4() {
  gBuf.reset();
  gBuf.write_const("Unexpected token in boolean expression", 38);
  return gBuf.getvalue();
}


}  // declare namespace bool_parse

namespace expr_parse {  // declare

class ParseTreePrinter {
 public:
  ParseTreePrinter(Dict<int, Str*>* names);
  void _Print(parse::PNode* pnode, int indent, int i);
  void Print(parse::PNode* pnode);

  mylib::Writer* f;
  Dict<int, Str*>* names;
};
int _Classify(grammar::Grammar* gr, syntax_asdl::Token* tok);
syntax_asdl::Token* _PushOilTokens(parse_lib::ParseContext* parse_ctx, grammar::Grammar* gr, parse::Parser* p, lexer::Lexer* lex);

class ExprParser {
 public:
  ExprParser(parse_lib::ParseContext* parse_ctx, grammar::Grammar* gr);
  Tuple2<parse::PNode*, syntax_asdl::Token*>* Parse(lexer::Lexer* lexer, int start_symbol);

  grammar::Grammar* gr;
  parse_lib::ParseContext* parse_ctx;
  parse::Parser* push_parser;
};
Str* fmt0(Str* a0, int a1, Str* a2, Str* a3) {
  gBuf.reset();
  gBuf.format_s(a0);
  gBuf.format_d(a1);
  gBuf.write_const(" ", 1);
  gBuf.format_s(a2);
  gBuf.write_const(" ", 1);
  gBuf.format_s(a3);
  gBuf.write_const("\n", 1);
  return gBuf.getvalue();
}

Str* fmt1(Str* a0) {
  gBuf.reset();
  gBuf.write_const(" (", 2);
  gBuf.format_s(a0);
  gBuf.write_const(")", 1);
  return gBuf.getvalue();
}

Str* fmt2(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Unexpected token in expression mode", 35);
  gBuf.format_s(a0);
  return gBuf.getvalue();
}


}  // declare namespace expr_parse

namespace expr_to_ast {  // declare
bool ISNONTERMINAL(int x);

class Transformer {
 public:
  Transformer(grammar::Grammar* gr);
  syntax_asdl::expr_t* _AssocBinary(List<parse::PNode*>* children);
  syntax_asdl::expr_t* _Trailer(syntax_asdl::expr_t* base, parse::PNode* p_trailer);
  Tuple2<syntax_asdl::expr_t*, syntax_asdl::expr_t*>* _DictPair(parse::PNode* p_node);
  syntax_asdl::expr__Dict* _Dict(parse::PNode* p_node);
  syntax_asdl::expr_t* _Tuple(List<parse::PNode*>* children);
  syntax_asdl::expr_t* _TestlistComp(parse::PNode* p_node, int id0);
  syntax_asdl::expr_t* _Atom(List<parse::PNode*>* children);
  List<syntax_asdl::name_type*>* _NameTypeList(parse::PNode* p_node);
  syntax_asdl::comprehension* _CompFor(parse::PNode* p_node);
  syntax_asdl::expr_t* _CompareChain(List<parse::PNode*>* children);
  syntax_asdl::expr_t* _Subscript(List<parse::PNode*>* children);
  syntax_asdl::expr_t* Expr(parse::PNode* pnode);
  syntax_asdl::expr_t* _ArrayItem(parse::PNode* p_node);
  List<syntax_asdl::place_expr_t*>* _PlaceList(parse::PNode* p_node);
  syntax_asdl::command__VarDecl* MakeVarDecl(parse::PNode* p_node);
  syntax_asdl::command__PlaceMutation* MakePlaceMutation(parse::PNode* p_node);
  Tuple2<List<syntax_asdl::name_type*>*, syntax_asdl::expr_t*>* OilForExpr(parse::PNode* pnode);
  void _Argument(parse::PNode* p_node, bool do_named, syntax_asdl::arg_list* arglist);
  void _Arglist(List<parse::PNode*>* children, syntax_asdl::arg_list* arglist);
  void ArgList(parse::PNode* pnode, syntax_asdl::arg_list* arglist);
  syntax_asdl::type_expr_t* _TypeExpr(parse::PNode* pnode);
  List<syntax_asdl::type_expr_t*>* _TypeExprList(parse::PNode* pnode);
  Tuple2<syntax_asdl::Token*, syntax_asdl::expr_t*>* _ProcParam(parse::PNode* pnode);
  syntax_asdl::proc_sig_t* _ProcParams(parse::PNode* p_node);
  syntax_asdl::param* _FuncParam(parse::PNode* pnode);
  Tuple2<List<syntax_asdl::param*>*, syntax_asdl::Token*>* _FuncParams(parse::PNode* p_node);
  syntax_asdl::proc_sig_t* Proc(parse::PNode* pnode);
  void Func(parse::PNode* pnode, syntax_asdl::command__Func* out);
  Str* _RangeChar(parse::PNode* p_node);
  syntax_asdl::class_literal_term_t* _NonRangeChars(parse::PNode* p_node);
  syntax_asdl::class_literal_term_t* _ClassLiteralTerm(parse::PNode* p_node);
  List<syntax_asdl::class_literal_term_t*>* _ClassLiteral(parse::PNode* p_node);
  syntax_asdl::re_t* _NameInRegex(syntax_asdl::Token* negated_tok, syntax_asdl::Token* tok);
  syntax_asdl::class_literal_term_t* _NameInClass(syntax_asdl::Token* negated_tok, syntax_asdl::Token* tok);
  syntax_asdl::re_t* _ReAtom(parse::PNode* p_atom);
  syntax_asdl::re_repeat_t* _RepeatOp(parse::PNode* p_repeat);
  syntax_asdl::re_t* _Regex(parse::PNode* p_node);

  Dict<int, Str*>* number2symbol;
};
Str* fmt1() {
  gBuf.reset();
  gBuf.write_const("Write singleton tuples with tup(), not a trailing comma", 55);
  return gBuf.getvalue();
}

Str* fmt2() {
  gBuf.reset();
  gBuf.write_const("Can't assign to this expression", 31);
  return gBuf.getvalue();
}

Str* fmt6() {
  gBuf.reset();
  gBuf.write_const("Can't negate this symbol", 24);
  return gBuf.getvalue();
}

Str* fmt7(Str* a0) {
  gBuf.reset();
  gBuf.format_r(a0);
  gBuf.write_const(" isn't a character class", 24);
  return gBuf.getvalue();
}

Str* fmt8(Str* a0) {
  gBuf.reset();
  gBuf.format_r(a0);
  gBuf.write_const(" isn't a character class", 24);
  return gBuf.getvalue();
}

Str* fmt9(Str* a0) {
  gBuf.reset();
  gBuf.write_const("Unexpected token ", 17);
  gBuf.format_r(a0);
  gBuf.write_const(" in regex", 9);
  return gBuf.getvalue();
}


}  // declare namespace expr_to_ast

namespace runtime {  // define
using hnode_asdl::hnode__Record;
using hnode_asdl::hnode__Leaf;
using hnode_asdl::color_t;
using hnode_asdl::color_e;
int NO_SPID = -1;

hnode_asdl::hnode__Record* NewRecord(Str* node_type) {
  return new hnode__Record(node_type, new List<hnode_asdl::field*>(), false, str0, str1, new List<hnode_asdl::hnode_t*>());
}

hnode_asdl::hnode__Leaf* NewLeaf(Str* s, hnode_asdl::color_t e_color) {
  if (s == nullptr) {
    return new hnode__Leaf(str2, color_e::OtherConst);
  }
  else {
    return new hnode__Leaf(s, e_color);
  }
}
Str* TRUE_STR = str3;
Str* FALSE_STR = str4;

}  // define namespace runtime

namespace osh_parse {  // define
namespace source = syntax_asdl::source;
using syntax_asdl::source_t;
namespace command = syntax_asdl::command;
using syntax_asdl::command_t;
namespace fmt = format;

syntax_asdl::command_t* ParseWholeFile(cmd_parse::CommandParser* c_parser) {
  List<syntax_asdl::command_t*>* children;
  syntax_asdl::command_t* node;

  children = new List<syntax_asdl::command_t*>();
  while (true) {
    node = c_parser->ParseLogicalLine();
    if (node == nullptr) {
      c_parser->CheckForPendingHereDocs();
      break;
    }
    children->append(node);
  }
  if (len(children) == 1) {
    return children->index(0);
  }
  else {
    return new command::CommandList(children);
  }
}

int main(List<Str*>* argv) {
  alloc::Arena* arena;
  parse_lib::OilParseOptions* parse_opts;
  Dict<Str*, Str*>* aliases;
  grammar::Grammar* oil_grammar;
  parse_lib::ParseContext* parse_ctx;
  bool pretty_print;
  reader::FileLineReader* line_reader;
  syntax_asdl::source_t* src;
  Str* path;
  mylib::LineReader* f;
  cmd_parse::CommandParser* c_parser;
  syntax_asdl::command_t* node;
  hnode_asdl::hnode_t* tree;
  format::ColorOutput* ast_f;

  arena = new alloc::Arena();
  parse_opts = new parse_lib::OilParseOptions();
  aliases = new Dict<Str*, Str*>();
  oil_grammar = nullptr;
  parse_ctx = new parse_lib::ParseContext(arena, parse_opts, aliases, oil_grammar);
  pretty_print = true;
  if (len(argv) == 1) {
    line_reader = new reader::FileLineReader(mylib::Stdin(), arena);
    src = new source::Stdin(str5);
  }
  else {
    if (len(argv) == 2) {
      path = argv->index(1);
      f = mylib::open(path);
      line_reader = new reader::FileLineReader(f, arena);
      src = new source::MainFile(path);
    }
    else {
      if (len(argv) == 3) {
        if (str_equals(argv->index(1), str6)) {
          line_reader = reader::StringLineReader(argv->index(2), arena);
          src = new source::CFlag();
        }
        else {
          if (str_equals(argv->index(1), str7)) {
            path = argv->index(2);
            f = mylib::open(path);
            line_reader = new reader::FileLineReader(f, arena);
            src = new source::MainFile(path);
            pretty_print = false;
          }
          else {
            throw new AssertionError();
          }
        }
      }
      else {
        throw new AssertionError();
      }
    }
  }
  arena->PushSource(src);
  c_parser = parse_ctx->MakeOshParser(line_reader);
  try {
    node = ParseWholeFile(c_parser);
  }
  catch (error::Parse* e) {
    ui::PrettyPrintError(e, arena);
    return 2;
  }
  if (pretty_print) {
    tree = node->PrettyTree();
    ast_f = fmt::DetectConsoleOutput(mylib::Stdout());
    fmt::PrintTree(tree, ast_f);
    ast_f->write(str8);
  }
  return 0;
}

}  // define namespace osh_parse

namespace format {  // define
namespace hnode_e = hnode_asdl::hnode_e;
using hnode_asdl::hnode_t;
using hnode_asdl::hnode__Record;
using hnode_asdl::hnode__Array;
using hnode_asdl::hnode__Leaf;
using hnode_asdl::hnode__External;
using hnode_asdl::color_e;
using hnode_asdl::color_t;
using hnode_asdl::color_str;
using hnode_asdl::hnode_str;

format::ColorOutput* DetectConsoleOutput(mylib::Writer* f) {
  if (f->isatty()) {
    return new AnsiOutput(f);
  }
  else {
    return new TextOutput(f);
  }
}

ColorOutput::ColorOutput(mylib::Writer* f) {
  this->f = f;
  this->num_chars = 0;
}

format::ColorOutput* ColorOutput::NewTempBuffer() {
  throw new NotImplementedError();
}

void ColorOutput::FileHeader() {
  ;  // pass
}

void ColorOutput::FileFooter() {
  ;  // pass
}

void ColorOutput::PushColor(hnode_asdl::color_t e_color) {
  throw new NotImplementedError();
}

void ColorOutput::PopColor() {
  throw new NotImplementedError();
}

void ColorOutput::write(Str* s) {
  this->f->write(s);
  this->num_chars += len(s);
}

void ColorOutput::WriteRaw(Tuple2<Str*, int>* raw) {
  Str* s;
  int num_chars;

  Tuple2<Str*, int>* tup0 = raw;
  s = tup0->at0();
  num_chars = tup0->at1();
  this->f->write(s);
  this->num_chars += num_chars;
}

int ColorOutput::NumChars() {
  return this->num_chars;
}

Tuple2<Str*, int>* ColorOutput::GetRaw() {
  mylib::BufWriter* f = static_cast<mylib::BufWriter*>(this->f);
  return (new Tuple2<Str*, int>(f->getvalue(), this->num_chars));
}

TextOutput::TextOutput(mylib::Writer* f) : ColorOutput(f) {
}

format::TextOutput* TextOutput::NewTempBuffer() {
  return new TextOutput(new mylib::BufWriter());
}

void TextOutput::PushColor(hnode_asdl::color_t e_color) {
  ;  // pass
}

void TextOutput::PopColor() {
  ;  // pass
}

HtmlOutput::HtmlOutput(mylib::Writer* f) : ColorOutput(f) {
}

format::HtmlOutput* HtmlOutput::NewTempBuffer() {
  return new HtmlOutput(new mylib::BufWriter());
}

void HtmlOutput::FileHeader() {
  this->f->write(str9);
}

void HtmlOutput::FileFooter() {
  this->f->write(str10);
}

void HtmlOutput::PushColor(hnode_asdl::color_t e_color) {
  Str* css_class;

  if (e_color == color_e::TypeName) {
    css_class = str11;
  }
  else {
    if (e_color == color_e::StringConst) {
      css_class = str12;
    }
    else {
      if (e_color == color_e::OtherConst) {
        css_class = str13;
      }
      else {
        if (e_color == color_e::External) {
          css_class = str14;
        }
        else {
          if (e_color == color_e::UserType) {
            css_class = str15;
          }
          else {
            throw new AssertionError();
          }
        }
      }
    }
  }
  this->f->write(fmt1(css_class));
}

void HtmlOutput::PopColor() {
  this->f->write(str17);
}

void HtmlOutput::write(Str* s) {
  this->f->write(cgi::escape(s));
  this->num_chars += len(s);
}
Str* _RESET = str18;
Str* _BOLD = str19;
Str* _RED = str20;
Str* _GREEN = str21;
Str* _BLUE = str22;
Str* _YELLOW = str23;
Str* _CYAN = str24;

AnsiOutput::AnsiOutput(mylib::Writer* f) : ColorOutput(f) {
}

format::AnsiOutput* AnsiOutput::NewTempBuffer() {
  return new AnsiOutput(new mylib::BufWriter());
}

void AnsiOutput::PushColor(hnode_asdl::color_t e_color) {
  if (e_color == color_e::TypeName) {
    this->f->write(_YELLOW);
  }
  else {
    if (e_color == color_e::StringConst) {
      this->f->write(_BOLD);
    }
    else {
      if (e_color == color_e::OtherConst) {
        this->f->write(_GREEN);
      }
      else {
        if (e_color == color_e::External) {
          this->f->write(str_concat(_BOLD, _BLUE));
        }
        else {
          if (e_color == color_e::UserType) {
            this->f->write(_GREEN);
          }
          else {
            throw new AssertionError();
          }
        }
      }
    }
  }
}

void AnsiOutput::PopColor() {
  this->f->write(_RESET);
}
int INDENT = 2;

_PrettyPrinter::_PrettyPrinter(int max_col) {
  this->max_col = max_col;
}

bool _PrettyPrinter::_PrintWrappedArray(List<hnode_asdl::hnode_t*>* array, int prefix_len, format::ColorOutput* f, int indent) {
  bool all_fit;
  int chars_so_far;
  int i;
  format::ColorOutput* single_f;

  all_fit = true;
  chars_so_far = prefix_len;
  i = 0;
  for (ListIter<hnode_asdl::hnode_t*> it(array); !it.Done(); it.Next(), ++i) {
    hnode_asdl::hnode_t* val = it.Value();
    if (i != 0) {
      f->write(str25);
    }
    single_f = f->NewTempBuffer();
    if (_TrySingleLine(val, single_f, this->max_col - chars_so_far)) {
      f->WriteRaw(single_f->GetRaw());
      chars_so_far += single_f->NumChars();
    }
    else {
      f->write(str26);
      this->PrintNode(val, f, indent + INDENT);
      chars_so_far = 0;
      all_fit = false;
    }
  }
  return all_fit;
}

bool _PrettyPrinter::_PrintWholeArray(List<hnode_asdl::hnode_t*>* array, int prefix_len, format::ColorOutput* f, int indent) {
  bool all_fit;
  List<Tuple2<Str*, int>*>* pieces;
  int chars_so_far;
  format::ColorOutput* single_f;
  int i;

  all_fit = true;
  pieces = new List<Tuple2<Str*, int>*>();
  chars_so_far = prefix_len;
  for (ListIter<hnode_asdl::hnode_t*> it(array); !it.Done(); it.Next()) {
    hnode_asdl::hnode_t* item = it.Value();
    single_f = f->NewTempBuffer();
    if (_TrySingleLine(item, single_f, this->max_col - chars_so_far)) {
      pieces->append(single_f->GetRaw());
      chars_so_far += single_f->NumChars();
    }
    else {
      all_fit = false;
      break;
    }
  }
  if (all_fit) {
    i = 0;
    for (ListIter<Tuple2<Str*, int>*> it(pieces); !it.Done(); it.Next(), ++i) {
      Tuple2<Str*, int>* p = it.Value();
      if (i != 0) {
        f->write(str27);
      }
      f->WriteRaw(p);
    }
    f->write(str28);
  }
  return all_fit;
}

void _PrettyPrinter::_PrintRecord(hnode_asdl::hnode__Record* node, format::ColorOutput* f, int indent) {
  Str* ind;
  Str* prefix;
  int prefix_len;
  bool all_fit;
  int i;
  Str* name;
  hnode_asdl::hnode_t* val;
  Str* ind1;
  hnode_asdl::hnode_t* UP_val;
  int tag;
  Str* name_str;
  format::ColorOutput* single_f;

  ind = str_repeat(str29, indent);
  if (node->abbrev) {
    prefix = str_concat(ind, node->left);
    f->write(prefix);
    if (len(node->node_type)) {
      f->PushColor(color_e::TypeName);
      f->write(node->node_type);
      f->PopColor();
      f->write(str30);
    }
    prefix_len = len(prefix) + len(node->node_type) + 1;
    all_fit = this->_PrintWrappedArray(node->unnamed_fields, prefix_len, f, indent);
    if (!all_fit) {
      f->write(str31);
      f->write(ind);
    }
    f->write(node->right);
  }
  else {
    f->write(str_concat(ind, node->left));
    f->PushColor(color_e::TypeName);
    f->write(node->node_type);
    f->PopColor();
    f->write(str32);
    i = 0;
    for (ListIter<hnode_asdl::field*> it(node->fields); !it.Done(); it.Next()) {
      hnode_asdl::field* field = it.Value();
      name = field->name;
      val = field->val;
      ind1 = str_repeat(str33, indent + INDENT);
      UP_val = val;
      tag = val->tag_();
      if (tag == hnode_e::Array) {
        hnode__Array* val = static_cast<hnode__Array*>(UP_val);
        name_str = fmt2(ind1, name);
        f->write(name_str);
        prefix_len = len(name_str);
        if (!this->_PrintWholeArray(val->children, prefix_len, f, indent)) {
          f->write(str35);
          for (ListIter<hnode_asdl::hnode_t*> it(val->children); !it.Done(); it.Next()) {
            hnode_asdl::hnode_t* child = it.Value();
            this->PrintNode(child, f, indent + INDENT + INDENT);
            f->write(str36);
          }
          f->write(fmt3(ind1));
        }
      }
      else {
        name_str = fmt4(ind1, name);
        f->write(name_str);
        prefix_len = len(name_str);
        single_f = f->NewTempBuffer();
        if (_TrySingleLine(val, single_f, this->max_col - prefix_len)) {
          f->WriteRaw(single_f->GetRaw());
        }
        else {
          f->write(str39);
          this->PrintNode(val, f, indent + INDENT + INDENT);
        }
        i += 1;
      }
      f->write(str40);
    }
    f->write(str_concat(ind, node->right));
  }
}

void _PrettyPrinter::PrintNode(hnode_asdl::hnode_t* node, format::ColorOutput* f, int indent) {
  Str* ind;
  format::ColorOutput* single_f;
  hnode_asdl::hnode_t* UP_node;
  int tag;

  ind = str_repeat(str41, indent);
  single_f = f->NewTempBuffer();
  single_f->write(ind);
  if (_TrySingleLine(node, single_f, this->max_col - indent)) {
    f->WriteRaw(single_f->GetRaw());
    return ;
  }
  UP_node = node;
  tag = node->tag_();
  if (tag == hnode_e::Leaf) {
    hnode__Leaf* node = static_cast<hnode__Leaf*>(UP_node);
    f->PushColor(node->color);
    f->write(pretty::String(node->s));
    f->PopColor();
  }
  else {
    if (tag == hnode_e::External) {
      hnode__External* node = static_cast<hnode__External*>(UP_node);
      f->PushColor(color_e::External);
      f->write(repr(node->obj));
      f->PopColor();
    }
    else {
      if (tag == hnode_e::Record) {
        hnode__Record* node = static_cast<hnode__Record*>(UP_node);
        this->_PrintRecord(node, f, indent);
      }
      else {
        throw new AssertionError();
      }
    }
  }
}

bool _TrySingleLineObj(hnode_asdl::hnode__Record* node, format::ColorOutput* f, int max_chars) {
  int i;

  f->write(node->left);
  if (node->abbrev) {
    if (len(node->node_type)) {
      f->PushColor(color_e::TypeName);
      f->write(node->node_type);
      f->PopColor();
      f->write(str42);
    }
    i = 0;
    for (ListIter<hnode_asdl::hnode_t*> it(node->unnamed_fields); !it.Done(); it.Next(), ++i) {
      hnode_asdl::hnode_t* val = it.Value();
      if (i != 0) {
        f->write(str43);
      }
      if (!_TrySingleLine(val, f, max_chars)) {
        return false;
      }
    }
  }
  else {
    f->PushColor(color_e::TypeName);
    f->write(node->node_type);
    f->PopColor();
    for (ListIter<hnode_asdl::field*> it(node->fields); !it.Done(); it.Next()) {
      hnode_asdl::field* field = it.Value();
      f->write(fmt5(field->name));
      if (!_TrySingleLine(field->val, f, max_chars)) {
        return false;
      }
    }
  }
  f->write(node->right);
  return true;
}

bool _TrySingleLine(hnode_asdl::hnode_t* node, format::ColorOutput* f, int max_chars) {
  hnode_asdl::hnode_t* UP_node;
  int tag;
  int i;
  int num_chars_so_far;

  UP_node = node;
  tag = node->tag_();
  if (tag == hnode_e::Leaf) {
    hnode__Leaf* node = static_cast<hnode__Leaf*>(UP_node);
    f->PushColor(node->color);
    f->write(pretty::String(node->s));
    f->PopColor();
  }
  else {
    if (tag == hnode_e::External) {
      hnode__External* node = static_cast<hnode__External*>(UP_node);
      f->PushColor(color_e::External);
      f->write(repr(node->obj));
      f->PopColor();
    }
    else {
      if (tag == hnode_e::Array) {
        hnode__Array* node = static_cast<hnode__Array*>(UP_node);
        f->write(str45);
        i = 0;
        for (ListIter<hnode_asdl::hnode_t*> it(node->children); !it.Done(); it.Next(), ++i) {
          hnode_asdl::hnode_t* item = it.Value();
          if (i != 0) {
            f->write(str46);
          }
          if (!_TrySingleLine(item, f, max_chars)) {
            return false;
          }
        }
        f->write(str47);
      }
      else {
        if (tag == hnode_e::Record) {
          hnode__Record* node = static_cast<hnode__Record*>(UP_node);
          return _TrySingleLineObj(node, f, max_chars);
        }
        else {
          throw new AssertionError();
        }
      }
    }
  }
  num_chars_so_far = f->NumChars();
  if (num_chars_so_far > max_chars) {
    return false;
  }
  return true;
}

void PrintTree(hnode_asdl::hnode_t* node, format::ColorOutput* f) {
  format::_PrettyPrinter* pp;

  pp = new _PrettyPrinter(100);
  pp->PrintNode(node, f, 0);
}

}  // define namespace format

namespace alloc {  // define
using syntax_asdl::line_span;
using syntax_asdl::source_t;
namespace source_e = syntax_asdl::source_e;
using syntax_asdl::source__MainFile;
using syntax_asdl::source__SourcedFile;

Arena::Arena() {
  this->line_vals = new List<Str*>();
  this->line_nums = new List<int>();
  this->line_srcs = new List<syntax_asdl::source_t*>();
  this->line_num_strs = new Dict<int, Str*>();
  this->spans = new List<syntax_asdl::line_span*>();
  this->source_instances = new List<syntax_asdl::source_t*>();
}

void Arena::PushSource(syntax_asdl::source_t* src) {
  this->source_instances->append(src);
}

void Arena::PopSource() {
  this->source_instances->pop();
}

int Arena::AddLine(Str* line, int line_num) {
  int line_id;

  line_id = len(this->line_vals);
  this->line_vals->append(line);
  this->line_nums->append(line_num);
  this->line_srcs->append(this->source_instances->index(-1));
  return line_id;
}

Str* Arena::GetLine(int line_id) {
  return this->line_vals->index(line_id);
}

int Arena::GetLineNumber(int line_id) {
  return this->line_nums->index(line_id);
}

Str* Arena::GetLineNumStr(int line_id) {
  int line_num;
  Str* s;

  line_num = this->line_nums->index(line_id);
  try {
    return this->line_num_strs->index(line_num);
  }
  catch (KeyError*) {
    s = str(line_num);
    (*this->line_num_strs)[line_num] = s;
    return s;
  }
}

syntax_asdl::source_t* Arena::GetLineSource(int line_id) {
  return this->line_srcs->index(line_id);
}

Str* Arena::GetLineSourceString(int line_id) {
  syntax_asdl::source_t* src;
  syntax_asdl::source_t* UP_src;
  int tag;

  src = this->line_srcs->index(line_id);
  UP_src = src;
  tag = src->tag_();
  if (tag == source_e::CFlag) {
    return str48;
  }
  if (tag == source_e::MainFile) {
    source__MainFile* src = static_cast<source__MainFile*>(UP_src);
    return src->path;
  }
  if (tag == source_e::SourcedFile) {
    source__SourcedFile* src = static_cast<source__SourcedFile*>(UP_src);
    return src->path;
  }
  return repr(src);
}

int Arena::AddLineSpan(int line_id, int col, int length) {
  int span_id;
  syntax_asdl::line_span* span;

  span_id = len(this->spans);
  span = new line_span(line_id, col, length);
  this->spans->append(span);
  return span_id;
}

syntax_asdl::line_span* Arena::GetLineSpan(int span_id) {
  try {
    return this->spans->index(span_id);
  }
  catch (IndexError*) {
    println_stderr(fmt0(span_id, len(this->spans)));
    throw ;
  }
}

int Arena::LastSpanId() {
  return len(this->spans);
}

}  // define namespace alloc

namespace error {  // define
int NO_SPID = -1;

}  // define namespace error

namespace ui {  // define
using syntax_asdl::command_t;
namespace command = syntax_asdl::command;
namespace source_e = syntax_asdl::source_e;
using syntax_asdl::source__Stdin;
using syntax_asdl::source__MainFile;
using syntax_asdl::source__SourcedFile;
using syntax_asdl::source__EvalArg;
using syntax_asdl::source__Alias;
using syntax_asdl::source__LValue;
namespace value_e = runtime_asdl::value_e;
using runtime_asdl::value_t;
using runtime_asdl::value__Str;
namespace fmt = format;

Str* PrettyDir(Str* dir_name, runtime_asdl::value_t* UP_home_dir) {
  Str* home_dir;

  if (UP_home_dir and UP_home_dir->tag_() == value_e::Str) {
    home_dir = static_cast<value__Str*>(UP_home_dir)->s;
    if (dir_name == home_dir or dir_name->startswith(str_concat(home_dir, str50))) {
      return str_concat(str51, dir_name->slice(len(home_dir)));
    }
  }
  return dir_name;
}

void _PrintCodeExcerpt(Str* line, int col, int length, mylib::Writer* f) {
  f->write(str52);
  f->write(line->rstrip());
  f->write(str53);
  for (StrIter it(line->slice(0, col)); !it.Done(); it.Next()) {
    Str* c = it.Value();
    f->write(str_equals(c, str54) ? str55 : str56);
  }
  f->write(str57);
  f->write(str_repeat(str58, length - 1));
  f->write(str59);
}

void _PrintWithSpanId(Str* prefix, Str* msg, int span_id, alloc::Arena* arena, mylib::Writer* f) {
  syntax_asdl::line_span* line_span;
  int orig_col;
  int line_id;
  syntax_asdl::source_t* src;
  Str* line;
  int line_num;
  syntax_asdl::source_t* UP_src;
  Str* source_str;
  syntax_asdl::line_span* span2;
  Str* line2;
  Str* outer_source;
  int lbracket_col;
  syntax_asdl::line_span* span;

  line_span = arena->GetLineSpan(span_id);
  orig_col = line_span->col;
  line_id = line_span->line_id;
  src = arena->GetLineSource(line_id);
  line = arena->GetLine(line_id);
  line_num = arena->GetLineNumber(line_id);
  if (src->tag_() != source_e::LValue) {
    _PrintCodeExcerpt(line, line_span->col, line_span->length, f);
  }
  UP_src = src;
  switch (src->tag_()) {
    case source_e::Interactive: {
      source_str = str60;
    }
      break;
    case source_e::CFlag: {
      source_str = str61;
    }
      break;
    case source_e::Stdin: {
      source__Stdin* src = static_cast<source__Stdin*>(UP_src);
      source_str = fmt0(src->comment);
    }
      break;
    case source_e::MainFile: {
      source__MainFile* src = static_cast<source__MainFile*>(UP_src);
      source_str = src->path;
    }
      break;
    case source_e::SourcedFile: {
      source__SourcedFile* src = static_cast<source__SourcedFile*>(UP_src);
      source_str = src->path;
    }
      break;
    case source_e::Alias: {
      source__Alias* src = static_cast<source__Alias*>(UP_src);
      source_str = fmt1(src->argv0);
    }
      break;
    case source_e::Backticks: {
      source_str = str64;
    }
      break;
    case source_e::LValue: {
      source__LValue* src = static_cast<source__LValue*>(UP_src);
      span2 = arena->GetLineSpan(src->left_spid);
      line2 = arena->GetLine(span2->line_id);
      outer_source = arena->GetLineSourceString(span2->line_id);
      source_str = fmt2(outer_source);
      line_num = arena->GetLineNumber(span2->line_id);
      lbracket_col = span2->col + span2->length;
      _PrintCodeExcerpt(line2, orig_col + lbracket_col, 1, f);
    }
      break;
    case source_e::EvalArg: {
      source__EvalArg* src = static_cast<source__EvalArg*>(UP_src);
      span = arena->GetLineSpan(src->eval_spid);
      line_num = arena->GetLineNumber(span->line_id);
      outer_source = arena->GetLineSourceString(span->line_id);
      source_str = fmt3(line_num, outer_source);
    }
      break;
    case source_e::Trap: {
      source_str = str67;
    }
      break;
    default: {
      source_str = repr(src);
    }
  }
  f->write(fmt4(source_str, line_num, prefix, msg));
}

void _PrintWithOptionalSpanId(Str* prefix, Str* msg, int span_id, alloc::Arena* arena) {
  mylib::Writer* f;

  f = mylib::Stderr();
  if (span_id == runtime::NO_SPID) {
    f->write(fmt5(prefix, msg));
  }
  else {
    _PrintWithSpanId(prefix, msg, span_id, arena, f);
  }
}

void _pp(error::_ErrorWithLocation* err, alloc::Arena* arena, Str* prefix) {
  Str* msg;
  int span_id;

  msg = err->UserErrorString();
  span_id = word_::SpanIdFromError(err);
  _PrintWithOptionalSpanId(prefix, msg, span_id, arena);
}

void PrettyPrintError(error::_ErrorWithLocation* err, alloc::Arena* arena) {
  PrettyPrintError(err, arena, str70);
}

void PrettyPrintError(error::_ErrorWithLocation* err, alloc::Arena* arena, Str* prefix) {
  _pp(err, arena, prefix);
}

ErrorFormatter::ErrorFormatter(alloc::Arena* arena) {
  this->arena = arena;
  this->last_spid = runtime::NO_SPID;
  this->spid_stack = new List<int>();
}

void ErrorFormatter::PushLocation(int spid) {
  this->spid_stack->append(spid);
}

void ErrorFormatter::PopLocation() {
  this->spid_stack->pop();
}

int ErrorFormatter::CurrentLocation() {
  if (len(this->spid_stack)) {
    return this->spid_stack->index(-1);
  }
  else {
    return runtime::NO_SPID;
  }
}

void ErrorFormatter::PrettyPrintError(error::_ErrorWithLocation* err) {
  PrettyPrintError(err, str71);
}

void ErrorFormatter::PrettyPrintError(error::_ErrorWithLocation* err, Str* prefix) {
  _pp(err, this->arena, prefix);
}

}  // define namespace ui

namespace parse_lib {  // define
using id_kind_asdl::Id_t;
using syntax_asdl::Token;
using syntax_asdl::compound_word;
using syntax_asdl::command_t;
using syntax_asdl::command__VarDecl;
using syntax_asdl::command__PlaceMutation;
using syntax_asdl::command__Proc;
using syntax_asdl::command__Func;
using syntax_asdl::expr_t;
using syntax_asdl::word_t;
using syntax_asdl::redir_t;
using syntax_asdl::arg_list;
using syntax_asdl::name_type;
using types_asdl::lex_mode_e;

_BaseTrail::_BaseTrail() {
  this->words = new List<syntax_asdl::compound_word*>();
  this->redirects = new List<syntax_asdl::redir_t*>();
  this->tokens = new List<syntax_asdl::Token*>();
  this->alias_words = new List<syntax_asdl::compound_word*>();
  this->expanding_alias = false;
}

void _BaseTrail::Clear() {
  ;  // pass
}

void _BaseTrail::SetLatestWords(List<syntax_asdl::compound_word*>* words, List<syntax_asdl::redir_t*>* redirects) {
  ;  // pass
}

void _BaseTrail::AppendToken(syntax_asdl::Token* token) {
  ;  // pass
}

void _BaseTrail::BeginAliasExpansion() {
  ;  // pass
}

void _BaseTrail::EndAliasExpansion() {
  ;  // pass
}

void Trail::Clear() {
  this->words->clear();
  this->redirects->clear();
  this->tokens->clear();
  this->alias_words->clear();
}

void Trail::SetLatestWords(List<syntax_asdl::compound_word*>* words, List<syntax_asdl::redir_t*>* redirects) {
  if (this->expanding_alias) {
    this->alias_words = words;
    return ;
  }
  this->words = words;
  this->redirects = redirects;
}

void Trail::AppendToken(syntax_asdl::Token* token) {
  if (this->expanding_alias) {
    return ;
  }
  this->tokens->append(token);
}

void Trail::BeginAliasExpansion() {
  this->expanding_alias = true;
}

void Trail::EndAliasExpansion() {
  this->expanding_alias = false;
}

OilParseOptions::OilParseOptions() {
  this->parse_at = false;
  this->parse_brace = false;
  this->parse_paren = false;
  this->parse_rawc = false;
  this->parse_index_expr = false;
  this->parse_equals = false;
  this->parse_set = false;
  this->parse_do = false;
}

ParseContext::ParseContext(alloc::Arena* arena, parse_lib::OilParseOptions* parse_opts, Dict<Str*, Str*>* aliases, grammar::Grammar* oil_grammar) {
  this->arena = arena;
  this->parse_opts = parse_opts;
  this->aliases = aliases;
  this->e_parser = new expr_parse::ExprParser(this, oil_grammar);
  if (oil_grammar) {
    this->tr = new expr_to_ast::Transformer(oil_grammar);
  }
  else {
    this->tr = nullptr;
  }
  this->parsing_expr = false;
  this->trail = new _NullTrail();
  this->one_pass_parse = false;
}

void ParseContext::Init_Trail(parse_lib::_BaseTrail* trail) {
  this->trail = trail;
}

void ParseContext::Init_OnePassParse(bool b) {
  this->one_pass_parse = b;
}

lexer::Lexer* ParseContext::_MakeLexer(reader::_Reader* line_reader) {
  lexer::LineLexer* line_lexer;

  line_lexer = new lexer::LineLexer(str73, this->arena);
  return new lexer::Lexer(line_lexer, line_reader);
}

cmd_parse::CommandParser* ParseContext::MakeOshParser(reader::_Reader* line_reader) {
  return MakeOshParser(line_reader, false);
}

cmd_parse::CommandParser* ParseContext::MakeOshParser(reader::_Reader* line_reader, bool emit_comp_dummy) {
  lexer::Lexer* lx;
  word_parse::WordParser* w_parser;
  cmd_parse::CommandParser* c_parser;

  lx = this->_MakeLexer(line_reader);
  if (emit_comp_dummy) {
    lx->EmitCompDummy();
  }
  w_parser = new word_parse::WordParser(this, lx, line_reader);
  c_parser = new cmd_parse::CommandParser(this, w_parser, lx, line_reader);
  return c_parser;
}

word_parse::WordParser* ParseContext::MakeWordParserForHereDoc(reader::_Reader* line_reader) {
  lexer::Lexer* lx;

  lx = this->_MakeLexer(line_reader);
  return new word_parse::WordParser(this, lx, line_reader);
}

word_parse::WordParser* ParseContext::MakeWordParser(lexer::Lexer* lx, reader::_Reader* line_reader) {
  return new word_parse::WordParser(this, lx, line_reader);
}

tdop::TdopParser* ParseContext::MakeArithParser(Str* code_str) {
  reader::FileLineReader* line_reader;
  lexer::Lexer* lx;
  word_parse::WordParser* w_parser;
  tdop::TdopParser* a_parser;

  line_reader = reader::StringLineReader(code_str, this->arena);
  lx = this->_MakeLexer(line_reader);
  w_parser = new word_parse::WordParser(this, lx, line_reader);
  w_parser->Init(lex_mode_e::Arith);
  a_parser = new tdop::TdopParser(arith_parse::Spec(), w_parser);
  return a_parser;
}

cmd_parse::CommandParser* ParseContext::MakeParserForCommandSub(reader::_Reader* line_reader, lexer::Lexer* lexer, int eof_id) {
  word_parse::WordParser* w_parser;
  cmd_parse::CommandParser* c_parser;

  w_parser = new word_parse::WordParser(this, lexer, line_reader);
  c_parser = new cmd_parse::CommandParser(this, w_parser, lexer, line_reader);
  c_parser->Init_EofId(eof_id);
  return c_parser;
}

word_parse::WordParser* ParseContext::MakeWordParserForPlugin(Str* code_str) {
  reader::FileLineReader* line_reader;
  lexer::Lexer* lx;

  line_reader = reader::StringLineReader(code_str, this->arena);
  lx = this->_MakeLexer(line_reader);
  return new word_parse::WordParser(this, lx, line_reader);
}

Tuple2<parse::PNode*, syntax_asdl::Token*>* ParseContext::_ParseOil(lexer::Lexer* lexer, int start_symbol) {
  this->parsing_expr = true;
  try {
    return this->e_parser->Parse(lexer, start_symbol);
  }
  catch (std::exception) { }}

Tuple2<syntax_asdl::command__VarDecl*, syntax_asdl::Token*>* ParseContext::ParseVarDecl(syntax_asdl::Token* kw_token, lexer::Lexer* lexer) {
  parse::PNode* pnode;
  syntax_asdl::Token* last_token;
  syntax_asdl::command__VarDecl* ast_node;

  if (this->parsing_expr) {
    p_die(fmt0(), kw_token);
  }
  this->parsing_expr = true;
  try {
    Tuple2<parse::PNode*, syntax_asdl::Token*>* tup0 = this->e_parser->Parse(lexer, grammar_nt::oil_var_decl);
    pnode = tup0->at0();
    last_token = tup0->at1();
  }
  catch (std::exception) { }  ast_node = this->tr->MakeVarDecl(pnode);
  ast_node->keyword = kw_token;
  return (new Tuple2<syntax_asdl::command__VarDecl*, syntax_asdl::Token*>(ast_node, last_token));
}

Tuple2<syntax_asdl::command__PlaceMutation*, syntax_asdl::Token*>* ParseContext::ParsePlaceMutation(syntax_asdl::Token* kw_token, lexer::Lexer* lexer) {
  parse::PNode* pnode;
  syntax_asdl::Token* last_token;
  syntax_asdl::command__PlaceMutation* ast_node;

  Tuple2<parse::PNode*, syntax_asdl::Token*>* tup1 = this->e_parser->Parse(lexer, grammar_nt::oil_place_mutation);
  pnode = tup1->at0();
  last_token = tup1->at1();
  ast_node = this->tr->MakePlaceMutation(pnode);
  ast_node->keyword = kw_token;
  return (new Tuple2<syntax_asdl::command__PlaceMutation*, syntax_asdl::Token*>(ast_node, last_token));
}

syntax_asdl::Token* ParseContext::ParseOilArgList(lexer::Lexer* lexer, syntax_asdl::arg_list* out) {
  parse::PNode* pnode;
  syntax_asdl::Token* last_token;

  if (this->parsing_expr) {
    throw new AssertionError();
  }
  Tuple2<parse::PNode*, syntax_asdl::Token*>* tup2 = this->_ParseOil(lexer, grammar_nt::oil_arglist);
  pnode = tup2->at0();
  last_token = tup2->at1();
  this->tr->ArgList(pnode, out);
  return last_token;
}

Tuple2<syntax_asdl::expr_t*, syntax_asdl::Token*>* ParseContext::ParseOilExpr(lexer::Lexer* lexer, int start_symbol) {
  parse::PNode* pnode;
  syntax_asdl::Token* last_token;
  syntax_asdl::expr_t* ast_node;

  Tuple2<parse::PNode*, syntax_asdl::Token*>* tup3 = this->e_parser->Parse(lexer, start_symbol);
  pnode = tup3->at0();
  last_token = tup3->at1();
  ast_node = this->tr->Expr(pnode);
  return (new Tuple2<syntax_asdl::expr_t*, syntax_asdl::Token*>(ast_node, last_token));
}

Tuple3<List<syntax_asdl::name_type*>*, syntax_asdl::expr_t*, syntax_asdl::Token*>* ParseContext::ParseOilForExpr(lexer::Lexer* lexer, int start_symbol) {
  parse::PNode* pnode;
  syntax_asdl::Token* last_token;
  List<syntax_asdl::name_type*>* lvalue;
  syntax_asdl::expr_t* iterable;

  Tuple2<parse::PNode*, syntax_asdl::Token*>* tup4 = this->e_parser->Parse(lexer, start_symbol);
  pnode = tup4->at0();
  last_token = tup4->at1();
  Tuple2<List<syntax_asdl::name_type*>*, syntax_asdl::expr_t*>* tup5 = this->tr->OilForExpr(pnode);
  lvalue = tup5->at0();
  iterable = tup5->at1();
  return (new Tuple3<List<syntax_asdl::name_type*>*, syntax_asdl::expr_t*, syntax_asdl::Token*>(lvalue, iterable, last_token));
}

syntax_asdl::Token* ParseContext::ParseProc(lexer::Lexer* lexer, syntax_asdl::command__Proc* out) {
  parse::PNode* pnode;
  syntax_asdl::Token* last_token;

  Tuple2<parse::PNode*, syntax_asdl::Token*>* tup6 = this->e_parser->Parse(lexer, grammar_nt::oil_proc);
  pnode = tup6->at0();
  last_token = tup6->at1();
  out->sig = this->tr->Proc(pnode);
  return last_token;
}

syntax_asdl::Token* ParseContext::ParseFunc(lexer::Lexer* lexer, syntax_asdl::command__Func* out) {
  parse::PNode* pnode;
  syntax_asdl::Token* last_token;

  Tuple2<parse::PNode*, syntax_asdl::Token*>* tup7 = this->e_parser->Parse(lexer, grammar_nt::oil_func);
  pnode = tup7->at0();
  last_token = tup7->at1();
  this->tr->Func(pnode, out);
  return last_token;
}

}  // define namespace parse_lib

namespace reader {  // define

_Reader::_Reader(alloc::Arena* arena) {
  this->arena = arena;
  this->line_num = 1;
}

Str* _Reader::_GetLine() {
  throw new NotImplementedError();
}

Tuple3<int, Str*, int>* _Reader::GetLine() {
  Str* line;
  Str* eof_line;
  int line_id;

  line = this->_GetLine();
  if (line == nullptr) {
    eof_line = nullptr;
    return (new Tuple3<int, Str*, int>(-1, eof_line, 0));
  }
  line_id = this->arena->AddLine(line, this->line_num);
  this->line_num += 1;
  return (new Tuple3<int, Str*, int>(line_id, line, 0));
}

void _Reader::Reset() {
  ;  // pass
}

DisallowedLineReader::DisallowedLineReader(alloc::Arena* arena, syntax_asdl::Token* blame_token) : _Reader(arena) {
  this->blame_token = blame_token;
}

Str* DisallowedLineReader::_GetLine() {
  p_die(fmt0(), this->blame_token);
}

FileLineReader::FileLineReader(mylib::LineReader* f, alloc::Arena* arena) : _Reader(arena) {
  this->f = f;
}

Str* FileLineReader::_GetLine() {
  Str* line;

  line = this->f->readline();
  if (len(line) == 0) {
    return nullptr;
  }
  return line;
}

reader::FileLineReader* StringLineReader(Str* s, alloc::Arena* arena) {
  return new FileLineReader(new mylib::BufLineReader(s), arena);
}

VirtualLineReader::VirtualLineReader(List<Tuple3<int, Str*, int>*>* lines, alloc::Arena* arena) : _Reader(arena) {
  this->lines = lines;
  this->num_lines = len(lines);
  this->pos = 0;
}

Tuple3<int, Str*, int>* VirtualLineReader::GetLine() {
  Str* eof_line;
  int line_id;
  Str* line;
  int start_offset;

  if (this->pos == this->num_lines) {
    eof_line = nullptr;
    return (new Tuple3<int, Str*, int>(-1, eof_line, 0));
  }
  Tuple3<int, Str*, int>* tup0 = this->lines->index(this->pos);
  line_id = tup0->at0();
  line = tup0->at1();
  start_offset = tup0->at2();
  this->pos += 1;
  return (new Tuple3<int, Str*, int>(line_id, line, start_offset));
}

}  // define namespace reader

namespace cmd_parse {  // define
namespace Id = id_kind_asdl::Id;
using id_kind_asdl::Id_t;
using id_kind_asdl::Id_str;
using id_kind_asdl::Kind;
using types_asdl::lex_mode_t;
using types_asdl::lex_mode_e;
namespace command = syntax_asdl::command;
using syntax_asdl::command_t;
using syntax_asdl::command__Simple;
using syntax_asdl::command__BraceGroup;
using syntax_asdl::command__DoGroup;
using syntax_asdl::command__ForExpr;
using syntax_asdl::command__ForEach;
using syntax_asdl::command__WhileUntil;
using syntax_asdl::command__Case;
using syntax_asdl::command__If;
using syntax_asdl::command__ShFunction;
using syntax_asdl::command__Subshell;
using syntax_asdl::command__DBracket;
using syntax_asdl::command__DParen;
using syntax_asdl::command__CommandList;
using syntax_asdl::command__Func;
using syntax_asdl::command__Proc;
using syntax_asdl::case_arm;
namespace sh_lhs_expr = syntax_asdl::sh_lhs_expr;
using syntax_asdl::sh_lhs_expr_t;
namespace redir = syntax_asdl::redir;
using syntax_asdl::redir_t;
using syntax_asdl::redir__HereDoc;
namespace word = syntax_asdl::word;
namespace word_e = syntax_asdl::word_e;
using syntax_asdl::word_t;
using syntax_asdl::compound_word;
using syntax_asdl::Token;
namespace word_part = syntax_asdl::word_part;
namespace word_part_e = syntax_asdl::word_part_e;
using syntax_asdl::word_part_t;
using syntax_asdl::word_part__Literal;
using syntax_asdl::assign_pair;
using syntax_asdl::env_pair;
using syntax_asdl::assign_op_e;
namespace source = syntax_asdl::source;
namespace parse_result = syntax_asdl::parse_result;
using syntax_asdl::parse_result_t;
using syntax_asdl::speck;
using syntax_asdl::name_type;
using mylib::NewStr;

int _KeywordSpid(syntax_asdl::word_t* w) {
  return word_::LeftMostSpanForWord(w);
}

syntax_asdl::Token* _KeywordToken(syntax_asdl::word_t* UP_w) {
  syntax_asdl::word_part_t* part;

  compound_word* w = static_cast<compound_word*>(UP_w);
  part = w->parts->index(0);
  word_part__Literal* lit_part = static_cast<word_part__Literal*>(part);
  return lit_part->token;
}

Tuple2<List<Tuple3<int, Str*, int>*>*, Tuple3<int, Str*, int>*>* _ReadHereLines(reader::_Reader* line_reader, syntax_asdl::redir__HereDoc* h, Str* delimiter) {
  List<Tuple3<int, Str*, int>*>* here_lines;
  Tuple3<int, Str*, int>* last_line;
  bool strip_leading_tabs;
  int line_id;
  Str* line;
  int unused_offset;
  int start_offset;
  int n;
  int i;

  here_lines = new List<Tuple3<int, Str*, int>*>();
  last_line = nullptr;
  strip_leading_tabs = h->op->id == Id::Redir_DLessDash;
  while (true) {
    Tuple3<int, Str*, int>* tup0 = line_reader->GetLine();
    line_id = tup0->at0();
    line = tup0->at1();
    unused_offset = tup0->at2();
    if (!line) {
      p_die(fmt1(), h->op);
    }
    start_offset = 0;
    if (strip_leading_tabs) {
      n = len(line);
      i = 0;
      while (i < n) {
        if (!(str_equals(line->index(i), str77))) {
          break;
        }
        i += 1;
      }
      start_offset = i;
    }
    if (str_equals(line->slice(start_offset)->rstrip(), delimiter)) {
      last_line = (new Tuple3<int, Str*, int>(line_id, line, start_offset));
      break;
    }
    here_lines->append((new Tuple3<int, Str*, int>(line_id, line, start_offset)));
  }
  return (new Tuple2<List<Tuple3<int, Str*, int>*>*, Tuple3<int, Str*, int>*>(here_lines, last_line));
}

List<syntax_asdl::word_part_t*>* _MakeLiteralHereLines(List<Tuple3<int, Str*, int>*>* here_lines, alloc::Arena* arena) {
  List<syntax_asdl::Token*>* tokens;
  int line_id;
  Str* line;
  int start_offset;
  int span_id;
  syntax_asdl::Token* t;
  List<syntax_asdl::word_part_t*>* parts;

  tokens = new List<syntax_asdl::Token*>();
  for (ListIter<Tuple3<int, Str*, int>*> it(here_lines); !it.Done(); it.Next()) {
    Tuple3<int, Str*, int>* tup1 = it.Value();
    line_id = tup1->at0();
    line = tup1->at1();
    start_offset = tup1->at2();
    span_id = arena->AddLineSpan(line_id, start_offset, len(line));
    t = new syntax_asdl::Token(Id::Lit_Chars, line->slice(start_offset), span_id);
    tokens->append(t);
  }
  parts = new List<syntax_asdl::word_part_t*>();
  for (ListIter<syntax_asdl::Token*> it(tokens); !it.Done(); it.Next()) {
    syntax_asdl::Token* t = it.Value();
    parts->append(static_cast<word_part_t*>(new word_part::Literal(t)));
  }
  return parts;
}

void _ParseHereDocBody(parse_lib::ParseContext* parse_ctx, syntax_asdl::redir__HereDoc* h, reader::_Reader* line_reader, alloc::Arena* arena) {
  bool ok;
  Str* delimiter;
  bool delim_quoted;
  List<Tuple3<int, Str*, int>*>* here_lines;
  Tuple3<int, Str*, int>* last_line;
  word_parse::WordParser* w_parser;
  int end_line_id;
  Str* end_line;
  int end_pos;

  Tuple3<bool, Str*, bool>* tup2 = word_::StaticEval(h->here_begin);
  ok = tup2->at0();
  delimiter = tup2->at1();
  delim_quoted = tup2->at2();
  if (!ok) {
    p_die(fmt4(), h->here_begin);
  }
  Tuple2<List<Tuple3<int, Str*, int>*>*, Tuple3<int, Str*, int>*>* tup3 = _ReadHereLines(line_reader, h, delimiter);
  here_lines = tup3->at0();
  last_line = tup3->at1();
  if (delim_quoted) {
    h->stdin_parts = _MakeLiteralHereLines(here_lines, arena);
  }
  else {
    line_reader = new reader::VirtualLineReader(here_lines, arena);
    w_parser = parse_ctx->MakeWordParserForHereDoc(line_reader);
    w_parser->ReadHereDocBody(h->stdin_parts);
  }
  Tuple3<int, Str*, int>* tup4 = last_line;
  end_line_id = tup4->at0();
  end_line = tup4->at1();
  end_pos = tup4->at2();
  h->here_end_span_id = arena->AddLineSpan(end_line_id, end_pos, len(end_line));
}

syntax_asdl::assign_pair* _MakeAssignPair(parse_lib::ParseContext* parse_ctx, Tuple4<syntax_asdl::Token*, syntax_asdl::Token*, int, syntax_asdl::compound_word*>* preparsed, alloc::Arena* arena) {
  syntax_asdl::Token* left_token;
  syntax_asdl::Token* close_token;
  int part_offset;
  syntax_asdl::compound_word* w;
  Str* var_name;
  syntax_asdl::assign_op_t op;
  syntax_asdl::sh_lhs_expr__Name* tmp;
  sh_lhs_expr_t* lhs;
  int left_spid;
  int right_spid;
  syntax_asdl::line_span* left_span;
  syntax_asdl::line_span* right_span;
  Str* line;
  Str* index_str;
  int spid1;
  int spid2;
  syntax_asdl::line_span* span1;
  syntax_asdl::line_span* span2;
  Str* code_str;
  tdop::TdopParser* a_parser;
  syntax_asdl::arith_expr_t* index_node;
  syntax_asdl::sh_lhs_expr__IndexedName* tmp3;
  int n;
  syntax_asdl::word_t* val;
  syntax_asdl::word_t* tilde;
  syntax_asdl::assign_pair* pair;

  Tuple4<syntax_asdl::Token*, syntax_asdl::Token*, int, syntax_asdl::compound_word*>* tup5 = preparsed;
  left_token = tup5->at0();
  close_token = tup5->at1();
  part_offset = tup5->at2();
  w = tup5->at3();
  if (left_token->id == Id::Lit_VarLike) {
    if (str_equals(left_token->val->index(-2), str79)) {
      var_name = left_token->val->slice(0, -2);
      op = assign_op_e::PlusEqual;
    }
    else {
      var_name = left_token->val->slice(0, -1);
      op = assign_op_e::Equal;
    }
    tmp = new sh_lhs_expr::Name(var_name);
    tmp->spids->append(left_token->span_id);
    lhs = static_cast<sh_lhs_expr_t*>(tmp);
  }
  else {
    if (left_token->id == Id::Lit_ArrayLhsOpen and parse_ctx->one_pass_parse) {
      var_name = left_token->val->slice(0, -1);
      if (str_equals(close_token->val->index(-2), str80)) {
        op = assign_op_e::PlusEqual;
      }
      else {
        op = assign_op_e::Equal;
      }
      left_spid = left_token->span_id + 1;
      right_spid = close_token->span_id;
      left_span = parse_ctx->arena->GetLineSpan(left_spid);
      right_span = parse_ctx->arena->GetLineSpan(right_spid);
      line = parse_ctx->arena->GetLine(left_span->line_id);
      index_str = line->slice(left_span->col, right_span->col);
      lhs = new sh_lhs_expr::UnparsedIndex(var_name, index_str);
    }
    else {
      if (left_token->id == Id::Lit_ArrayLhsOpen) {
        var_name = left_token->val->slice(0, -1);
        if (str_equals(close_token->val->index(-2), str81)) {
          op = assign_op_e::PlusEqual;
        }
        else {
          op = assign_op_e::Equal;
        }
        spid1 = left_token->span_id;
        spid2 = close_token->span_id;
        span1 = arena->GetLineSpan(spid1);
        span2 = arena->GetLineSpan(spid2);
        if (span1->line_id == span2->line_id) {
          line = arena->GetLine(span1->line_id);
          code_str = line->slice(span1->col + span1->length, span2->col);
        }
        else {
          throw new NotImplementedError(fmt8(span1->line_id, span2->line_id));
        }
        a_parser = parse_ctx->MakeArithParser(code_str);
        arena->PushSource(new source::LValue(left_token->span_id, close_token->span_id));
        try {
          index_node = a_parser->Parse();
        }
        catch (std::exception) { }        tmp3 = new sh_lhs_expr::IndexedName(var_name, index_node);
        tmp3->spids->append(left_token->span_id);
        lhs = static_cast<sh_lhs_expr_t*>(tmp3);
      }
      else {
        throw new AssertionError();
      }
    }
  }
  n = len(w->parts);
  if (part_offset == n) {
    val = new word::Empty();
  }
  else {
    val = new compound_word(w->parts->slice(part_offset), nullptr);
    tilde = word_::TildeDetect(val);
    if (tilde) {
      val = tilde;
    }
  }
  pair = new syntax_asdl::assign_pair(lhs, op, val, new List<int>({left_token->span_id}));
  return pair;
}

void _AppendMoreEnv(List<Tuple4<syntax_asdl::Token*, syntax_asdl::Token*, int, syntax_asdl::compound_word*>*>* preparsed_list, List<syntax_asdl::env_pair*>* more_env) {
  syntax_asdl::Token* left_token;
  int part_offset;
  syntax_asdl::compound_word* w;
  Str* var_name;
  int n;
  syntax_asdl::word_t* val;
  syntax_asdl::env_pair* pair;

  for (ListIter<Tuple4<syntax_asdl::Token*, syntax_asdl::Token*, int, syntax_asdl::compound_word*>*> it(preparsed_list); !it.Done(); it.Next()) {
    Tuple4<syntax_asdl::Token*, syntax_asdl::Token*, int, syntax_asdl::compound_word*>* tup6 = it.Value();
    left_token = tup6->at0();
    part_offset = tup6->at2();
    w = tup6->at3();
    if (left_token->id != Id::Lit_VarLike) {
      p_die(fmt10(), left_token);
    }
    if (str_equals(left_token->val->index(-2), str84)) {
      p_die(fmt11(), left_token);
    }
    var_name = left_token->val->slice(0, -1);
    n = len(w->parts);
    if (part_offset == n) {
      val = new word::Empty();
    }
    else {
      val = new compound_word(w->parts->slice(part_offset), nullptr);
    }
    pair = new syntax_asdl::env_pair(var_name, val, new List<int>({left_token->span_id}));
    more_env->append(pair);
  }
}

Tuple2<List<Tuple4<syntax_asdl::Token*, syntax_asdl::Token*, int, syntax_asdl::compound_word*>*>*, List<syntax_asdl::compound_word*>*>* _SplitSimpleCommandPrefix(List<syntax_asdl::compound_word*>* words) {
  List<Tuple4<syntax_asdl::Token*, syntax_asdl::Token*, int, syntax_asdl::compound_word*>*>* preparsed_list;
  List<syntax_asdl::compound_word*>* suffix_words;
  bool done_prefix;
  syntax_asdl::Token* left_token;
  syntax_asdl::Token* close_token;
  int part_offset;

  preparsed_list = new List<Tuple4<syntax_asdl::Token*, syntax_asdl::Token*, int, syntax_asdl::compound_word*>*>();
  suffix_words = new List<syntax_asdl::compound_word*>();
  done_prefix = false;
  for (ListIter<syntax_asdl::compound_word*> it(words); !it.Done(); it.Next()) {
    syntax_asdl::compound_word* w = it.Value();
    if (done_prefix) {
      suffix_words->append(w);
      continue;
    }
    Tuple3<syntax_asdl::Token*, syntax_asdl::Token*, int>* tup7 = word_::DetectShAssignment(w);
    left_token = tup7->at0();
    close_token = tup7->at1();
    part_offset = tup7->at2();
    if (left_token) {
      preparsed_list->append((new Tuple4<syntax_asdl::Token*, syntax_asdl::Token*, int, syntax_asdl::compound_word*>(left_token, close_token, part_offset, w)));
    }
    else {
      done_prefix = true;
      suffix_words->append(w);
    }
  }
  return (new Tuple2<List<Tuple4<syntax_asdl::Token*, syntax_asdl::Token*, int, syntax_asdl::compound_word*>*>*, List<syntax_asdl::compound_word*>*>(preparsed_list, suffix_words));
}

syntax_asdl::command__Simple* _MakeSimpleCommand(List<Tuple4<syntax_asdl::Token*, syntax_asdl::Token*, int, syntax_asdl::compound_word*>*>* preparsed_list, List<syntax_asdl::compound_word*>* suffix_words, List<syntax_asdl::redir_t*>* redirects, syntax_asdl::command_t* block) {
  syntax_asdl::compound_word* w;
  List<syntax_asdl::word_t*>* words2;
  List<syntax_asdl::word_t*>* words3;
  List<syntax_asdl::env_pair*>* more_env;
  syntax_asdl::command__Simple* node;

  for (ListIter<Tuple4<syntax_asdl::Token*, syntax_asdl::Token*, int, syntax_asdl::compound_word*>*> it(preparsed_list); !it.Done(); it.Next()) {
    Tuple4<syntax_asdl::Token*, syntax_asdl::Token*, int, syntax_asdl::compound_word*>* tup8 = it.Value();
    w = tup8->at3();
    if (word_::HasArrayPart(w)) {
      p_die(fmt14(), w);
    }
  }
  words2 = braces::BraceDetectAll(suffix_words);
  words3 = word_::TildeDetectAll(words2);
  more_env = new List<syntax_asdl::env_pair*>();
  _AppendMoreEnv(preparsed_list, more_env);
  node = new command::Simple(words3, redirects, more_env, block);
  return node;
}
List<int>* SECONDARY_KEYWORDS = new List<int>({Id::KW_Done, Id::KW_Then, Id::KW_Fi, Id::KW_Elif, Id::KW_Else, Id::KW_Esac});

CommandParser::CommandParser(parse_lib::ParseContext* parse_ctx, word_parse::WordParser* w_parser, lexer::Lexer* lexer, reader::_Reader* line_reader) {
  this->parse_ctx = parse_ctx;
  this->aliases = parse_ctx->aliases;
  this->w_parser = w_parser;
  this->lexer = lexer;
  this->line_reader = line_reader;
  this->arena = parse_ctx->arena;
  this->eof_id = Id::Eof_Real;
  this->aliases_in_flight = nullptr;
  this->allow_block = true;
  this->return_expr = false;
  this->parse_opts = parse_ctx->parse_opts;
  this->Reset();
}

void CommandParser::Init_EofId(int eof_id) {
  this->eof_id = eof_id;
}

void CommandParser::Init_AliasesInFlight(List<Tuple2<Str*, int>*>* aliases_in_flight) {
  this->aliases_in_flight = aliases_in_flight;
}

void CommandParser::Reset() {
  this->next_lex_mode = lex_mode_e::ShCommand;
  this->cur_word = nullptr;
  this->c_kind = Kind::Undefined;
  this->c_id = Id::Undefined_Tok;
  this->pending_here_docs = new List<syntax_asdl::redir__HereDoc*>();
}

void CommandParser::ResetInputObjects() {
  this->w_parser->Reset();
  this->lexer->ResetInputObjects();
  this->line_reader->Reset();
}

void CommandParser::_Next() {
  _Next(lex_mode_e::ShCommand);
}

void CommandParser::_Next(types_asdl::lex_mode_t lex_mode) {
  this->next_lex_mode = lex_mode;
}

void CommandParser::_Peek() {
  syntax_asdl::word_t* w;

  if (this->next_lex_mode != lex_mode_e::Undefined) {
    w = this->w_parser->ReadWord(this->next_lex_mode);
    if (w->tag_() == word_e::Token) {
      Token* tok = static_cast<Token*>(w);
      if (tok->id == Id::Op_Newline) {
        for (ListIter<syntax_asdl::redir__HereDoc*> it(this->pending_here_docs); !it.Done(); it.Next()) {
          syntax_asdl::redir__HereDoc* h = it.Value();
          _ParseHereDocBody(this->parse_ctx, h, this->line_reader, this->arena);
        }
        this->pending_here_docs->clear();
      }
    }
    this->cur_word = w;
    this->c_kind = word_::CommandKind(this->cur_word);
    this->c_id = word_::CommandId(this->cur_word);
    this->next_lex_mode = lex_mode_e::Undefined;
  }
}

void CommandParser::_Eat(int c_id) {
  int actual_id;
  Str* msg;

  actual_id = word_::CommandId(this->cur_word);
  msg = fmt15(NewStr(Id_str(c_id)), NewStr(Id_str(actual_id)));
  this->_Eat2(c_id, msg);
}

void CommandParser::_Eat2(int c_id, Str* msg) {
  this->_Peek();
  if (this->c_id != c_id) {
    p_die(dynamic_fmt_dummy(), this->cur_word);
  }
  this->_Next();
}

void CommandParser::_NewlineOk() {
  this->_Peek();
  if (this->c_id == Id::Op_Newline) {
    this->_Next();
    this->_Peek();
  }
}

bool CommandParser::_AtSecondaryKeyword() {
  if (list_contains(SECONDARY_KEYWORDS, this->c_id)) {
    return true;
  }
  if (this->c_id == Id::KW_Do and !this->parse_opts->parse_do) {
    return true;
  }
  return false;
}

syntax_asdl::redir_t* CommandParser::ParseRedirect() {
  Str* first_char;
  int fd;
  syntax_asdl::redir__HereDoc* h;
  syntax_asdl::word_t* arg_word;
  syntax_asdl::word_t* tilde;

  this->_Peek();
  Token* op_tok = static_cast<Token*>(this->cur_word);
  first_char = op_tok->val->index(0);
  if (first_char->isdigit()) {
    fd = str_to_int(first_char);
  }
  else {
    fd = runtime::NO_SPID;
  }
  this->_Next();
  this->_Peek();
  if ((op_tok->id == Id::Redir_DLess || op_tok->id == Id::Redir_DLessDash)) {
    h = new redir::HereDoc();
    h->op = op_tok;
    h->fd = fd;
    h->here_begin = this->cur_word;
    this->pending_here_docs->append(h);
    this->_Next();
    return h;
  }
  if (this->c_kind != Kind::Word) {
    p_die(fmt16(), this->cur_word);
  }
  arg_word = this->cur_word;
  tilde = word_::TildeDetect(arg_word);
  if (tilde) {
    arg_word = tilde;
  }
  this->_Next();
  return new redir::Redir(op_tok, fd, arg_word);
}

List<syntax_asdl::redir_t*>* CommandParser::_ParseRedirectList() {
  List<syntax_asdl::redir_t*>* redirects;
  syntax_asdl::redir_t* node;

  redirects = new List<syntax_asdl::redir_t*>();
  while (true) {
    this->_Peek();
    if (this->c_kind != Kind::Redir) {
      break;
    }
    node = this->ParseRedirect();
    redirects->append(node);
    this->_Next();
  }
  return redirects;
}

Tuple3<List<syntax_asdl::redir_t*>*, List<syntax_asdl::compound_word*>*, syntax_asdl::command__BraceGroup*>* CommandParser::_ScanSimpleCommand() {
  List<syntax_asdl::redir_t*>* redirects;
  List<syntax_asdl::compound_word*>* words;
  syntax_asdl::command__BraceGroup* block;
  syntax_asdl::redir_t* node;

  redirects = new List<syntax_asdl::redir_t*>();
  words = new List<syntax_asdl::compound_word*>();
  block = nullptr;
  while (true) {
    this->_Peek();
    if (this->c_kind == Kind::Redir) {
      node = this->ParseRedirect();
      redirects->append(node);
    }
    else {
      if (this->c_kind == Kind::Word) {
        if (this->parse_opts->parse_brace) {
          if (this->c_id == Id::Lit_LBrace) {
            if (this->allow_block) {
              block = this->ParseBraceGroup();
            }
            break;
          }
          else {
            if (this->c_id == Id::Lit_RBrace) {
              break;
            }
          }
        }
        compound_word* w = static_cast<compound_word*>(this->cur_word);
        words->append(w);
      }
      else {
        break;
      }
    }
    this->_Next();
  }
  return (new Tuple3<List<syntax_asdl::redir_t*>*, List<syntax_asdl::compound_word*>*, syntax_asdl::command__BraceGroup*>(redirects, words, block));
}

syntax_asdl::command_t* CommandParser::_MaybeExpandAliases(List<syntax_asdl::compound_word*>* words) {
  List<Tuple2<Str*, int>*>* aliases_in_flight;
  Str* first_word_str;
  int argv0_spid;
  List<Str*>* expanded;
  int i;
  int n;
  syntax_asdl::compound_word* w;
  bool ok;
  Str* word_str;
  bool quoted;
  Str* alias_exp;
  int spid1;
  int spid2;
  syntax_asdl::line_span* span1;
  syntax_asdl::line_span* span2;
  Str* line;
  Str* piece;
  Str* code_str;
  reader::FileLineReader* line_reader;
  cmd_parse::CommandParser* cp;
  parse_lib::_BaseTrail* trail;
  syntax_asdl::command__CommandList* node;

  aliases_in_flight = this->aliases_in_flight ? this->aliases_in_flight : new List<Tuple2<Str*, int>*>();
  first_word_str = nullptr;
  argv0_spid = word_::LeftMostSpanForWord(words->index(0));
  expanded = new List<Str*>();
  i = 0;
  n = len(words);
  while (i < n) {
    w = words->index(i);
    Tuple3<bool, Str*, bool>* tup9 = word_::StaticEval(w);
    ok = tup9->at0();
    word_str = tup9->at1();
    quoted = tup9->at2();
    if (!ok or quoted) {
      break;
    }
    alias_exp = this->aliases->get(word_str);
    if (alias_exp == nullptr) {
      break;
    }
    if (list_contains(aliases_in_flight, (new Tuple2<Str*, int>(word_str, i)))) {
      break;
    }
    if (i == 0) {
      first_word_str = word_str;
    }
    aliases_in_flight->append((new Tuple2<Str*, int>(word_str, i)));
    expanded->append(alias_exp);
    i += 1;
    if (!alias_exp->endswith(str89)) {
      expanded->append(str90);
      break;
    }
  }
  if (len(expanded) == 0) {
    return nullptr;
  }
  while (i < n) {
    w = words->index(i);
    spid1 = word_::LeftMostSpanForWord(w);
    spid2 = word_::RightMostSpanForWord(w);
    span1 = this->arena->GetLineSpan(spid1);
    span2 = this->arena->GetLineSpan(spid2);
    if (span1->line_id == span2->line_id) {
      line = this->arena->GetLine(span1->line_id);
      piece = line->slice(span1->col, span2->col + span2->length);
      expanded->append(piece);
    }
    else {
      throw new NotImplementedError(fmt18(span1->line_id, span2->line_id));
    }
    expanded->append(str92);
    i += 1;
  }
  code_str = str93->join(expanded);
  line_reader = reader::StringLineReader(code_str, this->arena);
  cp = this->parse_ctx->MakeOshParser(line_reader);
  cp->Init_AliasesInFlight(aliases_in_flight);
  this->arena->PushSource(new source::Alias(first_word_str, argv0_spid));
  trail = this->parse_ctx->trail;
  trail->BeginAliasExpansion();
  try {
    try {
      node = cp->_ParseCommandTerm();
    }
    catch (error::Parse* e) {
      throw ;
    }
  }
  catch (std::exception) { }  return node;
}

syntax_asdl::command_t* CommandParser::ParseSimpleCommand() {
  List<syntax_asdl::redir_t*>* redirects;
  List<syntax_asdl::compound_word*>* words;
  syntax_asdl::command__BraceGroup* block;
  int block_spid;
  syntax_asdl::command__Simple* simple;
  syntax_asdl::word_part_t* part0;
  syntax_asdl::Token* tok;
  List<Tuple4<syntax_asdl::Token*, syntax_asdl::Token*, int, syntax_asdl::compound_word*>*>* preparsed_list;
  List<syntax_asdl::compound_word*>* suffix_words;
  syntax_asdl::Token* left_token;
  List<syntax_asdl::assign_pair*>* pairs;
  syntax_asdl::command__ShAssignment* assign;
  int left_spid;
  id_kind_asdl::Kind_t kind;
  syntax_asdl::Token* kw_token;
  syntax_asdl::word_t* arg_word;
  syntax_asdl::command_t* expanded_node;
  List<syntax_asdl::env_pair*>* more_env;
  syntax_asdl::command__ExpandedAlias* exp;
  syntax_asdl::command__Simple* node;

  Tuple3<List<syntax_asdl::redir_t*>*, List<syntax_asdl::compound_word*>*, syntax_asdl::command__BraceGroup*>* tup10 = this->_ScanSimpleCommand();
  redirects = tup10->at0();
  words = tup10->at1();
  block = tup10->at2();
  block_spid = block ? block->spids->index(0) : runtime::NO_SPID;
  if (len(words) == 0) {
    if (block) {
      p_die(fmt20(), block_spid);
    }
    simple = new command::Simple();
    simple->redirects = redirects;
    return simple;
  }
  part0 = words->index(0)->parts->index(0);
  if (part0->tag_() == word_part_e::Literal) {
    tok = static_cast<word_part__Literal*>(part0)->token;
    if (tok->id == Id::Lit_Equals) {
      p_die(fmt21(), tok);
    }
  }
  Tuple2<List<Tuple4<syntax_asdl::Token*, syntax_asdl::Token*, int, syntax_asdl::compound_word*>*>*, List<syntax_asdl::compound_word*>*>* tup11 = _SplitSimpleCommandPrefix(words);
  preparsed_list = tup11->at0();
  suffix_words = tup11->at1();
  if (this->parse_opts->parse_equals and len(preparsed_list)) {
    Tuple4<syntax_asdl::Token*, syntax_asdl::Token*, int, syntax_asdl::compound_word*>* tup12 = preparsed_list->index(0);
    left_token = tup12->at0();
    p_die(fmt24(), left_token);
  }
  this->parse_ctx->trail->SetLatestWords(suffix_words, redirects);
  if (len(suffix_words) == 0) {
    if (block) {
      p_die(fmt25(), block_spid);
    }
    pairs = new List<syntax_asdl::assign_pair*>();
    for (ListIter<Tuple4<syntax_asdl::Token*, syntax_asdl::Token*, int, syntax_asdl::compound_word*>*> it(preparsed_list); !it.Done(); it.Next()) {
      Tuple4<syntax_asdl::Token*, syntax_asdl::Token*, int, syntax_asdl::compound_word*>* preparsed = it.Value();
      pairs->append(_MakeAssignPair(this->parse_ctx, preparsed, this->arena));
    }
    assign = new command::ShAssignment(pairs, redirects);
    left_spid = word_::LeftMostSpanForWord(words->index(0));
    assign->spids->append(left_spid);
    return assign;
  }
  Tuple2<id_kind_asdl::Kind_t, syntax_asdl::Token*>* tup13 = word_::KeywordToken(suffix_words->index(0));
  kind = tup13->at0();
  kw_token = tup13->at1();
  if (kind == Kind::ControlFlow) {
    if (block) {
      p_die(fmt27(), block_spid);
    }
    if (len(redirects)) {
      p_die(fmt28(), kw_token);
    }
    if (len(preparsed_list)) {
      Tuple4<syntax_asdl::Token*, syntax_asdl::Token*, int, syntax_asdl::compound_word*>* tup14 = preparsed_list->index(0);
      left_token = tup14->at0();
      p_die(fmt30(), left_token);
    }
    if (len(suffix_words) == 1) {
      arg_word = nullptr;
    }
    else {
      if (len(suffix_words) == 2) {
        arg_word = suffix_words->index(1);
      }
      else {
        p_die(fmt31(kw_token->val), suffix_words->index(2));
      }
    }
    return new command::ControlFlow(kw_token, arg_word);
  }
  if (!block) {
    expanded_node = this->_MaybeExpandAliases(suffix_words);
    if (expanded_node) {
      more_env = new List<syntax_asdl::env_pair*>();
      _AppendMoreEnv(preparsed_list, more_env);
      exp = new command::ExpandedAlias(expanded_node, redirects, more_env);
      return exp;
    }
  }
  node = _MakeSimpleCommand(preparsed_list, suffix_words, redirects, block);
  return node;
}

syntax_asdl::command__BraceGroup* CommandParser::ParseBraceGroup() {
  int left_spid;
  syntax_asdl::command__CommandList* c_list;
  syntax_asdl::command__BraceGroup* node;

  left_spid = _KeywordSpid(this->cur_word);
  this->_Eat(Id::Lit_LBrace);
  c_list = this->_ParseCommandList();
  this->_Eat(Id::Lit_RBrace);
  node = new command::BraceGroup(c_list->children, nullptr);
  node->spids->append(left_spid);
  return node;
}

syntax_asdl::command__DoGroup* CommandParser::ParseDoGroup() {
  int do_spid;
  syntax_asdl::command__CommandList* c_list;
  int done_spid;
  syntax_asdl::command__DoGroup* node;

  this->_Eat(Id::KW_Do);
  do_spid = _KeywordSpid(this->cur_word);
  c_list = this->_ParseCommandList();
  this->_Eat(Id::KW_Done);
  done_spid = _KeywordSpid(this->cur_word);
  node = new command::DoGroup(c_list->children, nullptr);
  node->spids->append(do_spid);
  node->spids->append(done_spid);
  return node;
}

Tuple2<List<syntax_asdl::compound_word*>*, int>* CommandParser::ParseForWords() {
  List<syntax_asdl::compound_word*>* words;
  int semi_spid;

  words = new List<syntax_asdl::compound_word*>();
  semi_spid = runtime::NO_SPID;
  while (true) {
    this->_Peek();
    if (this->c_id == Id::Op_Semi) {
      Token* tok = static_cast<Token*>(this->cur_word);
      semi_spid = tok->span_id;
      this->_Next();
      this->_NewlineOk();
      break;
    }
    else {
      if (this->c_id == Id::Op_Newline) {
        this->_Next();
        break;
      }
      else {
        if (this->parse_opts->parse_brace and this->c_id == Id::Lit_LBrace) {
          break;
        }
      }
    }
    if (this->cur_word->tag_() != word_e::Compound) {
      p_die(fmt32(), this->cur_word);
    }
    compound_word* w2 = static_cast<compound_word*>(this->cur_word);
    words->append(w2);
    this->_Next();
  }
  return (new Tuple2<List<syntax_asdl::compound_word*>*, int>(words, semi_spid));
}

syntax_asdl::command__ForExpr* CommandParser::_ParseForExprLoop() {
  syntax_asdl::command__ForExpr* node;

  node = this->w_parser->ReadForExpression();
  this->_Next();
  this->_Peek();
  if (this->c_id == Id::Op_Semi) {
    this->_Next();
    this->_NewlineOk();
  }
  else {
    if (this->c_id == Id::Op_Newline) {
      this->_Next();
    }
    else {
      if (this->c_id == Id::KW_Do) {
        ;  // pass
      }
      else {
        if (this->c_id == Id::Lit_LBrace) {
          ;  // pass
        }
        else {
          p_die(fmt33(), this->cur_word);
        }
      }
    }
  }
  if (this->c_id == Id::Lit_LBrace) {
    node->body = this->ParseBraceGroup();
  }
  else {
    node->body = this->ParseDoGroup();
  }
  return node;
}

syntax_asdl::command__ForEach* CommandParser::_ParseForEachLoop(int for_spid) {
  syntax_asdl::command__ForEach* node;
  bool ok;
  Str* iter_name;
  bool quoted;
  int in_spid;
  int semi_spid;
  List<syntax_asdl::compound_word*>* iter_words;
  List<syntax_asdl::word_t*>* words2;
  List<syntax_asdl::word_t*>* words3;

  node = new command::ForEach();
  node->do_arg_iter = false;
  node->spids->append(for_spid);
  Tuple3<bool, Str*, bool>* tup15 = word_::StaticEval(this->cur_word);
  ok = tup15->at0();
  iter_name = tup15->at1();
  quoted = tup15->at2();
  if (!ok or quoted) {
    p_die(fmt35(), this->cur_word);
  }
  if (!match::IsValidVarName(iter_name)) {
    p_die(fmt36(), this->cur_word);
  }
  node->iter_name = iter_name;
  this->_Next();
  this->_NewlineOk();
  in_spid = runtime::NO_SPID;
  semi_spid = runtime::NO_SPID;
  this->_Peek();
  if (this->c_id == Id::KW_In) {
    this->_Next();
    in_spid = word_::LeftMostSpanForWord(this->cur_word) + 1;
    Tuple2<List<syntax_asdl::compound_word*>*, int>* tup16 = this->ParseForWords();
    iter_words = tup16->at0();
    semi_spid = tup16->at1();
    words2 = braces::BraceDetectAll(iter_words);
    words3 = word_::TildeDetectAll(words2);
    node->iter_words = words3;
  }
  else {
    if (this->c_id == Id::Op_Semi) {
      node->do_arg_iter = true;
      this->_Next();
    }
    else {
      if (this->c_id == Id::KW_Do) {
        node->do_arg_iter = true;
      }
      else {
        p_die(fmt38(), this->cur_word);
      }
    }
  }
  this->_Peek();
  if (this->c_id == Id::Lit_LBrace) {
    node->body = this->ParseBraceGroup();
  }
  else {
    node->body = this->ParseDoGroup();
  }
  node->spids->append(in_spid);
  node->spids->append(semi_spid);
  return node;
}

syntax_asdl::command_t* CommandParser::ParseFor() {
  int for_spid;
  List<syntax_asdl::name_type*>* lvalue;
  syntax_asdl::expr_t* iterable;
  syntax_asdl::command_t* body;
  syntax_asdl::command__ForExpr* n1;
  syntax_asdl::command__ForEach* n2;

  for_spid = _KeywordSpid(this->cur_word);
  this->_Eat(Id::KW_For);
  if (this->w_parser->LookAhead() == Id::Op_LParen) {
    Tuple3<List<syntax_asdl::name_type*>*, syntax_asdl::expr_t*, syntax_asdl::Token*>* tup17 = this->parse_ctx->ParseOilForExpr(this->lexer, grammar_nt::oil_for);
    lvalue = tup17->at0();
    iterable = tup17->at1();
    this->_Peek();
    if (this->c_id == Id::Lit_LBrace) {
      body = this->ParseBraceGroup();
    }
    else {
      body = this->ParseDoGroup();
    }
    return new command::OilForIn(lvalue, iterable, body);
  }
  else {
    this->_Peek();
    if (this->c_id == Id::Op_DLeftParen) {
      n1 = this->_ParseForExprLoop();
      n1->redirects = this->_ParseRedirectList();
      return n1;
    }
    else {
      n2 = this->_ParseForEachLoop(for_spid);
      n2->redirects = this->_ParseRedirectList();
      return n2;
    }
  }
}

syntax_asdl::command__WhileUntil* CommandParser::ParseWhileUntil(syntax_asdl::Token* keyword) {
  syntax_asdl::expr_t* enode;
  List<syntax_asdl::command_t*>* cond_list;
  syntax_asdl::command__CommandList* cond;
  syntax_asdl::command_t* body_node;
  syntax_asdl::command__WhileUntil* node;

  this->_Next();
  if (this->parse_opts->parse_paren and this->w_parser->LookAhead() == Id::Op_LParen) {
    Tuple2<syntax_asdl::expr_t*, syntax_asdl::Token*>* tup18 = this->parse_ctx->ParseOilExpr(this->lexer, grammar_nt::oil_expr);
    enode = tup18->at0();
    cond_list = new List<syntax_asdl::command_t*>({new command::OilCondition(enode)});
  }
  else {
    this->allow_block = false;
    cond = this->_ParseCommandList();
    this->allow_block = true;
    cond_list = cond->children;
  }
  this->_Peek();
  if (this->parse_opts->parse_brace and this->c_id == Id::Lit_LBrace) {
    body_node = this->ParseBraceGroup();
  }
  else {
    body_node = this->ParseDoGroup();
  }
  node = new command::WhileUntil(keyword, cond_list, body_node, nullptr);
  node->spids->append(keyword->span_id);
  return node;
}

syntax_asdl::case_arm* CommandParser::ParseCaseItem() {
  int left_spid;
  List<syntax_asdl::word_t*>* pat_words;
  int rparen_spid;
  syntax_asdl::command__CommandList* c_list;
  List<syntax_asdl::command_t*>* action_children;
  int dsemi_spid;
  int last_spid;
  List<int>* spids;
  syntax_asdl::case_arm* arm;

  this->lexer->PushHint(Id::Op_RParen, Id::Right_CasePat);
  left_spid = word_::LeftMostSpanForWord(this->cur_word);
  if (this->c_id == Id::Op_LParen) {
    this->_Next();
  }
  pat_words = new List<syntax_asdl::word_t*>();
  while (true) {
    this->_Peek();
    pat_words->append(this->cur_word);
    this->_Next();
    this->_Peek();
    if (this->c_id == Id::Op_Pipe) {
      this->_Next();
    }
    else {
      break;
    }
  }
  rparen_spid = word_::LeftMostSpanForWord(this->cur_word);
  this->_Eat(Id::Right_CasePat);
  this->_NewlineOk();
  if ((this->c_id != Id::Op_DSemi && this->c_id != Id::KW_Esac)) {
    c_list = this->_ParseCommandTerm();
    action_children = c_list->children;
  }
  else {
    action_children = new List<syntax_asdl::command_t*>();
  }
  dsemi_spid = runtime::NO_SPID;
  last_spid = runtime::NO_SPID;
  this->_Peek();
  if (this->c_id == Id::KW_Esac) {
    last_spid = word_::LeftMostSpanForWord(this->cur_word);
  }
  else {
    if (this->c_id == Id::Op_DSemi) {
      dsemi_spid = word_::LeftMostSpanForWord(this->cur_word);
      this->_Next();
    }
    else {
      p_die(fmt41(), this->cur_word);
    }
  }
  this->_NewlineOk();
  spids = new List<int>({left_spid, rparen_spid, dsemi_spid, last_spid});
  arm = new syntax_asdl::case_arm(pat_words, action_children, spids);
  return arm;
}

void CommandParser::ParseCaseList(List<syntax_asdl::case_arm*>* arms) {
  syntax_asdl::case_arm* arm;

  this->_Peek();
  while (true) {
    if (this->c_id == Id::KW_Esac) {
      break;
    }
    if (this->parse_opts->parse_brace and this->c_id == Id::Lit_RBrace) {
      break;
    }
    if (this->c_kind != Kind::Word and this->c_id != Id::Op_LParen) {
      break;
    }
    arm = this->ParseCaseItem();
    arms->append(arm);
    this->_Peek();
  }
}

syntax_asdl::command__Case* CommandParser::ParseCase() {
  syntax_asdl::command__Case* case_node;
  int case_spid;
  int in_spid;
  int esac_spid;

  case_node = new command::Case();
  case_spid = _KeywordSpid(this->cur_word);
  this->_Next();
  this->_Peek();
  case_node->to_match = this->cur_word;
  this->_Next();
  this->_NewlineOk();
  in_spid = word_::LeftMostSpanForWord(this->cur_word);
  this->_Peek();
  if (this->parse_opts->parse_brace and this->c_id == Id::Lit_LBrace) {
    this->_Next();
  }
  else {
    this->_Eat(Id::KW_In);
  }
  this->_NewlineOk();
  if (this->c_id != Id::KW_Esac) {
    this->ParseCaseList(case_node->arms);
    this->_Peek();
  }
  esac_spid = word_::LeftMostSpanForWord(this->cur_word);
  this->_Peek();
  if (this->parse_opts->parse_brace and this->c_id == Id::Lit_RBrace) {
    this->_Next();
  }
  else {
    this->_Eat(Id::KW_Esac);
  }
  this->_Next();
  case_node->spids->append(case_spid);
  case_node->spids->append(in_spid);
  case_node->spids->append(esac_spid);
  return case_node;
}

void CommandParser::_ParseOilElifElse(syntax_asdl::command__If* if_node) {
  List<syntax_asdl::if_arm*>* arms;
  int elif_spid;
  syntax_asdl::expr_t* enode;
  List<syntax_asdl::command_t*>* cond_list;
  syntax_asdl::command__CommandList* cond;
  syntax_asdl::command__BraceGroup* body;
  syntax_asdl::if_arm* arm;
  int else_spid;

  arms = if_node->arms;
  while (this->c_id == Id::KW_Elif) {
    elif_spid = word_::LeftMostSpanForWord(this->cur_word);
    this->_Next();
    if (this->parse_opts->parse_paren and this->w_parser->LookAhead() == Id::Op_LParen) {
      Tuple2<syntax_asdl::expr_t*, syntax_asdl::Token*>* tup19 = this->parse_ctx->ParseOilExpr(this->lexer, grammar_nt::oil_expr);
      enode = tup19->at0();
      cond_list = new List<syntax_asdl::command_t*>({new command::OilCondition(enode)});
    }
    else {
      this->allow_block = false;
      cond = this->_ParseCommandList();
      this->allow_block = true;
      cond_list = cond->children;
    }
    body = this->ParseBraceGroup();
    arm = new syntax_asdl::if_arm(cond_list, body->children, new List<int>({elif_spid}));
    arms->append(arm);
  }
  this->_Peek();
  if (this->c_id == Id::KW_Else) {
    else_spid = word_::LeftMostSpanForWord(this->cur_word);
    this->_Next();
    body = this->ParseBraceGroup();
    if_node->else_action = body->children;
  }
  else {
    else_spid = runtime::NO_SPID;
  }
  if_node->spids->append(else_spid);
}

syntax_asdl::command__If* CommandParser::_ParseOilIf(int if_spid, List<syntax_asdl::command_t*>* cond_list) {
  syntax_asdl::command__If* if_node;
  syntax_asdl::command__BraceGroup* body1;
  syntax_asdl::if_arm* arm;

  if_node = new command::If();
  body1 = this->ParseBraceGroup();
  arm = new syntax_asdl::if_arm(cond_list, body1->children, new List<int>({if_spid}));
  if_node->arms->append(arm);
  this->_Peek();
  if ((this->c_id == Id::KW_Elif || this->c_id == Id::KW_Else)) {
    this->_ParseOilElifElse(if_node);
  }
  else {
    if_node->spids->append(runtime::NO_SPID);
  }
  return if_node;
}

void CommandParser::_ParseElifElse(syntax_asdl::command__If* if_node) {
  List<syntax_asdl::if_arm*>* arms;
  int elif_spid;
  syntax_asdl::command__CommandList* cond;
  int then_spid;
  syntax_asdl::command__CommandList* body;
  syntax_asdl::if_arm* arm;
  int else_spid;

  arms = if_node->arms;
  this->_Peek();
  while (this->c_id == Id::KW_Elif) {
    elif_spid = word_::LeftMostSpanForWord(this->cur_word);
    this->_Next();
    cond = this->_ParseCommandList();
    then_spid = word_::LeftMostSpanForWord(this->cur_word);
    this->_Eat(Id::KW_Then);
    body = this->_ParseCommandList();
    arm = new syntax_asdl::if_arm(cond->children, body->children, new List<int>({elif_spid, then_spid}));
    arms->append(arm);
  }
  if (this->c_id == Id::KW_Else) {
    else_spid = word_::LeftMostSpanForWord(this->cur_word);
    this->_Next();
    body = this->_ParseCommandList();
    if_node->else_action = body->children;
  }
  else {
    else_spid = runtime::NO_SPID;
  }
  if_node->spids->append(else_spid);
}

syntax_asdl::command__If* CommandParser::ParseIf() {
  int if_spid;
  syntax_asdl::command__If* if_node;
  syntax_asdl::expr_t* enode;
  List<syntax_asdl::command_t*>* cond_list;
  syntax_asdl::command__CommandList* cond;
  int then_spid;
  syntax_asdl::command__CommandList* body;
  syntax_asdl::if_arm* arm;
  int fi_spid;

  if_spid = _KeywordSpid(this->cur_word);
  if_node = new command::If();
  this->_Next();
  if (this->parse_opts->parse_paren and this->w_parser->LookAhead() == Id::Op_LParen) {
    Tuple2<syntax_asdl::expr_t*, syntax_asdl::Token*>* tup20 = this->parse_ctx->ParseOilExpr(this->lexer, grammar_nt::oil_expr);
    enode = tup20->at0();
    cond_list = new List<syntax_asdl::command_t*>({new command::OilCondition(enode)});
  }
  else {
    this->allow_block = false;
    cond = this->_ParseCommandList();
    this->allow_block = true;
    cond_list = cond->children;
  }
  this->_Peek();
  if (this->parse_opts->parse_brace and this->c_id == Id::Lit_LBrace) {
    return this->_ParseOilIf(if_spid, cond_list);
  }
  then_spid = word_::LeftMostSpanForWord(this->cur_word);
  this->_Eat(Id::KW_Then);
  body = this->_ParseCommandList();
  arm = new syntax_asdl::if_arm(cond_list, body->children, new List<int>({if_spid, then_spid}));
  if_node->arms->append(arm);
  if ((this->c_id == Id::KW_Elif || this->c_id == Id::KW_Else)) {
    this->_ParseElifElse(if_node);
  }
  else {
    if_node->spids->append(runtime::NO_SPID);
  }
  fi_spid = word_::LeftMostSpanForWord(this->cur_word);
  this->_Eat(Id::KW_Fi);
  if_node->spids->append(fi_spid);
  return if_node;
}

syntax_asdl::command_t* CommandParser::ParseTime() {
  int time_spid;
  syntax_asdl::command_t* pipeline;
  syntax_asdl::command__TimeBlock* node;

  time_spid = _KeywordSpid(this->cur_word);
  this->_Next();
  pipeline = this->ParsePipeline();
  node = new command::TimeBlock(pipeline);
  node->spids->append(time_spid);
  return node;
}

syntax_asdl::command_t* CommandParser::ParseCompoundCommand() {
  syntax_asdl::command__BraceGroup* n1;
  syntax_asdl::command__Subshell* n2;
  syntax_asdl::Token* keyword;
  syntax_asdl::command__WhileUntil* n3;
  syntax_asdl::command__If* n4;
  syntax_asdl::command__Case* n5;
  syntax_asdl::command__DBracket* n6;
  syntax_asdl::command__DParen* n7;
  syntax_asdl::Token* kw_token;

  if (this->c_id == Id::Lit_LBrace) {
    n1 = this->ParseBraceGroup();
    n1->redirects = this->_ParseRedirectList();
    return n1;
  }
  if (this->c_id == Id::Op_LParen) {
    n2 = this->ParseSubshell();
    n2->redirects = this->_ParseRedirectList();
    return n2;
  }
  if (this->c_id == Id::KW_For) {
    return this->ParseFor();
  }
  if ((this->c_id == Id::KW_While || this->c_id == Id::KW_Until)) {
    keyword = _KeywordToken(this->cur_word);
    n3 = this->ParseWhileUntil(keyword);
    n3->redirects = this->_ParseRedirectList();
    return n3;
  }
  if (this->c_id == Id::KW_If) {
    n4 = this->ParseIf();
    n4->redirects = this->_ParseRedirectList();
    return n4;
  }
  if (this->c_id == Id::KW_Case) {
    n5 = this->ParseCase();
    n5->redirects = this->_ParseRedirectList();
    return n5;
  }
  if (this->c_id == Id::KW_DLeftBracket) {
    n6 = this->ParseDBracket();
    n6->redirects = this->_ParseRedirectList();
    return n6;
  }
  if (this->c_id == Id::Op_DLeftParen) {
    n7 = this->ParseDParen();
    n7->redirects = this->_ParseRedirectList();
    return n7;
  }
  if (this->c_id == Id::KW_Time) {
    return this->ParseTime();
  }
  if (this->c_id == Id::KW_Var) {
    kw_token = word_::LiteralToken(this->cur_word);
    this->_Next();
    return this->w_parser->ParseVarDecl(kw_token);
  }
  if (this->c_id == Id::KW_SetVar) {
    kw_token = word_::LiteralToken(this->cur_word);
    this->_Next();
    return this->w_parser->ParsePlaceMutation(kw_token);
  }
  if (this->parse_opts->parse_set and this->c_id == Id::KW_Set) {
    kw_token = word_::LiteralToken(this->cur_word);
    this->_Next();
    return this->w_parser->ParsePlaceMutation(kw_token);
  }
  p_die(fmt44(), this->cur_word);
}

syntax_asdl::command__ShFunction* CommandParser::ParseFunctionDef() {
  int left_spid;
  Str* name;
  int after_name_spid;
  syntax_asdl::command__ShFunction* func;

  left_spid = word_::LeftMostSpanForWord(this->cur_word);
  compound_word* cur_word = static_cast<compound_word*>(this->cur_word);
  name = word_::ShFunctionName(cur_word);
  if (len(name) == 0) {
    p_die(fmt45(), cur_word);
  }
  this->_Next();
  this->_Peek();
  this->lexer->PushHint(Id::Op_RParen, Id::Right_ShFunction);
  this->_Next();
  this->_Eat2(Id::Right_ShFunction, str110);
  after_name_spid = word_::LeftMostSpanForWord(this->cur_word) + 1;
  this->_NewlineOk();
  func = new command::ShFunction();
  func->name = name;
  func->body = this->ParseCompoundCommand();
  func->spids->append(left_spid);
  func->spids->append(after_name_spid);
  return func;
}

syntax_asdl::command__ShFunction* CommandParser::ParseKshFunctionDef() {
  int left_spid;
  Str* name;
  int after_name_spid;
  syntax_asdl::command__ShFunction* func;

  left_spid = word_::LeftMostSpanForWord(this->cur_word);
  this->_Next();
  this->_Peek();
  compound_word* cur_word = static_cast<compound_word*>(this->cur_word);
  name = word_::ShFunctionName(cur_word);
  if (len(name) == 0) {
    p_die(fmt46(), cur_word);
  }
  after_name_spid = word_::LeftMostSpanForWord(this->cur_word) + 1;
  this->_Next();
  this->_Peek();
  if (this->c_id == Id::Op_LParen) {
    this->lexer->PushHint(Id::Op_RParen, Id::Right_ShFunction);
    this->_Next();
    this->_Eat(Id::Right_ShFunction);
    after_name_spid = word_::LeftMostSpanForWord(this->cur_word) + 1;
  }
  this->_NewlineOk();
  func = new command::ShFunction();
  func->name = name;
  func->body = this->ParseCompoundCommand();
  func->spids->append(left_spid);
  func->spids->append(after_name_spid);
  return func;
}

syntax_asdl::command__Proc* CommandParser::ParseOilProc() {
  syntax_asdl::command__Proc* node;

  node = new command::Proc();
  this->w_parser->ParseProc(node);
  this->_Next();
  this->return_expr = true;
  node->body = this->ParseBraceGroup();
  this->return_expr = false;
  return node;
}

syntax_asdl::command__Func* CommandParser::ParseOilFunc() {
  syntax_asdl::command__Func* node;

  node = new command::Func();
  this->w_parser->ParseFunc(node);
  this->_Next();
  this->return_expr = true;
  node->body = this->ParseBraceGroup();
  this->return_expr = false;
  return node;
}

syntax_asdl::command_t* CommandParser::ParseCoproc() {
  throw new NotImplementedError();
}

syntax_asdl::command__Subshell* CommandParser::ParseSubshell() {
  int left_spid;
  syntax_asdl::command__CommandList* c_list;
  syntax_asdl::command__Subshell* node;
  int right_spid;

  left_spid = word_::LeftMostSpanForWord(this->cur_word);
  this->_Next();
  this->lexer->PushHint(Id::Op_RParen, Id::Right_Subshell);
  c_list = this->_ParseCommandList();
  node = new command::Subshell(c_list, nullptr);
  right_spid = word_::LeftMostSpanForWord(this->cur_word);
  this->_Eat(Id::Right_Subshell);
  node->spids->append(left_spid);
  node->spids->append(right_spid);
  return node;
}

syntax_asdl::command__DBracket* CommandParser::ParseDBracket() {
  int left_spid;
  bool_parse::BoolParser* b_parser;
  syntax_asdl::bool_expr_t* bnode;
  int right_spid;
  syntax_asdl::command__DBracket* node;

  left_spid = word_::LeftMostSpanForWord(this->cur_word);
  this->_Next();
  b_parser = new bool_parse::BoolParser(this->w_parser);
  bnode = b_parser->Parse();
  right_spid = word_::LeftMostSpanForWord(this->cur_word);
  node = new command::DBracket(bnode, nullptr);
  node->spids->append(left_spid);
  node->spids->append(right_spid);
  return node;
}

syntax_asdl::command__DParen* CommandParser::ParseDParen() {
  int left_spid;
  syntax_asdl::arith_expr_t* anode;
  int right_spid;
  syntax_asdl::command__DParen* node;

  left_spid = word_::LeftMostSpanForWord(this->cur_word);
  this->_Next();
  Tuple2<syntax_asdl::arith_expr_t*, int>* tup21 = this->w_parser->ReadDParen();
  anode = tup21->at0();
  right_spid = tup21->at1();
  node = new command::DParen(anode, nullptr);
  node->spids->append(left_spid);
  node->spids->append(right_spid);
  return node;
}

syntax_asdl::command_t* CommandParser::ParseCommand() {
  syntax_asdl::Token* keyword;
  syntax_asdl::expr_t* enode;
  List<syntax_asdl::word_part_t*>* parts;
  syntax_asdl::word_part_t* UP_part0;
  syntax_asdl::Token* tok;

  this->_Peek();
  if (this->_AtSecondaryKeyword()) {
    p_die(fmt48(), this->cur_word);
  }
  if (this->c_id == Id::KW_Function) {
    return this->ParseKshFunctionDef();
  }
  if (this->c_id == Id::KW_Func) {
    return this->ParseOilFunc();
  }
  if (this->c_id == Id::KW_Proc) {
    return this->ParseOilProc();
  }
  if ((this->c_id == Id::KW_DLeftBracket || this->c_id == Id::Op_DLeftParen || this->c_id == Id::Op_LParen || this->c_id == Id::Lit_LBrace || this->c_id == Id::KW_For || this->c_id == Id::KW_While || this->c_id == Id::KW_Until || this->c_id == Id::KW_If || this->c_id == Id::KW_Case || this->c_id == Id::KW_Time || this->c_id == Id::KW_Var || this->c_id == Id::KW_SetVar)) {
    return this->ParseCompoundCommand();
  }
  if (this->parse_opts->parse_set and this->c_id == Id::KW_Set) {
    return this->ParseCompoundCommand();
  }
  if (this->return_expr and this->c_id == Id::ControlFlow_Return) {
    keyword = _KeywordToken(this->cur_word);
    this->_Next();
    enode = this->w_parser->ParseCommandExpr();
    return new command::Return(keyword, enode);
  }
  if ((this->c_id == Id::KW_Pass || this->c_id == Id::KW_Do || this->c_id == Id::Lit_Equals)) {
    keyword = _KeywordToken(this->cur_word);
    this->_Next();
    enode = this->w_parser->ParseCommandExpr();
    return new command::Expr(new speck(keyword->id, keyword->span_id), enode);
  }
  if (this->c_id == Id::Lit_RBrace) {
    p_die(fmt49(), this->cur_word);
  }
  if (this->c_kind == Kind::Redir) {
    return this->ParseSimpleCommand();
  }
  if (this->c_kind == Kind::Word) {
    compound_word* cur_word = static_cast<compound_word*>(this->cur_word);
    if (this->w_parser->LookAhead() == Id::Op_LParen and !word_::IsVarLike(cur_word)) {
      return this->ParseFunctionDef();
    }
    parts = cur_word->parts;
    if (this->parse_opts->parse_equals and len(parts) == 1) {
      UP_part0 = parts->index(0);
      if (UP_part0->tag_() == word_part_e::Literal) {
        word_part__Literal* part0 = static_cast<word_part__Literal*>(UP_part0);
        tok = part0->token;
        if (match::IsValidVarName(tok->val) and this->w_parser->LookAhead() == Id::Lit_Equals) {
          enode = this->w_parser->ParseBareDecl();
          this->_Next();
          return new command::VarDecl(nullptr, new List<syntax_asdl::name_type*>({new name_type(tok, nullptr)}), enode);
        }
      }
    }
    return this->ParseSimpleCommand();
  }
  if (this->c_kind == Kind::Eof) {
    p_die(fmt50(), this->cur_word);
  }
  p_die(fmt51(), this->cur_word);
}

syntax_asdl::command_t* CommandParser::ParsePipeline() {
  bool negated;
  int pipeline_spid;
  syntax_asdl::command_t* child;
  List<syntax_asdl::command_t*>* children;
  List<int>* no_stderrs;
  syntax_asdl::command__Pipeline* node;
  int pipe_index;
  List<int>* stderr_indices;

  negated = false;
  pipeline_spid = runtime::NO_SPID;
  this->_Peek();
  if (this->c_id == Id::KW_Bang) {
    pipeline_spid = word_::LeftMostSpanForWord(this->cur_word);
    negated = true;
    this->_Next();
  }
  child = this->ParseCommand();
  children = new List<syntax_asdl::command_t*>({child});
  this->_Peek();
  if ((this->c_id != Id::Op_Pipe && this->c_id != Id::Op_PipeAmp)) {
    if (negated) {
      no_stderrs = new List<int>();
      node = new command::Pipeline(children, negated, no_stderrs);
      node->spids->append(pipeline_spid);
      return node;
    }
    else {
      return child;
    }
  }
  pipe_index = 0;
  stderr_indices = new List<int>();
  if (this->c_id == Id::Op_PipeAmp) {
    stderr_indices->append(pipe_index);
  }
  pipe_index += 1;
  while (true) {
    if (pipeline_spid == runtime::NO_SPID) {
      pipeline_spid = word_::LeftMostSpanForWord(this->cur_word);
    }
    this->_Next();
    this->_NewlineOk();
    child = this->ParseCommand();
    children->append(child);
    this->_Peek();
    if ((this->c_id != Id::Op_Pipe && this->c_id != Id::Op_PipeAmp)) {
      break;
    }
    if (this->c_id == Id::Op_PipeAmp) {
      stderr_indices->append(pipe_index);
    }
    pipe_index += 1;
  }
  node = new command::Pipeline(children, negated, stderr_indices);
  node->spids->append(pipeline_spid);
  return node;
}

syntax_asdl::command_t* CommandParser::ParseAndOr() {
  syntax_asdl::command_t* child;
  List<int>* ops;
  List<int>* op_spids;
  List<syntax_asdl::command_t*>* children;
  syntax_asdl::command__AndOr* node;

  child = this->ParsePipeline();
  this->_Peek();
  if ((this->c_id != Id::Op_DPipe && this->c_id != Id::Op_DAmp)) {
    return child;
  }
  ops = new List<int>();
  op_spids = new List<int>();
  children = new List<syntax_asdl::command_t*>({child});
  while (true) {
    ops->append(this->c_id);
    op_spids->append(word_::LeftMostSpanForWord(this->cur_word));
    this->_Next();
    this->_NewlineOk();
    child = this->ParsePipeline();
    children->append(child);
    this->_Peek();
    if ((this->c_id != Id::Op_DPipe && this->c_id != Id::Op_DAmp)) {
      break;
    }
  }
  node = new command::AndOr(ops, children);
  node->spids = op_spids;
  return node;
}

syntax_asdl::command_t* CommandParser::_ParseCommandLine() {
  List<int>* END_LIST;
  List<syntax_asdl::command_t*>* children;
  bool done;
  syntax_asdl::command_t* child;

  END_LIST = new List<int>({Id::Op_Newline, Id::Eof_Real});
  children = new List<syntax_asdl::command_t*>();
  done = false;
  while (!done) {
    child = this->ParseAndOr();
    this->_Peek();
    if ((this->c_id == Id::Op_Semi || this->c_id == Id::Op_Amp)) {
      Token* tok = static_cast<Token*>(this->cur_word);
      child = new command::Sentence(child, tok);
      this->_Next();
      this->_Peek();
      if (list_contains(END_LIST, this->c_id)) {
        done = true;
      }
    }
    else {
      if (list_contains(END_LIST, this->c_id)) {
        done = true;
      }
      else {
        p_die(fmt52(), this->cur_word);
      }
    }
    children->append(child);
  }
  if (len(children) > 1) {
    return new command::CommandList(children);
  }
  else {
    return children->index(0);
  }
}

syntax_asdl::command__CommandList* CommandParser::_ParseCommandTerm() {
  List<int>* END_LIST;
  List<syntax_asdl::command_t*>* children;
  bool done;
  syntax_asdl::command_t* child;

  END_LIST = new List<int>({this->eof_id, Id::Right_Subshell, Id::Lit_RBrace, Id::Op_DSemi});
  children = new List<syntax_asdl::command_t*>();
  done = false;
  while (!done) {
    this->_Peek();
    if (this->_AtSecondaryKeyword()) {
      break;
    }
    child = this->ParseAndOr();
    this->_Peek();
    if (this->c_id == Id::Op_Newline) {
      this->_Next();
      this->_Peek();
      if (list_contains(END_LIST, this->c_id)) {
        done = true;
      }
    }
    else {
      if ((this->c_id == Id::Op_Semi || this->c_id == Id::Op_Amp)) {
        Token* tok = static_cast<Token*>(this->cur_word);
        child = new command::Sentence(child, tok);
        this->_Next();
        this->_Peek();
        if (this->c_id == Id::Op_Newline) {
          this->_Next();
          this->_Peek();
          if (list_contains(END_LIST, this->c_id)) {
            done = true;
          }
        }
        else {
          if (list_contains(END_LIST, this->c_id)) {
            done = true;
          }
        }
      }
      else {
        if (list_contains(END_LIST, this->c_id)) {
          done = true;
        }
        else {
          if (this->parse_opts->parse_brace and this->c_id == Id::Lit_LBrace) {
            done = true;
          }
          else {
            ;  // pass
          }
        }
      }
    }
    children->append(child);
  }
  this->_Peek();
  return new command::CommandList(children);
}

syntax_asdl::command__CommandList* CommandParser::_ParseCommandList() {
  syntax_asdl::command__CommandList* node;

  this->_NewlineOk();
  node = this->_ParseCommandTerm();
  return node;
}

syntax_asdl::command_t* CommandParser::ParseLogicalLine() {
  syntax_asdl::command_t* node;

  this->_NewlineOk();
  this->_Peek();
  if (this->c_id == Id::Eof_Real) {
    return nullptr;
  }
  node = this->_ParseCommandLine();
  return node;
}

syntax_asdl::parse_result_t* CommandParser::ParseInteractiveLine() {
  syntax_asdl::command_t* node;

  this->_Peek();
  if (this->c_id == Id::Op_Newline) {
    return new parse_result::EmptyLine();
  }
  if (this->c_id == Id::Eof_Real) {
    return new parse_result::Eof();
  }
  node = this->_ParseCommandLine();
  return new parse_result::Node(node);
}

syntax_asdl::command_t* CommandParser::ParseCommandSub() {
  syntax_asdl::command__CommandList* node;

  this->_NewlineOk();
  if (this->c_kind == Kind::Eof) {
    return new command::NoOp();
  }
  node = this->_ParseCommandTerm();
  return node;
}

void CommandParser::CheckForPendingHereDocs() {
  syntax_asdl::redir__HereDoc* node;

  if (len(this->pending_here_docs)) {
    node = this->pending_here_docs->index(0);
    p_die(fmt53(), node->here_begin);
  }
}

}  // define namespace cmd_parse

namespace grammar {  // define

Grammar::Grammar() {
  this->symbol2number = new Dict<Str*, int>();
  this->number2symbol = new Dict<int, Str*>();
  this->states = new List<List<Tuple2<int, int>*>*>();
  this->dfas = new Dict<int, Tuple2<List<List<Tuple2<int, int>*>*>*, Dict<int, int>*>*>();
  this->labels = new List<int>({0});
  this->keywords = new Dict<Str*, int>();
  this->tokens = new Dict<int, int>();
  this->symbol2label = new Dict<Str*, int>();
  this->start = 256;
}

}  // define namespace grammar

namespace cgi {  // define

Str* escape(Str* s) {
  s = s->replace(str118, str119);
  s = s->replace(str120, str121);
  s = s->replace(str122, str123);
  return s;
}

}  // define namespace cgi

namespace braces {  // define
namespace Id = id_kind_asdl::Id;
using id_kind_asdl::Id_t;
using syntax_asdl::Token;
using syntax_asdl::compound_word;
namespace word = syntax_asdl::word;
namespace word_e = syntax_asdl::word_e;
using syntax_asdl::word_t;
using syntax_asdl::word__BracedTree;
namespace word_part = syntax_asdl::word_part;
namespace word_part_e = syntax_asdl::word_part_e;
using syntax_asdl::word_part_t;
using syntax_asdl::word_part__BracedTuple;
using syntax_asdl::word_part__BracedRange;
using syntax_asdl::word_part__Literal;
int NO_STEP = 0;

_NotARange::_NotARange(Str* s) {
  ;  // pass
}

_RangeParser::_RangeParser(match::SimpleLexer* lexer, int span_id) {
  this->lexer = lexer;
  this->span_id = span_id;
  this->token_type = Id::Undefined_Tok;
  this->token_val = str124;
}

void _RangeParser::_Next() {
  Tuple2<int, Str*>* tup0 = this->lexer->Next();
  this->token_type = tup0->at0();
  this->token_val = tup0->at1();
}

Str* _RangeParser::_Eat(int token_type) {
  Str* val;

  if (this->token_type != token_type) {
    throw new _NotARange(fmt1(token_type, this->token_type));
  }
  val = this->token_val;
  this->_Next();
  return val;
}

int _RangeParser::_ParseStep() {
  int step;

  this->_Next();
  step = str_to_int(this->_Eat(Id::Range_Int));
  if (step == 0) {
    p_die(fmt2(), this->span_id);
  }
  return step;
}

syntax_asdl::word_part__BracedRange* _RangeParser::_ParseRange(int range_kind) {
  Str* start;
  Str* end;
  int step;
  syntax_asdl::word_part__BracedRange* part;

  start = this->token_val;
  this->_Next();
  this->_Eat(Id::Range_Dots);
  end = this->_Eat(range_kind);
  if (this->token_type == Id::Range_Dots) {
    step = this->_ParseStep();
  }
  else {
    step = NO_STEP;
  }
  part = new word_part::BracedRange(range_kind, start, end, step);
  return part;
}

syntax_asdl::word_part__BracedRange* _RangeParser::Parse() {
  syntax_asdl::word_part__BracedRange* part;
  int start;
  int end;
  bool upper1;
  bool upper2;

  this->_Next();
  if (this->token_type == Id::Range_Int) {
    part = this->_ParseRange(this->token_type);
    start = str_to_int(part->start);
    end = str_to_int(part->end);
    if (start < end) {
      if (part->step == NO_STEP) {
        part->step = 1;
      }
      if (part->step <= 0) {
        p_die(fmt3(part->step), this->span_id);
      }
    }
    else {
      if (start > end) {
        if (part->step == NO_STEP) {
          part->step = -1;
        }
        if (part->step >= 0) {
          p_die(fmt4(part->step), this->span_id);
        }
      }
      else {
        part->step = 1;
      }
    }
  }
  else {
    if (this->token_type == Id::Range_Char) {
      part = this->_ParseRange(this->token_type);
      if (part->start < part->end) {
        if (part->step == NO_STEP) {
          part->step = 1;
        }
        if (part->step <= 0) {
          p_die(fmt5(part->step), this->span_id);
        }
      }
      else {
        if (part->start > part->end) {
          if (part->step == NO_STEP) {
            part->step = -1;
          }
          if (part->step >= 0) {
            p_die(fmt6(part->step), this->span_id);
          }
        }
        else {
          part->step = 1;
        }
      }
      upper1 = part->start->isupper();
      upper2 = part->end->isupper();
      if (upper1 != upper2) {
        p_die(fmt7(), this->span_id);
      }
    }
    else {
      throw new _NotARange(str132);
    }
  }
  this->_Eat(Id::Eol_Tok);
  return part;
}

syntax_asdl::word_part_t* _RangePartDetect(syntax_asdl::Token* tok) {
  match::SimpleLexer* lexer;
  braces::_RangeParser* p;
  syntax_asdl::word_part__BracedRange* part;

  lexer = match::BraceRangeLexer(tok->val);
  p = new _RangeParser(lexer, tok->span_id);
  try {
    part = p->Parse();
  }
  catch (_NotARange* e) {
    return nullptr;
  }
  part->spids->append(tok->span_id);
  return part;
}

_StackFrame::_StackFrame(List<syntax_asdl::word_part_t*>* cur_parts) {
  this->cur_parts = cur_parts;
  this->alt_part = new word_part::BracedTuple();
  this->saw_comma = false;
}

syntax_asdl::word__BracedTree* _BraceDetect(syntax_asdl::compound_word* w) {
  List<syntax_asdl::word_part_t*>* cur_parts;
  List<braces::_StackFrame*>* stack;
  bool found;
  int i;
  bool append;
  syntax_asdl::word_part_t* UP_part;
  int id_;
  braces::_StackFrame* new_frame;
  syntax_asdl::word_part_t* range_part;
  syntax_asdl::word_part_t* part2;
  braces::_StackFrame* frame;

  cur_parts = new List<syntax_asdl::word_part_t*>();
  stack = new List<braces::_StackFrame*>();
  found = false;
  i = 0;
  for (ListIter<syntax_asdl::word_part_t*> it(w->parts); !it.Done(); it.Next(), ++i) {
    syntax_asdl::word_part_t* part = it.Value();
    append = true;
    UP_part = part;
    if (part->tag_() == word_part_e::Literal) {
      word_part__Literal* part = static_cast<word_part__Literal*>(UP_part);
      id_ = part->token->id;
      if (id_ == Id::Lit_LBrace) {
        new_frame = new _StackFrame(cur_parts);
        stack->append(new_frame);
        cur_parts = new List<syntax_asdl::word_part_t*>();
        append = false;
        found = true;
      }
      else {
        if (id_ == Id::Lit_Comma) {
          if (len(stack)) {
            stack->index(-1)->saw_comma = true;
            stack->index(-1)->alt_part->words->append(new compound_word(cur_parts, nullptr));
            cur_parts = new List<syntax_asdl::word_part_t*>();
            append = false;
          }
        }
        else {
          if (id_ == Id::Lit_RBrace) {
            if (len(stack) == 0) {
              return nullptr;
            }
            range_part = nullptr;
            if (!stack->index(-1)->saw_comma and len(cur_parts) == 1) {
              part2 = cur_parts->index(0);
              if (part2->tag_() == word_part_e::Literal) {
                word_part__Literal* lit_part = static_cast<word_part__Literal*>(part2);
                if (lit_part->token->id == Id::Lit_Chars) {
                  range_part = _RangePartDetect(lit_part->token);
                  if (range_part) {
                    frame = stack->pop();
                    cur_parts = frame->cur_parts;
                    cur_parts->append(range_part);
                    append = false;
                  }
                }
              }
            }
            if (!range_part) {
              if (!stack->index(-1)->saw_comma) {
                return nullptr;
              }
              stack->index(-1)->alt_part->words->append(new compound_word(cur_parts, nullptr));
              frame = stack->pop();
              cur_parts = frame->cur_parts;
              cur_parts->append(frame->alt_part);
              append = false;
            }
          }
        }
      }
    }
    if (append) {
      cur_parts->append(part);
    }
  }
  if (len(stack) != 0) {
    return nullptr;
  }
  if (found) {
    return new word::BracedTree(cur_parts);
  }
  else {
    return nullptr;
  }
}

List<syntax_asdl::word_t*>* BraceDetectAll(List<syntax_asdl::compound_word*>* words) {
  List<syntax_asdl::word_t*>* out;
  syntax_asdl::word__BracedTree* brace_tree;

  out = new List<syntax_asdl::word_t*>();
  for (ListIter<syntax_asdl::compound_word*> it(words); !it.Done(); it.Next()) {
    syntax_asdl::compound_word* w = it.Value();
    brace_tree = _BraceDetect(w);
    if (brace_tree) {
      out->append(brace_tree);
    }
    else {
      out->append(w);
    }
  }
  return out;
}

int _LeadingZeros(Str* s) {
  int n;

  n = 0;
  for (StrIter it(s); !it.Done(); it.Next()) {
    Str* c = it.Value();
    if (str_equals(c, str133)) {
      n += 1;
    }
    else {
      break;
    }
  }
  return n;
}

Str* _IntToString(int i, int width) {
  Str* s;
  int n;
  Str* pad;

  s = str(i);
  n = len(s);
  if (n < width) {
    pad = str_repeat(str134, width - n);
    return str_concat(pad, s);
  }
  else {
    return s;
  }
}

List<Str*>* _RangeStrings(syntax_asdl::word_part__BracedRange* part) {
  List<Str*>* nums;
  int z1;
  int z2;
  int width;
  int n;
  int end;
  int step;
  List<Str*>* chars;
  int ord_end;

  if (part->kind == Id::Range_Int) {
    nums = new List<Str*>();
    z1 = _LeadingZeros(part->start);
    z2 = _LeadingZeros(part->end);
    if (z1 == 0 and z2 == 0) {
      width = 0;
    }
    else {
      if (z1 < z2) {
        width = len(part->end);
      }
      else {
        width = len(part->start);
      }
    }
    n = str_to_int(part->start);
    end = str_to_int(part->end);
    step = part->step;
    if (step > 0) {
      while (true) {
        nums->append(_IntToString(n, width));
        n += step;
        if (n > end) {
          break;
        }
      }
    }
    else {
      while (true) {
        nums->append(_IntToString(n, width));
        n += step;
        if (n < end) {
          break;
        }
      }
    }
    return nums;
  }
  else {
    chars = new List<Str*>();
    n = ord(part->start);
    ord_end = ord(part->end);
    step = part->step;
    if (step > 0) {
      while (true) {
        chars->append(chr(n));
        n += step;
        if (n > ord_end) {
          break;
        }
      }
    }
    else {
      while (true) {
        chars->append(chr(n));
        n += step;
        if (n < ord_end) {
          break;
        }
      }
    }
    return chars;
  }
}

List<List<syntax_asdl::word_part_t*>*>* _ExpandPart(List<syntax_asdl::word_part_t*>* parts, int first_alt_index, List<List<syntax_asdl::word_part_t*>*>* suffixes) {
  List<List<syntax_asdl::word_part_t*>*>* out;
  List<syntax_asdl::word_part_t*>* prefix;
  syntax_asdl::word_part_t* expand_part;
  syntax_asdl::word_part_t* UP_part;
  List<List<syntax_asdl::word_part_t*>*>* expanded_alts;
  List<syntax_asdl::word_part_t*>* out_parts;
  List<Str*>* strs;
  List<syntax_asdl::word_part_t*>* out_parts_;
  syntax_asdl::Token* t;

  out = new List<List<syntax_asdl::word_part_t*>*>();
  prefix = parts->slice(0, first_alt_index);
  expand_part = parts->index(first_alt_index);
  UP_part = expand_part;
  switch (expand_part->tag_()) {
    case word_part_e::BracedTuple: {
      word_part__BracedTuple* expand_part = static_cast<word_part__BracedTuple*>(UP_part);
      expanded_alts = new List<List<syntax_asdl::word_part_t*>*>();
      for (ListIter<syntax_asdl::compound_word*> it(expand_part->words); !it.Done(); it.Next()) {
        syntax_asdl::compound_word* w = it.Value();
        expanded_alts->extend(_BraceExpand(w->parts));
      }
      for (ListIter<List<syntax_asdl::word_part_t*>*> it(expanded_alts); !it.Done(); it.Next()) {
        List<syntax_asdl::word_part_t*>* alt_parts = it.Value();
        for (ListIter<List<syntax_asdl::word_part_t*>*> it(suffixes); !it.Done(); it.Next()) {
          List<syntax_asdl::word_part_t*>* suffix = it.Value();
          out_parts = new List<syntax_asdl::word_part_t*>();
          out_parts->extend(prefix);
          out_parts->extend(alt_parts);
          out_parts->extend(suffix);
          out->append(out_parts);
        }
      }
    }
      break;
    case word_part_e::BracedRange: {
      word_part__BracedRange* expand_part = static_cast<word_part__BracedRange*>(UP_part);
      strs = _RangeStrings(expand_part);
      for (ListIter<Str*> it(strs); !it.Done(); it.Next()) {
        Str* s = it.Value();
        for (ListIter<List<syntax_asdl::word_part_t*>*> it(suffixes); !it.Done(); it.Next()) {
          List<syntax_asdl::word_part_t*>* suffix = it.Value();
          out_parts_ = new List<syntax_asdl::word_part_t*>();
          out_parts_->extend(prefix);
          t = new Token(Id::Lit_Chars, s, expand_part->spids->index(0));
          out_parts_->append(new word_part::Literal(t));
          out_parts_->extend(suffix);
          out->append(out_parts_);
        }
      }
    }
      break;
    default: {
      throw new AssertionError();
    }
  }
  return out;
}

List<List<syntax_asdl::word_part_t*>*>* _BraceExpand(List<syntax_asdl::word_part_t*>* parts) {
  int num_alts;
  int first_alt_index;
  int i;
  int tag;
  List<syntax_asdl::word_part_t*>* suffix;
  List<syntax_asdl::word_part_t*>* tail_parts;
  List<List<syntax_asdl::word_part_t*>*>* suffixes;

  num_alts = 0;
  first_alt_index = -1;
  i = 0;
  for (ListIter<syntax_asdl::word_part_t*> it(parts); !it.Done(); it.Next(), ++i) {
    syntax_asdl::word_part_t* part = it.Value();
    tag = part->tag_();
    if ((tag == word_part_e::BracedTuple || tag == word_part_e::BracedRange)) {
      num_alts += 1;
      if (num_alts == 1) {
        first_alt_index = i;
      }
      else {
        if (num_alts == 2) {
          break;
        }
      }
    }
  }
  if (num_alts == 0) {
    return new List<List<syntax_asdl::word_part_t*>*>({parts});
  }
  else {
    if (num_alts == 1) {
      suffix = parts->slice(first_alt_index + 1);
      return _ExpandPart(parts, first_alt_index, new List<List<syntax_asdl::word_part_t*>*>({suffix}));
    }
    else {
      tail_parts = parts->slice(first_alt_index + 1);
      suffixes = _BraceExpand(tail_parts);
      return _ExpandPart(parts, first_alt_index, suffixes);
    }
  }
}

List<syntax_asdl::compound_word*>* BraceExpandWords(List<syntax_asdl::word_t*>* words) {
  List<syntax_asdl::compound_word*>* out;
  syntax_asdl::word_t* UP_w;
  List<List<syntax_asdl::word_part_t*>*>* parts_list;
  List<syntax_asdl::compound_word*>* tmp;

  out = new List<syntax_asdl::compound_word*>();
  for (ListIter<syntax_asdl::word_t*> it(words); !it.Done(); it.Next()) {
    syntax_asdl::word_t* w = it.Value();
    UP_w = w;
    switch (w->tag_()) {
      case word_e::BracedTree: {
        word__BracedTree* w = static_cast<word__BracedTree*>(UP_w);
        parts_list = _BraceExpand(w->parts);
        tmp = new List<syntax_asdl::compound_word*>();
        for (ListIter<List<syntax_asdl::word_part_t*>*> it(parts_list); !it.Done(); it.Next()) {
          List<syntax_asdl::word_part_t*>* p = it.Value();
          tmp->append(new compound_word(p, nullptr));
        }
        out->extend(tmp);
      }
        break;
      case word_e::Compound: {
        compound_word* w = static_cast<compound_word*>(UP_w);
        out->append(w);
      }
        break;
      default: {
        throw new AssertionError();
      }
    }
  }
  return out;
}

}  // define namespace braces

namespace word_ {  // define
namespace Id = id_kind_asdl::Id;
using id_kind_asdl::Kind;
using id_kind_asdl::Id_t;
using id_kind_asdl::Kind_t;
using syntax_asdl::Token;
using syntax_asdl::compound_word;
using syntax_asdl::double_quoted;
using syntax_asdl::single_quoted;
using syntax_asdl::simple_var_sub;
using syntax_asdl::braced_var_sub;
using syntax_asdl::command_sub;
using syntax_asdl::sh_array_literal;
namespace word_part = syntax_asdl::word_part;
using syntax_asdl::word_part_t;
namespace word_part_e = syntax_asdl::word_part_e;
using syntax_asdl::word_part__AssocArrayLiteral;
using syntax_asdl::word_part__Literal;
using syntax_asdl::word_part__EscapedLiteral;
using syntax_asdl::word_part__TildeSub;
using syntax_asdl::word_part__ArithSub;
using syntax_asdl::word_part__ExtGlob;
using syntax_asdl::word_part__Splice;
using syntax_asdl::word_part__FuncCall;
using syntax_asdl::word_part__ExprSub;
namespace word_e = syntax_asdl::word_e;
using syntax_asdl::word_t;
using syntax_asdl::word__BracedTree;
using syntax_asdl::word__String;
using syntax_asdl::sh_lhs_expr__Name;

int _LiteralId(syntax_asdl::word_part_t* p) {
  syntax_asdl::word_part_t* UP_part;

  UP_part = p;
  if (p->tag_() == word_part_e::Literal) {
    word_part__Literal* p = static_cast<word_part__Literal*>(UP_part);
    return p->token->id;
  }
  else {
    return Id::Undefined_Tok;
  }
}

Tuple3<bool, Str*, bool>* _EvalWordPart(syntax_asdl::word_part_t* part) {
  syntax_asdl::word_part_t* UP_part;
  Str* val;
  Str* s;
  List<Str*>* tmp;
  List<Str*>* strs;
  bool ok;

  UP_part = part;
  switch (part->tag_()) {
    case word_part_e::ShArrayLiteral: {
      return (new Tuple3<bool, Str*, bool>(false, str135, false));
    }
      break;
    case word_part_e::AssocArrayLiteral: {
      return (new Tuple3<bool, Str*, bool>(false, str136, false));
    }
      break;
    case word_part_e::Literal: {
      word_part__Literal* part = static_cast<word_part__Literal*>(UP_part);
      return (new Tuple3<bool, Str*, bool>(true, part->token->val, false));
    }
      break;
    case word_part_e::EscapedLiteral: {
      word_part__EscapedLiteral* part = static_cast<word_part__EscapedLiteral*>(UP_part);
      val = part->token->val;
      s = val->index(1);
      return (new Tuple3<bool, Str*, bool>(true, s, true));
    }
      break;
    case word_part_e::SingleQuoted: {
      single_quoted* part = static_cast<single_quoted*>(UP_part);
      tmp = new List<Str*>();
      for (ListIter<syntax_asdl::Token*> it(part->tokens); !it.Done(); it.Next()) {
        syntax_asdl::Token* t = it.Value();
        tmp->append(t->val);
      }
      s = str137->join(tmp);
      return (new Tuple3<bool, Str*, bool>(true, s, true));
    }
      break;
    case word_part_e::DoubleQuoted: {
      double_quoted* part = static_cast<double_quoted*>(UP_part);
      strs = new List<Str*>();
      for (ListIter<syntax_asdl::word_part_t*> it(part->parts); !it.Done(); it.Next()) {
        syntax_asdl::word_part_t* p = it.Value();
        Tuple3<bool, Str*, bool>* tup0 = _EvalWordPart(p);
        ok = tup0->at0();
        s = tup0->at1();
        if (!ok) {
          return (new Tuple3<bool, Str*, bool>(false, str138, true));
        }
        strs->append(s);
      }
      return (new Tuple3<bool, Str*, bool>(true, str139->join(strs), true));
    }
      break;
    case word_part_e::CommandSub: 
    case word_part_e::SimpleVarSub: 
    case word_part_e::BracedVarSub: 
    case word_part_e::TildeSub: 
    case word_part_e::ArithSub: 
    case word_part_e::ExtGlob: 
    case word_part_e::Splice: {
      return (new Tuple3<bool, Str*, bool>(false, str140, false));
    }
      break;
    default: {
      throw new AssertionError();
    }
  }
}

Tuple3<bool, Str*, bool>* StaticEval(syntax_asdl::word_t* UP_w) {
  bool quoted;
  List<Str*>* strs;
  bool ok;
  Str* s;
  bool q;

  quoted = false;
  if (UP_w->tag_() != word_e::Compound) {
    return (new Tuple3<bool, Str*, bool>(false, str141, quoted));
  }
  compound_word* w = static_cast<compound_word*>(UP_w);
  strs = new List<Str*>();
  for (ListIter<syntax_asdl::word_part_t*> it(w->parts); !it.Done(); it.Next()) {
    syntax_asdl::word_part_t* part = it.Value();
    Tuple3<bool, Str*, bool>* tup1 = _EvalWordPart(part);
    ok = tup1->at0();
    s = tup1->at1();
    q = tup1->at2();
    if (!ok) {
      return (new Tuple3<bool, Str*, bool>(false, str142, quoted));
    }
    if (q) {
      quoted = true;
    }
    strs->append(s);
  }
  return (new Tuple3<bool, Str*, bool>(true, str143->join(strs), quoted));
}

int LeftMostSpanForPart(syntax_asdl::word_part_t* part) {
  syntax_asdl::word_part_t* UP_part;

  UP_part = part;
  switch (part->tag_()) {
    case word_part_e::ShArrayLiteral: {
      sh_array_literal* part = static_cast<sh_array_literal*>(UP_part);
      return part->left->span_id;
    }
      break;
    case word_part_e::AssocArrayLiteral: {
      word_part__AssocArrayLiteral* part = static_cast<word_part__AssocArrayLiteral*>(UP_part);
      return part->left->span_id;
    }
      break;
    case word_part_e::Literal: {
      word_part__Literal* part = static_cast<word_part__Literal*>(UP_part);
      return part->token->span_id;
    }
      break;
    case word_part_e::EscapedLiteral: {
      word_part__EscapedLiteral* part = static_cast<word_part__EscapedLiteral*>(UP_part);
      return part->token->span_id;
    }
      break;
    case word_part_e::SingleQuoted: {
      single_quoted* part = static_cast<single_quoted*>(UP_part);
      return part->left->span_id;
    }
      break;
    case word_part_e::DoubleQuoted: {
      double_quoted* part = static_cast<double_quoted*>(UP_part);
      return part->left->span_id;
    }
      break;
    case word_part_e::SimpleVarSub: {
      simple_var_sub* part = static_cast<simple_var_sub*>(UP_part);
      return part->token->span_id;
    }
      break;
    case word_part_e::BracedVarSub: {
      braced_var_sub* part = static_cast<braced_var_sub*>(UP_part);
      return part->spids->index(0);
    }
      break;
    case word_part_e::CommandSub: {
      command_sub* part = static_cast<command_sub*>(UP_part);
      return part->spids->index(0);
    }
      break;
    case word_part_e::TildeSub: {
      word_part__TildeSub* part = static_cast<word_part__TildeSub*>(UP_part);
      return part->token->span_id;
    }
      break;
    case word_part_e::ArithSub: {
      word_part__ArithSub* part = static_cast<word_part__ArithSub*>(UP_part);
      return part->spids->index(0);
    }
      break;
    case word_part_e::ExtGlob: {
      word_part__ExtGlob* part = static_cast<word_part__ExtGlob*>(UP_part);
      return part->spids->index(0);
    }
      break;
    case word_part_e::BracedTuple: {
      return runtime::NO_SPID;
    }
      break;
    case word_part_e::Splice: {
      word_part__Splice* part = static_cast<word_part__Splice*>(UP_part);
      return part->name->span_id;
    }
      break;
    case word_part_e::FuncCall: {
      word_part__FuncCall* part = static_cast<word_part__FuncCall*>(UP_part);
      return part->name->span_id;
    }
      break;
    case word_part_e::ExprSub: {
      word_part__ExprSub* part = static_cast<word_part__ExprSub*>(UP_part);
      return part->left->span_id;
    }
      break;
    default: {
      throw new AssertionError();
    }
  }
}

int _RightMostSpanForPart(syntax_asdl::word_part_t* part) {
  syntax_asdl::word_part_t* UP_part;
  int spid;

  UP_part = part;
  switch (part->tag_()) {
    case word_part_e::ShArrayLiteral: {
      sh_array_literal* part = static_cast<sh_array_literal*>(UP_part);
      return LeftMostSpanForWord(part->words->index(0));
    }
      break;
    case word_part_e::Literal: {
      word_part__Literal* part = static_cast<word_part__Literal*>(UP_part);
      return part->token->span_id;
    }
      break;
    case word_part_e::EscapedLiteral: {
      word_part__EscapedLiteral* part = static_cast<word_part__EscapedLiteral*>(UP_part);
      return part->token->span_id;
    }
      break;
    case word_part_e::SingleQuoted: {
      single_quoted* part = static_cast<single_quoted*>(UP_part);
      return part->spids->index(1);
    }
      break;
    case word_part_e::DoubleQuoted: {
      double_quoted* part = static_cast<double_quoted*>(UP_part);
      return part->spids->index(1);
    }
      break;
    case word_part_e::SimpleVarSub: {
      simple_var_sub* part = static_cast<simple_var_sub*>(UP_part);
      return part->token->span_id;
    }
      break;
    case word_part_e::BracedVarSub: {
      braced_var_sub* part = static_cast<braced_var_sub*>(UP_part);
      spid = part->spids->index(1);
      return spid;
    }
      break;
    case word_part_e::CommandSub: {
      command_sub* part = static_cast<command_sub*>(UP_part);
      return part->spids->index(1);
    }
      break;
    case word_part_e::TildeSub: {
      return runtime::NO_SPID;
    }
      break;
    case word_part_e::ArithSub: {
      word_part__ArithSub* part = static_cast<word_part__ArithSub*>(UP_part);
      return part->spids->index(1);
    }
      break;
    case word_part_e::ExtGlob: {
      word_part__ExtGlob* part = static_cast<word_part__ExtGlob*>(UP_part);
      return part->spids->index(1);
    }
      break;
    default: {
      throw new AssertionError();
    }
  }
}

int LeftMostSpanForWord(syntax_asdl::word_t* w) {
  syntax_asdl::word_t* UP_w;

  UP_w = w;
  switch (w->tag_()) {
    case word_e::Compound: {
      compound_word* w = static_cast<compound_word*>(UP_w);
      if (len(w->parts)) {
        return LeftMostSpanForPart(w->parts->index(0));
      }
      else {
        return runtime::NO_SPID;
      }
    }
      break;
    case word_e::Token: {
      Token* tok = static_cast<Token*>(UP_w);
      return tok->span_id;
    }
      break;
    case word_e::Empty: {
      return runtime::NO_SPID;
    }
      break;
    case word_e::BracedTree: {
      word__BracedTree* w = static_cast<word__BracedTree*>(UP_w);
      return LeftMostSpanForPart(w->parts->index(0));
    }
      break;
    case word_e::String: {
      word__String* w = static_cast<word__String*>(UP_w);
      return w->spids->index(0);
    }
      break;
    default: {
      throw new AssertionError();
    }
  }
}

int RightMostSpanForWord(syntax_asdl::word_t* w) {
  syntax_asdl::word_t* UP_w;
  syntax_asdl::word_part_t* end;

  UP_w = w;
  switch (w->tag_()) {
    case word_e::Compound: {
      compound_word* w = static_cast<compound_word*>(UP_w);
      if (len(w->parts) == 0) {
        throw new AssertionError();
      }
      else {
        end = w->parts->index(-1);
        return _RightMostSpanForPart(end);
      }
    }
      break;
    case word_e::Empty: {
      return runtime::NO_SPID;
    }
      break;
    case word_e::Token: {
      Token* tok = static_cast<Token*>(UP_w);
      return tok->span_id;
    }
      break;
    default: {
      throw new AssertionError();
    }
  }
}

syntax_asdl::word_t* TildeDetect(syntax_asdl::word_t* UP_w) {
  syntax_asdl::word_part_t* UP_part0;
  syntax_asdl::word_part__TildeSub* tilde_part;
  syntax_asdl::word_part_t* UP_part1;
  syntax_asdl::word_part_t* tilde_part_;
  List<syntax_asdl::word_part_t*>* parts;

  if (UP_w->tag_() != word_e::Compound) {
    return nullptr;
  }
  compound_word* w = static_cast<compound_word*>(UP_w);
  UP_part0 = w->parts->index(0);
  if (_LiteralId(UP_part0) != Id::Lit_TildeLike) {
    return nullptr;
  }
  word_part__Literal* part0 = static_cast<word_part__Literal*>(UP_part0);
  if (len(w->parts) == 1) {
    tilde_part = new word_part::TildeSub(part0->token);
    return new compound_word(new List<syntax_asdl::word_part_t*>({tilde_part}), nullptr);
  }
  UP_part1 = w->parts->index(1);
  if (_LiteralId(UP_part1) == Id::Lit_Chars) {
    word_part__Literal* part1 = static_cast<word_part__Literal*>(UP_part1);
    if (part1->token->val->startswith(str145)) {
      tilde_part_ = new word_part::TildeSub(part0->token);
      parts = new List<syntax_asdl::word_part_t*>({tilde_part_});
      parts->extend(w->parts->slice(1));
      return new compound_word(parts, nullptr);
    }
  }
  return nullptr;
}

List<syntax_asdl::word_t*>* TildeDetectAll(List<syntax_asdl::word_t*>* words) {
  List<syntax_asdl::word_t*>* out;
  syntax_asdl::word_t* t;

  out = new List<syntax_asdl::word_t*>();
  for (ListIter<syntax_asdl::word_t*> it(words); !it.Done(); it.Next()) {
    syntax_asdl::word_t* w = it.Value();
    t = TildeDetect(w);
    if (t) {
      out->append(t);
    }
    else {
      out->append(w);
    }
  }
  return out;
}

bool HasArrayPart(syntax_asdl::compound_word* w) {
  for (ListIter<syntax_asdl::word_part_t*> it(w->parts); !it.Done(); it.Next()) {
    syntax_asdl::word_part_t* part = it.Value();
    if (part->tag_() == word_part_e::ShArrayLiteral) {
      return true;
    }
  }
  return false;
}

Str* ShFunctionName(syntax_asdl::compound_word* w) {
  bool ok;
  Str* s;
  bool quoted;

  Tuple3<bool, Str*, bool>* tup2 = StaticEval(w);
  ok = tup2->at0();
  s = tup2->at1();
  quoted = tup2->at2();
  if (!ok or quoted) {
    return str146;
  }
  return s;
}

syntax_asdl::Token* LooksLikeArithVar(syntax_asdl::word_t* UP_w) {
  syntax_asdl::word_part_t* UP_part0;

  if (UP_w->tag_() != word_e::Compound) {
    return nullptr;
  }
  compound_word* w = static_cast<compound_word*>(UP_w);
  if (len(w->parts) != 1) {
    return nullptr;
  }
  UP_part0 = w->parts->index(0);
  if (_LiteralId(UP_part0) != Id::Lit_ArithVarLike) {
    return nullptr;
  }
  word_part__Literal* part0 = static_cast<word_part__Literal*>(UP_part0);
  return part0->token;
}

bool IsVarLike(syntax_asdl::compound_word* w) {
  if (len(w->parts) == 0) {
    return false;
  }
  return _LiteralId(w->parts->index(0)) == Id::Lit_VarLike;
}

Tuple3<syntax_asdl::Token*, syntax_asdl::Token*, int>* DetectShAssignment(syntax_asdl::compound_word* w) {
  syntax_asdl::Token* no_token;
  int n;
  syntax_asdl::word_part_t* UP_part0;
  int id0;
  syntax_asdl::word_part_t* UP_part;

  no_token = nullptr;
  n = len(w->parts);
  if (n == 0) {
    return (new Tuple3<syntax_asdl::Token*, syntax_asdl::Token*, int>(no_token, no_token, 0));
  }
  UP_part0 = w->parts->index(0);
  id0 = _LiteralId(UP_part0);
  if (id0 == Id::Lit_VarLike) {
    word_part__Literal* part0 = static_cast<word_part__Literal*>(UP_part0);
    return (new Tuple3<syntax_asdl::Token*, syntax_asdl::Token*, int>(part0->token, no_token, 1));
  }
  if (id0 == Id::Lit_ArrayLhsOpen) {
    word_part__Literal* part0 = static_cast<word_part__Literal*>(UP_part0);
    if (n < 2) {
      return (new Tuple3<syntax_asdl::Token*, syntax_asdl::Token*, int>(no_token, no_token, 0));
    }
    for (int i = 1; i < n; ++i) {
      UP_part = w->parts->index(i);
      if (_LiteralId(UP_part) == Id::Lit_ArrayLhsClose) {
        word_part__Literal* part = static_cast<word_part__Literal*>(UP_part);
        return (new Tuple3<syntax_asdl::Token*, syntax_asdl::Token*, int>(part0->token, part->token, i + 1));
      }
    }
  }
  return (new Tuple3<syntax_asdl::Token*, syntax_asdl::Token*, int>(no_token, no_token, 0));
}

Tuple2<syntax_asdl::compound_word*, syntax_asdl::compound_word*>* DetectAssocPair(syntax_asdl::compound_word* w) {
  List<syntax_asdl::word_part_t*>* parts;
  int n;
  int id_;
  syntax_asdl::compound_word* key;
  syntax_asdl::compound_word* value;

  parts = w->parts;
  if (_LiteralId(parts->index(0)) != Id::Lit_LBracket) {
    return nullptr;
  }
  n = len(parts);
  for (int i = 0; i < n; ++i) {
    id_ = _LiteralId(parts->index(i));
    if (id_ == Id::Lit_ArrayLhsClose) {
      key = new compound_word(parts->slice(1, i), nullptr);
      value = new compound_word(parts->slice(i + 1), nullptr);
      return (new Tuple2<syntax_asdl::compound_word*, syntax_asdl::compound_word*>(key, value));
    }
  }
  return nullptr;
}

Tuple2<id_kind_asdl::Kind_t, syntax_asdl::Token*>* KeywordToken(syntax_asdl::compound_word* w) {
  syntax_asdl::Token* no_token;
  Tuple2<id_kind_asdl::Kind_t, syntax_asdl::Token*>* err;
  syntax_asdl::word_part_t* UP_part0;
  int token_type;
  id_kind_asdl::Kind_t token_kind;

  no_token = nullptr;
  err = (new Tuple2<id_kind_asdl::Kind_t, syntax_asdl::Token*>(Kind::Undefined, no_token));
  if (len(w->parts) != 1) {
    return err;
  }
  UP_part0 = w->parts->index(0);
  token_type = _LiteralId(UP_part0);
  if (token_type == Id::Undefined_Tok) {
    return err;
  }
  token_kind = lookup::LookupKind(token_type);
  if (token_kind == Kind::ControlFlow) {
    word_part__Literal* part0 = static_cast<word_part__Literal*>(UP_part0);
    return (new Tuple2<id_kind_asdl::Kind_t, syntax_asdl::Token*>(token_kind, part0->token));
  }
  return err;
}

syntax_asdl::Token* LiteralToken(syntax_asdl::word_t* UP_w) {
  syntax_asdl::word_part_t* UP_part0;

  compound_word* w = static_cast<compound_word*>(UP_w);
  if (len(w->parts) != 1) {
    return nullptr;
  }
  UP_part0 = w->parts->index(0);
  if (UP_part0->tag_() == word_part_e::Literal) {
    word_part__Literal* part0 = static_cast<word_part__Literal*>(UP_part0);
    return part0->token;
  }
  return nullptr;
}

int ArithId(syntax_asdl::word_t* w) {
  if (w->tag_() == word_e::Token) {
    Token* tok = static_cast<Token*>(w);
    return tok->id;
  }
  return Id::Word_Compound;
}

int BoolId(syntax_asdl::word_t* w) {
  syntax_asdl::word_t* UP_w;
  int token_type;
  id_kind_asdl::Kind_t token_kind;

  UP_w = w;
  switch (w->tag_()) {
    case word_e::String: {
      word__String* w = static_cast<word__String*>(UP_w);
      return w->id;
    }
      break;
    case word_e::Token: {
      Token* tok = static_cast<Token*>(UP_w);
      return tok->id;
    }
      break;
    case word_e::Compound: {
      compound_word* w = static_cast<compound_word*>(UP_w);
      if (len(w->parts) != 1) {
        return Id::Word_Compound;
      }
      token_type = _LiteralId(w->parts->index(0));
      if (token_type == Id::Undefined_Tok) {
        return Id::Word_Compound;
      }
      if ((token_type == Id::KW_Bang || token_type == Id::Lit_DRightBracket)) {
        return token_type;
      }
      token_kind = lookup::LookupKind(token_type);
      if ((token_kind == Kind::BoolUnary || token_kind == Kind::BoolBinary)) {
        return token_type;
      }
      return Id::Word_Compound;
    }
      break;
    default: {
      throw new AssertionError();
    }
  }
}

int CommandId(syntax_asdl::word_t* w) {
  syntax_asdl::word_t* UP_w;
  int token_type;
  id_kind_asdl::Kind_t token_kind;

  UP_w = w;
  switch (w->tag_()) {
    case word_e::Token: {
      Token* tok = static_cast<Token*>(UP_w);
      return tok->id;
    }
      break;
    case word_e::Compound: {
      compound_word* w = static_cast<compound_word*>(UP_w);
      if (len(w->parts) != 1) {
        return Id::Word_Compound;
      }
      token_type = _LiteralId(w->parts->index(0));
      if (token_type == Id::Undefined_Tok) {
        return Id::Word_Compound;
      }
      else {
        if ((token_type == Id::Lit_LBrace || token_type == Id::Lit_RBrace || token_type == Id::Lit_Equals || token_type == Id::ControlFlow_Return)) {
          return token_type;
        }
      }
      token_kind = lookup::LookupKind(token_type);
      if (token_kind == Kind::KW) {
        return token_type;
      }
      return Id::Word_Compound;
    }
      break;
    default: {
      throw new AssertionError();
    }
  }
}

id_kind_asdl::Kind_t CommandKind(syntax_asdl::word_t* w) {
  if (w->tag_() == word_e::Token) {
    Token* tok = static_cast<Token*>(w);
    return lookup::LookupKind(tok->id);
  }
  return Kind::Word;
}

bool IsVarSub(syntax_asdl::word_t* w) {
  return false;
}

int SpanForLhsExpr(syntax_asdl::sh_lhs_expr__Name* node) {
  if (len(node->spids)) {
    return node->spids->index(0);
  }
  else {
    return runtime::NO_SPID;
  }
}

int SpanIdFromError(error::_ErrorWithLocation* error) {
  if (error->span_id != runtime::NO_SPID) {
    return error->span_id;
  }
  if (error->token) {
    return error->token->span_id;
  }
  if (error->part) {
    return LeftMostSpanForPart(error->part);
  }
  if (error->word) {
    return LeftMostSpanForWord(error->word);
  }
  return runtime::NO_SPID;
}

Str* Pretty(syntax_asdl::word_t* w) {
  syntax_asdl::word_t* UP_w;

  UP_w = w;
  if (w->tag_() == word_e::String) {
    word__String* w = static_cast<word__String*>(UP_w);
    if (w->id == Id::Eof_Real) {
      return str147;
    }
    else {
      return repr(w->s);
    }
  }
  else {
    return str(w);
  }
}

}  // define namespace word_

namespace parse {  // define

ParseError::ParseError(Str* msg, int type_, syntax_asdl::Token* tok) {
  this->msg = msg;
  this->type = type_;
  this->tok = tok;
}

PNode::PNode(int typ, syntax_asdl::Token* tok, List<parse::PNode*>* children) {
  this->typ = typ;
  this->tok = tok;
  this->children = children;
}

Parser::Parser(grammar::Grammar* grammar) {
  this->grammar = grammar;
}

void Parser::setup(int start) {
  parse::PNode* newnode;

  newnode = new PNode(start, nullptr, new List<parse::PNode*>());
  this->stack = new List<Tuple3<Tuple2<List<List<Tuple2<int, int>*>*>*, Dict<int, int>*>*, int, parse::PNode*>*>({(new Tuple3<Tuple2<List<List<Tuple2<int, int>*>*>*, Dict<int, int>*>*, int, parse::PNode*>(this->grammar->dfas->index(start), 0, newnode))});
  this->rootnode = nullptr;
}

bool Parser::addtoken(int typ, syntax_asdl::Token* opaque, int ilabel) {
  Tuple2<List<List<Tuple2<int, int>*>*>*, Dict<int, int>*>* dfa;
  int state;
  List<List<Tuple2<int, int>*>*>* states;
  List<Tuple2<int, int>*>* arcs;
  bool found;
  int ilab;
  int newstate;
  int t;
  Tuple2<List<List<Tuple2<int, int>*>*>*, Dict<int, int>*>* itsdfa;
  Dict<int, int>* itsfirst;
  bool found2;
  int left;
  int right;

  while (true) {
    Tuple3<Tuple2<List<List<Tuple2<int, int>*>*>*, Dict<int, int>*>*, int, parse::PNode*>* tup0 = this->stack->index(-1);
    dfa = tup0->at0();
    state = tup0->at1();
    Tuple2<List<List<Tuple2<int, int>*>*>*, Dict<int, int>*>* tup1 = dfa;
    states = tup1->at0();
    arcs = states->index(state);
    found = false;
    for (ListIter<Tuple2<int, int>*> it(arcs); !it.Done(); it.Next()) {
      Tuple2<int, int>* tup2 = it.Value();
      ilab = tup2->at0();
      newstate = tup2->at1();
      t = this->grammar->labels->index(ilab);
      if (ilabel == ilab) {
        this->shift(typ, opaque, newstate);
        state = newstate;
        while (states->index(state) == new List<Tuple2<int, int>*>({(new Tuple2<int, int>(0, state))})) {
          this->pop();
          if (len(this->stack) == 0) {
            return true;
          }
          Tuple3<Tuple2<List<List<Tuple2<int, int>*>*>*, Dict<int, int>*>*, int, parse::PNode*>* tup3 = this->stack->index(-1);
          dfa = tup3->at0();
          state = tup3->at1();
          Tuple2<List<List<Tuple2<int, int>*>*>*, Dict<int, int>*>* tup4 = dfa;
          states = tup4->at0();
        }
        return false;
      }
      else {
        if (t >= 256) {
          itsdfa = this->grammar->dfas->index(t);
          Tuple2<List<List<Tuple2<int, int>*>*>*, Dict<int, int>*>* tup5 = itsdfa;
          itsfirst = tup5->at1();
          if (dict_contains(itsfirst, ilabel)) {
            this->push(t, opaque, this->grammar->dfas->index(t), newstate);
            found = true;
            break;
          }
        }
      }
    }
    if (!found) {
      found2 = false;
      for (ListIter<Tuple2<int, int>*> it(arcs); !it.Done(); it.Next()) {
        Tuple2<int, int>* tup6 = it.Value();
        left = tup6->at0();
        right = tup6->at1();
        if (left == 0 and right == state) {
          this->pop();
          if (len(this->stack) == 0) {
            throw new ParseError(str156, typ, opaque);
          }
          found2 = true;
        }
      }
      if (!found2) {
        throw new ParseError(str157, typ, opaque);
      }
    }
  }
}

void Parser::shift(int typ, syntax_asdl::Token* opaque, int newstate) {
  Tuple2<List<List<Tuple2<int, int>*>*>*, Dict<int, int>*>* dfa;
  parse::PNode* node;
  parse::PNode* newnode;

  Tuple3<Tuple2<List<List<Tuple2<int, int>*>*>*, Dict<int, int>*>*, int, parse::PNode*>* tup7 = this->stack->index(-1);
  dfa = tup7->at0();
  node = tup7->at2();
  newnode = new PNode(typ, opaque, nullptr);
  if (newnode != nullptr) {
    node->children->append(newnode);
  }
  (*this->stack)[-1] = (new Tuple3<Tuple2<List<List<Tuple2<int, int>*>*>*, Dict<int, int>*>*, int, parse::PNode*>(dfa, newstate, node));
}

void Parser::push(int typ, syntax_asdl::Token* opaque, Tuple2<List<List<Tuple2<int, int>*>*>*, Dict<int, int>*>* newdfa, int newstate) {
  Tuple2<List<List<Tuple2<int, int>*>*>*, Dict<int, int>*>* dfa;
  parse::PNode* node;
  parse::PNode* newnode;

  Tuple3<Tuple2<List<List<Tuple2<int, int>*>*>*, Dict<int, int>*>*, int, parse::PNode*>* tup8 = this->stack->index(-1);
  dfa = tup8->at0();
  node = tup8->at2();
  newnode = new PNode(typ, opaque, new List<parse::PNode*>());
  (*this->stack)[-1] = (new Tuple3<Tuple2<List<List<Tuple2<int, int>*>*>*, Dict<int, int>*>*, int, parse::PNode*>(dfa, newstate, node));
  this->stack->append((new Tuple3<Tuple2<List<List<Tuple2<int, int>*>*>*, Dict<int, int>*>*, int, parse::PNode*>(newdfa, 0, newnode)));
}

void Parser::pop() {
  parse::PNode* newnode;
  parse::PNode* node;

  Tuple3<Tuple2<List<List<Tuple2<int, int>*>*>*, Dict<int, int>*>*, int, parse::PNode*>* tup9 = this->stack->pop();
  newnode = tup9->at2();
  if (newnode != nullptr) {
    if (len(this->stack)) {
      Tuple3<Tuple2<List<List<Tuple2<int, int>*>*>*, Dict<int, int>*>*, int, parse::PNode*>* tup10 = this->stack->index(-1);
      node = tup10->at2();
      node->children->append(newnode);
    }
    else {
      this->rootnode = newnode;
    }
  }
}

}  // define namespace parse

namespace lexer {  // define
using syntax_asdl::Token;
using syntax_asdl::line_span;
using types_asdl::lex_mode_t;
using id_kind_asdl::Id_t;
namespace Id = id_kind_asdl::Id;
using id_kind_asdl::Kind_t;

LineLexer::LineLexer(Str* line, alloc::Arena* arena) {
  this->arena = arena;
  this->arena_skip = false;
  this->last_span_id = runtime::NO_SPID;
  this->Reset(line, -1, 0);
}

void LineLexer::Reset(Str* line, int line_id, int line_pos) {
  this->line = line;
  this->line_id = line_id;
  this->line_pos = line_pos;
}

bool LineLexer::MaybeUnreadOne() {
  if (this->line_pos == 0) {
    return false;
  }
  else {
    this->line_pos -= 1;
    this->arena_skip = true;
    return true;
  }
}

int LineLexer::GetSpanIdForEof() {
  int line_id;

  if (this->line_id == -1) {
    line_id = this->arena->AddLine(str159, 0);
  }
  else {
    line_id = this->line_id;
  }
  return this->arena->AddLineSpan(line_id, this->line_pos, 0);
}

syntax_asdl::Token* LineLexer::LookAhead(types_asdl::lex_mode_t lex_mode) {
  int pos;
  int n;
  syntax_asdl::Token* t;
  int tok_type;
  int end_pos;
  Str* tok_val;

  pos = this->line_pos;
  n = len(this->line);
  while (true) {
    if (pos == n) {
      t = new Token(Id::Unknown_Tok, str160, runtime::NO_SPID);
      return t;
    }
    Tuple2<int, int>* tup0 = match::OneToken(lex_mode, this->line, pos);
    tok_type = tup0->at0();
    end_pos = tup0->at1();
    tok_val = this->line->slice(pos, end_pos);
    if (tok_type != Id::WS_Space) {
      break;
    }
    pos = end_pos;
  }
  return new Token(tok_type, tok_val, runtime::NO_SPID);
}

syntax_asdl::Token* LineLexer::Read(types_asdl::lex_mode_t lex_mode) {
  Str* line;
  int line_pos;
  int tok_type;
  int end_pos;
  Str* tok_val;
  int span_id;
  syntax_asdl::Token* t;

  line = this->line;
  line_pos = this->line_pos;
  Tuple2<int, int>* tup1 = match::OneToken(lex_mode, line, line_pos);
  tok_type = tup1->at0();
  end_pos = tup1->at1();
  if (tok_type == Id::Eol_Tok) {
    return new Token(tok_type, str161, runtime::NO_SPID);
  }
  tok_val = line->slice(line_pos, end_pos);
  if (this->arena_skip) {
    span_id = this->last_span_id;
    this->arena_skip = false;
  }
  else {
    span_id = this->arena->AddLineSpan(this->line_id, line_pos, len(tok_val));
    this->last_span_id = span_id;
  }
  t = new Token(tok_type, tok_val, span_id);
  this->line_pos = end_pos;
  return t;
}

Lexer::Lexer(lexer::LineLexer* line_lexer, reader::_Reader* line_reader) {
  this->line_lexer = line_lexer;
  this->line_reader = line_reader;
  this->line_id = -1;
  this->translation_stack = new List<Tuple2<int, int>*>();
  this->emit_comp_dummy = false;
}

void Lexer::ResetInputObjects() {
  this->line_lexer->Reset(str162, -1, 0);
}

bool Lexer::MaybeUnreadOne() {
  return this->line_lexer->MaybeUnreadOne();
}

syntax_asdl::Token* Lexer::LookAhead(types_asdl::lex_mode_t lex_mode) {
  return this->line_lexer->LookAhead(lex_mode);
}

void Lexer::EmitCompDummy() {
  this->emit_comp_dummy = true;
}

void Lexer::PushHint(int old_id, int new_id) {
  this->translation_stack->append((new Tuple2<int, int>(old_id, new_id)));
}

syntax_asdl::Token* Lexer::_Read(types_asdl::lex_mode_t lex_mode) {
  syntax_asdl::Token* t;
  int line_id;
  Str* line;
  int line_pos;
  int span_id;
  int id_;
  int old_id;
  int new_id;

  t = this->line_lexer->Read(lex_mode);
  if (t->id == Id::Eol_Tok) {
    Tuple3<int, Str*, int>* tup2 = this->line_reader->GetLine();
    line_id = tup2->at0();
    line = tup2->at1();
    line_pos = tup2->at2();
    if (line == nullptr) {
      span_id = this->line_lexer->GetSpanIdForEof();
      if (this->emit_comp_dummy) {
        id_ = Id::Lit_CompDummy;
        this->emit_comp_dummy = false;
      }
      else {
        id_ = Id::Eof_Real;
      }
      t = new Token(id_, str163, span_id);
      return t;
    }
    this->line_lexer->Reset(line, line_id, line_pos);
    t = this->line_lexer->Read(lex_mode);
  }
  if (len(this->translation_stack)) {
    Tuple2<int, int>* tup3 = this->translation_stack->index(-1);
    old_id = tup3->at0();
    new_id = tup3->at1();
    if (t->id == old_id) {
      this->translation_stack->pop();
      t->id = new_id;
    }
  }
  return t;
}

syntax_asdl::Token* Lexer::Read(types_asdl::lex_mode_t lex_mode) {
  syntax_asdl::Token* t;

  while (true) {
    t = this->_Read(lex_mode);
    if (t->id != Id::Ignored_LineCont) {
      break;
    }
  }
  return t;
}

}  // define namespace lexer

namespace word_parse {  // define
namespace Id = id_kind_asdl::Id;
using id_kind_asdl::Id_t;
using id_kind_asdl::Id_str;
using id_kind_asdl::Kind;
using types_asdl::lex_mode_t;
using types_asdl::lex_mode_e;
using syntax_asdl::Token;
using syntax_asdl::speck;
using syntax_asdl::double_quoted;
using syntax_asdl::single_quoted;
using syntax_asdl::simple_var_sub;
using syntax_asdl::braced_var_sub;
using syntax_asdl::command_sub;
using syntax_asdl::sh_array_literal;
using syntax_asdl::arith_expr_t;
namespace bracket_op = syntax_asdl::bracket_op;
using syntax_asdl::bracket_op_t;
namespace suffix_op = syntax_asdl::suffix_op;
using syntax_asdl::suffix_op_t;
using syntax_asdl::suffix_op__Slice;
using syntax_asdl::suffix_op__PatSub;
namespace word = syntax_asdl::word;
namespace word_e = syntax_asdl::word_e;
using syntax_asdl::word_t;
using syntax_asdl::compound_word;
namespace word_part = syntax_asdl::word_part;
namespace word_part_e = syntax_asdl::word_part_e;
using syntax_asdl::word_part_t;
using syntax_asdl::word_part__Literal;
using syntax_asdl::word_part__ArithSub;
using syntax_asdl::word_part__ExtGlob;
using syntax_asdl::word_part__ExprSub;
namespace command = syntax_asdl::command;
using syntax_asdl::command_t;
using syntax_asdl::command__ForExpr;
using syntax_asdl::command__Proc;
using syntax_asdl::command__Func;
using syntax_asdl::expr_t;
namespace source = syntax_asdl::source;
using syntax_asdl::arg_list;
using mylib::NewStr;
List<id_kind_asdl::Kind_t>* KINDS_THAT_END_WORDS = new List<id_kind_asdl::Kind_t>({Kind::Eof, Kind::WS, Kind::Op, Kind::Right});

syntax_asdl::word_t* WordEmitter::ReadWord(types_asdl::lex_mode_t lex_mode) {
  throw new NotImplementedError();
}

WordParser::WordParser(parse_lib::ParseContext* parse_ctx, lexer::Lexer* lexer, reader::_Reader* line_reader) {
  this->parse_ctx = parse_ctx;
  this->lexer = lexer;
  this->line_reader = line_reader;
  this->parse_opts = parse_ctx->parse_opts;
  this->Reset();
}

void WordParser::Init(types_asdl::lex_mode_t lex_mode) {
  this->next_lex_mode = lex_mode;
}

void WordParser::Reset() {
  this->cur_token = nullptr;
  this->token_kind = Kind::Undefined;
  this->token_type = Id::Undefined_Tok;
  this->next_lex_mode = lex_mode_e::ShCommand;
  this->cursor = nullptr;
  this->cursor_was_newline = false;
  this->buffered_word = nullptr;
}

syntax_asdl::Token* WordParser::_Peek() {
  if (this->next_lex_mode != lex_mode_e::Undefined) {
    this->cur_token = this->lexer->Read(this->next_lex_mode);
    this->token_type = this->cur_token->id;
    this->token_kind = lookup::LookupKind(this->token_type);
    this->parse_ctx->trail->AppendToken(this->cur_token);
    this->next_lex_mode = lex_mode_e::Undefined;
  }
  return this->cur_token;
}

void WordParser::_Next(types_asdl::lex_mode_t lex_mode) {
  this->next_lex_mode = lex_mode;
}

syntax_asdl::word_t* WordParser::_ReadVarOpArg(types_asdl::lex_mode_t arg_lex_mode) {
  return this->_ReadVarOpArg3(arg_lex_mode, Id::Undefined_Tok, true);
}

syntax_asdl::word_t* WordParser::_ReadVarOpArg3(types_asdl::lex_mode_t arg_lex_mode, int eof_type, bool empty_ok) {
  syntax_asdl::compound_word* w;

  this->_Next(arg_lex_mode);
  this->_Peek();
  w = this->_ReadCompoundWord3(arg_lex_mode, eof_type, empty_ok);
  if (len(w->parts) == 0 and arg_lex_mode == lex_mode_e::VSub_ArgDQ and empty_ok) {
    return new word::Empty();
  }
  return w;
}

syntax_asdl::suffix_op__Slice* WordParser::_ReadSliceVarOp() {
  syntax_asdl::arith_expr_t* begin;
  syntax_asdl::arith_expr_t* no_length;
  syntax_asdl::arith_expr_t* length;

  this->_Next(lex_mode_e::Arith);
  this->_Peek();
  if (this->token_type == Id::Arith_Colon) {
    begin = nullptr;
  }
  else {
    begin = this->_ReadArithExpr();
  }
  if (this->token_type == Id::Arith_RBrace) {
    no_length = nullptr;
    return new suffix_op::Slice(begin, no_length);
  }
  if (this->token_type == Id::Arith_Colon) {
    this->_Next(lex_mode_e::Arith);
    length = this->_ReadArithExpr();
    return new suffix_op::Slice(begin, length);
  }
  p_die(fmt0(this->cur_token->val), this->cur_token);
}

syntax_asdl::suffix_op__PatSub* WordParser::_ReadPatSubVarOp(types_asdl::lex_mode_t lex_mode) {
  syntax_asdl::word_t* UP_pat;
  bool ok;
  Str* s;
  bool quoted;
  syntax_asdl::word_part__Literal* p;
  int replace_mode;
  syntax_asdl::word_part_t* UP_first_part;
  int lit_id;
  syntax_asdl::word_t* replace;

  UP_pat = this->_ReadVarOpArg3(lex_mode, Id::Lit_Slash, false);
  compound_word* pat = static_cast<compound_word*>(UP_pat);
  if (len(pat->parts) == 1) {
    Tuple3<bool, Str*, bool>* tup0 = word_::StaticEval(pat);
    ok = tup0->at0();
    s = tup0->at1();
    quoted = tup0->at2();
    if (ok and str_equals(s, str165) and !quoted) {
      this->_Next(lex_mode);
      this->_Peek();
      p = new word_part::Literal(this->cur_token);
      pat->parts->append(p);
    }
  }
  if (len(pat->parts) == 0) {
    p_die(fmt2(), this->cur_token);
  }
  replace_mode = Id::Undefined_Tok;
  UP_first_part = pat->parts->index(0);
  if (UP_first_part->tag_() == word_part_e::Literal) {
    word_part__Literal* first_part = static_cast<word_part__Literal*>(UP_first_part);
    lit_id = first_part->token->id;
    if ((lit_id == Id::Lit_Slash || lit_id == Id::Lit_Pound || lit_id == Id::Lit_Percent)) {
      pat->parts->pop(0);
      replace_mode = lit_id;
    }
  }
  if (this->token_type == Id::Right_DollarBrace) {
    return new suffix_op::PatSub(pat, nullptr, replace_mode);
  }
  if (this->token_type == Id::Lit_Slash) {
    replace = this->_ReadVarOpArg(lex_mode);
    this->_Peek();
    if (this->token_type != Id::Right_DollarBrace) {
      p_die(fmt3(NewStr(Id_str(this->token_type))), this->cur_token);
    }
    return new suffix_op::PatSub(pat, replace, replace_mode);
  }
  p_die(fmt4(this->cur_token->val), this->cur_token);
}

syntax_asdl::bracket_op_t* WordParser::_ReadSubscript() {
  syntax_asdl::Token* t2;
  syntax_asdl::bracket_op_t* op;
  syntax_asdl::arith_expr_t* anode;

  t2 = this->lexer->LookAhead(lex_mode_e::Arith);
  if ((t2->id == Id::Lit_At || t2->id == Id::Arith_Star)) {
    op = new bracket_op::WholeArray(t2->id);
    this->_Next(lex_mode_e::Arith);
    this->_Peek();
    this->_Next(lex_mode_e::Arith);
    this->_Peek();
  }
  else {
    this->_Next(lex_mode_e::Arith);
    anode = this->_ReadArithExpr();
    op = new bracket_op::ArrayIndex(anode);
  }
  if (this->token_type != Id::Arith_RBracket) {
    p_die(fmt5(this->cur_token->val), this->cur_token);
  }
  this->_Next(lex_mode_e::VSub_2);
  this->_Peek();
  return op;
}

syntax_asdl::braced_var_sub* WordParser::_ParseVarOf() {
  syntax_asdl::Token* name_token;
  syntax_asdl::bracket_op_t* bracket_op;
  syntax_asdl::braced_var_sub* part;

  this->_Peek();
  name_token = this->cur_token;
  this->_Next(lex_mode_e::VSub_2);
  this->_Peek();
  if (this->token_type == Id::VOp2_LBracket) {
    bracket_op = this->_ReadSubscript();
  }
  else {
    bracket_op = nullptr;
  }
  part = new braced_var_sub();
  part->token = name_token;
  part->bracket_op = bracket_op;
  return part;
}

syntax_asdl::braced_var_sub* WordParser::_ParseVarExpr(types_asdl::lex_mode_t arg_lex_mode) {
  return _ParseVarExpr(arg_lex_mode, false);
}

syntax_asdl::braced_var_sub* WordParser::_ParseVarExpr(types_asdl::lex_mode_t arg_lex_mode, bool allow_query) {
  syntax_asdl::braced_var_sub* part;
  id_kind_asdl::Kind_t op_kind;
  int op_id;
  syntax_asdl::word_t* arg_word;
  int op_spid;
  syntax_asdl::suffix_op__PatSub* patsub_op;
  suffix_op_t* temp;

  part = this->_ParseVarOf();
  this->_Peek();
  if (this->token_type == Id::Right_DollarBrace) {
    return part;
  }
  op_kind = this->token_kind;
  if (op_kind == Kind::VTest) {
    op_id = this->token_type;
    arg_word = this->_ReadVarOpArg(arg_lex_mode);
    if (this->token_type != Id::Right_DollarBrace) {
      p_die(fmt6(this->cur_token->val, str171), this->cur_token);
    }
    part->suffix_op = new suffix_op::Unary(op_id, arg_word);
  }
  else {
    if (op_kind == Kind::VOp0) {
      op_id = this->token_type;
      part->suffix_op = new suffix_op::Nullary(op_id);
      this->_Next(lex_mode_e::VSub_2);
      this->_Peek();
    }
    else {
      if (op_kind == Kind::VOp1) {
        op_id = this->token_type;
        arg_word = this->_ReadVarOpArg(arg_lex_mode);
        if (this->token_type != Id::Right_DollarBrace) {
          p_die(fmt7(this->cur_token->val, str173), this->cur_token);
        }
        part->suffix_op = new suffix_op::Unary(op_id, arg_word);
      }
      else {
        if (op_kind == Kind::VOp2) {
          if (this->token_type == Id::VOp2_Slash) {
            op_spid = this->cur_token->span_id;
            patsub_op = this->_ReadPatSubVarOp(arg_lex_mode);
            patsub_op->spids->append(op_spid);
            temp = static_cast<suffix_op_t*>(patsub_op);
            part->suffix_op = temp;
          }
          else {
            if (this->token_type == Id::VOp2_Colon) {
              part->suffix_op = this->_ReadSliceVarOp();
              if (this->token_type != Id::Arith_RBrace) {
                p_die(fmt8(this->cur_token->val), this->cur_token);
              }
            }
            else {
              p_die(fmt9(this->cur_token->val, str176), this->cur_token);
            }
          }
        }
        else {
          if (op_kind == Kind::VOp3) {
            if (allow_query) {
              op_id = this->token_type;
              part->suffix_op = new suffix_op::Nullary(op_id);
              this->_Next(lex_mode_e::VSub_2);
              this->_Peek();
            }
            else {
              p_die(fmt10(this->cur_token->val, str178), this->cur_token);
            }
          }
        }
      }
    }
  }
  if ((this->token_type != Id::Right_DollarBrace && this->token_type != Id::Arith_RBrace)) {
    p_die(fmt11(this->cur_token->val), this->cur_token);
  }
  return part;
}

Tuple2<syntax_asdl::braced_var_sub*, syntax_asdl::Token*>* WordParser::ReadBracedVarSub(syntax_asdl::Token* left_token) {
  syntax_asdl::braced_var_sub* part;
  syntax_asdl::Token* last_token;

  part = this->_ReadBracedVarSub(left_token, false);
  last_token = this->cur_token;
  return (new Tuple2<syntax_asdl::braced_var_sub*, syntax_asdl::Token*>(part, last_token));
}

syntax_asdl::braced_var_sub* WordParser::_ReadBracedVarSub(syntax_asdl::Token* left_token, bool d_quoted) {
  types_asdl::lex_mode_t arg_lex_mode;
  int ty;
  syntax_asdl::Token* t;
  syntax_asdl::braced_var_sub* part;
  int right_spid;

  if (d_quoted) {
    arg_lex_mode = lex_mode_e::VSub_ArgDQ;
  }
  else {
    arg_lex_mode = lex_mode_e::VSub_ArgUnquoted;
  }
  this->_Next(lex_mode_e::VSub_1);
  this->_Peek();
  ty = this->token_type;
  if (ty == Id::VSub_Pound) {
    t = this->lexer->LookAhead(lex_mode_e::VSub_1);
    if ((t->id != Id::Unknown_Tok && t->id != Id::Right_DollarBrace)) {
      this->_Next(lex_mode_e::VSub_1);
      part = this->_ParseVarOf();
      this->_Peek();
      if (this->token_type != Id::Right_DollarBrace) {
        p_die(fmt12(this->cur_token->val), this->cur_token);
      }
      part->prefix_op = new speck(ty, this->cur_token->span_id);
    }
    else {
      part = this->_ParseVarExpr(arg_lex_mode);
    }
  }
  else {
    if (ty == Id::VSub_Bang) {
      t = this->lexer->LookAhead(lex_mode_e::VSub_1);
      if ((t->id != Id::Unknown_Tok && t->id != Id::Right_DollarBrace)) {
        this->_Next(lex_mode_e::VSub_1);
        part = this->_ParseVarExpr(arg_lex_mode, true);
        part->prefix_op = new speck(ty, this->cur_token->span_id);
      }
      else {
        part = this->_ParseVarExpr(arg_lex_mode);
      }
    }
    else {
      if (this->token_kind == Kind::VSub) {
        part = this->_ParseVarExpr(arg_lex_mode);
      }
      else {
        p_die(fmt13(this->cur_token->val), this->cur_token);
      }
    }
  }
  part->spids->append(left_token->span_id);
  right_spid = this->cur_token->span_id;
  part->spids->append(right_spid);
  return part;
}

syntax_asdl::single_quoted* WordParser::_ReadSingleQuoted(types_asdl::lex_mode_t lex_mode) {
  syntax_asdl::Token* left_token;
  List<syntax_asdl::Token*>* tokens;
  syntax_asdl::single_quoted* node;

  left_token = this->cur_token;
  tokens = new List<syntax_asdl::Token*>();
  this->ReadSingleQuoted(lex_mode, left_token, tokens, false);
  node = new single_quoted(left_token, tokens);
  node->spids->append(left_token->span_id);
  node->spids->append(this->cur_token->span_id);
  return node;
}

syntax_asdl::Token* WordParser::ReadSingleQuoted(types_asdl::lex_mode_t lex_mode, syntax_asdl::Token* left_token, List<syntax_asdl::Token*>* tokens, bool no_backslashes) {
  bool done;
  syntax_asdl::Token* tok;

  done = false;
  while (!done) {
    this->_Next(lex_mode);
    this->_Peek();
    if ((this->token_kind == Kind::Lit || this->token_kind == Kind::Char)) {
      tok = this->cur_token;
      if (no_backslashes and str_contains(tok->val, str182)) {
        p_die(fmt14(), tok);
      }
      tokens->append(tok);
    }
    else {
      if (this->token_kind == Kind::Eof) {
        p_die(fmt15(), left_token);
      }
      else {
        if (this->token_kind == Kind::Right) {
          done = true;
        }
        else {
          throw new AssertionError();
        }
      }
    }
  }
  return this->cur_token;
}

syntax_asdl::word_part_t* WordParser::_ReadDoubleQuotedLeftParts() {
  if ((this->token_type == Id::Left_DollarParen || this->token_type == Id::Left_Backtick)) {
    return this->_ReadCommandSub(this->token_type);
  }
  if (this->token_type == Id::Left_DollarBrace) {
    return this->_ReadBracedVarSub(this->cur_token, true);
  }
  if (this->token_type == Id::Left_DollarDParen) {
    return this->_ReadArithSub();
  }
  if (this->token_type == Id::Left_DollarBracket) {
    return this->_ReadExprSub(lex_mode_e::DQ);
  }
  throw new AssertionError();
}

syntax_asdl::word_part_t* WordParser::_ReadLeftParts() {
  if (this->token_type == Id::Left_DoubleQuote) {
    return this->_ReadDoubleQuoted();
  }
  if (this->token_type == Id::Left_DollarDoubleQuote) {
    return this->_ReadDoubleQuoted();
  }
  if (this->token_type == Id::Left_SingleQuoteRaw) {
    return this->_ReadSingleQuoted(lex_mode_e::SQ_Raw);
  }
  if (this->token_type == Id::Left_SingleQuoteC) {
    return this->_ReadSingleQuoted(lex_mode_e::SQ_C);
  }
  if ((this->token_type == Id::Left_DollarParen || this->token_type == Id::Left_Backtick || this->token_type == Id::Left_ProcSubIn || this->token_type == Id::Left_ProcSubOut)) {
    return this->_ReadCommandSub(this->token_type);
  }
  if (this->token_type == Id::Left_DollarBrace) {
    return this->_ReadBracedVarSub(this->cur_token, false);
  }
  if (this->token_type == Id::Left_DollarDParen) {
    return this->_ReadArithSub();
  }
  if (this->token_type == Id::Left_DollarBracket) {
    return this->_ReadExprSub(lex_mode_e::ShCommand);
  }
  throw new AssertionError();
}

syntax_asdl::word_part__ExtGlob* WordParser::_ReadExtGlob() {
  syntax_asdl::Token* left_token;
  List<syntax_asdl::word_t*>* arms;
  List<int>* spids;
  bool read_word;
  syntax_asdl::compound_word* w;
  syntax_asdl::word_part__ExtGlob* part;

  left_token = this->cur_token;
  arms = new List<syntax_asdl::word_t*>();
  spids = new List<int>();
  spids->append(left_token->span_id);
  this->lexer->PushHint(Id::Op_RParen, Id::Right_ExtGlob);
  this->_Next(lex_mode_e::ExtGlob);
  read_word = false;
  while (true) {
    this->_Peek();
    if (this->token_type == Id::Right_ExtGlob) {
      if (!read_word) {
        arms->append(new compound_word());
      }
      spids->append(this->cur_token->span_id);
      break;
    }
    else {
      if (this->token_type == Id::Op_Pipe) {
        if (!read_word) {
          arms->append(new compound_word());
        }
        read_word = false;
        this->_Next(lex_mode_e::ExtGlob);
      }
      else {
        if ((this->token_kind == Kind::Lit || this->token_kind == Kind::Left || this->token_kind == Kind::VSub || this->token_kind == Kind::ExtGlob)) {
          w = this->_ReadCompoundWord(lex_mode_e::ExtGlob);
          arms->append(w);
          read_word = true;
        }
        else {
          if (this->token_kind == Kind::Eof) {
            p_die(fmt16(), left_token);
          }
          else {
            throw new AssertionError();
          }
        }
      }
    }
  }
  part = new word_part::ExtGlob(left_token, arms);
  part->spids->extend(spids);
  return part;
}

void WordParser::_ReadLikeDQ(syntax_asdl::Token* left_dq_token, List<syntax_asdl::word_part_t*>* out_parts) {
  bool done;
  syntax_asdl::word_part_t* part;

  done = false;
  while (!done) {
    this->_Next(lex_mode_e::DQ);
    this->_Peek();
    if (this->token_kind == Kind::Lit) {
      if (this->token_type == Id::Lit_EscapedChar) {
        part = new word_part::EscapedLiteral(this->cur_token);
      }
      else {
        part = new word_part::Literal(this->cur_token);
      }
      out_parts->append(part);
    }
    else {
      if (this->token_kind == Kind::Left) {
        part = this->_ReadDoubleQuotedLeftParts();
        out_parts->append(part);
      }
      else {
        if (this->token_kind == Kind::VSub) {
          part = new simple_var_sub(this->cur_token);
          out_parts->append(part);
        }
        else {
          if (this->token_kind == Kind::Right) {
            if (left_dq_token) {
              done = true;
            }
            else {
              out_parts->append(new word_part::Literal(this->cur_token));
            }
          }
          else {
            if (this->token_kind == Kind::Eof) {
              if (left_dq_token) {
                p_die(fmt17(), left_dq_token);
              }
              else {
                done = true;
              }
            }
            else {
              throw new AssertionError();
            }
          }
        }
      }
    }
  }
}

syntax_asdl::double_quoted* WordParser::_ReadDoubleQuoted() {
  syntax_asdl::Token* left_dq_token;
  List<syntax_asdl::word_part_t*>* parts;
  syntax_asdl::double_quoted* dq_part;

  left_dq_token = this->cur_token;
  parts = new List<syntax_asdl::word_part_t*>();
  this->_ReadLikeDQ(left_dq_token, parts);
  dq_part = new double_quoted(left_dq_token, parts);
  dq_part->spids->append(left_dq_token->span_id);
  dq_part->spids->append(this->cur_token->span_id);
  return dq_part;
}

syntax_asdl::Token* WordParser::ReadDoubleQuoted(syntax_asdl::Token* left_token, List<syntax_asdl::word_part_t*>* parts) {
  this->_ReadLikeDQ(left_token, parts);
  return this->cur_token;
}

syntax_asdl::command_sub* WordParser::_ReadCommandSub(int left_id) {
  syntax_asdl::Token* left_token;
  int left_spid;
  int right_id;
  cmd_parse::CommandParser* c_parser;
  syntax_asdl::command_t* node;
  int right_spid;
  List<Str*>* parts;
  Str* code_str;
  alloc::Arena* arena;
  reader::FileLineReader* line_reader;
  syntax_asdl::command_sub* cs_part;

  left_token = this->cur_token;
  left_spid = left_token->span_id;
  if ((left_id == Id::Left_DollarParen || left_id == Id::Left_ProcSubIn || left_id == Id::Left_ProcSubOut)) {
    this->_Next(lex_mode_e::ShCommand);
    right_id = Id::Eof_RParen;
    this->lexer->PushHint(Id::Op_RParen, right_id);
    c_parser = this->parse_ctx->MakeParserForCommandSub(this->line_reader, this->lexer, right_id);
    node = c_parser->ParseCommandSub();
    right_spid = c_parser->w_parser->cur_token->span_id;
  }
  else {
    if (left_id == Id::Left_Backtick and this->parse_ctx->one_pass_parse) {
      right_id = Id::Eof_Backtick;
      this->lexer->PushHint(Id::Left_Backtick, right_id);
      c_parser = this->parse_ctx->MakeParserForCommandSub(this->line_reader, this->lexer, right_id);
      node = c_parser->ParseCommandSub();
      right_spid = c_parser->w_parser->cur_token->span_id;
    }
    else {
      if (left_id == Id::Left_Backtick) {
        this->_Next(lex_mode_e::Backtick);
        parts = new List<Str*>();
        while (true) {
          this->_Peek();
          if (this->token_type == Id::Backtick_Quoted) {
            parts->append(this->cur_token->val->slice(1));
          }
          else {
            if (this->token_type == Id::Backtick_Other) {
              parts->append(this->cur_token->val);
            }
            else {
              if (this->token_type == Id::Backtick_Right) {
                break;
              }
              else {
                if (this->token_type == Id::Eof_Real) {
                  p_die(fmt18(), left_token);
                }
                else {
                  throw new AssertionError();
                }
              }
            }
          }
          this->_Next(lex_mode_e::Backtick);
        }
        right_spid = this->cur_token->span_id;
        code_str = str188->join(parts);
        arena = this->parse_ctx->arena;
        line_reader = reader::StringLineReader(code_str, arena);
        c_parser = this->parse_ctx->MakeOshParser(line_reader);
        arena->PushSource(new source::Backticks(left_spid, right_spid));
        try {
          node = c_parser->ParseCommandSub();
        }
        catch (std::exception) { }      }
      else {
        throw new AssertionError();
      }
    }
  }
  cs_part = new command_sub(left_token, node);
  cs_part->spids->append(left_spid);
  cs_part->spids->append(right_spid);
  return cs_part;
}

syntax_asdl::word_part__ExprSub* WordParser::_ReadExprSub(types_asdl::lex_mode_t lex_mode) {
  syntax_asdl::Token* left_token;
  syntax_asdl::expr_t* enode;
  syntax_asdl::word_part__ExprSub* node;

  left_token = this->cur_token;
  this->_Next(lex_mode_e::Expr);
  Tuple2<syntax_asdl::expr_t*, syntax_asdl::Token*>* tup1 = this->parse_ctx->ParseOilExpr(this->lexer, grammar_nt::oil_expr_sub);
  enode = tup1->at0();
  this->_Next(lex_mode);
  node = new word_part::ExprSub(left_token, enode);
  return node;
}

syntax_asdl::command_t* WordParser::ParseVarDecl(syntax_asdl::Token* kw_token) {
  syntax_asdl::command__VarDecl* enode;
  syntax_asdl::Token* last_token;

  this->_Next(lex_mode_e::Expr);
  Tuple2<syntax_asdl::command__VarDecl*, syntax_asdl::Token*>* tup2 = this->parse_ctx->ParseVarDecl(kw_token, this->lexer);
  enode = tup2->at0();
  last_token = tup2->at1();
  if (last_token->id == Id::Op_RBrace) {
    last_token->id = Id::Lit_RBrace;
  }
  this->buffered_word = last_token;
  this->_Next(lex_mode_e::ShCommand);
  return enode;
}

syntax_asdl::command_t* WordParser::ParsePlaceMutation(syntax_asdl::Token* kw_token) {
  syntax_asdl::command__PlaceMutation* enode;
  syntax_asdl::Token* last_token;

  this->_Next(lex_mode_e::Expr);
  Tuple2<syntax_asdl::command__PlaceMutation*, syntax_asdl::Token*>* tup3 = this->parse_ctx->ParsePlaceMutation(kw_token, this->lexer);
  enode = tup3->at0();
  last_token = tup3->at1();
  if (last_token->id == Id::Op_RBrace) {
    last_token->id = Id::Lit_RBrace;
  }
  this->buffered_word = last_token;
  this->_Next(lex_mode_e::ShCommand);
  return enode;
}

syntax_asdl::expr_t* WordParser::ParseBareDecl() {
  syntax_asdl::expr_t* enode;
  syntax_asdl::Token* last_token;

  this->_Next(lex_mode_e::Expr);
  this->_Peek();
  Tuple2<syntax_asdl::expr_t*, syntax_asdl::Token*>* tup4 = this->parse_ctx->ParseOilExpr(this->lexer, grammar_nt::command_expr);
  enode = tup4->at0();
  last_token = tup4->at1();
  if (last_token->id == Id::Op_RBrace) {
    last_token->id = Id::Lit_RBrace;
  }
  this->buffered_word = last_token;
  this->_Next(lex_mode_e::ShCommand);
  return enode;
}

syntax_asdl::expr_t* WordParser::ParseCommandExpr() {
  syntax_asdl::expr_t* enode;
  syntax_asdl::Token* last_token;

  Tuple2<syntax_asdl::expr_t*, syntax_asdl::Token*>* tup5 = this->parse_ctx->ParseOilExpr(this->lexer, grammar_nt::command_expr);
  enode = tup5->at0();
  last_token = tup5->at1();
  if (last_token->id == Id::Op_RBrace) {
    last_token->id = Id::Lit_RBrace;
  }
  this->buffered_word = last_token;
  return enode;
}

void WordParser::ParseProc(syntax_asdl::command__Proc* node) {
  syntax_asdl::Token* last_token;

  this->_Next(lex_mode_e::ShCommand);
  this->_Peek();
  if (this->token_type != Id::Lit_Chars) {
    p_die(fmt24(this->cur_token->val), this->cur_token);
  }
  node->name = this->cur_token;
  last_token = this->parse_ctx->ParseProc(this->lexer, node);
  if (last_token->id == Id::Op_LBrace) {
    last_token->id = Id::Lit_LBrace;
  }
  this->buffered_word = last_token;
  this->_Next(lex_mode_e::ShCommand);
}

void WordParser::ParseFunc(syntax_asdl::command__Func* node) {
  syntax_asdl::Token* last_token;

  last_token = this->parse_ctx->ParseFunc(this->lexer, node);
  if (last_token->id == Id::Op_LBrace) {
    last_token->id = Id::Lit_LBrace;
  }
  this->buffered_word = last_token;
}

syntax_asdl::arith_expr_t* WordParser::_ReadArithExpr() {
  tdop::TdopParser* a_parser;
  syntax_asdl::arith_expr_t* anode;

  a_parser = new tdop::TdopParser(arith_parse::Spec(), this);
  anode = a_parser->Parse();
  return anode;
}

syntax_asdl::word_part__ArithSub* WordParser::_ReadArithSub() {
  int left_span_id;
  syntax_asdl::arith_expr_t* anode;
  int right_span_id;
  syntax_asdl::word_part__ArithSub* node;

  left_span_id = this->cur_token->span_id;
  this->lexer->PushHint(Id::Op_RParen, Id::Right_DollarDParen);
  this->_Next(lex_mode_e::Arith);
  anode = this->_ReadArithExpr();
  if (this->token_type != Id::Arith_RParen) {
    p_die(fmt25(this->cur_token->val), this->cur_token);
  }
  this->_Next(lex_mode_e::ShCommand);
  this->_Peek();
  if (this->token_type != Id::Right_DollarDParen) {
    p_die(fmt26(this->cur_token->val), this->cur_token);
  }
  right_span_id = this->cur_token->span_id;
  node = new word_part::ArithSub(anode);
  node->spids->append(left_span_id);
  node->spids->append(right_span_id);
  return node;
}

Tuple2<syntax_asdl::arith_expr_t*, int>* WordParser::ReadDParen() {
  syntax_asdl::arith_expr_t* anode;

  this->lexer->PushHint(Id::Op_RParen, Id::Op_DRightParen);
  this->_Next(lex_mode_e::Arith);
  anode = this->_ReadArithExpr();
  if (this->token_type != Id::Arith_RParen) {
    p_die(fmt27(this->cur_token->val), this->cur_token);
  }
  this->_Next(lex_mode_e::ShCommand);
  this->_Peek();
  if (this->token_type != Id::Op_DRightParen) {
    p_die(fmt28(this->cur_token->val), this->cur_token);
  }
  this->_Next(lex_mode_e::ShCommand);
  return (new Tuple2<syntax_asdl::arith_expr_t*, int>(anode, this->cur_token->span_id));
}

void WordParser::_NextNonSpace() {
  while (true) {
    this->_Next(lex_mode_e::Arith);
    this->_Peek();
    if ((this->token_kind != Kind::Ignored && this->token_kind != Kind::WS)) {
      break;
    }
  }
}

syntax_asdl::command__ForExpr* WordParser::ReadForExpression() {
  syntax_asdl::arith_expr_t* init_node;
  syntax_asdl::arith_expr_t* cond_node;
  syntax_asdl::arith_expr_t* update_node;
  syntax_asdl::command__ForExpr* node;

  this->_NextNonSpace();
  this->_Peek();
  if (this->token_type == Id::Arith_Semi) {
    init_node = nullptr;
  }
  else {
    init_node = this->_ReadArithExpr();
  }
  this->_NextNonSpace();
  this->_Peek();
  if (this->token_type == Id::Arith_Semi) {
    cond_node = nullptr;
  }
  else {
    cond_node = this->_ReadArithExpr();
  }
  this->_NextNonSpace();
  this->_Peek();
  if (this->token_type == Id::Arith_RParen) {
    update_node = nullptr;
  }
  else {
    update_node = this->_ReadArithExpr();
  }
  this->_NextNonSpace();
  this->_Peek();
  if (this->token_type != Id::Arith_RParen) {
    p_die(fmt29(this->cur_token->val), this->cur_token);
  }
  this->_Next(lex_mode_e::ShCommand);
  node = new command::ForExpr();
  node->init = init_node;
  node->cond = cond_node;
  node->update = update_node;
  return node;
}

syntax_asdl::word_part_t* WordParser::_ReadArrayLiteral() {
  syntax_asdl::Token* left_token;
  int paren_spid;
  word_parse::WordParser* w_parser;
  List<syntax_asdl::compound_word*>* words;
  syntax_asdl::word_t* w;
  List<syntax_asdl::word_t*>* no_words;
  syntax_asdl::sh_array_literal* node;
  Tuple2<syntax_asdl::compound_word*, syntax_asdl::compound_word*>* pair;
  syntax_asdl::compound_word* k;
  syntax_asdl::compound_word* v;
  List<syntax_asdl::compound_word*>* pairs;
  int n;
  syntax_asdl::compound_word* w2;
  syntax_asdl::word_part__AssocArrayLiteral* node2;
  List<syntax_asdl::word_t*>* words2;
  List<syntax_asdl::word_t*>* words3;

  this->_Next(lex_mode_e::ShCommand);
  this->_Peek();
  if (this->cur_token->id != Id::Op_LParen) {
    p_die(fmt30(this->cur_token->val), this->cur_token);
  }
  left_token = this->cur_token;
  paren_spid = this->cur_token->span_id;
  w_parser = this->parse_ctx->MakeWordParser(this->lexer, this->line_reader);
  words = new List<syntax_asdl::compound_word*>();
  while (true) {
    w = w_parser->ReadWord(lex_mode_e::ShCommand);
    if (w->tag_() == word_e::Token) {
      Token* tok = static_cast<Token*>(w);
      if (tok->id == Id::Right_ShArrayLiteral) {
        break;
      }
      else {
        if (tok->id == Id::Op_Newline) {
          continue;
        }
        else {
          p_die(fmt31(tok->val), w);
        }
      }
    }
    words->append(static_cast<compound_word*>(w));
  }
  if (len(words) == 0) {
    no_words = new List<syntax_asdl::word_t*>();
    node = new sh_array_literal(left_token, no_words);
    node->spids->append(left_token->span_id);
    return node;
  }
  pair = word_::DetectAssocPair(words->index(0));
  if (pair) {
    Tuple2<syntax_asdl::compound_word*, syntax_asdl::compound_word*>* tup6 = pair;
    k = tup6->at0();
    v = tup6->at1();
    pairs = new List<syntax_asdl::compound_word*>({k, v});
    n = len(words);
    for (int i = 1; i < n; ++i) {
      w2 = words->index(i);
      pair = word_::DetectAssocPair(w2);
      if (!pair) {
        p_die(fmt33(), w2);
      }
      Tuple2<syntax_asdl::compound_word*, syntax_asdl::compound_word*>* tup7 = pair;
      k = tup7->at0();
      v = tup7->at1();
      pairs->append(k);
      pairs->append(v);
    }
    node2 = new word_part::AssocArrayLiteral(left_token, pairs);
    node2->spids->append(paren_spid);
    return node2;
  }
  words2 = braces::BraceDetectAll(words);
  words3 = word_::TildeDetectAll(words2);
  node = new sh_array_literal(left_token, words3);
  node->spids->append(paren_spid);
  return node;
}

void WordParser::_ParseCallArguments(syntax_asdl::arg_list* arglist) {
  this->lexer->PushHint(Id::Op_RParen, Id::Op_RParen);
  this->parse_ctx->ParseOilArgList(this->lexer, arglist);
}

syntax_asdl::compound_word* WordParser::_ReadCompoundWord(types_asdl::lex_mode_t lex_mode) {
  return this->_ReadCompoundWord3(lex_mode, Id::Undefined_Tok, true);
}

syntax_asdl::compound_word* WordParser::_ReadCompoundWord3(types_asdl::lex_mode_t lex_mode, int eof_type, bool empty_ok) {
  syntax_asdl::compound_word* w;
  int num_parts;
  int brace_count;
  bool done;
  bool allow_done;
  syntax_asdl::word_part_t* part;
  syntax_asdl::Token* t;
  syntax_asdl::word_part_t* part2;
  syntax_asdl::Token* splice_token;
  syntax_asdl::arg_list* arglist;
  syntax_asdl::Token* vsub_token;

  w = new compound_word();
  num_parts = 0;
  brace_count = 0;
  done = false;
  while (!done) {
    this->_Peek();
    allow_done = empty_ok or num_parts != 0;
    if (allow_done and this->token_type == eof_type) {
      done = true;
    }
    else {
      if ((this->token_kind == Kind::Lit || this->token_kind == Kind::History || this->token_kind == Kind::KW || this->token_kind == Kind::ControlFlow || this->token_kind == Kind::BoolUnary || this->token_kind == Kind::BoolBinary)) {
        if (this->token_type == Id::Lit_EscapedChar) {
          part = new word_part::EscapedLiteral(this->cur_token);
        }
        else {
          part = new word_part::Literal(this->cur_token);
        }
        if (this->token_type == Id::Lit_VarLike and num_parts == 0) {
          w->parts->append(part);
          t = this->lexer->LookAhead(lex_mode_e::ShCommand);
          if (t->id == Id::Op_LParen) {
            this->lexer->PushHint(Id::Op_RParen, Id::Right_ShArrayLiteral);
            part2 = this->_ReadArrayLiteral();
            w->parts->append(part2);
            this->_Next(lex_mode);
            this->_Peek();
            if (!list_contains(KINDS_THAT_END_WORDS, this->token_kind)) {
              p_die(fmt35(), this->cur_token);
            }
            done = true;
          }
        }
        else {
          if (this->parse_opts->parse_at and this->token_type == Id::Lit_Splice and num_parts == 0) {
            splice_token = this->cur_token;
            t = this->lexer->LookAhead(lex_mode_e::ShCommand);
            if (t->id == Id::Op_LParen) {
              arglist = new arg_list();
              this->_ParseCallArguments(arglist);
              part = new word_part::FuncCall(splice_token, arglist);
            }
            else {
              part = new word_part::Splice(splice_token);
            }
            w->parts->append(part);
            this->_Next(lex_mode);
            this->_Peek();
            if (!list_contains(KINDS_THAT_END_WORDS, this->token_kind)) {
              p_die(fmt36(), this->cur_token);
            }
            done = true;
          }
          else {
            if (this->token_type == Id::Lit_LBrace) {
              brace_count += 1;
            }
            else {
              if (this->token_type == Id::Lit_RBrace) {
                brace_count -= 1;
              }
            }
            w->parts->append(part);
          }
        }
      }
      else {
        if (this->token_kind == Kind::VSub) {
          vsub_token = this->cur_token;
          part = new simple_var_sub(vsub_token);
          if (this->token_type == Id::VSub_DollarName) {
            t = this->lexer->LookAhead(lex_mode_e::ShCommand);
            if (t->id == Id::Op_LParen) {
              arglist = new arg_list();
              this->_ParseCallArguments(arglist);
              part = new word_part::FuncCall(vsub_token, arglist);
            }
          }
          w->parts->append(part);
        }
        else {
          if (this->token_kind == Kind::ExtGlob) {
            part = this->_ReadExtGlob();
            w->parts->append(part);
          }
          else {
            if (this->token_kind == Kind::Left) {
              part = this->_ReadLeftParts();
              w->parts->append(part);
            }
            else {
              if (this->token_kind == Kind::Right) {
                if (this->token_type == Id::Right_DoubleQuote) {
                  ;  // pass
                }
                else {
                  if (this->token_type == Id::Right_Subshell) {
                    if (this->lexer->MaybeUnreadOne()) {
                      this->lexer->PushHint(Id::Op_RParen, Id::Right_Subshell);
                      this->_Next(lex_mode);
                    }
                    done = true;
                  }
                  else {
                    done = true;
                  }
                }
              }
              else {
                if (this->token_kind == Kind::Ignored) {
                  done = true;
                }
                else {
                  if ((this->token_type == Id::Op_RParen || this->token_type == Id::Eof_RParen)) {
                    if (this->lexer->MaybeUnreadOne()) {
                      if (this->token_type == Id::Eof_RParen) {
                        this->lexer->PushHint(Id::Op_RParen, Id::Eof_RParen);
                      }
                      this->_Next(lex_mode);
                    }
                  }
                  done = true;
                }
              }
            }
          }
        }
      }
    }
    if (!done) {
      this->_Next(lex_mode);
      num_parts += 1;
    }
  }
  if (this->parse_opts->parse_brace and num_parts > 1 and brace_count != 0) {
    p_die(fmt37(), w);
  }
  return w;
}

Tuple2<syntax_asdl::word_t*, bool>* WordParser::_ReadArithWord() {
  syntax_asdl::word_t* no_word;
  syntax_asdl::compound_word* w;

  this->_Peek();
  if (this->token_kind == Kind::Unknown) {
    p_die(fmt38(), this->cur_token);
  }
  else {
    if (this->token_kind == Kind::Eof) {
      return (new Tuple2<syntax_asdl::word_t*, bool>(static_cast<word_t*>(this->cur_token), false));
    }
    else {
      if (this->token_kind == Kind::Ignored) {
        this->_Next(lex_mode_e::Arith);
        no_word = nullptr;
        return (new Tuple2<syntax_asdl::word_t*, bool>(no_word, true));
      }
      else {
        if ((this->token_kind == Kind::Arith || this->token_kind == Kind::Right)) {
          this->_Next(lex_mode_e::Arith);
          return (new Tuple2<syntax_asdl::word_t*, bool>(static_cast<word_t*>(this->cur_token), false));
        }
        else {
          if ((this->token_kind == Kind::Lit || this->token_kind == Kind::Left || this->token_kind == Kind::VSub)) {
            w = this->_ReadCompoundWord(lex_mode_e::Arith);
            return (new Tuple2<syntax_asdl::word_t*, bool>(static_cast<word_t*>(w), false));
          }
          else {
            throw new AssertionError();
          }
        }
      }
    }
  }
}

Tuple2<syntax_asdl::word_t*, bool>* WordParser::_ReadWord(types_asdl::lex_mode_t lex_mode) {
  syntax_asdl::word_t* no_word;
  syntax_asdl::compound_word* w;

  no_word = nullptr;
  this->_Peek();
  if (this->token_kind == Kind::Eof) {
    return (new Tuple2<syntax_asdl::word_t*, bool>(static_cast<word_t*>(this->cur_token), false));
  }
  else {
    if ((this->token_kind == Kind::Op || this->token_kind == Kind::Redir || this->token_kind == Kind::Arith)) {
      this->_Next(lex_mode);
      if (this->token_type == Id::Op_Newline) {
        if (this->cursor_was_newline) {
          return (new Tuple2<syntax_asdl::word_t*, bool>(no_word, true));
        }
      }
      return (new Tuple2<syntax_asdl::word_t*, bool>(static_cast<word_t*>(this->cur_token), false));
    }
    else {
      if (this->token_kind == Kind::Right) {
        if ((this->token_type != Id::Right_Subshell && this->token_type != Id::Right_ShFunction && this->token_type != Id::Right_CasePat && this->token_type != Id::Right_ShArrayLiteral)) {
          throw new AssertionError();
        }
        this->_Next(lex_mode);
        return (new Tuple2<syntax_asdl::word_t*, bool>(static_cast<word_t*>(this->cur_token), false));
      }
      else {
        if ((this->token_kind == Kind::Ignored || this->token_kind == Kind::WS)) {
          this->_Next(lex_mode);
          return (new Tuple2<syntax_asdl::word_t*, bool>(no_word, true));
        }
        else {
          if ((this->token_kind == Kind::VSub || this->token_kind == Kind::Lit || this->token_kind == Kind::History || this->token_kind == Kind::Left || this->token_kind == Kind::KW || this->token_kind == Kind::ControlFlow || this->token_kind == Kind::BoolUnary || this->token_kind == Kind::BoolBinary || this->token_kind == Kind::ExtGlob)) {
            if (this->token_type == Id::Lit_Pound) {
              this->_Next(lex_mode_e::Comment);
              this->_Peek();
              return (new Tuple2<syntax_asdl::word_t*, bool>(no_word, true));
            }
            else {
              w = this->_ReadCompoundWord(lex_mode);
              return (new Tuple2<syntax_asdl::word_t*, bool>(static_cast<word_t*>(w), false));
            }
          }
          else {
            throw new AssertionError();
          }
        }
      }
    }
  }
}

int WordParser::LookAhead() {
  syntax_asdl::Token* t;

  if (this->cur_token->id == Id::WS_Space) {
    t = this->lexer->LookAhead(lex_mode_e::ShCommand);
  }
  else {
    t = this->cur_token;
  }
  return t->id;
}

syntax_asdl::word_t* WordParser::ReadWord(types_asdl::lex_mode_t lex_mode) {
  syntax_asdl::word_t* w;
  bool need_more;

  if (this->buffered_word) {
    w = this->buffered_word;
    this->buffered_word = nullptr;
  }
  else {
    while (true) {
      if (lex_mode == lex_mode_e::Arith) {
        Tuple2<syntax_asdl::word_t*, bool>* tup8 = this->_ReadArithWord();
        w = tup8->at0();
        need_more = tup8->at1();
      }
      else {
        if ((lex_mode == lex_mode_e::ShCommand || lex_mode == lex_mode_e::DBracket || lex_mode == lex_mode_e::BashRegex)) {
          Tuple2<syntax_asdl::word_t*, bool>* tup9 = this->_ReadWord(lex_mode);
          w = tup9->at0();
          need_more = tup9->at1();
        }
        else {
          throw new AssertionError();
        }
      }
      if (!need_more) {
        break;
      }
    }
  }
  this->cursor = w;
  this->cursor_was_newline = word_::CommandId(this->cursor) == Id::Op_Newline;
  return this->cursor;
}

void WordParser::ReadHereDocBody(List<syntax_asdl::word_part_t*>* parts) {
  this->_ReadLikeDQ(nullptr, parts);
}

syntax_asdl::compound_word* WordParser::ReadForPlugin() {
  syntax_asdl::compound_word* w;

  w = new compound_word();
  this->_ReadLikeDQ(nullptr, w->parts);
  return w;
}

}  // define namespace word_parse

namespace tdop {  // define
namespace Id = id_kind_asdl::Id;
using id_kind_asdl::Id_t;
using id_kind_asdl::Id_str;
namespace arith_expr = syntax_asdl::arith_expr;
namespace arith_expr_e = syntax_asdl::arith_expr_e;
using syntax_asdl::arith_expr_t;
using syntax_asdl::arith_expr__VarRef;
using syntax_asdl::arith_expr__Binary;
namespace sh_lhs_expr = syntax_asdl::sh_lhs_expr;
using syntax_asdl::sh_lhs_expr_t;
using syntax_asdl::word_t;
using types_asdl::lex_mode_e;
using mylib::NewStr;

bool IsIndexable(syntax_asdl::arith_expr_t* node) {
  return node->tag_() == arith_expr_e::VarRef;
}

syntax_asdl::sh_lhs_expr_t* ToLValue(syntax_asdl::arith_expr_t* node) {
  syntax_asdl::arith_expr_t* UP_node;
  syntax_asdl::sh_lhs_expr__Name* n;

  UP_node = node;
  switch (node->tag_()) {
    case arith_expr_e::VarRef: {
      arith_expr__VarRef* node = static_cast<arith_expr__VarRef*>(UP_node);
      n = new sh_lhs_expr::Name(node->token->val);
      n->spids->append(node->token->span_id);
      return n;
    }
      break;
    case arith_expr_e::Binary: {
      arith_expr__Binary* node = static_cast<arith_expr__Binary*>(UP_node);
      if (node->op_id == Id::Arith_LBracket and node->left->tag_() == arith_expr_e::VarRef) {
        arith_expr__VarRef* left = static_cast<arith_expr__VarRef*>(node->left);
        return new sh_lhs_expr::IndexedName(left->token->val, node->right);
      }
    }
      break;
  }
  return nullptr;
}

syntax_asdl::arith_expr_t* NullError(tdop::TdopParser* p, syntax_asdl::word_t* t, int bp) {
  p_die(fmt0(), t);
  return nullptr;
}

syntax_asdl::arith_expr_t* NullConstant(tdop::TdopParser* p, syntax_asdl::word_t* w, int bp) {
  syntax_asdl::Token* var_name_token;

  var_name_token = word_::LooksLikeArithVar(w);
  if (var_name_token) {
    return new arith_expr::VarRef(var_name_token);
  }
  return new arith_expr::ArithWord(w);
}

syntax_asdl::arith_expr_t* NullParen(tdop::TdopParser* p, syntax_asdl::word_t* t, int bp) {
  syntax_asdl::arith_expr_t* r;

  r = p->ParseUntil(bp);
  p->Eat(Id::Arith_RParen);
  return r;
}

syntax_asdl::arith_expr_t* NullPrefixOp(tdop::TdopParser* p, syntax_asdl::word_t* w, int bp) {
  syntax_asdl::arith_expr_t* right;

  right = p->ParseUntil(bp);
  return new arith_expr::Unary(word_::ArithId(w), right);
}

syntax_asdl::arith_expr_t* LeftError(tdop::TdopParser* p, syntax_asdl::word_t* t, syntax_asdl::arith_expr_t* left, int rbp) {
  p_die(fmt1(), t);
  return nullptr;
}

syntax_asdl::arith_expr_t* LeftBinaryOp(tdop::TdopParser* p, syntax_asdl::word_t* w, syntax_asdl::arith_expr_t* left, int rbp) {
  return new arith_expr::Binary(word_::ArithId(w), left, p->ParseUntil(rbp));
}

syntax_asdl::arith_expr_t* LeftAssign(tdop::TdopParser* p, syntax_asdl::word_t* w, syntax_asdl::arith_expr_t* left, int rbp) {
  syntax_asdl::sh_lhs_expr_t* lhs;

  lhs = ToLValue(left);
  if (lhs == nullptr) {
    p_die(fmt2(), w);
  }
  return new arith_expr::BinaryAssign(word_::ArithId(w), lhs, p->ParseUntil(rbp));
}

TdopParser::TdopParser(tdop::ParserSpec* spec, word_parse::WordParser* w_parser) {
  this->spec = spec;
  this->w_parser = w_parser;
  this->cur_word = nullptr;
  this->op_id = Id::Undefined_Tok;
}

bool TdopParser::AtToken(int token_type) {
  return this->op_id == token_type;
}

void TdopParser::Eat(int token_type) {
  if (!this->AtToken(token_type)) {
    p_die(fmt3(NewStr(Id_str(token_type)), NewStr(Id_str(this->op_id))), this->cur_word);
  }
  this->Next();
}

bool TdopParser::Next() {
  this->cur_word = this->w_parser->ReadWord(lex_mode_e::Arith);
  this->op_id = word_::ArithId(this->cur_word);
  return true;
}

syntax_asdl::arith_expr_t* TdopParser::ParseUntil(int rbp) {
  syntax_asdl::word_t* t;
  tdop::NullInfo* null_info;
  syntax_asdl::arith_expr_t* node;
  tdop::LeftInfo* left_info;

  if ((this->op_id == Id::Eof_Real || this->op_id == Id::Eof_RParen || this->op_id == Id::Eof_Backtick)) {
    p_die(fmt4(), this->cur_word);
  }
  t = this->cur_word;
  null_info = this->spec->LookupNud(this->op_id);
  this->Next();
  node = null_info->nud(this, t, null_info->bp);
  while (true) {
    t = this->cur_word;
    try {
      left_info = this->spec->LookupLed(this->op_id);
    }
    catch (KeyError*) {
      throw new AssertionError();
    }
    if (rbp >= left_info->lbp) {
      break;
    }
    this->Next();
    node = left_info->led(this, t, node, left_info->rbp);
  }
  return node;
}

syntax_asdl::arith_expr_t* TdopParser::Parse() {
  this->Next();
  return this->ParseUntil(0);
}

}  // define namespace tdop

namespace arith_parse {  // define
namespace Id = id_kind_asdl::Id;
namespace arith_expr = syntax_asdl::arith_expr;
using syntax_asdl::arith_expr_t;
using syntax_asdl::word_t;

syntax_asdl::arith_expr_t* NullIncDec(tdop::TdopParser* p, syntax_asdl::word_t* w, int bp) {
  syntax_asdl::arith_expr_t* right;
  syntax_asdl::sh_lhs_expr_t* child;

  right = p->ParseUntil(bp);
  child = tdop::ToLValue(right);
  if (child == nullptr) {
    p_die(fmt0(), w);
  }
  return new arith_expr::UnaryAssign(word_::ArithId(w), child);
}

syntax_asdl::arith_expr_t* NullUnaryPlus(tdop::TdopParser* p, syntax_asdl::word_t* t, int bp) {
  syntax_asdl::arith_expr_t* right;

  right = p->ParseUntil(bp);
  return new arith_expr::Unary(Id::Node_UnaryPlus, right);
}

syntax_asdl::arith_expr_t* NullUnaryMinus(tdop::TdopParser* p, syntax_asdl::word_t* t, int bp) {
  syntax_asdl::arith_expr_t* right;

  right = p->ParseUntil(bp);
  return new arith_expr::Unary(Id::Node_UnaryMinus, right);
}

syntax_asdl::arith_expr_t* LeftIncDec(tdop::TdopParser* p, syntax_asdl::word_t* w, syntax_asdl::arith_expr_t* left, int rbp) {
  int op_id;
  syntax_asdl::sh_lhs_expr_t* child;

  if (word_::ArithId(w) == Id::Arith_DPlus) {
    op_id = Id::Node_PostDPlus;
  }
  else {
    if (word_::ArithId(w) == Id::Arith_DMinus) {
      op_id = Id::Node_PostDMinus;
    }
    else {
      throw new AssertionError();
    }
  }
  child = tdop::ToLValue(left);
  return new arith_expr::UnaryAssign(op_id, child);
}

syntax_asdl::arith_expr_t* LeftIndex(tdop::TdopParser* p, syntax_asdl::word_t* w, syntax_asdl::arith_expr_t* left, int unused_bp) {
  syntax_asdl::arith_expr_t* index;

  if (!tdop::IsIndexable(left)) {
    p_die(fmt1(), w);
  }
  index = p->ParseUntil(0);
  p->Eat(Id::Arith_RBracket);
  return new arith_expr::Binary(word_::ArithId(w), left, index);
}

syntax_asdl::arith_expr_t* LeftTernary(tdop::TdopParser* p, syntax_asdl::word_t* t, syntax_asdl::arith_expr_t* left, int bp) {
  syntax_asdl::arith_expr_t* true_expr;
  syntax_asdl::arith_expr_t* false_expr;

  true_expr = p->ParseUntil(bp);
  p->Eat(Id::Arith_Colon);
  false_expr = p->ParseUntil(bp);
  return new arith_expr::TernaryOp(left, true_expr, false_expr);
}

}  // define namespace arith_parse

namespace bool_parse {  // define
namespace Id = id_kind_asdl::Id;
using id_kind_asdl::Kind;
using types_asdl::lex_mode_t;
using types_asdl::lex_mode_e;
using syntax_asdl::word_t;
namespace word_e = syntax_asdl::word_e;
namespace bool_expr = syntax_asdl::bool_expr;
using syntax_asdl::bool_expr_t;

BoolParser::BoolParser(word_parse::WordEmitter* w_parser) {
  this->w_parser = w_parser;
  this->words = new List<syntax_asdl::word_t*>();
  this->cur_word = nullptr;
  this->op_id = Id::Undefined_Tok;
  this->b_kind = Kind::Undefined;
}

void BoolParser::_NextOne(types_asdl::lex_mode_t lex_mode) {
  int n;
  syntax_asdl::word_t* w;

  n = len(this->words);
  if (n == 2) {
    (*this->words)[0] = this->words->index(1);
    this->cur_word = this->words->index(0);
    this->words->pop();
  }
  else {
    if ((n == 0 || n == 1)) {
      w = this->w_parser->ReadWord(lex_mode);
      if (n == 0) {
        this->words->append(w);
      }
      else {
        (*this->words)[0] = w;
      }
      this->cur_word = w;
    }
  }
  this->op_id = word_::BoolId(this->cur_word);
  this->b_kind = lookup::LookupKind(this->op_id);
}

void BoolParser::_Next() {
  _Next(lex_mode_e::DBracket);
}

void BoolParser::_Next(types_asdl::lex_mode_t lex_mode) {
  while (true) {
    this->_NextOne(lex_mode);
    if (this->op_id != Id::Op_Newline) {
      break;
    }
  }
}

syntax_asdl::word_t* BoolParser::_LookAhead() {
  int n;
  syntax_asdl::word_t* w;

  n = len(this->words);
  if (n != 1) {
    throw new AssertionError();
  }
  w = this->w_parser->ReadWord(lex_mode_e::DBracket);
  this->words->append(w);
  return w;
}

syntax_asdl::bool_expr_t* BoolParser::Parse() {
  syntax_asdl::bool_expr_t* node;

  this->_Next();
  node = this->ParseExpr();
  if (this->op_id != Id::Lit_DRightBracket) {
    p_die(fmt0(), this->cur_word);
  }
  return node;
}

bool BoolParser::_TestAtEnd() {
  return this->op_id == Id::Lit_DRightBracket;
}

syntax_asdl::bool_expr_t* BoolParser::ParseForBuiltin() {
  syntax_asdl::bool_expr_t* node;

  this->_Next();
  node = this->ParseExpr();
  if (this->op_id != Id::Eof_Real) {
    p_die(fmt1(word_::Pretty(this->cur_word)), this->cur_word);
  }
  return node;
}

syntax_asdl::bool_expr_t* BoolParser::ParseExpr() {
  syntax_asdl::bool_expr_t* left;
  syntax_asdl::bool_expr_t* right;

  left = this->ParseTerm();
  if ((this->op_id == Id::Op_DPipe || this->op_id == Id::BoolUnary_o)) {
    this->_Next();
    right = this->ParseExpr();
    return new bool_expr::LogicalOr(left, right);
  }
  else {
    return left;
  }
}

syntax_asdl::bool_expr_t* BoolParser::ParseTerm() {
  syntax_asdl::bool_expr_t* left;
  syntax_asdl::bool_expr_t* right;

  left = this->ParseNegatedFactor();
  if ((this->op_id == Id::Op_DAmp || this->op_id == Id::BoolUnary_a)) {
    this->_Next();
    right = this->ParseTerm();
    return new bool_expr::LogicalAnd(left, right);
  }
  else {
    return left;
  }
}

syntax_asdl::bool_expr_t* BoolParser::ParseNegatedFactor() {
  syntax_asdl::bool_expr_t* child;

  if (this->op_id == Id::KW_Bang) {
    this->_Next();
    child = this->ParseFactor();
    return new bool_expr::LogicalNot(child);
  }
  else {
    return this->ParseFactor();
  }
}

syntax_asdl::bool_expr_t* BoolParser::ParseFactor() {
  int op;
  syntax_asdl::word_t* w;
  int tag;
  syntax_asdl::bool_expr_t* node;
  syntax_asdl::word_t* t2;
  int t2_op_id;
  id_kind_asdl::Kind_t t2_b_kind;
  syntax_asdl::word_t* left;
  bool is_regex;
  syntax_asdl::word_t* right;

  if (this->b_kind == Kind::BoolUnary) {
    op = this->op_id;
    this->_Next();
    w = this->cur_word;
    tag = w->tag_();
    if (tag != word_e::Compound and tag != word_e::String) {
      p_die(fmt2(), w);
    }
    this->_Next();
    node = new bool_expr::Unary(op, w);
    return node;
  }
  if (this->b_kind == Kind::Word) {
    t2 = this->_LookAhead();
    t2_op_id = word_::BoolId(t2);
    t2_b_kind = lookup::LookupKind(t2_op_id);
    if (t2_b_kind == Kind::BoolBinary or (t2_op_id == Id::Op_Less || t2_op_id == Id::Op_Great)) {
      left = this->cur_word;
      this->_Next();
      op = this->op_id;
      is_regex = t2_op_id == Id::BoolBinary_EqualTilde;
      if (is_regex) {
        this->_Next(lex_mode_e::BashRegex);
      }
      else {
        this->_Next();
      }
      right = this->cur_word;
      if (is_regex) {
        ;  // pass
      }
      this->_Next();
      return new bool_expr::Binary(op, left, right);
    }
    else {
      w = this->cur_word;
      this->_Next();
      return new bool_expr::WordTest(w);
    }
  }
  if (this->op_id == Id::Op_LParen) {
    this->_Next();
    node = this->ParseExpr();
    if (this->op_id != Id::Op_RParen) {
      p_die(fmt3(word_::Pretty(this->cur_word)), this->cur_word);
    }
    this->_Next();
    return node;
  }
  p_die(fmt4(), this->cur_word);
}

}  // define namespace bool_parse

namespace expr_parse {  // define
using syntax_asdl::Token;
using syntax_asdl::double_quoted;
using syntax_asdl::single_quoted;
using syntax_asdl::command_sub;
using syntax_asdl::sh_array_literal;
using syntax_asdl::compound_word;
using syntax_asdl::word_part_t;
namespace word_e = syntax_asdl::word_e;
namespace Id = id_kind_asdl::Id;
using id_kind_asdl::Kind;
using id_kind_asdl::Id_str;
using types_asdl::lex_mode_e;

ParseTreePrinter::ParseTreePrinter(Dict<int, Str*>* names) {
  this->names = names;
  this->f = mylib::Stdout();
}

void ParseTreePrinter::_Print(parse::PNode* pnode, int indent, int i) {
  Str* ind;
  Str* v;

  ind = str_repeat(str217, indent);
  if (pnode->tok) {
    v = pnode->tok->val;
  }
  else {
    v = str218;
  }
  this->f->write(fmt0(ind, i, this->names->index(pnode->typ), v));
  if (pnode->children != nullptr) {
    i = 0;
    for (ListIter<parse::PNode*> it(pnode->children); !it.Done(); it.Next(), ++i) {
      parse::PNode* child = it.Value();
      this->_Print(child, indent + 1, i);
    }
  }
}

void ParseTreePrinter::Print(parse::PNode* pnode) {
  this->_Print(pnode, 0, 0);
}

int _Classify(grammar::Grammar* gr, syntax_asdl::Token* tok) {
  int typ;
  Str* type_str;

  if (tok->id == Id::Expr_Name) {
    if (dict_contains(gr->keywords, tok->val)) {
      return gr->keywords->index(tok->val);
    }
  }
  typ = tok->id;
  if (dict_contains(gr->tokens, typ)) {
    return gr->tokens->index(typ);
  }
  type_str = tok->id == Id::Unknown_Tok ? str220 : fmt1(mylib::NewStr(Id_str(tok->id)));
  p_die(fmt2(type_str), tok);
}
Dict<int, int>* _OTHER_BALANCE = new Dict<int, int>({});

syntax_asdl::Token* _PushOilTokens(parse_lib::ParseContext* parse_ctx, grammar::Grammar* gr, parse::Parser* p, lexer::Lexer* lex) {
  syntax_asdl::Token* last_token;
  int balance;
  syntax_asdl::Token* tok;
  int ilabel;

  last_token = nullptr;
  balance = 0;
  while (true) {
    if (last_token) {
      tok = last_token;
      last_token = nullptr;
    }
    else {
      tok = lex->Read(lex_mode_e::Expr);
    }
    if (lookup::LookupKind(tok->id) == Kind::Ignored) {
      continue;
    }
    if (balance > 0 and tok->id == Id::Op_Newline) {
      continue;
    }
    balance += _OTHER_BALANCE->get(tok->id, 0);
    ilabel = _Classify(gr, tok);
    if (p->addtoken(tok->id, tok, ilabel)) {
      return tok;
    }
  }
}

ExprParser::ExprParser(parse_lib::ParseContext* parse_ctx, grammar::Grammar* gr) {
  this->parse_ctx = parse_ctx;
  this->gr = gr;
  this->push_parser = new parse::Parser(gr);
}

Tuple2<parse::PNode*, syntax_asdl::Token*>* ExprParser::Parse(lexer::Lexer* lexer, int start_symbol) {
  syntax_asdl::Token* last_token;

  this->push_parser->setup(start_symbol);
  try {
    last_token = _PushOilTokens(this->parse_ctx, this->gr, this->push_parser, lexer);
  }
  catch (parse::ParseError* e) {
    throw new error::Parse(str223, e->tok);
  }
  return (new Tuple2<parse::PNode*, syntax_asdl::Token*>(this->push_parser->rootnode, last_token));
}

}  // define namespace expr_parse

namespace expr_to_ast {  // define
namespace Id = id_kind_asdl::Id;
using id_kind_asdl::Id_t;
using id_kind_asdl::Id_str;
using syntax_asdl::Token;
using syntax_asdl::speck;
using syntax_asdl::double_quoted;
using syntax_asdl::single_quoted;
using syntax_asdl::simple_var_sub;
using syntax_asdl::braced_var_sub;
using syntax_asdl::command_sub;
using syntax_asdl::sh_array_literal;
namespace command = syntax_asdl::command;
using syntax_asdl::command__VarDecl;
using syntax_asdl::command__PlaceMutation;
using syntax_asdl::command__Func;
namespace expr = syntax_asdl::expr;
namespace expr_e = syntax_asdl::expr_e;
using syntax_asdl::expr_t;
using syntax_asdl::expr__Var;
using syntax_asdl::expr__Dict;
using syntax_asdl::expr_context_e;
namespace re = syntax_asdl::re;
using syntax_asdl::re_t;
namespace re_repeat = syntax_asdl::re_repeat;
using syntax_asdl::re_repeat_t;
namespace class_literal_term = syntax_asdl::class_literal_term;
using syntax_asdl::class_literal_term_t;
using syntax_asdl::posix_class;
using syntax_asdl::perl_class;
using syntax_asdl::name_type;
namespace place_expr = syntax_asdl::place_expr;
namespace place_expr_e = syntax_asdl::place_expr_e;
using syntax_asdl::place_expr_t;
using syntax_asdl::type_expr_t;
using syntax_asdl::comprehension;
using syntax_asdl::subscript;
using syntax_asdl::attribute;
namespace proc_sig = syntax_asdl::proc_sig;
using syntax_asdl::proc_sig_t;
using syntax_asdl::param;
using syntax_asdl::named_arg;
using syntax_asdl::arg_list;
using parse::PNode;
Dict<Str*, Str*>* PERL_CLASSES = new Dict<Str*, Str*>({});
List<Str*>* POSIX_CLASSES = new List<Str*>({str224, str225, str226, str227, str228, str229, str230, str231, str232, str233, str234, str235});
Str* RANGE_POINT_TOO_LONG = str236;
int NT_OFFSET = 256;

bool ISNONTERMINAL(int x) {
  return x >= NT_OFFSET;
}

Transformer::Transformer(grammar::Grammar* gr) {
  this->number2symbol = gr->number2symbol;
}

syntax_asdl::expr_t* Transformer::_AssocBinary(List<parse::PNode*>* children) {
  int n;
  syntax_asdl::expr_t* left;
  parse::PNode* op;
  syntax_asdl::expr_t* right;

  n = len(children);
  if (n == 1) {
    return this->Expr(children->index(0));
  }
  left = this->Expr(children->index(0));
  op = children->index(1);
  if (n == 3) {
    right = this->Expr(children->index(2));
  }
  else {
    right = this->_AssocBinary(children->slice(2));
  }
  return new expr::Binary(op->tok, left, right);
}

syntax_asdl::expr_t* Transformer::_Trailer(syntax_asdl::expr_t* base, parse::PNode* p_trailer) {
  List<parse::PNode*>* children;
  syntax_asdl::Token* op_tok;
  syntax_asdl::arg_list* arglist;
  parse::PNode* p;
  parse::PNode* p_args;
  List<syntax_asdl::expr_t*>* indices;
  int n;
  parse::PNode* a;
  syntax_asdl::Token* attr;

  children = p_trailer->children;
  op_tok = children->index(0)->tok;
  if (op_tok->id == Id::Op_LParen) {
    arglist = new arg_list();
    if (len(children) == 2) {
      return new expr::FuncCall(base, arglist);
    }
    p = children->index(1);
    this->_Arglist(p->children, arglist);
    return new expr::FuncCall(base, arglist);
  }
  if (op_tok->id == Id::Op_LBracket) {
    p_args = children->index(1);
    indices = new List<syntax_asdl::expr_t*>();
    n = len(p_args->children);
    for (int i = 0; i < n; i += 2) {
      a = p_args->children->index(i);
      indices->append(this->_Subscript(a->children));
    }
    return new subscript(base, indices);
  }
  if ((op_tok->id == Id::Expr_Dot || op_tok->id == Id::Expr_RArrow || op_tok->id == Id::Expr_DColon)) {
    attr = children->index(1)->tok;
    return new attribute(base, op_tok, attr, expr_context_e::Store);
  }
  throw new AssertionError();
}

Tuple2<syntax_asdl::expr_t*, syntax_asdl::expr_t*>* Transformer::_DictPair(parse::PNode* p_node) {
  List<parse::PNode*>* children;
  int typ;
  syntax_asdl::expr_t* key;
  syntax_asdl::expr_t* value;
  syntax_asdl::Token* tok0;
  int id_;

  children = p_node->children;
  typ = children->index(0)->typ;
  if (ISNONTERMINAL(typ)) {
    if (typ == grammar_nt::sq_string) {
      key = this->Expr(children->index(0));
    }
    else {
      if (typ == grammar_nt::dq_string) {
        key = this->Expr(children->index(0));
      }
    }
    value = this->Expr(children->index(2));
    return (new Tuple2<syntax_asdl::expr_t*, syntax_asdl::expr_t*>(key, value));
  }
  tok0 = children->index(0)->tok;
  id_ = tok0->id;
  if (id_ == Id::Expr_Name) {
    key = new expr::Const(tok0);
    if (len(children) >= 3) {
      value = this->Expr(children->index(2));
    }
    else {
      value = new expr::Implicit();
    }
  }
  if (id_ == Id::Op_LBracket) {
    key = this->Expr(children->index(1));
    value = this->Expr(children->index(4));
    return (new Tuple2<syntax_asdl::expr_t*, syntax_asdl::expr_t*>(key, value));
  }
  return (new Tuple2<syntax_asdl::expr_t*, syntax_asdl::expr_t*>(key, value));
}

syntax_asdl::expr__Dict* Transformer::_Dict(parse::PNode* p_node) {
  List<syntax_asdl::expr_t*>* keys;
  List<syntax_asdl::expr_t*>* values;
  List<parse::PNode*>* children;
  int n;
  int i;
  syntax_asdl::expr_t* key;
  syntax_asdl::expr_t* value;

  if (!ISNONTERMINAL(p_node->typ)) {
    return new expr::Dict(new List<syntax_asdl::expr_t*>(), new List<syntax_asdl::expr_t*>());
  }
  keys = new List<syntax_asdl::expr_t*>();
  values = new List<syntax_asdl::expr_t*>();
  children = p_node->children;
  n = len(children);
  i = 0;
  while (i < n) {
    Tuple2<syntax_asdl::expr_t*, syntax_asdl::expr_t*>* tup0 = this->_DictPair(children->index(i));
    key = tup0->at0();
    value = tup0->at1();
    keys->append(key);
    values->append(value);
    i += 2;
  }
  return new expr::Dict(keys, values);
}

syntax_asdl::expr_t* Transformer::_Tuple(List<parse::PNode*>* children) {
  int n;
  List<syntax_asdl::expr_t*>* elts;
  parse::PNode* p_node;

  n = len(children);
  if (n == 1) {
    return this->Expr(children->index(0));
  }
  if (n == 2) {
    p_die(fmt1(), children->index(1)->tok);
  }
  elts = new List<syntax_asdl::expr_t*>();
  for (int i = 0; i < n; i += 2) {
    p_node = children->index(i);
    elts->append(this->Expr(p_node));
  }
  return new expr::Tuple(elts, expr_context_e::Store);
}

syntax_asdl::expr_t* Transformer::_TestlistComp(parse::PNode* p_node, int id0) {
  List<parse::PNode*>* children;
  int n;
  syntax_asdl::expr_t* elt;
  syntax_asdl::comprehension* comp;
  List<syntax_asdl::expr_t*>* elts;

  children = p_node->children;
  n = len(children);
  if (n > 1 and children->index(1)->typ == grammar_nt::comp_for) {
    elt = this->Expr(children->index(0));
    comp = this->_CompFor(children->index(1));
    if (id0 == Id::Op_LParen) {
      return new expr::GeneratorExp(elt, new List<syntax_asdl::comprehension*>({comp}));
    }
    if (id0 == Id::Op_LBracket) {
      return new expr::ListComp(elt, new List<syntax_asdl::comprehension*>({comp}));
    }
    throw new AssertionError();
  }
  if (id0 == Id::Op_LParen) {
    if (children->index(1)->tok->id == Id::Arith_Comma) {
      return this->_Tuple(children);
    }
    throw new NotImplementedError(str238);
  }
  if (id0 == Id::Op_LBracket) {
    elts = new List<syntax_asdl::expr_t*>();
    for (int i = 0; i < n; i += 2) {
      elts->append(this->Expr(children->index(i)));
    }
    return new expr::List(elts, expr_context_e::Store);
  }
  throw new AssertionError();
}

syntax_asdl::expr_t* Transformer::_Atom(List<parse::PNode*>* children) {
  syntax_asdl::Token* tok;
  int id_;
  int n;
  syntax_asdl::re_t* r;
  List<syntax_asdl::Token*>* flags;
  syntax_asdl::Token* trans_pref;

  tok = children->index(0)->tok;
  id_ = tok->id;
  n = len(children);
  if (id_ == Id::Op_LParen) {
    if (n == 2) {
      return new expr::Tuple(new List<syntax_asdl::expr_t*>(), expr_context_e::Store);
    }
    return this->_TestlistComp(children->index(1), id_);
  }
  if (id_ == Id::Op_LBracket) {
    if (n == 2) {
      return new expr::List(new List<syntax_asdl::expr_t*>(), expr_context_e::Store);
    }
    return this->_TestlistComp(children->index(1), id_);
  }
  if (id_ == Id::Op_LBrace) {
    return this->_Dict(children->index(1));
  }
  if (id_ == Id::Arith_Slash) {
    r = this->_Regex(children->index(1));
    flags = new List<syntax_asdl::Token*>();
    trans_pref = nullptr;
    return new expr::RegexLiteral(children->index(0)->tok, r, flags, trans_pref);
  }
  throw new NotImplementedError(Id_str(id_));
}

List<syntax_asdl::name_type*>* Transformer::_NameTypeList(parse::PNode* p_node) {
  List<syntax_asdl::name_type*>* results;
  int n;
  parse::PNode* p;
  List<parse::PNode*>* children;
  syntax_asdl::type_expr_t* typ;
  syntax_asdl::name_type* node;

  results = new List<syntax_asdl::name_type*>();
  n = len(p_node->children);
  for (int i = 0; i < n; i += 2) {
    p = p_node->children->index(i);
    children = p->children;
    if (len(children) == 2) {
      typ = this->_TypeExpr(children->index(1));
    }
    else {
      typ = nullptr;
    }
    node = new name_type(children->index(0)->tok, typ);
    results->append(node);
  }
  return results;
}

syntax_asdl::comprehension* Transformer::_CompFor(parse::PNode* p_node) {
  List<parse::PNode*>* children;
  List<syntax_asdl::name_type*>* lhs;
  syntax_asdl::expr_t* iterable;
  syntax_asdl::expr_t* cond;

  children = p_node->children;
  lhs = this->_NameTypeList(children->index(1));
  iterable = this->Expr(children->index(3));
  if (len(children) >= 6) {
    cond = this->Expr(children->index(5));
  }
  else {
    cond = nullptr;
  }
  return new comprehension(lhs, iterable, cond);
}

syntax_asdl::expr_t* Transformer::_CompareChain(List<parse::PNode*>* children) {
  List<syntax_asdl::speck*>* cmp_ops;
  List<syntax_asdl::expr_t*>* comparators;
  syntax_asdl::expr_t* left;
  int i;
  int n;
  List<parse::PNode*>* op_children;
  syntax_asdl::Token* tok1;
  syntax_asdl::speck* op;

  cmp_ops = new List<syntax_asdl::speck*>();
  comparators = new List<syntax_asdl::expr_t*>();
  left = this->Expr(children->index(0));
  i = 1;
  n = len(children);
  while (i < n) {
    op_children = children->index(i)->children;
    tok1 = op_children->index(0)->tok;
    if (len(op_children) == 2) {
      if (tok1->id == Id::Expr_Not) {
        op = new speck(Id::Node_NotIn, tok1->span_id);
      }
      else {
        if (tok1->id == Id::Expr_Is) {
          op = new speck(Id::Node_IsNot, tok1->span_id);
        }
        else {
          throw new AssertionError();
        }
      }
    }
    else {
      op = new speck(tok1->id, tok1->span_id);
    }
    cmp_ops->append(op);
    i += 1;
    comparators->append(this->Expr(children->index(i)));
    i += 1;
  }
  return new expr::Compare(left, cmp_ops, comparators);
}

syntax_asdl::expr_t* Transformer::_Subscript(List<parse::PNode*>* children) {
  int typ0;
  int n;
  syntax_asdl::expr_t* lower;
  syntax_asdl::expr_t* upper;

  typ0 = children->index(0)->typ;
  n = len(children);
  if (ISNONTERMINAL(typ0)) {
    if (n == 3) {
      lower = this->Expr(children->index(0));
      upper = this->Expr(children->index(2));
    }
    else {
      if (n == 2) {
        lower = this->Expr(children->index(0));
        upper = nullptr;
      }
      else {
        return this->Expr(children->index(0));
      }
    }
  }
  else {
    lower = nullptr;
    if (n == 1) {
      upper = nullptr;
    }
    else {
      upper = this->Expr(children->index(1));
    }
  }
  return new expr::Slice(lower, upper);
}

syntax_asdl::expr_t* Transformer::Expr(parse::PNode* pnode) {
  int typ;
  syntax_asdl::Token* tok;
  List<parse::PNode*>* children;
  syntax_asdl::expr_t* test;
  syntax_asdl::expr_t* body;
  syntax_asdl::expr_t* orelse;
  int n;
  List<syntax_asdl::name_type*>* params;
  syntax_asdl::Token* op_tok;
  parse::PNode* op;
  parse::PNode* e;
  syntax_asdl::expr_t* node;
  int i;
  syntax_asdl::expr_t* factor;
  syntax_asdl::Token* left_tok;
  List<syntax_asdl::expr_t*>* items;
  Str* nt_name;
  int id_;

  typ = pnode->typ;
  tok = pnode->tok;
  children = pnode->children;
  if (ISNONTERMINAL(typ)) {
    if (typ == grammar_nt::oil_expr) {
      return this->Expr(children->index(1));
    }
    if (typ == grammar_nt::command_expr) {
      return this->Expr(children->index(0));
    }
    if (typ == grammar_nt::atom) {
      if (len(children) == 1) {
        return this->Expr(children->index(0));
      }
      return this->_Atom(children);
    }
    if (typ == grammar_nt::testlist) {
      return this->_Tuple(children);
    }
    if (typ == grammar_nt::test) {
      if (len(children) == 1) {
        return this->Expr(children->index(0));
      }
      test = this->Expr(children->index(2));
      body = this->Expr(children->index(0));
      orelse = this->Expr(children->index(4));
      return new expr::IfExp(test, body, orelse);
    }
    if (typ == grammar_nt::lambdef) {
      n = len(children);
      if (n == 4) {
        params = this->_NameTypeList(children->index(1));
      }
      else {
        params = new List<syntax_asdl::name_type*>();
      }
      body = this->Expr(children->index(n - 1));
      return new expr::Lambda(params, body);
    }
    if (typ == grammar_nt::or_test) {
      return this->_AssocBinary(children);
    }
    if (typ == grammar_nt::and_test) {
      return this->_AssocBinary(children);
    }
    if (typ == grammar_nt::not_test) {
      if (len(children) == 1) {
        return this->Expr(children->index(0));
      }
      op_tok = children->index(0)->tok;
      return new expr::Unary(op_tok, this->Expr(children->index(1)));
    }
    else {
      if (typ == grammar_nt::comparison) {
        if (len(children) == 1) {
          return this->Expr(children->index(0));
        }
        return this->_CompareChain(children);
      }
      else {
        if (typ == grammar_nt::range_expr) {
          n = len(children);
          if (n == 1) {
            return this->Expr(children->index(0));
          }
          if (n == 3) {
            return new expr::Range(this->Expr(children->index(0)), this->Expr(children->index(2)));
          }
          throw new AssertionError();
        }
        else {
          if (typ == grammar_nt::expr) {
            return this->_AssocBinary(children);
          }
        }
      }
    }
    if (typ == grammar_nt::xor_expr) {
      return this->_AssocBinary(children);
    }
    if (typ == grammar_nt::and_expr) {
      return this->_AssocBinary(children);
    }
    else {
      if (typ == grammar_nt::shift_expr) {
        return this->_AssocBinary(children);
      }
      else {
        if (typ == grammar_nt::arith_expr) {
          return this->_AssocBinary(children);
        }
        else {
          if (typ == grammar_nt::term) {
            return this->_AssocBinary(children);
          }
          else {
            if (typ == grammar_nt::factor) {
              if (len(children) == 1) {
                return this->Expr(children->index(0));
              }
              op = children->index(0);
              e = children->index(1);
              return new expr::Unary(op->tok, this->Expr(e));
            }
            else {
              if (typ == grammar_nt::power) {
                node = this->Expr(children->index(0));
                if (len(children) == 1) {
                  return node;
                }
                n = len(children);
                i = 1;
                while (i < n and ISNONTERMINAL(children->index(i)->typ)) {
                  node = this->_Trailer(node, children->index(i));
                  i += 1;
                }
                if (i != n) {
                  op_tok = children->index(i)->tok;
                  factor = this->Expr(children->index(i + 1));
                  node = new expr::Binary(op_tok, node, factor);
                }
                return node;
              }
              else {
                if (typ == grammar_nt::array_literal) {
                  left_tok = children->index(0)->tok;
                  items = new List<syntax_asdl::expr_t*>();
                  for (ListIter<parse::PNode*> it(children->slice(1, -1)); !it.Done(); it.Next()) {
                    parse::PNode* p = it.Value();
                    items->append(this->_ArrayItem(p));
                  }
                  return new expr::ArrayLiteral(left_tok, items);
                }
                else {
                  if (typ == grammar_nt::oil_expr_sub) {
                    return this->Expr(children->index(0));
                  }
                  else {
                    if (typ == grammar_nt::sh_array_literal) {
                      return reinterpret_cast<sh_array_literal*>(children->index(1)->tok);
                    }
                    else {
                      if (typ == grammar_nt::sh_command_sub) {
                        return reinterpret_cast<command_sub*>(children->index(1)->tok);
                      }
                      else {
                        if (typ == grammar_nt::braced_var_sub) {
                          return reinterpret_cast<braced_var_sub*>(children->index(1)->tok);
                        }
                        else {
                          if (typ == grammar_nt::dq_string) {
                            return reinterpret_cast<double_quoted*>(children->index(1)->tok);
                          }
                          else {
                            if (typ == grammar_nt::sq_string) {
                              return reinterpret_cast<single_quoted*>(children->index(1)->tok);
                            }
                            else {
                              if (typ == grammar_nt::simple_var_sub) {
                                return new simple_var_sub(children->index(0)->tok);
                              }
                              else {
                                nt_name = this->number2symbol->index(typ);
                                throw new AssertionError();
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    id_ = tok->id;
    if (id_ == Id::Expr_Name) {
      return new expr::Var(tok);
    }
    if ((id_ == Id::Expr_DecInt || id_ == Id::Expr_BinInt || id_ == Id::Expr_OctInt || id_ == Id::Expr_HexInt || id_ == Id::Expr_Float)) {
      return new expr::Const(tok);
    }
    if ((id_ == Id::Expr_Null || id_ == Id::Expr_True || id_ == Id::Expr_False)) {
      return new expr::Const(tok);
    }
    throw new NotImplementedError(Id_str(id_));
  }
}

syntax_asdl::expr_t* Transformer::_ArrayItem(parse::PNode* p_node) {
  parse::PNode* child0;
  int typ0;

  child0 = p_node->children->index(0);
  typ0 = child0->typ;
  if (ISNONTERMINAL(typ0)) {
    return this->Expr(child0);
  }
  else {
    if (child0->tok->id == Id::Op_LParen) {
      return this->Expr(p_node->children->index(1));
    }
    return this->Expr(child0);
  }
}

List<syntax_asdl::place_expr_t*>* Transformer::_PlaceList(parse::PNode* p_node) {
  List<syntax_asdl::place_expr_t*>* places;
  int n;
  parse::PNode* p;
  syntax_asdl::expr_t* e;
  syntax_asdl::expr_t* UP_e;
  int tag;

  places = new List<syntax_asdl::place_expr_t*>();
  n = len(p_node->children);
  for (int i = 0; i < n; i += 2) {
    p = p_node->children->index(i);
    e = this->Expr(p);
    UP_e = e;
    tag = e->tag_();
    if (tag == expr_e::Var) {
      expr__Var* e = static_cast<expr__Var*>(UP_e);
      places->append(new place_expr::Var(e->name));
    }
    else {
      if ((tag == place_expr_e::Var || tag == place_expr_e::Subscript || tag == place_expr_e::Attribute)) {
        places->append(reinterpret_cast<place_expr_t*>(UP_e));
      }
      else {
        p_die(fmt2(), p->tok ? p->tok : nullptr);
      }
    }
  }
  return places;
}

syntax_asdl::command__VarDecl* Transformer::MakeVarDecl(parse::PNode* p_node) {
  int typ;
  List<parse::PNode*>* children;
  List<syntax_asdl::name_type*>* lhs;
  syntax_asdl::expr_t* rhs;

  typ = p_node->typ;
  children = p_node->children;
  lhs = this->_NameTypeList(children->index(0));
  rhs = this->Expr(children->index(2));
  return new command::VarDecl(nullptr, lhs, rhs);
}

syntax_asdl::command__PlaceMutation* Transformer::MakePlaceMutation(parse::PNode* p_node) {
  int typ;
  List<parse::PNode*>* children;
  List<syntax_asdl::place_expr_t*>* place_list;
  syntax_asdl::Token* op_tok;
  syntax_asdl::expr_t* rhs;

  typ = p_node->typ;
  children = p_node->children;
  place_list = this->_PlaceList(children->index(0));
  op_tok = children->index(1)->tok;
  rhs = this->Expr(children->index(2));
  return new command::PlaceMutation(nullptr, place_list, op_tok, rhs);
}

Tuple2<List<syntax_asdl::name_type*>*, syntax_asdl::expr_t*>* Transformer::OilForExpr(parse::PNode* pnode) {
  int typ;
  List<parse::PNode*>* children;
  List<syntax_asdl::name_type*>* lhs;
  syntax_asdl::expr_t* iterable;
  Str* nt_name;

  typ = pnode->typ;
  children = pnode->children;
  if (typ == grammar_nt::oil_for) {
    lhs = this->_NameTypeList(children->index(1));
    iterable = this->Expr(children->index(3));
    return (new Tuple2<List<syntax_asdl::name_type*>*, syntax_asdl::expr_t*>(lhs, iterable));
  }
  nt_name = this->number2symbol->index(typ);
  throw new AssertionError();
}

void Transformer::_Argument(parse::PNode* p_node, bool do_named, syntax_asdl::arg_list* arglist) {
  List<syntax_asdl::expr_t*>* positional;
  List<syntax_asdl::named_arg*>* named;
  List<parse::PNode*>* children;
  int n;
  syntax_asdl::expr_t* arg;
  syntax_asdl::expr_t* spread_expr;
  syntax_asdl::expr_t* elt;
  syntax_asdl::comprehension* comp;
  syntax_asdl::named_arg* n1;

  positional = arglist->positional;
  named = arglist->named;
  children = p_node->children;
  n = len(children);
  if (n == 1) {
    arg = this->Expr(children->index(0));
    positional->append(arg);
    return ;
  }
  if (n == 2) {
    if (children->index(0)->tok->id == Id::Expr_Ellipsis) {
      spread_expr = this->Expr(children->index(1));
      if (do_named) {
        named->append(new named_arg(nullptr, spread_expr));
      }
      else {
        positional->append(new expr::Spread(spread_expr, expr_context_e::Store));
      }
      return ;
    }
    if (children->index(1)->typ == grammar_nt::comp_for) {
      elt = this->Expr(children->index(0));
      comp = this->_CompFor(children->index(1));
      arg = new expr::GeneratorExp(elt, new List<syntax_asdl::comprehension*>({comp}));
      positional->append(arg);
      return ;
    }
    throw new AssertionError();
  }
  if (n == 3) {
    n1 = new named_arg(children->index(0)->tok, this->Expr(children->index(2)));
    named->append(n1);
    return ;
  }
  throw new NotImplementedError();
}

void Transformer::_Arglist(List<parse::PNode*>* children, syntax_asdl::arg_list* arglist) {
  bool do_named;

  do_named = false;
  for (ListIter<parse::PNode*> it(children); !it.Done(); it.Next()) {
    parse::PNode* p_child = it.Value();
    if (ISNONTERMINAL(p_child->typ)) {
      this->_Argument(p_child, do_named, arglist);
    }
    else {
      if (p_child->tok->id == Id::Op_Semi) {
        do_named = true;
      }
    }
  }
}

void Transformer::ArgList(parse::PNode* pnode, syntax_asdl::arg_list* arglist) {
  parse::PNode* p;

  if (len(pnode->children) == 2) {
    return ;
  }
  p = pnode->children->index(1);
  this->_Arglist(p->children, arglist);
}

syntax_asdl::type_expr_t* Transformer::_TypeExpr(parse::PNode* pnode) {
  return nullptr;
}

List<syntax_asdl::type_expr_t*>* Transformer::_TypeExprList(parse::PNode* pnode) {
  return nullptr;
}

Tuple2<syntax_asdl::Token*, syntax_asdl::expr_t*>* Transformer::_ProcParam(parse::PNode* pnode) {
  List<parse::PNode*>* children;
  syntax_asdl::Token* tok0;
  int n;
  syntax_asdl::expr_t* default_val;

  children = pnode->children;
  tok0 = children->index(0)->tok;
  n = len(children);
  if (tok0->id == Id::Expr_Name) {
    default_val = nullptr;
    if (n > 1 and children->index(1)->tok->id == Id::Arith_Equal) {
      default_val = this->Expr(children->index(2));
    }
    return (new Tuple2<syntax_asdl::Token*, syntax_asdl::expr_t*>(tok0, default_val));
  }
  throw new AssertionError();
}

syntax_asdl::proc_sig_t* Transformer::_ProcParams(parse::PNode* p_node) {
  List<parse::PNode*>* children;
  int n;
  List<syntax_asdl::param*>* params;
  syntax_asdl::Token* rest;
  syntax_asdl::Token* block;
  int i;
  parse::PNode* p;
  syntax_asdl::Token* name;
  syntax_asdl::expr_t* default_val;
  syntax_asdl::type_expr_t* type_;

  children = p_node->children;
  n = len(children);
  params = new List<syntax_asdl::param*>();
  rest = nullptr;
  block = nullptr;
  i = 0;
  while (i < n) {
    p = children->index(i);
    if (ISNONTERMINAL(p->typ)) {
      Tuple2<syntax_asdl::Token*, syntax_asdl::expr_t*>* tup1 = this->_ProcParam(p);
      name = tup1->at0();
      default_val = tup1->at1();
      type_ = nullptr;
      params->append(new param(name, type_, default_val));
    }
    else {
      if (p->tok->id == Id::Expr_At) {
        i += 1;
        rest = children->index(i)->tok;
      }
      else {
        if (p->tok->id == Id::Arith_Amp) {
          i += 1;
          block = children->index(i)->tok;
        }
        else {
          throw new AssertionError();
        }
      }
    }
    i += 2;
  }
  return new proc_sig::Closed(params, rest, block);
}

syntax_asdl::param* Transformer::_FuncParam(parse::PNode* pnode) {
  List<parse::PNode*>* children;
  syntax_asdl::Token* tok0;
  int n;
  syntax_asdl::expr_t* default_val;
  syntax_asdl::type_expr_t* type_;

  children = pnode->children;
  tok0 = children->index(0)->tok;
  n = len(children);
  if (tok0->id == Id::Expr_Name) {
    default_val = nullptr;
    type_ = nullptr;
    if (n > 1 and children->index(1)->tok->id == Id::Arith_Equal) {
      default_val = this->Expr(children->index(2));
    }
    else {
      if (n > 2 and children->index(2)->tok->id == Id::Arith_Equal) {
        default_val = this->Expr(children->index(3));
      }
    }
    return new param(tok0, type_, default_val);
  }
  throw new AssertionError();
}

Tuple2<List<syntax_asdl::param*>*, syntax_asdl::Token*>* Transformer::_FuncParams(parse::PNode* p_node) {
  List<syntax_asdl::param*>* params;
  syntax_asdl::Token* splat;
  List<parse::PNode*>* children;
  int n;
  int i;
  parse::PNode* p;

  params = new List<syntax_asdl::param*>();
  splat = nullptr;
  children = p_node->children;
  n = len(children);
  i = 0;
  while (i < n) {
    p = children->index(i);
    if (ISNONTERMINAL(p->typ)) {
      params->append(this->_FuncParam(p));
    }
    else {
      if (p->tok->id == Id::Expr_Ellipsis) {
        splat = children->index(i + 1)->tok;
      }
    }
    i += 1;
  }
  return (new Tuple2<List<syntax_asdl::param*>*, syntax_asdl::Token*>(params, splat));
}

syntax_asdl::proc_sig_t* Transformer::Proc(parse::PNode* pnode) {
  int typ;
  List<parse::PNode*>* children;
  int n;
  syntax_asdl::proc_sig_t* sig;

  typ = pnode->typ;
  children = pnode->children;
  n = len(children);
  if (n == 1) {
    sig = new proc_sig::Open();
  }
  else {
    if (n == 3) {
      sig = new proc_sig::Closed();
    }
    else {
      if (n == 4) {
        sig = this->_ProcParams(children->index(1));
      }
      else {
        throw new AssertionError();
      }
    }
  }
  return sig;
}

void Transformer::Func(parse::PNode* pnode, syntax_asdl::command__Func* out) {
  List<parse::PNode*>* children;
  int pos;
  int typ2;
  int id_;

  children = pnode->children;
  out->name = children->index(0)->tok;
  pos = 2;
  typ2 = children->index(pos)->typ;
  if (ISNONTERMINAL(typ2)) {
    Tuple2<List<syntax_asdl::param*>*, syntax_asdl::Token*>* tup2 = this->_FuncParams(children->index(2));
    out->pos_params = tup2->at0();
    out->pos_splat = tup2->at1();
    pos += 1;
  }
  id_ = children->index(pos)->tok->id;
  if (id_ == Id::Op_RParen) {
    pos += 1;
  }
  else {
    if (id_ == Id::Op_Semi) {
      Tuple2<List<syntax_asdl::param*>*, syntax_asdl::Token*>* tup3 = this->_FuncParams(children->index(pos + 1));
      out->named_params = tup3->at0();
      out->named_splat = tup3->at1();
      pos += 3;
    }
  }
  if (ISNONTERMINAL(children->index(pos)->typ)) {
    out->return_types = this->_TypeExprList(children->index(pos));
  }
}

Str* Transformer::_RangeChar(parse::PNode* p_node) {
  List<parse::PNode*>* children;
  int typ;
  List<syntax_asdl::Token*>* tokens;
  Str* s;
  syntax_asdl::Token* tok;

  children = p_node->children;
  typ = children->index(0)->typ;
  if (ISNONTERMINAL(typ)) {
    if (typ == grammar_nt::sq_string) {
      single_quoted* sq_part = reinterpret_cast<single_quoted*>(children->index(0)->children->index(1)->tok);
      tokens = sq_part->tokens;
      if (len(tokens) > 1) {
        p_die(dynamic_fmt_dummy(), sq_part);
      }
      if (len(tokens->index(0)->val) > 1) {
        p_die(dynamic_fmt_dummy(), sq_part);
      }
      s = tokens->index(0)->val->index(0);
      return s;
    }
    if (typ == grammar_nt::char_literal) {
      throw new AssertionError();
    }
    throw new NotImplementedError();
  }
  else {
    tok = p_node->tok;
    if ((tok->id == Id::Expr_Name || tok->id == Id::Expr_DecInt)) {
      if (len(tok->val) != 1) {
        p_die(dynamic_fmt_dummy(), tok);
      }
      return tok->val->index(0);
    }
    throw new NotImplementedError();
  }
}

syntax_asdl::class_literal_term_t* Transformer::_NonRangeChars(parse::PNode* p_node) {
  List<parse::PNode*>* children;
  int typ;
  parse::PNode* p_child;

  children = p_node->children;
  typ = children->index(0)->typ;
  if (ISNONTERMINAL(typ)) {
    p_child = children->index(0);
    if (typ == grammar_nt::braced_var_sub) {
      return reinterpret_cast<braced_var_sub*>(p_child->children->index(1)->tok);
    }
    if (typ == grammar_nt::dq_string) {
      return reinterpret_cast<double_quoted*>(p_child->children->index(1)->tok);
    }
    if (typ == grammar_nt::sq_string) {
      return reinterpret_cast<single_quoted*>(p_child->children->index(1)->tok);
    }
    if (typ == grammar_nt::simple_var_sub) {
      return new simple_var_sub(children->index(0)->tok);
    }
    if (typ == grammar_nt::char_literal) {
      return new class_literal_term::CharLiteral(children->index(0)->tok);
    }
    throw new NotImplementedError();
  }
  else {
    return this->_NameInClass(nullptr, children->index(0)->tok);
  }
}

syntax_asdl::class_literal_term_t* Transformer::_ClassLiteralTerm(parse::PNode* p_node) {
  List<parse::PNode*>* children;
  int typ;
  parse::PNode* p_child;
  int n;
  Str* start;
  Str* end;
  Str* nt_name;

  children = p_node->children;
  typ = children->index(0)->typ;
  if (ISNONTERMINAL(typ)) {
    p_child = children->index(0);
    if (typ == grammar_nt::simple_var_sub) {
      return new simple_var_sub(p_child->children->index(0)->tok);
    }
    if (typ == grammar_nt::braced_var_sub) {
      return reinterpret_cast<braced_var_sub*>(p_child->children->index(1)->tok);
    }
    if (typ == grammar_nt::dq_string) {
      return reinterpret_cast<double_quoted*>(p_child->children->index(1)->tok);
    }
    n = len(children);
    if (n == 1 and typ == grammar_nt::range_char) {
      return this->_NonRangeChars(children->index(0));
    }
    if (n == 3 and children->index(1)->tok->id == Id::Arith_Minus) {
      start = this->_RangeChar(children->index(0));
      end = this->_RangeChar(children->index(2));
      return new class_literal_term::Range(start, end);
    }
  }
  else {
    if (children->index(0)->tok->id == Id::Arith_Tilde) {
      return this->_NameInClass(children->index(0)->tok, children->index(1)->tok);
    }
    throw new AssertionError();
  }
  nt_name = this->number2symbol->index(typ);
  throw new NotImplementedError(nt_name);
}

List<syntax_asdl::class_literal_term_t*>* Transformer::_ClassLiteral(parse::PNode* p_node) {
  List<syntax_asdl::class_literal_term_t*>* terms;

  terms = new List<syntax_asdl::class_literal_term_t*>();
  for (ListIter<parse::PNode*> it(p_node->children->slice(1, -1)); !it.Done(); it.Next()) {
    parse::PNode* c = it.Value();
    terms->append(this->_ClassLiteralTerm(c));
  }
  return terms;
}

syntax_asdl::re_t* Transformer::_NameInRegex(syntax_asdl::Token* negated_tok, syntax_asdl::Token* tok) {
  syntax_asdl::speck* negated_speck;
  Str* val;
  Str* perl;

  if (negated_tok) {
    negated_speck = new speck(negated_tok->id, negated_tok->span_id);
  }
  else {
    negated_speck = nullptr;
  }
  val = tok->val;
  if (val == str243) {
    if (negated_tok) {
      p_die(fmt6(), tok);
    }
    return tok;
  }
  if (list_contains(POSIX_CLASSES, val)) {
    return new posix_class(negated_speck, val);
  }
  perl = PERL_CLASSES->get(val);
  if (perl != nullptr) {
    return new perl_class(negated_speck, perl);
  }
  p_die(fmt7(val), tok);
}

syntax_asdl::class_literal_term_t* Transformer::_NameInClass(syntax_asdl::Token* negated_tok, syntax_asdl::Token* tok) {
  syntax_asdl::speck* negated_speck;
  Str* val;
  Str* perl;

  if (negated_tok) {
    negated_speck = new speck(negated_tok->id, negated_tok->span_id);
  }
  else {
    negated_speck = nullptr;
  }
  val = tok->val;
  if (list_contains(POSIX_CLASSES, val)) {
    return new posix_class(negated_speck, val);
  }
  perl = PERL_CLASSES->get(val);
  if (perl != nullptr) {
    return new perl_class(negated_speck, perl);
  }
  p_die(fmt8(val), tok);
}

syntax_asdl::re_t* Transformer::_ReAtom(parse::PNode* p_atom) {
  List<parse::PNode*>* children;
  int typ;
  parse::PNode* p_child;
  syntax_asdl::Token* tok;

  children = p_atom->children;
  typ = children->index(0)->typ;
  if (ISNONTERMINAL(typ)) {
    p_child = p_atom->children->index(0);
    if (typ == grammar_nt::class_literal) {
      return new re::ClassLiteral(false, this->_ClassLiteral(p_child));
    }
    if (typ == grammar_nt::braced_var_sub) {
      return reinterpret_cast<braced_var_sub*>(p_child->children->index(1)->tok);
    }
    if (typ == grammar_nt::dq_string) {
      return reinterpret_cast<double_quoted*>(p_child->children->index(1)->tok);
    }
    if (typ == grammar_nt::sq_string) {
      return reinterpret_cast<single_quoted*>(p_child->children->index(1)->tok);
    }
    if (typ == grammar_nt::simple_var_sub) {
      return new simple_var_sub(children->index(0)->tok);
    }
    if (typ == grammar_nt::char_literal) {
      return children->index(0)->tok;
    }
    throw new NotImplementedError(typ);
  }
  else {
    tok = children->index(0)->tok;
    if ((tok->id == Id::Expr_Dot || tok->id == Id::Arith_Caret || tok->id == Id::Expr_Dollar)) {
      return new speck(tok->id, tok->span_id);
    }
    if (tok->id == Id::Expr_Name) {
      return this->_NameInRegex(nullptr, tok);
    }
    if (tok->id == Id::Expr_Symbol) {
      if ((tok->val == str247 || tok->val == str248 || tok->val == str249)) {
        return tok;
      }
      p_die(fmt9(tok->val), tok);
    }
    if (tok->id == Id::Expr_At) {
      return new re::Splice(children->index(1)->tok);
    }
    if (tok->id == Id::Arith_Tilde) {
      typ = children->index(1)->typ;
      if (ISNONTERMINAL(typ)) {
        return new re::ClassLiteral(true, this->_ClassLiteral(children->index(1)));
      }
      else {
        return this->_NameInRegex(tok, children->index(1)->tok);
      }
    }
    if (tok->id == Id::Op_LParen) {
      return new re::Group(this->_Regex(children->index(1)));
    }
    if (tok->id == Id::Arith_Colon) {
      throw new NotImplementedError(Id_str(tok->id));
    }
    throw new NotImplementedError(Id_str(tok->id));
  }
}

syntax_asdl::re_repeat_t* Transformer::_RepeatOp(parse::PNode* p_repeat) {
  syntax_asdl::Token* tok;
  int id_;
  parse::PNode* p_range;
  List<parse::PNode*>* children;
  int n;

  tok = p_repeat->children->index(0)->tok;
  id_ = tok->id;
  if ((id_ == Id::Arith_Plus || id_ == Id::Arith_Star || id_ == Id::Arith_QMark)) {
    return new re_repeat::Op(tok);
  }
  if (id_ == Id::Op_LBrace) {
    p_range = p_repeat->children->index(1);
    children = p_range->children;
    n = len(children);
    if (n == 1) {
      return new re_repeat::Num(children->index(0)->tok);
    }
    if (n == 2) {
      if (children->index(0)->tok->id == Id::Expr_DecInt) {
        return new re_repeat::Range(children->index(0)->tok, nullptr);
      }
      else {
        return new re_repeat::Range(nullptr, children->index(1)->tok);
      }
    }
    if (n == 3) {
      return new re_repeat::Range(children->index(0)->tok, children->index(2)->tok);
    }
    throw new AssertionError();
  }
  throw new AssertionError();
}

syntax_asdl::re_t* Transformer::_Regex(parse::PNode* p_node) {
  int typ;
  List<parse::PNode*>* children;
  List<syntax_asdl::re_t*>* alts;
  int n;
  parse::PNode* c;
  int i;
  List<syntax_asdl::re_t*>* seq;
  syntax_asdl::re_t* r;
  syntax_asdl::re_repeat_t* repeat_op;
  Str* nt_name;

  typ = p_node->typ;
  children = p_node->children;
  if (typ == grammar_nt::regex) {
    if (len(children) == 1) {
      return this->_Regex(children->index(0));
    }
    alts = new List<syntax_asdl::re_t*>();
    n = len(p_node->children);
    for (int i = 0; i < n; i += 2) {
      c = p_node->children->index(i);
      alts->append(this->_Regex(c));
    }
    return new re::Alt(alts);
  }
  if (typ == grammar_nt::re_alt) {
    i = 0;
    n = len(children);
    seq = new List<syntax_asdl::re_t*>();
    while (i < n) {
      r = this->_ReAtom(children->index(i));
      i += 1;
      if (i < n and children->index(i)->typ == grammar_nt::repeat_op) {
        repeat_op = this->_RepeatOp(children->index(i));
        r = new re::Repeat(r, repeat_op);
        i += 1;
      }
      seq->append(r);
    }
    if (len(seq) == 1) {
      return seq->index(0);
    }
    else {
      return new re::Seq(seq);
    }
  }
  nt_name = this->number2symbol->index(typ);
  throw new NotImplementedError(nt_name);
}

}  // define namespace expr_to_ast

int main(int argc, char **argv) {
  //log("%p", arith_parse::kNullLookup[1].nud);
  auto* args = new List<Str*>();
  for (int i = 0; i < argc; ++i) {
    args->append(new Str(argv[i]));
  }
  return osh_parse::main(args);
}
