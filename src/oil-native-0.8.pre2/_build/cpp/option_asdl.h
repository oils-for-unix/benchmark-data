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
  const int nullglob = 15;
  const int inherit_errexit = 16;
  const int strict_argv = 17;
  const int strict_arith = 18;
  const int strict_array = 19;
  const int strict_control_flow = 20;
  const int strict_echo = 21;
  const int strict_errexit = 22;
  const int strict_eval_builtin = 23;
  const int strict_nameref = 24;
  const int strict_word_eval = 25;
  const int strict_backslash = 26;
  const int strict_glob = 27;
  const int simple_word_eval = 28;
  const int dashglob = 29;
  const int more_errexit = 30;
  const int simple_test_builtin = 31;
  const int parse_at = 32;
  const int parse_brace = 33;
  const int parse_index_expr = 34;
  const int parse_paren = 35;
  const int parse_rawc = 36;
  const int parse_set = 37;
  const int parse_equals = 38;
  const int expand_aliases = 39;
  const int extglob = 40;
  const int lastpipe = 41;
  const int progcomp = 42;
  const int histappend = 43;
  const int hostcomplete = 44;
  const int cmdhist = 45;
  const int assoc_expand_once = 46;
  const int autocd = 47;
  const int cdable_vars = 48;
  const int cdspell = 49;
  const int checkhash = 50;
  const int checkjobs = 51;
  const int checkwinsize = 52;
  const int complete_fullquote = 53;
  const int direxpand = 54;
  const int dirspell = 55;
  const int dotglob = 56;
  const int execfail = 57;
  const int extdebug = 58;
  const int extquote = 59;
  const int force_fignore = 60;
  const int globasciiranges = 61;
  const int globstar = 62;
  const int gnu_errfmt = 63;
  const int histreedit = 64;
  const int histverify = 65;
  const int huponexit = 66;
  const int interactive_comments = 67;
  const int lithist = 68;
  const int localvar_inherit = 69;
  const int localvar_unset = 70;
  const int login_shell = 71;
  const int mailwarn = 72;
  const int no_empty_cmd_completion = 73;
  const int nocaseglob = 74;
  const int nocasematch = 75;
  const int progcomp_alias = 76;
  const int promptvars = 77;
  const int restricted_shell = 78;
  const int shift_verbose = 79;
  const int sourcepath = 80;
  const int xpg_echo = 81;
  const int ARRAY_SIZE = 82;
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
  const int push = 47;
  const int append = 48;
  const int write = 49;
  const int getline = 50;
  const int json = 51;
  const int repr = 52;
  const int use = 53;
  const int opts = 54;
  const int ARRAY_SIZE = 55;
};

const char* builtin_str(int tag);

typedef int builtin_t;


}  // namespace option_asdl

#endif  // OPTION_ASDL_H
