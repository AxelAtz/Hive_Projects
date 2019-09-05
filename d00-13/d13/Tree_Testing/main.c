#include "ft_btree.h"
#include "stdio.h"

void printf_data(void *data)
{
	printf("\ndata: %s", data);
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int main(int argc, char const *argv[])
{
	t_btree *root;
	t_btree *node2;
	t_btree *node3;
	t_btree *node4;
	t_btree *node5;
	void (*applyf)(void *) = printf_data;
	int (*cmpf)(void *, void *) = ft_strcmp;
	root = NULL;
	btree_search_item(root, "CA", cmpf);
	printf("%s\n", btree_search_item(root, "5", cmpf));


	btree_insert_data(&root, "15", cmpf);
	btree_insert_data(&root, "22", cmpf);
	btree_insert_data(&root, "12", cmpf);
	btree_insert_data(&root, "9", cmpf);
	btree_insert_data(&root, "12", cmpf);
	btree_insert_data(&root, "5", cmpf);
	btree_insert_data(&root, "5", cmpf);


	print2D(root);
	printf("%s\n", btree_search_item(root, "25", cmpf));

	printf("\nLevel: %d", btree_level_count(root));

	printf("\nIn order");
	ft_in_order_traversal(root, applyf);
	printf("\nPre order");
	ft_preorder_traversal(root, applyf);
	printf("\nPost order");
	ft_postorder_traversal(root, applyf);
	return (0);
}
