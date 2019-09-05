/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 16:29:24 by aadlercr          #+#    #+#             */
/*   Updated: 2019/08/20 23:16:55 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	char *start;

	start = str;
	while (*str == ' ' || *str == '\n' || *str == '\t'
	|| *str == '\v' || *str == '\f' || *str == '\r')
	{
		str++;
		start++;
	}
	while (*str != '\0')
	{
		if ((*(str - 1) == 32 || *(str - 1) == 45 || *(str - 1) == 43
		|| str == start) && *str >= 97 && *str <= 122)
		{
			*str -= 32;
			str++;
		}
		if ((*str >= 65 && *str <= 90)
		&& !(*(str - 1) == 32 || *(str - 1) == 45))
		{
			*str += 32;
		}
		str++;
	}
	return (start);
}
