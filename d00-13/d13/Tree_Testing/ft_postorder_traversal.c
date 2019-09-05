/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_postorder_traversal.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 16:51:07 by aadlercr          #+#    #+#             */
/*   Updated: 2019/08/29 18:36:27 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	ft_postorder_traversal(t_btree *node, void (*applyf)(void *))
{
	if (!(node))
		return ;
	ft_postorder_traversal(node->left, applyf);
	ft_postorder_traversal(node->right, applyf);
	applyf(node->item);
}
