#include "signal.h"

#include <signal.h>  // SIG*
#include <stdio.h>  // printf

namespace signal_def {


void PrintSignals() {
#ifdef SIGHUP
  printf("%2d SIGHUP\n", SIGHUP);
#endif
#ifdef SIGINT
  printf("%2d SIGINT\n", SIGINT);
#endif
#ifdef SIGQUIT
  printf("%2d SIGQUIT\n", SIGQUIT);
#endif
#ifdef SIGILL
  printf("%2d SIGILL\n", SIGILL);
#endif
#ifdef SIGTRAP
  printf("%2d SIGTRAP\n", SIGTRAP);
#endif
#ifdef SIGABRT
  printf("%2d SIGABRT\n", SIGABRT);
#endif
#ifdef SIGBUS
  printf("%2d SIGBUS\n", SIGBUS);
#endif
#ifdef SIGFPE
  printf("%2d SIGFPE\n", SIGFPE);
#endif
#ifdef SIGUSR1
  printf("%2d SIGUSR1\n", SIGUSR1);
#endif
#ifdef SIGSEGV
  printf("%2d SIGSEGV\n", SIGSEGV);
#endif
#ifdef SIGUSR2
  printf("%2d SIGUSR2\n", SIGUSR2);
#endif
#ifdef SIGPIPE
  printf("%2d SIGPIPE\n", SIGPIPE);
#endif
#ifdef SIGALRM
  printf("%2d SIGALRM\n", SIGALRM);
#endif
#ifdef SIGTERM
  printf("%2d SIGTERM\n", SIGTERM);
#endif
#ifdef SIGCHLD
  printf("%2d SIGCHLD\n", SIGCHLD);
#endif
#ifdef SIGCONT
  printf("%2d SIGCONT\n", SIGCONT);
#endif
#ifdef SIGSTOP
  printf("%2d SIGSTOP\n", SIGSTOP);
#endif
#ifdef SIGTSTP
  printf("%2d SIGTSTP\n", SIGTSTP);
#endif
#ifdef SIGTTIN
  printf("%2d SIGTTIN\n", SIGTTIN);
#endif
#ifdef SIGTTOU
  printf("%2d SIGTTOU\n", SIGTTOU);
#endif
#ifdef SIGURG
  printf("%2d SIGURG\n", SIGURG);
#endif
#ifdef SIGXCPU
  printf("%2d SIGXCPU\n", SIGXCPU);
#endif
#ifdef SIGXFSZ
  printf("%2d SIGXFSZ\n", SIGXFSZ);
#endif
#ifdef SIGVTALRM
  printf("%2d SIGVTALRM\n", SIGVTALRM);
#endif
#ifdef SIGWINCH
  printf("%2d SIGWINCH\n", SIGWINCH);
#endif
#ifdef SIGSYS
  printf("%2d SIGSYS\n", SIGSYS);
#endif
}

int GetNumber(Str* sig_spec) {
  int length = len(sig_spec);
  if (length == 0) {
    return NO_SIGNAL;
  }

  const char* data = sig_spec->data_;

  if ((length == 6 && memcmp("SIGHUP", data, 6) == 0) ||
      (length == 3 && memcmp("HUP", data, 3) == 0)) {
    return SIGHUP;
  }
  if ((length == 6 && memcmp("SIGINT", data, 6) == 0) ||
      (length == 3 && memcmp("INT", data, 3) == 0)) {
    return SIGINT;
  }
  if ((length == 7 && memcmp("SIGQUIT", data, 7) == 0) ||
      (length == 4 && memcmp("QUIT", data, 4) == 0)) {
    return SIGQUIT;
  }
  if ((length == 6 && memcmp("SIGILL", data, 6) == 0) ||
      (length == 3 && memcmp("ILL", data, 3) == 0)) {
    return SIGILL;
  }
  if ((length == 7 && memcmp("SIGTRAP", data, 7) == 0) ||
      (length == 4 && memcmp("TRAP", data, 4) == 0)) {
    return SIGTRAP;
  }
  if ((length == 7 && memcmp("SIGABRT", data, 7) == 0) ||
      (length == 4 && memcmp("ABRT", data, 4) == 0)) {
    return SIGABRT;
  }
  if ((length == 6 && memcmp("SIGBUS", data, 6) == 0) ||
      (length == 3 && memcmp("BUS", data, 3) == 0)) {
    return SIGBUS;
  }
  if ((length == 6 && memcmp("SIGFPE", data, 6) == 0) ||
      (length == 3 && memcmp("FPE", data, 3) == 0)) {
    return SIGFPE;
  }
  if ((length == 7 && memcmp("SIGUSR1", data, 7) == 0) ||
      (length == 4 && memcmp("USR1", data, 4) == 0)) {
    return SIGUSR1;
  }
  if ((length == 7 && memcmp("SIGSEGV", data, 7) == 0) ||
      (length == 4 && memcmp("SEGV", data, 4) == 0)) {
    return SIGSEGV;
  }
  if ((length == 7 && memcmp("SIGUSR2", data, 7) == 0) ||
      (length == 4 && memcmp("USR2", data, 4) == 0)) {
    return SIGUSR2;
  }
  if ((length == 7 && memcmp("SIGPIPE", data, 7) == 0) ||
      (length == 4 && memcmp("PIPE", data, 4) == 0)) {
    return SIGPIPE;
  }
  if ((length == 7 && memcmp("SIGALRM", data, 7) == 0) ||
      (length == 4 && memcmp("ALRM", data, 4) == 0)) {
    return SIGALRM;
  }
  if ((length == 7 && memcmp("SIGTERM", data, 7) == 0) ||
      (length == 4 && memcmp("TERM", data, 4) == 0)) {
    return SIGTERM;
  }
  if ((length == 7 && memcmp("SIGCHLD", data, 7) == 0) ||
      (length == 4 && memcmp("CHLD", data, 4) == 0)) {
    return SIGCHLD;
  }
  if ((length == 7 && memcmp("SIGCONT", data, 7) == 0) ||
      (length == 4 && memcmp("CONT", data, 4) == 0)) {
    return SIGCONT;
  }
  if ((length == 7 && memcmp("SIGSTOP", data, 7) == 0) ||
      (length == 4 && memcmp("STOP", data, 4) == 0)) {
    return SIGSTOP;
  }
  if ((length == 7 && memcmp("SIGTSTP", data, 7) == 0) ||
      (length == 4 && memcmp("TSTP", data, 4) == 0)) {
    return SIGTSTP;
  }
  if ((length == 7 && memcmp("SIGTTIN", data, 7) == 0) ||
      (length == 4 && memcmp("TTIN", data, 4) == 0)) {
    return SIGTTIN;
  }
  if ((length == 7 && memcmp("SIGTTOU", data, 7) == 0) ||
      (length == 4 && memcmp("TTOU", data, 4) == 0)) {
    return SIGTTOU;
  }
  if ((length == 6 && memcmp("SIGURG", data, 6) == 0) ||
      (length == 3 && memcmp("URG", data, 3) == 0)) {
    return SIGURG;
  }
  if ((length == 7 && memcmp("SIGXCPU", data, 7) == 0) ||
      (length == 4 && memcmp("XCPU", data, 4) == 0)) {
    return SIGXCPU;
  }
  if ((length == 7 && memcmp("SIGXFSZ", data, 7) == 0) ||
      (length == 4 && memcmp("XFSZ", data, 4) == 0)) {
    return SIGXFSZ;
  }
  if ((length == 9 && memcmp("SIGVTALRM", data, 9) == 0) ||
      (length == 6 && memcmp("VTALRM", data, 6) == 0)) {
    return SIGVTALRM;
  }
  if ((length == 8 && memcmp("SIGWINCH", data, 8) == 0) ||
      (length == 5 && memcmp("WINCH", data, 5) == 0)) {
    return SIGWINCH;
  }
  if ((length == 6 && memcmp("SIGSYS", data, 6) == 0) ||
      (length == 3 && memcmp("SYS", data, 3) == 0)) {
    return SIGSYS;
  }
  return NO_SIGNAL;
}

}  // namespace signal_def
