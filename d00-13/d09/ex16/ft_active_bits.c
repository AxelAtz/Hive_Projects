/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_active_bits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/23 09:26:32 by aadlercr          #+#    #+#             */
/*   Updated: 2019/08/23 09:30:46 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_active_bits(int value)
{
	unsigned int	count;
	int				sign;

	count = 0;
	sign = 1;
	if (value < 0)
	{
		sign = 0;
		value += 1;
		value *= -1;
	}
	while (value != 0)
	{
		if ((value & 1) == 1)
			count++;
		value = value >> 1;
	}
	if (!(value))
		return (32 - count);
	return (count);
}
