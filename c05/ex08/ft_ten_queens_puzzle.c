/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyanga <lyanga@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 21:26:15 by lyanga            #+#    #+#             */
/*   Updated: 2025/02/23 18:42:21 by lyanga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_array(int sequence[10])
{
	int		i;
	char	filler;

	i = 0;
	filler = '0';
	while (i < 10)
	{
		filler = '0' + sequence[i];
		write(1, &filler, 1);
		i++;
	}
	write(1, "\n", 1);
}

int	check_collision(int a, int b, int x, int y)
{
	int	n;

	n = 0;
	if (a == x || b == y)
		return (1);
	while (n < 10)
	{
		if (a == (x - n) && (b == (y - n) || b == (y + n)))
			return (1);
		n++;
	}
	return (0);
}

void	recursive(int x, int y, int curr[10], int *counter)
{
	int	n;
	int	i;

	n = 0;
	i = 0;
	while (n < x)
	{
		if (check_collision(n, curr[n], x, y))
		{
			return ;
		}
		n++;
	}
	curr[x] = y;
	if (x == 9)
	{
		print_array(curr);
		*counter += 1;
		return ;
	}
	while (i < 10)
	{
		recursive(x + 1, i, curr, counter);
		i++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	str[10];
	int	y;
	int	counter;

	y = 0;
	counter = 0;
	while (y <= 9)
	{
		str[y] = 0;
		y++;
	}
	y = 0;
	while (y < 10)
	{
		recursive(0, y, str, &counter);
		y++;
	}
	return (counter);
}

// int main(void)
// {
// 	int x;
// 	x = 0;
// 	x = ft_ten_queens_puzzle();
// 	return (0);
// }