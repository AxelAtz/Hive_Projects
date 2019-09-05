/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/21 19:24:24 by aadlercr          #+#    #+#             */
/*   Updated: 2019/08/21 19:29:15 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_reset_values(int *index, int *index2, int *count)
{
	*index = 1;
	*index2 = 0;
	*count = 0;
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*string;
	int		count;
	int		index;
	int		index2;

	(void)argc;
	ft_reset_values(&index, &index2, &count);
	while (argv[index++])
	{
		while (argv[index - 1][index2++])
			count++;
		index2 = 0;
	}
	string = (char*)malloc(count);
	ft_reset_values(&index, &index2, &count);
	while (argv[index++])
	{
		while (argv[index - 1][index2])
			string[count++] = argv[index - 1][index2++];
		index2 = 0;
		string[count++] = '\n';
	}
	string[count - 1] = '\0';
	return (string);
}
