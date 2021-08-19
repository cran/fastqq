// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// drop_dense_internal
DataFrame drop_dense_internal(NumericVector sorted_sample, NumericVector sorted_theoretical, int N_hard);
RcppExport SEXP _fastqq_drop_dense_internal(SEXP sorted_sampleSEXP, SEXP sorted_theoreticalSEXP, SEXP N_hardSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type sorted_sample(sorted_sampleSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type sorted_theoretical(sorted_theoreticalSEXP);
    Rcpp::traits::input_parameter< int >::type N_hard(N_hardSEXP);
    rcpp_result_gen = Rcpp::wrap(drop_dense_internal(sorted_sample, sorted_theoretical, N_hard));
    return rcpp_result_gen;
END_RCPP
}
// drop_dense_qq
DataFrame drop_dense_qq(NumericVector sample, int N_hard);
RcppExport SEXP _fastqq_drop_dense_qq(SEXP sampleSEXP, SEXP N_hardSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type sample(sampleSEXP);
    Rcpp::traits::input_parameter< int >::type N_hard(N_hardSEXP);
    rcpp_result_gen = Rcpp::wrap(drop_dense_qq(sample, N_hard));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_fastqq_drop_dense_internal", (DL_FUNC) &_fastqq_drop_dense_internal, 3},
    {"_fastqq_drop_dense_qq", (DL_FUNC) &_fastqq_drop_dense_qq, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_fastqq(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}