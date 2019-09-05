/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 18:20:23 by aadlercr          #+#    #+#             */
/*   Updated: 2019/08/28 12:26:43 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	t_list	*ptr;
	int		counter;

	counter = 0;
	ptr = begin_list;
	if (!ptr)
		return (0);
	while (ptr)
	{
		counter++;
		ptr = ptr->next;
	}
	return (counter);
}
