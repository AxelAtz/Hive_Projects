/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku_header.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/24 21:21:28 by aadlercr          #+#    #+#             */
/*   Updated: 2019/08/25 21:55:59 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_HEADER_H
# define SUDOKU_HEADER_H
# include <stdlib.h>

typedef enum		e_bool
{
	false = 0, true
}					t_bool;
typedef struct		s_index
{
	int		col;
	int		row;
	t_bool	found;
}					t_index;
t_bool				ft_solve_board(int **board);

t_bool				ft_check_valid_row(int **board, int num, int c, int r);

t_bool				ft_check_valid_col(int **board, int num, int c, int r);

t_bool				ft_check_valid_box(int **board, int num, int c, int r);

t_bool				ft_check_valid_number(int **board, int num, int col,
					int row);

t_bool				ft_validate_all(int **board1, int **board2, int **board3,
					int **board4);

int					**ft_allocate_space(int **board);

#endif
