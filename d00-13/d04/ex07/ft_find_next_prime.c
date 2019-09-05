/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 19:24:42 by aadlercr          #+#    #+#             */
/*   Updated: 2019/08/17 19:30:29 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int i;

	i = 3;
	if (nb < 2 || ((nb % 2) == 0 && nb != 2))
	{
		return (ft_find_next_prime(nb + 1));
	}
	else
	{
		if ((nb % i) == 0 && (nb != 3))
		{
			return (ft_find_next_prime(nb + 2));
		}
	}
	return (nb);
}
