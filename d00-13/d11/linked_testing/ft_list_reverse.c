#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list *previous;
	t_list *next;
	t_list *current;

	previous = 0;
	next = 0;
	current = *begin_list;

	while(current)
	{
		next = current->next;
		current->next = previous;
		previous = current;
		current = next;
	}
	*begin_list = previous;
}
