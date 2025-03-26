/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pisoncha <pisoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 13:35:18 by pisoncha          #+#    #+#             */
/*   Updated: 2025/03/02 15:52:57 by pisoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

t_dict	*ft_create_dict(char *file_path)
{
	char	**arr;
	t_dict	*dict;
	char	**key_value;
	int		i;

	arr = ft_read_file(file_path);
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (arr[i] != NULL)
		i++;
	dict = (t_dict *) malloc(sizeof(t_dict) * (i + 1));
	i = 0;
	while (arr[i] != NULL)
	{
		key_value = ft_split(arr[i], ":");
		dict[i].key = ft_strdup_key(key_value[0]);
		dict[i].value = ft_strdup_value(key_value[1]);
		dict[i].index = i;
		ft_free_char_arr(key_value);
		i++;
	}
	ft_free_char_arr(arr);
	dict[i].key = NULL;
	return (dict);
}

t_dict	*ft_get_value(t_dict *dict, char *key)
{
	int	i;

	i = 0;
	while (dict[i].key != NULL)
	{
		if (ft_strcmp(key, dict[i].key) == 0)
			return (&dict[i]);
		i++;
	}
	return (NULL);
}

void	ft_trim_dict_value(t_dict *dict)
{
	int	i;
	int	j;

	i = 0;
	while (dict[i].key != NULL)
	{
		j = ft_strlen(dict[i].value) - 1;
		while (j >= 0 && ft_is_space(dict[i].value[j]))
			j--;
		dict[i].value[j + 1] = '\0';
		i++;
	}
}
