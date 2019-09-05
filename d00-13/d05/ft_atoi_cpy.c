/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 11:46:43 by aadlercr          #+#    #+#             */
/*   Updated: 2019/08/19 12:15:01 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int number;
	int index;

	number = str[0] - '0';
	index = 0;
	if (str[1] == '\0')
	{
		return (number);
	}
	else
	{
		while (str[index++ + 1] != '\0')
		{
			number *= 10;
		}
		if (str[0] == '-')
		{
			return ((ft_atoi(&str[1])) * -1);
		}
		else
		{
			return (number += (ft_atoi(&str[1])));
		}
	}
}
