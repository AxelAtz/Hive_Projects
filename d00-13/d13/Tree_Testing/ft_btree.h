/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 10:49:41 by aadlercr          #+#    #+#             */
/*   Updated: 2019/08/30 11:47:38 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BTREE_H
# define FT_BTREE_H
# include <stdlib.h>
# include <stdio.h>

typedef struct		s_btree
{
	struct s_btree	*left;
	struct s_btree	*right;
	void			*item;
}					t_btree;

t_btree				*btree_create_node(void *item);

void				ft_preorder_traversal(t_btree *node, void (*applyf)(void *));
void				ft_in_order_traversal(t_btree *node, void (*applyf)(void *));
void				ft_postorder_traversal(t_btree *node, void (*applyf)(void *));
void				btree_insert_data(t_btree **root, void *item, int (*cmpf)(void *, void *));
void				printGivenLevel(t_btree *root, int level);
void				printLevelOrder(t_btree *root);
int					height(t_btree *node);
void				print2D(t_btree *root);
void				print2DUtil(t_btree *root, int space);
void				*btree_search_item(t_btree *root, void *data_ref, int (*cmpf) (void *, void *));
void				btree_level_counter(t_btree *root, int *counter, int *current);
int					btree_level_count(t_btree *root);

#endif
