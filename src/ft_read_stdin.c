/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_stdin.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 20:36:49 by jkokko            #+#    #+#             */
/*   Updated: 2019/09/04 22:20:48 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/bsq_head.h"

char	*ft_read_stdin_char(void)
{
	char	*stdinfeed;
	int		size;
	int		i;
	int		r;

	i = 0;
	size = 1024;
	stdinfeed = malloc(sizeof(char) * size + 1);
	if (!stdinfeed)
		write(2, "Memory allocation failed!\n", 27);
	while ((r = read(0, &stdinfeed[i], 1024)) > 0)
	{
		i += r;
		if (i >= size)
		{
			size *= 2;
			stdinfeed = ft_realloc(stdinfeed, size);
		}
	}
	stdinfeed[i] = '\0';
	return (stdinfeed);
}

int		ft_read_stdin(void)
{
	int		*i_map;
	char	*unslv_map;
	int		lwhi[4];

	unslv_map = ft_read_stdin_char();
	lwhi[0] = ft_get_height(unslv_map);
	if (ft_check_validity(unslv_map, lwhi))
	{
		i_map = ft_mtoi(&unslv_map[lwhi[0]], lwhi[2] + 1, lwhi[1] + 1);
		ft_set_largest_square(unslv_map, i_map, lwhi[2] + 1, lwhi[1] + 1);
	}
	free(unslv_map);
	return (1);
}
