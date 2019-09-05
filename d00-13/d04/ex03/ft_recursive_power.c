/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 10:19:09 by aadlercr          #+#    #+#             */
/*   Updated: 2019/08/17 17:39:58 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int n1, int p)
{
	if (p < 0 || p > 12)
	{
		return (0);
	}
	else if (p == 0)
	{
		return (1);
	}
	else
	{
		n1 *= ft_recursive_power(n1, p - 1);
		return (n1);
	}
}
