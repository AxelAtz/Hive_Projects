/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 13:47:46 by aadlercr          #+#    #+#             */
/*   Updated: 2019/08/20 18:51:05 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_check_valid_base(char *base)
{
	int	lenbase;
	int i;

	i = 0;
	lenbase = 0;
	while (base[lenbase] != '\0')
	{
		if (base[lenbase] == '+' || base[lenbase] == '-')
			return (0);
		lenbase++;
		while (i++ < lenbase)
			if (base[lenbase] == base[i - 1])
				return (0);
		i = 0;
	}
	if (lenbase < 2)
		return (0);
	return (lenbase);
}

int		ft_check_valid_str(char *str, char *base)
{
	int found;
	int counter;
	int i;

	found = 1;
	i = 0;
	while (str[i] != '\0')
	{
		found = 0;
		counter = 0;
		while (base[counter] != '\0')
		{
			if (str[i] == '+' || str[i] == '-')
				found = 1;
			if (str[i] == base[counter])
				found = 1;
			counter++;
		}
		if (!found)
			return (0);
		i++;
	}
	return (found);
}

int		ft_find_value_in_base(char *str, char *base)
{
	int baseindex;

	baseindex = 0;
	while (base[baseindex] != '\0' && *str != base[baseindex])
	{
		baseindex++;
	}
	return (baseindex);
}

int		ft_atoi_base(char *str, char *base)
{
	int				result;
	int				sign;
	int				lenbase;

	result = 0;
	if (!(ft_check_valid_base(base)) || !(ft_check_valid_str(str, base)))
		return (0);
	lenbase = ft_check_valid_base(base);
	while (*str == ' ' || *str == '\n' || *str == '\t'
	|| *str == '\v' || *str == '\f' || *str == '\r')
		str += 1;
	if (*str == '-')
	{
		sign = -1;
		str += 1;
	}
	else
	{
		sign = 1;
		if (*str == '+')
			str += 1;
	}
	while (*str != '\0')
		result = (lenbase * result) + ft_find_value_in_base(str++, base);
	return (result * sign);
}
