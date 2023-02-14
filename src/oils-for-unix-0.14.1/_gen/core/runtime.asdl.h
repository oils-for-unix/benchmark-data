// _gen/core/runtime.asdl.h is generated by asdl_main.py

#ifndef RUNTIME_ASDL
#define RUNTIME_ASDL

#include <cstdint>

#include "mycpp/runtime.h"
#include "_gen/asdl/hnode.asdl.h"
using hnode_asdl::hnode_t;

#include "_gen/frontend/id_kind.asdl.h"
using id_kind_asdl::Id_t;

namespace syntax_asdl { class ArgList; class command_t; class re_t; class redir_loc_t; class Token; class proc_sig_t; }

namespace runtime_asdl {

// use struct instead of namespace so 'using' works consistently
#define ASDL_NAMES struct

class assign_arg;
class cmd_value_t;
class part_value_t;
class value_t;
class a_index_t;
class VTestPlace;
class VarSubState;
class cell;
class lvalue_t;
class redirect_arg_t;
class redirect;
class Proc;
class StatusArray;
class CommandStatus;
class wait_status_t;
class trace_t;
class hay_node;

ASDL_NAMES cmd_value_e {
  enum no_name {
  Argv = 1,
  Assign = 2,
  };
};

const char* cmd_value_str(int tag);

class cmd_value_t {
 protected:
  cmd_value_t() {
  }
 public:
  int tag_() const {
    return reinterpret_cast<const ObjHeader*>(this)->type_tag;
  }
  hnode_t* PrettyTree();
  DISALLOW_COPY_AND_ASSIGN(cmd_value_t)
};

class cmd_value__Argv : public cmd_value_t {
 public:
  cmd_value__Argv(List<Str*>* argv, List<int>* arg_spids, syntax_asdl::ArgList*
                  typed_args)
      : GC_ASDL_CLASS(header_, static_cast<uint16_t>(cmd_value_e::Argv),
                      field_mask(), sizeof(cmd_value__Argv)),
        argv(argv),
        arg_spids(arg_spids),
        typed_args(typed_args) {
  }

  static cmd_value__Argv* Create() { 
    return Alloc<cmd_value__Argv>(Alloc<List<Str*>>(), Alloc<List<int>>(),
                                  nullptr);
  }

  hnode_t* PrettyTree();

  GC_OBJ(header_);
  List<Str*>* argv;
  List<int>* arg_spids;
  syntax_asdl::ArgList* typed_args;

  static constexpr uint16_t field_mask() {
    return maskbit(offsetof(cmd_value__Argv, argv))
         | maskbit(offsetof(cmd_value__Argv, arg_spids))
         | maskbit(offsetof(cmd_value__Argv, typed_args));
  }

  DISALLOW_COPY_AND_ASSIGN(cmd_value__Argv)
};

class cmd_value__Assign : public cmd_value_t {
 public:
  cmd_value__Assign(int builtin_id, List<Str*>* argv, List<int>* arg_spids,
                    List<assign_arg*>* pairs)
      : GC_ASDL_CLASS(header_, static_cast<uint16_t>(cmd_value_e::Assign),
                      field_mask(), sizeof(cmd_value__Assign)),
        builtin_id(builtin_id),
        argv(argv),
        arg_spids(arg_spids),
        pairs(pairs) {
  }

  static cmd_value__Assign* Create() { 
    return Alloc<cmd_value__Assign>(-1, Alloc<List<Str*>>(),
                                    Alloc<List<int>>(),
                                    Alloc<List<assign_arg*>>());
  }

  hnode_t* PrettyTree();

  GC_OBJ(header_);
  int builtin_id;
  List<Str*>* argv;
  List<int>* arg_spids;
  List<assign_arg*>* pairs;

  static constexpr uint16_t field_mask() {
    return maskbit(offsetof(cmd_value__Assign, argv))
         | maskbit(offsetof(cmd_value__Assign, arg_spids))
         | maskbit(offsetof(cmd_value__Assign, pairs));
  }

  DISALLOW_COPY_AND_ASSIGN(cmd_value__Assign)
};

ASDL_NAMES cmd_value {
  typedef cmd_value__Argv Argv;
  typedef cmd_value__Assign Assign;
};

ASDL_NAMES part_value_e {
  enum no_name {
  String = 1,
  Array = 2,
  ExtGlob = 3,
  };
};

const char* part_value_str(int tag);

class part_value_t {
 protected:
  part_value_t() {
  }
 public:
  int tag_() const {
    return reinterpret_cast<const ObjHeader*>(this)->type_tag;
  }
  hnode_t* PrettyTree();
  DISALLOW_COPY_AND_ASSIGN(part_value_t)
};

class part_value__String : public part_value_t {
 public:
  part_value__String(Str* s, bool quoted, bool do_split)
      : GC_ASDL_CLASS(header_, static_cast<uint16_t>(part_value_e::String),
                      field_mask(), sizeof(part_value__String)),
        s(s),
        quoted(quoted),
        do_split(do_split) {
  }

  static part_value__String* Create() { 
    return Alloc<part_value__String>(kEmptyString, false, false);
  }

  hnode_t* PrettyTree();

