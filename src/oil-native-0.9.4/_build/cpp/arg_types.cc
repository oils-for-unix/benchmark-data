// arg_types.cc is generated by frontend/flag_gen.py

#include "arg_types.h"
using runtime_asdl::flag_type_e;

namespace arg_types {


const char* arity0_1[] = {"L", "P", nullptr};

DefaultPair_c defaults_1[] = {
    {"L", flag_type_e::Bool, {.b = false}},
    {"P", flag_type_e::Bool, {.b = false}},
    {},
};


const char* arity0_2[] = {"v", nullptr};

DefaultPair_c defaults_2[] = {
    {"v", flag_type_e::Bool, {.b = false}},
    {},
};


const char* arity0_3[] = {"c", "l", "p", "v", nullptr};

DefaultPair_c defaults_3[] = {
    {"c", flag_type_e::Bool, {.b = false}},
    {"l", flag_type_e::Bool, {.b = false}},
    {"p", flag_type_e::Bool, {.b = false}},
    {"v", flag_type_e::Bool, {.b = false}},
    {},
};


const char* arity0_4[] = {"e", "n", nullptr};

DefaultPair_c defaults_4[] = {
    {"e", flag_type_e::Bool, {.b = false}},
    {"n", flag_type_e::Bool, {.b = false}},
    {},
};



const char* arity0_6[] = {"f", "n", "p", nullptr};

DefaultPair_c defaults_6[] = {
    {"f", flag_type_e::Bool, {.b = false}},
    {"n", flag_type_e::Bool, {.b = false}},
    {"p", flag_type_e::Bool, {.b = false}},
    {},
};


const char* arity0_7[] = {"r", nullptr};

DefaultPair_c defaults_7[] = {
    {"r", flag_type_e::Bool, {.b = false}},
    {},
};



const char* arity0_9[] = {"c", nullptr};

Action_c arity1_9[] = {
    {"d", ActionType_c::SetToInt, "d", nullptr},
    {},
};

DefaultPair_c defaults_9[] = {
    {"c", flag_type_e::Bool, {.b = false}},
    {"d", flag_type_e::Int, {.i = -1}},
    {},
};


const char* arity0_10[] = {"l", nullptr};

Action_c actions_long_10[] = {
    {"debug", ActionType_c::SetToTrue, "debug", nullptr},
    {},
};

DefaultPair_c defaults_10[] = {
    {"debug", flag_type_e::Bool, {.b = false}},
    {"l", flag_type_e::Bool, {.b = false}},
    {},
};


const char* arity0_11[] = {"t", nullptr};

DefaultPair_c defaults_11[] = {
    {"t", flag_type_e::Bool, {.b = false}},
    {},
};


const char* arity0_12[] = {"A", "F", "a", "f", "g", "p", nullptr};

const char* plus_12[] = {"n", "r", "x", nullptr};

DefaultPair_c defaults_12[] = {
    {"A", flag_type_e::Bool, {.b = false}},
    {"F", flag_type_e::Bool, {.b = false}},
    {"a", flag_type_e::Bool, {.b = false}},
    {"f", flag_type_e::Bool, {.b = false}},
    {"g", flag_type_e::Bool, {.b = false}},
    {"n", flag_type_e::Str, {}},
    {"p", flag_type_e::Bool, {.b = false}},
    {"r", flag_type_e::Str, {}},
    {"x", flag_type_e::Str, {}},
    {},
};


Action_c arity1_13[] = {
    {"v", ActionType_c::SetToString, "v", nullptr},
    {},
};

DefaultPair_c defaults_13[] = {
    {"v", flag_type_e::Str, {}},
    {},
};


const char* arity0_14[] = {"L", "P", nullptr};

DefaultPair_c defaults_14[] = {
    {"L", flag_type_e::Bool, {.b = false}},
    {"P", flag_type_e::Bool, {.b = false}},
    {},
};


const char* arity0_15[] = {"Z", "q", "r", "s", nullptr};

Action_c arity1_15[] = {
    {"a", ActionType_c::SetToString, "a", nullptr},
    {"d", ActionType_c::SetToString, "d", nullptr},
    {"n", ActionType_c::SetToInt, "n", nullptr},
    {"p", ActionType_c::SetToString, "p", nullptr},
    {"t", ActionType_c::SetToFloat, "t", nullptr},
    {"u", ActionType_c::SetToInt, "u", nullptr},
    {},
};

Action_c actions_long_15[] = {
    {"all", ActionType_c::SetToTrue, "all", nullptr},
    {"line", ActionType_c::SetToTrue, "line", nullptr},
    {"qsn", ActionType_c::SetToTrue, "q", nullptr},
    {"with-eol", ActionType_c::SetToTrue, "with-eol", nullptr},
    {},
};

DefaultPair_c defaults_15[] = {
    {"Z", flag_type_e::Bool, {.b = false}},
    {"a", flag_type_e::Str, {}},
    {"all", flag_type_e::Bool, {.b = false}},
    {"d", flag_type_e::Str, {}},
    {"line", flag_type_e::Bool, {.b = false}},
    {"n", flag_type_e::Int, {.i = -1}},
    {"p", flag_type_e::Str, {}},
    {"q", flag_type_e::Bool, {.b = false}},
    {"r", flag_type_e::Bool, {.b = false}},
    {"s", flag_type_e::Bool, {.b = false}},
    {"t", flag_type_e::Float, {.f = -1.0}},
    {"u", flag_type_e::Int, {.i = -1}},
    {"with-eol", flag_type_e::Bool, {.b = false}},
    {},
};


const char* arity0_16[] = {"A", "a", "p", nullptr};

DefaultPair_c defaults_16[] = {
    {"A", flag_type_e::Bool, {.b = false}},
    {"a", flag_type_e::Bool, {.b = false}},
    {"p", flag_type_e::Bool, {.b = false}},
    {},
};


const char* arity0_17[] = {"o", "p", "q", "s", "u", nullptr};

Action_c actions_long_17[] = {
    {"set", ActionType_c::SetToTrue, "s", nullptr},
    {"unset", ActionType_c::SetToTrue, "u", nullptr},
    {},
};

DefaultPair_c defaults_17[] = {
    {"o", flag_type_e::Bool, {.b = false}},
    {"p", flag_type_e::Bool, {.b = false}},
    {"q", flag_type_e::Bool, {.b = false}},
    {"s", flag_type_e::Bool, {.b = false}},
    {"u", flag_type_e::Bool, {.b = false}},
    {},
};



const char* arity0_19[] = {"l", "p", nullptr};

DefaultPair_c defaults_19[] = {
    {"l", flag_type_e::Bool, {.b = false}},
    {"p", flag_type_e::Bool, {.b = false}},
    {},
};


const char* arity0_20[] = {"P", "f", "p", "t", nullptr};

DefaultPair_c defaults_20[] = {
    {"P", flag_type_e::Bool, {.b = false}},
    {"f", flag_type_e::Bool, {.b = false}},
    {"p", flag_type_e::Bool, {.b = false}},
    {"t", flag_type_e::Bool, {.b = false}},
    {},
};



const char* arity0_22[] = {"f", "v", nullptr};

DefaultPair_c defaults_22[] = {
    {"f", flag_type_e::Bool, {.b = false}},
    {"v", flag_type_e::Bool, {.b = false}},
    {},
};


const char* arity0_23[] = {"n", nullptr};

DefaultPair_c defaults_23[] = {
    {"n", flag_type_e::Bool, {.b = false}},
    {},
};


FlagSpec_c kFlagSpecs[] = {
    { "alias", nullptr, nullptr, nullptr, nullptr, nullptr },
    { "cd", arity0_1, nullptr, nullptr, nullptr, defaults_1 },
    { "command", arity0_2, nullptr, nullptr, nullptr, defaults_2 },
    { "dirs", arity0_3, nullptr, nullptr, nullptr, defaults_3 },
    { "echo", arity0_4, nullptr, nullptr, nullptr, defaults_4 },
    { "eval", nullptr, nullptr, nullptr, nullptr, nullptr },
    { "export_", arity0_6, nullptr, nullptr, nullptr, defaults_6 },
    { "hash", arity0_7, nullptr, nullptr, nullptr, defaults_7 },
    { "help", nullptr, nullptr, nullptr, nullptr, nullptr },
    { "history", arity0_9, arity1_9, nullptr, nullptr, defaults_9 },
    { "jobs", arity0_10, nullptr, actions_long_10, nullptr, defaults_10 },
    { "mapfile", arity0_11, nullptr, nullptr, nullptr, defaults_11 },
    { "new_var", arity0_12, nullptr, nullptr, plus_12, defaults_12 },
    { "printf", nullptr, arity1_13, nullptr, nullptr, defaults_13 },
    { "pwd", arity0_14, nullptr, nullptr, nullptr, defaults_14 },
    { "read", arity0_15, arity1_15, actions_long_15, nullptr, defaults_15 },
    { "readonly", arity0_16, nullptr, nullptr, nullptr, defaults_16 },
    { "shopt", arity0_17, nullptr, actions_long_17, nullptr, defaults_17 },
    { "source", nullptr, nullptr, nullptr, nullptr, nullptr },
    { "trap", arity0_19, nullptr, nullptr, nullptr, defaults_19 },
    { "type", arity0_20, nullptr, nullptr, nullptr, defaults_20 },
    { "unalias", nullptr, nullptr, nullptr, nullptr, nullptr },
    { "unset", arity0_22, nullptr, nullptr, nullptr, defaults_22 },
    { "wait", arity0_23, nullptr, nullptr, nullptr, defaults_23 },
    {},
};

Action_c short_0[] = {
    {"C", ActionType_c::SetOption, "noclobber", nullptr},
    {"O", ActionType_c::SetNamedOption_shopt, nullptr, nullptr},
    {"c", ActionType_c::SetToString_q, "c", nullptr},
    {"e", ActionType_c::SetOption, "errexit", nullptr},
    {"f", ActionType_c::SetOption, "noglob", nullptr},
    {"h", ActionType_c::SetOption, "hashall", nullptr},
    {"i", ActionType_c::SetToTrue, "i", nullptr},
    {"n", ActionType_c::SetOption, "noexec", nullptr},
    {"o", ActionType_c::SetNamedOption, nullptr, nullptr},
    {"u", ActionType_c::SetOption, "nounset", nullptr},
    {"v", ActionType_c::SetOption, "verbose", nullptr},
    {"x", ActionType_c::SetOption, "xtrace", nullptr},
    {},
};

const char* params_0[] = {"abbrev-html", "abbrev-text", "html", "none", "oheap", "text", nullptr};

const char* params_1[] = {"minimal", "nice", nullptr};

Action_c long_0[] = {
    {"ast-format", ActionType_c::SetToString, "ast-format", params_0},
    {"completion-display", ActionType_c::SetToString, "completion-display", params_1},
    {"debug-file", ActionType_c::SetToString, "debug-file", nullptr},
    {"headless", ActionType_c::SetToTrue, "headless", nullptr},
    {"help", ActionType_c::SetToTrue, "help", nullptr},
    {"one-pass-parse", ActionType_c::SetToTrue, "one-pass-parse", nullptr},
    {"parser-mem-dump", ActionType_c::SetToString, "parser-mem-dump", nullptr},
    {"print-status", ActionType_c::SetToTrue, "print-status", nullptr},
    {"rcfile", ActionType_c::SetToString, "rcfile", nullptr},
    {"runtime-mem-dump", ActionType_c::SetToString, "runtime-mem-dump", nullptr},
    {"version", ActionType_c::SetToTrue, "version", nullptr},
    {"xtrace-to-debug-file", ActionType_c::SetToTrue, "xtrace-to-debug-file", nullptr},
    {},
};

const char* plus_0[] = {"C", "O", "e", "f", "h", "n", "o", "u", "v", "x", nullptr};

DefaultPair_c defaults_0[] = {
    {"ast_format", flag_type_e::Str, {.s = "abbrev-text"}},
    {"c", flag_type_e::Str, {}},
    {"completion_display", flag_type_e::Str, {.s = "nice"}},
    {"debug_file", flag_type_e::Str, {}},
    {"headless", flag_type_e::Bool, {.b = false}},
    {"help", flag_type_e::Bool, {.b = false}},
    {"i", flag_type_e::Bool, {.b = false}},
    {"one_pass_parse", flag_type_e::Bool, {.b = false}},
    {"parser_mem_dump", flag_type_e::Str, {}},
    {"print_status", flag_type_e::Bool, {.b = false}},
    {"rcfile", flag_type_e::Str, {}},
    {"runtime_mem_dump", flag_type_e::Str, {}},
    {"version", flag_type_e::Bool, {.b = false}},
    {"xtrace_to_debug_file", flag_type_e::Bool, {.b = false}},
    {},
};

Action_c short_1[] = {
    {"C", ActionType_c::SetOption, "noclobber", nullptr},
    {"O", ActionType_c::SetNamedOption_shopt, nullptr, nullptr},
    {"e", ActionType_c::SetOption, "errexit", nullptr},
    {"f", ActionType_c::SetOption, "noglob", nullptr},
    {"h", ActionType_c::SetOption, "hashall", nullptr},
    {"n", ActionType_c::SetOption, "noexec", nullptr},
    {"o", ActionType_c::SetNamedOption, nullptr, nullptr},
    {"u", ActionType_c::SetOption, "nounset", nullptr},
    {"v", ActionType_c::SetOption, "verbose", nullptr},
    {"x", ActionType_c::SetOption, "xtrace", nullptr},
    {},
};

const char* plus_1[] = {"C", "O", "e", "f", "h", "n", "o", "u", "v", "x", nullptr};

FlagSpecAndMore_c kFlagSpecsAndMore[] = {
    { "main", short_0, long_0, plus_0, defaults_0 },
    { "set", short_1, nullptr, plus_1, nullptr },
    {},
};
OilFlagSpec_c kOilFlagSpecs[] = {
    {},
};
}  // namespace arg_types
