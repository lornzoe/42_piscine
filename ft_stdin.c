/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdin.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyanga <lyanga@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 19:41:32 by lyanga            #+#    #+#             */
/*   Updated: 2025/03/05 09:11:20 by lyanga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*ft_handle_std_in(char *stream)
{
	int	size;

	size = 0;
	stream = malloc(sizeof(char) * CHUNK_SIZE);
	stream = ft_read_standard_input(&size, stream);
	stream[size] = '\0';
	return (stream);
}

char	*ft_read_standard_input(int *size, char *stream)
{
	char	*buffer;
	int		strm_size;
	int		bytes_read;

	buffer = malloc(sizeof(char) * (CHUNK_SIZE));
	if (buffer == NULL || stream == NULL)
		return (NULL);
	strm_size = CHUNK_SIZE;
	bytes_read = read(0, buffer, CHUNK_SIZE);
	while (bytes_read > 0)
	{
		if (*size + bytes_read > strm_size)
		{
			stream = ft_realloc_buffer(stream, *size + bytes_read, &strm_size);
			if (stream == NULL)
				return (NULL);
		}
		ft_strncpy_offset(stream, buffer, *size, bytes_read);
		*size += bytes_read;
		bytes_read = read(0, buffer, CHUNK_SIZE);
	}
	free(buffer);
	return (stream);
}

t_map	*ft_create_map_from_stream(char *stream)
{
	t_map	*map;

	map = malloc(sizeof(t_map));
	if (!map)
		return (NULL);
	map->is_valid = 0;
	map->the_map = NULL;
	map->read_map = NULL;
	map->first_line = ft_get_first_line_from_stream(stream);
	if (!map->first_line)
		return (map);
	map->read_map = ft_get_map_from_stream(stream);
	if (map->read_map == NULL)
		return (map);
	ft_load_first_line_info(map, map->first_line);
	map->y = ft_get_rows(map->read_map);
	map->is_valid = (ft_check_first_line(map) && ft_check_maprow(map->read_map)
			&& ft_check_mapchar(map->read_map,
				map->obstacle_char, map->empty_char));
	if (!map->is_valid)
		return (map);
	map->x = ft_get_row_len(map->read_map);
	map->the_map = ft_get_the_map_from_stream(stream, map->empty_char);
	return (map);
}

char	*ft_get_first_line_from_stream(char *stream)
{
	int	i;

	i = 0;
	if (!stream || !*stream)
		return (NULL);
	while (stream[i] != 0)
	{
		if (stream[i] == '\n')
			break ;
		i++;
	}
	return (ft_strndup(stream, i));
}

char	**ft_get_map_from_stream(char *stream)
{
	char	**src;

	while (*stream != '\n' && *stream)
		stream++;
	src = ft_split(stream, "\n");
	if (!src)
		return (NULL);
	return (src);
}
