
#include "bsq_head.h"

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	write(1, str, i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_count_size(char *arr, int *width, int *height)
{
	int i;
	int w;
	int h;

	h = 0;
	w = 0;
	i = 0;
	while (arr[i])
	{
		if (arr[i] != '\n')
			w++;
		else
			h++;
		i++;
	}
	if (h == 0)
		*width = w;
	else
		*width = w / h;
	*height = h;
}

int	ft_atoi(char *string)
{
	int				result;
	int				sign;

	result = 0;
	while (*string == ' ' || *string == '\n' || *string == '\t'
	|| *string == '\v' || *string == '\f' || *string == '\r')
		string += 1;
	if (*string == '-')
	{
		sign = -1;
		string += 1;
	}
	else
	{
		sign = 1;
		if (*string == '+')
			string += 1;
	}
	while (*string != '\0' && *string >= '0' && *string <= '9')
	{
		result = (10 * result) + *string - '0';
		string++;
	}
	return (result * sign);
}

/*
** Badly named ft_get_height is used to make sure we start solving the map from
** the correct position
*/

int	ft_get_height(char *map)
{
	int i;

	i = 0;
	while (map[i] >= '0' && map[i] <= '9')
		i++;

	return (i + 4);
}
