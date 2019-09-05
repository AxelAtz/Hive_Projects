#include <stdio.h>


int	ft_str_is_uppercase(char c)
{
	if (!(c >= 65 && c <= 90))
	{
		return (0);
	}
	return (1);
}

int ft_get_ascii(char c)
{
	int res;
	int holder;

	holder = 0;
	res = 0;
	if (ft_str_is_uppercase(c))
	{
		holder = c;
		res = (holder) - 65;
		return (res);
	}
	else
	{
		holder = c;
		res = (holder) - 97;
		return (res);
	}
}

int	ft_str_is_alpha(char c)
{

	if (!(c >= 97 && c <= 122) && !(c >= 65 && c <= 90))
	{
		return (0);
	}
	return (1);
}

char *ft_rot42(char *str)
{

	char alphabet[] = "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopq";
	char *res;
	int count = 0;


	while (*str != '\0')
	{
		if (ft_str_is_alpha(*str)) {

			if (ft_str_is_uppercase(*str))
			{
				*res = (alphabet[(ft_get_ascii(*str)+42)]-32);
			}
			else
			{
				*res = alphabet[ft_get_ascii(*str)+42];
			}
		}
		str++;
		res++;
	}
	return (res);
}