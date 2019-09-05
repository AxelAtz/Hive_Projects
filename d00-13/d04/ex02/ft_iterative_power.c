/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 08:58:33 by aadlercr          #+#    #+#             */
/*   Updated: 2019/08/17 14:13:39 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int n1, int p)
{
	int sum;
	int i;

	i = 0;
	sum = n1;
	if (p > 1)
	{
		while (i <= p - 2)
		{
			sum *= n1;
			i++;
		}
	}
	else if (p == 0)
	{
		return (1);
	}
	else if (p < 0)
	{
		return (0);
	}
	return (sum);
}
