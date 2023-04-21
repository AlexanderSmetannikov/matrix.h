CC = gcc
EFLAGS = -Wall -Wextra -Werror -std=c11
CFLAGS = $(EFLAGS) -c
OFLAGS = $(EFLAGS) -o
S21_matrix_C = functions/*.c
S21_matrix_O = s21_*.o
S21_SUITE_C = tests/*.c
S21_SUITE_O = suite_*.o

all: clean test

s21_matrix.a:
	$(CC) $(CFLAGS) $(S21_matrix_C)
	ar r s21_matrix.a $(S21_matrix_O)
	rm -rf *.o
	ranlib s21_matrix.a

test: s21_matrix.a
	$(CC) $(CFLAGS) $(S21_SUITE_C) main.c
	$(CC) $(OFLAGS) test $(S21_SUITE_O) main.o s21_matrix.a -lcheck
	rm -rf *.o *.a
	./test

valgrind: s21_matrix.a
	$(CC) $(CFLAGS) $(S21_SUITE_C) main.c
	$(CC) $(OFLAGS) test $(S21_SUITE_O) main.o s21_matrix.a -lcheck -lm -lsubunit
	rm -rf *.o *.a
	# ./test
	valgrind --leak-check=full -s ./test

gcov_report: clean
	$(CC) --coverage $(CFLAGS) $(S21_matrix_C)
	ar r s21_matrix.a $(S21_matrix_O)
	ranlib s21_matrix.a
	$(CC) $(CFLAGS) $(S21_SUITE_C) main.c
	$(CC) --coverage $(OFLAGS) test $(S21_SUITE_O) main.o s21_matrix.a -lcheck -lm
	rm -rf *.o *.a
	./test
	# gcov s21*.gcda
	gcovr -r . --html --html-details -o report.html
	open report.html

style:
	cp ../materials/linters/.clang-format .clang-format
	clang-format -i *.c *.h functions/*.c tests/*.c
	rm .clang-format

clean:
	rm -rf *.o *.a test *.gcda *.gcno *.gcov *.html *.css *.out

rebuild: clean all
