/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 14:44:42 by aadlercr          #+#    #+#             */
/*   Updated: 2019/08/17 18:11:36 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int index)
{
	int counter;

	counter = 0;
	while ((counter++) < 46341)
	{
		if ((index % counter) == 0 && (counter * counter) == index)
		{
			return (counter);
		}
	}
	return (0);
}
