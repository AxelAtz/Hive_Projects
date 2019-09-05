/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/21 13:54:16 by aadlercr          #+#    #+#             */
/*   Updated: 2019/08/21 14:50:25 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	index;
	int diff;
	int minim;
	int *ptr;

	index = 0;
	diff = 0;
	minim = min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	while (minim < max)
	{
		minim++;
		diff++;
	}
	if (!(ptr = (int*)malloc(diff * 4)))
		return (0);
	while (min < max)
		ptr[index++] = min++;
	*range = ptr;
	return (diff);
}
