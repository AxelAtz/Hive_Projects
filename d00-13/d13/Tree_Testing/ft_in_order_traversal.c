/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_in_order_traversal.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 11:42:25 by aadlercr          #+#    #+#             */
/*   Updated: 2019/08/29 18:34:17 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	ft_in_order_traversal(t_btree *node, void (*applyf)(void *))
{
	if (!(node))
		return ;
	ft_in_order_traversal(node->left, applyf);
	applyf(node->item);
	ft_in_order_traversal(node->right, applyf);
}
