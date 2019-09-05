/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_operators.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/26 20:07:19 by aadlercr          #+#    #+#             */
/*   Updated: 2019/08/26 20:08:09 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_helpers.h"

void	ft_add(int a, int b)
{
	ft_putnbr(a + b);
	ft_putchar('\n');
}

void	ft_sub(int a, int b)
{
	ft_putnbr(a - b);
	ft_putchar('\n');
}

void	ft_multiply(int a, int b)
{
	ft_putnbr(a * b);
	ft_putchar('\n');
}

void	ft_divide(int a, int b)
{
	int division;

	if (b == 0)
	{
		ft_putstr("Stop : division by zero\n");
	}
	else
	{
		division = a / b;
		ft_putnbr(division);
		ft_putchar('\n');
	}
}

void	ft_modulo(int a, int b)
{
	int modulo;

	if (b == 0)
	{
		ft_putstr("Stop : modulo by zero\n");
	}
	else
	{
		modulo = a % b;
		ft_putnbr(modulo);
		ft_putchar('\n');
	}
}
