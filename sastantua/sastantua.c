/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 17:49:30 by aadlercr          #+#    #+#             */
/*   Updated: 2019/08/18 18:30:46 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	ft_print_line(int width)
{
	int count;
	
	count = 0;
	while(count < width)
	{
		if (count == 0)
		{
			ft_putchar('/');
			count++;
		}
		else if (count < width - 1)
		{
			ft_putchar('*');
			count++;
		}
		else
		{
			ft_putchar('\\');
			count++;
		}
	}
	ft_putchar('\n');
}

void	ft_print_pyramid(int layer)
{
	int rows;

	rows = 1;	
	while (rows <= layer + 3){
		ft_print_line(2 * rows + 1);
		rows++;
	}
}
int		ft_find_space(int layer, int row)

void	sastantua(int size)
{
	int layer;

	layer = 0;
	while (layer < size)
		{
			ft_print_pyramid(layer);
			layer++;
		}
}