  GC_OBJ(header_);
  Str* s;
  bool quoted;
  bool do_split;

  static constexpr uint16_t field_mask() {
    return maskbit(offsetof(part_value__String, s));
  }

  DISALLOW_COPY_AND_ASSIGN(part_value__String)
};

class part_value__Array : public part_value_t {
 public:
  part_value__Array(List<Str*>* strs)
      : GC_ASDL_CLASS(header_, static_cast<uint16_t>(part_value_e::Array),
                      field_mask(), sizeof(part_value__Array)),
        strs(strs) {
  }

  static part_value__Array* Create() { 
    return Alloc<part_value__Array>(Alloc<List<Str*>>());
  }

  hnode_t* PrettyTree();

  GC_OBJ(header_);
  List<Str*>* strs;

  static constexpr uint16_t field_mask() {
    return maskbit(offsetof(part_value__Array, strs));
  }

  DISALLOW_COPY_AND_ASSIGN(part_value__Array)
};

class part_value__ExtGlob : public part_value_t {
 public:
  part_value__ExtGlob(List<part_value_t*>* part_vals)
      : GC_ASDL_CLASS(header_, static_cast<uint16_t>(part_value_e::ExtGlob),
                      field_mask(), sizeof(part_value__ExtGlob)),
        part_vals(part_vals) {
  }

  static part_value__ExtGlob* Create() { 
    return Alloc<part_value__ExtGlob>(Alloc<List<part_value_t*>>());
  }

  hnode_t* PrettyTree();

  GC_OBJ(header_);
  List<part_value_t*>* part_vals;

  static constexpr uint16_t field_mask() {
    return maskbit(offsetof(part_value__ExtGlob, part_vals));
  }

  DISALLOW_COPY_AND_ASSIGN(part_value__ExtGlob)
};

ASDL_NAMES part_value {
  typedef part_value__String String;
  typedef part_value__Array Array;
  typedef part_value__ExtGlob ExtGlob;
};

ASDL_NAMES value_e {
  enum no_name {
  Undef = 1,
  Str = 2,
  Int = 3,
  MaybeStrArray = 4,
  AssocArray = 5,
  Bool = 6,
  Float = 7,
  Eggex = 8,
  Block = 9,
  Obj = 10,
  };
};

const char* value_str(int tag);

class value_t {
 protected:
  value_t() {
  }
 public:
  int tag_() const {
    return reinterpret_cast<const ObjHeader*>(this)->type_tag;
  }
  hnode_t* PrettyTree();
  DISALLOW_COPY_AND_ASSIGN(value_t)
};

class value__Undef : public value_t {
 public:
  value__Undef()
      : GC_ASDL_CLASS(header_, static_cast<uint16_t>(value_e::Undef),
                      kZeroMask, sizeof(value__Undef)) {
  }

  hnode_t* PrettyTree();

  GC_OBJ(header_);

  DISALLOW_COPY_AND_ASSIGN(value__Undef)
};

class value__Str : public value_t {
 public:
  value__Str(Str* s)
      : GC_ASDL_CLASS(header_, static_cast<uint16_t>(value_e::Str),
                      field_mask(), sizeof(value__Str)),
        s(s) {
  }

  static value__Str* Create() { 
    return Alloc<value__Str>(kEmptyString);
  }

  hnode_t* PrettyTree();

  GC_OBJ(header_);
  Str* s;

  static constexpr uint16_t field_mask() {
    return maskbit(offsetof(value__Str, s));
  }

  DISALLOW_COPY_AND_ASSIGN(value__Str)
};

class value__Int : public value_t {
 public:
  value__Int(int i)
      : GC_ASDL_CLASS(header_, static_cast<uint16_t>(value_e::Int),
                      kZeroMask, sizeof(value__Int)),
        i(i) {
  }

  static value__Int* Create() { 
    return Alloc<value__Int>(-1);
  }

  hnode_t* PrettyTree();

  GC_OBJ(header_);
  int i;

  DISALLOW_COPY_AND_ASSIGN(value__Int)
};

class value__MaybeStrArray : public value_t {
 public:
  value__MaybeStrArray(List<Str*>* strs)
      : GC_ASDL_CLASS(header_, static_cast<uint16_t>(value_e::MaybeStrArray),
                      field_mask(), sizeof(value__MaybeStrArray)),
        strs(strs) {
  }

  static value__MaybeStrArray* Create() { 
    return Alloc<value__MaybeStrArray>(Alloc<List<Str*>>());
  }

  hnode_t* PrettyTree();

  GC_OBJ(header_);
  List<Str*>* strs;

  static constexpr uint16_t field_mask() {
    return maskbit(offsetof(value__MaybeStrArray, strs));
  }

  DISALLOW_COPY_AND_ASSIGN(value__MaybeStrArray)
};

class value__AssocArray : public value_t {
 public:
  value__AssocArray(Dict<Str*, Str*>* d)
      : GC_ASDL_CLASS(header_, static_cast<uint16_t>(value_e::AssocArray),
                      field_mask(), sizeof(value__AssocArray)),
        d(d) {
  }

  static value__AssocArray* Create() { 
    return Alloc<value__AssocArray>(nullptr);
  }

