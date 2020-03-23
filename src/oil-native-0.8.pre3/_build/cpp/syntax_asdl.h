#ifndef SYNTAX_ASDL
#define SYNTAX_ASDL

#include <cstdint>

#include "mylib.h"  // for Str, List, etc.
#include "hnode_asdl.h"
using hnode_asdl::hnode_t;
using id_kind_asdl::Id_t;
namespace syntax_asdl {

class parse_result_t;
class source_t;
class line_span;
class Token;
class speck;
class bracket_op_t;
class suffix_op_t;
class double_quoted;
class single_quoted;
class simple_var_sub;
class braced_var_sub;
class command_sub;
class sh_array_literal;
class arg_list;
class word_part_t;
class compound_word;
class word_t;
class sh_lhs_expr_t;
class arith_expr_t;
class bool_expr_t;
class redir_loc_t;
class redir_param_t;
class redir;
class assign_pair;
class env_pair;
class case_arm;
class if_arm;
class command_t;
class proc_sig_t;
class param;
class glob_part_t;
class printf_part_t;
class type_expr_t;
class name_type;
class comprehension;
class named_arg;
class subscript;
class attribute;
class place_expr_t;
class expr_t;
class posix_class;
class perl_class;
class class_literal_term_t;
class re_repeat_t;
class re_t;

namespace parse_result_e {
  const int EmptyLine = 1;
  const int Eof = 2;
  const int Node = 3;
};

const char* parse_result_str(int tag);

class parse_result_t {
 protected:
  parse_result_t() {}
 public:
  int tag_() {
    return reinterpret_cast<Obj*>(this)->tag;
  }
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();
  DISALLOW_COPY_AND_ASSIGN(parse_result_t)
};

class parse_result__EmptyLine : public parse_result_t {
 public:
  parse_result__EmptyLine() :
                          tag(static_cast<uint16_t>(parse_result_e::EmptyLine))
                          {
  }
  uint16_t tag;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(parse_result__EmptyLine)
};

class parse_result__Eof : public parse_result_t {
 public:
  parse_result__Eof() : tag(static_cast<uint16_t>(parse_result_e::Eof)) {
  }
  uint16_t tag;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(parse_result__Eof)
};

class parse_result__Node : public parse_result_t {
 public:
  parse_result__Node() : tag(static_cast<uint16_t>(parse_result_e::Node)),
                     cmd(nullptr) {
  }
  parse_result__Node(command_t* cmd) :
                     tag(static_cast<uint16_t>(parse_result_e::Node)), cmd(cmd)
                     {
  }
  uint16_t tag;
  command_t* cmd;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(parse_result__Node)
};

namespace parse_result {
  typedef parse_result__EmptyLine EmptyLine;
  typedef parse_result__Eof Eof;
  typedef parse_result__Node Node;
}

namespace source_e {
  const int Interactive = 1;
  const int Unused = 2;
  const int CFlag = 3;
  const int Stdin = 4;
  const int MainFile = 5;
  const int SourcedFile = 6;
  const int ArgvWord = 7;
  const int ArgvCommand = 8;
  const int EvalArg = 9;
  const int Trap = 10;
  const int PromptCommand = 11;
  const int Variable = 12;
  const int Alias = 13;
  const int Backticks = 14;
  const int LValue = 15;
};

const char* source_str(int tag);

class source_t {
 protected:
  source_t() {}
 public:
  int tag_() {
    return reinterpret_cast<Obj*>(this)->tag;
  }
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();
  DISALLOW_COPY_AND_ASSIGN(source_t)
};

class source__Interactive : public source_t {
 public:
  source__Interactive() : tag(static_cast<uint16_t>(source_e::Interactive)) {
  }
  uint16_t tag;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(source__Interactive)
};

class source__Unused : public source_t {
 public:
  source__Unused() : tag(static_cast<uint16_t>(source_e::Unused)), comment(new
                 Str("")) {
  }
  source__Unused(Str* comment) : tag(static_cast<uint16_t>(source_e::Unused)),
                 comment(comment) {
  }
  uint16_t tag;
  Str* comment;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(source__Unused)
};

class source__CFlag : public source_t {
 public:
  source__CFlag() : tag(static_cast<uint16_t>(source_e::CFlag)) {
  }
  uint16_t tag;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(source__CFlag)
};

class source__Stdin : public source_t {
 public:
  source__Stdin() : tag(static_cast<uint16_t>(source_e::Stdin)), comment(new
                Str("")) {
  }
  source__Stdin(Str* comment) : tag(static_cast<uint16_t>(source_e::Stdin)),
                comment(comment) {
  }
  uint16_t tag;
  Str* comment;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(source__Stdin)
};

class source__MainFile : public source_t {
 public:
  source__MainFile() : tag(static_cast<uint16_t>(source_e::MainFile)), path(new
                   Str("")) {
  }
  source__MainFile(Str* path) : tag(static_cast<uint16_t>(source_e::MainFile)),
                   path(path) {
  }
  uint16_t tag;
  Str* path;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(source__MainFile)
};

class source__SourcedFile : public source_t {
 public:
  source__SourcedFile() : tag(static_cast<uint16_t>(source_e::SourcedFile)),
                      path(new Str("")), spid(-1) {
  }
  source__SourcedFile(Str* path, int spid) :
                      tag(static_cast<uint16_t>(source_e::SourcedFile)),
                      path(path), spid(spid) {
  }
  uint16_t tag;
  Str* path;
  int spid;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(source__SourcedFile)
};

class source__ArgvWord : public source_t {
 public:
  source__ArgvWord() : tag(static_cast<uint16_t>(source_e::ArgvWord)),
                   word_spid(-1) {
  }
  source__ArgvWord(int word_spid) :
                   tag(static_cast<uint16_t>(source_e::ArgvWord)),
                   word_spid(word_spid) {
  }
  uint16_t tag;
  int word_spid;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(source__ArgvWord)
};

class source__ArgvCommand : public source_t {
 public:
  source__ArgvCommand() : tag(static_cast<uint16_t>(source_e::ArgvCommand)),
                      first_spid(-1) {
  }
  source__ArgvCommand(int first_spid) :
                      tag(static_cast<uint16_t>(source_e::ArgvCommand)),
                      first_spid(first_spid) {
  }
  uint16_t tag;
  int first_spid;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(source__ArgvCommand)
};

class source__EvalArg : public source_t {
 public:
  source__EvalArg() : tag(static_cast<uint16_t>(source_e::EvalArg)),
                  eval_spid(-1) {
  }
  source__EvalArg(int eval_spid) :
                  tag(static_cast<uint16_t>(source_e::EvalArg)),
                  eval_spid(eval_spid) {
  }
  uint16_t tag;
  int eval_spid;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(source__EvalArg)
};

class source__Trap : public source_t {
 public:
  source__Trap() : tag(static_cast<uint16_t>(source_e::Trap)), word_spid(-1) {
  }
  source__Trap(int word_spid) : tag(static_cast<uint16_t>(source_e::Trap)),
               word_spid(word_spid) {
  }
  uint16_t tag;
  int word_spid;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(source__Trap)
};

class source__PromptCommand : public source_t {
 public:
  source__PromptCommand() :
                        tag(static_cast<uint16_t>(source_e::PromptCommand)),
                        spid(-1) {
  }
  source__PromptCommand(int spid) :
                        tag(static_cast<uint16_t>(source_e::PromptCommand)),
                        spid(spid) {
  }
  uint16_t tag;
  int spid;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(source__PromptCommand)
};

class source__Variable : public source_t {
 public:
  source__Variable() : tag(static_cast<uint16_t>(source_e::Variable)), spid(-1)
                   {
  }
  source__Variable(int spid) : tag(static_cast<uint16_t>(source_e::Variable)),
                   spid(spid) {
  }
  uint16_t tag;
  int spid;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(source__Variable)
};

class source__Alias : public source_t {
 public:
  source__Alias() : tag(static_cast<uint16_t>(source_e::Alias)), argv0(new
                Str("")), argv0_spid(-1) {
  }
  source__Alias(Str* argv0, int argv0_spid) :
                tag(static_cast<uint16_t>(source_e::Alias)), argv0(argv0),
                argv0_spid(argv0_spid) {
  }
  uint16_t tag;
  Str* argv0;
  int argv0_spid;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(source__Alias)
};

class source__Backticks : public source_t {
 public:
  source__Backticks() : tag(static_cast<uint16_t>(source_e::Backticks)),
                    left_spid(-1), right_spid(-1) {
  }
  source__Backticks(int left_spid, int right_spid) :
                    tag(static_cast<uint16_t>(source_e::Backticks)),
                    left_spid(left_spid), right_spid(right_spid) {
  }
  uint16_t tag;
  int left_spid;
  int right_spid;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(source__Backticks)
};

class source__LValue : public source_t {
 public:
  source__LValue() : tag(static_cast<uint16_t>(source_e::LValue)),
                 left_spid(-1), right_spid(-1) {
  }
  source__LValue(int left_spid, int right_spid) :
                 tag(static_cast<uint16_t>(source_e::LValue)),
                 left_spid(left_spid), right_spid(right_spid) {
  }
  uint16_t tag;
  int left_spid;
  int right_spid;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(source__LValue)
};

namespace source {
  typedef source__Interactive Interactive;
  typedef source__Unused Unused;
  typedef source__CFlag CFlag;
  typedef source__Stdin Stdin;
  typedef source__MainFile MainFile;
  typedef source__SourcedFile SourcedFile;
  typedef source__ArgvWord ArgvWord;
  typedef source__ArgvCommand ArgvCommand;
  typedef source__EvalArg EvalArg;
  typedef source__Trap Trap;
  typedef source__PromptCommand PromptCommand;
  typedef source__Variable Variable;
  typedef source__Alias Alias;
  typedef source__Backticks Backticks;
  typedef source__LValue LValue;
}

namespace bracket_op_e {
  const int WholeArray = 1;
  const int ArrayIndex = 2;
};

const char* bracket_op_str(int tag);

class bracket_op_t {
 protected:
  bracket_op_t() {}
 public:
  int tag_() {
    return reinterpret_cast<Obj*>(this)->tag;
  }
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();
  DISALLOW_COPY_AND_ASSIGN(bracket_op_t)
};

class bracket_op__WholeArray : public bracket_op_t {
 public:
  bracket_op__WholeArray() :
                         tag(static_cast<uint16_t>(bracket_op_e::WholeArray)),
                         op_id(-1) {
  }
  bracket_op__WholeArray(Id_t op_id) :
                         tag(static_cast<uint16_t>(bracket_op_e::WholeArray)),
                         op_id(op_id) {
  }
  uint16_t tag;
  Id_t op_id;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(bracket_op__WholeArray)
};

class bracket_op__ArrayIndex : public bracket_op_t {
 public:
  bracket_op__ArrayIndex() :
                         tag(static_cast<uint16_t>(bracket_op_e::ArrayIndex)),
                         expr(nullptr) {
  }
  bracket_op__ArrayIndex(arith_expr_t* expr) :
                         tag(static_cast<uint16_t>(bracket_op_e::ArrayIndex)),
                         expr(expr) {
  }
  uint16_t tag;
  arith_expr_t* expr;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(bracket_op__ArrayIndex)
};

namespace bracket_op {
  typedef bracket_op__WholeArray WholeArray;
  typedef bracket_op__ArrayIndex ArrayIndex;
}

namespace suffix_op_e {
  const int Nullary = 1;
  const int Unary = 2;
  const int PatSub = 3;
  const int Slice = 4;
};

const char* suffix_op_str(int tag);

class suffix_op_t {
 protected:
  suffix_op_t() {}
 public:
  int tag_() {
    return reinterpret_cast<Obj*>(this)->tag;
  }
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();
  DISALLOW_COPY_AND_ASSIGN(suffix_op_t)
};

class suffix_op__Nullary : public suffix_op_t {
 public:
  suffix_op__Nullary() : tag(static_cast<uint16_t>(suffix_op_e::Nullary)),
                     op_id(-1), spids(new List<int>()) {
  }
  suffix_op__Nullary(Id_t op_id) :
                     tag(static_cast<uint16_t>(suffix_op_e::Nullary)),
                     op_id(op_id), spids(new List<int>()) {
  }
  uint16_t tag;
  Id_t op_id;
  List<int>* spids;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(suffix_op__Nullary)
};

class suffix_op__Unary : public suffix_op_t {
 public:
  suffix_op__Unary() : tag(static_cast<uint16_t>(suffix_op_e::Unary)),
                   op_id(-1), arg_word(nullptr), spids(new List<int>()) {
  }
  suffix_op__Unary(Id_t op_id, word_t* arg_word) :
                   tag(static_cast<uint16_t>(suffix_op_e::Unary)),
                   op_id(op_id), arg_word(arg_word), spids(new List<int>()) {
  }
  uint16_t tag;
  Id_t op_id;
  word_t* arg_word;
  List<int>* spids;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(suffix_op__Unary)
};

class suffix_op__PatSub : public suffix_op_t {
 public:
  suffix_op__PatSub() : tag(static_cast<uint16_t>(suffix_op_e::PatSub)),
                    pat(nullptr), replace(nullptr), replace_mode(-1), spids(new
                    List<int>()) {
  }
  suffix_op__PatSub(word_t* pat, word_t* replace, Id_t replace_mode) :
                    tag(static_cast<uint16_t>(suffix_op_e::PatSub)), pat(pat),
                    replace(replace), replace_mode(replace_mode), spids(new
                    List<int>()) {
  }
  uint16_t tag;
  word_t* pat;
  word_t* replace;
  Id_t replace_mode;
  List<int>* spids;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(suffix_op__PatSub)
};

class suffix_op__Slice : public suffix_op_t {
 public:
  suffix_op__Slice() : tag(static_cast<uint16_t>(suffix_op_e::Slice)),
                   begin(nullptr), length(nullptr), spids(new List<int>()) {
  }
  suffix_op__Slice(arith_expr_t* begin, arith_expr_t* length) :
                   tag(static_cast<uint16_t>(suffix_op_e::Slice)),
                   begin(begin), length(length), spids(new List<int>()) {
  }
  uint16_t tag;
  arith_expr_t* begin;
  arith_expr_t* length;
  List<int>* spids;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(suffix_op__Slice)
};

namespace suffix_op {
  typedef suffix_op__Nullary Nullary;
  typedef suffix_op__Unary Unary;
  typedef suffix_op__PatSub PatSub;
  typedef suffix_op__Slice Slice;
}

namespace word_part_e {
  const int ShArrayLiteral = 1008;
  const int AssocArrayLiteral = 2;
  const int Literal = 1001;
  const int EscapedLiteral = 4;
  const int SingleQuoted = 1004;
  const int DoubleQuoted = 1003;
  const int SimpleVarSub = 1005;
  const int BracedVarSub = 1006;
  const int CommandSub = 1007;
  const int TildeSub = 10;
  const int ArithSub = 11;
  const int BracedTuple = 12;
  const int BracedRange = 13;
  const int ExtGlob = 14;
  const int Splice = 15;
  const int FuncCall = 16;
  const int ExprSub = 17;
};

const char* word_part_str(int tag);

class word_part_t {
 protected:
  word_part_t() {}
 public:
  int tag_() {
    return reinterpret_cast<Obj*>(this)->tag;
  }
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();
  DISALLOW_COPY_AND_ASSIGN(word_part_t)
};

class word_part__AssocArrayLiteral : public word_part_t {
 public:
  word_part__AssocArrayLiteral() :
                               tag(static_cast<uint16_t>(word_part_e::AssocArrayLiteral)), left(nullptr), pairs(new List<compound_word*>()), spids(new List<int>()) {
  }
  word_part__AssocArrayLiteral(Token* left, List<compound_word*>* pairs) :
                               tag(static_cast<uint16_t>(word_part_e::AssocArrayLiteral)), left(left), pairs(pairs), spids(new List<int>()) {
  }
  uint16_t tag;
  Token* left;
  List<compound_word*>* pairs;
  List<int>* spids;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(word_part__AssocArrayLiteral)
};

class word_part__EscapedLiteral : public word_part_t {
 public:
  word_part__EscapedLiteral() :
                            tag(static_cast<uint16_t>(word_part_e::EscapedLiteral)), token(nullptr), spids(new List<int>()) {
  }
  word_part__EscapedLiteral(Token* token) :
                            tag(static_cast<uint16_t>(word_part_e::EscapedLiteral)), token(token), spids(new List<int>()) {
  }
  uint16_t tag;
  Token* token;
  List<int>* spids;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(word_part__EscapedLiteral)
};

class word_part__TildeSub : public word_part_t {
 public:
  word_part__TildeSub() : tag(static_cast<uint16_t>(word_part_e::TildeSub)),
                      token(nullptr), spids(new List<int>()) {
  }
  word_part__TildeSub(Token* token) :
                      tag(static_cast<uint16_t>(word_part_e::TildeSub)),
                      token(token), spids(new List<int>()) {
  }
  uint16_t tag;
  Token* token;
  List<int>* spids;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(word_part__TildeSub)
};

class word_part__ArithSub : public word_part_t {
 public:
  word_part__ArithSub() : tag(static_cast<uint16_t>(word_part_e::ArithSub)),
                      anode(nullptr), spids(new List<int>()) {
  }
  word_part__ArithSub(arith_expr_t* anode) :
                      tag(static_cast<uint16_t>(word_part_e::ArithSub)),
                      anode(anode), spids(new List<int>()) {
  }
  uint16_t tag;
  arith_expr_t* anode;
  List<int>* spids;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(word_part__ArithSub)
};

class word_part__BracedTuple : public word_part_t {
 public:
  word_part__BracedTuple() :
                         tag(static_cast<uint16_t>(word_part_e::BracedTuple)),
                         words(new List<compound_word*>()), spids(new
                         List<int>()) {
  }
  word_part__BracedTuple(List<compound_word*>* words) :
                         tag(static_cast<uint16_t>(word_part_e::BracedTuple)),
                         words(words), spids(new List<int>()) {
  }
  uint16_t tag;
  List<compound_word*>* words;
  List<int>* spids;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(word_part__BracedTuple)
};

class word_part__BracedRange : public word_part_t {
 public:
  word_part__BracedRange() :
                         tag(static_cast<uint16_t>(word_part_e::BracedRange)),
                         kind(-1), start(new Str("")), end(new Str("")),
                         step(-1), spids(new List<int>()) {
  }
  word_part__BracedRange(Id_t kind, Str* start, Str* end, int step) :
                         tag(static_cast<uint16_t>(word_part_e::BracedRange)),
                         kind(kind), start(start), end(end), step(step),
                         spids(new List<int>()) {
  }
  uint16_t tag;
  Id_t kind;
  Str* start;
  Str* end;
  int step;
  List<int>* spids;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(word_part__BracedRange)
};

class word_part__ExtGlob : public word_part_t {
 public:
  word_part__ExtGlob() : tag(static_cast<uint16_t>(word_part_e::ExtGlob)),
                     op(nullptr), arms(new List<word_t*>()), spids(new
                     List<int>()) {
  }
  word_part__ExtGlob(Token* op, List<word_t*>* arms) :
                     tag(static_cast<uint16_t>(word_part_e::ExtGlob)), op(op),
                     arms(arms), spids(new List<int>()) {
  }
  uint16_t tag;
  Token* op;
  List<word_t*>* arms;
  List<int>* spids;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(word_part__ExtGlob)
};

class word_part__Splice : public word_part_t {
 public:
  word_part__Splice() : tag(static_cast<uint16_t>(word_part_e::Splice)),
                    name(nullptr), spids(new List<int>()) {
  }
  word_part__Splice(Token* name) :
                    tag(static_cast<uint16_t>(word_part_e::Splice)),
                    name(name), spids(new List<int>()) {
  }
  uint16_t tag;
  Token* name;
  List<int>* spids;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(word_part__Splice)
};

class word_part__FuncCall : public word_part_t {
 public:
  word_part__FuncCall() : tag(static_cast<uint16_t>(word_part_e::FuncCall)),
                      name(nullptr), args(nullptr), spids(new List<int>()) {
  }
  word_part__FuncCall(Token* name, arg_list* args) :
                      tag(static_cast<uint16_t>(word_part_e::FuncCall)),
                      name(name), args(args), spids(new List<int>()) {
  }
  uint16_t tag;
  Token* name;
  arg_list* args;
  List<int>* spids;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(word_part__FuncCall)
};

class word_part__ExprSub : public word_part_t {
 public:
  word_part__ExprSub() : tag(static_cast<uint16_t>(word_part_e::ExprSub)),
                     left(nullptr), child(nullptr), spids(new List<int>()) {
  }
  word_part__ExprSub(Token* left, expr_t* child) :
                     tag(static_cast<uint16_t>(word_part_e::ExprSub)),
                     left(left), child(child), spids(new List<int>()) {
  }
  uint16_t tag;
  Token* left;
  expr_t* child;
  List<int>* spids;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(word_part__ExprSub)
};

namespace word_part {
  typedef word_part__AssocArrayLiteral AssocArrayLiteral;
  typedef word_part__EscapedLiteral EscapedLiteral;
  typedef word_part__TildeSub TildeSub;
  typedef word_part__ArithSub ArithSub;
  typedef word_part__BracedTuple BracedTuple;
  typedef word_part__BracedRange BracedRange;
  typedef word_part__ExtGlob ExtGlob;
  typedef word_part__Splice Splice;
  typedef word_part__FuncCall FuncCall;
  typedef word_part__ExprSub ExprSub;
}

namespace word_e {
  const int Empty = 1;
  const int Token = 1001;
  const int Compound = 1010;
  const int BracedTree = 4;
  const int String = 5;
};

const char* word_str(int tag);

class word_t {
 protected:
  word_t() {}
 public:
  int tag_() {
    return reinterpret_cast<Obj*>(this)->tag;
  }
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();
  DISALLOW_COPY_AND_ASSIGN(word_t)
};

class word__Empty : public word_t {
 public:
  word__Empty() : tag(static_cast<uint16_t>(word_e::Empty)) {
  }
  uint16_t tag;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(word__Empty)
};

class word__BracedTree : public word_t {
 public:
  word__BracedTree() : tag(static_cast<uint16_t>(word_e::BracedTree)),
                   parts(new List<word_part_t*>()) {
  }
  word__BracedTree(List<word_part_t*>* parts) :
                   tag(static_cast<uint16_t>(word_e::BracedTree)), parts(parts)
                   {
  }
  uint16_t tag;
  List<word_part_t*>* parts;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(word__BracedTree)
};

class word__String : public word_t {
 public:
  word__String() : tag(static_cast<uint16_t>(word_e::String)), id(-1), s(new
               Str("")), span_id(-1) {
  }
  word__String(Id_t id, Str* s, int span_id) :
               tag(static_cast<uint16_t>(word_e::String)), id(id), s(s),
               span_id(span_id) {
  }
  uint16_t tag;
  uint16_t id;
  Str* s;
  int span_id;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(word__String)
};

namespace word {
  typedef word__Empty Empty;
  typedef word__BracedTree BracedTree;
  typedef word__String String;
}

namespace sh_lhs_expr_e {
  const int Name = 1;
  const int IndexedName = 2;
  const int UnparsedIndex = 3;
};

const char* sh_lhs_expr_str(int tag);

class sh_lhs_expr_t {
 protected:
  sh_lhs_expr_t() {}
 public:
  int tag_() {
    return reinterpret_cast<Obj*>(this)->tag;
  }
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();
  DISALLOW_COPY_AND_ASSIGN(sh_lhs_expr_t)
};

class sh_lhs_expr__Name : public sh_lhs_expr_t {
 public:
  sh_lhs_expr__Name() : tag(static_cast<uint16_t>(sh_lhs_expr_e::Name)),
                    name(new Str("")), spids(new List<int>()) {
  }
  sh_lhs_expr__Name(Str* name) :
                    tag(static_cast<uint16_t>(sh_lhs_expr_e::Name)),
                    name(name), spids(new List<int>()) {
  }
  uint16_t tag;
  Str* name;
  List<int>* spids;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(sh_lhs_expr__Name)
};

class sh_lhs_expr__IndexedName : public sh_lhs_expr_t {
 public:
  sh_lhs_expr__IndexedName() :
                           tag(static_cast<uint16_t>(sh_lhs_expr_e::IndexedName)), name(new Str("")), index(nullptr), spids(new List<int>()) {
  }
  sh_lhs_expr__IndexedName(Str* name, arith_expr_t* index) :
                           tag(static_cast<uint16_t>(sh_lhs_expr_e::IndexedName)), name(name), index(index), spids(new List<int>()) {
  }
  uint16_t tag;
  Str* name;
  arith_expr_t* index;
  List<int>* spids;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(sh_lhs_expr__IndexedName)
};

class sh_lhs_expr__UnparsedIndex : public sh_lhs_expr_t {
 public:
  sh_lhs_expr__UnparsedIndex() :
                             tag(static_cast<uint16_t>(sh_lhs_expr_e::UnparsedIndex)), name(new Str("")), index(new Str("")), spids(new List<int>()) {
  }
  sh_lhs_expr__UnparsedIndex(Str* name, Str* index) :
                             tag(static_cast<uint16_t>(sh_lhs_expr_e::UnparsedIndex)), name(name), index(index), spids(new List<int>()) {
  }
  uint16_t tag;
  Str* name;
  Str* index;
  List<int>* spids;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(sh_lhs_expr__UnparsedIndex)
};

namespace sh_lhs_expr {
  typedef sh_lhs_expr__Name Name;
  typedef sh_lhs_expr__IndexedName IndexedName;
  typedef sh_lhs_expr__UnparsedIndex UnparsedIndex;
}

namespace arith_expr_e {
  const int VarRef = 1;
  const int ArithWord = 2;
  const int UnaryAssign = 3;
  const int BinaryAssign = 4;
  const int Unary = 5;
  const int Binary = 6;
  const int TernaryOp = 7;
};

const char* arith_expr_str(int tag);

class arith_expr_t {
 protected:
  arith_expr_t() {}
 public:
  int tag_() {
    return reinterpret_cast<Obj*>(this)->tag;
  }
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();
  DISALLOW_COPY_AND_ASSIGN(arith_expr_t)
};

class arith_expr__VarRef : public arith_expr_t {
 public:
  arith_expr__VarRef() : tag(static_cast<uint16_t>(arith_expr_e::VarRef)),
                     token(nullptr) {
  }
  arith_expr__VarRef(Token* token) :
                     tag(static_cast<uint16_t>(arith_expr_e::VarRef)),
                     token(token) {
  }
  uint16_t tag;
  Token* token;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(arith_expr__VarRef)
};

class arith_expr__ArithWord : public arith_expr_t {
 public:
  arith_expr__ArithWord() :
                        tag(static_cast<uint16_t>(arith_expr_e::ArithWord)),
                        w(nullptr) {
  }
  arith_expr__ArithWord(word_t* w) :
                        tag(static_cast<uint16_t>(arith_expr_e::ArithWord)),
                        w(w) {
  }
  uint16_t tag;
  word_t* w;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(arith_expr__ArithWord)
};

class arith_expr__UnaryAssign : public arith_expr_t {
 public:
  arith_expr__UnaryAssign() :
                          tag(static_cast<uint16_t>(arith_expr_e::UnaryAssign)), op_id(-1), child(nullptr) {
  }
  arith_expr__UnaryAssign(Id_t op_id, sh_lhs_expr_t* child) :
                          tag(static_cast<uint16_t>(arith_expr_e::UnaryAssign)), op_id(op_id), child(child) {
  }
  uint16_t tag;
  Id_t op_id;
  sh_lhs_expr_t* child;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(arith_expr__UnaryAssign)
};

class arith_expr__BinaryAssign : public arith_expr_t {
 public:
  arith_expr__BinaryAssign() :
                           tag(static_cast<uint16_t>(arith_expr_e::BinaryAssign)), op_id(-1), left(nullptr), right(nullptr) {
  }
  arith_expr__BinaryAssign(Id_t op_id, sh_lhs_expr_t* left, arith_expr_t*
                           right) :
                           tag(static_cast<uint16_t>(arith_expr_e::BinaryAssign)), op_id(op_id), left(left), right(right) {
  }
  uint16_t tag;
  Id_t op_id;
  sh_lhs_expr_t* left;
  arith_expr_t* right;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(arith_expr__BinaryAssign)
};

class arith_expr__Unary : public arith_expr_t {
 public:
  arith_expr__Unary() : tag(static_cast<uint16_t>(arith_expr_e::Unary)),
                    op_id(-1), child(nullptr) {
  }
  arith_expr__Unary(Id_t op_id, arith_expr_t* child) :
                    tag(static_cast<uint16_t>(arith_expr_e::Unary)),
                    op_id(op_id), child(child) {
  }
  uint16_t tag;
  Id_t op_id;
  arith_expr_t* child;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(arith_expr__Unary)
};

class arith_expr__Binary : public arith_expr_t {
 public:
  arith_expr__Binary() : tag(static_cast<uint16_t>(arith_expr_e::Binary)),
                     op_id(-1), left(nullptr), right(nullptr) {
  }
  arith_expr__Binary(Id_t op_id, arith_expr_t* left, arith_expr_t* right) :
                     tag(static_cast<uint16_t>(arith_expr_e::Binary)),
                     op_id(op_id), left(left), right(right) {
  }
  uint16_t tag;
  Id_t op_id;
  arith_expr_t* left;
  arith_expr_t* right;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(arith_expr__Binary)
};

class arith_expr__TernaryOp : public arith_expr_t {
 public:
  arith_expr__TernaryOp() :
                        tag(static_cast<uint16_t>(arith_expr_e::TernaryOp)),
                        cond(nullptr), true_expr(nullptr), false_expr(nullptr) {
  }
  arith_expr__TernaryOp(arith_expr_t* cond, arith_expr_t* true_expr,
                        arith_expr_t* false_expr) :
                        tag(static_cast<uint16_t>(arith_expr_e::TernaryOp)),
                        cond(cond), true_expr(true_expr),
                        false_expr(false_expr) {
  }
  uint16_t tag;
  arith_expr_t* cond;
  arith_expr_t* true_expr;
  arith_expr_t* false_expr;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(arith_expr__TernaryOp)
};

namespace arith_expr {
  typedef arith_expr__VarRef VarRef;
  typedef arith_expr__ArithWord ArithWord;
  typedef arith_expr__UnaryAssign UnaryAssign;
  typedef arith_expr__BinaryAssign BinaryAssign;
  typedef arith_expr__Unary Unary;
  typedef arith_expr__Binary Binary;
  typedef arith_expr__TernaryOp TernaryOp;
}

namespace bool_expr_e {
  const int WordTest = 1;
  const int Binary = 2;
  const int Unary = 3;
  const int LogicalNot = 4;
  const int LogicalAnd = 5;
  const int LogicalOr = 6;
};

const char* bool_expr_str(int tag);

class bool_expr_t {
 protected:
  bool_expr_t() {}
 public:
  int tag_() {
    return reinterpret_cast<Obj*>(this)->tag;
  }
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();
  DISALLOW_COPY_AND_ASSIGN(bool_expr_t)
};

class bool_expr__WordTest : public bool_expr_t {
 public:
  bool_expr__WordTest() : tag(static_cast<uint16_t>(bool_expr_e::WordTest)),
                      w(nullptr) {
  }
  bool_expr__WordTest(word_t* w) :
                      tag(static_cast<uint16_t>(bool_expr_e::WordTest)), w(w) {
  }
  uint16_t tag;
  word_t* w;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(bool_expr__WordTest)
};

class bool_expr__Binary : public bool_expr_t {
 public:
  bool_expr__Binary() : tag(static_cast<uint16_t>(bool_expr_e::Binary)),
                    op_id(-1), left(nullptr), right(nullptr) {
  }
  bool_expr__Binary(Id_t op_id, word_t* left, word_t* right) :
                    tag(static_cast<uint16_t>(bool_expr_e::Binary)),
                    op_id(op_id), left(left), right(right) {
  }
  uint16_t tag;
  Id_t op_id;
  word_t* left;
  word_t* right;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(bool_expr__Binary)
};

class bool_expr__Unary : public bool_expr_t {
 public:
  bool_expr__Unary() : tag(static_cast<uint16_t>(bool_expr_e::Unary)),
                   op_id(-1), child(nullptr) {
  }
  bool_expr__Unary(Id_t op_id, word_t* child) :
                   tag(static_cast<uint16_t>(bool_expr_e::Unary)),
                   op_id(op_id), child(child) {
  }
  uint16_t tag;
  Id_t op_id;
  word_t* child;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(bool_expr__Unary)
};

class bool_expr__LogicalNot : public bool_expr_t {
 public:
  bool_expr__LogicalNot() :
                        tag(static_cast<uint16_t>(bool_expr_e::LogicalNot)),
                        child(nullptr) {
  }
  bool_expr__LogicalNot(bool_expr_t* child) :
                        tag(static_cast<uint16_t>(bool_expr_e::LogicalNot)),
                        child(child) {
  }
  uint16_t tag;
  bool_expr_t* child;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(bool_expr__LogicalNot)
};

class bool_expr__LogicalAnd : public bool_expr_t {
 public:
  bool_expr__LogicalAnd() :
                        tag(static_cast<uint16_t>(bool_expr_e::LogicalAnd)),
                        left(nullptr), right(nullptr) {
  }
  bool_expr__LogicalAnd(bool_expr_t* left, bool_expr_t* right) :
                        tag(static_cast<uint16_t>(bool_expr_e::LogicalAnd)),
                        left(left), right(right) {
  }
  uint16_t tag;
  bool_expr_t* left;
  bool_expr_t* right;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(bool_expr__LogicalAnd)
};

class bool_expr__LogicalOr : public bool_expr_t {
 public:
  bool_expr__LogicalOr() : tag(static_cast<uint16_t>(bool_expr_e::LogicalOr)),
                       left(nullptr), right(nullptr) {
  }
  bool_expr__LogicalOr(bool_expr_t* left, bool_expr_t* right) :
                       tag(static_cast<uint16_t>(bool_expr_e::LogicalOr)),
                       left(left), right(right) {
  }
  uint16_t tag;
  bool_expr_t* left;
  bool_expr_t* right;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(bool_expr__LogicalOr)
};

namespace bool_expr {
  typedef bool_expr__WordTest WordTest;
  typedef bool_expr__Binary Binary;
  typedef bool_expr__Unary Unary;
  typedef bool_expr__LogicalNot LogicalNot;
  typedef bool_expr__LogicalAnd LogicalAnd;
  typedef bool_expr__LogicalOr LogicalOr;
}

namespace redir_loc_e {
  const int Fd = 1;
  const int VarName = 2;
};

const char* redir_loc_str(int tag);

class redir_loc_t {
 protected:
  redir_loc_t() {}
 public:
  int tag_() {
    return reinterpret_cast<Obj*>(this)->tag;
  }
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();
  DISALLOW_COPY_AND_ASSIGN(redir_loc_t)
};

class redir_loc__Fd : public redir_loc_t {
 public:
  redir_loc__Fd() : tag(static_cast<uint16_t>(redir_loc_e::Fd)), fd(-1) {
  }
  redir_loc__Fd(int fd) : tag(static_cast<uint16_t>(redir_loc_e::Fd)), fd(fd) {
  }
  uint16_t tag;
  int fd;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(redir_loc__Fd)
};

class redir_loc__VarName : public redir_loc_t {
 public:
  redir_loc__VarName() : tag(static_cast<uint16_t>(redir_loc_e::VarName)),
                     name(new Str("")) {
  }
  redir_loc__VarName(Str* name) :
                     tag(static_cast<uint16_t>(redir_loc_e::VarName)),
                     name(name) {
  }
  uint16_t tag;
  Str* name;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(redir_loc__VarName)
};

namespace redir_loc {
  typedef redir_loc__Fd Fd;
  typedef redir_loc__VarName VarName;
}

namespace redir_param_e {
  const int Word = 1010;
  const int MultiLine = 2;
};

const char* redir_param_str(int tag);

class redir_param_t {
 protected:
  redir_param_t() {}
 public:
  int tag_() {
    return reinterpret_cast<Obj*>(this)->tag;
  }
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();
  DISALLOW_COPY_AND_ASSIGN(redir_param_t)
};

class redir_param__MultiLine : public redir_param_t {
 public:
  redir_param__MultiLine() :
                         tag(static_cast<uint16_t>(redir_param_e::MultiLine)),
                         here_begin(nullptr), here_end_span_id(-1),
                         stdin_parts(new List<word_part_t*>()) {
  }
  redir_param__MultiLine(word_t* here_begin, int here_end_span_id,
                         List<word_part_t*>* stdin_parts) :
                         tag(static_cast<uint16_t>(redir_param_e::MultiLine)),
                         here_begin(here_begin),
                         here_end_span_id(here_end_span_id),
                         stdin_parts(stdin_parts) {
  }
  uint16_t tag;
  word_t* here_begin;
  int here_end_span_id;
  List<word_part_t*>* stdin_parts;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(redir_param__MultiLine)
};

namespace redir_param {
  typedef redir_param__MultiLine MultiLine;
}

enum class assign_op_e {
  Equal = 1,
  PlusEqual = 2,
};
typedef assign_op_e assign_op_t;

const char* assign_op_str(assign_op_e tag);

namespace command_e {
  const int NoOp = 1;
  const int Simple = 2;
  const int ExpandedAlias = 3;
  const int Sentence = 4;
  const int ShAssignment = 5;
  const int ControlFlow = 6;
  const int Pipeline = 7;
  const int AndOr = 8;
  const int DoGroup = 9;
  const int BraceGroup = 10;
  const int Subshell = 11;
  const int DParen = 12;
  const int DBracket = 13;
  const int ForEach = 14;
  const int ForExpr = 15;
  const int WhileUntil = 16;
  const int If = 17;
  const int Case = 18;
  const int ShFunction = 19;
  const int TimeBlock = 20;
  const int CommandList = 21;
  const int BareDecl = 22;
  const int VarDecl = 23;
  const int PlaceMutation = 24;
  const int Expr = 25;
  const int Return = 26;
  const int OilCondition = 27;
  const int OilForIn = 28;
  const int Proc = 29;
  const int Func = 30;
};

const char* command_str(int tag);

class command_t {
 protected:
  command_t() {}
 public:
  int tag_() {
    return reinterpret_cast<Obj*>(this)->tag;
  }
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();
  DISALLOW_COPY_AND_ASSIGN(command_t)
};

class command__NoOp : public command_t {
 public:
  command__NoOp() : tag(static_cast<uint16_t>(command_e::NoOp)), spids(new
                List<int>()) {
  }
  uint16_t tag;
  List<int>* spids;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(command__NoOp)
};

class command__Simple : public command_t {
 public:
  command__Simple() : tag(static_cast<uint16_t>(command_e::Simple)), words(new
                  List<word_t*>()), redirects(new List<redir*>()), more_env(new
                  List<env_pair*>()), block(nullptr), spids(new List<int>()) {
  }
  command__Simple(List<word_t*>* words, List<redir*>* redirects,
                  List<env_pair*>* more_env, command_t* block) :
                  tag(static_cast<uint16_t>(command_e::Simple)), words(words),
                  redirects(redirects), more_env(more_env), block(block),
                  spids(new List<int>()) {
  }
  uint16_t tag;
  List<word_t*>* words;
  List<redir*>* redirects;
  List<env_pair*>* more_env;
  command_t* block;
  List<int>* spids;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(command__Simple)
};

class command__ExpandedAlias : public command_t {
 public:
  command__ExpandedAlias() :
                         tag(static_cast<uint16_t>(command_e::ExpandedAlias)),
                         child(nullptr), redirects(new List<redir*>()),
                         more_env(new List<env_pair*>()), spids(new
                         List<int>()) {
  }
  command__ExpandedAlias(command_t* child, List<redir*>* redirects,
                         List<env_pair*>* more_env) :
                         tag(static_cast<uint16_t>(command_e::ExpandedAlias)),
                         child(child), redirects(redirects),
                         more_env(more_env), spids(new List<int>()) {
  }
  uint16_t tag;
  command_t* child;
  List<redir*>* redirects;
  List<env_pair*>* more_env;
  List<int>* spids;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(command__ExpandedAlias)
};

class command__Sentence : public command_t {
 public:
  command__Sentence() : tag(static_cast<uint16_t>(command_e::Sentence)),
                    child(nullptr), terminator(nullptr), spids(new List<int>())
                    {
  }
  command__Sentence(command_t* child, Token* terminator) :
                    tag(static_cast<uint16_t>(command_e::Sentence)),
                    child(child), terminator(terminator), spids(new
                    List<int>()) {
  }
  uint16_t tag;
  command_t* child;
  Token* terminator;
  List<int>* spids;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(command__Sentence)
};

class command__ShAssignment : public command_t {
 public:
  command__ShAssignment() :
                        tag(static_cast<uint16_t>(command_e::ShAssignment)),
                        pairs(new List<assign_pair*>()), redirects(new
                        List<redir*>()), spids(new List<int>()) {
  }
  command__ShAssignment(List<assign_pair*>* pairs, List<redir*>* redirects) :
                        tag(static_cast<uint16_t>(command_e::ShAssignment)),
                        pairs(pairs), redirects(redirects), spids(new
                        List<int>()) {
  }
  uint16_t tag;
  List<assign_pair*>* pairs;
  List<redir*>* redirects;
  List<int>* spids;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(command__ShAssignment)
};

class command__ControlFlow : public command_t {
 public:
  command__ControlFlow() : tag(static_cast<uint16_t>(command_e::ControlFlow)),
                       token(nullptr), arg_word(nullptr), spids(new
                       List<int>()) {
  }
  command__ControlFlow(Token* token, word_t* arg_word) :
                       tag(static_cast<uint16_t>(command_e::ControlFlow)),
                       token(token), arg_word(arg_word), spids(new List<int>())
                       {
  }
  uint16_t tag;
  Token* token;
  word_t* arg_word;
  List<int>* spids;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(command__ControlFlow)
};

class command__Pipeline : public command_t {
 public:
  command__Pipeline() : tag(static_cast<uint16_t>(command_e::Pipeline)),
                    children(new List<command_t*>()), negated(false),
                    stderr_indices(new List<int>()), spids(new List<int>()) {
  }
  command__Pipeline(List<command_t*>* children, bool negated, List<int>*
                    stderr_indices) :
                    tag(static_cast<uint16_t>(command_e::Pipeline)),
                    children(children), negated(negated),
                    stderr_indices(stderr_indices), spids(new List<int>()) {
  }
  uint16_t tag;
  List<command_t*>* children;
  bool negated;
  List<int>* stderr_indices;
  List<int>* spids;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(command__Pipeline)
};

class command__AndOr : public command_t {
 public:
  command__AndOr() : tag(static_cast<uint16_t>(command_e::AndOr)), ops(new
                 List<Id_t>()), children(new List<command_t*>()), spids(new
                 List<int>()) {
  }
  command__AndOr(List<Id_t>* ops, List<command_t*>* children) :
                 tag(static_cast<uint16_t>(command_e::AndOr)), ops(ops),
                 children(children), spids(new List<int>()) {
  }
  uint16_t tag;
  List<Id_t>* ops;
  List<command_t*>* children;
  List<int>* spids;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(command__AndOr)
};

class command__DoGroup : public command_t {
 public:
  command__DoGroup() : tag(static_cast<uint16_t>(command_e::DoGroup)),
                   children(new List<command_t*>()), redirects(new
                   List<redir*>()), spids(new List<int>()) {
  }
  command__DoGroup(List<command_t*>* children, List<redir*>* redirects) :
                   tag(static_cast<uint16_t>(command_e::DoGroup)),
                   children(children), redirects(redirects), spids(new
                   List<int>()) {
  }
  uint16_t tag;
  List<command_t*>* children;
  List<redir*>* redirects;
  List<int>* spids;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(command__DoGroup)
};

class command__BraceGroup : public command_t {
 public:
  command__BraceGroup() : tag(static_cast<uint16_t>(command_e::BraceGroup)),
                      children(new List<command_t*>()), redirects(new
                      List<redir*>()), spids(new List<int>()) {
  }
  command__BraceGroup(List<command_t*>* children, List<redir*>* redirects) :
                      tag(static_cast<uint16_t>(command_e::BraceGroup)),
                      children(children), redirects(redirects), spids(new
                      List<int>()) {
  }
  uint16_t tag;
  List<command_t*>* children;
  List<redir*>* redirects;
  List<int>* spids;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(command__BraceGroup)
};

class command__Subshell : public command_t {
 public:
  command__Subshell() : tag(static_cast<uint16_t>(command_e::Subshell)),
                    command_list(nullptr), redirects(new List<redir*>()),
                    spids(new List<int>()) {
  }
  command__Subshell(command_t* command_list, List<redir*>* redirects) :
                    tag(static_cast<uint16_t>(command_e::Subshell)),
                    command_list(command_list), redirects(redirects), spids(new
                    List<int>()) {
  }
  uint16_t tag;
  command_t* command_list;
  List<redir*>* redirects;
  List<int>* spids;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(command__Subshell)
};

class command__DParen : public command_t {
 public:
  command__DParen() : tag(static_cast<uint16_t>(command_e::DParen)),
                  child(nullptr), redirects(new List<redir*>()), spids(new
                  List<int>()) {
  }
  command__DParen(arith_expr_t* child, List<redir*>* redirects) :
                  tag(static_cast<uint16_t>(command_e::DParen)), child(child),
                  redirects(redirects), spids(new List<int>()) {
  }
  uint16_t tag;
  arith_expr_t* child;
  List<redir*>* redirects;
  List<int>* spids;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(command__DParen)
};

class command__DBracket : public command_t {
 public:
  command__DBracket() : tag(static_cast<uint16_t>(command_e::DBracket)),
                    expr(nullptr), redirects(new List<redir*>()), spids(new
                    List<int>()) {
  }
  command__DBracket(bool_expr_t* expr, List<redir*>* redirects) :
                    tag(static_cast<uint16_t>(command_e::DBracket)),
                    expr(expr), redirects(redirects), spids(new List<int>()) {
  }
  uint16_t tag;
  bool_expr_t* expr;
  List<redir*>* redirects;
  List<int>* spids;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(command__DBracket)
};

class command__ForEach : public command_t {
 public:
  command__ForEach() : tag(static_cast<uint16_t>(command_e::ForEach)),
                   iter_name(new Str("")), iter_words(new List<word_t*>()),
                   do_arg_iter(false), body(nullptr), redirects(new
                   List<redir*>()), spids(new List<int>()) {
  }
  command__ForEach(Str* iter_name, List<word_t*>* iter_words, bool do_arg_iter,
                   command_t* body, List<redir*>* redirects) :
                   tag(static_cast<uint16_t>(command_e::ForEach)),
                   iter_name(iter_name), iter_words(iter_words),
                   do_arg_iter(do_arg_iter), body(body), redirects(redirects),
                   spids(new List<int>()) {
  }
  uint16_t tag;
  Str* iter_name;
  List<word_t*>* iter_words;
  bool do_arg_iter;
  command_t* body;
  List<redir*>* redirects;
  List<int>* spids;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(command__ForEach)
};

class command__ForExpr : public command_t {
 public:
  command__ForExpr() : tag(static_cast<uint16_t>(command_e::ForExpr)),
                   init(nullptr), cond(nullptr), update(nullptr),
                   body(nullptr), redirects(new List<redir*>()), spids(new
                   List<int>()) {
  }
  command__ForExpr(arith_expr_t* init, arith_expr_t* cond, arith_expr_t*
                   update, command_t* body, List<redir*>* redirects) :
                   tag(static_cast<uint16_t>(command_e::ForExpr)), init(init),
                   cond(cond), update(update), body(body),
                   redirects(redirects), spids(new List<int>()) {
  }
  uint16_t tag;
  arith_expr_t* init;
  arith_expr_t* cond;
  arith_expr_t* update;
  command_t* body;
  List<redir*>* redirects;
  List<int>* spids;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(command__ForExpr)
};

class command__WhileUntil : public command_t {
 public:
  command__WhileUntil() : tag(static_cast<uint16_t>(command_e::WhileUntil)),
                      keyword(nullptr), cond(new List<command_t*>()),
                      body(nullptr), redirects(new List<redir*>()), spids(new
                      List<int>()) {
  }
  command__WhileUntil(Token* keyword, List<command_t*>* cond, command_t* body,
                      List<redir*>* redirects) :
                      tag(static_cast<uint16_t>(command_e::WhileUntil)),
                      keyword(keyword), cond(cond), body(body),
                      redirects(redirects), spids(new List<int>()) {
  }
  uint16_t tag;
  Token* keyword;
  List<command_t*>* cond;
  command_t* body;
  List<redir*>* redirects;
  List<int>* spids;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(command__WhileUntil)
};

class command__If : public command_t {
 public:
  command__If() : tag(static_cast<uint16_t>(command_e::If)), arms(new
              List<if_arm*>()), else_action(new List<command_t*>()),
              redirects(new List<redir*>()), spids(new List<int>()) {
  }
  command__If(List<if_arm*>* arms, List<command_t*>* else_action, List<redir*>*
              redirects) : tag(static_cast<uint16_t>(command_e::If)),
              arms(arms), else_action(else_action), redirects(redirects),
              spids(new List<int>()) {
  }
  uint16_t tag;
  List<if_arm*>* arms;
  List<command_t*>* else_action;
  List<redir*>* redirects;
  List<int>* spids;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(command__If)
};

class command__Case : public command_t {
 public:
  command__Case() : tag(static_cast<uint16_t>(command_e::Case)),
                to_match(nullptr), arms(new List<case_arm*>()), redirects(new
                List<redir*>()), spids(new List<int>()) {
  }
  command__Case(word_t* to_match, List<case_arm*>* arms, List<redir*>*
                redirects) : tag(static_cast<uint16_t>(command_e::Case)),
                to_match(to_match), arms(arms), redirects(redirects), spids(new
                List<int>()) {
  }
  uint16_t tag;
  word_t* to_match;
  List<case_arm*>* arms;
  List<redir*>* redirects;
  List<int>* spids;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(command__Case)
};

class command__ShFunction : public command_t {
 public:
  command__ShFunction() : tag(static_cast<uint16_t>(command_e::ShFunction)),
                      name(new Str("")), body(nullptr), spids(new List<int>()) {
  }
  command__ShFunction(Str* name, command_t* body) :
                      tag(static_cast<uint16_t>(command_e::ShFunction)),
                      name(name), body(body), spids(new List<int>()) {
  }
  uint16_t tag;
  Str* name;
  command_t* body;
  List<int>* spids;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(command__ShFunction)
};

class command__TimeBlock : public command_t {
 public:
  command__TimeBlock() : tag(static_cast<uint16_t>(command_e::TimeBlock)),
                     pipeline(nullptr), spids(new List<int>()) {
  }
  command__TimeBlock(command_t* pipeline) :
                     tag(static_cast<uint16_t>(command_e::TimeBlock)),
                     pipeline(pipeline), spids(new List<int>()) {
  }
  uint16_t tag;
  command_t* pipeline;
  List<int>* spids;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(command__TimeBlock)
};

class command__CommandList : public command_t {
 public:
  command__CommandList() : tag(static_cast<uint16_t>(command_e::CommandList)),
                       children(new List<command_t*>()), spids(new List<int>())
                       {
  }
  command__CommandList(List<command_t*>* children) :
                       tag(static_cast<uint16_t>(command_e::CommandList)),
                       children(children), spids(new List<int>()) {
  }
  uint16_t tag;
  List<command_t*>* children;
  List<int>* spids;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(command__CommandList)
};

class command__BareDecl : public command_t {
 public:
  command__BareDecl() : tag(static_cast<uint16_t>(command_e::BareDecl)),
                    lhs(nullptr), rhs(nullptr), spids(new List<int>()) {
  }
  command__BareDecl(Token* lhs, expr_t* rhs) :
                    tag(static_cast<uint16_t>(command_e::BareDecl)), lhs(lhs),
                    rhs(rhs), spids(new List<int>()) {
  }
  uint16_t tag;
  Token* lhs;
  expr_t* rhs;
  List<int>* spids;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(command__BareDecl)
};

class command__VarDecl : public command_t {
 public:
  command__VarDecl() : tag(static_cast<uint16_t>(command_e::VarDecl)),
                   keyword(nullptr), lhs(new List<name_type*>()), rhs(nullptr),
                   spids(new List<int>()) {
  }
  command__VarDecl(Token* keyword, List<name_type*>* lhs, expr_t* rhs) :
                   tag(static_cast<uint16_t>(command_e::VarDecl)),
                   keyword(keyword), lhs(lhs), rhs(rhs), spids(new List<int>())
                   {
  }
  uint16_t tag;
  Token* keyword;
  List<name_type*>* lhs;
  expr_t* rhs;
  List<int>* spids;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(command__VarDecl)
};

class command__PlaceMutation : public command_t {
 public:
  command__PlaceMutation() :
                         tag(static_cast<uint16_t>(command_e::PlaceMutation)),
                         keyword(nullptr), lhs(new List<place_expr_t*>()),
                         op(nullptr), rhs(nullptr), spids(new List<int>()) {
  }
  command__PlaceMutation(Token* keyword, List<place_expr_t*>* lhs, Token* op,
                         expr_t* rhs) :
                         tag(static_cast<uint16_t>(command_e::PlaceMutation)),
                         keyword(keyword), lhs(lhs), op(op), rhs(rhs),
                         spids(new List<int>()) {
  }
  uint16_t tag;
  Token* keyword;
  List<place_expr_t*>* lhs;
  Token* op;
  expr_t* rhs;
  List<int>* spids;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(command__PlaceMutation)
};

class command__Expr : public command_t {
 public:
  command__Expr() : tag(static_cast<uint16_t>(command_e::Expr)),
                keyword(nullptr), e(nullptr), spids(new List<int>()) {
  }
  command__Expr(speck* keyword, expr_t* e) :
                tag(static_cast<uint16_t>(command_e::Expr)), keyword(keyword),
                e(e), spids(new List<int>()) {
  }
  uint16_t tag;
  speck* keyword;
  expr_t* e;
  List<int>* spids;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(command__Expr)
};

class command__Return : public command_t {
 public:
  command__Return() : tag(static_cast<uint16_t>(command_e::Return)),
                  keyword(nullptr), e(nullptr), spids(new List<int>()) {
  }
  command__Return(Token* keyword, expr_t* e) :
                  tag(static_cast<uint16_t>(command_e::Return)),
                  keyword(keyword), e(e), spids(new List<int>()) {
  }
  uint16_t tag;
  Token* keyword;
  expr_t* e;
  List<int>* spids;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(command__Return)
};

class command__OilCondition : public command_t {
 public:
  command__OilCondition() :
                        tag(static_cast<uint16_t>(command_e::OilCondition)),
                        e(nullptr), spids(new List<int>()) {
  }
  command__OilCondition(expr_t* e) :
                        tag(static_cast<uint16_t>(command_e::OilCondition)),
                        e(e), spids(new List<int>()) {
  }
  uint16_t tag;
  expr_t* e;
  List<int>* spids;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(command__OilCondition)
};

class command__OilForIn : public command_t {
 public:
  command__OilForIn() : tag(static_cast<uint16_t>(command_e::OilForIn)),
                    lhs(new List<name_type*>()), iterable(nullptr),
                    body(nullptr), spids(new List<int>()) {
  }
  command__OilForIn(List<name_type*>* lhs, expr_t* iterable, command_t* body) :
                    tag(static_cast<uint16_t>(command_e::OilForIn)), lhs(lhs),
                    iterable(iterable), body(body), spids(new List<int>()) {
  }
  uint16_t tag;
  List<name_type*>* lhs;
  expr_t* iterable;
  command_t* body;
  List<int>* spids;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(command__OilForIn)
};

class command__Proc : public command_t {
 public:
  command__Proc() : tag(static_cast<uint16_t>(command_e::Proc)), name(nullptr),
                sig(nullptr), body(nullptr), spids(new List<int>()) {
  }
  command__Proc(Token* name, proc_sig_t* sig, command_t* body) :
                tag(static_cast<uint16_t>(command_e::Proc)), name(name),
                sig(sig), body(body), spids(new List<int>()) {
  }
  uint16_t tag;
  Token* name;
  proc_sig_t* sig;
  command_t* body;
  List<int>* spids;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(command__Proc)
};

class command__Func : public command_t {
 public:
  command__Func() : tag(static_cast<uint16_t>(command_e::Func)), name(nullptr),
                pos_params(new List<param*>()), pos_splat(nullptr),
                named_params(new List<param*>()), named_splat(nullptr),
                return_types(new List<type_expr_t*>()), body(nullptr),
                spids(new List<int>()) {
  }
  command__Func(Token* name, List<param*>* pos_params, Token* pos_splat,
                List<param*>* named_params, Token* named_splat,
                List<type_expr_t*>* return_types, command_t* body) :
                tag(static_cast<uint16_t>(command_e::Func)), name(name),
                pos_params(pos_params), pos_splat(pos_splat),
                named_params(named_params), named_splat(named_splat),
                return_types(return_types), body(body), spids(new List<int>()) {
  }
  uint16_t tag;
  Token* name;
  List<param*>* pos_params;
  Token* pos_splat;
  List<param*>* named_params;
  Token* named_splat;
  List<type_expr_t*>* return_types;
  command_t* body;
  List<int>* spids;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(command__Func)
};

namespace command {
  typedef command__NoOp NoOp;
  typedef command__Simple Simple;
  typedef command__ExpandedAlias ExpandedAlias;
  typedef command__Sentence Sentence;
  typedef command__ShAssignment ShAssignment;
  typedef command__ControlFlow ControlFlow;
  typedef command__Pipeline Pipeline;
  typedef command__AndOr AndOr;
  typedef command__DoGroup DoGroup;
  typedef command__BraceGroup BraceGroup;
  typedef command__Subshell Subshell;
  typedef command__DParen DParen;
  typedef command__DBracket DBracket;
  typedef command__ForEach ForEach;
  typedef command__ForExpr ForExpr;
  typedef command__WhileUntil WhileUntil;
  typedef command__If If;
  typedef command__Case Case;
  typedef command__ShFunction ShFunction;
  typedef command__TimeBlock TimeBlock;
  typedef command__CommandList CommandList;
  typedef command__BareDecl BareDecl;
  typedef command__VarDecl VarDecl;
  typedef command__PlaceMutation PlaceMutation;
  typedef command__Expr Expr;
  typedef command__Return Return;
  typedef command__OilCondition OilCondition;
  typedef command__OilForIn OilForIn;
  typedef command__Proc Proc;
  typedef command__Func Func;
}

namespace proc_sig_e {
  const int Open = 1;
  const int Closed = 2;
};

const char* proc_sig_str(int tag);

class proc_sig_t {
 protected:
  proc_sig_t() {}
 public:
  int tag_() {
    return reinterpret_cast<Obj*>(this)->tag;
  }
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();
  DISALLOW_COPY_AND_ASSIGN(proc_sig_t)
};

class proc_sig__Open : public proc_sig_t {
 public:
  proc_sig__Open() : tag(static_cast<uint16_t>(proc_sig_e::Open)) {
  }
  uint16_t tag;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(proc_sig__Open)
};

class proc_sig__Closed : public proc_sig_t {
 public:
  proc_sig__Closed() : tag(static_cast<uint16_t>(proc_sig_e::Closed)),
                   params(new List<param*>()), rest(nullptr), block(nullptr) {
  }
  proc_sig__Closed(List<param*>* params, Token* rest, Token* block) :
                   tag(static_cast<uint16_t>(proc_sig_e::Closed)),
                   params(params), rest(rest), block(block) {
  }
  uint16_t tag;
  List<param*>* params;
  Token* rest;
  Token* block;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(proc_sig__Closed)
};

namespace proc_sig {
  typedef proc_sig__Open Open;
  typedef proc_sig__Closed Closed;
}

namespace glob_part_e {
  const int Literal = 1;
  const int Operator = 2;
  const int CharClass = 3;
};

const char* glob_part_str(int tag);

class glob_part_t {
 protected:
  glob_part_t() {}
 public:
  int tag_() {
    return reinterpret_cast<Obj*>(this)->tag;
  }
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();
  DISALLOW_COPY_AND_ASSIGN(glob_part_t)
};

class glob_part__Literal : public glob_part_t {
 public:
  glob_part__Literal() : tag(static_cast<uint16_t>(glob_part_e::Literal)),
                     id(-1), s(new Str("")) {
  }
  glob_part__Literal(Id_t id, Str* s) :
                     tag(static_cast<uint16_t>(glob_part_e::Literal)), id(id),
                     s(s) {
  }
  uint16_t tag;
  uint16_t id;
  Str* s;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(glob_part__Literal)
};

class glob_part__Operator : public glob_part_t {
 public:
  glob_part__Operator() : tag(static_cast<uint16_t>(glob_part_e::Operator)),
                      op_id(-1) {
  }
  glob_part__Operator(Id_t op_id) :
                      tag(static_cast<uint16_t>(glob_part_e::Operator)),
                      op_id(op_id) {
  }
  uint16_t tag;
  Id_t op_id;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(glob_part__Operator)
};

class glob_part__CharClass : public glob_part_t {
 public:
  glob_part__CharClass() : tag(static_cast<uint16_t>(glob_part_e::CharClass)),
                       negated(false), strs(new List<Str*>()) {
  }
  glob_part__CharClass(bool negated, List<Str*>* strs) :
                       tag(static_cast<uint16_t>(glob_part_e::CharClass)),
                       negated(negated), strs(strs) {
  }
  uint16_t tag;
  bool negated;
  List<Str*>* strs;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(glob_part__CharClass)
};

namespace glob_part {
  typedef glob_part__Literal Literal;
  typedef glob_part__Operator Operator;
  typedef glob_part__CharClass CharClass;
}

namespace printf_part_e {
  const int Literal = 1;
  const int Percent = 2;
};

const char* printf_part_str(int tag);

class printf_part_t {
 protected:
  printf_part_t() {}
 public:
  int tag_() {
    return reinterpret_cast<Obj*>(this)->tag;
  }
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();
  DISALLOW_COPY_AND_ASSIGN(printf_part_t)
};

class printf_part__Literal : public printf_part_t {
 public:
  printf_part__Literal() : tag(static_cast<uint16_t>(printf_part_e::Literal)),
                       token(nullptr) {
  }
  printf_part__Literal(Token* token) :
                       tag(static_cast<uint16_t>(printf_part_e::Literal)),
                       token(token) {
  }
  uint16_t tag;
  Token* token;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(printf_part__Literal)
};

class printf_part__Percent : public printf_part_t {
 public:
  printf_part__Percent() : tag(static_cast<uint16_t>(printf_part_e::Percent)),
                       flags(new List<Token*>()), width(nullptr),
                       precision(nullptr), type(nullptr) {
  }
  printf_part__Percent(List<Token*>* flags, Token* width, Token* precision,
                       Token* type) :
                       tag(static_cast<uint16_t>(printf_part_e::Percent)),
                       flags(flags), width(width), precision(precision),
                       type(type) {
  }
  uint16_t tag;
  List<Token*>* flags;
  Token* width;
  Token* precision;
  Token* type;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(printf_part__Percent)
};

namespace printf_part {
  typedef printf_part__Literal Literal;
  typedef printf_part__Percent Percent;
}

enum class expr_context_e {
  Load = 1,
  Store = 2,
  Del = 3,
  AugLoad = 4,
  AugStore = 5,
  Param = 6,
};
typedef expr_context_e expr_context_t;

const char* expr_context_str(expr_context_e tag);

namespace type_expr_e {
  const int Simple = 1;
  const int Compound = 2;
};

const char* type_expr_str(int tag);

class type_expr_t {
 protected:
  type_expr_t() {}
 public:
  int tag_() {
    return reinterpret_cast<Obj*>(this)->tag;
  }
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();
  DISALLOW_COPY_AND_ASSIGN(type_expr_t)
};

class type_expr__Simple : public type_expr_t {
 public:
  type_expr__Simple() : tag(static_cast<uint16_t>(type_expr_e::Simple)),
                    name(nullptr) {
  }
  type_expr__Simple(Token* name) :
                    tag(static_cast<uint16_t>(type_expr_e::Simple)), name(name)
                    {
  }
  uint16_t tag;
  Token* name;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(type_expr__Simple)
};

class type_expr__Compound : public type_expr_t {
 public:
  type_expr__Compound() : tag(static_cast<uint16_t>(type_expr_e::Compound)),
                      name(nullptr), params(new List<type_expr_t*>()) {
  }
  type_expr__Compound(Token* name, List<type_expr_t*>* params) :
                      tag(static_cast<uint16_t>(type_expr_e::Compound)),
                      name(name), params(params) {
  }
  uint16_t tag;
  Token* name;
  List<type_expr_t*>* params;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(type_expr__Compound)
};

namespace type_expr {
  typedef type_expr__Simple Simple;
  typedef type_expr__Compound Compound;
}

namespace place_expr_e {
  const int Var = 1;
  const int Subscript = 1020;
  const int Attribute = 1021;
};

const char* place_expr_str(int tag);

class place_expr_t {
 protected:
  place_expr_t() {}
 public:
  int tag_() {
    return reinterpret_cast<Obj*>(this)->tag;
  }
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();
  DISALLOW_COPY_AND_ASSIGN(place_expr_t)
};

class place_expr__Var : public place_expr_t {
 public:
  place_expr__Var() : tag(static_cast<uint16_t>(place_expr_e::Var)),
                  name(nullptr) {
  }
  place_expr__Var(Token* name) : tag(static_cast<uint16_t>(place_expr_e::Var)),
                  name(name) {
  }
  uint16_t tag;
  Token* name;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(place_expr__Var)
};

namespace place_expr {
  typedef place_expr__Var Var;
}

namespace expr_e {
  const int Var = 1;
  const int Const = 2;
  const int ShArrayLiteral = 1008;
  const int ArrayLiteral = 4;
  const int RegexLiteral = 5;
  const int SimpleVarSub = 1005;
  const int BracedVarSub = 1006;
  const int CommandSub = 1007;
  const int SingleQuoted = 1004;
  const int DoubleQuoted = 1003;
  const int Lambda = 11;
  const int Unary = 12;
  const int Binary = 13;
  const int Compare = 14;
  const int FuncCall = 15;
  const int IfExp = 16;
  const int Tuple = 17;
  const int List = 18;
  const int Dict = 19;
  const int Implicit = 20;
  const int ListComp = 21;
  const int DictComp = 22;
  const int GeneratorExp = 23;
  const int Range = 24;
  const int Slice = 25;
  const int Subscript = 1020;
  const int Attribute = 1021;
  const int Spread = 28;
};

const char* expr_str(int tag);

class expr_t {
 protected:
  expr_t() {}
 public:
  int tag_() {
    return reinterpret_cast<Obj*>(this)->tag;
  }
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();
  DISALLOW_COPY_AND_ASSIGN(expr_t)
};

class expr__Var : public expr_t {
 public:
  expr__Var() : tag(static_cast<uint16_t>(expr_e::Var)), name(nullptr),
            spids(new List<int>()) {
  }
  expr__Var(Token* name) : tag(static_cast<uint16_t>(expr_e::Var)), name(name),
            spids(new List<int>()) {
  }
  uint16_t tag;
  Token* name;
  List<int>* spids;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(expr__Var)
};

class expr__Const : public expr_t {
 public:
  expr__Const() : tag(static_cast<uint16_t>(expr_e::Const)), c(nullptr),
              spids(new List<int>()) {
  }
  expr__Const(Token* c) : tag(static_cast<uint16_t>(expr_e::Const)), c(c),
              spids(new List<int>()) {
  }
  uint16_t tag;
  Token* c;
  List<int>* spids;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(expr__Const)
};

class expr__ArrayLiteral : public expr_t {
 public:
  expr__ArrayLiteral() : tag(static_cast<uint16_t>(expr_e::ArrayLiteral)),
                     left(nullptr), items(new List<expr_t*>()), spids(new
                     List<int>()) {
  }
  expr__ArrayLiteral(Token* left, List<expr_t*>* items) :
                     tag(static_cast<uint16_t>(expr_e::ArrayLiteral)),
                     left(left), items(items), spids(new List<int>()) {
  }
  uint16_t tag;
  Token* left;
  List<expr_t*>* items;
  List<int>* spids;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(expr__ArrayLiteral)
};

class expr__RegexLiteral : public expr_t {
 public:
  expr__RegexLiteral() : tag(static_cast<uint16_t>(expr_e::RegexLiteral)),
                     left(nullptr), regex(nullptr), flags(new List<Token*>()),
                     trans_pref(nullptr), spids(new List<int>()) {
  }
  expr__RegexLiteral(Token* left, re_t* regex, List<Token*>* flags, Token*
                     trans_pref) :
                     tag(static_cast<uint16_t>(expr_e::RegexLiteral)),
                     left(left), regex(regex), flags(flags),
                     trans_pref(trans_pref), spids(new List<int>()) {
  }
  uint16_t tag;
  Token* left;
  re_t* regex;
  List<Token*>* flags;
  Token* trans_pref;
  List<int>* spids;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(expr__RegexLiteral)
};

class expr__Lambda : public expr_t {
 public:
  expr__Lambda() : tag(static_cast<uint16_t>(expr_e::Lambda)), params(new
               List<name_type*>()), body(nullptr), spids(new List<int>()) {
  }
  expr__Lambda(List<name_type*>* params, expr_t* body) :
               tag(static_cast<uint16_t>(expr_e::Lambda)), params(params),
               body(body), spids(new List<int>()) {
  }
  uint16_t tag;
  List<name_type*>* params;
  expr_t* body;
  List<int>* spids;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(expr__Lambda)
};

class expr__Unary : public expr_t {
 public:
  expr__Unary() : tag(static_cast<uint16_t>(expr_e::Unary)), op(nullptr),
              child(nullptr), spids(new List<int>()) {
  }
  expr__Unary(Token* op, expr_t* child) :
              tag(static_cast<uint16_t>(expr_e::Unary)), op(op), child(child),
              spids(new List<int>()) {
  }
  uint16_t tag;
  Token* op;
  expr_t* child;
  List<int>* spids;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(expr__Unary)
};

class expr__Binary : public expr_t {
 public:
  expr__Binary() : tag(static_cast<uint16_t>(expr_e::Binary)), op(nullptr),
               left(nullptr), right(nullptr), spids(new List<int>()) {
  }
  expr__Binary(Token* op, expr_t* left, expr_t* right) :
               tag(static_cast<uint16_t>(expr_e::Binary)), op(op), left(left),
               right(right), spids(new List<int>()) {
  }
  uint16_t tag;
  Token* op;
  expr_t* left;
  expr_t* right;
  List<int>* spids;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(expr__Binary)
};

class expr__Compare : public expr_t {
 public:
  expr__Compare() : tag(static_cast<uint16_t>(expr_e::Compare)), left(nullptr),
                ops(new List<speck*>()), comparators(new List<expr_t*>()),
                spids(new List<int>()) {
  }
  expr__Compare(expr_t* left, List<speck*>* ops, List<expr_t*>* comparators) :
                tag(static_cast<uint16_t>(expr_e::Compare)), left(left),
                ops(ops), comparators(comparators), spids(new List<int>()) {
  }
  uint16_t tag;
  expr_t* left;
  List<speck*>* ops;
  List<expr_t*>* comparators;
  List<int>* spids;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(expr__Compare)
};

class expr__FuncCall : public expr_t {
 public:
  expr__FuncCall() : tag(static_cast<uint16_t>(expr_e::FuncCall)),
                 func(nullptr), args(nullptr), spids(new List<int>()) {
  }
  expr__FuncCall(expr_t* func, arg_list* args) :
                 tag(static_cast<uint16_t>(expr_e::FuncCall)), func(func),
                 args(args), spids(new List<int>()) {
  }
  uint16_t tag;
  expr_t* func;
  arg_list* args;
  List<int>* spids;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(expr__FuncCall)
};

class expr__IfExp : public expr_t {
 public:
  expr__IfExp() : tag(static_cast<uint16_t>(expr_e::IfExp)), test(nullptr),
              body(nullptr), orelse(nullptr), spids(new List<int>()) {
  }
  expr__IfExp(expr_t* test, expr_t* body, expr_t* orelse) :
              tag(static_cast<uint16_t>(expr_e::IfExp)), test(test),
              body(body), orelse(orelse), spids(new List<int>()) {
  }
  uint16_t tag;
  expr_t* test;
  expr_t* body;
  expr_t* orelse;
  List<int>* spids;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(expr__IfExp)
};

class expr__Tuple : public expr_t {
 public:
  expr__Tuple() : tag(static_cast<uint16_t>(expr_e::Tuple)), elts(new
              List<expr_t*>()), ctx(expr_context_e::Load), spids(new
              List<int>()) {
  }
  expr__Tuple(List<expr_t*>* elts, expr_context_e ctx) :
              tag(static_cast<uint16_t>(expr_e::Tuple)), elts(elts), ctx(ctx),
              spids(new List<int>()) {
  }
  uint16_t tag;
  List<expr_t*>* elts;
  expr_context_e ctx;
  List<int>* spids;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(expr__Tuple)
};

class expr__List : public expr_t {
 public:
  expr__List() : tag(static_cast<uint16_t>(expr_e::List)), elts(new
             List<expr_t*>()), ctx(expr_context_e::Load), spids(new
             List<int>()) {
  }
  expr__List(List<expr_t*>* elts, expr_context_e ctx) :
             tag(static_cast<uint16_t>(expr_e::List)), elts(elts), ctx(ctx),
             spids(new List<int>()) {
  }
  uint16_t tag;
  List<expr_t*>* elts;
  expr_context_e ctx;
  List<int>* spids;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(expr__List)
};

class expr__Dict : public expr_t {
 public:
  expr__Dict() : tag(static_cast<uint16_t>(expr_e::Dict)), keys(new
             List<expr_t*>()), values(new List<expr_t*>()), spids(new
             List<int>()) {
  }
  expr__Dict(List<expr_t*>* keys, List<expr_t*>* values) :
             tag(static_cast<uint16_t>(expr_e::Dict)), keys(keys),
             values(values), spids(new List<int>()) {
  }
  uint16_t tag;
  List<expr_t*>* keys;
  List<expr_t*>* values;
  List<int>* spids;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(expr__Dict)
};

class expr__Implicit : public expr_t {
 public:
  expr__Implicit() : tag(static_cast<uint16_t>(expr_e::Implicit)), spids(new
                 List<int>()) {
  }
  uint16_t tag;
  List<int>* spids;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(expr__Implicit)
};

class expr__ListComp : public expr_t {
 public:
  expr__ListComp() : tag(static_cast<uint16_t>(expr_e::ListComp)),
                 elt(nullptr), generators(new List<comprehension*>()),
                 spids(new List<int>()) {
  }
  expr__ListComp(expr_t* elt, List<comprehension*>* generators) :
                 tag(static_cast<uint16_t>(expr_e::ListComp)), elt(elt),
                 generators(generators), spids(new List<int>()) {
  }
  uint16_t tag;
  expr_t* elt;
  List<comprehension*>* generators;
  List<int>* spids;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(expr__ListComp)
};

class expr__DictComp : public expr_t {
 public:
  expr__DictComp() : tag(static_cast<uint16_t>(expr_e::DictComp)),
                 key(nullptr), value(nullptr), generators(new
                 List<comprehension*>()), spids(new List<int>()) {
  }
  expr__DictComp(expr_t* key, expr_t* value, List<comprehension*>* generators)
                 : tag(static_cast<uint16_t>(expr_e::DictComp)), key(key),
                 value(value), generators(generators), spids(new List<int>()) {
  }
  uint16_t tag;
  expr_t* key;
  expr_t* value;
  List<comprehension*>* generators;
  List<int>* spids;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(expr__DictComp)
};

class expr__GeneratorExp : public expr_t {
 public:
  expr__GeneratorExp() : tag(static_cast<uint16_t>(expr_e::GeneratorExp)),
                     elt(nullptr), generators(new List<comprehension*>()),
                     spids(new List<int>()) {
  }
  expr__GeneratorExp(expr_t* elt, List<comprehension*>* generators) :
                     tag(static_cast<uint16_t>(expr_e::GeneratorExp)),
                     elt(elt), generators(generators), spids(new List<int>()) {
  }
  uint16_t tag;
  expr_t* elt;
  List<comprehension*>* generators;
  List<int>* spids;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(expr__GeneratorExp)
};

class expr__Range : public expr_t {
 public:
  expr__Range() : tag(static_cast<uint16_t>(expr_e::Range)), lower(nullptr),
              upper(nullptr), spids(new List<int>()) {
  }
  expr__Range(expr_t* lower, expr_t* upper) :
              tag(static_cast<uint16_t>(expr_e::Range)), lower(lower),
              upper(upper), spids(new List<int>()) {
  }
  uint16_t tag;
  expr_t* lower;
  expr_t* upper;
  List<int>* spids;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(expr__Range)
};

class expr__Slice : public expr_t {
 public:
  expr__Slice() : tag(static_cast<uint16_t>(expr_e::Slice)), lower(nullptr),
              upper(nullptr), spids(new List<int>()) {
  }
  expr__Slice(expr_t* lower, expr_t* upper) :
              tag(static_cast<uint16_t>(expr_e::Slice)), lower(lower),
              upper(upper), spids(new List<int>()) {
  }
  uint16_t tag;
  expr_t* lower;
  expr_t* upper;
  List<int>* spids;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(expr__Slice)
};

class expr__Spread : public expr_t {
 public:
  expr__Spread() : tag(static_cast<uint16_t>(expr_e::Spread)), child(nullptr),
               ctx(expr_context_e::Load), spids(new List<int>()) {
  }
  expr__Spread(expr_t* child, expr_context_e ctx) :
               tag(static_cast<uint16_t>(expr_e::Spread)), child(child),
               ctx(ctx), spids(new List<int>()) {
  }
  uint16_t tag;
  expr_t* child;
  expr_context_e ctx;
  List<int>* spids;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(expr__Spread)
};

namespace expr {
  typedef expr__Var Var;
  typedef expr__Const Const;
  typedef expr__ArrayLiteral ArrayLiteral;
  typedef expr__RegexLiteral RegexLiteral;
  typedef expr__Lambda Lambda;
  typedef expr__Unary Unary;
  typedef expr__Binary Binary;
  typedef expr__Compare Compare;
  typedef expr__FuncCall FuncCall;
  typedef expr__IfExp IfExp;
  typedef expr__Tuple Tuple;
  typedef expr__List List;
  typedef expr__Dict Dict;
  typedef expr__Implicit Implicit;
  typedef expr__ListComp ListComp;
  typedef expr__DictComp DictComp;
  typedef expr__GeneratorExp GeneratorExp;
  typedef expr__Range Range;
  typedef expr__Slice Slice;
  typedef expr__Spread Spread;
}

namespace class_literal_term_e {
  const int PosixClass = 1022;
  const int PerlClass = 1023;
  const int Range = 3;
  const int CharLiteral = 4;
  const int SimpleVarSub = 1005;
  const int BracedVarSub = 1006;
  const int SingleQuoted = 1004;
  const int DoubleQuoted = 1003;
  const int ByteSet = 9;
  const int CodePoint = 10;
};

const char* class_literal_term_str(int tag);

class class_literal_term_t {
 protected:
  class_literal_term_t() {}
 public:
  int tag_() {
    return reinterpret_cast<Obj*>(this)->tag;
  }
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();
  DISALLOW_COPY_AND_ASSIGN(class_literal_term_t)
};

class class_literal_term__Range : public class_literal_term_t {
 public:
  class_literal_term__Range() :
                            tag(static_cast<uint16_t>(class_literal_term_e::Range)), start(new Str("")), end(new Str("")) {
  }
  class_literal_term__Range(Str* start, Str* end) :
                            tag(static_cast<uint16_t>(class_literal_term_e::Range)), start(start), end(end) {
  }
  uint16_t tag;
  Str* start;
  Str* end;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(class_literal_term__Range)
};

class class_literal_term__CharLiteral : public class_literal_term_t {
 public:
  class_literal_term__CharLiteral() :
                                  tag(static_cast<uint16_t>(class_literal_term_e::CharLiteral)), tok(nullptr) {
  }
  class_literal_term__CharLiteral(Token* tok) :
                                  tag(static_cast<uint16_t>(class_literal_term_e::CharLiteral)), tok(tok) {
  }
  uint16_t tag;
  Token* tok;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(class_literal_term__CharLiteral)
};

class class_literal_term__ByteSet : public class_literal_term_t {
 public:
  class_literal_term__ByteSet() :
                              tag(static_cast<uint16_t>(class_literal_term_e::ByteSet)), bytes(new Str("")), spid(-1) {
  }
  class_literal_term__ByteSet(Str* bytes, int spid) :
                              tag(static_cast<uint16_t>(class_literal_term_e::ByteSet)), bytes(bytes), spid(spid) {
  }
  uint16_t tag;
  Str* bytes;
  int spid;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(class_literal_term__ByteSet)
};

class class_literal_term__CodePoint : public class_literal_term_t {
 public:
  class_literal_term__CodePoint() :
                                tag(static_cast<uint16_t>(class_literal_term_e::CodePoint)), i(-1), spid(-1) {
  }
  class_literal_term__CodePoint(int i, int spid) :
                                tag(static_cast<uint16_t>(class_literal_term_e::CodePoint)), i(i), spid(spid) {
  }
  uint16_t tag;
  int i;
  int spid;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(class_literal_term__CodePoint)
};

namespace class_literal_term {
  typedef class_literal_term__Range Range;
  typedef class_literal_term__CharLiteral CharLiteral;
  typedef class_literal_term__ByteSet ByteSet;
  typedef class_literal_term__CodePoint CodePoint;
}

namespace re_repeat_e {
  const int Op = 1;
  const int Num = 2;
  const int Range = 3;
};

const char* re_repeat_str(int tag);

class re_repeat_t {
 protected:
  re_repeat_t() {}
 public:
  int tag_() {
    return reinterpret_cast<Obj*>(this)->tag;
  }
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();
  DISALLOW_COPY_AND_ASSIGN(re_repeat_t)
};

class re_repeat__Op : public re_repeat_t {
 public:
  re_repeat__Op() : tag(static_cast<uint16_t>(re_repeat_e::Op)), op(nullptr) {
  }
  re_repeat__Op(Token* op) : tag(static_cast<uint16_t>(re_repeat_e::Op)),
                op(op) {
  }
  uint16_t tag;
  Token* op;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(re_repeat__Op)
};

class re_repeat__Num : public re_repeat_t {
 public:
  re_repeat__Num() : tag(static_cast<uint16_t>(re_repeat_e::Num)),
                 times(nullptr) {
  }
  re_repeat__Num(Token* times) : tag(static_cast<uint16_t>(re_repeat_e::Num)),
                 times(times) {
  }
  uint16_t tag;
  Token* times;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(re_repeat__Num)
};

class re_repeat__Range : public re_repeat_t {
 public:
  re_repeat__Range() : tag(static_cast<uint16_t>(re_repeat_e::Range)),
                   lower(nullptr), upper(nullptr) {
  }
  re_repeat__Range(Token* lower, Token* upper) :
                   tag(static_cast<uint16_t>(re_repeat_e::Range)),
                   lower(lower), upper(upper) {
  }
  uint16_t tag;
  Token* lower;
  Token* upper;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(re_repeat__Range)
};

namespace re_repeat {
  typedef re_repeat__Op Op;
  typedef re_repeat__Num Num;
  typedef re_repeat__Range Range;
}

namespace re_e {
  const int Speck = 1002;
  const int Token = 1001;
  const int PosixClass = 1022;
  const int PerlClass = 1023;
  const int ClassLiteral = 5;
  const int Splice = 6;
  const int SimpleVarSub = 1005;
  const int BracedVarSub = 1006;
  const int SingleQuoted = 1004;
  const int DoubleQuoted = 1003;
  const int Repeat = 11;
  const int Seq = 12;
  const int Alt = 13;
  const int Group = 14;
  const int Capture = 15;
  const int Backtracking = 16;
  const int Primitive = 17;
  const int LiteralChars = 18;
};

const char* re_str(int tag);

class re_t {
 protected:
  re_t() {}
 public:
  int tag_() {
    return reinterpret_cast<Obj*>(this)->tag;
  }
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();
  DISALLOW_COPY_AND_ASSIGN(re_t)
};

class re__ClassLiteral : public re_t {
 public:
  re__ClassLiteral() : tag(static_cast<uint16_t>(re_e::ClassLiteral)),
                   negated(false), terms(new List<class_literal_term_t*>()) {
  }
  re__ClassLiteral(bool negated, List<class_literal_term_t*>* terms) :
                   tag(static_cast<uint16_t>(re_e::ClassLiteral)),
                   negated(negated), terms(terms) {
  }
  uint16_t tag;
  bool negated;
  List<class_literal_term_t*>* terms;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(re__ClassLiteral)
};

class re__Splice : public re_t {
 public:
  re__Splice() : tag(static_cast<uint16_t>(re_e::Splice)), name(nullptr) {
  }
  re__Splice(Token* name) : tag(static_cast<uint16_t>(re_e::Splice)),
             name(name) {
  }
  uint16_t tag;
  Token* name;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(re__Splice)
};

class re__Repeat : public re_t {
 public:
  re__Repeat() : tag(static_cast<uint16_t>(re_e::Repeat)), child(nullptr),
             op(nullptr) {
  }
  re__Repeat(re_t* child, re_repeat_t* op) :
             tag(static_cast<uint16_t>(re_e::Repeat)), child(child), op(op) {
  }
  uint16_t tag;
  re_t* child;
  re_repeat_t* op;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(re__Repeat)
};

class re__Seq : public re_t {
 public:
  re__Seq() : tag(static_cast<uint16_t>(re_e::Seq)), children(new
          List<re_t*>()) {
  }
  re__Seq(List<re_t*>* children) : tag(static_cast<uint16_t>(re_e::Seq)),
          children(children) {
  }
  uint16_t tag;
  List<re_t*>* children;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(re__Seq)
};

class re__Alt : public re_t {
 public:
  re__Alt() : tag(static_cast<uint16_t>(re_e::Alt)), children(new
          List<re_t*>()) {
  }
  re__Alt(List<re_t*>* children) : tag(static_cast<uint16_t>(re_e::Alt)),
          children(children) {
  }
  uint16_t tag;
  List<re_t*>* children;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(re__Alt)
};

class re__Group : public re_t {
 public:
  re__Group() : tag(static_cast<uint16_t>(re_e::Group)), child(nullptr) {
  }
  re__Group(re_t* child) : tag(static_cast<uint16_t>(re_e::Group)),
            child(child) {
  }
  uint16_t tag;
  re_t* child;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(re__Group)
};

class re__Capture : public re_t {
 public:
  re__Capture() : tag(static_cast<uint16_t>(re_e::Capture)), child(nullptr),
              var_name(nullptr) {
  }
  re__Capture(re_t* child, Token* var_name) :
              tag(static_cast<uint16_t>(re_e::Capture)), child(child),
              var_name(var_name) {
  }
  uint16_t tag;
  re_t* child;
  Token* var_name;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(re__Capture)
};

class re__Backtracking : public re_t {
 public:
  re__Backtracking() : tag(static_cast<uint16_t>(re_e::Backtracking)),
                   negated(false), name(nullptr), child(nullptr) {
  }
  re__Backtracking(bool negated, Token* name, re_t* child) :
                   tag(static_cast<uint16_t>(re_e::Backtracking)),
                   negated(negated), name(name), child(child) {
  }
  uint16_t tag;
  bool negated;
  Token* name;
  re_t* child;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(re__Backtracking)
};

class re__Primitive : public re_t {
 public:
  re__Primitive() : tag(static_cast<uint16_t>(re_e::Primitive)), id(-1) {
  }
  re__Primitive(Id_t id) : tag(static_cast<uint16_t>(re_e::Primitive)), id(id) {
  }
  uint16_t tag;
  uint16_t id;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(re__Primitive)
};

class re__LiteralChars : public re_t {
 public:
  re__LiteralChars() : tag(static_cast<uint16_t>(re_e::LiteralChars)), s(new
                   Str("")), spid(-1) {
  }
  re__LiteralChars(Str* s, int spid) :
                   tag(static_cast<uint16_t>(re_e::LiteralChars)), s(s),
                   spid(spid) {
  }
  uint16_t tag;
  Str* s;
  int spid;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(re__LiteralChars)
};

namespace re {
  typedef re__ClassLiteral ClassLiteral;
  typedef re__Splice Splice;
  typedef re__Repeat Repeat;
  typedef re__Seq Seq;
  typedef re__Alt Alt;
  typedef re__Group Group;
  typedef re__Capture Capture;
  typedef re__Backtracking Backtracking;
  typedef re__Primitive Primitive;
  typedef re__LiteralChars LiteralChars;
}

class line_span : public Obj {
 public:
  line_span() : tag(1000), line_id(-1), col(-1), length(-1) {
  }
  line_span(int line_id, int col, int length) : tag(1000), line_id(line_id),
            col(col), length(length) {
  }
  uint16_t tag;
  int line_id;
  int col;
  int length;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(line_span)
};

class Token : public word_part_t, public word_t, public re_t {
 public:
  Token() : tag(1001), id(-1), span_id(-1), val(new Str("")) {
  }
  Token(Id_t id, int span_id, Str* val) : tag(1001), id(id), span_id(span_id),
        val(val) {
  }
  uint16_t tag;
  uint16_t id;
  int span_id;
  Str* val;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(Token)
};

class speck : public re_t {
 public:
  speck() : tag(1002), id(-1), span_id(-1) {
  }
  speck(Id_t id, int span_id) : tag(1002), id(id), span_id(span_id) {
  }
  uint16_t tag;
  uint16_t id;
  int span_id;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(speck)
};

class double_quoted : public word_part_t, public expr_t, public
class_literal_term_t, public re_t {
 public:
  double_quoted() : tag(1003), left(nullptr), parts(new List<word_part_t*>()),
                spids(new List<int>()) {
  }
  double_quoted(Token* left, List<word_part_t*>* parts) : tag(1003),
                left(left), parts(parts), spids(new List<int>()) {
  }
  uint16_t tag;
  Token* left;
  List<word_part_t*>* parts;
  List<int>* spids;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(double_quoted)
};

class single_quoted : public word_part_t, public expr_t, public
class_literal_term_t, public re_t {
 public:
  single_quoted() : tag(1004), left(nullptr), tokens(new List<Token*>()),
                spids(new List<int>()) {
  }
  single_quoted(Token* left, List<Token*>* tokens) : tag(1004), left(left),
                tokens(tokens), spids(new List<int>()) {
  }
  uint16_t tag;
  Token* left;
  List<Token*>* tokens;
  List<int>* spids;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(single_quoted)
};

class simple_var_sub : public word_part_t, public expr_t, public
class_literal_term_t, public re_t {
 public:
  simple_var_sub() : tag(1005), token(nullptr) {
  }
  simple_var_sub(Token* token) : tag(1005), token(token) {
  }
  uint16_t tag;
  Token* token;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(simple_var_sub)
};

class braced_var_sub : public word_part_t, public expr_t, public
class_literal_term_t, public re_t {
 public:
  braced_var_sub() : tag(1006), token(nullptr), prefix_op(nullptr),
                 bracket_op(nullptr), suffix_op(nullptr), spids(new
                 List<int>()) {
  }
  braced_var_sub(Token* token, speck* prefix_op, bracket_op_t* bracket_op,
                 suffix_op_t* suffix_op) : tag(1006), token(token),
                 prefix_op(prefix_op), bracket_op(bracket_op),
                 suffix_op(suffix_op), spids(new List<int>()) {
  }
  uint16_t tag;
  Token* token;
  speck* prefix_op;
  bracket_op_t* bracket_op;
  suffix_op_t* suffix_op;
  List<int>* spids;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(braced_var_sub)
};

class command_sub : public word_part_t, public expr_t {
 public:
  command_sub() : tag(1007), left_token(nullptr), command_list(nullptr),
              spids(new List<int>()) {
  }
  command_sub(Token* left_token, command_t* command_list) : tag(1007),
              left_token(left_token), command_list(command_list), spids(new
              List<int>()) {
  }
  uint16_t tag;
  Token* left_token;
  command_t* command_list;
  List<int>* spids;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(command_sub)
};

class sh_array_literal : public word_part_t, public expr_t {
 public:
  sh_array_literal() : tag(1008), left(nullptr), words(new List<word_t*>()),
                   spids(new List<int>()) {
  }
  sh_array_literal(Token* left, List<word_t*>* words) : tag(1008), left(left),
                   words(words), spids(new List<int>()) {
  }
  uint16_t tag;
  Token* left;
  List<word_t*>* words;
  List<int>* spids;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(sh_array_literal)
};

class arg_list : public Obj {
 public:
  arg_list() : tag(1009), positional(new List<expr_t*>()), named(new
           List<named_arg*>()) {
  }
  arg_list(List<expr_t*>* positional, List<named_arg*>* named) : tag(1009),
           positional(positional), named(named) {
  }
  uint16_t tag;
  List<expr_t*>* positional;
  List<named_arg*>* named;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(arg_list)
};

class compound_word : public word_t, public redir_param_t {
 public:
  compound_word() : tag(1010), parts(new List<word_part_t*>()) {
  }
  compound_word(List<word_part_t*>* parts) : tag(1010), parts(parts) {
  }
  uint16_t tag;
  List<word_part_t*>* parts;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(compound_word)
};

class redir : public Obj {
 public:
  redir() : tag(1011), op(nullptr), loc(nullptr), arg(nullptr) {
  }
  redir(Token* op, redir_loc_t* loc, redir_param_t* arg) : tag(1011), op(op),
        loc(loc), arg(arg) {
  }
  uint16_t tag;
  Token* op;
  redir_loc_t* loc;
  redir_param_t* arg;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(redir)
};

class assign_pair : public Obj {
 public:
  assign_pair() : tag(1012), lhs(nullptr), op(assign_op_e::Equal),
              rhs(nullptr), spids(new List<int>()) {
  }
  assign_pair(sh_lhs_expr_t* lhs, assign_op_e op, word_t* rhs, List<int>*
              spids) : tag(1012), lhs(lhs), op(op), rhs(rhs), spids(spids) {
  }
  uint16_t tag;
  sh_lhs_expr_t* lhs;
  assign_op_e op;
  word_t* rhs;
  List<int>* spids;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(assign_pair)
};

class env_pair : public Obj {
 public:
  env_pair() : tag(1013), name(new Str("")), val(nullptr), spids(new
           List<int>()) {
  }
  env_pair(Str* name, word_t* val, List<int>* spids) : tag(1013), name(name),
           val(val), spids(spids) {
  }
  uint16_t tag;
  Str* name;
  word_t* val;
  List<int>* spids;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(env_pair)
};

class case_arm : public Obj {
 public:
  case_arm() : tag(1014), pat_list(new List<word_t*>()), action(new
           List<command_t*>()), spids(new List<int>()) {
  }
  case_arm(List<word_t*>* pat_list, List<command_t*>* action, List<int>* spids)
           : tag(1014), pat_list(pat_list), action(action), spids(spids) {
  }
  uint16_t tag;
  List<word_t*>* pat_list;
  List<command_t*>* action;
  List<int>* spids;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(case_arm)
};

class if_arm : public Obj {
 public:
  if_arm() : tag(1015), cond(new List<command_t*>()), action(new
         List<command_t*>()), spids(new List<int>()) {
  }
  if_arm(List<command_t*>* cond, List<command_t*>* action, List<int>* spids) :
         tag(1015), cond(cond), action(action), spids(spids) {
  }
  uint16_t tag;
  List<command_t*>* cond;
  List<command_t*>* action;
  List<int>* spids;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(if_arm)
};

class param : public Obj {
 public:
  param() : tag(1016), name(nullptr), type(nullptr), default_val(nullptr) {
  }
  param(Token* name, type_expr_t* type, expr_t* default_val) : tag(1016),
        name(name), type(type), default_val(default_val) {
  }
  uint16_t tag;
  Token* name;
  type_expr_t* type;
  expr_t* default_val;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(param)
};

class name_type : public Obj {
 public:
  name_type() : tag(1017), name(nullptr), typ(nullptr) {
  }
  name_type(Token* name, type_expr_t* typ) : tag(1017), name(name), typ(typ) {
  }
  uint16_t tag;
  Token* name;
  type_expr_t* typ;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(name_type)
};

class comprehension : public Obj {
 public:
  comprehension() : tag(1018), lhs(new List<name_type*>()), iter(nullptr),
                cond(nullptr) {
  }
  comprehension(List<name_type*>* lhs, expr_t* iter, expr_t* cond) : tag(1018),
                lhs(lhs), iter(iter), cond(cond) {
  }
  uint16_t tag;
  List<name_type*>* lhs;
  expr_t* iter;
  expr_t* cond;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(comprehension)
};

class named_arg : public Obj {
 public:
  named_arg() : tag(1019), name(nullptr), value(nullptr) {
  }
  named_arg(Token* name, expr_t* value) : tag(1019), name(name), value(value) {
  }
  uint16_t tag;
  Token* name;
  expr_t* value;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(named_arg)
};

class subscript : public place_expr_t, public expr_t {
 public:
  subscript() : tag(1020), obj(nullptr), indices(new List<expr_t*>()) {
  }
  subscript(expr_t* obj, List<expr_t*>* indices) : tag(1020), obj(obj),
            indices(indices) {
  }
  uint16_t tag;
  expr_t* obj;
  List<expr_t*>* indices;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(subscript)
};

class attribute : public place_expr_t, public expr_t {
 public:
  attribute() : tag(1021), obj(nullptr), op(nullptr), attr(nullptr),
            ctx(expr_context_e::Load) {
  }
  attribute(expr_t* obj, Token* op, Token* attr, expr_context_e ctx) :
            tag(1021), obj(obj), op(op), attr(attr), ctx(ctx) {
  }
  uint16_t tag;
  expr_t* obj;
  Token* op;
  Token* attr;
  expr_context_e ctx;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(attribute)
};

class posix_class : public class_literal_term_t, public re_t {
 public:
  posix_class() : tag(1022), negated(nullptr), name(new Str("")) {
  }
  posix_class(speck* negated, Str* name) : tag(1022), negated(negated),
              name(name) {
  }
  uint16_t tag;
  speck* negated;
  Str* name;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(posix_class)
};

class perl_class : public class_literal_term_t, public re_t {
 public:
  perl_class() : tag(1023), negated(nullptr), name(new Str("")) {
  }
  perl_class(speck* negated, Str* name) : tag(1023), negated(negated),
             name(name) {
  }
  uint16_t tag;
  speck* negated;
  Str* name;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(perl_class)
};


}  // namespace syntax_asdl

#endif  // SYNTAX_ASDL
