/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 09:13:47 by aadlercr          #+#    #+#             */
/*   Updated: 2019/08/28 17:51:24 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file_handling.h"
#include "unistd.h"

void	ft_display_file(char **argv)
{
	int			fd;
	int			limit;
	static char	buf[2];

	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		return ;
	}
	while ((limit = read(fd, buf, 2)) > 0)
	{
		write(1, buf, limit);
	}
	close(fd);
}

int		main(int argc, char **argv)
{
	if (argc < 2)
	{
		write(2, "File name missing.\n", 20);
		return (1);
	}
	else if (argc > 2)
	{
		write(2, "Too many arguments.\n", 21);
		return (1);
	}
	else
	{
		ft_display_file(argv);
	}
	return (0);
}
