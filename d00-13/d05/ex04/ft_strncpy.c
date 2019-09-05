/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 11:58:07 by aadlercr          #+#    #+#             */
/*   Updated: 2019/08/20 23:01:32 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	index = 0;
	if (n != 0)
	{
		while (index < n)
		{
			dest[index] = src[index];
			index++;
		}
		while (n - index > 0)
		{
			dest[index] = 0;
			index++;
		}
	}
	return (dest);
}
