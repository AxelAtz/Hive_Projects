/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 19:51:16 by aadlercr          #+#    #+#             */
/*   Updated: 2019/09/01 23:38:08 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

char	*ft_get_syms(int rush, int level, char *sym)
{
	char		*res;
	int			i;

	res = (char*)malloc(3);
	i = 0;
	while (i < 3)
	{
		res[i] = sym[(rush * 9) + (level * 3) + i];
		i++;
	}
	return (res);
}

int		ft_init_row(int height, int width, char **arr, char *syms)
{
	int i;

	i = 0;
	if (!(arr[height][i] == syms[0]))
		return (0);
	i++;
	while (i < width - 1)
	{
		if (!(arr[height][i] == syms[1]))
			return (0);
		i++;
	}
	if (i < width)
	{
		if (!(arr[height][i] == syms[2]))
			return (0);
	}
	return (1);
}

int		ft_validate_input(char **arr, int rush, int width, int height)
{
	static char	*sym = "o-o| |o-o/*\\* *\\*/ABAB BCBCABCB BABCABCB BCBA";
	int			i;

	i = 0;
	if (!(ft_init_row(i, width, arr, ft_get_syms(rush, 0, sym))))
		return (0);
	i++;
	while (i < height - 1)
	{
		if (!(ft_init_row(i, width, arr, ft_get_syms(rush, 1, sym))))
			return (0);
		i++;
	}
	if (i < height)
	{
		if (!(ft_init_row(i, width, arr, ft_get_syms(rush, 2, sym))))
			return (0);
	}
	return (1);
}

void	ft_find_rush(int width, int height, char **arr)
{
	int			i;
	int			total;
	static int	matching[5] = {0};

	i = 0;
	total = 0;
	while (i < 5)
	{
		if (ft_validate_input(arr, i, width, height))
		{
			matching[total] = i;
			total++;
		}
		i++;
	}
	ft_output_rush(matching, total, width, height);
}

int		main(void)
{
	char			*buffer;
	char			**array;
	int				width;
	int				height;

	buffer = ft_get_stdin();
	if (!buffer)
	{
		ft_putstr("That's no rush!\n", 2);
		return (1);
	}
	ft_count_size(buffer, &width, &height);
	if (!width || !height)
		return (1);
	array = array_init(height, width, buffer);
	ft_find_rush(width, height, array);
	return (0);
}