  hnode_t* PrettyTree();

  GC_OBJ(header_);
  Dict<Str*, Str*>* d;

  static constexpr uint16_t field_mask() {
    return maskbit(offsetof(value__AssocArray, d));
  }

  DISALLOW_COPY_AND_ASSIGN(value__AssocArray)
};

class value__Bool : public value_t {
 public:
  value__Bool(bool b)
      : GC_ASDL_CLASS(header_, static_cast<uint16_t>(value_e::Bool),
                      kZeroMask, sizeof(value__Bool)),
        b(b) {
  }

  static value__Bool* Create() { 
    return Alloc<value__Bool>(false);
  }

  hnode_t* PrettyTree();

  GC_OBJ(header_);
  bool b;

  DISALLOW_COPY_AND_ASSIGN(value__Bool)
};

class value__Float : public value_t {
 public:
  value__Float(double f)
      : GC_ASDL_CLASS(header_, static_cast<uint16_t>(value_e::Float),
                      kZeroMask, sizeof(value__Float)),
        f(f) {
  }

  static value__Float* Create() { 
    return Alloc<value__Float>(0.0);
  }

  hnode_t* PrettyTree();

  GC_OBJ(header_);
  double f;

  DISALLOW_COPY_AND_ASSIGN(value__Float)
};

class value__Eggex : public value_t {
 public:
  value__Eggex(syntax_asdl::re_t* expr, Str* as_ere)
      : GC_ASDL_CLASS(header_, static_cast<uint16_t>(value_e::Eggex),
                      field_mask(), sizeof(value__Eggex)),
        expr(expr),
        as_ere(as_ere) {
  }

  static value__Eggex* Create() { 
    return Alloc<value__Eggex>(nullptr, kEmptyString);
  }

  hnode_t* PrettyTree();

  GC_OBJ(header_);
  syntax_asdl::re_t* expr;
  Str* as_ere;

  static constexpr uint16_t field_mask() {
    return maskbit(offsetof(value__Eggex, expr))
         | maskbit(offsetof(value__Eggex, as_ere));
  }

  DISALLOW_COPY_AND_ASSIGN(value__Eggex)
};

class value__Block : public value_t {
 public:
  value__Block(syntax_asdl::command_t* body)
      : GC_ASDL_CLASS(header_, static_cast<uint16_t>(value_e::Block),
                      field_mask(), sizeof(value__Block)),
        body(body) {
  }

  static value__Block* Create() { 
    return Alloc<value__Block>(nullptr);
  }

  hnode_t* PrettyTree();

  GC_OBJ(header_);
  syntax_asdl::command_t* body;

  static constexpr uint16_t field_mask() {
    return maskbit(offsetof(value__Block, body));
  }

  DISALLOW_COPY_AND_ASSIGN(value__Block)
};

class value__Obj : public value_t {
 public:
  value__Obj(void* obj)
      : GC_ASDL_CLASS(header_, static_cast<uint16_t>(value_e::Obj),
                      field_mask(), sizeof(value__Obj)),
        obj(obj) {
  }

  static value__Obj* Create() { 
    return Alloc<value__Obj>(nullptr);
  }

  hnode_t* PrettyTree();

  GC_OBJ(header_);
  void* obj;

  static constexpr uint16_t field_mask() {
    return maskbit(offsetof(value__Obj, obj));
  }

  DISALLOW_COPY_AND_ASSIGN(value__Obj)
};

ASDL_NAMES value {
  typedef value__Undef Undef;
  typedef value__Str Str;
  typedef value__Int Int;
  typedef value__MaybeStrArray MaybeStrArray;
  typedef value__AssocArray AssocArray;
  typedef value__Bool Bool;
  typedef value__Float Float;
  typedef value__Eggex Eggex;
  typedef value__Block Block;
  typedef value__Obj Obj;
};

ASDL_NAMES a_index_e {
  enum no_name {
  Str = 1,
  Int = 2,
  };
};

const char* a_index_str(int tag);

class a_index_t {
 protected:
  a_index_t() {
  }
 public:
  int tag_() const {
    return reinterpret_cast<const ObjHeader*>(this)->type_tag;
  }
  hnode_t* PrettyTree();
  DISALLOW_COPY_AND_ASSIGN(a_index_t)
};

class a_index__Str : public a_index_t {
 public:
  a_index__Str(Str* s)
      : GC_ASDL_CLASS(header_, static_cast<uint16_t>(a_index_e::Str),
                      field_mask(), sizeof(a_index__Str)),
        s(s) {
  }

  static a_index__Str* Create() { 
    return Alloc<a_index__Str>(kEmptyString);
  }

  hnode_t* PrettyTree();

  GC_OBJ(header_);
  Str* s;

  static constexpr uint16_t field_mask() {
    return maskbit(offsetof(a_index__Str, s));
  }

  DISALLOW_COPY_AND_ASSIGN(a_index__Str)
};

class a_index__Int : public a_index_t {
 public:
  a_index__Int(int i)
      : GC_ASDL_CLASS(header_, static_cast<uint16_t>(a_index_e::Int),
                      kZeroMask, sizeof(a_index__Int)),
        i(i) {
  }

