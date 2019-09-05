/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 18:54:41 by aadlercr          #+#    #+#             */
/*   Updated: 2019/08/28 21:10:01 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list *head;

	head = begin_list;
	while (head)
	{
		if (cmp(head->data, data_ref) == 0)
			return (head);
		head = head->next;
	}
	return (0);
}
