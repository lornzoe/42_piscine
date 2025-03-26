/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyanga <lyanga@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 12:00:06 by pisoncha          #+#    #+#             */
/*   Updated: 2025/02/23 22:34:39 by lyanga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_check_input(char *str, int size)
{
	int	i;

	i = 0;
	if (size == 0)
		return (0);
	while (str[i] != '\0')
	{
		if (!(str[i] == ' ' || (str[i] >= '1' && str[i] <= size + '0')))
			return (0);
		if ((i % 2) && str[i] != ' ')
			return (0);
		if (!(i % 2) && !(str[i] >= '1' && str[i] <= size + '0'))
			return (0);
		i++;
	}
	return (1);
}

char	**ft_convert_input(char *str, int size)
{
	int		i;
	int		j;
	char	**table;

	table = ft_create_table(4, size);
	if (ft_check_input(str, size))
	{
		i = 0;
		j = 0;
		while (j < size)
		{
			table[0][j] = str[i];
			table[1][j] = str[i + size * 2];
			table[2][j] = str[i + size * 4];
			table[3][j] = str[i + size * 6];
			j++;
			i += 2;
		}
	}
	else
		ft_print_error();
	return (table);
}

void	ft_set_clues(char **board, char **clues, int size)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i <= size)
	{
		board[0][i] = clues[0][j];
		board[size + 1][i] = clues[1][j];
		board[i][0] = clues[2][j];
		board[i][size + 1] = clues[3][j];
		i++;
		j++;
	}
	ft_free_table(clues, 4);
}