  static a_index__Int* Create() { 
    return Alloc<a_index__Int>(-1);
  }

  hnode_t* PrettyTree();

  GC_OBJ(header_);
  int i;

  DISALLOW_COPY_AND_ASSIGN(a_index__Int)
};

ASDL_NAMES a_index {
  typedef a_index__Str Str;
  typedef a_index__Int Int;
};

enum class scope_e {
  Parent = 1,
  Shopt = 2,
  Dynamic = 3,
  LocalOrGlobal = 4,
  LocalOnly = 5,
  GlobalOnly = 6,
};
typedef scope_e scope_t;

const char* scope_str(scope_e tag);

ASDL_NAMES lvalue_e {
  enum no_name {
  Named = 1,
  Indexed = 2,
  Keyed = 3,
  ObjIndex = 4,
  ObjAttr = 5,
  };
};

const char* lvalue_str(int tag);

class lvalue_t {
 protected:
  lvalue_t() {
  }
 public:
  int tag_() const {
    return reinterpret_cast<const ObjHeader*>(this)->type_tag;
  }
  hnode_t* PrettyTree();
  DISALLOW_COPY_AND_ASSIGN(lvalue_t)
};

class lvalue__Named : public lvalue_t {
 public:
  lvalue__Named(Str* name, int blame_spid)
      : GC_ASDL_CLASS(header_, static_cast<uint16_t>(lvalue_e::Named),
                      field_mask(), sizeof(lvalue__Named)),
        name(name),
        blame_spid(blame_spid) {
  }

  static lvalue__Named* Create() { 
    return Alloc<lvalue__Named>(kEmptyString, -1);
  }

  hnode_t* PrettyTree();

  GC_OBJ(header_);
  Str* name;
  int blame_spid;

  static constexpr uint16_t field_mask() {
    return maskbit(offsetof(lvalue__Named, name));
  }

  DISALLOW_COPY_AND_ASSIGN(lvalue__Named)
};

class lvalue__Indexed : public lvalue_t {
 public:
  lvalue__Indexed(Str* name, int index, int blame_spid)
      : GC_ASDL_CLASS(header_, static_cast<uint16_t>(lvalue_e::Indexed),
                      field_mask(), sizeof(lvalue__Indexed)),
        name(name),
        index(index),
        blame_spid(blame_spid) {
  }

  static lvalue__Indexed* Create() { 
    return Alloc<lvalue__Indexed>(kEmptyString, -1, -1);
  }

  hnode_t* PrettyTree();

  GC_OBJ(header_);
  Str* name;
  int index;
  int blame_spid;

  static constexpr uint16_t field_mask() {
    return maskbit(offsetof(lvalue__Indexed, name));
  }

  DISALLOW_COPY_AND_ASSIGN(lvalue__Indexed)
};

class lvalue__Keyed : public lvalue_t {
 public:
  lvalue__Keyed(Str* name, Str* key, int blame_spid)
      : GC_ASDL_CLASS(header_, static_cast<uint16_t>(lvalue_e::Keyed),
                      field_mask(), sizeof(lvalue__Keyed)),
        name(name),
        key(key),
        blame_spid(blame_spid) {
  }

  static lvalue__Keyed* Create() { 
    return Alloc<lvalue__Keyed>(kEmptyString, kEmptyString, -1);
  }

  hnode_t* PrettyTree();

  GC_OBJ(header_);
  Str* name;
  Str* key;
  int blame_spid;

  static constexpr uint16_t field_mask() {
    return maskbit(offsetof(lvalue__Keyed, name))
         | maskbit(offsetof(lvalue__Keyed, key));
  }

  DISALLOW_COPY_AND_ASSIGN(lvalue__Keyed)
};

class lvalue__ObjIndex : public lvalue_t {
 public:
  lvalue__ObjIndex(void* obj, void* index)
      : GC_ASDL_CLASS(header_, static_cast<uint16_t>(lvalue_e::ObjIndex),
                      field_mask(), sizeof(lvalue__ObjIndex)),
        obj(obj),
        index(index) {
  }

  static lvalue__ObjIndex* Create() { 
    return Alloc<lvalue__ObjIndex>(nullptr, nullptr);
  }

  hnode_t* PrettyTree();

  GC_OBJ(header_);
  void* obj;
  void* index;

  static constexpr uint16_t field_mask() {
    return maskbit(offsetof(lvalue__ObjIndex, obj))
         | maskbit(offsetof(lvalue__ObjIndex, index));
  }

  DISALLOW_COPY_AND_ASSIGN(lvalue__ObjIndex)
};

class lvalue__ObjAttr : public lvalue_t {
 public:
  lvalue__ObjAttr(void* obj, Str* attr)
      : GC_ASDL_CLASS(header_, static_cast<uint16_t>(lvalue_e::ObjAttr),
                      field_mask(), sizeof(lvalue__ObjAttr)),
        obj(obj),
        attr(attr) {
  }

  static lvalue__ObjAttr* Create() { 
    return Alloc<lvalue__ObjAttr>(nullptr, kEmptyString);
  }

  hnode_t* PrettyTree();

