/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 17:33:05 by aadlercr          #+#    #+#             */
/*   Updated: 2019/08/31 12:08:23 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <stdlib.h>
#include <string.h>

void	rush01(int x, int y);

int		main(int argc, const char **argv)
{
	if (argc != 3)
		return(1);
	rush01(atoi(argv[1]), atoi(argv[2]));

	return (0);
}
