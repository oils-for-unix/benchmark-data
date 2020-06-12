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
  const int verbose_errexit = 19;
  const int nullglob = 20;
  const int inherit_errexit = 21;
  const int strict_argv = 22;
  const int strict_arith = 23;
  const int strict_array = 24;
  const int strict_control_flow = 25;
  const int strict_echo = 26;
  const int strict_errexit = 27;
  const int strict_eval_builtin = 28;
  const int strict_nameref = 29;
  const int strict_word_eval = 30;
  const int strict_backslash = 31;
  const int strict_glob = 32;
  const int simple_word_eval = 33;
  const int dashglob = 34;
  const int more_errexit = 35;
  const int simple_test_builtin = 36;
  const int parse_at = 37;
  const int parse_brace = 38;
  const int parse_index_expr = 39;
  const int parse_paren = 40;
  const int parse_rawc = 41;
  const int parse_ignored = 42;
  const int parse_set = 43;
  const int parse_equals = 44;
  const int parse_tea = 45;
  const int expand_aliases = 46;
  const int lastpipe = 47;
  const int progcomp = 48;
  const int histappend = 49;
  const int hostcomplete = 50;
  const int cmdhist = 51;
  const int assoc_expand_once = 52;
  const int autocd = 53;
  const int cdable_vars = 54;
  const int cdspell = 55;
  const int checkhash = 56;
  const int checkjobs = 57;
  const int checkwinsize = 58;
  const int complete_fullquote = 59;
  const int direxpand = 60;
  const int dirspell = 61;
  const int dotglob = 62;
  const int execfail = 63;
  const int extdebug = 64;
  const int extquote = 65;
  const int force_fignore = 66;
  const int globasciiranges = 67;
  const int globstar = 68;
  const int gnu_errfmt = 69;
  const int histreedit = 70;
  const int histverify = 71;
  const int huponexit = 72;
  const int interactive_comments = 73;
  const int lithist = 74;
  const int localvar_inherit = 75;
  const int localvar_unset = 76;
  const int login_shell = 77;
  const int mailwarn = 78;
  const int no_empty_cmd_completion = 79;
  const int nocaseglob = 80;
  const int nocasematch = 81;
  const int progcomp_alias = 82;
  const int promptvars = 83;
  const int restricted_shell = 84;
  const int shift_verbose = 85;
  const int sourcepath = 86;
  const int xpg_echo = 87;
  const int ARRAY_SIZE = 88;
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
  const int mapfile = 23;
  const int readarray = 24;
  const int cd = 25;
  const int pushd = 26;
  const int popd = 27;
  const int dirs = 28;
  const int pwd = 29;
  const int source = 30;
  const int umask = 31;
  const int wait = 32;
  const int jobs = 33;
  const int fg = 34;
  const int bg = 35;
  const int shopt = 36;
  const int complete = 37;
  const int compgen = 38;
  const int compopt = 39;
  const int compadjust = 40;
  const int getopts = 41;
  const int command = 42;
  const int type = 43;
  const int hash = 44;
  const int help = 45;
  const int history = 46;
  const int alias = 47;
  const int unalias = 48;
  const int bind = 49;
  const int push = 50;
  const int append = 51;
  const int write = 52;
  const int getline = 53;
  const int json = 54;
  const int repr = 55;
  const int use = 56;
  const int opts = 57;
  const int cat = 58;
  const int ARRAY_SIZE = 59;
};

const char* builtin_str(int tag);

typedef int builtin_t;


}  // namespace option_asdl

#endif  // OPTION_ASDL_H
