/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_valid_number.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/25 17:30:29 by aadlercr          #+#    #+#             */
/*   Updated: 2019/08/25 21:41:08 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku_header.h"

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

int			**ft_allocate_space(int **board)
{
	int i;

	board = (int **)malloc(9 * sizeof(int *));
	i = 0;
	while (i < 9)
		board[i++] = (int *)malloc(9 * sizeof(int));
	return (board);
}
