/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_preorder_traversal.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 16:58:27 by aadlercr          #+#    #+#             */
/*   Updated: 2019/08/29 18:34:55 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	ft_preorder_traversal(t_btree *node, void (*applyf)(void *))
{
	if (!(node))
		return ;
	applyf(node->item);
	ft_preorder_traversal(node->left, applyf);
	ft_preorder_traversal(node->right, applyf);
}
