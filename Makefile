# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/04 20:05:06 by jkokko            #+#    #+#              #
#    Updated: 2019/09/04 22:05:01 by aadlercr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq

SOURCE = src/main.c src/ft_checker.c src/ft_tools.c \
		src/ft_memory.c src/ft_solver.c \
		src/ft_read_arg.c src/ft_read_stdin.c

OBJECTS = main.o ft_checker.o ft_tools.o \
		ft_memory.o ft_solver.o \
		ft_read_arg.o ft_read_stdin.o

FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(SOURCE) -I ./inc/
	gcc -o $(NAME) $(OBJECTS)

clean:
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re
