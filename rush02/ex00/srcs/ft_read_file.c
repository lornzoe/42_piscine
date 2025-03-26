/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pisoncha <pisoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 11:06:05 by pisoncha          #+#    #+#             */
/*   Updated: 2025/03/01 11:17:23 by pisoncha         ###   ########.fr       */
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
