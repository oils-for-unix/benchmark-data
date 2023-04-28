// arg_types.h is generated by frontend/flag_gen.py

#ifndef ARG_TYPES_H
#define ARG_TYPES_H

#include "cpp/frontend_flag_spec.h"  // for FlagSpec_c
#include "mycpp/gc_mylib.h"

using runtime_asdl::value_e;
using runtime_asdl::value__Bool;
using runtime_asdl::value__Int;
using runtime_asdl::value__Float;
using runtime_asdl::value__Str;

namespace arg_types {

class cd {
 public:
  cd(Dict<Str*, runtime_asdl::value_t*>* attrs)
      : L(static_cast<value__Bool*>(attrs->index_(StrFromC("L")))->b),
        P(static_cast<value__Bool*>(attrs->index_(StrFromC("P")))->b) {
  }

  bool L;
  bool P;

  static constexpr ObjHeader obj_header() {
    return ObjHeader::Class(HeapTag::Opaque, kZeroMask, sizeof(cd));
  }
};

class command {
 public:
  command(Dict<Str*, runtime_asdl::value_t*>* attrs)
      : v(static_cast<value__Bool*>(attrs->index_(StrFromC("v")))->b) {
  }

  bool v;

  static constexpr ObjHeader obj_header() {
    return ObjHeader::Class(HeapTag::Opaque, kZeroMask, sizeof(command));
  }
};

class compadjust {
 public:
  compadjust(Dict<Str*, runtime_asdl::value_t*>* attrs)
      : n(attrs->index_(StrFromC("n"))->tag_() == value_e::Undef
          ? nullptr
          : static_cast<value__Str*>(attrs->index_(StrFromC("n")))->s),
        s(static_cast<value__Bool*>(attrs->index_(StrFromC("s")))->b) {
  }

  Str* n;
  bool s;

  static constexpr ObjHeader obj_header() {
    return ObjHeader::Class(HeapTag::FixedSize, field_mask(), sizeof(compadjust));
  }

  static constexpr uint32_t field_mask() {
    return
      maskbit(offsetof(compadjust, n));
  }

};

class compgen {
 public:
  compgen(Dict<Str*, runtime_asdl::value_t*>* attrs)
      : F(attrs->index_(StrFromC("F"))->tag_() == value_e::Undef
          ? nullptr
          : static_cast<value__Str*>(attrs->index_(StrFromC("F")))->s),
        P(attrs->index_(StrFromC("P"))->tag_() == value_e::Undef
          ? nullptr
          : static_cast<value__Str*>(attrs->index_(StrFromC("P")))->s),
        S(attrs->index_(StrFromC("S"))->tag_() == value_e::Undef
          ? nullptr
          : static_cast<value__Str*>(attrs->index_(StrFromC("S")))->s),
        W(attrs->index_(StrFromC("W"))->tag_() == value_e::Undef
          ? nullptr
          : static_cast<value__Str*>(attrs->index_(StrFromC("W")))->s),
        X(attrs->index_(StrFromC("X"))->tag_() == value_e::Undef
          ? nullptr
          : static_cast<value__Str*>(attrs->index_(StrFromC("X")))->s) {
  }

  Str* F;
  Str* P;
  Str* S;
  Str* W;
  Str* X;

  static constexpr ObjHeader obj_header() {
    return ObjHeader::Class(HeapTag::FixedSize, field_mask(), sizeof(compgen));
  }

  static constexpr uint32_t field_mask() {
    return
      maskbit(offsetof(compgen, F))
    | maskbit(offsetof(compgen, P))
    | maskbit(offsetof(compgen, S))
    | maskbit(offsetof(compgen, W))
    | maskbit(offsetof(compgen, X));
  }

};

class complete {
 public:
  complete(Dict<Str*, runtime_asdl::value_t*>* attrs)
      : D(static_cast<value__Bool*>(attrs->index_(StrFromC("D")))->b),
        E(static_cast<value__Bool*>(attrs->index_(StrFromC("E")))->b),
        F(attrs->index_(StrFromC("F"))->tag_() == value_e::Undef
          ? nullptr
          : static_cast<value__Str*>(attrs->index_(StrFromC("F")))->s),
        P(attrs->index_(StrFromC("P"))->tag_() == value_e::Undef
          ? nullptr
          : static_cast<value__Str*>(attrs->index_(StrFromC("P")))->s),
        S(attrs->index_(StrFromC("S"))->tag_() == value_e::Undef
          ? nullptr
          : static_cast<value__Str*>(attrs->index_(StrFromC("S")))->s),
        W(attrs->index_(StrFromC("W"))->tag_() == value_e::Undef
          ? nullptr
          : static_cast<value__Str*>(attrs->index_(StrFromC("W")))->s),
        X(attrs->index_(StrFromC("X"))->tag_() == value_e::Undef
          ? nullptr
          : static_cast<value__Str*>(attrs->index_(StrFromC("X")))->s) {
  }

