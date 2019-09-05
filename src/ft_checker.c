/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 18:48:09 by jkokko            #+#    #+#             */
/*   Updated: 2019/09/04 22:20:35 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/bsq_head.h"

int		ft_check_first_row(char *smbl, char *map, char *lines)
{
	int i;

	i = 0;
	ft_check_smbl_lines(smbl, map, lines);
	if (smbl[0] == smbl[1] || smbl[0] == smbl[2] || smbl[1] == smbl[2])
	{
		write(2, "map error\n", 10);
		return (0);
	}
	while (lines[i] != '\0')
	{
		if (!(lines[i] <= '0' || lines[i] <= '9'))
		{
			write(2, "map error\n", 10);
			return (0);
		}
		i++;
	}
	return (1);
}

int		ft_little_check(int *lwhi, int *linel)
{
	if (linel[1] != linel[0])
		return (1);
	linel[1] = 0;
	linel[2]++;
	lwhi[3]++;
	return (0);
}

int		ft_check_row_length(int lines, char *map, int *lwhi, char *smbl)
{
	int linel[3];

	lwhi[3]++;
	linel[0] = ft_get_line_length(map, lwhi);
	linel[2] = 0;
	linel[1] = 0;
	while (map[lwhi[3]] != '\0')
	{
		while (map[lwhi[3]] != '\n')
		{
			if ((!(map[lwhi[3]] == smbl[0] || map[lwhi[3]] == smbl[1] ||
		map[lwhi[3]] == '\n' || map[lwhi[3]] == '\0')))
				return (0);
			lwhi[3]++;
			linel[1]++;
			if (map[lwhi[3]] == '\0')
				return (0);
		}
		if (ft_little_check(lwhi, linel))
			return (0);
	}
	if (lines != linel[2])
		return (0);
	return (1);
}

int		ft_check_the_map(char *smbl, int lines, char *map, int *lwhi)
{
	lwhi[3] = 0;
	while (map[lwhi[3]] != '\n')
		lwhi[3]++;
	if ((!(ft_check_row_length(lines, map, lwhi, smbl))) || lines == 0)
	{
		write(2, "map error\n", 10);
		return (0);
	}
	return (1);
}

int		ft_check_validity(char *map, int *lwhi)
{
	int		line_count;
	char	*lines;
	char	smbl[3];

	lines = malloc(sizeof(int) * ft_get_height(map));
	if (!(lines) && ft_get_height(map) > 0)
		write(2, "Memory allocation failed!\n", 26);
	if (ft_check_first_row(smbl, map, lines))
	{
		line_count = ft_atoi(lines);
		lwhi[2] = line_count;
		free(lines);
		if (line_count == 0)
		{
			write(2, "map error\n", 10);
			return (0);
		}
		if (ft_check_the_map(smbl, line_count, map, lwhi))
			return (1);
	}
	return (0);
}
