/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 18:31:31 by aadlercr          #+#    #+#             */
/*   Updated: 2019/08/28 18:47:32 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list *head;
	t_list *res;

	head = begin_list;
	if (!head)
		return (0);
	else
	{
		while (head)
		{
			res = head;
			head = head->next;
		}
		return (res);
	}
}
