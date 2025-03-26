/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pisoncha <pisoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 14:15:23 by pisoncha          #+#    #+#             */
/*   Updated: 2025/03/01 11:21:55 by pisoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_is_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_count_words(char *str, char *charset)
{
	int	i;
	int	cnt;

	cnt = 0;
	i = 0;
	if (str[0] == '\0')
		return (0);
	if (!ft_is_charset(str[i], charset))
		cnt++;
	while (str[i] != '\0' && !ft_is_charset(str[i], charset))
		i++;
	while (str[i] != '\0')
	{
		if (!ft_is_charset(str[i], charset) && \
		ft_is_charset(str[i - 1], charset))
			cnt++;
		i++;
	}
	return (cnt);
}

char	*ft_word_splitter(char *str, int start_idx, char *charset)
{
	char	*arr;
	int		i;
	int		j;
	int		size;

	i = start_idx;
	size = 0;
	while (str[i] != '\0' && !ft_is_charset(str[i], charset))
	{
		size++;
		i++;
	}
	arr = (char *) malloc(sizeof(char) * (size + 1));
	if (arr == NULL)
		return (NULL);
	j = 0;
	while (j < size)
	{
		arr[j] = str[start_idx + j];
		j++;
	}
	arr[j] = '\0';
	return (arr);
}

char	**ft_split(char *str, char *charset)
{
	char	**arr;
	int		i;
	int		j;
	int		size;

	if (str == NULL || charset == NULL)
		return (NULL);
	size = ft_count_words(str, charset);
	arr = (char **) malloc(sizeof(char *) * (size + 1));
	if (arr == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (i < size)
	{
		while (ft_is_charset(str[j], charset))
			j++;
		arr[i] = ft_word_splitter(str, j, charset);
		j += ft_strlen(arr[i]);
		i++;
	}
	arr[i] = NULL;
	return (arr);
}
