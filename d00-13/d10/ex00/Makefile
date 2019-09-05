LIB  = libft.a
FLAGS = -Wall -Wextra -Werror $(SRC)
INC = -c -I $(HEAD)
SRC = ./srcs/ft_putchar.c ./srcs/ft_putstr.c  ./srcs/ft_strcmp.c ./srcs/ft_strlen.c  ./srcs/ft_swap.c 
OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
HEAD = /includes/
 
 all: $(LIB)

$(LIB): 
	gcc $(INC) $(FLAGS) $(SRC)
	ar -cvq $(LIB) $(OBJ)
	ranlib $(LIB) 

clean:
	rm -rf *.o

fclean:
	rm -rf *.o libft.a
re:
	fclean all