  bool D;
  bool E;
  Str* F;
  Str* P;
  Str* S;
  Str* W;
  Str* X;

  static constexpr ObjHeader obj_header() {
    return ObjHeader::Class(HeapTag::FixedSize, field_mask(), sizeof(complete));
  }

  static constexpr uint32_t field_mask() {
    return
      maskbit(offsetof(complete, F))
    | maskbit(offsetof(complete, P))
    | maskbit(offsetof(complete, S))
    | maskbit(offsetof(complete, W))
    | maskbit(offsetof(complete, X));
  }

};

class dirs {
 public:
  dirs(Dict<Str*, runtime_asdl::value_t*>* attrs)
      : c(static_cast<value__Bool*>(attrs->index_(StrFromC("c")))->b),
        l(static_cast<value__Bool*>(attrs->index_(StrFromC("l")))->b),
        p(static_cast<value__Bool*>(attrs->index_(StrFromC("p")))->b),
        v(static_cast<value__Bool*>(attrs->index_(StrFromC("v")))->b) {
  }

  bool c;
  bool l;
  bool p;
  bool v;

  static constexpr ObjHeader obj_header() {
    return ObjHeader::Class(HeapTag::Opaque, kZeroMask, sizeof(dirs));
  }
};

class echo {
 public:
  echo(Dict<Str*, runtime_asdl::value_t*>* attrs)
      : e(static_cast<value__Bool*>(attrs->index_(StrFromC("e")))->b),
        n(static_cast<value__Bool*>(attrs->index_(StrFromC("n")))->b) {
  }

  bool e;
  bool n;

  static constexpr ObjHeader obj_header() {
    return ObjHeader::Class(HeapTag::Opaque, kZeroMask, sizeof(echo));
  }
};

class export_ {
 public:
  export_(Dict<Str*, runtime_asdl::value_t*>* attrs)
      : f(static_cast<value__Bool*>(attrs->index_(StrFromC("f")))->b),
        n(static_cast<value__Bool*>(attrs->index_(StrFromC("n")))->b),
        p(static_cast<value__Bool*>(attrs->index_(StrFromC("p")))->b) {
  }

  bool f;
  bool n;
  bool p;

  static constexpr ObjHeader obj_header() {
    return ObjHeader::Class(HeapTag::Opaque, kZeroMask, sizeof(export_));
  }
};

class hash {
 public:
  hash(Dict<Str*, runtime_asdl::value_t*>* attrs)
      : r(static_cast<value__Bool*>(attrs->index_(StrFromC("r")))->b) {
  }

  bool r;

  static constexpr ObjHeader obj_header() {
    return ObjHeader::Class(HeapTag::Opaque, kZeroMask, sizeof(hash));
  }
};

class history {
 public:
  history(Dict<Str*, runtime_asdl::value_t*>* attrs)
      : c(static_cast<value__Bool*>(attrs->index_(StrFromC("c")))->b),
        d(attrs->index_(StrFromC("d"))->tag_() == value_e::Undef
          ? -1
          : static_cast<value__Int*>(attrs->index_(StrFromC("d")))->i) {
  }

  bool c;
  int d;

  static constexpr ObjHeader obj_header() {
    return ObjHeader::Class(HeapTag::Opaque, kZeroMask, sizeof(history));
  }
};

class jobs {
 public:
  jobs(Dict<Str*, runtime_asdl::value_t*>* attrs)
      : debug(static_cast<value__Bool*>(attrs->index_(StrFromC("debug")))->b),
        l(static_cast<value__Bool*>(attrs->index_(StrFromC("l")))->b),
        p(static_cast<value__Bool*>(attrs->index_(StrFromC("p")))->b) {
  }

  bool debug;
  bool l;
  bool p;

