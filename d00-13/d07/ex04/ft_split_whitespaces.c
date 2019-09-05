/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 14:47:40 by aadlercr          #+#    #+#             */
/*   Updated: 2019/08/22 14:53:24 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_is_space(char c)
{
	if ((c == ' ' || c == '\n' || c == '\t'))
		return (1);
	return (0);
}

int		ft_str_is_printable(char c)
{
	if (!(c >= 32 && c <= 126) || (ft_is_space(c)))
	{
		return (0);
	}
	return (1);
}

int		ft_count_word(char *str)
{
	int i;
	int no_words_found;

	no_words_found = 0;
	i = 0;
	while (ft_is_space(*str))
		str++;
	while (str[0])
	{
		while (ft_is_space(*str))
		{
			str++;
		}
		while (ft_str_is_printable(*str) && *str)
		{
			str++;
			no_words_found = 1;
		}
		i++;
		str++;
	}
	if (!(no_words_found))
		return (0);
	return ((i + 2) * 2);
}

char	**ft_split_whitespaces(char *str)
{
	char	**to_return;
	char	*holder;
	int		i;
	int		index;
	int		lenstr;

	index = 0;
	lenstr = 0;
	to_return = (char**)malloc(ft_count_word(str) * sizeof(to_return));
	*to_return = NULL;
	while (str[lenstr])
		lenstr++;
	while (str[1] && index < ft_count_word(str))
	{
		i = 0;
		while (ft_is_space(*str))
			str++;
		while (ft_str_is_printable(*str) && str[0] != '\0')
			holder[i++] = str++[0];
		holder[i] = '\0';
		to_return[index++] = holder;
		to_return[index] = NULL;
		holder = (char*)malloc(lenstr);
	}
	return (to_return);
}
