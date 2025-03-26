/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdin2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yixlee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 10:54:42 by yixlee            #+#    #+#             */
/*   Updated: 2025/03/05 10:54:45 by yixlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	**ft_get_the_map_from_stream(char *stream, char empty)
{
	char	**src;
	int		lines;
	int		i;

	while (*stream != '\n')
		stream++;
	src = ft_split(stream, "\n");
	if (!src)
		return (NULL);
	lines = 0;
	while (src[lines])
	{
		i = 0;
		while (src[lines][i])
		{
			if (src[lines][i] == empty)
				src[lines][i] = 0;
			else
				src[lines][i] = 1;
			i++;
		}
		lines++;
	}
	return (src);
}
