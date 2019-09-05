#include <stdio.h>
int ft_starts_with_y(char *str)
{
	if (*str == 'y')
		return (1);
	return (0);
}

int main(int argc, char **argv)
{
	int (*f)(char*) = &ft_starts_with_y;
	printf("%d", ft_any(argv, f));
	return 0;
}
