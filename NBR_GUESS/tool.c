#include "guess.h"

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

char	*ft_strcpy(char *dest, char *src)
{
	int index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

char	*ft_strcat(char *dest, char *src)
{
	int		lendest;
	char	*start;

	lendest = 0;
	start = dest;
	while (dest[lendest] != '\0')
		lendest++;
	ft_strcpy(dest + lendest, src);
	return (dest);
}