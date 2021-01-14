#ifndef OPTVIEW_H
#define OPTVIEW_H

#include "mylib.h"
#include "option_asdl.h"

namespace optview {

namespace option_i = option_asdl::option_i;

class _View {
 public:
  _View(List<bool>* opt0_array, List<List<bool>*>* opt_stacks)
      : opt0_array(opt0_array), opt_stacks(opt_stacks) {
  }

  bool _Get(int opt_num) {
    List<bool>* overlay = opt_stacks->index(opt_num);
    if ((overlay == nullptr) or len(overlay) == 0) {
      return opt0_array->index(opt_num);
    } else {
      return overlay->index(-1);
    }
  }

  List<bool>* opt0_array;
  List<List<bool>*>* opt_stacks;
};

class Parse : public _View {
 public:
  Parse(List<bool>* opt0_array, List<List<bool>*>* opt_stacks)
      : _View(opt0_array, opt_stacks) {
  }
  bool parse_dynamic_arith() { return _Get(option_i::parse_dynamic_arith); }
  bool parse_at() { return _Get(option_i::parse_at); }
  bool parse_brace() { return _Get(option_i::parse_brace); }
  bool parse_paren() { return _Get(option_i::parse_paren); }
  bool parse_triple_quoted() { return _Get(option_i::parse_triple_quoted); }
  bool parse_triple_dots() { return _Get(option_i::parse_triple_dots); }
  bool expand_aliases() { return _Get(option_i::expand_aliases); }
  bool parse_set() { return _Get(option_i::parse_set); }
  bool parse_equals() { return _Get(option_i::parse_equals); }
  bool parse_at_all() { return _Get(option_i::parse_at_all); }
  bool parse_backslash() { return _Get(option_i::parse_backslash); }
  bool parse_backticks() { return _Get(option_i::parse_backticks); }
  bool parse_dollar() { return _Get(option_i::parse_dollar); }
  bool parse_ignored() { return _Get(option_i::parse_ignored); }
  bool parse_amp() { return _Get(option_i::parse_amp); }
  bool parse_tea() { return _Get(option_i::parse_tea); }
};

#ifndef OSH_PARSE  // hack for osh_parse, set in build/mycpp.sh
class Exec : public _View {
 public:
  Exec(List<bool>* opt0_array, List<List<bool>*>* opt_stacks)
      : _View(opt0_array, opt_stacks) {
  }
  bool errexit() { return _Get(option_i::errexit); }
  bool nounset() { return _Get(option_i::nounset); }
  bool pipefail() { return _Get(option_i::pipefail); }
  bool noexec() { return _Get(option_i::noexec); }
  bool xtrace() { return _Get(option_i::xtrace); }
  bool verbose() { return _Get(option_i::verbose); }
  bool noglob() { return _Get(option_i::noglob); }
  bool noclobber() { return _Get(option_i::noclobber); }
  bool posix() { return _Get(option_i::posix); }
  bool vi() { return _Get(option_i::vi); }
  bool emacs() { return _Get(option_i::emacs); }
  bool interactive() { return _Get(option_i::interactive); }
  bool hashall() { return _Get(option_i::hashall); }
  bool failglob() { return _Get(option_i::failglob); }
  bool extglob() { return _Get(option_i::extglob); }
  bool eval_unsafe_arith() { return _Get(option_i::eval_unsafe_arith); }
  bool compat_array() { return _Get(option_i::compat_array); }
  bool verbose_errexit() { return _Get(option_i::verbose_errexit); }
  bool allow_command_sub() { return _Get(option_i::allow_command_sub); }
  bool dynamic_scope() { return _Get(option_i::dynamic_scope); }
  bool nullglob() { return _Get(option_i::nullglob); }
  bool inherit_errexit() { return _Get(option_i::inherit_errexit); }
  bool strict_argv() { return _Get(option_i::strict_argv); }
  bool strict_arith() { return _Get(option_i::strict_arith); }
  bool strict_array() { return _Get(option_i::strict_array); }
  bool strict_control_flow() { return _Get(option_i::strict_control_flow); }
  bool strict_errexit() { return _Get(option_i::strict_errexit); }
  bool strict_nameref() { return _Get(option_i::strict_nameref); }
  bool strict_word_eval() { return _Get(option_i::strict_word_eval); }
  bool strict_tilde() { return _Get(option_i::strict_tilde); }
  bool strict_glob() { return _Get(option_i::strict_glob); }
  bool simple_word_eval() { return _Get(option_i::simple_word_eval); }
  bool dashglob() { return _Get(option_i::dashglob); }
  bool command_sub_errexit() { return _Get(option_i::command_sub_errexit); }
  bool process_sub_fail() { return _Get(option_i::process_sub_fail); }
  bool xtrace_rich() { return _Get(option_i::xtrace_rich); }
  bool simple_echo() { return _Get(option_i::simple_echo); }
  bool simple_eval_builtin() { return _Get(option_i::simple_eval_builtin); }
  bool simple_test_builtin() { return _Get(option_i::simple_test_builtin); }
};
#endif  // OSH_PARSE

}  // namespace optview

#endif  // OPTVIEW_H
