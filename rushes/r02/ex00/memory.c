/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 15:13:43 by aadlercr          #+#    #+#             */
/*   Updated: 2019/09/01 23:10:09 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

char	**array_init(int height, int width, char *buf)
{
	char	**arr;
	int		i;
	int		j;
	int		k;

	j = 0;
	i = 0;
	k = 0;
	arr = (char **)malloc(height * sizeof(char*));
	if (!arr)
		return (0);
	while (i < height)
		arr[i++] = (char*)malloc(width * sizeof(char));
	i = 0;
	while (i < height)
	{
		while (j < width)
		{
			arr[i][j++] = buf[k++ + i];
		}
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

char	*ft_get_stdin(void)
{
	int			buf_size;
	int			counter;
	char		*buf;
	char		holder[1];

	counter = 0;
	buf_size = 8;
	buf = (char*)malloc(buf_size * sizeof(char) + 1);
	if (!(buf))
		return (0);
	while (read(0, holder, 1) > 0)
	{
		buf[counter] = *holder;
		if (counter >= buf_size - 1)
		{
			buf_size *= 2;
			buf = ft_realloc(buf, buf_size);
		}
		counter++;
	}
	buf[counter] = '\0';
	return (buf);
}

void	ft_count_size(char *arr, int *width, int *height)
{
	int i;
	int w;
	int h;

	h = 0;
	w = 0;
	i = 0;
	while (arr[i])
	{
		if (arr[i] != '\n')
			w++;
		else
			h++;
		i++;
	}
	if (h == 0)
		*width = w;
	else
		*width = w / h;
	*height = h;
}
