/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_handling.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 09:20:02 by aadlercr          #+#    #+#             */
/*   Updated: 2019/08/29 12:39:07 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_HANDLING_H
# define FILE_HANDLING_H
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>

char	*ft_strstr(char *str, char *to_find, int limit);
int		ft_found_character(char *str);
void	ft_set_values(int *p1, int *p2, int i1, int i2);
int		match(char *s1, char *s2);

#endif
