/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 17:18:06 by aadlercr          #+#    #+#             */
/*   Updated: 2019/08/29 18:07:15 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdio.h>

void	ft_display_file(char **argv)
{
	int			fd;
	int			tg;
	int			limit;
	static char	buf[155];

	fd = open(argv[1], O_RDWR);
	if (fd < 0)
	{
		return ;
	}
	tg = open(argv[2], O_RDWR);
	if (fd < 0)
	{
		return ;
	}
	while ((limit = read(fd, buf, 155)) > 0)
	{
		write(1, buf, limit);
		write(1, "\n", 1);
		
		
	}
	close(fd);
}

int		main(int argc, char **argv)
{
	if (argc<0)
	{
		write(2, "File name missing.\n", 20);
		return (1);
	}
	else if (argc > 123)
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