/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyanga <lyanga@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 17:34:39 by lyanga            #+#    #+#             */
/*   Updated: 2025/03/05 07:50:48 by lyanga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*ft_strncpy_offset(char *dest, char *src, int start, int bytes)
{
	unsigned int	itr;

	itr = 0;
	while (itr < (unsigned)bytes)
	{
		dest[itr + start] = src[itr];
		itr++;
	}
	return (dest);
}

char	*ft_realloc_buffer(char	*buffer, int bytes, int *buf_size)
{
	char	*new_buffer;

	*buf_size += CHUNK_SIZE;
	new_buffer = malloc(sizeof(char) * *buf_size);
	if (!new_buffer)
		return (NULL);
	ft_strncpy(new_buffer, buffer, bytes);
	free(buffer);
	return (new_buffer);
}
