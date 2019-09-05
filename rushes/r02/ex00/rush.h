/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 19:50:47 by aadlercr          #+#    #+#             */
/*   Updated: 2019/09/01 23:28:33 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H
# include <unistd.h>
# include <stdlib.h>

char	*ft_get_stdin(void);
char	*ft_memcpy(char *dest, char *src, unsigned int size);
char	*ft_itoa(int num);
char	*ft_realloc(char *src, unsigned int size);
char	**array_init(int height, int width, char *buf);

void	ft_count_size(char *arr, int *width, int *height);
void	ft_putstr(char *str, int out_put);
void	ft_strrev(char *str);
void	ft_output_rush(int *rush_nums, int total, int width, int height);

int		ft_strlen(char *str);

#endif
