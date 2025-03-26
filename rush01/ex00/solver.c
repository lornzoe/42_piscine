/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pisoncha <pisoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 14:00:23 by pisoncha          #+#    #+#             */
/*   Updated: 2025/02/23 16:16:41 by pisoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_solve_recursive(char **board, int row, int col, int size)
{
	int	i;

	i = 1;
	while (i <= size && row <= size && col <= size && board[0][0] == '0')
	{
		if (!ft_is_in_row(board, row, col, i) \
		&& !ft_is_in_col(board, row, col, i))
		{
			board[row][col] = i + '0';
			if (row == size && !ft_is_correct_top_view(board, col, size))
				return ;
			if (col == size)
			{
				if (ft_is_correct_right_view(board, row, size))
					ft_solve_recursive(board, row + 1, 1, size);
				if (row == size && ft_check_all_views(board, size))
					ft_print_solution(board, size);
			}
			else
				ft_solve_recursive(board, row, col + 1, size);
		}
		i++;
	}
}

int	ft_check_all_views(char **board, int size)
{
	int	r;
	int	c;

	r = 1;
	while (r <= size)
	{
		c = 1;
		while (c <= size)
		{
			if (!ft_is_correct_left_view(board, r, size) \
			|| !ft_is_correct_right_view(board, r, size))
				return (0);
			if (!ft_is_correct_top_view(board, c, size) \
			|| !ft_is_correct_bottom_view(board, c, size))
				return (0);
			c++;
		}
		r++;
	}
	return (1);
}

void	ft_generate_table_pattern(char **table, int size, int start, int p)
{
	int	col;
	int	row;
	int	idx;

	row = 1;
	while (row <= size)
	{
		col = 1;
		while (col <= size)
		{
			if (start > 0)
			{
				idx = (row + col - 2 + start - 1) % size;
				if (p == 1)
					table[row][col] = idx + '1';
				else
					table[row][col] = size - idx + '0';
			}
			else
				table[row][col] = '0';
			col++;
		}
		row++;
	}
}

void	ft_solve(char **board, int size)
{
	int	i;

	i = 1;
	while (i <= size)
	{
		ft_generate_table_pattern(board, size, i, 1);
		if (ft_check_all_views(board, size))
		{
			ft_print_solution(board, size);
			return ;
		}
		ft_generate_table_pattern(board, size, i, 2);
		if (ft_check_all_views(board, size))
		{
			ft_print_solution(board, size);
			return ;
		}
		i++;
	}
	ft_generate_table_pattern(board, size, 0, 1);
	ft_solve_recursive(board, 1, 1, size);
}
