#include <stdio.h>

int ft_antidote(int i, int j, int k);

int main(int argc, char const *argv[])
{
	int i = 0;
	int j = 0;
	int k = 0;

	i = 5;
	j = 9;
	k = 7;
	printf("%d == %d\n", ft_antidote(i,j,k), k);
	i = 8;
	j = 9;
	k = 7;
	printf("%d == %d\n", ft_antidote(i,j,k), i);
	i = 5;
	j = 9;
	k = 7;
	printf("%d == %d\n", ft_antidote(i,j,k), k);
	i = 14;
	j = 3;
	k = -5;
	printf("%d == %d\n", ft_antidote(i,j,k), j);
	return 0;
}
