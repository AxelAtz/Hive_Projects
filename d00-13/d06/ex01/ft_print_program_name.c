/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 15:22:29 by aadlercr          #+#    #+#             */
/*   Updated: 2019/08/21 11:24:45 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(const char *str)
{
	while (*str != '\0')
		ft_putchar(*str++);
}

int		main(int argc, char const *argv[])
{
	int i;

	i = argc;
	ft_putstr(argv[0]);
	ft_putchar('\n');
	return (0);
}
