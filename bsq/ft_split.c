/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyanga <lyanga@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 10:42:10 by lyanga            #+#    #+#             */
/*   Updated: 2025/03/05 09:03:48 by lyanga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_get_offset_from_sep(char *str, char *charset)
{
	int	offset;
	int	i;

	offset = 0;
	i = 0;
	while (*str)
	{
		i = 0;
		while (charset[i] != '\0')
		{
			if (charset[i] == *str)
				return (offset);
			i++;
		}
		str++;
		offset++;
	}
	return (offset);
}

int	ft_count_words(char *str, char *charset)
{
	int	count;
	int	i;

	count = 1;
	if (!*str)
		return (0);
	while (*str)
	{
		i = 0;
		while (charset[i] != '\0')
		{
			if (charset[i] == *str)
			{
				count++;
				if (!ft_get_offset_from_sep(str - 1, charset))
					count--;
				break ;
			}
			i++;
		}
		str++;
	}
	return (count);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	itr;

	itr = 0;
	while (itr < n && src[itr] != '\0')
	{
		dest[itr] = src[itr];
		itr++;
	}
	while (itr < n)
	{
		dest[itr] = '\0';
		itr++;
	}
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	int		count;
	char	**words;
	char	**temp;
	int		offset;

	count = ft_count_words(str, charset);
	words = malloc(sizeof(char *) * (count + 1));
	temp = words;
	while (*str)
	{
		offset = ft_get_offset_from_sep(str, charset);
		if (offset)
		{
			*temp = malloc(sizeof(char) * offset + 1);
			*temp = ft_strncpy(*temp, str, offset);
			(*temp)[offset] = 0;
			str += offset;
			if (!*str)
				return (words);
			temp++;
		}
		str++;
	}
	*temp = NULL;
	return (words);
}
