% Generated by roxygen2 (4.1.1): do not edit by hand
% Please edit documentation in R/class_imputeMulti.R
\docType{class}
\name{imputeMulti-class}
\alias{imputeMulti-class}
\title{Class "imputeMulti"}
\description{
A multivariate multinomial model imputed by EM or Data Augmentation is
represented as a \code{\linkS4class{mod_imputeMulti}} object. A complete
dataset and model is represented as an \code{\linkS4class{imputeMulti}} object.
Inherits from \code{mod_imputeMulti}. Additional slots are supplied for (1) the
call to \code{multinomial_impute}; (2) the missing and imputed data;
and (3) the number of observations with missing values.
}
\section{Objects from the class}{
 Objects are created by calls to
\code{\link{multinomial_impute}}, \code{\link{multinomial_em}}, or
\code{\link{multinomial_data_aug}}.
}
\seealso{
\code{\link{multinomial_impute}}, \code{\link{multinomial_em}},
\code{\link{multinomial_data_aug}}
}