  static constexpr ObjHeader obj_header() {
    return ObjHeader::Class(HeapTag::Opaque, kZeroMask, sizeof(jobs));
  }
};

class json_read {
 public:
  json_read(Dict<Str*, runtime_asdl::value_t*>* attrs)
      : validate(static_cast<value__Bool*>(attrs->index_(StrFromC("validate")))->b) {
  }

  bool validate;

  static constexpr ObjHeader obj_header() {
    return ObjHeader::Class(HeapTag::Opaque, kZeroMask, sizeof(json_read));
  }
};

class json_write {
 public:
  json_write(Dict<Str*, runtime_asdl::value_t*>* attrs)
      : indent(attrs->index_(StrFromC("indent"))->tag_() == value_e::Undef
          ? -1
          : static_cast<value__Int*>(attrs->index_(StrFromC("indent")))->i),
        pretty(static_cast<value__Bool*>(attrs->index_(StrFromC("pretty")))->b) {
  }

  int indent;
  bool pretty;

  static constexpr ObjHeader obj_header() {
    return ObjHeader::Class(HeapTag::Opaque, kZeroMask, sizeof(json_write));
  }
};

class main {
 public:
  main(Dict<Str*, runtime_asdl::value_t*>* attrs)
      : ast_format(attrs->index_(StrFromC("ast_format"))->tag_() == value_e::Undef
          ? nullptr
          : static_cast<value__Str*>(attrs->index_(StrFromC("ast_format")))->s),
        c(attrs->index_(StrFromC("c"))->tag_() == value_e::Undef
          ? nullptr
          : static_cast<value__Str*>(attrs->index_(StrFromC("c")))->s),
        completion_display(attrs->index_(StrFromC("completion_display"))->tag_() == value_e::Undef
          ? nullptr
          : static_cast<value__Str*>(attrs->index_(StrFromC("completion_display")))->s),
        debug_file(attrs->index_(StrFromC("debug_file"))->tag_() == value_e::Undef
          ? nullptr
          : static_cast<value__Str*>(attrs->index_(StrFromC("debug_file")))->s),
        headless(static_cast<value__Bool*>(attrs->index_(StrFromC("headless")))->b),
        help(static_cast<value__Bool*>(attrs->index_(StrFromC("help")))->b),
        i(static_cast<value__Bool*>(attrs->index_(StrFromC("i")))->b),
        l(static_cast<value__Bool*>(attrs->index_(StrFromC("l")))->b),
        location_start_line(attrs->index_(StrFromC("location_start_line"))->tag_() == value_e::Undef
          ? -1
          : static_cast<value__Int*>(attrs->index_(StrFromC("location_start_line")))->i),
        location_str(attrs->index_(StrFromC("location_str"))->tag_() == value_e::Undef
          ? nullptr
          : static_cast<value__Str*>(attrs->index_(StrFromC("location_str")))->s),
        login(static_cast<value__Bool*>(attrs->index_(StrFromC("login")))->b),
        norc(static_cast<value__Bool*>(attrs->index_(StrFromC("norc")))->b),
        one_pass_parse(static_cast<value__Bool*>(attrs->index_(StrFromC("one_pass_parse")))->b),
        print_status(static_cast<value__Bool*>(attrs->index_(StrFromC("print_status")))->b),
        rcdir(attrs->index_(StrFromC("rcdir"))->tag_() == value_e::Undef
          ? nullptr
          : static_cast<value__Str*>(attrs->index_(StrFromC("rcdir")))->s),
        rcfile(attrs->index_(StrFromC("rcfile"))->tag_() == value_e::Undef
          ? nullptr
          : static_cast<value__Str*>(attrs->index_(StrFromC("rcfile")))->s),
        version(static_cast<value__Bool*>(attrs->index_(StrFromC("version")))->b),
        xtrace_to_debug_file(static_cast<value__Bool*>(attrs->index_(StrFromC("xtrace_to_debug_file")))->b) {
  }

  Str* ast_format;
  Str* c;
  Str* completion_display;
  Str* debug_file;
  bool headless;
  bool help;
  bool i;
  bool l;
  int location_start_line;
  Str* location_str;
  bool login;
  bool norc;
  bool one_pass_parse;
  bool print_status;
  Str* rcdir;
  Str* rcfile;
  bool version;
  bool xtrace_to_debug_file;

