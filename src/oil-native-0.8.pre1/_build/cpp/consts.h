#ifndef LOOKUP_H
#define LOOKUP_H

#include "id_kind_asdl.h"
#include "option_asdl.h"
#include "types_asdl.h"

namespace consts {

extern List<int>* STRICT_ALL;
extern List<int>* OIL_BASIC;
extern List<int>* OIL_ALL;
extern List<Str*>* SET_OPTION_NAMES;
extern List<Str*>* SHOPT_OPTION_NAMES;
extern List<Str*>* VISIBLE_SHOPT_NAMES;
extern List<Str*>* PARSE_OPTION_NAMES;

extern int NO_INDEX;

int RedirDefaultFd(id_kind_asdl::Id_t id);
types_asdl::redir_arg_type_t RedirArgType(id_kind_asdl::Id_t id);
types_asdl::bool_arg_type_t BoolArgType(id_kind_asdl::Id_t id);
id_kind_asdl::Kind GetKind(id_kind_asdl::Id_t id);
option_asdl::builtin_t LookupNormalBuiltin(Str* s);
option_asdl::builtin_t LookupAssignBuiltin(Str* s);
option_asdl::builtin_t LookupSpecialBuiltin(Str* s);

}  // namespace consts

#endif  // LOOKUP_H

