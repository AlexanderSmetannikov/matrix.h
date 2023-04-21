#include "../s21_matrix.h"
#include "../suitecases.h"

START_TEST(det_0) {
  matrix_t a;
  double b;
  s21_create_matrix(10, 10, &a);
  readmatrix(&a, "tests/test_files/det/det0/A.txt");

  s21_determinant(&a, &b);
  ck_assert_double_eq_tol(b, -640.22235, 1e-3);
  s21_remove_matrix(&a);
}
END_TEST

START_TEST(det_1) {
  matrix_t a;
  double b;
  s21_create_matrix(10, 10, &a);
  readmatrix(&a, "tests/test_files/det/det1/A.txt");

  s21_determinant(&a, &b);
  ck_assert_double_eq_tol(b, 627.5844, 1e-3);
  s21_remove_matrix(&a);
}
END_TEST

START_TEST(det_2) {
  matrix_t a;
  double b;
  s21_create_matrix(10, 10, &a);
  readmatrix(&a, "tests/test_files/det/det2/A.txt");

  s21_determinant(&a, &b);
  ck_assert_double_eq_tol(b, -205.731, 1e-3);
  s21_remove_matrix(&a);
}
END_TEST

START_TEST(det_3) {
  matrix_t a;
  double b;
  s21_create_matrix(10, 10, &a);
  readmatrix(&a, "tests/test_files/det/det3/A.txt");

  s21_determinant(&a, &b);
  ck_assert_double_eq_tol(b, -1326.2944, 1e-3);
  s21_remove_matrix(&a);
}
END_TEST

START_TEST(det_4) {
  matrix_t a;
  double b;
  s21_create_matrix(10, 10, &a);
  readmatrix(&a, "tests/test_files/det/det4/A.txt");

  s21_determinant(&a, &b);
  ck_assert_double_eq_tol(b, 1489.5092, 1e-3);
  s21_remove_matrix(&a);
}
END_TEST

Suite *suite_det() {
  Suite *s1 = suite_create("s21_det");
  TCase *tc1_1 = tcase_create("det");

  suite_add_tcase(s1, tc1_1);

  tcase_add_test(tc1_1, det_0);
  tcase_add_test(tc1_1, det_1);
  tcase_add_test(tc1_1, det_2);
  tcase_add_test(tc1_1, det_3);
  tcase_add_test(tc1_1, det_4);

  return s1;
}
