/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_invalidating.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyanga <lyanga@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 14:12:09 by lyanga            #+#    #+#             */
/*   Updated: 2025/03/05 06:16:19 by lyanga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_mark_invalid(t_coords *start, t_coords *obstacle, t_map *map)
{
	int	x;
	int	y;

	x = start->x;
	y = start->y;
	while (y <= obstacle->y)
	{
		while (x <= obstacle->x)
		{
			map->the_map[y][x]++;
			x++;
		}
		y++;
	}
}
