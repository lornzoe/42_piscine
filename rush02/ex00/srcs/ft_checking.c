/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checking.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyanga <lyanga@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 10:08:40 by pisoncha          #+#    #+#             */
/*   Updated: 2025/03/02 12:30:03 by lyanga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_get_arr_size(char **arr)
{
	int	i;

	i = 0;
	while (arr[i] != NULL)
		i++;
	return (i);
}

int	ft_check_dict_format(char *file_path)
{
	char	**arr;
	int		i;
	char	**key_value;

	arr = ft_read_file(file_path);
	i = 0;
	while (arr[i] != NULL)
	{
		key_value = ft_split(arr[i], ":");
		if (ft_get_arr_size(key_value) != 2 && ft_strlen(arr[i]) > 1)
		{
			ft_free_char_arr(key_value);
			ft_free_char_arr(arr);
			return (0);
		}
		ft_free_char_arr(key_value);
		i++;
	}
	ft_free_char_arr(arr);
	return (1);
}

int	ft_check_dict(char *file_path)
{
	int		file;
	int		file_size;

	file = open(file_path, O_RDONLY);
	if (file == -1)
		return (0);
	file_size = ft_get_file_size(file_path);
	if (file_size == 0)
		return (0);
	close (file);
	if (ft_check_dict_format(file_path))
		return (1);
	else
		return (0);
}

int	ft_check_biggest_nbr(int thousands_power, t_dict *dict)
{
	char	*search_key;
	t_dict	*answer;

	search_key = ft_create_ten_power_string(thousands_power * 3);
	if (search_key == NULL)
		return (0);
	answer = ft_get_value(dict, search_key);
	free(search_key);
	if (answer == NULL)
	{
		ft_put_error("Dict Error\n");
		return (0);
	}
	return (1);
}

int	ft_check_nbr_all_zeros(char **arr, t_dict *dict)
{
	t_dict	*answer;

	if (check_for_all_zeros(arr))
	{
		answer = ft_get_value(dict, "0");
		if (answer == NULL)
		{
			ft_put_error("Dict Error\n");
			return (-1);
		}
		ft_putstr(answer->value);
		return (1);
	}
	return (0);
}
