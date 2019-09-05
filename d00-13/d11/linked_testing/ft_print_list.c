/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 11:55:18 by aadlercr          #+#    #+#             */
/*   Updated: 2019/08/28 12:36:41 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

void	ft_print_list(t_list *head)
{
	t_list *current;

	current = head;
	printf("\n");
	while (current)
	{
		printf("%s | ", current->data);
		current = current->next;
	}
}
