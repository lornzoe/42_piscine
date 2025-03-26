/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyanga <lyanga@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 11:55:20 by pisoncha          #+#    #+#             */
/*   Updated: 2025/03/02 01:12:25 by lyanga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_count_split_nbr(char *nbr)
{
	int	cnt;
	int	size;

	size = ft_strlen(nbr);
	cnt = size / 3;
	if (size % 3 != 0)
		cnt++;
	return (cnt);
}

char	**ft_split_nbr(char *nbr)
{
	int		size;
	int		i;
	int		j;
	char	**arr;
	int		len;

	i = 0;
	j = 0;
	size = ft_count_split_nbr(nbr);
	arr = (char **) malloc(sizeof(char *) * (size + 1));
	if (arr == NULL)
		return (arr);
	len = ft_strlen(nbr) % 3;
	if (len == 0)
		len = 3;
	while (nbr[i] != '\0')
	{
		arr[j] = ft_strncpy_pad(&nbr[i], len);
		i += len;
		if (len != 3)
			len = 3;
		j++;
	}
	arr[size] = NULL;
	return (arr);
}
