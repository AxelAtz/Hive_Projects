/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/25 17:42:56 by aadlercr          #+#    #+#             */
/*   Updated: 2019/08/25 21:38:22 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

int		ft_ctoi(char c)
{
	return (c - '0');
}

int		ft_argv_validate(const	char **argv)
{
	int i;
	int j;
	int counter;

	i = 1;
	j = 0;
	counter = 0;
	while (argv[i])
	{
		while (argv[i][j])
		{
			if (!(argv[i][j] == '.' || (argv[i][j] >= '1'
				&& argv[i][j] <= '9')))
			{
				return (0);
			}
			counter++;
			j++;
		}
		i++;
		j = 0;
	}
	return (counter);
}

void	ft_set_values(int *p1, int *p2, int n1, int n2)
{
	*p1 = n1;
	*p2 = n2;
}
