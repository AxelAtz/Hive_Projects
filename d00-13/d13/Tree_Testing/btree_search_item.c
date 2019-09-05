/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 08:56:08 by aadlercr          #+#    #+#             */
/*   Updated: 2019/08/30 09:45:06 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_items(t_btree *root,
void *data_ref, int (*cmpf)(void *, void *), void **res)
{
	if (!(root))
		return (0);
	btree_search_items(root->left, data_ref, cmpf, res);
	if (cmpf(root->item, data_ref) == 0)
	{
		*res = root->item;
		return (0);
	}
	btree_search_items(root->right, data_ref, cmpf, res);
	return (0);
}

void	*btree_search_item(t_btree *root,
void *data_ref, int (*cmpf)(void *, void *))
{
	void *res;

	res = 0;
	btree_search_items(root, data_ref, cmpf, &res);
	return (res);
}
