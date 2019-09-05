/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 10:11:06 by aadlercr          #+#    #+#             */
/*   Updated: 2019/08/20 11:02:19 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	counter;
	unsigned int	srclen;

	counter = 0;
	while (src[counter] != '\0')
		counter++;
	srclen = counter;
	if (srclen + 1 < size)
	{
		while (counter > 0)
		{
			*dest++ = *src++;
			counter--;
		}
		*dest = '\0';
	}
	else if (size != 0)
	{
		counter = 0;
		while (counter++ < size - 1)
			*dest++ = *src++;
		*dest = '\0';
	}
	return (srclen);
}
