
#include <assert.h>

#include "asdl_runtime.h"  // generated code uses wrappers here

// Generated code uses these types
using hnode_asdl::hnode__Record;
using hnode_asdl::hnode__Array;
using hnode_asdl::hnode__External;
using hnode_asdl::hnode__Leaf;
using hnode_asdl::field;
using hnode_asdl::color_e;

#include "hnode_asdl.h"

namespace hnode_asdl {

const char* color_str(color_e tag) {
  switch (tag) {
  case color_e::TypeName:
    return "color.TypeName";
  case color_e::StringConst:
    return "color.StringConst";
  case color_e::OtherConst:
    return "color.OtherConst";
  case color_e::UserType:
    return "color.UserType";
  case color_e::External:
    return "color.External";
  default:
    assert(0);
  }
}
const char* hnode_str(int tag) {
  switch (tag) {
  case hnode_e::Record:
    return "hnode.Record";
  case hnode_e::Array:
    return "hnode.Array";
  case hnode_e::Leaf:
    return "hnode.Leaf";
  case hnode_e::External:
    return "hnode.External";
  default:
    assert(0);
  }
}

}  // namespace hnode_asdl
