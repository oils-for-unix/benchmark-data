// arg_types.h is generated by frontend/flag_gen.py

#ifndef ARG_TYPES_H
#define ARG_TYPES_H

#include "frontend_flag_spec.h"  // for FlagSpec_c
#include "mylib.h"

namespace value_e = runtime_asdl::value_e;
using runtime_asdl::value__Bool;
using runtime_asdl::value__Int;
using runtime_asdl::value__Float;
using runtime_asdl::value__Str;

namespace arg_types {

class cd {
 public:
  cd(Dict<Str*, runtime_asdl::value_t*>* attrs) :
    L(static_cast<value__Bool*>(attrs->index(new Str("L")))->b),
    P(static_cast<value__Bool*>(attrs->index(new Str("P")))->b) {
  }
  bool L;
  bool P;
};

class command {
 public:
  command(Dict<Str*, runtime_asdl::value_t*>* attrs) :
    v(static_cast<value__Bool*>(attrs->index(new Str("v")))->b) {
  }
  bool v;
};

class dirs {
 public:
  dirs(Dict<Str*, runtime_asdl::value_t*>* attrs) :
    c(static_cast<value__Bool*>(attrs->index(new Str("c")))->b),
    l(static_cast<value__Bool*>(attrs->index(new Str("l")))->b),
    p(static_cast<value__Bool*>(attrs->index(new Str("p")))->b),
    v(static_cast<value__Bool*>(attrs->index(new Str("v")))->b) {
  }
  bool c;
  bool l;
  bool p;
  bool v;
};

class echo {
 public:
  echo(Dict<Str*, runtime_asdl::value_t*>* attrs) :
    e(static_cast<value__Bool*>(attrs->index(new Str("e")))->b),
    n(static_cast<value__Bool*>(attrs->index(new Str("n")))->b) {
  }
  bool e;
  bool n;
};

class export_ {
 public:
  export_(Dict<Str*, runtime_asdl::value_t*>* attrs) :
    f(static_cast<value__Bool*>(attrs->index(new Str("f")))->b),
    n(static_cast<value__Bool*>(attrs->index(new Str("n")))->b),
    p(static_cast<value__Bool*>(attrs->index(new Str("p")))->b) {
  }
  bool f;
  bool n;
  bool p;
};

class hash {
 public:
  hash(Dict<Str*, runtime_asdl::value_t*>* attrs) :
    r(static_cast<value__Bool*>(attrs->index(new Str("r")))->b) {
  }
  bool r;
};

class history {
 public:
  history(Dict<Str*, runtime_asdl::value_t*>* attrs) :
    c(static_cast<value__Bool*>(attrs->index(new Str("c")))->b),
    d(attrs->index(new Str("d"))->tag_() == value_e::Undef
      ? -1
      : static_cast<value__Int*>(attrs->index(new Str("d")))->i) {
  }
  bool c;
  int d;
};

class main {
 public:
  main(Dict<Str*, runtime_asdl::value_t*>* attrs) :
    ast_format(attrs->index(new Str("ast_format"))->tag_() == value_e::Undef
      ? new Str("abbrev-text")
      : static_cast<value__Str*>(attrs->index(new Str("ast_format")))->s),
    c(attrs->index(new Str("c"))->tag_() == value_e::Undef
      ? nullptr
      : static_cast<value__Str*>(attrs->index(new Str("c")))->s),
    completion_display(attrs->index(new Str("completion_display"))->tag_() == value_e::Undef
      ? new Str("nice")
      : static_cast<value__Str*>(attrs->index(new Str("completion_display")))->s),
    debug_file(attrs->index(new Str("debug_file"))->tag_() == value_e::Undef
      ? nullptr
      : static_cast<value__Str*>(attrs->index(new Str("debug_file")))->s),
    help(static_cast<value__Bool*>(attrs->index(new Str("help")))->b),
    i(static_cast<value__Bool*>(attrs->index(new Str("i")))->b),
    one_pass_parse(static_cast<value__Bool*>(attrs->index(new Str("one_pass_parse")))->b),
    parser_mem_dump(attrs->index(new Str("parser_mem_dump"))->tag_() == value_e::Undef
      ? nullptr
      : static_cast<value__Str*>(attrs->index(new Str("parser_mem_dump")))->s),
    print_status(static_cast<value__Bool*>(attrs->index(new Str("print_status")))->b),
    rcfile(attrs->index(new Str("rcfile"))->tag_() == value_e::Undef
      ? nullptr
      : static_cast<value__Str*>(attrs->index(new Str("rcfile")))->s),
    runtime_mem_dump(attrs->index(new Str("runtime_mem_dump"))->tag_() == value_e::Undef
      ? nullptr
      : static_cast<value__Str*>(attrs->index(new Str("runtime_mem_dump")))->s),
    version(static_cast<value__Bool*>(attrs->index(new Str("version")))->b),
    xtrace_to_debug_file(static_cast<value__Bool*>(attrs->index(new Str("xtrace_to_debug_file")))->b) {
  }
  Str* ast_format;
  Str* c;
  Str* completion_display;
  Str* debug_file;
  bool help;
  bool i;
  bool one_pass_parse;
  Str* parser_mem_dump;
  bool print_status;
  Str* rcfile;
  Str* runtime_mem_dump;
  bool version;
  bool xtrace_to_debug_file;
};

class new_var {
 public:
  new_var(Dict<Str*, runtime_asdl::value_t*>* attrs) :
    A(static_cast<value__Bool*>(attrs->index(new Str("A")))->b),
    F(static_cast<value__Bool*>(attrs->index(new Str("F")))->b),
    a(static_cast<value__Bool*>(attrs->index(new Str("a")))->b),
    f(static_cast<value__Bool*>(attrs->index(new Str("f")))->b),
    g(static_cast<value__Bool*>(attrs->index(new Str("g")))->b),
    n(attrs->index(new Str("n"))->tag_() == value_e::Undef
      ? nullptr
      : static_cast<value__Str*>(attrs->index(new Str("n")))->s),
    p(static_cast<value__Bool*>(attrs->index(new Str("p")))->b),
    r(attrs->index(new Str("r"))->tag_() == value_e::Undef
      ? nullptr
      : static_cast<value__Str*>(attrs->index(new Str("r")))->s),
    x(attrs->index(new Str("x"))->tag_() == value_e::Undef
      ? nullptr
      : static_cast<value__Str*>(attrs->index(new Str("x")))->s) {
  }
  bool A;
  bool F;
  bool a;
  bool f;
  bool g;
  Str* n;
  bool p;
  Str* r;
  Str* x;
};

class printf {
 public:
  printf(Dict<Str*, runtime_asdl::value_t*>* attrs) :
    v(attrs->index(new Str("v"))->tag_() == value_e::Undef
      ? nullptr
      : static_cast<value__Str*>(attrs->index(new Str("v")))->s) {
  }
  Str* v;
};

class pwd {
 public:
  pwd(Dict<Str*, runtime_asdl::value_t*>* attrs) :
    L(static_cast<value__Bool*>(attrs->index(new Str("L")))->b),
    P(static_cast<value__Bool*>(attrs->index(new Str("P")))->b) {
  }
  bool L;
  bool P;
};

class read {
 public:
  read(Dict<Str*, runtime_asdl::value_t*>* attrs) :
    a(attrs->index(new Str("a"))->tag_() == value_e::Undef
      ? nullptr
      : static_cast<value__Str*>(attrs->index(new Str("a")))->s),
    d(attrs->index(new Str("d"))->tag_() == value_e::Undef
      ? nullptr
      : static_cast<value__Str*>(attrs->index(new Str("d")))->s),
    n(attrs->index(new Str("n"))->tag_() == value_e::Undef
      ? -1
      : static_cast<value__Int*>(attrs->index(new Str("n")))->i),
    r(static_cast<value__Bool*>(attrs->index(new Str("r")))->b),
    s(static_cast<value__Bool*>(attrs->index(new Str("s")))->b),
    t(attrs->index(new Str("t"))->tag_() == value_e::Undef
      ? -1
      : static_cast<value__Float*>(attrs->index(new Str("t")))->f),
    u(attrs->index(new Str("u"))->tag_() == value_e::Undef
      ? -1
      : static_cast<value__Int*>(attrs->index(new Str("u")))->i) {
  }
  Str* a;
  Str* d;
  int n;
  bool r;
  bool s;
  float t;
  int u;
};

class readonly {
 public:
  readonly(Dict<Str*, runtime_asdl::value_t*>* attrs) :
    A(static_cast<value__Bool*>(attrs->index(new Str("A")))->b),
    a(static_cast<value__Bool*>(attrs->index(new Str("a")))->b),
    p(static_cast<value__Bool*>(attrs->index(new Str("p")))->b) {
  }
  bool A;
  bool a;
  bool p;
};

class shopt {
 public:
  shopt(Dict<Str*, runtime_asdl::value_t*>* attrs) :
    o(static_cast<value__Bool*>(attrs->index(new Str("o")))->b),
    p(static_cast<value__Bool*>(attrs->index(new Str("p")))->b),
    q(static_cast<value__Bool*>(attrs->index(new Str("q")))->b),
    s(static_cast<value__Bool*>(attrs->index(new Str("s")))->b),
    u(static_cast<value__Bool*>(attrs->index(new Str("u")))->b) {
  }
  bool o;
  bool p;
  bool q;
  bool s;
  bool u;
};

class trap {
 public:
  trap(Dict<Str*, runtime_asdl::value_t*>* attrs) :
    l(static_cast<value__Bool*>(attrs->index(new Str("l")))->b),
    p(static_cast<value__Bool*>(attrs->index(new Str("p")))->b) {
  }
  bool l;
  bool p;
};

class type {
 public:
  type(Dict<Str*, runtime_asdl::value_t*>* attrs) :
    P(static_cast<value__Bool*>(attrs->index(new Str("P")))->b),
    f(static_cast<value__Bool*>(attrs->index(new Str("f")))->b),
    p(static_cast<value__Bool*>(attrs->index(new Str("p")))->b),
    t(static_cast<value__Bool*>(attrs->index(new Str("t")))->b) {
  }
  bool P;
  bool f;
  bool p;
  bool t;
};

class unset {
 public:
  unset(Dict<Str*, runtime_asdl::value_t*>* attrs) :
    f(static_cast<value__Bool*>(attrs->index(new Str("f")))->b),
    v(static_cast<value__Bool*>(attrs->index(new Str("v")))->b) {
  }
  bool f;
  bool v;
};

class wait {
 public:
  wait(Dict<Str*, runtime_asdl::value_t*>* attrs) :
    n(static_cast<value__Bool*>(attrs->index(new Str("n")))->b) {
  }
  bool n;
};

extern FlagSpec_c kFlagSpecs[];
extern FlagSpecAndMore_c kFlagSpecsAndMore[];

}  // namespace arg_types

#endif  // ARG_TYPES_H

