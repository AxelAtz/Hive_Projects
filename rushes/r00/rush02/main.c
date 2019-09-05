/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 17:28:25 by thannguy          #+#    #+#             */
/*   Updated: 2019/08/31 12:08:08 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <stdlib.h>
#include <string.h>

void	rush02(int x, int y);
int		main(int argc, const char **argv)
{
	if (argc != 3)
		return(1);
	rush02(atoi(argv[1]), atoi(argv[2]));

	return (0);
}