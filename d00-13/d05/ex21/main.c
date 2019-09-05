#include <stdio.h>
int	ft_atoi_base(char *nbr, char *base);
void	ft_putchar(char c);
int main()
{
	char *nbr = "15";
	char *base = "0123456789";
	printf("\n%s = %d in base %s ", nbr,ft_atoi_base(nbr, base), base);
	ft_putchar('\n');
	printf("\n%s = %d in base %s ","2147483647", ft_atoi_base( "-3f", "0123456789abcdef"), "0123456789");
	ft_putchar('\n');
	printf("\n%s = %d in base %s ","1101",ft_atoi_base("-a", "0a"), "01");
	ft_putchar('\n');
	printf("\n%s = %d in base %s ","-2",ft_atoi_base("1", "012341234"), "123" );
	return 0;
}

