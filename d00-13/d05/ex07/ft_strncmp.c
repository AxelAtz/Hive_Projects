/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 16:03:01 by aadlercr          #+#    #+#             */
/*   Updated: 2019/08/19 16:40:56 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int index;

	index = 0;
	while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0' && index < n - 1)
	{
		s1++;
		s2++;
		index++;
	}
	return (*s1 - *s2);
}
