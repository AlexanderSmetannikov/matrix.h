#include "../s21_matrix.h"
#include "../suitecases.h"

START_TEST(sub_0) {
  matrix_t a, b, c, d;

  s21_create_matrix(10, 10, &a);
  s21_create_matrix(10, 10, &b);
  s21_create_matrix(10, 10, &d);

  readmatrix(&a, "tests/test_files/sub/sub0/A.txt");
  readmatrix(&b, "tests/test_files/sub/sub0/B.txt");
  readmatrix(&d, "tests/test_files/sub/sub0/res.txt");

  int res = s21_sub_matrix(&a, &b, &c);
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

START_TEST(sub_1) {
  matrix_t a, b, c, d;

  s21_create_matrix(10, 10, &a);
  s21_create_matrix(10, 10, &b);
  s21_create_matrix(10, 10, &d);

  readmatrix(&a, "tests/test_files/sub/sub1/A.txt");
  readmatrix(&b, "tests/test_files/sub/sub1/B.txt");
  readmatrix(&d, "tests/test_files/sub/sub1/res.txt");

  int res = s21_sub_matrix(&a, &b, &c);
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

START_TEST(sub_2) {
  matrix_t a, b, c, d;

  s21_create_matrix(10, 10, &a);
  s21_create_matrix(10, 10, &b);
  s21_create_matrix(10, 10, &d);

  readmatrix(&a, "tests/test_files/sub/sub2/A.txt");
  readmatrix(&b, "tests/test_files/sub/sub2/B.txt");
  readmatrix(&d, "tests/test_files/sub/sub2/res.txt");

  int res = s21_sub_matrix(&a, &b, &c);
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

START_TEST(sub_3) {
  matrix_t a, b, c, d;

  s21_create_matrix(10, 10, &a);
  s21_create_matrix(10, 10, &b);
  s21_create_matrix(10, 10, &d);

  readmatrix(&a, "tests/test_files/sub/sub3/A.txt");
  readmatrix(&b, "tests/test_files/sub/sub3/B.txt");
  readmatrix(&d, "tests/test_files/sub/sub3/res.txt");

  int res = s21_sub_matrix(&a, &b, &c);
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

START_TEST(sub_4) {
  matrix_t a, b, c, d;

  s21_create_matrix(10, 10, &a);
  s21_create_matrix(10, 10, &b);
  s21_create_matrix(10, 10, &d);

  readmatrix(&a, "tests/test_files/sub/sub4/A.txt");
  readmatrix(&b, "tests/test_files/sub/sub4/B.txt");
  readmatrix(&d, "tests/test_files/sub/sub4/res.txt");

  // for (int i = 0; i < 10; i++) {
  //   for (int j = 0; j < 10; j++) {
  //     printf("%lf ", b.matrix[i][j]);
  //   }
  //   printf("\n");
  // }

  int res = s21_sub_matrix(&a, &b, &c);
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

START_TEST(sub_5) {
  matrix_t a, b, c, d;

  s21_create_matrix(10, 10, &a);
  s21_create_matrix(10, 10, &b);
  s21_create_matrix(10, 10, &d);

  readmatrix(&a, "tests/test_files/sub/sub5/A.txt");
  readmatrix(&b, "tests/test_files/sub/sub5/B.txt");
  readmatrix(&d, "tests/test_files/sub/sub5/res.txt");

  // for (int i = 0; i < 10; i++) {
  //   for (int j = 0; j < 10; j++) {
  //     printf("%lf ", b.matrix[i][j]);
  //   }
  //   printf("\n");
  // }

  int res = s21_sub_matrix(&a, &b, &c);
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

START_TEST(sub_6) {
  matrix_t a, b, c, d;

  s21_create_matrix(10, 10, &a);
  s21_create_matrix(10, 10, &b);
  s21_create_matrix(10, 10, &d);

  readmatrix(&a, "tests/test_files/sub/sub6/A.txt");
  readmatrix(&b, "tests/test_files/sub/sub6/B.txt");
  readmatrix(&d, "tests/test_files/sub/sub6/res.txt");

  // for (int i = 0; i < 10; i++) {
  //   for (int j = 0; j < 10; j++) {
  //     printf("%lf ", a.matrix[i][j]);
  //   }
  //   printf("\n");
  // }

  int res = s21_sub_matrix(&a, &b, &c);
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

START_TEST(sub_7) {
  matrix_t a, b, c, d;

  s21_create_matrix(10, 10, &a);
  s21_create_matrix(10, 10, &b);
  s21_create_matrix(10, 10, &d);

  readmatrix(&a, "tests/test_files/sub/sub7/A.txt");
  readmatrix(&b, "tests/test_files/sub/sub7/B.txt");
  readmatrix(&d, "tests/test_files/sub/sub7/res.txt");

  int res = s21_sub_matrix(&a, &b, &c);
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

START_TEST(sub_8) {
  matrix_t a, b, c, d;

  s21_create_matrix(10, 10, &a);
  s21_create_matrix(10, 10, &b);
  s21_create_matrix(10, 10, &d);

  readmatrix(&a, "tests/test_files/sub/sub8/A.txt");
  readmatrix(&b, "tests/test_files/sub/sub8/B.txt");
  readmatrix(&d, "tests/test_files/sub/sub8/res.txt");

  int res = s21_sub_matrix(&a, &b, &c);
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

START_TEST(sub_9) {
  matrix_t a, b, c, d;

  s21_create_matrix(10, 10, &a);
  s21_create_matrix(10, 10, &b);
  s21_create_matrix(10, 10, &d);

  readmatrix(&a, "tests/test_files/sub/sub9/A.txt");
  readmatrix(&b, "tests/test_files/sub/sub9/B.txt");
  readmatrix(&d, "tests/test_files/sub/sub9/res.txt");

  int res = s21_sub_matrix(&a, &b, &c);
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

START_TEST(sub_incorrect) {
  matrix_t a, b, c, d;

  s21_create_matrix(10, 10, &a);
  s21_create_matrix(10, 10, &b);
  s21_create_matrix(10, 10, &d);

  readmatrix(&a, "tests/test_files/sub/sub9/A.txt");
  readmatrix(&b, "tests/test_files/sub/sub9/B.txt");
  readmatrix(&d, "tests/test_files/sub/sub9/res.txt");

  int res = s21_sub_matrix(NULL, &b, &c);
  if (!res)
    ck_assert_int_eq(s21_eq_matrix(&c, &d), SUCCESS);
  else
    ck_assert_int_eq(res, INCORRECT_MATRIX);

  s21_remove_matrix(&a);
  s21_remove_matrix(&b);
  s21_remove_matrix(&d);
}
END_TEST

Suite *suite_sub() {
  Suite *s1 = suite_create("s21_sub");
  TCase *tc1_1 = tcase_create("case_sub");

  suite_add_tcase(s1, tc1_1);

  tcase_add_test(tc1_1, sub_0);
  tcase_add_test(tc1_1, sub_1);
  tcase_add_test(tc1_1, sub_2);
  tcase_add_test(tc1_1, sub_3);
  tcase_add_test(tc1_1, sub_4);
  tcase_add_test(tc1_1, sub_5);
  tcase_add_test(tc1_1, sub_6);
  tcase_add_test(tc1_1, sub_7);
  tcase_add_test(tc1_1, sub_8);
  tcase_add_test(tc1_1, sub_9);
  tcase_add_test(tc1_1, sub_incorrect);

  return s1;
}
