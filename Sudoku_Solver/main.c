/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/24 09:58:00 by aadlercr          #+#    #+#             */
/*   Updated: 2019/08/25 11:24:49 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku_header.h"
#include "helper_functions.h"
#include <time.h>
#include <stdio.h>

t_index		ft_find_next_empty(int **board)
{
	t_index	next_empty;
	int		col;
	int		row;

	row = 0;
	col = 0;
	next_empty.col = col;
	next_empty.row = row;
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
		if (col % 3 == 0 && col != 0)
			ft_putstr("- - - - - - - - - - - \n");
		while (row < 9)
		{
			if (row % 3 == 0 && row != 0)
				ft_putstr("| ");
			ft_putchar(board[col][row] + '0');
			ft_putchar(' ');
			row++;
		}
		ft_putchar('\n');
		row = 0;
		col++;
	}
	ft_putchar('\n');
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
	int i;

	board = malloc(9 * sizeof(int *));
	i = 0;
	while (i < 9)
		board[i++] = malloc(9 * sizeof(int));
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

	board = NULL;
	if (argc != 10)
	{
		ft_putstr("ERROR: too few / many arguments");
	}
	else
	{
		board = ft_set_board(argv, board);
		ft_print_board(board);
		clock_t t;
		t = clock();
		if (ft_solve_board(board))
			ft_print_board(board);
		else
			ft_putstr("ERROR\n");
		double time_taken = ((double)t) / CLOCKS_PER_SEC;
		printf("ft_solve_board() took %f seconds to execute \n", time_taken);
	}
	return (0);
}
