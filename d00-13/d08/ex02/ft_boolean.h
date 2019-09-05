/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 17:17:50 by aadlercr          #+#    #+#             */
/*   Updated: 2019/08/22 17:20:34 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef __FT__BOOLEAN_H__
	#define __FT__BOOLEAN_H__

	#include <unistd.h>

	#define EVEN_MSG "I have an even number of arguments"
	#define ODD_MSG "I have an odd number of arguments"
	#define SUCCESS 0
	#define EVEN ft_even
	typedef enum {FALSE = 0,	TRUE} t_bool;

	int	EVEN(int nbr)
	{
		if (nbr % 2 == 0)
			return (1);
		else	
			return (0);
	}
#endif