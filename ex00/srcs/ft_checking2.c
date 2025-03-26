/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checking2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pisoncha <pisoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 10:08:40 by pisoncha          #+#    #+#             */
/*   Updated: 2025/03/02 15:50:07 by pisoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_is_space(char c)
{
	if (c == ' ' || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

int	ft_is_number(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int	ft_check_nbr(char *nbr)
{
	int	i;

	i = 0;
	if (ft_strlen(nbr) == 0)
		return (0);
	if (ft_strlen(nbr) > 1 && nbr[0] == '0')
		return (0);
	while (nbr[i])
	{
		if (!ft_is_number(&nbr[i]))
			return (0);
		i++;
	}
	return (1);
}

char	*ft_clean_nbr(char *nbr)
{
	int		i;
	int		j;
	int		size;
	char	*arr;

	i = 0;
	j = 0;
	size = ft_strlen(nbr);
	arr = (char *) malloc(sizeof(char) * (size + 1));
	if (arr == NULL)
		return (NULL);
	while (nbr[i])
	{
		if (ft_is_number(&nbr[i]))
		{
			arr[j] = nbr[i];
			j++;
		}
		i++;
	}
	arr[j] = '\0';
	return (arr);
}
