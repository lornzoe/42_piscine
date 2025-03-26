/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyanga <lyanga@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 16:42:27 by lyanga            #+#    #+#             */
/*   Updated: 2025/02/26 19:32:17 by lyanga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

char	*malloc_empty_str(void)
{
	char	*result;

	result = malloc(sizeof(char));
	*result = 0;
	return (result);
}

int	get_strslen(char **strs, int size)
{
	int	i;
	int	totallen;

	i = 0;
	totallen = 0;
	while (i < size)
	{
		totallen += ft_strlen(strs[i]);
		i++;
	}
	return (totallen);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	char	*curr;
	int		i;
	int		j;
	int		totallen;

	if (size == 0)
		return (malloc_empty_str());
	i = 0;
	j = 0;
	totallen = get_strslen(strs, size) + ft_strlen(sep) * (size - 1);
	result = malloc(totallen + 1);
	while (i < size * 2 -1)
	{
		if (i % 2)
			curr = sep;
		else
			curr = strs[i / 2];
		while (totallen - j && *curr)
			result[j++] = *curr++;
		i++;
	}
	result[j] = 0;
	return (result);
}

// #include <stdio.h>
// int main(void)
// {
// 	char *strs[3] = {"hi", "hello", "howareyou"};
// 	printf("%s", ft_strjoin(3, strs, "-"));
// }