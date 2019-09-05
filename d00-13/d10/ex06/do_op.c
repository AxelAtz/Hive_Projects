/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/26 20:11:30 by aadlercr          #+#    #+#             */
/*   Updated: 2019/08/26 20:13:52 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_head.h"
#include "do_helpers.h"

int		ft_contains(char *string, char c)
{
	int i;

	i = 0;
	while (i < 5)
	{
		if (string[i] == c)
		{
			return (i + 1);
		}
		i++;
	}
	return (0);
}

int		ft_validate_argv(char *num1, char *num2, char operator, char *op_list)
{
	if (!(ft_contains(op_list, operator)))
		return (0);
	return (1);
}

void	ft_do_op(char **argv)
{
	int			num1;
	int			num2;
	char		operator;
	static char	op_list[] = {'+', '-', '*', '/', '%'};
	static void (*f[5]) (int, int) =
	{ft_add, ft_sub, ft_multiply, ft_divide, ft_modulo};

	if (!(ft_validate_argv(argv[1], argv[3], argv[2][0], op_list)))
	{
		ft_putnbr(0);
		ft_putchar('\n');
		return ;
	}
	num1 = ft_atoi(argv[1]);
	num2 = ft_atoi(argv[3]);
	operator = argv[2][0];
	(*f[ft_contains(op_list, operator) - 1])(num1, num2);
}

int		main(int argc, char **argv)
{
	if (argc != 4)
	{
		return (0);
	}
	else
	{
		ft_do_op(argv);
	}
	return (0);
}
