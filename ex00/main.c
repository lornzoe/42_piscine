/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pisoncha <pisoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 12:34:07 by pisoncha          #+#    #+#             */
/*   Updated: 2025/02/23 12:58:27 by pisoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(int argc, char **argv)
{
	char	**board;
	char	**clues;
	int		size;

	if (argc == 2)
		size = ft_get_size(argv[1]);
	if (argc == 2 && ft_check_input(argv[1], size) == 1)
	{
		clues = ft_convert_input(argv[1], size);
		board = ft_create_table(size + 2, size + 2);
		ft_set_clues(board, clues, size);
		ft_solve(board, size);
		if (board[0][0] == '0')
		{
			ft_print_error();
			ft_free_table(board, size + 2);
		}
	}
	else
	{
		ft_print_error();
	}
}
