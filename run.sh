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

save-benchmarks() {
  local dest=$1  # e.g. saved/2017-12-20

  # no need to save oheap right now since everything is the same size.

  # TODO: links to ../../web/benchmarks.css and ../../web/table are broken.
  # Could just massage with sed -i '' *.html

  for dir in ../oil/_tmp/{osh-parser,osh-runtime,vm-baseline}; do
    cp -r $dir $dest
  done

  # This data doesn't belong
  rm -r -f -v $dest/*/raw
}

"$@"
