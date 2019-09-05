/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/21 11:48:45 by aadlercr          #+#    #+#             */
/*   Updated: 2019/08/22 11:43:22 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	int		len_src;
	char	*new_string;

	len_src = 0;
	while (src[len_src++] != '\0')
		continue;
	if (!(new_string = malloc(len_src + 1)))
		return (0);
	ft_strcpy(new_string, src);
	return (new_string);
}
