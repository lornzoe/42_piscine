/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_checking2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyanga <lyanga@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 15:16:59 by yixlee            #+#    #+#             */
/*   Updated: 2025/03/05 15:35:21 by lyanga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_get_int(char *first_line)
{
	int		i;
	int		total;
	int		num;
	char	temp;

	total = 0;
	while (first_line[total])
		total++;
	temp = first_line[total - 3];
	first_line[total - 3] = '\0';
	i = 0;
	while (first_line[i] >= '0' && first_line[i] <= '9')
		i++;
	if ((i + 3) != total)
		return (0);
	num = ft_atoi(first_line);
	first_line[total - 3] = temp;
	return (num);
}

int	ft_get_rows(char **map)
{
	int		i;

	i = 0;
	while (map[i])
		i++;
	return (i);
}
