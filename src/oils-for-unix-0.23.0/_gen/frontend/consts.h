#ifndef CONSTS_H
#define CONSTS_H

#include "mycpp/runtime.h"

#include "_gen/frontend/id_kind.asdl.h"
#include "_gen/frontend/option.asdl.h"
#include "_gen/core/runtime.asdl.h"
#include "_gen/frontend/types.asdl.h"

namespace consts {

extern List<int>* STRICT_ALL;
extern List<int>* YSH_UPGRADE;
extern List<int>* YSH_ALL;
extern List<int>* DEFAULT_TRUE;
extern List<int>* PARSE_OPTION_NUMS;
extern List<int>* SHOPT_OPTION_NUMS;
extern List<int>* SET_OPTION_NUMS;
extern List<int>* VISIBLE_SHOPT_NUMS;
extern List<BigStr*>* BUILTIN_NAMES;
extern List<BigStr*>* OSH_KEYWORD_NAMES;
extern List<BigStr*>* SET_OPTION_NAMES;
extern List<BigStr*>* SHOPT_OPTION_NAMES;

extern int NO_INDEX;

extern BigStr* gVersion;

int RedirDefaultFd(id_kind_asdl::Id_t id);
types_asdl::redir_arg_type_t RedirArgType(id_kind_asdl::Id_t id);
types_asdl::bool_arg_type_t BoolArgType(id_kind_asdl::Id_t id);
id_kind_asdl::Kind GetKind(id_kind_asdl::Id_t id);

types_asdl::opt_group_t OptionGroupNum(BigStr* s);
option_asdl::option_t OptionNum(BigStr* s);
option_asdl::builtin_t LookupNormalBuiltin(BigStr* s);
option_asdl::builtin_t LookupAssignBuiltin(BigStr* s);
option_asdl::builtin_t LookupSpecialBuiltin(BigStr* s);
bool IsControlFlow(BigStr* s);
BigStr* ControlFlowName(int i);
bool IsKeyword(BigStr* s);
BigStr* LookupCharC(BigStr* c);
BigStr* LookupCharPrompt(BigStr* c);

BigStr* OptionName(option_asdl::option_t opt_num);

Tuple2<runtime_asdl::state_t, runtime_asdl::emit_t> IfsEdge(runtime_asdl::state_t state, runtime_asdl::char_kind_t ch);

extern BigStr* ASSIGN_ARG_RE;
extern BigStr* TEST_V_RE;

}  // namespace consts

#endif  // CONSTS_H

