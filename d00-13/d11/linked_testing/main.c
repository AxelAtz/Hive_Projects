#include "ft_list.h"
#include <stdio.h>

t_list	*ft_create_elem(void *data)
{
	t_list *new;

	if (!(new = (t_list*)malloc(sizeof(t_list))))
		return (0);
	new->data = data;
	new->next = NULL;
	return (new);
}

void	ft_print_list(t_list *head)
{
	t_list *current;

	current = head;
	printf("\n");
	while (current)
	{
		printf("%s | ", current->data);
		current = current->next;
	}
}

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *node;
	t_list *head;

	head = *begin_list;
	node = ft_create_elem(data);
	if (!head)
		*begin_list = node;
	else
	{
		while (head->next != 0)
		{
			head = head->next;
		}
		head->next = node;
	}
}

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *node;
	t_list *head;

	head = *begin_list;
	node = ft_create_elem(data);
	if (!head)
		*begin_list = node;
	else
	{
		node->next = head;
		*begin_list = node;
	}
}

int	ft_list_size(t_list *begin_list)
{
	t_list	*ptr;
	int		counter;

	counter = 0;
	ptr = begin_list;
	if (!ptr)
		return (0);
	while (ptr)
	{
		counter++;
		ptr = ptr->next;
	}
	return (counter);
}

t_list	*ft_list_last(t_list *begin_list)
{
	t_list *head;
	t_list *res;

	head = begin_list;
	if (!head)
		return (0);
	else
	{
		while (head)
		{
			res = head;
			head = head->next;
		}
		return (res);
	}
}

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list *head;

	if (ac < 1)
		return (0);
	head = ft_create_elem(*av);
	av++;
	while (*av)
	{
		ft_list_push_front(&head, *av);
		av++;
	}
	return (head);
}
void	ft_list_clear(t_list **begin_list)
{
	t_list *ptr;
	t_list *clear_ptr;

	ptr = *begin_list;
	while (1)
	{
		clear_ptr = ptr;
		if (ptr->next != 0)
		{
			free(clear_ptr);
			break ;
		}
		ptr->next = ptr;
		free(clear_ptr);
	}
	*begin_list = 0;
}

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list			*ptr;
	t_list			*res;
	unsigned int	counter;

	counter = 0;
	ptr = begin_list;
	res = 0;
	while (counter < nbr && ptr)
	{
		counter++;
		if (!ptr)
			return (0);
		ptr = ptr->next;
	}
	res = ptr;
	return (res);
}

void	ft_list_reverse(t_list **begin_list)
{
	t_list *previous;
	t_list *next;
	t_list *current;

	previous = 0;
	next = 0;
	current = *begin_list;
	while (current)
	{
		next = current->next;
		current->next = previous;
		previous = current;
		current = next;
	}
	*begin_list = previous;
}

int	main(int argc, char **argv)
{
	t_list	*head = NULL;
	t_list	*args = NULL;
	t_list	*ptr = NULL;

	ft_list_clear(&head);
	ft_list_push_back(&head, "two");
	ft_list_push_front(&head, "one");
	ft_list_push_back(&head, "three");
	ft_list_push_back(&head, "four");
	ft_list_push_back(&head, "five");

	ft_print_list(head);

	ptr = ft_list_at(head, 3);
	if (!(ptr))
		printf("\nNULL");
	else
		printf("\nlast element: %s", ptr->data);
	printf("\nsize : %d", ft_list_size(head));

	args = ft_list_push_params(argc, argv);
	ft_print_list(args);
	ft_list_reverse(&head);
	ft_print_list(head);



	return (0);
}
