/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 13:47:46 by aadlercr          #+#    #+#             */
/*   Updated: 2019/08/20 18:51:04 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_check_valid_base(char *base)
{
	int	lenbase;
	int i;

	i = 0;
	lenbase = 0;
	while (base[lenbase] != '\0')
	{
		if (base[lenbase] == '+' || base[lenbase] == '-')
			return (0);
		lenbase++;
		while (i++ < lenbase)
			if (base[lenbase] == base[i - 1])
				return (0);
		i = 0;
	}
	return (lenbase);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	lenbase;

	lenbase = ft_check_valid_base(base);
	if (nbr < 0 && lenbase > 1)
	{
		ft_putchar('-');
		ft_putnbr_base((nbr / lenbase) * -1, base);
		ft_putnbr_base((nbr % lenbase) * -1, base);
	}
	else if (nbr < lenbase && nbr >= 0 && lenbase > 1)
		ft_putchar(base[nbr]);
	else if (lenbase > 1)
	{
		ft_putnbr_base(nbr / lenbase, base);
		ft_putnbr_base(nbr % lenbase, base);
	}
}
