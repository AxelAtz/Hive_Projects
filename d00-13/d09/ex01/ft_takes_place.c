/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 18:39:21 by aadlercr          #+#    #+#             */
/*   Updated: 2019/08/22 18:40:51 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_find_am_pm(int hour)
{
	if (hour < 1200 && hour >= 0000)
		return ("A.M.");
	if (hour >= 1200 && hour < 2400)
		return ("P.M.");
}

char	*ft_find_min(int hour)
{
	static char min[3];

	if (hour % 100 < 10)
	{
		min[0] = '0';
		min[1] = (hour % 100) + '0';
		return (min);
	}
	else
	{
		min[0] = ((hour / 10) % 10) + '0';
		min[1] = (hour % 10) + '0';
		return (min);
	}
}

void	ft_takes_place(int hour)
{
	if (hour < 1200 && hour > 0000)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.%s %s AND %d.%s %s\n",
		hour / 100, ft_find_min(hour), ft_find_am_pm(hour), (hour + 100) / 100,
		ft_find_min(hour), ft_find_am_pm(hour + 100));
	}
	else if (hour > 1200 && hour < 2400)
	{
		hour -= 1200;
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.%s %s AND %d.%s %s\n",
		hour / 100, ft_find_min(hour), ft_find_am_pm(hour), (hour + 100) / 100,
		ft_find_min(hour), ft_find_am_pm(hour + 100));
	}
}
