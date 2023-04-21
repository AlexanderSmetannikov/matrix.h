#include <errno.h>
#include <string.h>

#include "../s21_matrix.h"

int readmatrix(matrix_t* A, const char* filename) {
  FILE* pf;
  pf = fopen(filename, "r");
  if (pf == NULL) {
    fprintf(stderr, "could not open %s: %s\n", filename, strerror(errno));
    return 0;
  }

  for (int i = 0; i < A->rows; ++i) {
    for (int j = 0; j < A->columns; ++j) fscanf(pf, "%lf", &A->matrix[i][j]);
  }

  fclose(pf);
  return 1;
}