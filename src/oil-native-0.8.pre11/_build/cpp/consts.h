#ifndef CONSTS_H
#define CONSTS_H

#include "mylib.h"
#include "id_kind_asdl.h"
#include "option_asdl.h"
#include "runtime_asdl.h"
#include "types_asdl.h"

namespace consts {

extern List<int>* STRICT_ALL;
extern List<int>* OIL_BASIC;
extern List<int>* OIL_ALL;
extern List<int>* DEFAULT_TRUE;
extern List<int>* PARSE_OPTION_NUMS;
extern List<int>* SHOPT_OPTION_NUMS;
extern List<int>* SET_OPTION_NUMS;
extern List<Str*>* VISIBLE_SHOPT_NAMES;

extern int NO_INDEX;

int RedirDefaultFd(id_kind_asdl::Id_t id);
types_asdl::redir_arg_type_t RedirArgType(id_kind_asdl::Id_t id);
types_asdl::bool_arg_type_t BoolArgType(id_kind_asdl::Id_t id);
id_kind_asdl::Kind GetKind(id_kind_asdl::Id_t id);

option_asdl::builtin_t LookupNormalBuiltin(Str* s);
option_asdl::builtin_t LookupAssignBuiltin(Str* s);
option_asdl::builtin_t LookupSpecialBuiltin(Str* s);
bool IsControlFlow(Str* s);
bool IsKeyword(Str* s);
Str* LookupCharC(Str* c);
Str* LookupCharPrompt(Str* c);

Str* OptionName(option_asdl::option_t opt_num);

Tuple2<runtime_asdl::state_t, runtime_asdl::emit_t> IfsEdge(runtime_asdl::state_t state, runtime_asdl::char_kind_t ch);

}  // namespace consts

#endif  // CONSTS_H

