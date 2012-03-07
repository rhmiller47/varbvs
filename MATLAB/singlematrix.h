#ifndef INCLUDE_SINGLEMATRIX
#define INCLUDE_SINGLEMATRIX

#include "mex.h"
#include "matrix.h"
#include "doublevector.h"

// Type definitions.
// -----------------------------------------------------------------
// A dense matrix in single precision format.
typedef struct SingleMatrix {
  mwSize nr;     // Number of rows.
  mwSize nc;     // Number of columns.
  float* elems;  // Matrix elements.
} singlematrix;

// Function declarations.
// -----------------------------------------------------------------
// Get information about a dense, single-precision matrix from a
// MATLAB array.
singlematrix getsinglematrix (const mxArray* ptr);

// Copy the jth column of matrix X into vector y.
void getcolumn (const singlematrix& X, doublevector& y, mwIndex j);

#endif
