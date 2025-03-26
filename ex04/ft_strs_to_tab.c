/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyanga <lyanga@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 03:37:57 by lyanga            #+#    #+#             */
/*   Updated: 2025/03/05 19:41:12 by lyanga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	itr;

	itr = 0;
	while (*str)
	{
		str++;
		itr++;
	}
	return (itr);
}

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

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*list;

	i = 0;
	list = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!list)
		return (NULL);
	while (i < ac)
	{
		list[i].size = ft_strlen(av[i]);
		list[i].str = av[i];
		list[i].copy = ft_strdup(av[i]);
		i++;
	}
	list[i].str = 0;
	return (list);
}
