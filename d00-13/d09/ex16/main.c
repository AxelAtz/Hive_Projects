#include <stdio.h>
unsigned int ft_active_bits(int value);
int main(int argc, char const *argv[])
{
	int value = 5;
	printf("active bits in: %d is %d\n",value, ft_active_bits(value));
	value = -15;
	printf("active bits in: %d is %d\n",value, ft_active_bits(value));
	value = -15426;
	printf("active bits in: %d is %d\n",value, ft_active_bits(value));
	return 0;
}
