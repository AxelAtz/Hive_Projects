/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solver.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 18:27:36 by jkokko            #+#    #+#             */
/*   Updated: 2019/09/04 22:20:47 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/bsq_head.h"

void	ft_increment_n_reset(int *num1, int *num2, int by, int to)
{
	*num1 += by;
	*num2 = to;
}

int		*ft_create_buffer(int *i_map, int h, int w)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < w)
		i_map[i++] = 0;
	while (j < h)
		i_map[w * j++] = 0;
	return (i_map);
}

int		*ft_mtoi(char *map, int h, int w)
{
	int i;
	int j;
	int *i_map;

	if (!(i_map = (int*)malloc(((h) * (w) * sizeof(int)))))
		return (0);
	ft_set_value_zero(&i, &j, &i, &j);
	while (i++ < h - 1)
	{
		while (j++ < w - 1)
		{
			if (map[((w) * (i - 1)) + (j - 1)] == map[-3])
				i_map[w * i + j] = i_map[w * i + (j - 1)]
				+ i_map[w * (i - 1) + j] - i_map[w * (i - 1) + (j - 1)] + 1;
			else
				i_map[w * i + j] = i_map[w * i + (j - 1)]
				+ i_map[w * (i - 1) + j] - i_map[w * (i - 1) + (j - 1)] + 0;
		}
		j = 0;
	}
	return (i_map);
}

void	ft_print_solved(char *map, int f_i, int f_j, int s)
{
	int i;
	int j;
	int width;
	int height;

	ft_set_value_zero(&i, &j, &width, &height);
	height = ft_atoi(map);
	map = &map[ft_get_height(map)];
	while (map[width] != '\n')
		width++;
	while (i < height)
	{
		while ((i < f_i || i >= s + f_i) && i < height - 1)
			write(1, &map[i++ * (width + 1)], width + 1);
		while (j < width)
		{
			if ((i >= f_i && i < s + f_i) && (j >= f_j && j < s + f_j))
				ft_putchar(map[-2]);
			else
				ft_putchar(map[((width + 1) * i) + j]);
			j++;
		}
		ft_increment_n_reset(&i, &j, 1, 0);
		ft_putchar('\n');
	}
}

void	ft_set_largest_square(char *map, int *i_m, int h, int w)
{
	int i;
	int j;
	int s;
	int found_i;
	int found_j;

	s = 0;
	ft_set_value_zero(&found_i, &found_j, &i, &j);
	while (i++ < h)
	{
		while (j++ < w)
		{
			if (((j + s) < w) && ((i + s) < h))
				if (!((i_m[w * (i + s) + (j + s)] - i_m[w * (i + s) + (j - 1)]
				- i_m[w * (i - 1) + (j + s)] + i_m[w * (i - 1) + (j - 1)]) > 0))
				{
					found_i = i;
					found_j = j--;
					s++;
				}
		}
		j = 0;
	}
	free(i_m);
	ft_print_solved(map, found_i - 1, found_j - 1, s);
}
