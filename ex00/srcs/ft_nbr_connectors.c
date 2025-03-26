/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr_connectors.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyanga <lyanga@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 12:11:55 by lyanga            #+#    #+#             */
/*   Updated: 2025/03/02 12:25:09 by lyanga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_print_num_connectors(char *str, char **arr, int i)
{
	if (ft_strlen(str) == 2 && str[1] != '0' && i != 2)
		ft_putchar('-');
	else if ((ft_strlen(str) == 1 && arr[1] != NULL)
		|| (ft_strlen(str) == 2 && i == 2 && arr[1] != NULL)
		|| (ft_strlen(str) > 1 && ft_occ_0(str + 1) == ft_strlen(str) - 1
			&& arr[1] != NULL))
		ft_putchar(' ');
	if (ft_strlen(str) == 3 && (str[1] != '0' || str[2] != '0'))
		ft_putstr(" and ");
}

void	ft_print_arr_connectors(char **arr, int thousands_power)
{
	if (thousands_power == 1
		&& arr[1][0] == '0'
		&& (arr[1][1] != '0' || arr[1][2] != '0'))
		ft_putstr(" and ");
	else if (thousands_power != 0 && ft_occ_0(arr[1]) != 3
		&& !check_for_all_zeros(&arr[1]))
		ft_putstr(", ");
}
