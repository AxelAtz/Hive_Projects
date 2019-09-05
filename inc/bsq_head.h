/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq_head.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 18:40:00 by jkokko            #+#    #+#             */
/*   Updated: 2019/09/04 22:23:26 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_HEAD_H
# define BSQ_HEAD_H
# include <fcntl.h>
# include <unistd.h>
# include "stdlib.h"

void	ft_putstr(char *str);
void	ft_count_size(char *arr, int *width, int *height);
void	ft_putchar(char c);
void	ft_set_value_zero(int *n1, int *n2, int *n3, int *n4);
void	ft_print_solved(char *map, int f_i, int f_j, int s);
void	ft_set_largest_square(char *map, int *i_m, int h, int w);

int		ft_atoi(char *string);
int		ft_get_height(char *map);
int		ft_read_args(int ac, char **av);
int		ft_read_stdin(void);
int		ft_little_check(int *lwhi, int *linel);
int		ft_check_smbl_lines(char *smbl, char *map, char *lines);
int		ft_check_first_row(char *smbl, char *map, char *lines);
int		ft_get_line_length(char *map, int *lwhi);
int		ft_check_row_length(int lines, char *map, int *lwhi, char *smbl);
int		ft_check_the_map(char *smbl, int lines, char *map, int *lwhi);
int		ft_check_validity(char *map, int *lwhi);
int		*ft_mtoi(char *map, int h, int w);

char	*ft_read_stdin_char(void);
char	*ft_memcpy(char *dest, char *src, unsigned int size);
char	*ft_realloc(char *src, unsigned int size);
char	*ft_read_map_to_char(int fd);
char	*ft_open_map_to_char(char *arg);

#endif
