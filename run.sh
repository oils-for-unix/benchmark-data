#!/bin/bash
#
# Usage:
#   ./run.sh <function name>

set -o nounset
set -o pipefail
set -o errexit

status() {
  git status -s
}

uncommitted() {
  status | awk '$1 == "??" { print $2 }'
}

remove-uncommitted() {
  uncommitted | xargs --no-run-if-empty -- rm -r -f --verbose
}

"$@"
