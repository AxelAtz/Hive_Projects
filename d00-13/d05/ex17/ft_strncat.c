/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 18:17:47 by aadlercr          #+#    #+#             */
/*   Updated: 2019/08/19 19:44:50 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	int		lendest;
	int		counter;
	char	*start;

	counter = 0;
	lendest = 0;
	start = dest;
	while (dest[lendest] != '\0')
		lendest++;
	while (*src != '\0' && counter < nb)
	{
		dest[lendest] = *src;
		lendest++;
		counter++;
		src++;
	}
	dest[lendest] = '\0';
	return (dest);
}
