/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stdinread.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 11:22:49 by aadlercr          #+#    #+#             */
/*   Updated: 2019/09/01 12:20:50 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_head.h"

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
	if (*height == 0)
		*width = w;
	else
		*width = w / h;
	*height = h;
}

char	*ft_get_stdin(void)
{
	int			buf_size;
	int			counter;
	char		*buf;
	char		holder[1];

	counter = 0;
	buf_size = 16;
	buf = (char*)malloc(buf_size * sizeof(char) + 1);
	if (!(buf))
		return (0);
	while (read(0, holder, 1) > 0)
	{
		buf[counter] = *holder;
		if (counter == buf_size - 1)
		{
			buf_size *= 2;
			buf = ft_realloc(buf, buf_size);
			if (!(buf))
				return (0);
		}
		counter++;
		if (*holder == '\n')
		{
			write(1, "$", 1);
		}
		write(1, holder, 1);
	}
	buf[counter] = '\0';
	return (buf);
}

void	ft_display_file()
{
	int			height;
	int			width;
	char		**arr;
	char		*buf;

	buf = ft_get_stdin();
	ft_count_size(buf, &width, &height);
	if (!(arr = array_init(height, width, buf)))
		return ;
	printf("2d array:\n");
	for(int i = 0; i < height; i ++)
	{
		for(int j = 0; j < width; j++)
			printf("%c", arr[i][j]);
		printf("$\n");
	}
	free(buf);
	printf("\nheight %d | width %d \n", height, width);
}

int		main(int argc, char **argv)
{
	ft_display_file();
	return (0);
}
