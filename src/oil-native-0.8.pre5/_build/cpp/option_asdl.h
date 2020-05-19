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
  const int eval_unsafe_arith = 15;
  const int parse_dynamic_arith = 16;
  const int compat_array = 17;
  const int nullglob = 18;
  const int inherit_errexit = 19;
  const int strict_argv = 20;
  const int strict_arith = 21;
  const int strict_array = 22;
  const int strict_control_flow = 23;
  const int strict_echo = 24;
  const int strict_errexit = 25;
  const int strict_eval_builtin = 26;
  const int strict_nameref = 27;
  const int strict_word_eval = 28;
  const int strict_backslash = 29;
  const int strict_glob = 30;
  const int simple_word_eval = 31;
  const int dashglob = 32;
  const int more_errexit = 33;
  const int simple_test_builtin = 34;
  const int parse_at = 35;
  const int parse_brace = 36;
  const int parse_index_expr = 37;
  const int parse_paren = 38;
  const int parse_rawc = 39;
  const int parse_ignored = 40;
  const int parse_set = 41;
  const int parse_equals = 42;
  const int expand_aliases = 43;
  const int extglob = 44;
  const int lastpipe = 45;
  const int progcomp = 46;
  const int histappend = 47;
  const int hostcomplete = 48;
  const int cmdhist = 49;
  const int assoc_expand_once = 50;
  const int autocd = 51;
  const int cdable_vars = 52;
  const int cdspell = 53;
  const int checkhash = 54;
  const int checkjobs = 55;
  const int checkwinsize = 56;
  const int complete_fullquote = 57;
  const int direxpand = 58;
  const int dirspell = 59;
  const int dotglob = 60;
  const int execfail = 61;
  const int extdebug = 62;
  const int extquote = 63;
  const int force_fignore = 64;
  const int globasciiranges = 65;
  const int globstar = 66;
  const int gnu_errfmt = 67;
  const int histreedit = 68;
  const int histverify = 69;
  const int huponexit = 70;
  const int interactive_comments = 71;
  const int lithist = 72;
  const int localvar_inherit = 73;
  const int localvar_unset = 74;
  const int login_shell = 75;
  const int mailwarn = 76;
  const int no_empty_cmd_completion = 77;
  const int nocaseglob = 78;
  const int nocasematch = 79;
  const int progcomp_alias = 80;
  const int promptvars = 81;
  const int restricted_shell = 82;
  const int shift_verbose = 83;
  const int sourcepath = 84;
  const int xpg_echo = 85;
  const int ARRAY_SIZE = 86;
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
