#ifndef OPTVIEW_H
#define OPTVIEW_H

#include "mylib.h"
#include "option_asdl.h"

// duplication because mycpp doesn't export headers
namespace state {
class _ErrExit; 
}

namespace optview {

namespace option_i = option_asdl::option_i;

class Parse {
 public:
  Parse(List<bool>* opt_array)
      : opt_array(opt_array) {
  }
  bool parse_dynamic_arith() { return opt_array->index(option_i::parse_dynamic_arith); }
  bool parse_at() { return opt_array->index(option_i::parse_at); }
  bool parse_brace() { return opt_array->index(option_i::parse_brace); }
  bool parse_index_expr() { return opt_array->index(option_i::parse_index_expr); }
  bool parse_paren() { return opt_array->index(option_i::parse_paren); }
  bool parse_rawc() { return opt_array->index(option_i::parse_rawc); }
  bool parse_ignored() { return opt_array->index(option_i::parse_ignored); }
  bool parse_set() { return opt_array->index(option_i::parse_set); }
  bool parse_equals() { return opt_array->index(option_i::parse_equals); }

  List<bool>* opt_array;
};

#ifndef OSH_PARSE  // hack for osh_parse, set in build/mycpp.sh
class Exec {
 public:
  Exec(List<bool>* opt_array, state::_ErrExit* errexit)
      : opt_array(opt_array), errexit_(errexit) {
  }

  // definition in cpp/postamble.cc
  bool errexit();
  bool nounset() { return opt_array->index(option_i::nounset); }
  bool hashall() { return opt_array->index(option_i::hashall); }
  bool pipefail() { return opt_array->index(option_i::pipefail); }
  bool noexec() { return opt_array->index(option_i::noexec); }
  bool xtrace() { return opt_array->index(option_i::xtrace); }
  bool verbose() { return opt_array->index(option_i::verbose); }
  bool noglob() { return opt_array->index(option_i::noglob); }
  bool noclobber() { return opt_array->index(option_i::noclobber); }
  bool posix() { return opt_array->index(option_i::posix); }
  bool vi() { return opt_array->index(option_i::vi); }
  bool emacs() { return opt_array->index(option_i::emacs); }
  bool interactive() { return opt_array->index(option_i::interactive); }
  bool failglob() { return opt_array->index(option_i::failglob); }
  bool eval_unsafe_arith() { return opt_array->index(option_i::eval_unsafe_arith); }
  bool nullglob() { return opt_array->index(option_i::nullglob); }
  bool inherit_errexit() { return opt_array->index(option_i::inherit_errexit); }
  bool strict_argv() { return opt_array->index(option_i::strict_argv); }
  bool strict_arith() { return opt_array->index(option_i::strict_arith); }
  bool strict_array() { return opt_array->index(option_i::strict_array); }
  bool strict_control_flow() { return opt_array->index(option_i::strict_control_flow); }
  bool strict_echo() { return opt_array->index(option_i::strict_echo); }
  bool strict_errexit() { return opt_array->index(option_i::strict_errexit); }
  bool strict_eval_builtin() { return opt_array->index(option_i::strict_eval_builtin); }
  bool strict_nameref() { return opt_array->index(option_i::strict_nameref); }
  bool strict_word_eval() { return opt_array->index(option_i::strict_word_eval); }
  bool strict_backslash() { return opt_array->index(option_i::strict_backslash); }
  bool strict_glob() { return opt_array->index(option_i::strict_glob); }
  bool simple_word_eval() { return opt_array->index(option_i::simple_word_eval); }
  bool dashglob() { return opt_array->index(option_i::dashglob); }
  bool more_errexit() { return opt_array->index(option_i::more_errexit); }
  bool simple_test_builtin() { return opt_array->index(option_i::simple_test_builtin); }

  List<bool>* opt_array;
  state::_ErrExit* errexit_;
};
#endif  // OSH_PARSE

}  // namespace optview

#endif  // OPTVIEW_H
