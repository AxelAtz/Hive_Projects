/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 18:53:33 by aadlercr          #+#    #+#             */
/*   Updated: 2019/08/27 19:08:37 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list *ptr;
	t_list *clear_ptr;

	ptr = *begin_list;
	while (1)
	{
		clear_ptr = ptr;
		if (ptr->next != 0)
		{
			free(clear_ptr);
			break ;
		}
		ptr->next = ptr;
		free(clear_ptr);
	}
	*begin_list = NULL;
}
