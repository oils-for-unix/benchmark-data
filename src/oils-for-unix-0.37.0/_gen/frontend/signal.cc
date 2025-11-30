#include "signal.h"

#include <signal.h>  // SIG*
#include <stdio.h>  // printf

namespace signal_def {

int MaxSigNumber() {
  return 31;
}

int GetNumber(BigStr* sig_spec) {
  int length = len(sig_spec);
  if (length == 0) {
    return NO_SIGNAL;
  }

  const char* data = sig_spec->data_;

  if (length == 3 && memcmp("HUP", data, 3) == 0) {
    return SIGHUP;
  }
  if (length == 3 && memcmp("INT", data, 3) == 0) {
    return SIGINT;
  }
  if (length == 4 && memcmp("QUIT", data, 4) == 0) {
    return SIGQUIT;
  }
  if (length == 3 && memcmp("ILL", data, 3) == 0) {
    return SIGILL;
  }
  if (length == 4 && memcmp("TRAP", data, 4) == 0) {
    return SIGTRAP;
  }
  if (length == 4 && memcmp("ABRT", data, 4) == 0) {
    return SIGABRT;
  }
  if (length == 3 && memcmp("BUS", data, 3) == 0) {
    return SIGBUS;
  }
  if (length == 3 && memcmp("FPE", data, 3) == 0) {
    return SIGFPE;
  }
  if (length == 4 && memcmp("KILL", data, 4) == 0) {
    return SIGKILL;
  }
  if (length == 4 && memcmp("USR1", data, 4) == 0) {
    return SIGUSR1;
  }
  if (length == 4 && memcmp("SEGV", data, 4) == 0) {
    return SIGSEGV;
  }
  if (length == 4 && memcmp("USR2", data, 4) == 0) {
    return SIGUSR2;
  }
  if (length == 4 && memcmp("PIPE", data, 4) == 0) {
    return SIGPIPE;
  }
  if (length == 4 && memcmp("ALRM", data, 4) == 0) {
    return SIGALRM;
  }
  if (length == 4 && memcmp("TERM", data, 4) == 0) {
    return SIGTERM;
  }
  if (length == 4 && memcmp("CHLD", data, 4) == 0) {
    return SIGCHLD;
  }
  if (length == 4 && memcmp("CONT", data, 4) == 0) {
    return SIGCONT;
  }
  if (length == 4 && memcmp("STOP", data, 4) == 0) {
    return SIGSTOP;
  }
  if (length == 4 && memcmp("TSTP", data, 4) == 0) {
    return SIGTSTP;
  }
  if (length == 4 && memcmp("TTIN", data, 4) == 0) {
    return SIGTTIN;
  }
  if (length == 4 && memcmp("TTOU", data, 4) == 0) {
    return SIGTTOU;
  }
  if (length == 3 && memcmp("URG", data, 3) == 0) {
    return SIGURG;
  }
  if (length == 4 && memcmp("XCPU", data, 4) == 0) {
    return SIGXCPU;
  }
  if (length == 4 && memcmp("XFSZ", data, 4) == 0) {
    return SIGXFSZ;
  }
  if (length == 6 && memcmp("VTALRM", data, 6) == 0) {
    return SIGVTALRM;
  }
  if (length == 5 && memcmp("WINCH", data, 5) == 0) {
    return SIGWINCH;
  }
  if (length == 3 && memcmp("SYS", data, 3) == 0) {
    return SIGSYS;
  }
  return NO_SIGNAL;
}

GLOBAL_STR(kSIGHUP, "SIGHUP");
GLOBAL_STR(kSIGINT, "SIGINT");
GLOBAL_STR(kSIGQUIT, "SIGQUIT");
GLOBAL_STR(kSIGILL, "SIGILL");
GLOBAL_STR(kSIGTRAP, "SIGTRAP");
GLOBAL_STR(kSIGABRT, "SIGABRT");
GLOBAL_STR(kSIGBUS, "SIGBUS");
GLOBAL_STR(kSIGFPE, "SIGFPE");
GLOBAL_STR(kSIGKILL, "SIGKILL");
GLOBAL_STR(kSIGUSR1, "SIGUSR1");
GLOBAL_STR(kSIGSEGV, "SIGSEGV");
GLOBAL_STR(kSIGUSR2, "SIGUSR2");
GLOBAL_STR(kSIGPIPE, "SIGPIPE");
GLOBAL_STR(kSIGALRM, "SIGALRM");
GLOBAL_STR(kSIGTERM, "SIGTERM");
GLOBAL_STR(kSIGCHLD, "SIGCHLD");
GLOBAL_STR(kSIGCONT, "SIGCONT");
GLOBAL_STR(kSIGSTOP, "SIGSTOP");
GLOBAL_STR(kSIGTSTP, "SIGTSTP");
GLOBAL_STR(kSIGTTIN, "SIGTTIN");
GLOBAL_STR(kSIGTTOU, "SIGTTOU");
GLOBAL_STR(kSIGURG, "SIGURG");
GLOBAL_STR(kSIGXCPU, "SIGXCPU");
GLOBAL_STR(kSIGXFSZ, "SIGXFSZ");
GLOBAL_STR(kSIGVTALRM, "SIGVTALRM");
GLOBAL_STR(kSIGWINCH, "SIGWINCH");
GLOBAL_STR(kSIGSYS, "SIGSYS");
BigStr* GetName(int sig_num) {
  switch (sig_num) {
  case 1:
    return kSIGHUP;
    break;
  case 2:
    return kSIGINT;
    break;
  case 3:
    return kSIGQUIT;
    break;
  case 4:
    return kSIGILL;
    break;
  case 5:
    return kSIGTRAP;
    break;
  case 6:
    return kSIGABRT;
    break;
  case 7:
    return kSIGBUS;
    break;
  case 8:
    return kSIGFPE;
    break;
  case 9:
    return kSIGKILL;
    break;
  case 10:
    return kSIGUSR1;
    break;
  case 11:
    return kSIGSEGV;
    break;
  case 12:
    return kSIGUSR2;
    break;
  case 13:
    return kSIGPIPE;
    break;
  case 14:
    return kSIGALRM;
    break;
  case 15:
    return kSIGTERM;
    break;
  case 17:
    return kSIGCHLD;
    break;
  case 18:
    return kSIGCONT;
    break;
  case 19:
    return kSIGSTOP;
    break;
  case 20:
    return kSIGTSTP;
    break;
  case 21:
    return kSIGTTIN;
    break;
  case 22:
    return kSIGTTOU;
    break;
  case 23:
    return kSIGURG;
    break;
  case 24:
    return kSIGXCPU;
    break;
  case 25:
    return kSIGXFSZ;
    break;
  case 26:
    return kSIGVTALRM;
    break;
  case 28:
    return kSIGWINCH;
    break;
  case 31:
    return kSIGSYS;
    break;
  default:
    return nullptr;
  }
}



}  // namespace signal_def
