#include "ft_btree.h"

void	btree_level_counter(t_btree *root, int *counter, int *current)
{
	char *thing = root->item;
	if (!(root))
	{
		*current = 0;
		return ;
	}
	else if (root->left && root->right)
	{
		*current += 1;
		if (*counter < *current)
		{
			*counter += 1;
		}
		btree_level_counter(root->left, counter, current);
		*current += 1;
		if (*counter < *current)
		{
			*counter += 1;
		}
		btree_level_counter(root->right, counter, current);
	}
	else if (root->left && !root->right)
	{
		*current += 1;
		if (*counter < *current)
		{
			*counter += 1;
		}
		
		btree_level_counter(root->left, counter, current);
	}
	else if (!root->left && root->right)
	{
		*current += 1;
		if (*counter < *current)
		{
			*counter += 1;
		}
		
		btree_level_counter(root->right, counter, current);
	}
	else
	{
		*current += 1;
		if (*counter < *current)
		{
			*counter += 1;
		}
		
		*current = 0;
	}
}

int		btree_level_count(t_btree *root)
{
	int counter;
	int current;

	counter = 0;
	current = 0;
	btree_level_counter(root, &counter, &current);
	return (counter);
}
