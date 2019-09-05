/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 14:09:28 by aadlercr          #+#    #+#             */
/*   Updated: 2019/08/17 14:13:24 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int fib;

	if (index < 0)
	{
		return (-1);
	}
	else if (index <= 1)
	{
		return (index);
	}
	else
	{
		fib = (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
		return (fib);
	}
}
