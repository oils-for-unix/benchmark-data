#ifndef FRONTEND_SIGNAL_H
#define FRONTEND_SIGNAL_H

#include "mycpp/runtime.h"

namespace signal_def {

const int NO_SIGNAL = -1;

void PrintSignals();

int GetNumber(BigStr* sig_spec);

}  // namespace signal_def

#endif  // FRONTEND_SIGNAL_H
