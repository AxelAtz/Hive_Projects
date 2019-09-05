#ifndef GUESS_H
#define GUESS_H
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <unistd.h>
#include <dirent.h>
#include <errno.h>
#include <sys/types.h>
#include <fcntl.h>

typedef struct s_nums
{
	int num;
	struct s_nums *next;
} t_nums;

int	ft_atoi(char *string);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strcat(char *dest, char *src);

#endif