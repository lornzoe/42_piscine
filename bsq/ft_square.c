/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_square.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyanga <lyanga@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 15:06:46 by lyanga            #+#    #+#             */
/*   Updated: 2025/03/04 18:17:01 by lyanga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

t_square	*ft_init_square(void)
{
	t_square	*square;

	square = malloc(sizeof(t_square) * 1);
	square->size = 0;
	ft_set_coords(&(square->coords), 0, 0);
	return (square);
}

t_square	*ft_set_bigger_square(t_square *square, t_coords *coords, int size)
{
	if (size > square->size)
	{
		square->coords = *coords;
		square->size = size;
	}
	return (square);
}

void	ft_draw_square(t_square *square, t_map *map)
{
	int		x;
	int		y;
	char	**arr;
	char	full;

	x = 0;
	y = 0;
	arr = map->read_map;
	full = map->full_char;
	while (y < square->size)
	{
		x = 0;
		while (x < square->size)
		{
			arr[square->coords.y + y][square->coords.x + x] = full;
			x++;
		}
		y++;
	}
}
