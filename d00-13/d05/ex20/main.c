#include <stdio.h>
void	ft_putnbr_base(int nbr, char *base);
void	ft_putchar(char c);
int main()
{
	ft_putnbr_base(25, "abc");
	ft_putchar('\n');
	ft_putnbr_base(-2147483648, "0123456789");
	ft_putchar('\n');
	ft_putnbr_base(25, "0123456789abcdef");
	ft_putchar('\n');
	ft_putnbr_base(-4, "123");
	return 0;
}
