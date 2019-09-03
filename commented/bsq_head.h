#ifndef  BSQ_HEAD_H
# define BSQ_HEAD_H
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>
# include "stdlib.h"
# include "stdio.h"

void	ft_putstr(char *str);
void	ft_count_size(char *arr, int *width, int *height);
void	ft_putchar(char c);
void	ft_set_value_zero(int *n1, int *n2, int *n3, int *n4);
int	ft_atoi(char *string);
int	ft_get_height(char *map);
char	*ft_memcpy(char *dest, char *src, unsigned int size);
char	*ft_realloc(char *src, unsigned int size);

#endif