/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 14:56:20 by aadlercr          #+#    #+#             */
/*   Updated: 2019/08/27 19:26:47 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list *new;

	if (!(new = (t_list*)malloc(sizeof(t_list))))
		return (0);
	new->data = data;
	new->next = NULL;
	return (new);
}
