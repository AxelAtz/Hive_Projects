/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/26 20:03:09 by aadlercr          #+#    #+#             */
/*   Updated: 2019/08/26 20:20:36 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f) (char*))
{
	int i;
	int counter;

	i = 0;
	counter = 0;
	while (tab[i])
	{
		if (f(tab[i]))
			counter++;
		i++;
	}
	return (counter);
}
