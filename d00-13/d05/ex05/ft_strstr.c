/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 15:41:50 by aadlercr          #+#    #+#             */
/*   Updated: 2019/08/20 22:12:25 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char *matchingptr;
	char *sub;

	sub = to_find;
	if (*to_find == 0)
		return (str);
	while (*str != '\0')
	{
		if (*str != *sub)
		{
			str += 1;
			continue ;
		}
		matchingptr = str;
		while (1)
		{
			if (*sub == 0)
				return (str);
			if (*matchingptr++ != *sub++)
				break ;
		}
		sub = to_find;
		str += 1;
	}
	return (0);
}
