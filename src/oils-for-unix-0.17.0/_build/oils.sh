#!/usr/bin/env bash
#
# _build/oils.sh - generated by build/ninja_main.py
#
# Usage:
#   _build/oils.sh COMPILER? VARIANT? SKIP_REBUILD?
#
#   COMPILER: 'cxx' for system compiler, or 'clang' [default cxx]
#   VARIANT: 'dbg' or 'opt' [default dbg]
#   SKIP_REBUILD: if non-empty, checks if the output exists before building
#
# Could run with /bin/sh, but use bash for now, bceause dash has bad errors
# messages!

. build/ninja-rules-cpp.sh

OILS_PARALLEL_BUILD=${OILS_PARALLEL_BUILD:-1}

_compile_one() {
  local src=$4

  echo "CXX $src"

  # Delegate to function in build/ninja-rules-cpp.sh
  if test "${_do_fork:-}" = 1; then
    compile_one "$@" &   # we will wait later
  else
    compile_one "$@"
  fi
}

main() {
  ### Compile oils-for-unix into _bin/$compiler-$variant-sh/ (not with ninja)

  local compiler=${1:-cxx}   # default is system compiler
  local variant=${2:-opt}    # default is optimized build
  local skip_rebuild=${3:-}  # if the output exists, skip build'

  local out_dir=_bin/$compiler-$variant-sh
  local out=$out_dir/oils-for-unix

  if test -n "$skip_rebuild" && test -f "$out"; then
    echo
    echo "$0: SKIPPING build because $out exists"
    echo
    return
  fi

  echo
  echo "$0: Building oils-for-unix: $out"
  echo

  mkdir -p \
    "_bin/$compiler-$variant-sh" \
    "_build/obj/$compiler-$variant-sh/_gen/bin" \
    "_build/obj/$compiler-$variant-sh/_gen/core" \
    "_build/obj/$compiler-$variant-sh/_gen/frontend" \
    "_build/obj/$compiler-$variant-sh/_gen/osh" \
    "_build/obj/$compiler-$variant-sh/_gen/ysh" \
    "_build/obj/$compiler-$variant-sh/cpp" \
    "_build/obj/$compiler-$variant-sh/mycpp"

  # Potentially fork this translation unit with &
  _do_fork=$OILS_PARALLEL_BUILD _compile_one "$compiler" "$variant" "" \
    _gen/bin/oils_for_unix.mycpp.cc "_build/obj/$compiler-$variant-sh/_gen/bin/oils_for_unix.mycpp.o"

   _compile_one "$compiler" "$variant" "" \
    _gen/core/runtime.asdl.cc "_build/obj/$compiler-$variant-sh/_gen/core/runtime.asdl.o"

   _compile_one "$compiler" "$variant" "" \
    _gen/frontend/arg_types.cc "_build/obj/$compiler-$variant-sh/_gen/frontend/arg_types.o"

   _compile_one "$compiler" "$variant" "" \
    _gen/frontend/consts.cc "_build/obj/$compiler-$variant-sh/_gen/frontend/consts.o"

   _compile_one "$compiler" "$variant" "" \
    _gen/frontend/id_kind.asdl.cc "_build/obj/$compiler-$variant-sh/_gen/frontend/id_kind.asdl.o"

   _compile_one "$compiler" "$variant" "" \
    _gen/frontend/signal.cc "_build/obj/$compiler-$variant-sh/_gen/frontend/signal.o"

   _compile_one "$compiler" "$variant" "" \
    _gen/frontend/syntax.asdl.cc "_build/obj/$compiler-$variant-sh/_gen/frontend/syntax.asdl.o"

   _compile_one "$compiler" "$variant" "" \
    _gen/osh/arith_parse.cc "_build/obj/$compiler-$variant-sh/_gen/osh/arith_parse.o"

   _compile_one "$compiler" "$variant" "" \
    _gen/ysh/grammar_tables.cc "_build/obj/$compiler-$variant-sh/_gen/ysh/grammar_tables.o"

   _compile_one "$compiler" "$variant" "" \
    cpp/core.cc "_build/obj/$compiler-$variant-sh/cpp/core.o"

   _compile_one "$compiler" "$variant" "" \
    cpp/fanos.cc "_build/obj/$compiler-$variant-sh/cpp/fanos.o"

   _compile_one "$compiler" "$variant" "" \
    cpp/fanos_shared.c "_build/obj/$compiler-$variant-sh/cpp/fanos_shared.o"

   _compile_one "$compiler" "$variant" "" \
    cpp/frontend_flag_spec.cc "_build/obj/$compiler-$variant-sh/cpp/frontend_flag_spec.o"

   _compile_one "$compiler" "$variant" "" \
    cpp/frontend_match.cc "_build/obj/$compiler-$variant-sh/cpp/frontend_match.o"

   _compile_one "$compiler" "$variant" "" \
    cpp/frontend_pyreadline.cc "_build/obj/$compiler-$variant-sh/cpp/frontend_pyreadline.o"

   _compile_one "$compiler" "$variant" "" \
    cpp/libc.cc "_build/obj/$compiler-$variant-sh/cpp/libc.o"

   _compile_one "$compiler" "$variant" "" \
    cpp/osh.cc "_build/obj/$compiler-$variant-sh/cpp/osh.o"

   _compile_one "$compiler" "$variant" "" \
    cpp/osh_tdop.cc "_build/obj/$compiler-$variant-sh/cpp/osh_tdop.o"

   _compile_one "$compiler" "$variant" "" \
    cpp/pgen2.cc "_build/obj/$compiler-$variant-sh/cpp/pgen2.o"

   _compile_one "$compiler" "$variant" "" \
    cpp/pylib.cc "_build/obj/$compiler-$variant-sh/cpp/pylib.o"

   _compile_one "$compiler" "$variant" "" \
    cpp/stdlib.cc "_build/obj/$compiler-$variant-sh/cpp/stdlib.o"

   _compile_one "$compiler" "$variant" "" \
    mycpp/bump_leak_heap.cc "_build/obj/$compiler-$variant-sh/mycpp/bump_leak_heap.o"

   _compile_one "$compiler" "$variant" "" \
    mycpp/cheney_heap.cc "_build/obj/$compiler-$variant-sh/mycpp/cheney_heap.o"

   _compile_one "$compiler" "$variant" "" \
    mycpp/gc_builtins.cc "_build/obj/$compiler-$variant-sh/mycpp/gc_builtins.o"

   _compile_one "$compiler" "$variant" "" \
    mycpp/gc_mylib.cc "_build/obj/$compiler-$variant-sh/mycpp/gc_mylib.o"

   _compile_one "$compiler" "$variant" "" \
    mycpp/gc_str.cc "_build/obj/$compiler-$variant-sh/mycpp/gc_str.o"

   _compile_one "$compiler" "$variant" "" \
    mycpp/mark_sweep_heap.cc "_build/obj/$compiler-$variant-sh/mycpp/mark_sweep_heap.o"

  # wait for the translation unit before linking
  echo WAIT
  time -p wait

  echo "LINK $out"
  link "$compiler" "$variant" "$out" \
    "_build/obj/$compiler-$variant-sh/_gen/bin/oils_for_unix.mycpp.o" \
    "_build/obj/$compiler-$variant-sh/_gen/core/runtime.asdl.o" \
    "_build/obj/$compiler-$variant-sh/_gen/frontend/arg_types.o" \
    "_build/obj/$compiler-$variant-sh/_gen/frontend/consts.o" \
    "_build/obj/$compiler-$variant-sh/_gen/frontend/id_kind.asdl.o" \
    "_build/obj/$compiler-$variant-sh/_gen/frontend/signal.o" \
    "_build/obj/$compiler-$variant-sh/_gen/frontend/syntax.asdl.o" \
    "_build/obj/$compiler-$variant-sh/_gen/osh/arith_parse.o" \
    "_build/obj/$compiler-$variant-sh/_gen/ysh/grammar_tables.o" \
    "_build/obj/$compiler-$variant-sh/cpp/core.o" \
    "_build/obj/$compiler-$variant-sh/cpp/fanos.o" \
    "_build/obj/$compiler-$variant-sh/cpp/fanos_shared.o" \
    "_build/obj/$compiler-$variant-sh/cpp/frontend_flag_spec.o" \
    "_build/obj/$compiler-$variant-sh/cpp/frontend_match.o" \
    "_build/obj/$compiler-$variant-sh/cpp/frontend_pyreadline.o" \
    "_build/obj/$compiler-$variant-sh/cpp/libc.o" \
    "_build/obj/$compiler-$variant-sh/cpp/osh.o" \
    "_build/obj/$compiler-$variant-sh/cpp/osh_tdop.o" \
    "_build/obj/$compiler-$variant-sh/cpp/pgen2.o" \
    "_build/obj/$compiler-$variant-sh/cpp/pylib.o" \
    "_build/obj/$compiler-$variant-sh/cpp/stdlib.o" \
    "_build/obj/$compiler-$variant-sh/mycpp/bump_leak_heap.o" \
    "_build/obj/$compiler-$variant-sh/mycpp/cheney_heap.o" \
    "_build/obj/$compiler-$variant-sh/mycpp/gc_builtins.o" \
    "_build/obj/$compiler-$variant-sh/mycpp/gc_mylib.o" \
    "_build/obj/$compiler-$variant-sh/mycpp/gc_str.o" \
    "_build/obj/$compiler-$variant-sh/mycpp/mark_sweep_heap.o"

  local out_name=oils-for-unix
  if test "$variant" = opt; then
    strip -o "$out.stripped" "$out"
    out_name=$out_name.stripped
  fi

  cd $out_dir
  for symlink in osh ysh; do
    ln -s -f -v $out_name $symlink
  done
}

main "$@"

