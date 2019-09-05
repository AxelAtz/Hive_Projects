/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 20:09:54 by aadlercr          #+#    #+#             */
/*   Updated: 2019/08/17 11:44:28 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nmb)
{
	int factorial;

	factorial = 1;
	if (nmb < 0 || nmb > 12)
	{
		return (0);
	}
	while (nmb > 1)
	{
		factorial *= nmb--;
	}
	return (factorial);
}
