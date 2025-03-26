/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyanga <lyanga@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 20:52:34 by lyanga            #+#    #+#             */
/*   Updated: 2025/02/12 21:45:32 by lyanga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h> 

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers_list2(int x, int y, bool first)
{
	if (!first)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	ft_putchar(x / 10 + '0');
	ft_putchar(x % 10 + '0');
	ft_putchar(' ');
	ft_putchar(y / 10 + '0');
	ft_putchar(y % 10 + '0');
}

void	ft_print_comb2(void)
{
	int		x;
	int		y;
	bool	first;

	x = 0;
	y = 0;
	first = true;
	while (x < 99)
	{
		y = x + 1;
		while (y < 100)
		{
			ft_print_numbers_list2(x, y, first);
			first = false;
			y++;
		}
		x++;
	}
}

// int	main()
// {
// 	ft_print_comb2();
// 	return (0);
// }