/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 09:13:47 by aadlercr          #+#    #+#             */
/*   Updated: 2019/08/31 12:20:44 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file_handling.h"

void	ft_display_file(char **argv)
{
	int			fd;
	int			limit;
	static char	buf[1];

	while ((limit = read(0, buf, 1)) > 0)
	{
		write(1, buf, limit);
	}
	close(fd);
}

int		main(int argc, char **argv)
{
	
	ft_display_file(argv);
	
	return (0);
}
