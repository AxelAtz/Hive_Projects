NAME = ft_cat
.PHONY: all clean fclean

all: $(NAME)

$(NAME): ft_cat.o 
	gcc -o ft_cat ft_cat.o -Wall -Wextra -Werror

ft_cat.o: ft_cat.c file_handling.h
	gcc -c ft_cat.c


clean:
	rm -rf ft_cat.o 

fclean: 
	rm -rf ft_cat.o ft_cat