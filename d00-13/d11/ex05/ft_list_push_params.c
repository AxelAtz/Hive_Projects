/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 18:38:39 by aadlercr          #+#    #+#             */
/*   Updated: 2019/08/28 18:50:36 by aadlercr         ###   ########.fr       */
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

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list *head;

	if (ac < 1)
		return (0);
	head = ft_create_elem(*av);
	av++;
	while (*av)
	{
		ft_list_push_front(&head, *av);
		av++;
	}
	return (head);
}
