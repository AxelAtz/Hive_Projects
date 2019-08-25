/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/24 09:58:00 by aadlercr          #+#    #+#             */
/*   Updated: 2019/08/25 22:22:21 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku_header.h"
#include "helper_functions.h"
#include "ft_validate_sudoku.h"

t_index		ft_find_next_empty(int **board)
{
	t_index	next_empty;
	int		col;
	int		row;

	row = 0;
	col = 0;
	next_empty.found = false;
	while (col < 9)
	{
		while (row < 9)
		{
			if (board[col][row] == 0)
			{
				next_empty.col = col;
				next_empty.row = row;
				next_empty.found = true;
				return (next_empty);
			}
			row++;
		}
		row = 0;
		col++;
	}
	return (next_empty);
}

void		ft_print_board(int **board)
{
	int col;
	int row;

	row = 0;
	col = 0;
	while (col < 9)
	{
		while (row < 9)
		{
			ft_putchar(board[col][row] + '0');
			if (row < 8)
				ft_putchar(' ');
			row++;
		}
		ft_putchar('\n');
		row = 0;
		col++;
	}
}

t_bool		ft_solve_board(int **board)
{
	t_index	next_empty;
	int		col;
	int		row;
	int		number;

	next_empty = ft_find_next_empty(board);
	col = next_empty.col;
	row = next_empty.row;
	number = 1;
	if (!(next_empty.found))
		return (true);
	while (number < 10)
	{
		if (ft_check_valid_number(board, number, col, row))
		{
			board[col][row] = number;
			if (ft_solve_board(board))
				return (true);
			board[col][row] = 0;
		}
		number++;
	}
	return (false);
}

int			**ft_set_board(char const **argv, int **board)
{
	int col;
	int row;

	board = ft_allocate_space(board);
	col = 0;
	row = 0;
	while (col < 9)
	{
		while (row < 9)
		{
			if (argv[col + 1][row] == '.')
				board[col][row] = 0;
			else
				board[col][row] = ft_ctoi(argv[col + 1][row]);
			row++;
		}
		col++;
		row = 0;
	}
	return (board);
}

int			main(int argc, char const **argv)
{
	int **board;
	int **d_board;
	int **l_board;
	int **r_board;

	board = NULL;
	d_board = NULL;
	l_board = NULL;
	r_board = NULL;
	if (ft_argv_validate(argv) != 81 || argc != 10)
		ft_putstr("ERROR\n");
	else
	{
		board = ft_set_board(argv, board);
		d_board = ft_validate_d(argv, d_board);
		l_board = ft_validate_l(argv, l_board);
		r_board = ft_validate_r(argv, r_board);
		if (ft_validate_all(board, d_board, l_board, r_board))
			ft_print_board(board);
		else
			ft_putstr("ERROR\n");
	}
	return (0);
}
