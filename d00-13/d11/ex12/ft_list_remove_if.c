/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 19:46:06 by aadlercr          #+#    #+#             */
/*   Updated: 2019/08/28 22:48:54 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *head;
	t_list *start;

	head = *begin_list;
	start = head;
	while (head && cmp(head->data, data_ref) == 0)
	{
		head = *begin_list;
		begin_list = &head->next;
		free(head);
	}
	head = *begin_list;
	head = head->next;
	while (head && head->next)
	{
		if (cmp(head->data, data_ref) == 0)
		{
			free(head);
			head = start;
		}
		start = head;
		head = head->next;
	}
}
