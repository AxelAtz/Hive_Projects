NAME = ft_display_file
.PHONY: all clean fclean

all: $(NAME)

$(NAME): ft_display_file.o
	gcc -o ft_display_file ft_display_file.o -Wall -Wextra -Werror

ft_display_file.o: ft_display_file.c file_handling.h
	gcc -c ft_display_file.c

clean:
	rm -rf ft_display_file.o

fclean: 
	rm -rf ft_display_file.o ft_display_file