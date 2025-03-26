/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyanga <lyanga@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 18:39:08 by lyanga            #+#    #+#             */
/*   Updated: 2025/03/05 15:36:37 by lyanga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_free_map(t_map *map)
{
	if (map->read_map != NULL)
		ft_free_char_map(map->read_map);
	if (map->the_map != NULL)
		ft_free_char_map(map->the_map);
	if (map->first_line != NULL)
		free(map->first_line);
	free(map);
}

void	ft_free_char_map(char **map)
{
	int	i;

	i = 0;
	while (map[i])
	{
		free(map[i]);
		i++;
	}
	free(map);
}

int	ft_get_row_len(char **read_map)
{
	int	i;

	i = 0;
	while ((*read_map)[i])
		i++;
	return (i);
}
