/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/23 10:17:55 by aadlercr          #+#    #+#             */
/*   Updated: 2019/08/23 10:20:29 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_max(int *tab, int length)
{
	int index;

	index = 0;
	*tab = tab[0];
	index++;
	while (index < length)
	{
		if (*tab < tab[index])
			*tab = tab[index];
		index++;
	}
	return (*tab);
}
