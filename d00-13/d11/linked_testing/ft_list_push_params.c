/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 18:38:39 by aadlercr          #+#    #+#             */
/*   Updated: 2019/08/28 18:50:24 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

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
