/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/21 11:59:13 by aadlercr          #+#    #+#             */
/*   Updated: 2019/08/21 14:50:35 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *int_arr;
	int	index;
	int diff;
	int minim;

	index = 0;
	diff = 0;
	minim = min;
	int_arr = NULL;
	if (min >= max)
		return (int_arr);
	while (minim < max)
	{
		minim++;
		diff++;
	}
	if (!(int_arr = (int*)malloc(diff * 4)))
		return (0);
	while (min < max)
	{
		int_arr[index++] = min++;
	}
	return (int_arr);
}
