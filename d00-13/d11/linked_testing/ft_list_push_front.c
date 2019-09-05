/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 18:11:55 by aadlercr          #+#    #+#             */
/*   Updated: 2019/08/28 12:54:28 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *node;
	t_list *head;

	head = *begin_list;
	node = ft_create_elem(data);
	if (!head)
		*begin_list = node;
	else
	{
		node->next = head;
		*begin_list = node;
	}
}
