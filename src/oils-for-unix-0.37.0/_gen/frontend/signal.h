#ifndef FRONTEND_SIGNAL_H
#define FRONTEND_SIGNAL_H

#include "mycpp/runtime.h"

namespace signal_def {

const int NO_SIGNAL = -1;

int MaxSigNumber();

int GetNumber(BigStr* sig_spec);

BigStr* GetName(int sig_num);

}  // namespace signal_def

#endif  // FRONTEND_SIGNAL_H
