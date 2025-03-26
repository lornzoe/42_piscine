/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pisoncha <pisoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 16:10:23 by pisoncha          #+#    #+#             */
/*   Updated: 2025/03/01 16:46:29 by pisoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*ft_strdup(char *src)
{
	int		size;
	int		i;
	char	*arr;

	if (src == NULL)
		return (NULL);
	size = ft_strlen(src) + 1;
	arr = (char *) malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		arr[i] = src[i];
		i++;
	}
	arr[i] = '\0';
	return (arr);
}

char	*ft_strdup_key(char *src)
{
	int		size;
	int		i;
	char	*arr;

	if (src == NULL)
		return (NULL);
	size = ft_strlen(src) + 1;
	arr = (char *) malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0' && src[i] >= '0' && src[i] <= '9')
	{
		arr[i] = src[i];
		i++;
	}
	arr[i] = '\0';
	return (arr);
}

char	*ft_strdup_value(char *src)
{
	int		size;
	int		i;
	int		j;
	char	*arr;

	if (src == NULL)
		return (NULL);
	size = ft_strlen(src) + 1;
	arr = (char *) malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (src[i] == ' ')
		i++;
	while (src[i] != '\0')
	{
		arr[j] = src[i];
		i++;
		j++;
	}
	arr[j] = '\0';
	return (arr);
}
