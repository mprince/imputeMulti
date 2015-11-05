#include <Rcpp.h>
using namespace Rcpp;

//’ The length of a string (in characters).
//’
//’ @param str input character vector
//’ @param characters in each element of the vector
//’ @return
// [[Rcpp::export]]
double supDistCpp(NumericVector& x, NumericVector& y) {
  int size = x.size();
  NumericVector n(size);
  for (int i = 0; i < size; i++)
    n[i] = std::abs(x[i] - y[i]);
  double result = n[0];
  for (int i =1; i < size; i++)
    if (n[i] > result)
      result = n[i];
    return result;
}
