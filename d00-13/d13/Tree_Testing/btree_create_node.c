/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 11:26:30 by aadlercr          #+#    #+#             */
/*   Updated: 2019/08/29 11:31:43 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree *node;

	if (!(node = (t_btree*)malloc(sizeof(t_btree))))
		return (0);

	node->item = item;
	node->left = 0;
	node->right = 0;
	return (node);
}
