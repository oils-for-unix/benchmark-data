#ifndef HNODE_ASDL
#define HNODE_ASDL

#include <cstdint>

#include "mylib.h"  // for Str, List, etc.
namespace hnode_asdl {

class field;
class hnode_t;

enum class color_e {
  TypeName = 1,
  StringConst = 2,
  OtherConst = 3,
  UserType = 4,
  External = 5,
};
typedef color_e color_t;

const char* color_str(color_e tag);

namespace hnode_e {
  const int Record = 1;
  const int Array = 2;
  const int Leaf = 3;
  const int External = 4;
};

const char* hnode_str(int tag);

class hnode_t {
 protected:
  hnode_t() {}
 public:
  int tag_() const {
    return reinterpret_cast<const Obj*>(this)->tag;
  }
  DISALLOW_COPY_AND_ASSIGN(hnode_t)
};

class hnode__Record : public hnode_t {
 public:
  hnode__Record() : tag(static_cast<uint16_t>(hnode_e::Record)), node_type(new
                Str("")), fields(new List<field*>()), abbrev(false), left(new
                Str("")), right(new Str("")), unnamed_fields(new
                List<hnode_t*>()) {
  }
  hnode__Record(Str* node_type, List<field*>* fields, bool abbrev, Str* left,
                Str* right, List<hnode_t*>* unnamed_fields) :
                tag(static_cast<uint16_t>(hnode_e::Record)),
                node_type(node_type), fields(fields), abbrev(abbrev),
                left(left), right(right), unnamed_fields(unnamed_fields) {
  }
  uint16_t tag;
  Str* node_type;
  List<field*>* fields;
  bool abbrev;
  Str* left;
  Str* right;
  List<hnode_t*>* unnamed_fields;

  DISALLOW_COPY_AND_ASSIGN(hnode__Record)
};

class hnode__Array : public hnode_t {
 public:
  hnode__Array() : tag(static_cast<uint16_t>(hnode_e::Array)), children(new
               List<hnode_t*>()) {
  }
  hnode__Array(List<hnode_t*>* children) :
               tag(static_cast<uint16_t>(hnode_e::Array)), children(children) {
  }
  uint16_t tag;
  List<hnode_t*>* children;

  DISALLOW_COPY_AND_ASSIGN(hnode__Array)
};

class hnode__Leaf : public hnode_t {
 public:
  hnode__Leaf() : tag(static_cast<uint16_t>(hnode_e::Leaf)), s(new Str("")),
              color(color_e::TypeName) {
  }
  hnode__Leaf(Str* s, color_t color) :
              tag(static_cast<uint16_t>(hnode_e::Leaf)), s(s), color(color) {
  }
  uint16_t tag;
  Str* s;
  color_t color;

  DISALLOW_COPY_AND_ASSIGN(hnode__Leaf)
};

class hnode__External : public hnode_t {
 public:
  hnode__External() : tag(static_cast<uint16_t>(hnode_e::External)),
                  obj(nullptr) {
  }
  hnode__External(void* obj) : tag(static_cast<uint16_t>(hnode_e::External)),
                  obj(obj) {
  }
  uint16_t tag;
  void* obj;

  DISALLOW_COPY_AND_ASSIGN(hnode__External)
};

namespace hnode {
  typedef hnode__Record Record;
  typedef hnode__Array Array;
  typedef hnode__Leaf Leaf;
  typedef hnode__External External;
}

class field : public Obj {
 public:
  field() : tag(1000), name(new Str("")), val(nullptr) {
  }
  field(Str* name, hnode_t* val) : tag(1000), name(name), val(val) {
  }
  uint16_t tag;
  Str* name;
  hnode_t* val;

  DISALLOW_COPY_AND_ASSIGN(field)
};


}  // namespace hnode_asdl

#endif  // HNODE_ASDL
