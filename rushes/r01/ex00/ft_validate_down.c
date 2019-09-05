/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validate_down.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/25 21:25:06 by aadlercr          #+#    #+#             */
/*   Updated: 2019/08/25 21:31:05 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku_header.h"
#include "helper_functions.h"

int			**ft_validate_d(char const **argv, int **board)
{
	int col;
	int a_col;
	int row;
	int a_row;

	board = ft_allocate_space(board);
	ft_set_values(&a_col, &a_row, 0, 0);
	ft_set_values(&col, &row, 8, 8);
	while (col >= 0)
	{
		while (row >= 0)
		{
			if (argv[a_col + 1][a_row] == '.')
				board[col][row] = 0;
			else
				board[col][row] = ft_ctoi(argv[a_col + 1][a_row]);
			a_row++;
			row--;
		}
		a_col++;
		col--;
		ft_set_values(&a_row, &row, 0, 8);
	}
	return (board);
}

t_bool		ft_compare_boards_d(int **board1, int **board2)
{
	int col;
	int a_col;
	int row;
	int a_row;

	ft_set_values(&a_col, &a_row, 0, 0);
	ft_set_values(&col, &row, 8, 8);
	while (col >= 0)
	{
		while (row >= 0)
		{
			if (board2[a_col][a_row] != board1[col][row])
			{
				return (false);
			}
			a_row++;
			row--;
		}
		a_col++;
		col--;
		a_row = 0;
		row = 8;
	}
	return (true);
}
