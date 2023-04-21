#include "../s21_matrix.h"
#include "../suitecases.h"

START_TEST(sum_0) {
  matrix_t a, b, c, d;

  s21_create_matrix(10, 10, &a);
  s21_create_matrix(10, 10, &b);
  s21_create_matrix(10, 10, &d);

  readmatrix(&a, "tests/test_files/sum/sum0/A.txt");
  readmatrix(&b, "tests/test_files/sum/sum0/B.txt");
  readmatrix(&d, "tests/test_files/sum/sum0/res.txt");

  int res = s21_sum_matrix(&a, &b, &c);
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

START_TEST(sum_1) {
  matrix_t a, b, c, d;

  s21_create_matrix(10, 10, &a);
  s21_create_matrix(10, 10, &b);
  s21_create_matrix(10, 10, &d);

  readmatrix(&a, "tests/test_files/sum/sum1/A.txt");
  readmatrix(&b, "tests/test_files/sum/sum1/B.txt");
  readmatrix(&d, "tests/test_files/sum/sum1/res.txt");

  int res = s21_sum_matrix(&a, &b, &c);
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

START_TEST(sum_2) {
  matrix_t a, b, c, d;

  s21_create_matrix(10, 10, &a);
  s21_create_matrix(10, 10, &b);
  s21_create_matrix(10, 10, &d);

  readmatrix(&a, "tests/test_files/sum/sum2/A.txt");
  readmatrix(&b, "tests/test_files/sum/sum2/B.txt");
  readmatrix(&d, "tests/test_files/sum/sum2/res.txt");

  int res = s21_sum_matrix(&a, &b, &c);
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

START_TEST(sum_3) {
  matrix_t a, b, c, d;

  s21_create_matrix(10, 10, &a);
  s21_create_matrix(10, 10, &b);
  s21_create_matrix(10, 10, &d);

  readmatrix(&a, "tests/test_files/sum/sum3/A.txt");
  readmatrix(&b, "tests/test_files/sum/sum3/B.txt");
  readmatrix(&d, "tests/test_files/sum/sum3/res.txt");

  int res = s21_sum_matrix(&a, &b, &c);
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

START_TEST(sum_4) {
  matrix_t a, b, c, d;

  s21_create_matrix(10, 10, &a);
  s21_create_matrix(10, 10, &b);
  s21_create_matrix(10, 10, &d);

  readmatrix(&a, "tests/test_files/sum/sum4/A.txt");
  readmatrix(&b, "tests/test_files/sum/sum4/B.txt");
  readmatrix(&d, "tests/test_files/sum/sum4/res.txt");

  int res = s21_sum_matrix(&a, &b, &c);
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

START_TEST(sum_5) {
  matrix_t a, b, c, d;

  s21_create_matrix(10, 10, &a);
  s21_create_matrix(10, 10, &b);
  s21_create_matrix(10, 10, &d);

  readmatrix(&a, "tests/test_files/sum/sum5/A.txt");
  readmatrix(&b, "tests/test_files/sum/sum5/B.txt");
  readmatrix(&d, "tests/test_files/sum/sum5/res.txt");

  int res = s21_sum_matrix(&a, &b, &c);
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

START_TEST(sum_6) {
  matrix_t a, b, c, d;

  s21_create_matrix(10, 10, &a);
  s21_create_matrix(10, 10, &b);
  s21_create_matrix(10, 10, &d);

  readmatrix(&a, "tests/test_files/sum/sum6/A.txt");
  readmatrix(&b, "tests/test_files/sum/sum6/B.txt");
  readmatrix(&d, "tests/test_files/sum/sum6/res.txt");

  int res = s21_sum_matrix(&a, &b, &c);
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

START_TEST(sum_7) {
  matrix_t a, b, c, d;

  s21_create_matrix(10, 10, &a);
  s21_create_matrix(10, 10, &b);
  s21_create_matrix(10, 10, &d);

  readmatrix(&a, "tests/test_files/sum/sum7/A.txt");
  readmatrix(&b, "tests/test_files/sum/sum7/B.txt");
  readmatrix(&d, "tests/test_files/sum/sum7/res.txt");

  int res = s21_sum_matrix(&a, &b, &c);
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

START_TEST(sum_8) {
  matrix_t a, b, c, d;

  s21_create_matrix(10, 10, &a);
  s21_create_matrix(10, 10, &b);
  s21_create_matrix(10, 10, &d);

  readmatrix(&a, "tests/test_files/sum/sum8/A.txt");
  readmatrix(&b, "tests/test_files/sum/sum8/B.txt");
  readmatrix(&d, "tests/test_files/sum/sum8/res.txt");

  int res = s21_sum_matrix(&a, &b, &c);
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

START_TEST(sum_9) {
  matrix_t a, b, c, d;

  s21_create_matrix(10, 10, &a);
  s21_create_matrix(10, 10, &b);
  s21_create_matrix(10, 10, &d);

  readmatrix(&a, "tests/test_files/sum/sum9/A.txt");
  readmatrix(&b, "tests/test_files/sum/sum9/B.txt");
  readmatrix(&d, "tests/test_files/sum/sum9/res.txt");

  int res = s21_sum_matrix(&a, &b, &c);
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

START_TEST(sum_incorrect) {
  matrix_t a, b, c, d;

  s21_create_matrix(10, 10, &a);
  s21_create_matrix(10, 10, &b);
  s21_create_matrix(10, 10, &d);

  readmatrix(&a, "tests/test_files/sub/sub9/A.txt");
  readmatrix(&b, "tests/test_files/sub/sub9/B.txt");
  readmatrix(&d, "tests/test_files/sub/sub9/res.txt");

  int res = s21_sum_matrix(NULL, &b, &c);
  if (!res)
    ck_assert_int_eq(s21_eq_matrix(&c, &d), SUCCESS);
  else
    ck_assert_int_eq(res, INCORRECT_MATRIX);

  s21_remove_matrix(&a);
  s21_remove_matrix(&b);
  s21_remove_matrix(&d);
}
END_TEST

Suite *suite_sum() {
  Suite *s1 = suite_create("s21_sum");
  TCase *tc1_1 = tcase_create("case_sum");

  suite_add_tcase(s1, tc1_1);

  tcase_add_test(tc1_1, sum_0);
  tcase_add_test(tc1_1, sum_1);
  tcase_add_test(tc1_1, sum_2);
  tcase_add_test(tc1_1, sum_3);
  tcase_add_test(tc1_1, sum_4);
  tcase_add_test(tc1_1, sum_5);
  tcase_add_test(tc1_1, sum_6);
  tcase_add_test(tc1_1, sum_7);
  tcase_add_test(tc1_1, sum_8);
  tcase_add_test(tc1_1, sum_9);
  tcase_add_test(tc1_1, sum_incorrect);

  return s1;
}
