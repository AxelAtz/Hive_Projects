/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 19:11:38 by aadlercr          #+#    #+#             */
/*   Updated: 2019/08/28 18:47:58 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list			*ptr;
	t_list			*res;
	unsigned int	counter;

	counter = 0;
	ptr = begin_list;
	res = 0;
	while (counter < nbr && ptr)
	{
		counter++;
		if (!ptr)
			return (0);
		ptr = ptr->next;
	}
	res = ptr;
	return (res);
}
