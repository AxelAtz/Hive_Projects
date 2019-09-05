/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output_funcs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 19:51:21 by aadlercr          #+#    #+#             */
/*   Updated: 2019/09/01 23:33:41 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	ft_output_rush(int *rush_nums, int total, int width, int height)
{
	int	i;

	i = 0;
	while (i < total)
	{
		ft_putstr("[rush-0", 1);
		ft_putstr(ft_itoa(rush_nums[i]), 1);
		ft_putstr("] [", 1);
		ft_putstr(ft_itoa(width), 1);
		ft_putstr("] [", 1);
		ft_putstr(ft_itoa(height), 1);
		ft_putstr("]", 1);
		if (++i < total)
			ft_putstr(" || ", 1);
	}
	if (!total)
		ft_putstr("That's no rush!", 2);
	ft_putstr("\n", 1);
}

void	ft_putstr(char *str, int out_put)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	write(out_put, str, i);
}
