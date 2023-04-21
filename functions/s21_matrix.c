#include "../s21_matrix.h"

int s21_create_matrix(int rows, int columns, matrix_t *result) {
  int err = OK;
  if (result && rows > 0 && columns > 0) {
    result->rows = rows;
    result->columns = columns;
    result->matrix = (double **)calloc(rows, sizeof(double *));
    for (int i = 0; i < rows; i++) {
      if (!(result->matrix[i] = (double *)calloc(columns, sizeof(double)))) {
        err = INCORRECT_MATRIX;
        for (int j = 0; j <= i; j++) free(result->matrix[j]);
        free(result->matrix);
      }
    }
  } else
    err = INCORRECT_MATRIX;
  return err;
}

void s21_remove_matrix(matrix_t *A) {
  if (A) {
    if (A->matrix) {
      for (int i = 0; i < N; i++) {
        free(A->matrix[i]);
      }
      free(A->matrix);
      A->matrix = NULL;
    }
    if (M) M = 0;
    if (N) N = 0;
  }
}

int is_exist(matrix_t *A) {
  return (A != NULL && A->matrix != NULL && M > 0 && N > 0);
}

int s21_eq_matrix(matrix_t *A, matrix_t *B) {
  int err = 1;
  if (!is_exist(A) || !is_exist(B)) {
    err = INCORRECT_MATRIX;
  } else if (M != B->columns || N != B->rows)
    err = ERROR;
  else {
    for (int i = 0; i < N && err; i++) {
      for (int j = 0; j < M && err; j++) {
        if (fabs(A->matrix[i][j] - B->matrix[i][j]) > 1e-6) {
          err = OK;
          break;
        }
      }
      if (err == 0) break;
    }
  }

  return err;
}

int s21_sum_matrix(matrix_t *A, matrix_t *B, matrix_t *result) {
  int err = OK;
  if (!is_exist(A) || !is_exist(B)) {
    err = INCORRECT_MATRIX;
  } else if (M != B->columns || N != B->rows)
    err = ERROR;
  else {
    s21_create_matrix(N, M, result);
    for (int i = 0; i < N; i++)
      for (int j = 0; j < M; j++)
        result->matrix[i][j] = A->matrix[i][j] + B->matrix[i][j];
  }
  return err;
}

int s21_sub_matrix(matrix_t *A, matrix_t *B, matrix_t *result) {
  int err = OK;
  if (!is_exist(A) || !is_exist(B)) {
    err = INCORRECT_MATRIX;
  } else if (M != B->columns || N != B->rows)
    err = ERROR;
  else {
    s21_create_matrix(N, M, result);
    for (int i = 0; i < N; i++)
      for (int j = 0; j < M; j++)
        result->matrix[i][j] = A->matrix[i][j] - B->matrix[i][j];
  }
  return err;
}

int s21_mult_number(matrix_t *A, double number, matrix_t *result) {
  int err = OK;
  if (!is_exist(A)) {
    err = INCORRECT_MATRIX;
  } else {
    s21_create_matrix(N, M, result);
    for (int i = 0; i < N; ++i)
      for (int j = 0; j < M; j++)
        result->matrix[i][j] = A->matrix[i][j] * number;
  }
  return err;
}

int s21_mult_matrix(matrix_t *A, matrix_t *B, matrix_t *result) {
  int err = OK;
  if (!is_exist(A) || !is_exist(B)) {
    err = INCORRECT_MATRIX;
  } else if (M != B->rows) {
    err = ERROR;
  } else {
    s21_create_matrix(N, B->columns, result);
    for (int i = 0; i < N; ++i) {
      for (int j = 0; j < B->columns; j++) {
        double sum = 0.;
        for (int k = 0; k < M; k++) {
          sum += (A->matrix[i][k]) * (B->matrix[k][j]);
        }
        result->matrix[i][j] = sum;
      }
    }
  }
  return err;
}

int s21_transpose(matrix_t *A, matrix_t *result) {
  int err = OK;
  if (!is_exist(A)) {
    err = INCORRECT_MATRIX;
  } else {
    s21_create_matrix(M, N, result);
    for (int i = 0; i < N; ++i)
      for (int j = 0; j < M; j++) result->matrix[j][i] = A->matrix[i][j];
  }
  return err;
}

void s21_exclude_lines(int a, int b, matrix_t *A, matrix_t *tmp) {
  for (int i = 0, k = 0; i < N; i++) {
    int l = 0;
    for (int j = 0; j < M; j++) {
      if (i == a || j == b) continue;
      tmp->matrix[k][l] = A->matrix[i][j];
      l++;
    }
    if (l != 0) k++;
  }
}

int s21_determinant(matrix_t *A, double *result) {
  int err = OK;
  double EPS = 1E-9;
  if (!is_exist(A)) {
    err = INCORRECT_MATRIX;
  } else if (N != M) {
    err = ERROR;
  } else {
    matrix_t A_copy;
    s21_create_matrix(N, M, &A_copy);
    for (int i = 0; i < N; i++) {
      for (int j = 0; j < M; j++) A_copy.matrix[i][j] = A->matrix[i][j];
    }
    double det = 1;
    for (int i = 0; i < N; ++i) {
      int k = i;
      for (int j = i + 1; j < N; ++j)
        if (fabs(A_copy.matrix[j][i]) > fabs(A_copy.matrix[k][i])) k = j;
      if (fabs(A_copy.matrix[k][i]) < EPS) {
        det = 0;
        break;
      }
      double *tmp = A_copy.matrix[i];
      A_copy.matrix[i] = A_copy.matrix[k];
      A_copy.matrix[k] = tmp;
      if (i != k) det = -det;
      det *= A_copy.matrix[i][i];
      for (int j = i + 1; j < N; ++j)
        A_copy.matrix[i][j] /= A_copy.matrix[i][i];
      for (int j = 0; j < N; ++j)
        if (j != i && fabs(A_copy.matrix[j][i]) > EPS)
          for (int k = i + 1; k < N; ++k)
            A_copy.matrix[j][k] -= A_copy.matrix[i][k] * A_copy.matrix[j][i];
    }
    s21_remove_matrix(&A_copy);
    *result = det;
  }
  return err;
}

int s21_calc_complements(matrix_t *A, matrix_t *result) {
  int err = OK;
  if (!is_exist(A)) {
    err = INCORRECT_MATRIX;
  } else {
    s21_create_matrix(N, M, result);
    matrix_t tmp;
    double det;

    for (int i = 0; i < N; i++) {
      for (int j = 0; j < M; j++) {
        s21_create_matrix(N - 1, M - 1, &tmp);
        s21_exclude_lines(i, j, A, &tmp);
        s21_determinant(&tmp, &det);
        result->matrix[i][j] = det * pow(-1, i + j);
        s21_remove_matrix(&tmp);
      }
    }
  }
  return err;
}

int s21_inverse_matrix(matrix_t *A, matrix_t *result) {
  int err = OK;

  if (!is_exist(A)) {
    err = INCORRECT_MATRIX;
  } else {
    double det = 0;
    s21_determinant(A, &det);
    if (det == 0) {
      err = ERROR;
    } else {
      s21_calc_complements(A, result);
      matrix_t tmp;
      s21_transpose(result, &tmp);
      s21_remove_matrix(result);
      s21_mult_number(&tmp, 1 / det, result);
      s21_remove_matrix(&tmp);
    }
  }
  return err;
}
