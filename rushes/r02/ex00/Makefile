# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/31 20:36:55 by cleisti           #+#    #+#              #
#    Updated: 2019/09/01 23:31:39 by aadlercr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = colle-2
SRC = main.c output_funcs.c ft_itoa.c memory.c
OBJ = main.o output_funcs.o ft_itoa.o memory.o
.PHONY: clean all fclean re

all: $(NAME)

$(NAME):
	gcc -c $(SRC)
	gcc -Wall -Wextra -Werror $(OBJ) -o $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all