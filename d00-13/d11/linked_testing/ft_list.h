/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 11:35:20 by aadlercr          #+#    #+#             */
/*   Updated: 2019/08/28 18:53:54 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H
# include <stdlib.h>

typedef struct	s_list
{
	struct s_list	*next;
	void			*data;
}				t_list;

t_list	*ft_create_elem(void *data);

t_list	*ft_list_last(t_list *begin_list);

t_list	*ft_list_push_params(int ac, char **av);

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr);

int		ft_list_size(t_list *begin_list);

void	ft_list_push_front(t_list **begin_list, void *data);

void	ft_print_list(t_list *head);

void	ft_list_clear(t_list **begin_list);

void	ft_list_push_back(t_list **begin_list, void *data);

void	ft_list_reverse(t_list **begin_list);

void	ft_list_foreach(t_list *begin_list, void (*f) (void *));

#endif
