#ifndef RUNTIME_ASDL
#define RUNTIME_ASDL

#include <cstdint>

#include "mylib.h"  // for Str, List, etc.
#include "hnode_asdl.h"
using hnode_asdl::hnode_t;
using id_kind_asdl::Id_str;
namespace runtime_asdl {

class assign_arg;
class cmd_value_t;
class arg_vector;
class part_value_t;
class value_t;
class cell;
class lvalue_t;
class redirect_t;
class job_status_t;

enum class builtin_e {
  NONE = 1,
  READ = 2,
  ECHO = 3,
  PRINTF = 4,
  SHIFT = 5,
  CD = 6,
  PWD = 7,
  PUSHD = 8,
  POPD = 9,
  DIRS = 10,
  EXPORT = 11,
  READONLY = 12,
  LOCAL = 13,
  DECLARE = 14,
  TYPESET = 15,
  UNSET = 16,
  SET = 17,
  SHOPT = 18,
  TRAP = 19,
  UMASK = 20,
  SOURCE = 21,
  DOT = 22,
  EVAL = 23,
  EXEC = 24,
  WAIT = 25,
  JOBS = 26,
  FG = 27,
  BG = 28,
  COMPLETE = 29,
  COMPGEN = 30,
  COMPOPT = 31,
  COMPADJUST = 32,
  TRUE = 33,
  FALSE = 34,
  COLON = 35,
  TEST = 36,
  BRACKET = 37,
  GETOPTS = 38,
  COMMAND = 39,
  TYPE = 40,
  HASH = 41,
  HELP = 42,
  HISTORY = 43,
  BUILTIN = 44,
  ALIAS = 45,
  UNALIAS = 46,
  REPR = 47,
  PUSH = 48,
  USE = 49,
  ENV = 50,
  FORK = 51,
  OPTS = 52,
  JSON = 53,
};
typedef builtin_e builtin_t;

const char* builtin_str(builtin_e tag);

namespace cmd_value_e {
  const int Argv = 1;
  const int Assign = 2;
};

const char* cmd_value_str(int tag);

class cmd_value_t {
 protected:
  cmd_value_t() {}
 public:
  int tag_() {
    return reinterpret_cast<Obj*>(this)->tag;
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
                    builtin_id(builtin_e::NONE), argv(new List<Str*>()),
                    arg_spids(new List<int>()), pairs(new List<assign_arg*>()) {
  }
  cmd_value__Assign(builtin_e builtin_id, List<Str*>* argv, List<int>*
                    arg_spids, List<assign_arg*>* pairs) :
                    tag(static_cast<uint16_t>(cmd_value_e::Assign)),
                    builtin_id(builtin_id), argv(argv), arg_spids(arg_spids),
                    pairs(pairs) {
  }
  uint16_t tag;
  builtin_e builtin_id;
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

namespace part_value_e {
  const int String = 1;
  const int Array = 2;
};

const char* part_value_str(int tag);

class part_value_t {
 protected:
  part_value_t() {}
 public:
  int tag_() {
    return reinterpret_cast<Obj*>(this)->tag;
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
  const int MaybeStrArray = 3;
  const int AssocArray = 4;
  const int Obj = 5;
};

const char* value_str(int tag);

class value_t {
 protected:
  value_t() {}
 public:
  int tag_() {
    return reinterpret_cast<Obj*>(this)->tag;
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
  value__AssocArray() : tag(static_cast<uint16_t>(value_e::AssocArray)),
                    d(nullptr) {
  }
  value__AssocArray(void* d) : tag(static_cast<uint16_t>(value_e::AssocArray)),
                    d(d) {
  }
  uint16_t tag;
  void* d;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(value__AssocArray)
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
  typedef value__MaybeStrArray MaybeStrArray;
  typedef value__AssocArray AssocArray;
  typedef value__Obj Obj;
}

enum class var_flags_e {
  Exported = 1,
  ReadOnly = 2,
};
typedef var_flags_e var_flags_t;

const char* var_flags_str(var_flags_e tag);

enum class scope_e {
  LocalOnly = 1,
  GlobalOnly = 2,
  Dynamic = 3,
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
  int tag_() {
    return reinterpret_cast<Obj*>(this)->tag;
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

namespace redirect_e {
  const int Path = 1;
  const int FileDesc = 2;
  const int HereDoc = 3;
};

const char* redirect_str(int tag);

class redirect_t {
 protected:
  redirect_t() {}
 public:
  int tag_() {
    return reinterpret_cast<Obj*>(this)->tag;
  }
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();
  DISALLOW_COPY_AND_ASSIGN(redirect_t)
};

class redirect__Path : public redirect_t {
 public:
  redirect__Path() : tag(static_cast<uint16_t>(redirect_e::Path)), op_id(-1),
                 fd(-1), filename(new Str("")), op_spid(-1) {
  }
  redirect__Path(Id_t op_id, int fd, Str* filename, int op_spid) :
                 tag(static_cast<uint16_t>(redirect_e::Path)), op_id(op_id),
                 fd(fd), filename(filename), op_spid(op_spid) {
  }
  uint16_t tag;
  Id_t op_id;
  int fd;
  Str* filename;
  int op_spid;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(redirect__Path)
};

class redirect__FileDesc : public redirect_t {
 public:
  redirect__FileDesc() : tag(static_cast<uint16_t>(redirect_e::FileDesc)),
                     op_id(-1), fd(-1), target_fd(-1), op_spid(-1) {
  }
  redirect__FileDesc(Id_t op_id, int fd, int target_fd, int op_spid) :
                     tag(static_cast<uint16_t>(redirect_e::FileDesc)),
                     op_id(op_id), fd(fd), target_fd(target_fd),
                     op_spid(op_spid) {
  }
  uint16_t tag;
  Id_t op_id;
  int fd;
  int target_fd;
  int op_spid;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(redirect__FileDesc)
};

class redirect__HereDoc : public redirect_t {
 public:
  redirect__HereDoc() : tag(static_cast<uint16_t>(redirect_e::HereDoc)),
                    fd(-1), body(new Str("")), op_spid(-1) {
  }
  redirect__HereDoc(int fd, Str* body, int op_spid) :
                    tag(static_cast<uint16_t>(redirect_e::HereDoc)), fd(fd),
                    body(body), op_spid(op_spid) {
  }
  uint16_t tag;
  int fd;
  Str* body;
  int op_spid;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(redirect__HereDoc)
};

namespace redirect {
  typedef redirect__Path Path;
  typedef redirect__FileDesc FileDesc;
  typedef redirect__HereDoc HereDoc;
}

namespace job_status_e {
  const int Process = 1;
  const int Pipeline = 2;
};

const char* job_status_str(int tag);

class job_status_t {
 protected:
  job_status_t() {}
 public:
  int tag_() {
    return reinterpret_cast<Obj*>(this)->tag;
  }
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();
  DISALLOW_COPY_AND_ASSIGN(job_status_t)
};

class job_status__Process : public job_status_t {
 public:
  job_status__Process() : tag(static_cast<uint16_t>(job_status_e::Process)),
                      status(-1) {
  }
  job_status__Process(int status) :
                      tag(static_cast<uint16_t>(job_status_e::Process)),
                      status(status) {
  }
  uint16_t tag;
  int status;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(job_status__Process)
};

class job_status__Pipeline : public job_status_t {
 public:
  job_status__Pipeline() : tag(static_cast<uint16_t>(job_status_e::Pipeline)),
                       statuses(new List<int>()) {
  }
  job_status__Pipeline(List<int>* statuses) :
                       tag(static_cast<uint16_t>(job_status_e::Pipeline)),
                       statuses(statuses) {
  }
  uint16_t tag;
  List<int>* statuses;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(job_status__Pipeline)
};

namespace job_status {
  typedef job_status__Process Process;
  typedef job_status__Pipeline Pipeline;
}

enum class span_e {
  Black = 1,
  Delim = 2,
  Backslash = 3,
};
typedef span_e span_t;

const char* span_str(span_e tag);

enum class emit_e {
  Part = 1,
  Delim = 2,
  Empty = 3,
  Escape = 4,
  Nothing = 5,
};
typedef emit_e emit_t;

const char* emit_str(emit_e tag);

enum class state_e {
  Invalid = 1,
  Start = 2,
  DE_White1 = 3,
  DE_Gray = 4,
  DE_White2 = 5,
  Black = 6,
  Backslash = 7,
};
typedef state_e state_t;

const char* state_str(state_e tag);

enum class char_kind_e {
  DE_White = 1,
  DE_Gray = 2,
  Black = 3,
  Backslash = 4,
};
typedef char_kind_e char_kind_t;

const char* char_kind_str(char_kind_e tag);

enum class effect_e {
  SpliceParts = 1,
  Error = 2,
  SpliceAndAssign = 3,
  NoOp = 4,
};
typedef effect_e effect_t;

const char* effect_str(effect_e tag);

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

class assign_arg : public Obj {
 public:
  assign_arg() : tag(1000), lval(nullptr), rval(nullptr), spid(-1) {
  }
  assign_arg(lvalue_t* lval, value_t* rval, int spid) : tag(1000), lval(lval),
             rval(rval), spid(spid) {
  }
  uint16_t tag;
  lvalue_t* lval;
  value_t* rval;
  int spid;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(assign_arg)
};

class arg_vector : public Obj {
 public:
  arg_vector() : tag(1001), strs(new List<Str*>()), spids(new List<int>()) {
  }
  arg_vector(List<Str*>* strs, List<int>* spids) : tag(1001), strs(strs),
             spids(spids) {
  }
  uint16_t tag;
  List<Str*>* strs;
  List<int>* spids;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(arg_vector)
};

class cell : public Obj {
 public:
  cell() : tag(1002), val(nullptr), exported(false), readonly(false) {
  }
  cell(value_t* val, bool exported, bool readonly) : tag(1002), val(val),
       exported(exported), readonly(readonly) {
  }
  uint16_t tag;
  value_t* val;
  bool exported;
  bool readonly;
  hnode_t* PrettyTree();
  hnode_t* _AbbreviatedTree();
  hnode_t* AbbreviatedTree();

  DISALLOW_COPY_AND_ASSIGN(cell)
};


}  // namespace runtime_asdl

#endif  // RUNTIME_ASDL
