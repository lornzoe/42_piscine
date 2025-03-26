/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_checking.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyanga <lyanga@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 13:26:11 by lyanga            #+#    #+#             */
/*   Updated: 2025/03/05 16:21:58 by lyanga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

t_square	*ft_solve_biggest_square(t_map *map)
{
	int			size;
	t_coords	point;
	t_square	*biggest_square;

	ft_set_coords(&point, 0, 0);
	biggest_square = ft_init_square();
	while (point.y < map->y)
	{
		if (map->y - point.y <= biggest_square->size)
			break ;
		point.x = 0;
		while (point.x < map->x)
		{
			if (map->x - point.x <= biggest_square->size)
				break ;
			if (!map->the_map[point.y][point.x])
			{
				size = ft_get_biggest_square(&point, map);
				ft_set_bigger_square(biggest_square, &point, size);
			}
			point.x++;
		}
		point.y++;
	}
	return (biggest_square);
}

int	ft_get_biggest_square(t_coords *start, t_map *map)
{
	int	size;
	int	try_next;

	size = 2;
	try_next = 1;
	while (try_next)
	{
		try_next = ft_square_check(start, map, size);
		if (try_next)
			size++;
		else
			size--;
	}
	return (size);
}

int	ft_square_check(t_coords *start, t_map *map, int size)
{
	t_coords	point;

	size--;
	if ((start->x + size) >= map->x)
	{
		ft_set_coords(&point, map->x - 1, start->y + size);
		ft_mark_invalid(start, &point, map);
		return (0);
	}
	if ((start->y + size) >= map->y)
	{
		ft_set_coords(&point, start->y + size, map->y - 1);
		ft_mark_invalid(start, &point, map);
		return (0);
	}
	ft_set_coords(&point, start->x + size, start->y + size);
	if (map->the_map[point.y][point.x])
	{
		ft_mark_invalid(start, &point, map);
		return (0);
	}
	return (ft_square_check_right(start, map, size)
		&& ft_square_check_bottom(start, map, size));
}

int	ft_square_check_bottom(t_coords *start, t_map *map, int size)
{
	int			x;
	int			y;
	t_coords	point;

	x = start->x;
	y = start->y + size;
	ft_set_coords(&point, -1, -1);
	while (x < start->x + size)
	{
		if (map->the_map[y][x])
			ft_set_coords(&point, x, y);
		x++;
	}
	if (point.x != -1)
	{
		ft_mark_invalid(start, &point, map);
		return (0);
	}
	return (1);
}

int	ft_square_check_right(t_coords *start, t_map *map, int size)
{
	int			x;
	int			y;
	t_coords	point;

	x = start->x + size;
	y = start->y;
	ft_set_coords(&point, -1, -1);
	while (y < start->y + size)
	{
		if (map->the_map[y][x])
			ft_set_coords(&point, x, y);
		y++;
	}
	if (point.x != -1)
	{
		ft_mark_invalid(start, &point, map);
		return (0);
	}
	return (1);
}
