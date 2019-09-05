/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_arg.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 18:31:42 by jkokko            #+#    #+#             */
/*   Updated: 2019/09/04 22:20:37 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/bsq_head.h"

char	*ft_read_map_to_char(int fd)
{
	char			*unsolved_map;
	int				size;
	int				i;
	int				r;

	i = 0;
	size = 1024;
	unsolved_map = malloc(sizeof(char) * size + 1);
	if (!unsolved_map)
		write(2, "Memory allocation failed!\n", 27);
	while ((r = read(fd, &unsolved_map[i], 1024)) > 0)
	{
		i += r;
		if (i >= size)
		{
			size *= 2;
			unsolved_map = ft_realloc(unsolved_map, size);
		}
	}
	unsolved_map[i] = '\0';
	return (unsolved_map);
}

char	*ft_open_map_to_char(char *arg)
{
	char	*unsolved_map;
	int		fd;

	fd = open(arg, O_RDONLY);
	if (fd == -1)
		write(2, "File opening failed!\n", 22);
	unsolved_map = ft_read_map_to_char(fd);
	if (close(fd) == -1)
		write(2, "File closing failed!\n", 22);
	return (unsolved_map);
}

int		ft_read_args(int ac, char **av)
{
	int		i;
	int		*i_map;
	char	*unslv_map;
	int		lwhi[4];

	i = 1;
	while (ac > 1)
	{
		unslv_map = ft_open_map_to_char(av[i]);
		lwhi[0] = ft_get_height(unslv_map);
		if (ft_check_validity(unslv_map, lwhi))
		{
			i_map = ft_mtoi(&unslv_map[lwhi[0]], lwhi[2] + 1, lwhi[1] + 1);
			ft_set_largest_square(unslv_map, i_map, lwhi[2] + 1, lwhi[1] + 1);
		}
		free(unslv_map);
		ac--;
		if (ac != 1)
			write(1, "\n", 1);
		i++;
	}
	return (1);
}
