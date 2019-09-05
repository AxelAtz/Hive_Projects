#include <stdio.h>

void	ft_putchar(char c);

void	ft_putstr(const char *str)
{
	while (*str != '\0')
		ft_putchar(*str++);
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
	{
		if (!(s1[1]) && s2[1]) {
			return (-1);
		}
		if (!(s2[1]) && s1[1]) {
			return (1);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
int ft_already_found(int index, int *found)
{
	int i;

	i = 0;
	while(found[i])
	{
		if (index == found[i++])
			return(1);	 
	}
	return (0);
}


char *ft_sort_arr(int argc, char **argv)
{
	char 	*holder;
	int 	i;
	int 	counter;
	int 	printed_index[argc];
	int debug = 0;

	
	counter = 1;
	
	while (argv[counter] && debug < 5)
	{
		counter++;
		i = 1;
		holder = argv[i];
		printf("holde:%s\n", holder);
		while (argv[i+1] && counter < 50)
		{
			/* printf("1\n"); */
			if (ft_strcmp(holder, argv[i+1]) < 0)
			{
				i += 1;
				printf("3\n");
				continue;
			}
			if (ft_strcmp(holder, argv[i+1]) > 0 && !(ft_already_found(i+1, printed_index)))
			{
				holder = argv[i+1];
				printf("4\n");
				counter = i+1;
			}
			i++;
		}
		printf("2\n");
		printed_index[counter] = counter;
		ft_putstr(holder);
		debug ++;
	}
}

int	main(int argc, char const *argv[])
{
	int counter;

	counter = 0;
	ft_sort_arr(argc, argv);
	return (0);
}
