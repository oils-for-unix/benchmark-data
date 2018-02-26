#!/bin/bash
#
# Usage:
#   ./run.sh <function name>

set -o nounset
set -o pipefail
set -o errexit

# There are a handful of files that are different.  This is because of
# nondeterminism in Python's own bytecode generation!
#
# As far as I remember, PYTHONHASHSEED=0 does NOT fix it!

compare() {
  cdiff {flanders,lisa}-pyc-bytes.txt
}

"$@"
