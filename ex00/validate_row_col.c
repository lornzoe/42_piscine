/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_row_col.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pisoncha <pisoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 13:08:02 by pisoncha          #+#    #+#             */
/*   Updated: 2025/02/22 13:46:08 by pisoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_is_in_row(char **board, int row, int col, int num)
{
	int	i;

	i = 1;
	while (i < col)
	{
		if (board[row][i] == num + '0')
			return (1);
		i++;
	}
	return (0);
}

int	ft_is_in_col(char **board, int row, int col, int num)
{
	int	i;

	i = 1;
	while (i < row)
	{
		if (board[i][col] == num + '0')
			return (1);
		i++;
	}
	return (0);
}
