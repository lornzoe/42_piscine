/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pisoncha <pisoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 10:48:26 by pisoncha          #+#    #+#             */
/*   Updated: 2025/03/02 15:52:39 by pisoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_print_result(char *nbr, char *dict_path)
{
	t_dict	*dict;
	int		size;
	char	**nbr_arr;
	int		result;

	if (!ft_check_nbr(nbr))
	{
		ft_put_error("Error\n");
		return ;
	}
	result = 1;
	dict = ft_create_dict(dict_path);
	ft_trim_dict_value(dict);
	nbr = ft_clean_nbr(nbr);
	nbr_arr = ft_split_nbr(nbr);
	size = ft_get_arr_size(nbr_arr);
	if (!ft_check_nbr_all_zeros(nbr_arr, dict)
		&& ft_check_biggest_nbr(size - 1, dict))
		result = ft_print_arr(nbr_arr, size - 1, dict);
	if (result != 1)
		ft_put_error("Dict Error\n");
	free(nbr);
	ft_free_dict(dict);
	ft_free_char_arr(nbr_arr);
}

// valgrind --leak-check=full ./rush-02
int	main(int ac, char **av)
{
	char	*dict_path;
	char	*nbr;

	if (ac == 2 || ac == 3)
	{
		if (ac == 2)
		{
			dict_path = "./dicts/numbers.dict";
			nbr = av[1];
		}
		else
		{
			dict_path = av[1];
			nbr = av[2];
		}
		if (ft_check_dict(dict_path))
			ft_print_result(nbr, dict_path);
		else
			ft_put_error("Dict Error\n");
	}
	else
		ft_put_error("Error\n");
}
