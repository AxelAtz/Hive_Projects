#include <stdio.h>
int	ft_max(int *tab, int length);
int main()
{
	int tab[] = {5,4,3,6,1};
	int length = 5;

	printf("active bits in: %d is\n", ft_max(tab, length));
	int ttab[] = {5,4,3,-9,1};
	printf("active bits in: %d is\n", ft_max(ttab, length));
	int tttab[] = {5,-15,-3,6,1};
	printf("active bits in: %d is\n", ft_max(tttab, length));
	return 0;
}
