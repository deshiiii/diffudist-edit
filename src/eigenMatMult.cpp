#include <Rcpp.h>
#include <RcppEigen.h>

// [[Rcpp::depends(RcppEigen)]]

//' Matrix Multiplication using RcppEigen
//'
//' Matrix multiplication of three matrices in input.
//' @param A numeric matrix of dimension \eqn{m \times n}
//' @param B numeric matrix of dimension \eqn{n \times l}
//' @return C matrix of dimension \eqn{m \times p} of the row-column product of A and B and C
//' @export
// [[Rcpp::export]]
Eigen::MatrixXd eigenMatMult(Eigen::MatrixXd A, Eigen::MatrixXd B){
  Eigen::MatrixXd C = A * B;

  return(C);
}