  static constexpr ObjHeader obj_header() {
    return ObjHeader::Class(HeapTag::FixedSize, field_mask(), sizeof(main));
  }

  static constexpr uint32_t field_mask() {
    return
      maskbit(offsetof(main, ast_format))
    | maskbit(offsetof(main, c))
    | maskbit(offsetof(main, completion_display))
    | maskbit(offsetof(main, debug_file))
    | maskbit(offsetof(main, location_str))
    | maskbit(offsetof(main, rcdir))
    | maskbit(offsetof(main, rcfile));
  }

};

class mapfile {
 public:
  mapfile(Dict<Str*, runtime_asdl::value_t*>* attrs)
      : t(static_cast<value__Bool*>(attrs->index_(StrFromC("t")))->b) {
  }

  bool t;

  static constexpr ObjHeader obj_header() {
    return ObjHeader::Class(HeapTag::Opaque, kZeroMask, sizeof(mapfile));
  }
};

class new_var {
 public:
  new_var(Dict<Str*, runtime_asdl::value_t*>* attrs)
      : A(static_cast<value__Bool*>(attrs->index_(StrFromC("A")))->b),
        F(static_cast<value__Bool*>(attrs->index_(StrFromC("F")))->b),
        a(static_cast<value__Bool*>(attrs->index_(StrFromC("a")))->b),
        f(static_cast<value__Bool*>(attrs->index_(StrFromC("f")))->b),
        g(static_cast<value__Bool*>(attrs->index_(StrFromC("g")))->b),
        i(static_cast<value__Bool*>(attrs->index_(StrFromC("i")))->b),
        n(attrs->index_(StrFromC("n"))->tag_() == value_e::Undef
          ? nullptr
          : static_cast<value__Str*>(attrs->index_(StrFromC("n")))->s),
        p(static_cast<value__Bool*>(attrs->index_(StrFromC("p")))->b),
        r(attrs->index_(StrFromC("r"))->tag_() == value_e::Undef
          ? nullptr
          : static_cast<value__Str*>(attrs->index_(StrFromC("r")))->s),
        x(attrs->index_(StrFromC("x"))->tag_() == value_e::Undef
          ? nullptr
          : static_cast<value__Str*>(attrs->index_(StrFromC("x")))->s) {
  }

  bool A;
  bool F;
  bool a;
  bool f;
  bool g;
  bool i;
  Str* n;
  bool p;
  Str* r;
  Str* x;

  static constexpr ObjHeader obj_header() {
    return ObjHeader::Class(HeapTag::FixedSize, field_mask(), sizeof(new_var));
  }

  static constexpr uint32_t field_mask() {
    return
      maskbit(offsetof(new_var, n))
    | maskbit(offsetof(new_var, r))
    | maskbit(offsetof(new_var, x));
  }

};

class printf {
 public:
  printf(Dict<Str*, runtime_asdl::value_t*>* attrs)
      : v(attrs->index_(StrFromC("v"))->tag_() == value_e::Undef
          ? nullptr
          : static_cast<value__Str*>(attrs->index_(StrFromC("v")))->s) {
  }

  Str* v;

  static constexpr ObjHeader obj_header() {
    return ObjHeader::Class(HeapTag::FixedSize, field_mask(), sizeof(printf));
  }

  static constexpr uint32_t field_mask() {
    return
      maskbit(offsetof(printf, v));
  }

};

class pwd {
 public:
  pwd(Dict<Str*, runtime_asdl::value_t*>* attrs)
      : L(static_cast<value__Bool*>(attrs->index_(StrFromC("L")))->b),
        P(static_cast<value__Bool*>(attrs->index_(StrFromC("P")))->b) {
  }

  bool L;
  bool P;