  GC_OBJ(header_);
  void* obj;
  Str* attr;

  static constexpr uint16_t field_mask() {
    return maskbit(offsetof(lvalue__ObjAttr, obj))
         | maskbit(offsetof(lvalue__ObjAttr, attr));
  }

  DISALLOW_COPY_AND_ASSIGN(lvalue__ObjAttr)
};

ASDL_NAMES lvalue {
  typedef lvalue__Named Named;
  typedef lvalue__Indexed Indexed;
  typedef lvalue__Keyed Keyed;
  typedef lvalue__ObjIndex ObjIndex;
  typedef lvalue__ObjAttr ObjAttr;
};

ASDL_NAMES redirect_arg_e {
  enum no_name {
  Path = 1,
  CopyFd = 2,
  MoveFd = 3,
  CloseFd = 4,
  HereDoc = 5,
  };
};

const char* redirect_arg_str(int tag);

class redirect_arg_t {
 protected:
  redirect_arg_t() {
  }
 public:
  int tag_() const {
    return reinterpret_cast<const ObjHeader*>(this)->type_tag;
  }
  hnode_t* PrettyTree();
  DISALLOW_COPY_AND_ASSIGN(redirect_arg_t)
};

class redirect_arg__Path : public redirect_arg_t {
 public:
  redirect_arg__Path(Str* filename)
      : GC_ASDL_CLASS(header_, static_cast<uint16_t>(redirect_arg_e::Path),
                      field_mask(), sizeof(redirect_arg__Path)),
        filename(filename) {
  }

  static redirect_arg__Path* Create() { 
    return Alloc<redirect_arg__Path>(kEmptyString);
  }

  hnode_t* PrettyTree();

  GC_OBJ(header_);
  Str* filename;

  static constexpr uint16_t field_mask() {
    return maskbit(offsetof(redirect_arg__Path, filename));
  }

  DISALLOW_COPY_AND_ASSIGN(redirect_arg__Path)
};

class redirect_arg__CopyFd : public redirect_arg_t {
 public:
  redirect_arg__CopyFd(int target_fd)
      : GC_ASDL_CLASS(header_, static_cast<uint16_t>(redirect_arg_e::CopyFd),
                      kZeroMask, sizeof(redirect_arg__CopyFd)),
        target_fd(target_fd) {
  }

  static redirect_arg__CopyFd* Create() { 
    return Alloc<redirect_arg__CopyFd>(-1);
  }

  hnode_t* PrettyTree();

  GC_OBJ(header_);
  int target_fd;

  DISALLOW_COPY_AND_ASSIGN(redirect_arg__CopyFd)
};

class redirect_arg__MoveFd : public redirect_arg_t {
 public:
  redirect_arg__MoveFd(int target_fd)
      : GC_ASDL_CLASS(header_, static_cast<uint16_t>(redirect_arg_e::MoveFd),
                      kZeroMask, sizeof(redirect_arg__MoveFd)),
        target_fd(target_fd) {
  }

  static redirect_arg__MoveFd* Create() { 
    return Alloc<redirect_arg__MoveFd>(-1);
  }

  hnode_t* PrettyTree();

  GC_OBJ(header_);
  int target_fd;

  DISALLOW_COPY_AND_ASSIGN(redirect_arg__MoveFd)
};

class redirect_arg__CloseFd : public redirect_arg_t {
 public:
  redirect_arg__CloseFd()
      : GC_ASDL_CLASS(header_, static_cast<uint16_t>(redirect_arg_e::CloseFd),
                      kZeroMask, sizeof(redirect_arg__CloseFd)) {
  }

  hnode_t* PrettyTree();

  GC_OBJ(header_);

  DISALLOW_COPY_AND_ASSIGN(redirect_arg__CloseFd)
};

class redirect_arg__HereDoc : public redirect_arg_t {
 public:
  redirect_arg__HereDoc(Str* body)
      : GC_ASDL_CLASS(header_, static_cast<uint16_t>(redirect_arg_e::HereDoc),
                      field_mask(), sizeof(redirect_arg__HereDoc)),
        body(body) {
  }

  static redirect_arg__HereDoc* Create() { 
    return Alloc<redirect_arg__HereDoc>(kEmptyString);
  }

  hnode_t* PrettyTree();

  GC_OBJ(header_);
  Str* body;

  static constexpr uint16_t field_mask() {
    return maskbit(offsetof(redirect_arg__HereDoc, body));
  }

  DISALLOW_COPY_AND_ASSIGN(redirect_arg__HereDoc)
};

ASDL_NAMES redirect_arg {
  typedef redirect_arg__Path Path;
  typedef redirect_arg__CopyFd CopyFd;
  typedef redirect_arg__MoveFd MoveFd;
  typedef redirect_arg__CloseFd CloseFd;
  typedef redirect_arg__HereDoc HereDoc;
};

ASDL_NAMES wait_status_e {
  enum no_name {
  Proc = 1,
  Pipeline = 2,
  Cancelled = 3,
  };
};

const char* wait_status_str(int tag);

class wait_status_t {
 protected:
  wait_status_t() {
  }
 public:
  int tag_() const {
    return reinterpret_cast<const ObjHeader*>(this)->type_tag;
  }
  hnode_t* PrettyTree();
  DISALLOW_COPY_AND_ASSIGN(wait_status_t)
};

class wait_status__Proc : public wait_status_t {
 public:
  wait_status__Proc(int code)
      : GC_ASDL_CLASS(header_, static_cast<uint16_t>(wait_status_e::Proc),
                      kZeroMask, sizeof(wait_status__Proc)),
        code(code) {
  }

