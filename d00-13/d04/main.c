#include <stdio.h>
int ft_recursive_power(int nb, int power);

int main()
{
	int pwr;
	int i;

	pwr = 5;
	i = 5;
	printf("\n %d to he pwr of %d is %d \n", i, pwr, ft_recursive_power(i,pwr));
	pwr = 4;
	i = 3;
	printf("\n %d to he pwr of %d is %d \n", i, pwr, ft_recursive_power(i,pwr));
	pwr = 0;
	i = 4;
	printf("\n %d to he pwr of %d is %d \n", i, pwr, ft_recursive_power(i,pwr));
	pwr = -5;
	i = 5;
	printf("\n %d to he pwr of %d is %d \n", i, pwr, ft_recursive_power(i,pwr));
	
	return 0;
}
