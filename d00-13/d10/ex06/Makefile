all: do_op

do_op: do_op.o do_helpers.o do_operators.o
	gcc do_op.o do_helpers.o do_operators.o -o do-op -Wall -Wextra -Werror

do_op.o: do_op.c
	gcc -c do_op.c

do_helpers.o: do_helpers.c do_helpers.h
	gcc -c do_helpers.c

do_operators.o: do_operators.c do_head.h
	gcc -c do_operators.c

clean:
	rm -rf *.o 