  static wait_status__Proc* Create() { 
    return Alloc<wait_status__Proc>(-1);
  }

  hnode_t* PrettyTree();

  GC_OBJ(header_);
  int code;

  DISALLOW_COPY_AND_ASSIGN(wait_status__Proc)
};

class wait_status__Pipeline : public wait_status_t {
 public:
  wait_status__Pipeline(List<int>* codes)
      : GC_ASDL_CLASS(header_, static_cast<uint16_t>(wait_status_e::Pipeline),
                      field_mask(), sizeof(wait_status__Pipeline)),
        codes(codes) {
  }

  static wait_status__Pipeline* Create() { 
    return Alloc<wait_status__Pipeline>(Alloc<List<int>>());
  }

  hnode_t* PrettyTree();

  GC_OBJ(header_);
  List<int>* codes;

  static constexpr uint16_t field_mask() {
    return maskbit(offsetof(wait_status__Pipeline, codes));
  }

  DISALLOW_COPY_AND_ASSIGN(wait_status__Pipeline)
};

class wait_status__Cancelled : public wait_status_t {
 public:
  wait_status__Cancelled(int sig_num)
      : GC_ASDL_CLASS(header_, static_cast<uint16_t>(wait_status_e::Cancelled),
                      kZeroMask, sizeof(wait_status__Cancelled)),
        sig_num(sig_num) {
  }

  static wait_status__Cancelled* Create() { 
    return Alloc<wait_status__Cancelled>(-1);
  }

  hnode_t* PrettyTree();

  GC_OBJ(header_);
  int sig_num;