  static constexpr ObjHeader obj_header() {
    return ObjHeader::Class(HeapTag::Opaque, kZeroMask, sizeof(pwd));
  }
};

class read {
 public:
  read(Dict<Str*, runtime_asdl::value_t*>* attrs)
      : Z(static_cast<value__Bool*>(attrs->index_(StrFromC("Z")))->b),
        a(attrs->index_(StrFromC("a"))->tag_() == value_e::Undef
          ? nullptr
          : static_cast<value__Str*>(attrs->index_(StrFromC("a")))->s),
        all(static_cast<value__Bool*>(attrs->index_(StrFromC("all")))->b),
        d(attrs->index_(StrFromC("d"))->tag_() == value_e::Undef
          ? nullptr
          : static_cast<value__Str*>(attrs->index_(StrFromC("d")))->s),
        line(static_cast<value__Bool*>(attrs->index_(StrFromC("line")))->b),
        n(attrs->index_(StrFromC("n"))->tag_() == value_e::Undef
          ? -1
          : static_cast<value__Int*>(attrs->index_(StrFromC("n")))->i),
        p(attrs->index_(StrFromC("p"))->tag_() == value_e::Undef
          ? nullptr
          : static_cast<value__Str*>(attrs->index_(StrFromC("p")))->s),
        q(static_cast<value__Bool*>(attrs->index_(StrFromC("q")))->b),
        r(static_cast<value__Bool*>(attrs->index_(StrFromC("r")))->b),
        s(static_cast<value__Bool*>(attrs->index_(StrFromC("s")))->b),
        t(attrs->index_(StrFromC("t"))->tag_() == value_e::Undef
          ? -1
          : static_cast<value__Float*>(attrs->index_(StrFromC("t")))->f),
        u(attrs->index_(StrFromC("u"))->tag_() == value_e::Undef
          ? -1
          : static_cast<value__Int*>(attrs->index_(StrFromC("u")))->i),
        with_eol(static_cast<value__Bool*>(attrs->index_(StrFromC("with_eol")))->b) {
  }

  bool Z;
  Str* a;
  bool all;
  Str* d;
  bool line;
  int n;
  Str* p;
  bool q;
  bool r;
  bool s;
  float t;
  int u;
  bool with_eol;

  static constexpr ObjHeader obj_header() {
    return ObjHeader::Class(HeapTag::FixedSize, field_mask(), sizeof(read));
  }

  static constexpr uint32_t field_mask() {
    return
      maskbit(offsetof(read, a))
    | maskbit(offsetof(read, d))
    | maskbit(offsetof(read, p));
  }

};

class readonly {
 public:
  readonly(Dict<Str*, runtime_asdl::value_t*>* attrs)
      : A(static_cast<value__Bool*>(attrs->index_(StrFromC("A")))->b),
        a(static_cast<value__Bool*>(attrs->index_(StrFromC("a")))->b),
        p(static_cast<value__Bool*>(attrs->index_(StrFromC("p")))->b) {
  }

  bool A;
  bool a;
  bool p;

  static constexpr ObjHeader obj_header() {
    return ObjHeader::Class(HeapTag::Opaque, kZeroMask, sizeof(readonly));
  }
};

class runproc {
 public:
  runproc(Dict<Str*, runtime_asdl::value_t*>* attrs)
      : h(static_cast<value__Bool*>(attrs->index_(StrFromC("h")))->b) {
  }

  bool h;

  static constexpr ObjHeader obj_header() {
    return ObjHeader::Class(HeapTag::Opaque, kZeroMask, sizeof(runproc));
  }
};

class shopt {
 public:
  shopt(Dict<Str*, runtime_asdl::value_t*>* attrs)
      : o(static_cast<value__Bool*>(attrs->index_(StrFromC("o")))->b),
        p(static_cast<value__Bool*>(attrs->index_(StrFromC("p")))->b),
        q(static_cast<value__Bool*>(attrs->index_(StrFromC("q")))->b),
        s(static_cast<value__Bool*>(attrs->index_(StrFromC("s")))->b),
        u(static_cast<value__Bool*>(attrs->index_(StrFromC("u")))->b) {
  }

  bool o;
  bool p;
  bool q;
  bool s;
  bool u;

  static constexpr ObjHeader obj_header() {
    return ObjHeader::Class(HeapTag::Opaque, kZeroMask, sizeof(shopt));
  }
};

class tea_main {
 public:
  tea_main(Dict<Str*, runtime_asdl::value_t*>* attrs)
      : c(attrs->index_(StrFromC("c"))->tag_() == value_e::Undef
          ? nullptr
          : static_cast<value__Str*>(attrs->index_(StrFromC("c")))->s),
        n(static_cast<value__Bool*>(attrs->index_(StrFromC("n")))->b),
        translate(static_cast<value__Bool*>(attrs->index_(StrFromC("translate")))->b) {
  }

  Str* c;
  bool n;
  bool translate;

  static constexpr ObjHeader obj_header() {
    return ObjHeader::Class(HeapTag::FixedSize, field_mask(), sizeof(tea_main));
  }

