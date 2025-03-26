/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pisoncha <pisoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 15:21:47 by pisoncha          #+#    #+#             */
/*   Updated: 2025/03/01 17:36:34 by pisoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_free_char_arr(char **arr)
{
	int	i;

	i = 0;
	while (arr[i] != NULL)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

void	ft_free_dict(t_dict *dict)
{
	int	i;

	i = 0;
	while (dict[i].key != NULL)
	{
		free(dict[i].key);
		free(dict[i].value);
		i++;
	}
	free(dict[i].key);
	free(dict);
}
