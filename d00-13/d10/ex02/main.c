
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_foreach(int *tab, int length, void(*f)(int))
{
	int i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
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

int add_one(int i)
{
	return (i + 1);
}

int main()
{
	int array[] = {3, 4415, 6, 21, 51, 4};
	int (*putptr)(int) = &add_one;
	void (*putptr1)(int) = & ft_putnbr;
	int *ret;
	ret = malloc(7 *4);

	ret = ft_map(array, 6, putptr);
	ft_putchar('\n');
	ft_foreach(ret, 6, putptr1);

}
