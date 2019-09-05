#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}


void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr((nb / 10) * -1);
		ft_putnbr((nb % 10) * -1);
	}
	else if (nb < 10)
	{
		ft_putchar(nb + '0');
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}



int main()
{
	int array[] = {1, 5, 6, 21, 51, 4};
	void (*putptr)(int) = &ft_putnbr;
	ft_foreach(array, 6, putptr);
}