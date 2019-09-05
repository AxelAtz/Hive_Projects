/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_tree.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 08:16:46 by aadlercr          #+#    #+#             */
/*   Updated: 2019/08/30 08:33:31 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int		height(t_btree *node)
{
	if (node == NULL)
		return (0);
	else
	{ 
		/* compute the height of each subtree */
		int lheight = height(node->left);
		int rheight = height(node->right);
		/* use the larger one */
		if (lheight > rheight)
			return(lheight + 1);
		else return(rheight + 1);
	}
}

void	printGivenLevel(t_btree *root, int level)
{
	if (root == NULL)
		return ;
	if (level == 1)
	{
		for(int i = level; i>0; i--)
			printf("");
		printf("%s ", root->item);
	}
	else if (level > 1)
	{
		printGivenLevel(root->left, level - 1);
		printf(" ");
		printGivenLevel(root->right, level - 1);
		printf("");
	}
}

void	printLevelOrder(t_btree *root)
{
	int h = height(root);
	int i;
	for (i=1; i<=h; i++)
	{
		printGivenLevel(root, i);
		printf("\n");
	}
}

