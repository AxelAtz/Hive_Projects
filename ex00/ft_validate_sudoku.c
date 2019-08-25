/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validate_sudoku.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/25 19:22:20 by aadlercr          #+#    #+#             */
/*   Updated: 2019/08/25 21:34:56 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku_header.h"
#include "helper_functions.h"
#include "ft_validate_sudoku.h"

t_bool	ft_validate_all(int **board1, int **board2, int **board3, int **board4)
{
	ft_solve_board(board1);
	ft_solve_board(board2);
	ft_solve_board(board3);
	ft_solve_board(board4);
	if (!(ft_compare_boards_d(board2, board1)))
	{
		return (false);
	}
	if (!(ft_compare_boards_l(board3, board1)))
	{
		return (false);
	}
	if (!(ft_compare_boards_r(board4, board1)))
	{
		return (false);
	}
	return (true);
}
