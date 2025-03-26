/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyanga <lyanga@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 17:00:39 by tteng             #+#    #+#             */
/*   Updated: 2025/02/16 21:00:58 by lyanga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	check_and_print(int x, int y, int width, int height)
{
	if (x == 1 || x == width)
	{
		if (y == 1 && x == 1)
			ft_putchar('/');
		else if (x == width && y == height && x > 1 && y > 1)
			ft_putchar('/');
		else if ((y == 1 && x == width) || (x == 1 && y == height))
			ft_putchar('\\');
		else
			ft_putchar('*');
	}
	else if (y == 1 || y == height)
		ft_putchar('*');
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
