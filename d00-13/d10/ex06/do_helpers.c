/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_helpers.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/26 14:24:48 by aadlercr          #+#    #+#             */
/*   Updated: 2019/08/26 20:13:30 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int		ft_atoi(char *string)
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

int		ft_str_is_numeric(char *string)
{
	while (*string == ' ' || *string == '\n' || *string == '\t'
	|| *string == '\v' || *string == '\f' || *string == '\r')
		string += 1;
	if (*string == '-')
	{
		string += 1;
	}
	else
	{
		if (*string == '+')
			string += 1;
	}
	if (*string != '\0' && *string >= '0' && *string <= '9')
	{
		return (1);
	}
	return (0);
}

void	ft_putstr(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
}
