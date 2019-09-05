/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 21:06:12 by aadlercr          #+#    #+#             */
/*   Updated: 2019/09/01 23:06:35 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int		ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (str[size])
		++size;
	return (size);
}

void	ft_strrev(char *str)
{
	int		x;
	int		y;
	char	c;
	int		length;

	length = ft_strlen(str);
	x = 0;
	y = length - 1;
	while (x < y)
	{
		c = str[x];
		str[x] = str[y];
		str[y] = c;
		++x;
		--y;
	}
}

char	*ft_itoa(int num)
{
	static char	out[12] = {'\0'};
	int			sign;
	int			digit;
	int			i;

	if (num == 0)
	{
		out[0] = '0';
		return (out);
	}
	sign = ((num < 0) ? -1 : 1);
	i = 0;
	while (num)
	{
		digit = num % (sign * 10);
		digit = ((digit < 0) ? -digit : digit);
		out[i] = '0' + digit;
		num = num / 10;
		if (num == 0 && sign == -1)
			out[++i] = '-';
		++i;
	}
	out[i] = '\0';
	ft_strrev(out);
	return (out);
}
