/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   efficiency_test_norm_write_improve.c               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 20:15:45 by aadlercr          #+#    #+#             */
/*   Updated: 2019/09/03 15:37:08 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq_head.h"
#include <time.h>

/* 
** ft_mtoi converts map input into an integer array that is + 1 wider and higher
** than map for segfault protection purposes this array contains numbers 0 or 1
** 0 for empty space and 1 for obstacle
*/

int		*ft_mtoi(char *map, int height, int width)
{
	int i;
	int j;
	int *i_map;

	i = 1;
	j = 1;
	i_map = (int*)malloc(((height) * (width) * sizeof(int)));
	i_map[width - 1] = 0;
	i_map[width * (height - 1)] = 0;
	while (i < height)
	{
		while (j < width)
		{
			if (i - 1 == 0 || j - 1 == 0)
				i_map[(width * (i - 1)) + j - 1] = 0;
			if (map[((width) * (i - 1)) + (j - 1)] == map[-3])
				i_map[(width * i) + j] = 1;
			else
				i_map[(width * i) + j] = 0;
			j++;
		}
		j = 1;
		i++;
	}
	return (i_map);
}

/*
** ft_set_values takes the integer map and converts it to a numbered map 
** according to amount of encountered obstacles from top left
*/

int		*ft_set_values(int *i_map, int height, int width)
{
	int i;
	int j;

	i = 1;
	j = 1;
	while (i < height)
	{
		while (j < width)
		{
			i_map[(width * i) + j] = i_map[(width * i) + (j - 1)]
									+ i_map[(width * (i - 1)) + j]
									- i_map[(width * (i - 1)) + (j - 1)]
									+ i_map[(width * (i)) + (j)];
			j++;
		}
		j = 1;
		i++;
	}
	return (i_map);
}

/*
** ft_print_solved prints the solved map taking as arguments the starting index for
** the found square and its size
*/

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
				ft_putchar(map[((width + 1) * (i)) + (j)]);
			j++;
		}
		ft_putchar('\n');
		i++;
		j = 0;
	}
	printf("\nFound square of size: %d", s);
}

/*
** ft_set_largest_square takes the integer map and character map, finding
** the largest square and sending it to ft_print_solved
*/

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
	ft_print_solved(map, found_i - 1, found_j - 1, s);
}

char	*ft_read_map_to_char(char *arg)
{
	int				fd;
	char			*unsolved_map;
	unsigned int	size;
	int				i;

	i = 0;
	size = 8;
	unsolved_map = malloc(sizeof(char) * size + 1);
	if (!unsolved_map)
		printf("Error0!\n");
	fd = open(arg, O_RDONLY);
	if (fd == -1)
		printf("Error1!\n");
	while ((read(fd, &unsolved_map[i], 1)) > 0)
	{
		if (i >= size - 1)
		{
			size *= 2;
			unsolved_map = ft_realloc(unsolved_map, size);
		}
		i++;
	}
	unsolved_map[i] = '\0';
	if (close(fd) == -1)
		return ("Error2!\n");
	return (unsolved_map);
}

int		main(int argc, char **argv)
{
	int			*i_map;
	int			height;
	int			width;
	int			lead;
	char		*map;

	map = ft_read_map_to_char(argv[1]);
	height = ft_atoi(map);
	width = 0;
	lead = ft_get_height(map);
	while (map[width + lead] != '\n')
		width++;
	i_map = ft_mtoi(&map[lead], height + 1, width + 1);
	i_map = ft_set_values(i_map, height + 1, width + 1);
	ft_set_largest_square(map, i_map, height + 1, width + 1);
	return (0);
}
