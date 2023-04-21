#include "../s21_matrix.h"
#include "../suitecases.h"

START_TEST(mult_0) {
  matrix_t a, b, c, d;

  s21_create_matrix(10, 10, &a);
  s21_create_matrix(10, 10, &b);
  s21_create_matrix(10, 10, &d);

  readmatrix(&a, "tests/test_files/mult/mult0/A.txt");
  readmatrix(&b, "tests/test_files/mult/mult0/B.txt");
  readmatrix(&d, "tests/test_files/mult/mult0/res.txt");

  int res = s21_mult_matrix(&a, &b, &c);
  if (!res)
    ck_assert_int_eq(s21_eq_matrix(&c, &d), SUCCESS);
  else
    ck_assert_int_eq(res, OK);
  s21_remove_matrix(&c);
  s21_remove_matrix(&a);
  s21_remove_matrix(&b);
  s21_remove_matrix(&d);
}
END_TEST

START_TEST(mult_1) {
  matrix_t a, b, c, d;

  s21_create_matrix(10, 10, &a);
  s21_create_matrix(10, 10, &b);
  s21_create_matrix(10, 10, &d);

  readmatrix(&a, "tests/test_files/mult/mult1/A.txt");
  readmatrix(&b, "tests/test_files/mult/mult1/B.txt");
  readmatrix(&d, "tests/test_files/mult/mult1/res.txt");

  int res = s21_mult_matrix(&a, &b, &c);
  if (!res)
    ck_assert_int_eq(s21_eq_matrix(&c, &d), SUCCESS);
  else
    ck_assert_int_eq(res, OK);
  s21_remove_matrix(&c);
  s21_remove_matrix(&a);
  s21_remove_matrix(&b);
  s21_remove_matrix(&d);
}
END_TEST

START_TEST(mult_2) {
  matrix_t a, b, c, d;

  s21_create_matrix(10, 10, &a);
  s21_create_matrix(10, 10, &b);
  s21_create_matrix(10, 10, &d);

  readmatrix(&a, "tests/test_files/mult/mult2/A.txt");
  readmatrix(&b, "tests/test_files/mult/mult2/B.txt");
  readmatrix(&d, "tests/test_files/mult/mult2/res.txt");

  int res = s21_mult_matrix(&a, &b, &c);
  if (!res)
    ck_assert_int_eq(s21_eq_matrix(&c, &d), SUCCESS);
  else
    ck_assert_int_eq(res, OK);
  s21_remove_matrix(&c);
  s21_remove_matrix(&a);
  s21_remove_matrix(&b);
  s21_remove_matrix(&d);
}
END_TEST

START_TEST(mult_3) {
  matrix_t a, b, c, d;

  s21_create_matrix(10, 10, &a);
  s21_create_matrix(10, 10, &b);
  s21_create_matrix(10, 10, &d);

  readmatrix(&a, "tests/test_files/mult/mult3/A.txt");
  readmatrix(&b, "tests/test_files/mult/mult3/B.txt");
  readmatrix(&d, "tests/test_files/mult/mult3/res.txt");

  int res = s21_mult_matrix(&a, &b, &c);
  if (!res)
    ck_assert_int_eq(s21_eq_matrix(&c, &d), SUCCESS);
  else
    ck_assert_int_eq(res, OK);
  s21_remove_matrix(&c);
  s21_remove_matrix(&a);
  s21_remove_matrix(&b);
  s21_remove_matrix(&d);
}
END_TEST

START_TEST(mult_4) {
  matrix_t a, b, c, d;

  s21_create_matrix(10, 10, &a);
  s21_create_matrix(10, 10, &b);
  s21_create_matrix(10, 10, &d);

  readmatrix(&a, "tests/test_files/mult/mult4/A.txt");
  readmatrix(&b, "tests/test_files/mult/mult4/B.txt");
  readmatrix(&d, "tests/test_files/mult/mult4/res.txt");

  int res = s21_mult_matrix(&a, &b, &c);
  if (!res)
    ck_assert_int_eq(s21_eq_matrix(&c, &d), SUCCESS);
  else
    ck_assert_int_eq(res, OK);
  s21_remove_matrix(&c);
  s21_remove_matrix(&a);
  s21_remove_matrix(&b);
  s21_remove_matrix(&d);
}
END_TEST

START_TEST(mult_5) {
  matrix_t a, b, c, d;

  s21_create_matrix(10, 10, &a);
  s21_create_matrix(10, 10, &b);
  s21_create_matrix(10, 10, &d);

  readmatrix(&a, "tests/test_files/mult/mult5/A.txt");
  readmatrix(&b, "tests/test_files/mult/mult5/B.txt");
  readmatrix(&d, "tests/test_files/mult/mult5/res.txt");

  int res = s21_mult_matrix(&a, &b, &c);
  if (!res)
    ck_assert_int_eq(s21_eq_matrix(&c, &d), SUCCESS);
  else
    ck_assert_int_eq(res, OK);
  s21_remove_matrix(&c);
  s21_remove_matrix(&a);
  s21_remove_matrix(&b);
  s21_remove_matrix(&d);
}
END_TEST

