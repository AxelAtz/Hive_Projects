#include <stdio.h>
#include <stdlib.h>

int	ft_return_diff(int i, int j)
{
	if (i < j)
		return (-1);
	else if (i == j)
		return (0);
	else
		return (1);
}


int main()
{
	int ret[] = {5, 4, 65, 21, 51, 255};
	int (*f)(int, int) = &ft_return_diff;

	printf("%d", ft_is_sort(ret, 6, f));
	printf("%d", ft_is_sort(&ret[1], 5, f));
	printf("%d", ft_is_sort(&ret[2], 4, f));
	printf("%d", ft_is_sort(&ret[3], 3, f));
	printf("%d", ft_is_sort(&ret[4], 2, f));
	return (0);
}