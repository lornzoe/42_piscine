/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   table.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pisoncha <pisoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 11:31:02 by pisoncha          #+#    #+#             */
/*   Updated: 2025/02/23 10:39:03 by pisoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_table_fill_all(char **table, int rows, int cols, char c)
{
	int		i;
	int		j;

	i = 0;
	while (i < rows)
	{
		j = 0;
		while (j < cols)
		{
			table[i][j] = c;
			j++;
		}
		i++;
	}
}

char	**ft_create_table(int rows, int cols)
{
	char	**table;
	int		i;

	i = 0;
	table = (char **) malloc(sizeof(char *) * rows);
	if (table == NULL)
		return (NULL);
	while (i < rows)
	{
		table[i] = (char *) malloc(sizeof(char) * cols);
		if (table[i] == NULL)
			return (NULL);
		i++;
	}
	ft_table_fill_all(table, rows, cols, '0');
	return (table);
}

void	ft_free_table(char **table, int rows)
{
	int	i;

	i = 0;
	if (table == NULL)
		return ;
	while (i < rows)
	{
		if (table[i] != NULL)
			free(table[i]);
		i++;
	}
	free(table);
}

void	ft_print_table(char **table, int rows, int cols)
{
	int		i;
	int		j;

	i = 0;
	while (i < rows)
	{
		j = 0;
		while (j < cols)
		{
			write(1, &table[i][j], 1);
			if (j + 1 == cols)
				write(1, "\n", 1);
			else
				write(1, " ", 1);
			j++;
		}
		i++;
	}
}

void	ft_print_solution(char **table, int size)
{
	int	i;
	int	j;

	i = 1;
	if (table[0][0] == '0')
	{
		while (i <= size)
		{
			j = 1;
			while (j <= size)
			{
				write(1, &table[i][j], 1);
				if (j == size)
					write(1, "\n", 1);
				else
					write(1, " ", 1);
				j++;
			}
			i++;
		}
	}
	table[0][0] = '1';
}
