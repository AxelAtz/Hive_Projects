/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memory.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 19:59:29 by jkokko            #+#    #+#             */
/*   Updated: 2019/09/04 22:20:36 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/bsq_head.h"

char	*ft_memcpy(char *dest, char *src, unsigned int size)
{
	int i;

	i = 0;
	while (size != 0)
	{
		dest[i] = src[i];
		size--;
		i++;
	}
	return (dest);
}

char	*ft_realloc(char *src, unsigned int size)
{
	char			*newptr;
	unsigned int	current_size;

	current_size = size / 2;
	if (!src)
	{
		if (!(newptr = (char*)malloc(size * sizeof(char) + 1)))
			return (0);
		return (newptr);
	}
	else
	{
		if (!(newptr = (char*)malloc(size * sizeof(char) + 1)))
			return (0);
		newptr = ft_memcpy(newptr, src, current_size);
		free(src);
		return (newptr);
	}
}

void	ft_set_value_zero(int *n1, int *n2, int *n3, int *n4)
{
	*n1 = 0;
	*n2 = 0;
	*n3 = 0;
	*n4 = 0;
}

int		ft_get_line_length(char *map, int *lwhi)
{
	int linel;

	linel = 0;
	while (map[lwhi[3]] != '\n')
	{
		lwhi[3]++;
		linel++;
	}
	lwhi[1] = linel;
	lwhi[3] -= linel;
	return (linel);
}

int		ft_check_smbl_lines(char *smbl, char *map, char *lines)
{
	int i;

	i = 0;
	while (map[i] != '\0')
	{
		if (map[i + 1] == '\n')
		{
			smbl[0] = map[i - 2];
			smbl[1] = map[i - 1];
			smbl[2] = map[i];
			lines[i - 2] = '\0';
			while ((i - 3 >= 0))
			{
				lines[i - 3] = map[i - 3];
				i--;
			}
			break ;
		}
		i++;
	}
	return (1);
}
