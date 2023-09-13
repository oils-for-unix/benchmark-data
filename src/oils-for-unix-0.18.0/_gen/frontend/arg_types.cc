// arg_types.cc is generated by frontend/flag_gen.py

#include "arg_types.h"
using runtime_asdl::flag_type_e;

namespace arg_types {

const char* arity0_3[] = {"L", "P", nullptr};

DefaultPair_c defaults_3[] = {
    {"L", flag_type_e::Bool, {.b = false}},
    {"P", flag_type_e::Bool, {.b = false}},
    {},
};

const char* arity0_4[] = {"v", nullptr};

DefaultPair_c defaults_4[] = {
    {"v", flag_type_e::Bool, {.b = false}},
    {},
};

const char* arity0_5[] = {"c", "l", "p", "v", nullptr};

DefaultPair_c defaults_5[] = {
    {"c", flag_type_e::Bool, {.b = false}},
    {"l", flag_type_e::Bool, {.b = false}},
    {"p", flag_type_e::Bool, {.b = false}},
    {"v", flag_type_e::Bool, {.b = false}},
    {},
};

const char* arity0_6[] = {"e", "n", nullptr};

DefaultPair_c defaults_6[] = {
    {"e", flag_type_e::Bool, {.b = false}},
    {"n", flag_type_e::Bool, {.b = false}},
    {},
};

const char* arity0_9[] = {"f", "n", "p", nullptr};

DefaultPair_c defaults_9[] = {
    {"f", flag_type_e::Bool, {.b = false}},
    {"n", flag_type_e::Bool, {.b = false}},
    {"p", flag_type_e::Bool, {.b = false}},
    {},
};

const char* arity0_13[] = {"r", nullptr};

DefaultPair_c defaults_13[] = {
    {"r", flag_type_e::Bool, {.b = false}},
    {},
};

const char* arity0_15[] = {"a", "c", "r", nullptr};

Action_c arity1_15[] = {
    {"d", ActionType_c::SetToInt, "d", nullptr},
    {},
};

DefaultPair_c defaults_15[] = {
    {"a", flag_type_e::Bool, {.b = false}},
    {"c", flag_type_e::Bool, {.b = false}},
    {"d", flag_type_e::Int, {.i = -1}},
    {"r", flag_type_e::Bool, {.b = false}},
    {},
};

const char* arity0_16[] = {"l", "p", nullptr};

Action_c actions_long_16[] = {
    {"debug", ActionType_c::SetToTrue, "debug", nullptr},
    {},
};

DefaultPair_c defaults_16[] = {
    {"debug", flag_type_e::Bool, {.b = false}},
    {"l", flag_type_e::Bool, {.b = false}},
    {"p", flag_type_e::Bool, {.b = false}},
    {},
};

Action_c actions_long_17[] = {
    {"validate", ActionType_c::SetAttachedBool, "validate", nullptr},
    {},
};

DefaultPair_c defaults_17[] = {
    {"validate", flag_type_e::Bool, {.b = true}},
    {},
};

Action_c actions_long_18[] = {
    {"indent", ActionType_c::SetToInt, "indent", nullptr},
    {"pretty", ActionType_c::SetAttachedBool, "pretty", nullptr},
    {"surrogate-ok", ActionType_c::SetAttachedBool, "surrogate-ok", nullptr},
    {},
};

DefaultPair_c defaults_18[] = {
    {"indent", flag_type_e::Int, {.i = -1}},
    {"pretty", flag_type_e::Bool, {.b = true}},
    {"surrogate-ok", flag_type_e::Bool, {.b = false}},
    {},
};

const char* arity0_19[] = {"t", nullptr};

DefaultPair_c defaults_19[] = {
    {"t", flag_type_e::Bool, {.b = false}},
    {},
};

const char* arity0_21[] = {"A", "F", "a", "f", "g", "i", "p", nullptr};

const char* plus_21[] = {"n", "r", "x", nullptr};

DefaultPair_c defaults_21[] = {
    {"A", flag_type_e::Bool, {.b = false}},
    {"F", flag_type_e::Bool, {.b = false}},
    {"a", flag_type_e::Bool, {.b = false}},
    {"f", flag_type_e::Bool, {.b = false}},
    {"g", flag_type_e::Bool, {.b = false}},
    {"i", flag_type_e::Bool, {.b = false}},
    {"n", flag_type_e::Str, {}},
    {"p", flag_type_e::Bool, {.b = false}},
    {"r", flag_type_e::Str, {}},
    {"x", flag_type_e::Str, {}},
    {},
};

Action_c arity1_24[] = {
    {"v", ActionType_c::SetToString, "v", nullptr},
    {},
};

DefaultPair_c defaults_24[] = {
    {"v", flag_type_e::Str, {}},
    {},
};

const char* arity0_27[] = {"L", "P", nullptr};

DefaultPair_c defaults_27[] = {
    {"L", flag_type_e::Bool, {.b = false}},
    {"P", flag_type_e::Bool, {.b = false}},
    {},
};

const char* arity0_28[] = {"Z", "q", "r", "s", nullptr};

Action_c arity1_28[] = {
    {"a", ActionType_c::SetToString, "a", nullptr},
    {"d", ActionType_c::SetToString, "d", nullptr},
    {"n", ActionType_c::SetToInt, "n", nullptr},
    {"p", ActionType_c::SetToString, "p", nullptr},
    {"t", ActionType_c::SetToFloat, "t", nullptr},
    {"u", ActionType_c::SetToInt, "u", nullptr},
    {},
};

Action_c actions_long_28[] = {
    {"all", ActionType_c::SetToTrue, "all", nullptr},
    {"line", ActionType_c::SetToTrue, "line", nullptr},
    {"qsn", ActionType_c::SetToTrue, "q", nullptr},
    {"with-eol", ActionType_c::SetToTrue, "with-eol", nullptr},
    {},
};

DefaultPair_c defaults_28[] = {
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

const char* arity0_29[] = {"A", "a", "p", nullptr};

DefaultPair_c defaults_29[] = {
    {"A", flag_type_e::Bool, {.b = false}},
    {"a", flag_type_e::Bool, {.b = false}},
    {"p", flag_type_e::Bool, {.b = false}},
    {},
};

Action_c arity1_30[] = {
    {"h", ActionType_c::SetAttachedBool, "h", nullptr},
    {},
};

DefaultPair_c defaults_30[] = {
    {"h", flag_type_e::Bool, {.b = false}},
    {},
};

const char* arity0_31[] = {"o", "p", "q", "s", "u", nullptr};

Action_c actions_long_31[] = {
    {"set", ActionType_c::SetToTrue, "s", nullptr},
    {"unset", ActionType_c::SetToTrue, "u", nullptr},
    {},
};

DefaultPair_c defaults_31[] = {
    {"o", flag_type_e::Bool, {.b = false}},
    {"p", flag_type_e::Bool, {.b = false}},
    {"q", flag_type_e::Bool, {.b = false}},
    {"s", flag_type_e::Bool, {.b = false}},
    {"u", flag_type_e::Bool, {.b = false}},
    {},
};

Action_c actions_long_33[] = {
    {"builtin", ActionType_c::SetToTrue, "builtin", nullptr},
    {},
};

DefaultPair_c defaults_33[] = {
    {"builtin", flag_type_e::Bool, {.b = false}},
    {},
};

Action_c arity1_34[] = {
    {"c", ActionType_c::SetToString, "c", nullptr},
    {"n", ActionType_c::SetAttachedBool, "n", nullptr},
    {},
};

Action_c actions_long_34[] = {
    {"translate", ActionType_c::SetAttachedBool, "translate", nullptr},
    {},
};

DefaultPair_c defaults_34[] = {
    {"c", flag_type_e::Str, {}},
    {"n", flag_type_e::Bool, {.b = false}},
    {"translate", flag_type_e::Bool, {.b = false}},
    {},
};

const char* arity0_35[] = {"l", "p", nullptr};

DefaultPair_c defaults_35[] = {
    {"l", flag_type_e::Bool, {.b = false}},
    {"p", flag_type_e::Bool, {.b = false}},
    {},
};

Action_c actions_long_36[] = {
    {"assign", ActionType_c::SetToString, "assign", nullptr},
    {},
};

DefaultPair_c defaults_36[] = {
    {"assign", flag_type_e::Str, {}},
    {},
};

const char* arity0_37[] = {"P", "f", "p", "t", nullptr};

DefaultPair_c defaults_37[] = {
    {"P", flag_type_e::Bool, {.b = false}},
    {"f", flag_type_e::Bool, {.b = false}},
    {"p", flag_type_e::Bool, {.b = false}},
    {"t", flag_type_e::Bool, {.b = false}},
    {},
};

const char* arity0_39[] = {"f", "v", nullptr};

DefaultPair_c defaults_39[] = {
    {"f", flag_type_e::Bool, {.b = false}},
    {"v", flag_type_e::Bool, {.b = false}},
    {},
};

const char* arity0_40[] = {"n", nullptr};

DefaultPair_c defaults_40[] = {
    {"n", flag_type_e::Bool, {.b = false}},
    {},
};

Action_c arity1_41[] = {
    {"n", ActionType_c::SetAttachedBool, "n", nullptr},
    {},
};

const char* params_0[] = {"raw", "u", "x", nullptr};

Action_c actions_long_41[] = {
    {"end", ActionType_c::SetToString, "end", nullptr},
    {"j8", ActionType_c::SetAttachedBool, "j8", nullptr},
    {"qsn", ActionType_c::SetAttachedBool, "qsn", nullptr},
    {"sep", ActionType_c::SetToString, "sep", nullptr},
    {"unicode", ActionType_c::SetToString, "unicode", params_0},
    {},
};

DefaultPair_c defaults_41[] = {
    {"end", flag_type_e::Str, {.s = "\n"}},
    {"j8", flag_type_e::Bool, {.b = false}},
    {"n", flag_type_e::Bool, {.b = false}},
    {"qsn", flag_type_e::Bool, {.b = false}},
    {"sep", flag_type_e::Str, {.s = "\n"}},
    {"unicode", flag_type_e::Str, {.s = "raw"}},
    {},
};

FlagSpec_c kFlagSpecs[] = {
    { "alias", nullptr, nullptr, nullptr, nullptr, nullptr },
    { "append", nullptr, nullptr, nullptr, nullptr, nullptr },
    { "boolstatus", nullptr, nullptr, nullptr, nullptr, nullptr },
    { "cd", arity0_3, nullptr, nullptr, nullptr, defaults_3 },
    { "command", arity0_4, nullptr, nullptr, nullptr, defaults_4 },
    { "dirs", arity0_5, nullptr, nullptr, nullptr, defaults_5 },
    { "echo", arity0_6, nullptr, nullptr, nullptr, defaults_6 },
    { "eval", nullptr, nullptr, nullptr, nullptr, nullptr },
    { "exec", nullptr, nullptr, nullptr, nullptr, nullptr },
    { "export_", arity0_9, nullptr, nullptr, nullptr, defaults_9 },
    { "fopen", nullptr, nullptr, nullptr, nullptr, nullptr },
    { "fork", nullptr, nullptr, nullptr, nullptr, nullptr },
    { "forkwait", nullptr, nullptr, nullptr, nullptr, nullptr },
    { "hash", arity0_13, nullptr, nullptr, nullptr, defaults_13 },
    { "help", nullptr, nullptr, nullptr, nullptr, nullptr },
    { "history", arity0_15, arity1_15, nullptr, nullptr, defaults_15 },
    { "jobs", arity0_16, nullptr, actions_long_16, nullptr, defaults_16 },
    { "json_read", nullptr, nullptr, actions_long_17, nullptr, defaults_17 },
    { "json_write", nullptr, nullptr, actions_long_18, nullptr, defaults_18 },
    { "mapfile", arity0_19, nullptr, nullptr, nullptr, defaults_19 },
    { "module", nullptr, nullptr, nullptr, nullptr, nullptr },
    { "new_var", arity0_21, nullptr, nullptr, plus_21, defaults_21 },
    { "popd", nullptr, nullptr, nullptr, nullptr, nullptr },
    { "pp", nullptr, nullptr, nullptr, nullptr, nullptr },
    { "printf", nullptr, arity1_24, nullptr, nullptr, defaults_24 },
    { "push-registers", nullptr, nullptr, nullptr, nullptr, nullptr },
    { "pushd", nullptr, nullptr, nullptr, nullptr, nullptr },
    { "pwd", arity0_27, nullptr, nullptr, nullptr, defaults_27 },
    { "read", arity0_28, arity1_28, actions_long_28, nullptr, defaults_28 },
    { "readonly", arity0_29, nullptr, nullptr, nullptr, defaults_29 },
    { "runproc", nullptr, arity1_30, nullptr, nullptr, defaults_30 },
    { "shopt", arity0_31, nullptr, actions_long_31, nullptr, defaults_31 },
    { "shvar", nullptr, nullptr, nullptr, nullptr, nullptr },
    { "source", nullptr, nullptr, actions_long_33, nullptr, defaults_33 },
    { "tea_main", nullptr, arity1_34, actions_long_34, nullptr, defaults_34 },
    { "trap", arity0_35, nullptr, nullptr, nullptr, defaults_35 },
    { "try_", nullptr, nullptr, actions_long_36, nullptr, defaults_36 },
    { "type", arity0_37, nullptr, nullptr, nullptr, defaults_37 },
    { "unalias", nullptr, nullptr, nullptr, nullptr, nullptr },
    { "unset", arity0_39, nullptr, nullptr, nullptr, defaults_39 },
    { "wait", arity0_40, nullptr, nullptr, nullptr, defaults_40 },
    { "write", nullptr, arity1_41, actions_long_41, nullptr, defaults_41 },
    {},
};

Action_c short_42[] = {
    {"n", ActionType_c::SetToString, "n", nullptr},
    {"s", ActionType_c::SetToTrue, "s", nullptr},
    {},
};

DefaultPair_c defaults_42[] = {
    {"n", flag_type_e::Str, {}},
    {"s", flag_type_e::Bool, {.b = false}},
    {},
};

Action_c short_43[] = {
    {"c", ActionType_c::SetToString, "c", nullptr},
    {},
};

const char* params_1[] = {"jlines", "tsv8", nullptr};

Action_c long_43[] = {
    {"begin", ActionType_c::SetToInt, "begin", nullptr},
    {"end", ActionType_c::SetToInt, "end", nullptr},
    {"format", ActionType_c::SetToString, "format", params_1},
    {},
};

DefaultPair_c defaults_43[] = {
    {"begin", flag_type_e::Int, {.i = -1}},
    {"c", flag_type_e::Str, {}},
    {"end", flag_type_e::Int, {.i = -1}},
    {"format", flag_type_e::Str, {.s = "jlines"}},
    {},
};

const char* params_2[] = {"alias", "binding", "builtin", "command", "directory", "file", "function", "helptopic", "job", "setopt", "shopt", "signal", "stopped", "user", "variable", nullptr};

const char* params_3[] = {"bashdefault", "default", "dirnames", "filenames", "nospace", "plusdirs", nullptr};

Action_c short_44[] = {
    {"A", ActionType_c::SetNamedAction, nullptr, params_2},
    {"C", ActionType_c::SetToString, "C", nullptr},
    {"F", ActionType_c::SetToString, "F", nullptr},
    {"P", ActionType_c::SetToString, "P", nullptr},
    {"S", ActionType_c::SetToString, "S", nullptr},
    {"W", ActionType_c::SetToString, "W", nullptr},
    {"X", ActionType_c::SetToString, "X", nullptr},
    {"a", ActionType_c::SetAction, "alias", nullptr},
    {"b", ActionType_c::SetAction, "binding", nullptr},
    {"c", ActionType_c::SetAction, "command", nullptr},
    {"d", ActionType_c::SetAction, "directory", nullptr},
    {"f", ActionType_c::SetAction, "file", nullptr},
    {"j", ActionType_c::SetAction, "job", nullptr},
    {"o", ActionType_c::SetNamedOption, nullptr, params_3},
    {"u", ActionType_c::SetAction, "user", nullptr},
    {"v", ActionType_c::SetAction, "variable", nullptr},
    {},
};

const char* plus_2[] = {"o", nullptr};

DefaultPair_c defaults_44[] = {
    {"C", flag_type_e::Str, {}},
    {"F", flag_type_e::Str, {}},
    {"P", flag_type_e::Str, {}},
    {"S", flag_type_e::Str, {}},
    {"W", flag_type_e::Str, {}},
    {"X", flag_type_e::Str, {}},
    {},
};

const char* params_4[] = {"alias", "binding", "builtin", "command", "directory", "file", "function", "helptopic", "job", "setopt", "shopt", "signal", "stopped", "user", "variable", nullptr};

const char* params_5[] = {"bashdefault", "default", "dirnames", "filenames", "nospace", "plusdirs", nullptr};

Action_c short_45[] = {
    {"A", ActionType_c::SetNamedAction, nullptr, params_4},
    {"C", ActionType_c::SetToString, "C", nullptr},
    {"D", ActionType_c::SetToTrue, "D", nullptr},
    {"E", ActionType_c::SetToTrue, "E", nullptr},
    {"F", ActionType_c::SetToString, "F", nullptr},
    {"P", ActionType_c::SetToString, "P", nullptr},
    {"S", ActionType_c::SetToString, "S", nullptr},
    {"W", ActionType_c::SetToString, "W", nullptr},
    {"X", ActionType_c::SetToString, "X", nullptr},
    {"a", ActionType_c::SetAction, "alias", nullptr},
    {"b", ActionType_c::SetAction, "binding", nullptr},
    {"c", ActionType_c::SetAction, "command", nullptr},
    {"d", ActionType_c::SetAction, "directory", nullptr},
    {"f", ActionType_c::SetAction, "file", nullptr},
    {"j", ActionType_c::SetAction, "job", nullptr},
    {"o", ActionType_c::SetNamedOption, nullptr, params_5},
    {"u", ActionType_c::SetAction, "user", nullptr},
    {"v", ActionType_c::SetAction, "variable", nullptr},
    {},
};

const char* plus_3[] = {"o", nullptr};

DefaultPair_c defaults_45[] = {
    {"C", flag_type_e::Str, {}},
    {"D", flag_type_e::Bool, {.b = false}},
    {"E", flag_type_e::Bool, {.b = false}},
    {"F", flag_type_e::Str, {}},
    {"P", flag_type_e::Str, {}},
    {"S", flag_type_e::Str, {}},
    {"W", flag_type_e::Str, {}},
    {"X", flag_type_e::Str, {}},
    {},
};

const char* params_6[] = {"bashdefault", "default", "dirnames", "filenames", "nospace", "plusdirs", nullptr};

Action_c short_46[] = {
    {"o", ActionType_c::SetNamedOption, nullptr, params_6},
    {},
};

const char* plus_4[] = {"o", nullptr};

Action_c short_47[] = {
    {"C", ActionType_c::SetOption, "noclobber", nullptr},
    {"O", ActionType_c::SetNamedOption_shopt, nullptr, nullptr},
    {"c", ActionType_c::SetToString_q, "c", nullptr},
    {"e", ActionType_c::SetOption, "errexit", nullptr},
    {"f", ActionType_c::SetOption, "noglob", nullptr},
    {"h", ActionType_c::SetOption, "hashall", nullptr},
    {"i", ActionType_c::SetToTrue, "i", nullptr},
    {"l", ActionType_c::SetToTrue, "l", nullptr},
    {"n", ActionType_c::SetOption, "noexec", nullptr},
    {"o", ActionType_c::SetNamedOption, nullptr, nullptr},
    {"u", ActionType_c::SetOption, "nounset", nullptr},
    {"v", ActionType_c::SetOption, "verbose", nullptr},
    {"x", ActionType_c::SetOption, "xtrace", nullptr},
    {},
};

const char* params_7[] = {"abbrev-html", "abbrev-text", "html", "none", "oheap", "text", nullptr};

const char* params_8[] = {"minimal", "nice", nullptr};

const char* params_9[] = {"arena", "cat-em", "deps", "syntax-tree", "tokens", "ysh-ify", nullptr};

Action_c long_47[] = {
    {"ast-format", ActionType_c::SetToString, "ast-format", params_7},
    {"completion-demo", ActionType_c::SetToTrue, "completion-demo", nullptr},
    {"completion-display", ActionType_c::SetToString, "completion-display", params_8},
    {"debug-file", ActionType_c::SetToString, "debug-file", nullptr},
    {"headless", ActionType_c::SetToTrue, "headless", nullptr},
    {"help", ActionType_c::SetToTrue, "help", nullptr},
    {"location-start-line", ActionType_c::SetToInt, "location-start-line", nullptr},
    {"location-str", ActionType_c::SetToString, "location-str", nullptr},
    {"login", ActionType_c::SetToTrue, "login", nullptr},
    {"norc", ActionType_c::SetToTrue, "norc", nullptr},
    {"one-pass-parse", ActionType_c::SetToTrue, "one-pass-parse", nullptr},
    {"print-status", ActionType_c::SetToTrue, "print-status", nullptr},
    {"rcdir", ActionType_c::SetToString, "rcdir", nullptr},
    {"rcfile", ActionType_c::SetToString, "rcfile", nullptr},
    {"tool", ActionType_c::SetToString, "tool", params_9},
    {"version", ActionType_c::SetToTrue, "version", nullptr},
    {"xtrace-to-debug-file", ActionType_c::SetToTrue, "xtrace-to-debug-file", nullptr},
    {},
};

const char* plus_5[] = {"C", "O", "e", "f", "h", "n", "o", "u", "v", "x", nullptr};

DefaultPair_c defaults_47[] = {
    {"ast_format", flag_type_e::Str, {.s = "abbrev-text"}},
    {"c", flag_type_e::Str, {}},
    {"completion_demo", flag_type_e::Bool, {.b = false}},
    {"completion_display", flag_type_e::Str, {.s = "nice"}},
    {"debug_file", flag_type_e::Str, {}},
    {"headless", flag_type_e::Bool, {.b = false}},
    {"help", flag_type_e::Bool, {.b = false}},
    {"i", flag_type_e::Bool, {.b = false}},
    {"l", flag_type_e::Bool, {.b = false}},
    {"location_start_line", flag_type_e::Int, {.i = -1}},
    {"location_str", flag_type_e::Str, {}},
    {"login", flag_type_e::Bool, {.b = false}},
    {"norc", flag_type_e::Bool, {.b = false}},
    {"one_pass_parse", flag_type_e::Bool, {.b = false}},
    {"print_status", flag_type_e::Bool, {.b = false}},
    {"rcdir", flag_type_e::Str, {}},
    {"rcfile", flag_type_e::Str, {}},
    {"tool", flag_type_e::Str, {.s = ""}},
    {"version", flag_type_e::Bool, {.b = false}},
    {"xtrace_to_debug_file", flag_type_e::Bool, {.b = false}},
    {},
};

Action_c short_48[] = {
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

const char* plus_6[] = {"C", "O", "e", "f", "h", "n", "o", "u", "v", "x", nullptr};

FlagSpecAndMore_c kFlagSpecsAndMore[] = {
    { "compadjust", short_42, nullptr, nullptr, defaults_42 },
    { "compexport", short_43, long_43, nullptr, defaults_43 },
    { "compgen", short_44, nullptr, plus_2, defaults_44 },
    { "complete", short_45, nullptr, plus_3, defaults_45 },
    { "compopt", short_46, nullptr, plus_4, nullptr },
    { "main", short_47, long_47, plus_5, defaults_47 },
    { "set", short_48, nullptr, plus_6, nullptr },
    {},
};
}  // namespace arg_types
