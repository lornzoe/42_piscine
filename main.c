/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyanga <lyanga@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 10:51:15 by lyanga            #+#    #+#             */
/*   Updated: 2025/03/05 08:24:34 by lyanga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(int argc, char **argv)
{
	t_map	*map;
	char	*stream;
	int		i;

	i = 1;
	stream = NULL;
	if (argc > 1)
	{
		while (i < argc)
		{
			stream = ft_read_file_stream(argv[i]);
			map = ft_create_map_from_stream(stream);
			free(stream);
			ft_map_solve(map);
			if (i + 1 != argc)
				ft_putchar('\n');
			i++;
		}
		return (0);
	}
	stream = ft_handle_std_in(stream);
	map = ft_create_map_from_stream(stream);
	free(stream);
	ft_map_solve(map);
	return (0);
}
