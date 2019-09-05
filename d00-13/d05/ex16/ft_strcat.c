/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 18:17:47 by aadlercr          #+#    #+#             */
/*   Updated: 2019/08/20 22:52:27 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

char	*ft_strcat(char *dest, char *src)
{
	int		lendest;
	char	*start;

	lendest = 0;
	start = dest;
	while (dest[lendest] != '\0')
		lendest++;
	ft_strcpy(dest + lendest, src);
	return (dest);
}
