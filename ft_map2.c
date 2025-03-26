/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyanga <lyanga@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 22:43:07 by yixlee            #+#    #+#             */
/*   Updated: 2025/03/05 16:22:34 by lyanga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_check_first_line(t_map *map)
{
	return (map->empty_char != map->full_char
		&& map->empty_char != map->obstacle_char
		&& map->full_char != map->obstacle_char
		&& ft_char_is_printable(map->full_char)
		&& ft_char_is_printable(map->empty_char)
		&& ft_char_is_printable(map->obstacle_char)
		&& map->header_y == map->y
		&& map->y > 0);
}

void	ft_print_solution(t_square *square, t_map *map)
{
	int		x;
	int		y;
	char	**arr;

	x = 0;
	y = 0;
	ft_draw_square(square, map);
	arr = map->read_map;
	while (y < map->y)
	{
		ft_putstr(arr[y]);
		ft_putchar('\n');
		y++;
	}
}

void	ft_map_solve(t_map *map)
{
	t_square	*square;

	square = NULL;
	if (map && map->is_valid)
	{
		square = ft_solve_biggest_square(map);
		ft_print_solution(square, map);
	}
	else
		ft_puterror("map error\n");
	if (map != NULL)
		ft_free_map(map);
	if (square != NULL)
		free(square);
	map = NULL;
}

void	ft_load_first_line_info(t_map *map, char *first_line)
{
	int	len;

	len = 0;
	while (first_line[len])
		len++;
	map->empty_char = first_line[len - 3];
	map->obstacle_char = first_line[len - 2];
	map->full_char = first_line[len - 1];
	map->header_y = ft_get_int(first_line);
}
