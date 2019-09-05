#include <stdio.h>

int		ft_count_if(char **tab, int (*f) (char*));

int	ft_starts_with_y(char *str)
{
	if (*str == 'y')
		return (1);
	return (0);
}

int main(int argc, char **argv)
{
	int (*f)(char*) = &ft_starts_with_y;
	printf("%d", ft_count_if(argv, f));
	return 0;
}
