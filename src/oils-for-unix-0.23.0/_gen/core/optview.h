#ifndef OPTVIEW_H
#define OPTVIEW_H

#include "_gen/frontend/option.asdl.h"
#include "mycpp/runtime.h"

namespace optview {

using option_asdl::option_i;

class _View {
 public:
  _View(List<bool>* opt0_array, List<List<bool>*>* opt_stacks)
      : opt0_array(opt0_array), opt_stacks(opt_stacks) {
  }

  bool _Get(int opt_num) {
    List<bool>* overlay = opt_stacks->at(opt_num);
    if ((overlay == nullptr) or len(overlay) == 0) {
      return opt0_array->at(opt_num);
    } else {
      return overlay->at(-1);
    }
  }

  static constexpr ObjHeader obj_header() {
    return ObjHeader::ClassFixed(field_mask(), sizeof(_View));
  }

  List<bool>* opt0_array;
  List<List<bool>*>* opt_stacks;

  static constexpr uint32_t field_mask() {
    return
      maskbit(offsetof(_View, opt0_array))
    | maskbit(offsetof(_View, opt_stacks));
  }
};

class Parse : public _View {
 public:
  Parse(List<bool>* opt0_array, List<List<bool>*>* opt_stacks)
      : _View(opt0_array, opt_stacks) {
  }
  bool strict_parse_slice() { return _Get(option_i::strict_parse_slice); }
  bool parse_at() { return _Get(option_i::parse_at); }
  bool parse_proc() { return _Get(option_i::parse_proc); }
  bool parse_func() { return _Get(option_i::parse_func); }
  bool parse_brace() { return _Get(option_i::parse_brace); }
  bool parse_bracket() { return _Get(option_i::parse_bracket); }
  bool parse_equals() { return _Get(option_i::parse_equals); }
  bool parse_paren() { return _Get(option_i::parse_paren); }
  bool parse_ysh_string() { return _Get(option_i::parse_ysh_string); }
  bool parse_triple_quote() { return _Get(option_i::parse_triple_quote); }
  bool parse_at_all() { return _Get(option_i::parse_at_all); }
  bool parse_backslash() { return _Get(option_i::parse_backslash); }
  bool parse_backticks() { return _Get(option_i::parse_backticks); }
  bool parse_dollar() { return _Get(option_i::parse_dollar); }
  bool parse_ignored() { return _Get(option_i::parse_ignored); }
  bool parse_sh_arith() { return _Get(option_i::parse_sh_arith); }
  bool parse_dparen() { return _Get(option_i::parse_dparen); }
  bool parse_dbracket() { return _Get(option_i::parse_dbracket); }
  bool parse_bare_word() { return _Get(option_i::parse_bare_word); }
  bool expand_aliases() { return _Get(option_i::expand_aliases); }
};

class Exec : public _View {
 public:
  Exec(List<bool>* opt0_array, List<List<bool>*>* opt_stacks)
      : _View(opt0_array, opt_stacks) {
  }
  bool errexit() { return _Get(option_i::errexit); }
  bool nounset() { return _Get(option_i::nounset); }
  bool pipefail() { return _Get(option_i::pipefail); }
  bool inherit_errexit() { return _Get(option_i::inherit_errexit); }
  bool nullglob() { return _Get(option_i::nullglob); }
  bool verbose_errexit() { return _Get(option_i::verbose_errexit); }
  bool noexec() { return _Get(option_i::noexec); }
  bool xtrace() { return _Get(option_i::xtrace); }
  bool verbose() { return _Get(option_i::verbose); }
  bool noglob() { return _Get(option_i::noglob); }
  bool noclobber() { return _Get(option_i::noclobber); }
  bool errtrace() { return _Get(option_i::errtrace); }
  bool posix() { return _Get(option_i::posix); }
  bool vi() { return _Get(option_i::vi); }
  bool emacs() { return _Get(option_i::emacs); }
  bool interactive() { return _Get(option_i::interactive); }
  bool hashall() { return _Get(option_i::hashall); }
  bool failglob() { return _Get(option_i::failglob); }
  bool extglob() { return _Get(option_i::extglob); }
  bool nocasematch() { return _Get(option_i::nocasematch); }
  bool no_copy_env() { return _Get(option_i::no_copy_env); }
  bool eval_unsafe_arith() { return _Get(option_i::eval_unsafe_arith); }
  bool ignore_flags_not_impl() { return _Get(option_i::ignore_flags_not_impl); }
  bool ignore_opts_not_impl() { return _Get(option_i::ignore_opts_not_impl); }
  bool _allow_command_sub() { return _Get(option_i::_allow_command_sub); }
  bool _allow_process_sub() { return _Get(option_i::_allow_process_sub); }
  bool dynamic_scope() { return _Get(option_i::dynamic_scope); }
  bool redefine_module() { return _Get(option_i::redefine_module); }
  bool _running_trap() { return _Get(option_i::_running_trap); }
  bool _running_hay() { return _Get(option_i::_running_hay); }
  bool _no_debug_trap() { return _Get(option_i::_no_debug_trap); }
  bool _no_err_trap() { return _Get(option_i::_no_err_trap); }
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
  bool xtrace_details() { return _Get(option_i::xtrace_details); }
  bool sigpipe_status_ok() { return _Get(option_i::sigpipe_status_ok); }
  bool redefine_proc_func() { return _Get(option_i::redefine_proc_func); }
  bool simple_echo() { return _Get(option_i::simple_echo); }
  bool simple_eval_builtin() { return _Get(option_i::simple_eval_builtin); }
  bool simple_test_builtin() { return _Get(option_i::simple_test_builtin); }
};

}  // namespace optview

#endif  // OPTVIEW_H
