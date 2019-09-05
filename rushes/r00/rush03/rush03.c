/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpesonen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 17:19:28 by kpesonen          #+#    #+#             */
/*   Updated: 2019/08/18 17:19:32 by kpesonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_init(int arrlimt, int row, char arr[row][arrlimt], char line_arr[3])
{
	int x;

	x = 0;
	arr[row][x] = line_arr[0];
	x++;
	while (x < arrlimt - 1)
	{
		arr[row][x] = line_arr[1];
		x++;
	}
	if (x == arrlimt - 1)
		arr[row][x] = line_arr[2];
}

void	ft_array_printer(int width, int height, char arr[height][width])
{
	int x;
	int y;

	y = 0;
	while (y < height)
	{
		x = 0;
		while (x < width)
		{
			ft_putchar(arr[y][x]);
			x++;
		}
		ft_putchar('\n');
		y++;
	}
}

void	rush03(int x, int y)
{
	char		arr[y][x];
	int			height;
	static char	arr1[] = {'A', 'B', 'C'};
	static char	arr2[] = {'B', ' ', 'B'};
	static char	arr3[] = {'A', 'B', 'C'};

	height = 0;
	if (x > 0 && y > 0)
	{
		ft_init(x, height, arr, arr1);
		height++;
		while (height < y - 1)
		{
			ft_init(x, height, arr, arr2);
			height++;
		}
		if (height == y - 1)
			ft_init(x, height, arr, arr3);
	}
	ft_array_printer(x, y, arr);
	return ;
}
