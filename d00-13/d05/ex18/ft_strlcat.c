/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 19:58:01 by aadlercr          #+#    #+#             */
/*   Updated: 2019/08/20 10:42:13 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	lendest;
	unsigned int	counter;
	unsigned int	lensrc;

	counter = 0;
	lendest = 0;
	lensrc = 0;
	while (dest[lendest] != '\0')
		lendest++;
	while (src[lensrc] != '\0')
		lensrc++;
	if (lendest > size)
		return (size + lensrc);
	while (*src != '\0' && (lendest + counter + 1) < size)
	{
		dest[lendest + counter] = *src;
		counter++;
		src++;
	}
	dest[lendest + counter] = '\0';
	return (lendest + lensrc);
}
