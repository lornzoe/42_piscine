/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_reading.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyanga <lyanga@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 10:33:25 by lyanga            #+#    #+#             */
/*   Updated: 2025/03/05 07:49:18 by lyanga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_get_file_size(char *file_path)
{
	int		file;
	int		size;
	char	buffer;

	size = 0;
	file = open(file_path, O_RDONLY);
	if (file == -1)
		return (-1);
	while (read(file, &buffer, 1))
		size++;
	close(file);
	return (size);
}

int	ft_get_first_line_size(char *file_path)
{
	int		file;
	int		size;
	char	buffer;

	size = 0;
	file = open(file_path, O_RDONLY);
	if (file == -1)
		return (-1);
	while (read(file, &buffer, 1))
	{
		if (buffer == '\n')
			break ;
		size++;
	}
	close(file);
	return (size);
}

char	*ft_get_first_line(char *file_path)
{
	int		file;
	int		size;
	char	*buffer;

	size = ft_get_first_line_size(file_path);
	if (size < 0)
		return (NULL);
	file = open(file_path, O_RDONLY);
	if (file == -1)
		return (NULL);
	buffer = (char *) malloc(sizeof(char) * (size + 1));
	if (buffer == NULL)
	{
		close (file);
		return (NULL);
	}
	read(file, buffer, size);
	buffer[size] = '\0';
	close(file);
	return (buffer);
}

char	**ft_read_file(char *file_path)
{
	int		file;
	int		size;
	char	*buffer;
	char	**arr;

	size = ft_get_file_size(file_path);
	if (size < 0)
		return (NULL);
	file = open(file_path, O_RDONLY);
	if (file == -1)
		return (NULL);
	buffer = (char *) malloc(sizeof(char) * (size + 1));
	if (buffer == NULL)
	{
		close (file);
		return (NULL);
	}
	read(file, buffer, size);
	buffer[size] = '\0';
	arr = ft_split(buffer, "\n");
	free(buffer);
	close(file);
	return (arr);
}

char	*ft_read_file_stream(char *file_path)
{
	int		file;
	int		size;
	char	*buffer;

	size = ft_get_file_size(file_path);
	if (size < 0)
		return (NULL);
	file = open(file_path, O_RDONLY);
	if (file == -1)
		return (NULL);
	buffer = (char *) malloc(sizeof(char) * (size + 1));
	if (buffer == NULL)
	{
		close (file);
		return (NULL);
	}
	read(file, buffer, size);
	buffer[size] = '\0';
	close(file);
	return (buffer);
}
