/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/21 11:26:24 by aadlercr          #+#    #+#             */
/*   Updated: 2019/08/21 11:26:31 by aadlercr         ###   ########.fr       */
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

	counter = argc;
	while (counter > 1)
	{
		ft_putstr(argv[counter - 1]);
		ft_putchar('\n');
		counter--;
	}
	return (0);
}
