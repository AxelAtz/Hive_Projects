/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_head.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 13:59:59 by aadlercr          #+#    #+#             */
/*   Updated: 2019/09/01 11:23:53 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_HEAD_H
# define RUSH_HEAD_H
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

char	**array_init(int height, int width, char *buf);
char	*ft_memcpy(char *dest, char *src, unsigned int size);
char	*ft_realloc(char *src, unsigned int size);

#endif