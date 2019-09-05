/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 15:17:58 by aadlercr          #+#    #+#             */
/*   Updated: 2019/08/30 08:53:11 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root,
void *item, int (*cmpf) (void *, void *))
{
	t_btree *node;
	t_btree *top;

	top = *root;
	if (!(top))
		*root = btree_create_node(item);
	else if (cmpf(item, top->item) < 0)
		btree_insert_data(&top->left, item, cmpf);
	else
	{
		btree_insert_data(&top->right, item, cmpf);
	}
}
