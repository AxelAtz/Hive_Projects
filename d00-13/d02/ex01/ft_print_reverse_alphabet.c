/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 11:33:48 by aadlercr          #+#    #+#             */
/*   Updated: 2019/08/15 08:47:29 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_reverse_alphabet(void)
{
	char a;

	a = 'z';
	while (a >= 'a')
	{
		ft_putchar(a);
		a--;
	}
}
