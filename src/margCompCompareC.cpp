#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::export]]
NumericMatrix margCompCompareC(NumericMatrix& marg, NumericMatrix& comp) {
  int rowSize = comp.rows();
  int colSize = comp.cols();
  NumericMatrix matchingIndexMatrix(rowSize,colSize);
  // Compare Matrices In Rows Order
  for (int rowsMarg=0; rowsMarg < rowSize; rowsMarg++) {
    int indexMatchCount = 0;
    for (int rowsComp=0; rowsComp < rowSize; rowsComp++) {
      bool match = true;
      for (int col=0; col < colSize; col++) {
        if (marg(rowsMarg,col) != comp(rowsComp,col)) {
          match = false;
          break;
        }
      }
      if (match) {
        matchingIndexMatrix(rowsMarg,indexMatchCount) = rowsComp;
        indexMatchCount++;
      }
    }
  }
  return matchingIndexMatrix;
}
