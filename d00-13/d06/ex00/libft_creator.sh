#!/sh/bash
gcc -Wall -Wextra -Werror -c *.c
ar -cvq libft.a *.o
find . -name "*.o" -delete
