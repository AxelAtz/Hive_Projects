/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 13:00:07 by aadlercr          #+#    #+#             */
/*   Updated: 2019/08/20 22:42:09 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
