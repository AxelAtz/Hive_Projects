/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 15:23:55 by aadlercr          #+#    #+#             */
/*   Updated: 2019/08/28 13:49:43 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *node;
	t_list *head;

	head = *begin_list;
	node = ft_create_elem(data);
	if (!head)
		*begin_list = node;
	else
	{
		while (head->next != 0)
		{
			head = head->next;
		}
		head->next = node;
	}
}
