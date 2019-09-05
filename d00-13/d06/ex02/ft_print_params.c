/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/21 11:23:52 by aadlercr          #+#    #+#             */
/*   Updated: 2019/08/21 11:24:07 by aadlercr         ###   ########.fr       */
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
	int counter;

	counter = 0;
	while (argc - 1 > counter)
	{
		ft_putstr(argv[counter + 1]);
		ft_putchar('\n');
		counter++;
	}
	return (0);
}
