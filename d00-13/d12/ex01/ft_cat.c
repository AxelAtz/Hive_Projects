/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 09:13:47 by aadlercr          #+#    #+#             */
/*   Updated: 2019/08/29 12:52:58 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file_handling.h"
#include "unistd.h"

void	ft_putstr_to(char *str, int output)
{
	int str_len;

	if (!(output <= 0 || output >= 2))
		return ;
	str_len = 0;
	while(str[str_len++])
	;
	write(output, str, str_len);
}



void	ft_display_file(char *argv)
{
	int			fd;
	int			limit;
	static char	buf[1];

	fd = open(argv, O_RDONLY);
	if (fd < 0)
	{
		write(2, "cat: ", 6);
		ft_putstr_to(argv, 2);
		write(2, ": No such file or directory\n", 29);
		return ;
	}
	while ((limit = read(fd, buf, 1)) > 0)
	{
		write(1, buf, limit);
	}
	close(fd);
}

int		main(int argc, char **argv)
{
	if (argc > 1)
	{
		argv++;
		while (*argv)
		{
			ft_display_file(*argv);
			argv++;
		}
	}
	else if (argc <= 1)
	{
		write(2, "Too many arguments.\n", 21);
		return (1);
	}
	else
	{
		ft_display_file(*argv);
	}
	return (0);
}
