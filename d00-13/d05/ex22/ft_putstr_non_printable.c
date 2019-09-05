/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 19:22:12 by aadlercr          #+#    #+#             */
/*   Updated: 2019/08/20 23:07:16 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr_base(int nbr, char *base)
{
	int	lenbase;

	lenbase = 16;
	if (nbr < lenbase && nbr >= 0)
		ft_putchar(base[nbr]);
	else if (lenbase > 1)
	{
		ft_putnbr_base(nbr / lenbase, base);
		ft_putnbr_base(nbr % lenbase, base);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int			index;
	static char	hexbase[] = "0123456789abcdef";
	int			lenbase;
	int			result;

	index = 0;
	lenbase = 15;
	result = 0;
	while (str[index] != '\0' && index < 3000)
	{
		if (str[index] < 32 || str[index] == 127)
		{
			ft_putchar('\\');
			result = str[index];
			if (result < 16)
				ft_putchar('0');
			ft_putnbr_base((result), hexbase);
		}
		else
		{
			ft_putchar(str[index]);
		}
		index++;
		result = 0;
	}
}