  DISALLOW_COPY_AND_ASSIGN(wait_status__Cancelled)
};

ASDL_NAMES wait_status {
  typedef wait_status__Proc Proc;
  typedef wait_status__Pipeline Pipeline;
  typedef wait_status__Cancelled Cancelled;
};

enum class flow_e {
  Nothing = 1,
  Break = 2,
  Raise = 3,
};
typedef flow_e flow_t;

const char* flow_str(flow_e tag);

enum class span_e {
  Black = 1,
  Delim = 2,
  Backslash = 3,
};
typedef span_e span_t;

const char* span_str(span_e tag);

ASDL_NAMES emit_i {
  enum no_name {
  Part = 1,
  Delim = 2,
  Empty = 3,
  Escape = 4,
  Nothing = 5,
  ARRAY_SIZE = 6,
  };
};

const char* emit_str(int tag);

typedef int emit_t;

ASDL_NAMES state_i {
  enum no_name {
  Invalid = 1,
  Start = 2,
  DE_White1 = 3,
  DE_Gray = 4,
  DE_White2 = 5,
  Black = 6,
  Backslash = 7,
  Done = 8,
  ARRAY_SIZE = 9,
  };
};

const char* state_str(int tag);

typedef int state_t;

ASDL_NAMES char_kind_i {
  enum no_name {
  DE_White = 1,
  DE_Gray = 2,
  Black = 3,
  Backslash = 4,
  Sentinel = 5,
  ARRAY_SIZE = 6,
  };
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

enum class flag_type_e {
  Bool = 1,
  Int = 2,
  Float = 3,
  Str = 4,
};
typedef flag_type_e flag_type_t;

const char* flag_type_str(flag_type_e tag);

ASDL_NAMES trace_e {
  enum no_name {
  External = 1,
  CommandSub = 2,
  ForkWait = 3,
  Fork = 4,
  PipelinePart = 5,
  ProcessSub = 6,
  HereDoc = 7,
  };
};

const char* trace_str(int tag);

class trace_t {
 protected:
  trace_t() {
  }
 public:
  int tag_() const {
    return reinterpret_cast<const ObjHeader*>(this)->type_tag;
  }
  hnode_t* PrettyTree();
  DISALLOW_COPY_AND_ASSIGN(trace_t)
};

class trace__External : public trace_t {
 public:
  trace__External(List<Str*>* argv)
      : GC_ASDL_CLASS(header_, static_cast<uint16_t>(trace_e::External),
                      field_mask(), sizeof(trace__External)),
        argv(argv) {
  }

  static trace__External* Create() { 
    return Alloc<trace__External>(Alloc<List<Str*>>());
  }

  hnode_t* PrettyTree();

  GC_OBJ(header_);
  List<Str*>* argv;

  static constexpr uint16_t field_mask() {
    return maskbit(offsetof(trace__External, argv));
  }

  DISALLOW_COPY_AND_ASSIGN(trace__External)
};

class trace__CommandSub : public trace_t {
 public:
  trace__CommandSub()
      : GC_ASDL_CLASS(header_, static_cast<uint16_t>(trace_e::CommandSub),
                      kZeroMask, sizeof(trace__CommandSub)) {
  }

  hnode_t* PrettyTree();

  GC_OBJ(header_);

  DISALLOW_COPY_AND_ASSIGN(trace__CommandSub)
};

class trace__ForkWait : public trace_t {
 public:
  trace__ForkWait()
      : GC_ASDL_CLASS(header_, static_cast<uint16_t>(trace_e::ForkWait),
                      kZeroMask, sizeof(trace__ForkWait)) {
  }

  hnode_t* PrettyTree();

  GC_OBJ(header_);

  DISALLOW_COPY_AND_ASSIGN(trace__ForkWait)
};

class trace__Fork : public trace_t {
 public:
  trace__Fork()
      : GC_ASDL_CLASS(header_, static_cast<uint16_t>(trace_e::Fork),
                      kZeroMask, sizeof(trace__Fork)) {
  }

  hnode_t* PrettyTree();

  GC_OBJ(header_);

  DISALLOW_COPY_AND_ASSIGN(trace__Fork)
};

class trace__PipelinePart : public trace_t {
 public:
  trace__PipelinePart()
      : GC_ASDL_CLASS(header_, static_cast<uint16_t>(trace_e::PipelinePart),
                      kZeroMask, sizeof(trace__PipelinePart)) {
  }

  hnode_t* PrettyTree();

  GC_OBJ(header_);

  DISALLOW_COPY_AND_ASSIGN(trace__PipelinePart)
};

class trace__ProcessSub : public trace_t {
 public:
  trace__ProcessSub()
      : GC_ASDL_CLASS(header_, static_cast<uint16_t>(trace_e::ProcessSub),
                      kZeroMask, sizeof(trace__ProcessSub)) {
  }

  hnode_t* PrettyTree();

  GC_OBJ(header_);

  DISALLOW_COPY_AND_ASSIGN(trace__ProcessSub)
};

class trace__HereDoc : public trace_t {
 public:
  trace__HereDoc()
      : GC_ASDL_CLASS(header_, static_cast<uint16_t>(trace_e::HereDoc),
                      kZeroMask, sizeof(trace__HereDoc)) {
  }

  hnode_t* PrettyTree();

  GC_OBJ(header_);

  DISALLOW_COPY_AND_ASSIGN(trace__HereDoc)
};

ASDL_NAMES trace {
  typedef trace__External External;
  typedef trace__CommandSub CommandSub;
  typedef trace__ForkWait ForkWait;
  typedef trace__Fork Fork;
  typedef trace__PipelinePart PipelinePart;
  typedef trace__ProcessSub ProcessSub;
  typedef trace__HereDoc HereDoc;
};

enum class word_style_e {
  Expr = 1,
  Unquoted = 2,
  DQ = 3,
  SQ = 4,
};
typedef word_style_e word_style_t;

const char* word_style_str(word_style_e tag);

class assign_arg {
 public:
  assign_arg(Str* var_name, value_t* rval, bool plus_eq, int spid)
      : GC_ASDL_CLASS(header_, 64,
                      field_mask(), sizeof(assign_arg)),
        var_name(var_name),
        rval(rval),
        plus_eq(plus_eq),
        spid(spid) {
  }

  static assign_arg* Create() { 
    return Alloc<assign_arg>(kEmptyString, nullptr, false, -1);
  }

  hnode_t* PrettyTree();

  GC_OBJ(header_);
  Str* var_name;
  value_t* rval;
  bool plus_eq;
  int spid;

  static constexpr uint16_t field_mask() {
    return maskbit(offsetof(assign_arg, var_name))
         | maskbit(offsetof(assign_arg, rval));
  }

  DISALLOW_COPY_AND_ASSIGN(assign_arg)
};

class VTestPlace {
 public:
  VTestPlace(Str* name, a_index_t* index)
      : GC_ASDL_CLASS(header_, 65,
                      field_mask(), sizeof(VTestPlace)),
        name(name),
        index(index) {
  }

  static VTestPlace* Create() { 
    return Alloc<VTestPlace>(kEmptyString, nullptr);
  }

  hnode_t* PrettyTree();

  GC_OBJ(header_);
  Str* name;
  a_index_t* index;

  static constexpr uint16_t field_mask() {
    return maskbit(offsetof(VTestPlace, name))
         | maskbit(offsetof(VTestPlace, index));
  }

  DISALLOW_COPY_AND_ASSIGN(VTestPlace)
};

class VarSubState {
 public:
  VarSubState(bool join_array, bool is_type_query)
      : GC_ASDL_CLASS(header_, 66,
                      kZeroMask, sizeof(VarSubState)),
        join_array(join_array),
        is_type_query(is_type_query) {
  }

  static VarSubState* Create() { 
    return Alloc<VarSubState>(false, false);
  }

  hnode_t* PrettyTree();

  GC_OBJ(header_);
  bool join_array;
  bool is_type_query;

  DISALLOW_COPY_AND_ASSIGN(VarSubState)
};

class cell {
 public:
  cell(bool exported, bool readonly, bool nameref, value_t* val)
      : GC_ASDL_CLASS(header_, 67,
                      field_mask(), sizeof(cell)),
        exported(exported),
        readonly(readonly),
        nameref(nameref),
        val(val) {
  }

  static cell* Create() { 
    return Alloc<cell>(false, false, false, nullptr);
  }

  hnode_t* PrettyTree();

  GC_OBJ(header_);
  bool exported;
  bool readonly;
  bool nameref;
  value_t* val;

  static constexpr uint16_t field_mask() {
    return maskbit(offsetof(cell, val));
  }

  DISALLOW_COPY_AND_ASSIGN(cell)
};

class redirect {
 public:
  redirect(Id_t op_id, int op_spid, syntax_asdl::redir_loc_t* loc,
           redirect_arg_t* arg)
      : GC_ASDL_CLASS(header_, 68,
                      field_mask(), sizeof(redirect)),
        op_id(op_id),
        op_spid(op_spid),
        loc(loc),
        arg(arg) {
  }

  static redirect* Create() { 
    return Alloc<redirect>(-1, -1, nullptr, nullptr);
  }

  hnode_t* PrettyTree();

  GC_OBJ(header_);
  Id_t op_id;
  int op_spid;
  syntax_asdl::redir_loc_t* loc;
  redirect_arg_t* arg;

  static constexpr uint16_t field_mask() {
    return maskbit(offsetof(redirect, loc))
         | maskbit(offsetof(redirect, arg));
  }

  DISALLOW_COPY_AND_ASSIGN(redirect)
};

class Proc {
 public:
  Proc(Str* name, int name_spid, syntax_asdl::proc_sig_t* sig,
       syntax_asdl::command_t* body, List<value_t*>* defaults, bool
       dynamic_scope)
      : GC_ASDL_CLASS(header_, 69,
                      field_mask(), sizeof(Proc)),
        name(name),
        name_spid(name_spid),
        sig(sig),
        body(body),
        defaults(defaults),
        dynamic_scope(dynamic_scope) {
  }

  static Proc* Create() { 
    return Alloc<Proc>(kEmptyString, -1, nullptr, nullptr,
                       Alloc<List<value_t*>>(), false);
  }

  hnode_t* PrettyTree();

  GC_OBJ(header_);
  Str* name;
  int name_spid;
  syntax_asdl::proc_sig_t* sig;
  syntax_asdl::command_t* body;
  List<value_t*>* defaults;
  bool dynamic_scope;

  static constexpr uint16_t field_mask() {
    return maskbit(offsetof(Proc, name))
         | maskbit(offsetof(Proc, sig))
         | maskbit(offsetof(Proc, body))
         | maskbit(offsetof(Proc, defaults));
  }

  DISALLOW_COPY_AND_ASSIGN(Proc)
};

class StatusArray {
 public:
  StatusArray(List<int>* codes, List<int>* spids)
      : GC_ASDL_CLASS(header_, 70,
                      field_mask(), sizeof(StatusArray)),
        codes(codes),
        spids(spids) {
  }

  static StatusArray* Create() { 
    return Alloc<StatusArray>(Alloc<List<int>>(), Alloc<List<int>>());
  }

  hnode_t* PrettyTree();

  GC_OBJ(header_);
  List<int>* codes;
  List<int>* spids;

  static constexpr uint16_t field_mask() {
    return maskbit(offsetof(StatusArray, codes))
         | maskbit(offsetof(StatusArray, spids));
  }

  DISALLOW_COPY_AND_ASSIGN(StatusArray)
};

class CommandStatus {
 public:
  CommandStatus(bool check_errexit, bool pipe_negated, List<int>* pipe_status,
                List<int>* pipe_spids, bool show_code)
      : GC_ASDL_CLASS(header_, 71,
                      field_mask(), sizeof(CommandStatus)),
        check_errexit(check_errexit),
        pipe_negated(pipe_negated),
        pipe_status(pipe_status),
        pipe_spids(pipe_spids),
        show_code(show_code) {
  }

  static CommandStatus* Create() { 
    return Alloc<CommandStatus>(false, false, Alloc<List<int>>(),
                                Alloc<List<int>>(), false);
  }

  hnode_t* PrettyTree();

  GC_OBJ(header_);
  bool check_errexit;
  bool pipe_negated;
  List<int>* pipe_status;
  List<int>* pipe_spids;
  bool show_code;

  static constexpr uint16_t field_mask() {
    return maskbit(offsetof(CommandStatus, pipe_status))
         | maskbit(offsetof(CommandStatus, pipe_spids));
  }

  DISALLOW_COPY_AND_ASSIGN(CommandStatus)
};

class hay_node {
 public:
  hay_node(Dict<Str*, hay_node*>* children)
      : GC_ASDL_CLASS(header_, 72,
                      field_mask(), sizeof(hay_node)),
        children(children) {
  }

  static hay_node* Create() { 
    return Alloc<hay_node>(nullptr);
  }

  hnode_t* PrettyTree();

  GC_OBJ(header_);
  Dict<Str*, hay_node*>* children;

  static constexpr uint16_t field_mask() {
    return maskbit(offsetof(hay_node, children));
  }

  DISALLOW_COPY_AND_ASSIGN(hay_node)
};


}  // namespace runtime_asdl

#endif  // RUNTIME_ASDL
