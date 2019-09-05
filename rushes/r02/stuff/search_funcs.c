/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_funcs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 19:51:31 by aadlercr          #+#    #+#             */
/*   Updated: 2019/09/01 23:20:23 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

/*
**  ft_search 2D array for specific (unique) characters.
**	Returns a pointer to a static array containing
**	up to 3 unique characters.
*/

void	ft_find_symbols(char **array, int width, int height, char found[4])
{
	static char	symbols[] = "ABC/*\\o-| ";
	int			ft_match;
	int			total;
	int			w;
	int			h;

	total = 0;
	w = 0;
	h = 0;
	while (h < height && total < 3)
	{
		w = 0;
		while (w < width)
		{
			ft_match = ft_search(symbols, array[h][w]);
			if (ft_match != -1)
			{
				if (ft_search(found, symbols[ft_match]) == -1 &&
				symbols[ft_match] != ' ')
					found[total++] = symbols[ft_match];
			}
			++w;
		}
		++h;
	}
}

/*
**  ft_search for a character in a string of symbols
**	Returns index for the ft_match.
**	Returns -1 if not found.
*/

int		ft_search(char *symbols, char c)
{
	int		x;

	x = 0;
	while (symbols[x])
	{
		if (symbols[x] == c)
		{
			return (x);
		}
		++x;
	}
	return (-1);
}

/*
**  ft_search for any characters in a string of symbols
**	Returns 1 if any character is found.
**	Returns 0 if not found.
*/

int		ft_search_any(char *allowed, char *symbols)
{
	int	x;
	int	y;

	x = 0;
	while (symbols[x])
	{
		y = 0;
		while (allowed[y])
		{
			if (symbols[x] == allowed[y])
				return (1);
			++y;
		}
		++x;
	}
	return (0);
}
