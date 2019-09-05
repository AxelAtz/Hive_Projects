/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 12:41:48 by aadlercr          #+#    #+#             */
/*   Updated: 2019/08/15 11:14:06 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb(void)
{
	char fst[3];

	fst[0] = '0';
	while (fst[0] <= '7')
	{
		while ((fst[1] = fst[0] + 1) <= '8')
		{
			fst[2] = fst[1] + 1;
			while (fst[2] <= '9')
			{
				ft_putchar(fst[0]);
				ft_putchar(fst[1]);
				ft_putchar(fst[2]);
				if (!(fst[0] == '7' && fst[1] == '8' && fst[2] == '9'))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				fst[2]++;
			}
			fst[1]++;
		}
		fst[0]++;
	}
}
