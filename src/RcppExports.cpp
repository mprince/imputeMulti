// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// count_compare
IntegerVector count_compare(IntegerMatrix& x, IntegerMatrix& dat, const std::string& hasNA);
RcppExport SEXP imputeMulti_count_compare(SEXP xSEXP, SEXP datSEXP, SEXP hasNASEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< IntegerMatrix& >::type x(xSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix& >::type dat(datSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type hasNA(hasNASEXP);
    __result = Rcpp::wrap(count_compare(x, dat, hasNA));
    return __result;
END_RCPP
}
// supDist
double supDist(const NumericVector& x, const NumericVector& y);
RcppExport SEXP imputeMulti_supDist(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const NumericVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type y(ySEXP);
    __result = Rcpp::wrap(supDist(x, y));
    return __result;
END_RCPP
}
// marg_comp_compare
List marg_comp_compare(IntegerMatrix& marg, IntegerMatrix& complete, const bool marg_to_complete);
RcppExport SEXP imputeMulti_marg_comp_compare(SEXP margSEXP, SEXP completeSEXP, SEXP marg_to_completeSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< IntegerMatrix& >::type marg(margSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix& >::type complete(completeSEXP);
    Rcpp::traits::input_parameter< const bool >::type marg_to_complete(marg_to_completeSEXP);
    __result = Rcpp::wrap(marg_comp_compare(marg, complete, marg_to_complete));
    return __result;
END_RCPP
}
