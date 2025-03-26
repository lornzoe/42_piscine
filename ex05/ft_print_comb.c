/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyanga <lyanga@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 18:45:40 by lyanga            #+#    #+#             */
/*   Updated: 2025/02/12 20:47:40 by lyanga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h> 

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers_list(char x, char y, char z, bool first)
{
	if (!first)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	ft_putchar(x + 48);
	ft_putchar(y + 48);
	ft_putchar(z + 48);
}

void	ft_print_comb(void)
{
	int		x;
	int		y;
	int		z;
	bool	first;

	x = 0;
	y = 0;
	z = 0;
	first = true;
	while (x < 8)
	{
		y = x + 1;
		while (y < 9)
		{
			z = y + 1;
			while (z < 10)
			{
				ft_print_numbers_list(x, y, z, first);
				first = false;
				z++;
			}
			y++;
		}
		x++;
	}
}

// int main()
// {
// 	ft_print_comb();
// }