  static constexpr uint32_t field_mask() {
    return
      maskbit(offsetof(tea_main, c));
  }

};

class trap {
 public:
  trap(Dict<Str*, runtime_asdl::value_t*>* attrs)
      : l(static_cast<value__Bool*>(attrs->index_(StrFromC("l")))->b),
        p(static_cast<value__Bool*>(attrs->index_(StrFromC("p")))->b) {
  }

  bool l;
  bool p;

  static constexpr ObjHeader obj_header() {
    return ObjHeader::Class(HeapTag::Opaque, kZeroMask, sizeof(trap));
  }
};

class try_ {
 public:
  try_(Dict<Str*, runtime_asdl::value_t*>* attrs)
      : assign(attrs->index_(StrFromC("assign"))->tag_() == value_e::Undef
          ? nullptr
          : static_cast<value__Str*>(attrs->index_(StrFromC("assign")))->s) {
  }

  Str* assign;

  static constexpr ObjHeader obj_header() {
    return ObjHeader::Class(HeapTag::FixedSize, field_mask(), sizeof(try_));
  }

  static constexpr uint32_t field_mask() {
    return
      maskbit(offsetof(try_, assign));
  }

};

class type {
 public:
  type(Dict<Str*, runtime_asdl::value_t*>* attrs)
      : P(static_cast<value__Bool*>(attrs->index_(StrFromC("P")))->b),
        f(static_cast<value__Bool*>(attrs->index_(StrFromC("f")))->b),
        p(static_cast<value__Bool*>(attrs->index_(StrFromC("p")))->b),
        t(static_cast<value__Bool*>(attrs->index_(StrFromC("t")))->b) {
  }

  bool P;
  bool f;
  bool p;
  bool t;

  static constexpr ObjHeader obj_header() {
    return ObjHeader::Class(HeapTag::Opaque, kZeroMask, sizeof(type));
  }
};

class unset {
 public:
  unset(Dict<Str*, runtime_asdl::value_t*>* attrs)
      : f(static_cast<value__Bool*>(attrs->index_(StrFromC("f")))->b),
        v(static_cast<value__Bool*>(attrs->index_(StrFromC("v")))->b) {
  }

  bool f;
  bool v;

  static constexpr ObjHeader obj_header() {
    return ObjHeader::Class(HeapTag::Opaque, kZeroMask, sizeof(unset));
  }
};

class wait {
 public:
  wait(Dict<Str*, runtime_asdl::value_t*>* attrs)
      : n(static_cast<value__Bool*>(attrs->index_(StrFromC("n")))->b) {
  }

  bool n;

  static constexpr ObjHeader obj_header() {
    return ObjHeader::Class(HeapTag::Opaque, kZeroMask, sizeof(wait));
  }
};

class write {
 public:
  write(Dict<Str*, runtime_asdl::value_t*>* attrs)
      : end(attrs->index_(StrFromC("end"))->tag_() == value_e::Undef
          ? nullptr
          : static_cast<value__Str*>(attrs->index_(StrFromC("end")))->s),
        n(static_cast<value__Bool*>(attrs->index_(StrFromC("n")))->b),
        qsn(static_cast<value__Bool*>(attrs->index_(StrFromC("qsn")))->b),
        sep(attrs->index_(StrFromC("sep"))->tag_() == value_e::Undef
          ? nullptr
          : static_cast<value__Str*>(attrs->index_(StrFromC("sep")))->s),
        unicode(attrs->index_(StrFromC("unicode"))->tag_() == value_e::Undef
          ? nullptr
          : static_cast<value__Str*>(attrs->index_(StrFromC("unicode")))->s) {
  }

  Str* end;
  bool n;
  bool qsn;
  Str* sep;
  Str* unicode;

  static constexpr ObjHeader obj_header() {
    return ObjHeader::Class(HeapTag::FixedSize, field_mask(), sizeof(write));
  }

  static constexpr uint32_t field_mask() {
    return
      maskbit(offsetof(write, end))
    | maskbit(offsetof(write, sep))
    | maskbit(offsetof(write, unicode));
  }

};

extern FlagSpec_c kFlagSpecs[];
extern FlagSpecAndMore_c kFlagSpecsAndMore[];

}  // namespace arg_types

#endif  // ARG_TYPES_H

