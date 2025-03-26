/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyanga <lyanga@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 18:07:06 by tteng             #+#    #+#             */
/*   Updated: 2025/02/15 20:14:54 by lyanga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	check_and_print(int x, int y, int width, int height)
{
	if (y == 1 || y == height)
	{
		if (x == 1)
			ft_putchar('A');
		else if (x == width)
			ft_putchar('C');
		else
			ft_putchar('B');
	}
	else if (x == 1 || x == width)
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	coord_x;
	int	coord_y;

	if ((x <= 0) || (y <= 0))
	{
		write (1, "Error: both variables must be non-zero and positive\n", 52);
		return ;
	}
	coord_x = 1;
	coord_y = 1;
	while (coord_y <= y)
	{
		while (coord_x <= x)
		{
			check_and_print(coord_x, coord_y, x, y);
			coord_x++;
		}
		ft_putchar('\n');
		coord_x = 1;
		coord_y++;
	}
}
