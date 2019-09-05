/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_pretty_tree.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 08:35:10 by aadlercr          #+#    #+#             */
/*   Updated: 2019/08/30 08:35:59 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define COUNT 10 
#include "ft_btree.h"

void print2DUtil(t_btree *root, int space)
{ 
    // Base case 
    if (root == NULL) 
        return; 
  
    // Increase distance between levels 
    space += COUNT; 
  
    // Process right child first 
    print2DUtil(root->right, space); 
  
    // Print current node after space 
    // count 
    printf("\n"); 
    for (int i = COUNT; i < space; i++) 
        printf(" "); 
    printf("%s\n", root->item); 
  
    // Process left child 
    print2DUtil(root->left, space); 
} 
  
// Wrapper over print2DUtil() 
void print2D(t_btree *root) 
{ 
   // Pass initial space count as 0 
   print2DUtil(root, 0); 
}