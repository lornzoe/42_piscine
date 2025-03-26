/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_checking3.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyanga <lyanga@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 15:16:32 by yixlee            #+#    #+#             */
/*   Updated: 2025/03/05 16:22:11 by lyanga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_check_maprow(char **map)
{
	int		i;
	int		j;
	int		comp;

	i = 0;
	j = 0;
	while (map[i][j])
		j++;
	comp = j;
	i++;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
			j++;
		if (comp != j)
			return (0);
		i++;
	}
	return (1);
}

int	ft_check_mapchar(char **map, char obs, char empty)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if (map[i][j] != obs
			&& map[i][j] != empty)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
