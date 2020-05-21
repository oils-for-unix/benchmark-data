#ifndef OPTION_ASDL_H
#define OPTION_ASDL_H

namespace option_asdl {
namespace option_i {
  const int errexit = 1;
  const int nounset = 2;
  const int hashall = 3;
  const int pipefail = 4;
  const int noexec = 5;
  const int xtrace = 6;
  const int verbose = 7;
  const int noglob = 8;
  const int noclobber = 9;
  const int posix = 10;
  const int vi = 11;
  const int emacs = 12;
  const int interactive = 13;
  const int failglob = 14;
  const int extglob = 15;
  const int eval_unsafe_arith = 16;
  const int parse_dynamic_arith = 17;
  const int compat_array = 18;
  const int nullglob = 19;
  const int inherit_errexit = 20;
  const int strict_argv = 21;
  const int strict_arith = 22;
  const int strict_array = 23;
  const int strict_control_flow = 24;
  const int strict_echo = 25;
  const int strict_errexit = 26;
  const int strict_eval_builtin = 27;
  const int strict_nameref = 28;
  const int strict_word_eval = 29;
  const int strict_backslash = 30;
  const int strict_glob = 31;
  const int simple_word_eval = 32;
  const int dashglob = 33;
  const int more_errexit = 34;
  const int simple_test_builtin = 35;
  const int parse_at = 36;
  const int parse_brace = 37;
  const int parse_index_expr = 38;
  const int parse_paren = 39;
  const int parse_rawc = 40;
  const int parse_ignored = 41;
  const int parse_set = 42;
  const int parse_equals = 43;
  const int parse_tea = 44;
  const int expand_aliases = 45;
  const int lastpipe = 46;
  const int progcomp = 47;
  const int histappend = 48;
  const int hostcomplete = 49;
  const int cmdhist = 50;
  const int assoc_expand_once = 51;
  const int autocd = 52;
  const int cdable_vars = 53;
  const int cdspell = 54;
  const int checkhash = 55;
  const int checkjobs = 56;
  const int checkwinsize = 57;
  const int complete_fullquote = 58;
  const int direxpand = 59;
  const int dirspell = 60;
  const int dotglob = 61;
  const int execfail = 62;
  const int extdebug = 63;
  const int extquote = 64;
  const int force_fignore = 65;
  const int globasciiranges = 66;
  const int globstar = 67;
  const int gnu_errfmt = 68;
  const int histreedit = 69;
  const int histverify = 70;
  const int huponexit = 71;
  const int interactive_comments = 72;
  const int lithist = 73;
  const int localvar_inherit = 74;
  const int localvar_unset = 75;
  const int login_shell = 76;
  const int mailwarn = 77;
  const int no_empty_cmd_completion = 78;
  const int nocaseglob = 79;
  const int nocasematch = 80;
  const int progcomp_alias = 81;
  const int promptvars = 82;
  const int restricted_shell = 83;
  const int shift_verbose = 84;
  const int sourcepath = 85;
  const int xpg_echo = 86;
  const int ARRAY_SIZE = 87;
};

const char* option_str(int tag);

typedef int option_t;

namespace builtin_i {
  const int colon = 1;
  const int dot = 2;
  const int exec_ = 3;
  const int eval = 4;
  const int set = 5;
  const int shift = 6;
  const int times = 7;
  const int trap = 8;
  const int unset = 9;
  const int builtin = 10;
  const int readonly = 11;
  const int local = 12;
  const int declare = 13;
  const int typeset = 14;
  const int export_ = 15;
  const int test = 16;
  const int bracket = 17;
  const int true_ = 18;
  const int false_ = 19;
  const int read = 20;
  const int echo = 21;
  const int printf = 22;
  const int cd = 23;
  const int pushd = 24;
  const int popd = 25;
  const int dirs = 26;
  const int pwd = 27;
  const int source = 28;
  const int umask = 29;
  const int wait = 30;
  const int jobs = 31;
  const int fg = 32;
  const int bg = 33;
  const int shopt = 34;
  const int complete = 35;
  const int compgen = 36;
  const int compopt = 37;
  const int compadjust = 38;
  const int getopts = 39;
  const int command = 40;
  const int type = 41;
  const int hash = 42;
  const int help = 43;
  const int history = 44;
  const int alias = 45;
  const int unalias = 46;
  const int bind = 47;
  const int push = 48;
  const int append = 49;
  const int write = 50;
  const int getline = 51;
  const int json = 52;
  const int repr = 53;
  const int use = 54;
  const int opts = 55;
  const int cat = 56;
  const int ARRAY_SIZE = 57;
};

const char* builtin_str(int tag);

typedef int builtin_t;


}  // namespace option_asdl

#endif  // OPTION_ASDL_H
