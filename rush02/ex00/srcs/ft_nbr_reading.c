/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr_reading.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pisoncha <pisoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 14:26:19 by lyanga            #+#    #+#             */
/*   Updated: 2025/03/02 13:53:06 by pisoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_print_arr(char **arr, int thousands_power, t_dict *dict)
{
	char	*str;
	int		i;

	str = *arr;
	if (str == NULL)
		return (1);
	while (*str)
	{
		if (*str == '0')
		{
			str++;
			continue ;
		}
		i = ft_print_first_digit(str, dict);
		if (!i)
			return (0);
		ft_print_num_connectors(str, arr, i);
		str += i;
	}
	if (thousands_power && ft_occ_0(arr[0]) != 3
		&& !ft_print_zeros(thousands_power * 3, dict))
		return (0);
	ft_print_arr_connectors(arr, thousands_power);
	return (ft_print_arr(arr + 1, thousands_power - 1, dict));
}

int	ft_print_first_digit(char *str, t_dict *dict)
{
	char	*search_key;
	int		zeros;
	t_dict	*answer;
	int		is_ten;

	zeros = ft_strlen(str) - 1;
	is_ten = 0;
	search_key = ft_build_search_key(str);
	if (search_key == NULL)
		return (0);
	if (search_key[0] == '1' && zeros == 1)
		is_ten = 1;
	answer = ft_get_value(dict, search_key);
	free(search_key);
	if (answer == NULL)
		return (0);
	ft_putstr(answer->value);
	if (zeros > 1)
	{
		ft_putchar(' ');
		if (!ft_print_zeros(zeros, dict))
			return (0);
	}
	return (1 + is_ten);
}

char	*ft_build_search_key(char *str)
{
	char	*search_key;
	int		zeros;

	zeros = ft_strlen(str) - 1;
	search_key = ft_strdup(str);
	if (search_key == NULL)
		return (0);
	if (search_key[0] != '1' && zeros == 1)
		search_key[1] = '0';
	else if (!(search_key[0] == '1' && zeros == 1))
		search_key[1] = 0;
	return (search_key);
}

int	ft_print_zeros(int zeros, t_dict *dict)
{
	char	*search_key;
	t_dict	*answer;

	search_key = ft_create_ten_power_string(zeros);
	if (search_key == NULL)
		return (0);
	answer = ft_get_value(dict, search_key);
	if (answer == NULL)
	{
		free(search_key);
		return (0);
	}
	ft_putstr(answer->value);
	free(search_key);
	return (1);
}

int	check_for_all_zeros(char **arr)
{
	int	i;
	int	flag;

	i = 0;
	flag = 1;
	while (arr[i] != NULL)
	{
		if (flag && ft_occ_0(arr[i]) != 3)
			flag = 0;
		i++;
	}
	return (flag);
}
