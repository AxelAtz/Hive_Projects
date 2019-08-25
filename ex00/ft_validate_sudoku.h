/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validate_sudoku.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/25 19:23:16 by aadlercr          #+#    #+#             */
/*   Updated: 2019/08/25 22:12:03 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_VALIDATE_SUDOKU_H
# define FT_VALIDATE_SUDOKU_H
# include "sudoku_header.h"

void		ft_print_board(int **board);

int			**ft_validate_d(char const **argv, int **board);

t_bool		ft_compare_boards_d(int **board1, int **board2);

int			**ft_validate_l(char const **argv, int **board);

t_bool		ft_compare_boards_l(int **board1, int **board2);

int			**ft_validate_r(char const **argv, int **board);

t_bool		ft_compare_boards_r(int **board1, int **board2);

#endif
