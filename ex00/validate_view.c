/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_view.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pisoncha <pisoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 13:25:56 by pisoncha          #+#    #+#             */
/*   Updated: 2025/02/23 10:08:05 by pisoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_is_correct_left_view(char **board, int row, int size)
{
	int		i;
	char	visible;
	char	highest;

	i = 1;
	visible = '1';
	highest = board[row][i];
	while (i <= size)
	{
		if (board[row][i] > highest)
		{
			highest = board[row][i];
			visible++;
		}
		i++;
	}
	return (board[row][0] == visible);
}

int	ft_is_correct_right_view(char **board, int row, int size)
{
	int		i;
	char	visible;
	char	highest;

	i = size;
	visible = '1';
	highest = board[row][i];
	while (i > 0)
	{
		if (board[row][i] > highest)
		{
			highest = board[row][i];
			visible++;
		}
		i--;
	}
	return (board[row][size + 1] == visible);
}

int	ft_is_correct_top_view(char **board, int col, int size)
{
	int		i;
	char	visible;
	char	highest;

	i = 1;
	visible = '1';
	highest = board[i][col];
	while (i <= size)
	{
		if (board[i][col] > highest)
		{
			highest = board[i][col];
			visible++;
		}
		i++;
	}
	return (board[0][col] == visible);
}

int	ft_is_correct_bottom_view(char **board, int col, int size)
{
	int		i;
	char	visible;
	char	highest;

	i = size;
	visible = '1';
	highest = board[i][col];
	while (i > 0)
	{
		if (board[i][col] > highest)
		{
			highest = board[i][col];
			visible++;
		}
		i--;
	}
	return (board[size + 1][col] == visible);
}
