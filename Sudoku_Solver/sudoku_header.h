/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku_header.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/24 21:21:28 by aadlercr          #+#    #+#             */
/*   Updated: 2019/08/24 22:18:05 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_HEADER_H
#define SUDOKU_HEADER_H
#include <unistd.h>
#include <stdlib.h>

typedef enum	e_bool
{
	false = 0,	true
}				t_bool;

typedef	struct	s_index
{
	int		col;
	int		row;
	t_bool	found;
}				t_index;

t_bool		ft_check_valid_row(int **board, int num, int c, int r)
{
	int row_index;

	row_index = 0;
	while (row_index < 9)
	{
		if (board[c][row_index] == num && row_index != r)
			return (false);
		row_index++;
	}
	return (true);
}

t_bool		ft_check_valid_col(int **board, int num, int c, int r)
{
	int	col_index;

	col_index = 0;
	while (col_index < 9)
	{
		if (board[col_index][r] == num && col_index != c)
			return (false);
		col_index++;
	}
	return (true);
}

t_bool		ft_check_valid_box(int **board, int num, int c, int r)
{
	int row_index;
	int col_index;

	row_index = (r / 3) * 3;
	col_index = (c / 3) * 3;
	while (col_index < (((c / 3) * 3) + 3))
	{
		while (row_index < (((r / 3) * 3) + 3))
		{
			if (board[col_index][row_index] == num && 
			((col_index != c) && (row_index != r)))
				return (false);
			row_index++;
		}
		row_index = (r / 3) * 3;
		col_index++;
	}
	return (true);
}

t_bool		ft_check_valid_number(int **board, int num, int col, int row)
{
	if (!(ft_check_valid_row(board, num, col, row)))
		return (false);
	if (!(ft_check_valid_col(board, num, col, row)))
		return (false);
	if (!(ft_check_valid_box(board, num, col, row)))
		return (false);
	return (true);
}
#endif
