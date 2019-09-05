/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 20:37:43 by aadlercr          #+#    #+#             */
/*   Updated: 2019/08/17 11:46:08 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nmb)
{
	int sum;

	if (nmb == 1 || nmb == 0)
	{
		return (1);
	}
	else if (nmb < 0 || nmb > 12)
	{
		return (0);
	}
	else
	{
		sum = nmb * ft_recursive_factorial(nmb - 1);
		return (sum);
	}
}
