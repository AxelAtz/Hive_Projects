/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 22:08:57 by aadlercr          #+#    #+#             */
/*   Updated: 2019/08/22 22:09:17 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_greater_than(int a, int b)
{
	if (a > b)
		return (1);
	return (0);
}

int	ft_antidote(int i, int j, int k)
{
	if ((ft_greater_than(j, k) && !(ft_greater_than(j, i))) ||
	(!(ft_greater_than(j, k)) && (ft_greater_than(j, i))))
	{
		return (j);
	}
	if ((ft_greater_than(i, j) && !(ft_greater_than(i, k))) ||
	(!(ft_greater_than(i, j)) && (ft_greater_than(i, k))))
	{
		return (i);
	}
	if ((ft_greater_than(k, i) && !(ft_greater_than(k, j))) ||
	(!(ft_greater_than(k, i)) && (ft_greater_than(k, j))))
	{
		return (k);
	}
}
