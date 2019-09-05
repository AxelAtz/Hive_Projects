#include "ft_btree.h"

void	btree_level_counter(t_btree *root, int *counter)
{
	int current;  

	current = *counter;
	if (!(root))
	{
		return ;
	}
	else if (root->left && root->right)
	{
		btree_level_counter(root->left, counter);
		btree_level_counter(root->right, counter);
	}
	else if (root->left && !root->right)
		btree_level_counter(root->left, counter);
	else if (!root->left && root->right)
		btree_level_counter(root->right, counter);
	if (*counter <= current++)
		*counter += 1;
}

int		btree_level_count(t_btree *root)
{
	int counter;

	counter = 0;
	btree_level_counter(root, &counter);
	return (counter);
}
