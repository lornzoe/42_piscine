/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyanga <lyanga@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 14:08:22 by lyanga            #+#    #+#             */
/*   Updated: 2025/03/05 15:37:06 by lyanga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*ft_strdup(char *src)
{
	char	*dest;
	char	*temp;

	dest = malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!dest)
		return (NULL);
	temp = dest;
	while (*src)
	{
		*temp = *src;
		temp++;
		src++;
	}
	*temp = *src;
	return (dest);
}

char	*ft_strndup(char *src, int bytes)
{
	char	*dest;
	char	*temp;
	int		i;

	i = 0;
	dest = malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!dest)
		return (NULL);
	temp = dest;
	while (*src && i < bytes)
	{
		*temp = *src;
		temp++;
		src++;
		i++;
	}
	*temp = 0;
	return (dest);
}
