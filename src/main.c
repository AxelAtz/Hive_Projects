/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 18:35:33 by jkokko            #+#    #+#             */
/*   Updated: 2019/09/04 22:20:44 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/bsq_head.h"

int		main(int argc, char **argv)
{
	if (argc > 1)
		ft_read_args(argc, argv);
	else
		ft_read_stdin();
	return (0);
}
