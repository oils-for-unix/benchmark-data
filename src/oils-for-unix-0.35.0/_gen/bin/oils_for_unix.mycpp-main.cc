#include "mycpp/runtime.h"

namespace oils_for_unix {
int main(List<BigStr*>* argv);
}

int main(int argc, char **argv) {
  mylib::InitCppOnly();  // Initializes gHeap

  auto* args = Alloc<List<BigStr*>>();
  for (int i = 0; i < argc; ++i) {
    args->append(StrFromC(argv[i]));
  }

  int status = oils_for_unix::main(args);

  gHeap.ProcessExit();

  return status;
}
