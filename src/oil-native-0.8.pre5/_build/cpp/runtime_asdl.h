#ifndef RUNTIME_ASDL
#define RUNTIME_ASDL

#include <cstdint>

#include "mylib.h"  // for Str, List, etc.
#include "hnode_asdl.h"
using hnode_asdl::hnode_t;
using id_kind_asdl::Id_t;
namespace runtime_asdl {

class assign_arg;
class cmd_value_t;
class part_value_t;
class value_t;
class a_index_t;
class cell;
class lvalue_t;
class redirect_arg_t;
class redirect;
class job_status_t;
class flag_type_t;
class SetToArg_;
class FlagSpec_;
class action_t;

namespace cmd_value_e {
  const int Argv = 1;
  const int Assign = 2;
};

const char* cmd_value_str(int tag);

class cmd_value_t {
 protected:
  cmd_value_t() {}
 public:
  int tag_() const {
    return reinterpret_cast<const Obj*>(this)->tag;
  }
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();
  DISALLOW_COPY_AND_ASSIGN(cmd_value_t)
};

class cmd_value__Argv : public cmd_value_t {
 public:
  cmd_value__Argv() : tag(static_cast<uint16_t>(cmd_value_e::Argv)), argv(new
                  List<Str*>()), arg_spids(new List<int>()), block(nullptr) {
  }
  cmd_value__Argv(List<Str*>* argv, List<int>* arg_spids, void* block) :
                  tag(static_cast<uint16_t>(cmd_value_e::Argv)), argv(argv),
                  arg_spids(arg_spids), block(block) {
  }
  uint16_t tag;
  List<Str*>* argv;
  List<int>* arg_spids;
  void* block;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(cmd_value__Argv)
};

class cmd_value__Assign : public cmd_value_t {
 public:
  cmd_value__Assign() : tag(static_cast<uint16_t>(cmd_value_e::Assign)),
                    builtin_id(-1), argv(new List<Str*>()), arg_spids(new
                    List<int>()), pairs(new List<assign_arg*>()) {
  }
  cmd_value__Assign(int builtin_id, List<Str*>* argv, List<int>* arg_spids,
                    List<assign_arg*>* pairs) :
                    tag(static_cast<uint16_t>(cmd_value_e::Assign)),
                    builtin_id(builtin_id), argv(argv), arg_spids(arg_spids),
                    pairs(pairs) {
  }
  uint16_t tag;
  int builtin_id;
  List<Str*>* argv;
  List<int>* arg_spids;
  List<assign_arg*>* pairs;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(cmd_value__Assign)
};

namespace cmd_value {
  typedef cmd_value__Argv Argv;
  typedef cmd_value__Assign Assign;
}

enum class quote_e {
  Default = 1,
  FnMatch = 2,
  ERE = 3,
};
typedef quote_e quote_t;

const char* quote_str(quote_e tag);

namespace part_value_e {
  const int String = 1;
  const int Array = 2;
};

const char* part_value_str(int tag);

class part_value_t {
 protected:
  part_value_t() {}
 public:
  int tag_() const {
    return reinterpret_cast<const Obj*>(this)->tag;
  }
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();
  DISALLOW_COPY_AND_ASSIGN(part_value_t)
};

class part_value__String : public part_value_t {
 public:
  part_value__String() : tag(static_cast<uint16_t>(part_value_e::String)),
                     s(new Str("")), quoted(false), do_split(false) {
  }
  part_value__String(Str* s, bool quoted, bool do_split) :
                     tag(static_cast<uint16_t>(part_value_e::String)), s(s),
                     quoted(quoted), do_split(do_split) {
  }
  uint16_t tag;
  Str* s;
  bool quoted;
  bool do_split;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(part_value__String)
};

class part_value__Array : public part_value_t {
 public:
  part_value__Array() : tag(static_cast<uint16_t>(part_value_e::Array)),
                    strs(new List<Str*>()) {
  }
  part_value__Array(List<Str*>* strs) :
                    tag(static_cast<uint16_t>(part_value_e::Array)), strs(strs)
                    {
  }
  uint16_t tag;
  List<Str*>* strs;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(part_value__Array)
};

namespace part_value {
  typedef part_value__String String;
  typedef part_value__Array Array;
}

namespace value_e {
  const int Undef = 1;
  const int Str = 2;
  const int Int = 3;
  const int MaybeStrArray = 4;
  const int AssocArray = 5;
  const int Bool = 6;
  const int Float = 7;
  const int Eggex = 8;
  const int Obj = 9;
};

const char* value_str(int tag);

class value_t {
 protected:
  value_t() {}
 public:
  int tag_() const {
    return reinterpret_cast<const Obj*>(this)->tag;
  }
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();
  DISALLOW_COPY_AND_ASSIGN(value_t)
};

class value__Undef : public value_t {
 public:
  value__Undef() : tag(static_cast<uint16_t>(value_e::Undef)) {
  }
  uint16_t tag;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(value__Undef)
};

class value__Str : public value_t {
 public:
  value__Str() : tag(static_cast<uint16_t>(value_e::Str)), s(new Str("")) {
  }
  value__Str(Str* s) : tag(static_cast<uint16_t>(value_e::Str)), s(s) {
  }
  uint16_t tag;
  Str* s;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(value__Str)
};

class value__Int : public value_t {
 public:
  value__Int() : tag(static_cast<uint16_t>(value_e::Int)), i(-1) {
  }
  value__Int(int i) : tag(static_cast<uint16_t>(value_e::Int)), i(i) {
  }
  uint16_t tag;
  int i;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(value__Int)
};

class value__MaybeStrArray : public value_t {
 public:
  value__MaybeStrArray() : tag(static_cast<uint16_t>(value_e::MaybeStrArray)),
                       strs(new List<Str*>()) {
  }
  value__MaybeStrArray(List<Str*>* strs) :
                       tag(static_cast<uint16_t>(value_e::MaybeStrArray)),
                       strs(strs) {
  }
  uint16_t tag;
  List<Str*>* strs;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(value__MaybeStrArray)
};

class value__AssocArray : public value_t {
 public:
  value__AssocArray() : tag(static_cast<uint16_t>(value_e::AssocArray)), d(new
                    Dict<Str*, Str*>()) {
  }
  value__AssocArray(Dict<Str*, Str*>* d) :
                    tag(static_cast<uint16_t>(value_e::AssocArray)), d(d) {
  }
  uint16_t tag;
  Dict<Str*, Str*>* d;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(value__AssocArray)
};

class value__Bool : public value_t {
 public:
  value__Bool() : tag(static_cast<uint16_t>(value_e::Bool)), b(false) {
  }
  value__Bool(bool b) : tag(static_cast<uint16_t>(value_e::Bool)), b(b) {
  }
  uint16_t tag;
  bool b;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(value__Bool)
};

class value__Float : public value_t {
 public:
  value__Float() : tag(static_cast<uint16_t>(value_e::Float)), f(0.0) {
  }
  value__Float(double f) : tag(static_cast<uint16_t>(value_e::Float)), f(f) {
  }
  uint16_t tag;
  double f;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(value__Float)
};

class value__Eggex : public value_t {
 public:
  value__Eggex() : tag(static_cast<uint16_t>(value_e::Eggex)), expr(nullptr),
               as_ere(new Str("")) {
  }
  value__Eggex(void* expr, Str* as_ere) :
               tag(static_cast<uint16_t>(value_e::Eggex)), expr(expr),
               as_ere(as_ere) {
  }
  uint16_t tag;
  void* expr;
  Str* as_ere;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(value__Eggex)
};

class value__Obj : public value_t {
 public:
  value__Obj() : tag(static_cast<uint16_t>(value_e::Obj)), obj(nullptr) {
  }
  value__Obj(void* obj) : tag(static_cast<uint16_t>(value_e::Obj)), obj(obj) {
  }
  uint16_t tag;
  void* obj;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(value__Obj)
};

namespace value {
  typedef value__Undef Undef;
  typedef value__Str Str;
  typedef value__Int Int;
  typedef value__MaybeStrArray MaybeStrArray;
  typedef value__AssocArray AssocArray;
  typedef value__Bool Bool;
  typedef value__Float Float;
  typedef value__Eggex Eggex;
  typedef value__Obj Obj;
}

namespace a_index_e {
  const int Str = 1;
  const int Int = 2;
};

const char* a_index_str(int tag);

class a_index_t {
 protected:
  a_index_t() {}
 public:
  int tag_() const {
    return reinterpret_cast<const Obj*>(this)->tag;
  }
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();
  DISALLOW_COPY_AND_ASSIGN(a_index_t)
};

class a_index__Str : public a_index_t {
 public:
  a_index__Str() : tag(static_cast<uint16_t>(a_index_e::Str)), s(new Str("")) {
  }
  a_index__Str(Str* s) : tag(static_cast<uint16_t>(a_index_e::Str)), s(s) {
  }
  uint16_t tag;
  Str* s;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(a_index__Str)
};

class a_index__Int : public a_index_t {
 public:
  a_index__Int() : tag(static_cast<uint16_t>(a_index_e::Int)), i(-1) {
  }
  a_index__Int(int i) : tag(static_cast<uint16_t>(a_index_e::Int)), i(i) {
  }
  uint16_t tag;
  int i;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(a_index__Int)
};

namespace a_index {
  typedef a_index__Str Str;
  typedef a_index__Int Int;
}

enum class scope_e {
  LocalOnly = 1,
  GlobalOnly = 2,
  Dynamic = 3,
  LocalOrGlobal = 4,
};
typedef scope_e scope_t;

const char* scope_str(scope_e tag);

namespace lvalue_e {
  const int Named = 1;
  const int Indexed = 2;
  const int Keyed = 3;
  const int ObjIndex = 4;
  const int ObjAttr = 5;
};

const char* lvalue_str(int tag);

class lvalue_t {
 protected:
  lvalue_t() {}
 public:
  int tag_() const {
    return reinterpret_cast<const Obj*>(this)->tag;
  }
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();
  DISALLOW_COPY_AND_ASSIGN(lvalue_t)
};

class lvalue__Named : public lvalue_t {
 public:
  lvalue__Named() : tag(static_cast<uint16_t>(lvalue_e::Named)), name(new
                Str("")), spids(new List<int>()) {
  }
  lvalue__Named(Str* name) : tag(static_cast<uint16_t>(lvalue_e::Named)),
                name(name), spids(new List<int>()) {
  }
  uint16_t tag;
  Str* name;
  List<int>* spids;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(lvalue__Named)
};

class lvalue__Indexed : public lvalue_t {
 public:
  lvalue__Indexed() : tag(static_cast<uint16_t>(lvalue_e::Indexed)), name(new
                  Str("")), index(-1), spids(new List<int>()) {
  }
  lvalue__Indexed(Str* name, int index) :
                  tag(static_cast<uint16_t>(lvalue_e::Indexed)), name(name),
                  index(index), spids(new List<int>()) {
  }
  uint16_t tag;
  Str* name;
  int index;
  List<int>* spids;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(lvalue__Indexed)
};

class lvalue__Keyed : public lvalue_t {
 public:
  lvalue__Keyed() : tag(static_cast<uint16_t>(lvalue_e::Keyed)), name(new
                Str("")), key(new Str("")), spids(new List<int>()) {
  }
  lvalue__Keyed(Str* name, Str* key) :
                tag(static_cast<uint16_t>(lvalue_e::Keyed)), name(name),
                key(key), spids(new List<int>()) {
  }
  uint16_t tag;
  Str* name;
  Str* key;
  List<int>* spids;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(lvalue__Keyed)
};

class lvalue__ObjIndex : public lvalue_t {
 public:
  lvalue__ObjIndex() : tag(static_cast<uint16_t>(lvalue_e::ObjIndex)),
                   obj(nullptr), index(nullptr), spids(new List<int>()) {
  }
  lvalue__ObjIndex(void* obj, void* index) :
                   tag(static_cast<uint16_t>(lvalue_e::ObjIndex)), obj(obj),
                   index(index), spids(new List<int>()) {
  }
  uint16_t tag;
  void* obj;
  void* index;
  List<int>* spids;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(lvalue__ObjIndex)
};

class lvalue__ObjAttr : public lvalue_t {
 public:
  lvalue__ObjAttr() : tag(static_cast<uint16_t>(lvalue_e::ObjAttr)),
                  obj(nullptr), attr(new Str("")), spids(new List<int>()) {
  }
  lvalue__ObjAttr(void* obj, Str* attr) :
                  tag(static_cast<uint16_t>(lvalue_e::ObjAttr)), obj(obj),
                  attr(attr), spids(new List<int>()) {
  }
  uint16_t tag;
  void* obj;
  Str* attr;
  List<int>* spids;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(lvalue__ObjAttr)
};

namespace lvalue {
  typedef lvalue__Named Named;
  typedef lvalue__Indexed Indexed;
  typedef lvalue__Keyed Keyed;
  typedef lvalue__ObjIndex ObjIndex;
  typedef lvalue__ObjAttr ObjAttr;
}

namespace redirect_arg_e {
  const int Path = 1;
  const int CopyFd = 2;
  const int MoveFd = 3;
  const int CloseFd = 4;
  const int HereDoc = 5;
};

const char* redirect_arg_str(int tag);

class redirect_arg_t {
 protected:
  redirect_arg_t() {}
 public:
  int tag_() const {
    return reinterpret_cast<const Obj*>(this)->tag;
  }
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();
  DISALLOW_COPY_AND_ASSIGN(redirect_arg_t)
};

class redirect_arg__Path : public redirect_arg_t {
 public:
  redirect_arg__Path() : tag(static_cast<uint16_t>(redirect_arg_e::Path)),
                     filename(new Str("")) {
  }
  redirect_arg__Path(Str* filename) :
                     tag(static_cast<uint16_t>(redirect_arg_e::Path)),
                     filename(filename) {
  }
  uint16_t tag;
  Str* filename;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(redirect_arg__Path)
};

class redirect_arg__CopyFd : public redirect_arg_t {
 public:
  redirect_arg__CopyFd() : tag(static_cast<uint16_t>(redirect_arg_e::CopyFd)),
                       target_fd(-1) {
  }
  redirect_arg__CopyFd(int target_fd) :
                       tag(static_cast<uint16_t>(redirect_arg_e::CopyFd)),
                       target_fd(target_fd) {
  }
  uint16_t tag;
  int target_fd;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(redirect_arg__CopyFd)
};

class redirect_arg__MoveFd : public redirect_arg_t {
 public:
  redirect_arg__MoveFd() : tag(static_cast<uint16_t>(redirect_arg_e::MoveFd)),
                       target_fd(-1) {
  }
  redirect_arg__MoveFd(int target_fd) :
                       tag(static_cast<uint16_t>(redirect_arg_e::MoveFd)),
                       target_fd(target_fd) {
  }
  uint16_t tag;
  int target_fd;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(redirect_arg__MoveFd)
};

class redirect_arg__CloseFd : public redirect_arg_t {
 public:
  redirect_arg__CloseFd() : tag(static_cast<uint16_t>(redirect_arg_e::CloseFd))
                        {
  }
  uint16_t tag;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(redirect_arg__CloseFd)
};

class redirect_arg__HereDoc : public redirect_arg_t {
 public:
  redirect_arg__HereDoc() :
                        tag(static_cast<uint16_t>(redirect_arg_e::HereDoc)),
                        body(new Str("")) {
  }
  redirect_arg__HereDoc(Str* body) :
                        tag(static_cast<uint16_t>(redirect_arg_e::HereDoc)),
                        body(body) {
  }
  uint16_t tag;
  Str* body;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(redirect_arg__HereDoc)
};

namespace redirect_arg {
  typedef redirect_arg__Path Path;
  typedef redirect_arg__CopyFd CopyFd;
  typedef redirect_arg__MoveFd MoveFd;
  typedef redirect_arg__CloseFd CloseFd;
  typedef redirect_arg__HereDoc HereDoc;
}

namespace job_status_e {
  const int Proc = 1;
  const int Pipeline = 2;
};

const char* job_status_str(int tag);

class job_status_t {
 protected:
  job_status_t() {}
 public:
  int tag_() const {
    return reinterpret_cast<const Obj*>(this)->tag;
  }
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();
  DISALLOW_COPY_AND_ASSIGN(job_status_t)
};

class job_status__Proc : public job_status_t {
 public:
  job_status__Proc() : tag(static_cast<uint16_t>(job_status_e::Proc)), code(-1)
                   {
  }
  job_status__Proc(int code) : tag(static_cast<uint16_t>(job_status_e::Proc)),
                   code(code) {
  }
  uint16_t tag;
  int code;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(job_status__Proc)
};

class job_status__Pipeline : public job_status_t {
 public:
  job_status__Pipeline() : tag(static_cast<uint16_t>(job_status_e::Pipeline)),
                       codes(new List<int>()) {
  }
  job_status__Pipeline(List<int>* codes) :
                       tag(static_cast<uint16_t>(job_status_e::Pipeline)),
                       codes(codes) {
  }
  uint16_t tag;
  List<int>* codes;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(job_status__Pipeline)
};

namespace job_status {
  typedef job_status__Proc Proc;
  typedef job_status__Pipeline Pipeline;
}

enum class span_e {
  Black = 1,
  Delim = 2,
  Backslash = 3,
};
typedef span_e span_t;

const char* span_str(span_e tag);

namespace emit_i {
  const int Part = 1;
  const int Delim = 2;
  const int Empty = 3;
  const int Escape = 4;
  const int Nothing = 5;
  const int ARRAY_SIZE = 6;
};

const char* emit_str(int tag);

typedef int emit_t;

namespace state_i {
  const int Invalid = 1;
  const int Start = 2;
  const int DE_White1 = 3;
  const int DE_Gray = 4;
  const int DE_White2 = 5;
  const int Black = 6;
  const int Backslash = 7;
  const int Done = 8;
  const int ARRAY_SIZE = 9;
};

const char* state_str(int tag);

typedef int state_t;

namespace char_kind_i {
  const int DE_White = 1;
  const int DE_Gray = 2;
  const int Black = 3;
  const int Backslash = 4;
  const int Sentinel = 5;
  const int ARRAY_SIZE = 6;
};

const char* char_kind_str(int tag);

typedef int char_kind_t;

enum class job_state_e {
  Running = 1,
  Done = 2,
  Stopped = 3,
};
typedef job_state_e job_state_t;

const char* job_state_str(job_state_e tag);

enum class word_style_e {
  Expr = 1,
  Unquoted = 2,
  DQ = 3,
  SQ = 4,
};
typedef word_style_e word_style_t;

const char* word_style_str(word_style_e tag);

namespace flag_type_e {
  const int Bool = 1;
  const int Int = 2;
  const int Float = 3;
  const int Str = 4;
  const int Enum = 5;
};

const char* flag_type_str(int tag);

class flag_type_t {
 protected:
  flag_type_t() {}
 public:
  int tag_() const {
    return reinterpret_cast<const Obj*>(this)->tag;
  }
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();
  DISALLOW_COPY_AND_ASSIGN(flag_type_t)
};

class flag_type__Bool : public flag_type_t {
 public:
  flag_type__Bool() : tag(static_cast<uint16_t>(flag_type_e::Bool)) {
  }
  uint16_t tag;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(flag_type__Bool)
};

class flag_type__Int : public flag_type_t {
 public:
  flag_type__Int() : tag(static_cast<uint16_t>(flag_type_e::Int)) {
  }
  uint16_t tag;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(flag_type__Int)
};

class flag_type__Float : public flag_type_t {
 public:
  flag_type__Float() : tag(static_cast<uint16_t>(flag_type_e::Float)) {
  }
  uint16_t tag;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(flag_type__Float)
};

class flag_type__Str : public flag_type_t {
 public:
  flag_type__Str() : tag(static_cast<uint16_t>(flag_type_e::Str)) {
  }
  uint16_t tag;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(flag_type__Str)
};

class flag_type__Enum : public flag_type_t {
 public:
  flag_type__Enum() : tag(static_cast<uint16_t>(flag_type_e::Enum)), alts(new
                  List<Str*>()) {
  }
  flag_type__Enum(List<Str*>* alts) :
                  tag(static_cast<uint16_t>(flag_type_e::Enum)), alts(alts) {
  }
  uint16_t tag;
  List<Str*>* alts;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(flag_type__Enum)
};

namespace flag_type {
  typedef flag_type__Bool Bool;
  typedef flag_type__Int Int;
  typedef flag_type__Float Float;
  typedef flag_type__Str Str;
  typedef flag_type__Enum Enum;
}

namespace action_e {
  const int SetToArg = 1003;
  const int SetBoolToArg = 2;
};

const char* action_str(int tag);

class action_t {
 protected:
  action_t() {}
 public:
  int tag_() const {
    return reinterpret_cast<const Obj*>(this)->tag;
  }
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();
  DISALLOW_COPY_AND_ASSIGN(action_t)
};

class action__SetBoolToArg : public action_t {
 public:
  action__SetBoolToArg() : tag(static_cast<uint16_t>(action_e::SetBoolToArg)),
                       name(new Str("")) {
  }
  action__SetBoolToArg(Str* name) :
                       tag(static_cast<uint16_t>(action_e::SetBoolToArg)),
                       name(name) {
  }
  uint16_t tag;
  Str* name;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(action__SetBoolToArg)
};

namespace action {
  typedef action__SetBoolToArg SetBoolToArg;
}

class assign_arg : public Obj {
 public:
  assign_arg() : tag(1000), var_name(new Str("")), rval(nullptr), spid(-1) {
  }
  assign_arg(Str* var_name, value_t* rval, int spid) : tag(1000),
             var_name(var_name), rval(rval), spid(spid) {
  }
  uint16_t tag;
  Str* var_name;
  value_t* rval;
  int spid;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(assign_arg)
};

class cell : public Obj {
 public:
  cell() : tag(1001), exported(false), readonly(false), nameref(false),
       val(nullptr) {
  }
  cell(bool exported, bool readonly, bool nameref, value_t* val) : tag(1001),
       exported(exported), readonly(readonly), nameref(nameref), val(val) {
  }
  uint16_t tag;
  bool exported;
  bool readonly;
  bool nameref;
  value_t* val;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(cell)
};

class redirect : public Obj {
 public:
  redirect() : tag(1002), op_id(-1), op_spid(-1), loc(nullptr), arg(nullptr) {
  }
  redirect(Id_t op_id, int op_spid, void* loc, redirect_arg_t* arg) :
           tag(1002), op_id(op_id), op_spid(op_spid), loc(loc), arg(arg) {
  }
  uint16_t tag;
  Id_t op_id;
  int op_spid;
  void* loc;
  redirect_arg_t* arg;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(redirect)
};

class SetToArg_ : public action_t {
 public:
  SetToArg_() : tag(1003), name(new Str("")), flag_type(nullptr),
            quit_parsing_flags(false) {
  }
  SetToArg_(Str* name, flag_type_t* flag_type, bool quit_parsing_flags) :
            tag(1003), name(name), flag_type(flag_type),
            quit_parsing_flags(quit_parsing_flags) {
  }
  uint16_t tag;
  Str* name;
  flag_type_t* flag_type;
  bool quit_parsing_flags;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(SetToArg_)
};

class FlagSpec_ : public Obj {
 public:
  FlagSpec_() : tag(1004), arity0(new List<Str*>()), arity1(new Dict<Str*,
            SetToArg_*>()), options(new List<Str*>()), defaults(new Dict<Str*,
            value_t*>()) {
  }
  FlagSpec_(List<Str*>* arity0, Dict<Str*, SetToArg_*>* arity1, List<Str*>*
            options, Dict<Str*, value_t*>* defaults) : tag(1004),
            arity0(arity0), arity1(arity1), options(options),
            defaults(defaults) {
  }
  uint16_t tag;
  List<Str*>* arity0;
  Dict<Str*, SetToArg_*>* arity1;
  List<Str*>* options;
  Dict<Str*, value_t*>* defaults;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(FlagSpec_)
};


}  // namespace runtime_asdl

#endif  // RUNTIME_ASDL
