#include "cpp/leaky_osh.h"

using syntax_asdl::arith_expr_t;
using syntax_asdl::word_t;
using tdop::TdopParser;

namespace tdop { 
arith_expr_t* LeftAssign(TdopParser*, word_t*, arith_expr_t*, int);
arith_expr_t* LeftBinaryOp(TdopParser*, word_t*, arith_expr_t*, int);
arith_expr_t* LeftError(TdopParser*, word_t*, arith_expr_t*, int);
arith_expr_t* NullConstant(TdopParser*, word_t*, int);
arith_expr_t* NullError(TdopParser*, word_t*, int);
arith_expr_t* NullParen(TdopParser*, word_t*, int);
arith_expr_t* NullPrefixOp(TdopParser*, word_t*, int);
}

namespace arith_parse { 
arith_expr_t* LeftIncDec(TdopParser*, word_t*, arith_expr_t*, int);
arith_expr_t* LeftIndex(TdopParser*, word_t*, arith_expr_t*, int);
arith_expr_t* LeftTernary(TdopParser*, word_t*, arith_expr_t*, int);
arith_expr_t* NullIncDec(TdopParser*, word_t*, int);
arith_expr_t* NullUnaryMinus(TdopParser*, word_t*, int);
arith_expr_t* NullUnaryPlus(TdopParser*, word_t*, int);
}

namespace arith_parse {

tdop::LeftInfo kLeftLookup[] = {
  { nullptr, 0, 0 },  // empty
  { tdop::LeftError, 0, 0 },
  { tdop::LeftError, 0, 0 },
  { tdop::LeftBinaryOp, 1, 1 },
  { tdop::LeftBinaryOp, 25, 25 },
  { tdop::LeftBinaryOp, 25, 25 },
  { tdop::LeftBinaryOp, 27, 27 },
  { tdop::LeftBinaryOp, 27, 27 },
  { tdop::LeftBinaryOp, 27, 27 },
  { arith_parse::LeftIncDec, 33, 33 },
  { arith_parse::LeftIncDec, 33, 33 },
  { tdop::LeftBinaryOp, 29, 28 },
  { tdop::LeftError, 0, 0 },
  { tdop::LeftError, 0, 0 },
  { arith_parse::LeftIndex, 33, 33 },
  { tdop::LeftError, 0, 0 },
  { tdop::LeftError, 0, 0 },
  { arith_parse::LeftTernary, 5, 4 },
  { tdop::LeftError, 0, 0 },
  { tdop::LeftBinaryOp, 21, 21 },
  { tdop::LeftBinaryOp, 21, 21 },
  { tdop::LeftBinaryOp, 21, 21 },
  { tdop::LeftBinaryOp, 21, 21 },
  { tdop::LeftBinaryOp, 19, 19 },
  { tdop::LeftBinaryOp, 19, 19 },
  { tdop::LeftBinaryOp, 9, 9 },
  { tdop::LeftBinaryOp, 7, 7 },
  { tdop::LeftError, 0, 0 },
  { tdop::LeftBinaryOp, 23, 23 },
  { tdop::LeftBinaryOp, 23, 23 },
  { tdop::LeftBinaryOp, 15, 15 },
  { tdop::LeftBinaryOp, 11, 11 },
  { tdop::LeftBinaryOp, 13, 13 },
  { tdop::LeftError, 0, 0 },
  { tdop::LeftAssign, 3, 2 },
  { tdop::LeftAssign, 3, 2 },
  { tdop::LeftAssign, 3, 2 },
  { tdop::LeftAssign, 3, 2 },
  { tdop::LeftAssign, 3, 2 },
  { tdop::LeftAssign, 3, 2 },
  { tdop::LeftAssign, 3, 2 },
  { tdop::LeftAssign, 3, 2 },
  { tdop::LeftAssign, 3, 2 },
  { tdop::LeftAssign, 3, 2 },
  { tdop::LeftAssign, 3, 2 },
  { tdop::LeftError, 0, 0 },
  { tdop::LeftError, 0, 0 },
};

tdop::NullInfo kNullLookup[] = {
  { nullptr, 0 },  // empty
  { tdop::NullConstant, -1 },
  { tdop::NullError, -1 },
  { tdop::NullError, 0 },
  { arith_parse::NullUnaryPlus, 31 },
  { arith_parse::NullUnaryMinus, 31 },
  { tdop::NullError, 0 },
  { tdop::NullError, 0 },
  { tdop::NullError, 0 },
  { arith_parse::NullIncDec, 31 },
  { arith_parse::NullIncDec, 31 },
  { tdop::NullError, 0 },
  { tdop::NullParen, 0 },
  { tdop::NullError, -1 },
  { tdop::NullError, 0 },
  { tdop::NullError, -1 },
  { tdop::NullError, -1 },
  { tdop::NullError, 0 },
  { tdop::NullError, -1 },
  { tdop::NullError, 0 },
  { tdop::NullError, 0 },
  { tdop::NullError, 0 },
  { tdop::NullError, 0 },
  { tdop::NullError, 0 },
  { tdop::NullError, 0 },
  { tdop::NullError, 0 },
  { tdop::NullError, 0 },
  { tdop::NullPrefixOp, 31 },
  { tdop::NullError, 0 },
  { tdop::NullError, 0 },
  { tdop::NullError, 0 },
  { tdop::NullError, 0 },
  { tdop::NullError, 0 },
  { tdop::NullPrefixOp, 31 },
  { tdop::NullError, 0 },
  { tdop::NullError, 0 },
  { tdop::NullError, 0 },
  { tdop::NullError, 0 },
  { tdop::NullError, 0 },
  { tdop::NullError, 0 },
  { tdop::NullError, 0 },
  { tdop::NullError, 0 },
  { tdop::NullError, 0 },
  { tdop::NullError, 0 },
  { tdop::NullError, 0 },
  { tdop::NullError, -1 },
  { tdop::NullError, -1 },
};

};