START_TEST(mult_6) {
  matrix_t a, b, c, d;

  s21_create_matrix(10, 10, &a);
  s21_create_matrix(10, 10, &b);
  s21_create_matrix(10, 10, &d);

  readmatrix(&a, "tests/test_files/mult/mult6/A.txt");
  readmatrix(&b, "tests/test_files/mult/mult6/B.txt");
  readmatrix(&d, "tests/test_files/mult/mult6/res.txt");

  int res = s21_mult_matrix(&a, &b, &c);
  if (!res)
    ck_assert_int_eq(s21_eq_matrix(&c, &d), SUCCESS);
  else
    ck_assert_int_eq(res, OK);
  s21_remove_matrix(&c);
  s21_remove_matrix(&a);
  s21_remove_matrix(&b);
  s21_remove_matrix(&d);
}
END_TEST

START_TEST(mult_7) {
  matrix_t a, b, c, d;

  s21_create_matrix(10, 10, &a);
  s21_create_matrix(10, 10, &b);
  s21_create_matrix(10, 10, &d);

  readmatrix(&a, "tests/test_files/mult/mult7/A.txt");
  readmatrix(&b, "tests/test_files/mult/mult7/B.txt");
  readmatrix(&d, "tests/test_files/mult/mult7/res.txt");

  int res = s21_mult_matrix(&a, &b, &c);
  if (!res)
    ck_assert_int_eq(s21_eq_matrix(&c, &d), SUCCESS);
  else
    ck_assert_int_eq(res, OK);
  s21_remove_matrix(&c);
  s21_remove_matrix(&a);
  s21_remove_matrix(&b);
  s21_remove_matrix(&d);
}
END_TEST

START_TEST(mult_8) {
  matrix_t a, b, c, d;

  s21_create_matrix(10, 10, &a);
  s21_create_matrix(10, 10, &b);
  s21_create_matrix(10, 10, &d);

  readmatrix(&a, "tests/test_files/mult/mult8/A.txt");
  readmatrix(&b, "tests/test_files/mult/mult8/B.txt");
  readmatrix(&d, "tests/test_files/mult/mult8/res.txt");

  int res = s21_mult_matrix(&a, &b, &c);
  if (!res)
    ck_assert_int_eq(s21_eq_matrix(&c, &d), SUCCESS);
  else
    ck_assert_int_eq(res, OK);
  s21_remove_matrix(&c);
  s21_remove_matrix(&a);
  s21_remove_matrix(&b);
  s21_remove_matrix(&d);
}
END_TEST

START_TEST(mult_9) {
  matrix_t a, b, c, d;

  s21_create_matrix(10, 10, &a);
  s21_create_matrix(10, 10, &b);
  s21_create_matrix(10, 10, &d);

  readmatrix(&a, "tests/test_files/mult/mult9/A.txt");
  readmatrix(&b, "tests/test_files/mult/mult9/B.txt");
  readmatrix(&d, "tests/test_files/mult/mult9/res.txt");

  int res = s21_mult_matrix(&a, &b, &c);
  if (!res)
    ck_assert_int_eq(s21_eq_matrix(&c, &d), SUCCESS);
  else
    ck_assert_int_eq(res, OK);
  s21_remove_matrix(&c);
  s21_remove_matrix(&a);
  s21_remove_matrix(&b);
  s21_remove_matrix(&d);
}
END_TEST

START_TEST(mult_incorrect) {
  matrix_t a, b, c, d;

  s21_create_matrix(10, 10, &a);
  s21_create_matrix(10, 10, &b);
  s21_create_matrix(10, 10, &d);

  readmatrix(&a, "tests/test_files/sub/sub9/A.txt");
  readmatrix(&b, "tests/test_files/sub/sub9/B.txt");
  readmatrix(&d, "tests/test_files/sub/sub9/res.txt");

  int res = s21_mult_matrix(NULL, &b, &c);
  if (!res)
    ck_assert_int_eq(s21_eq_matrix(&c, &d), SUCCESS);
  else
    ck_assert_int_eq(res, INCORRECT_MATRIX);

  s21_remove_matrix(&a);
  s21_remove_matrix(&b);
  s21_remove_matrix(&d);
}
END_TEST

Suite *suite_mult() {
  Suite *s1 = suite_create("s21_mult");
  TCase *tc1_1 = tcase_create("case_mult");

  suite_add_tcase(s1, tc1_1);

  tcase_add_test(tc1_1, mult_0);
  tcase_add_test(tc1_1, mult_1);
  tcase_add_test(tc1_1, mult_2);
  tcase_add_test(tc1_1, mult_3);
  tcase_add_test(tc1_1, mult_4);
  tcase_add_test(tc1_1, mult_5);
  tcase_add_test(tc1_1, mult_6);
  tcase_add_test(tc1_1, mult_7);
  tcase_add_test(tc1_1, mult_8);
  tcase_add_test(tc1_1, mult_9);
  tcase_add_test(tc1_1, mult_incorrect);

  return s1;
}
