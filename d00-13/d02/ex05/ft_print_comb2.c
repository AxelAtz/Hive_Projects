/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 20:00:52 by aadlercr          #+#    #+#             */
/*   Updated: 2019/08/15 11:14:38 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb2(void)
{
	int num1;
	int num2;

	num1 = 0;
	num2 = 0;
	while (num1 < 100)
	{
		while (num2 < 100)
		{
			ft_putchar(num1 / 10 + '0');
			ft_putchar(num1 % 10 + '0');
			ft_putchar(' ');
			ft_putchar(num2 / 10 + '0');
			ft_putchar(num2 % 10 + '0');
			if (num1 != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			num2++;
		}
		num1++;
		num2 = num1 + 1;
	}
}
