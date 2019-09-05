/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/23 10:45:02 by aadlercr          #+#    #+#             */
/*   Updated: 2019/08/23 11:24:53 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>


int	ft_find_size(char **tab, char *sep)
{
	int count;
	int seplen;
	int	word_index;
	int index;

	seplen = 0;
	index = 0;
	count = 0;
	word_index = 0;
	printf("got heref\n");
	while (sep[seplen])
		seplen++;
	printf("got herex\n");
	while (tab[index])
	{
		printf("got hereg\n");
		while (tab[index][word_index])
		{
			printf("got herev\n");
			count++;
			word_index++;
		}
		printf("got heren\n");
		index++;
		word_index = 0;
		count += seplen;
	}
	return (count);
}

char	*ft_join(char **tab, char *sep)
{
	char *res;
	int index1;
	int index2;
	int sep_i;

	sep_i = 0;
	index1 = 0;
	index2 = 0;
	printf("got here1\n");
	res = (char*)malloc(ft_find_size(tab, sep)+100000 * sizeof(char));
	printf("got here2\n");
	while (tab[index1] != 0)
	{
		printf("got here3\n");
		while (tab[index1][index2] != 0)
		{
			*res = tab[index1][index2++];
			res++;
		}
		while (sep[sep_i])
		{
			*res = sep[sep_i];
			res++;
		}
		printf("got here4\n");
		sep_i = 0;
		index1++;
	}
	*res = '\0';
	return (res);
}