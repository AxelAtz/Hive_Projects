/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 11:22:36 by aadlercr          #+#    #+#             */
/*   Updated: 2019/09/01 11:22:38 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_head.h"

char	**array_init(int height, int width, char *buf)
{
	char **arr;
	int i;
	int j;
	int k;

	j = 0;
	i = 0;
	k = 0;
	arr = (char **)malloc(height * sizeof(char*));
	if (!arr)
		return (0);
	while (i < height)
		arr[i++] = (char*)malloc(width * sizeof(char));
	i = 0;
	printf("\nArray init: \n");
	while (i < height)
	{
		while (j < width)
		{
			arr[i][j++] = buf[k++ + i];
			printf("%c", arr[i][j - 1]);
		}
		printf("\n");
		j = 0;
		i++;
	}
	return (arr);
}

char	*ft_memcpy(char *dest, char *src, unsigned int size)
{
	char *s;
	char *d;

	s = src;
	d = dest;
	while (size--)
	{
		*d++ = *s++;
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
		if (!(newptr = (char*)malloc(size * sizeof(char))))
			return (0);
		return (newptr);
	}
	else
	{
		if (!(newptr = (char*)malloc(size * sizeof(char))))
			return (0);
		newptr = ft_memcpy(newptr, src, current_size);
		free(src);
		return (newptr);
	}
}
