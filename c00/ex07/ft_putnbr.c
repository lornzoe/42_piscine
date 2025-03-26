/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyanga <lyanga@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 22:10:22 by lyanga            #+#    #+#             */
/*   Updated: 2025/02/13 10:48:27 by lyanga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char	str[10];
	int		nbr;
	int		itr;

	itr = 0;
	nbr = nb;
	if (nb == 0)
		ft_putchar('0');
	if (nbr < 0)
	{
		str[itr++] = ((nb % 10) * -1) + '0';
		nbr = nb / -10;
		ft_putchar('-');
	}
	while (nbr > 0 && itr < 10)
	{
		str[itr++] = (nbr % 10) + '0';
		nbr /= 10;
	}
	while (itr > 0)
	{
		ft_putchar(str[--itr]);
	}
}

// int main()
// {
// 	ft_putnbr(-5);
// 	ft_putchar('\n');
// 	ft_putnbr(5);
// 	ft_putchar('\n');
// 	ft_putnbr(-12);
// 	ft_putchar('\n');
// 	ft_putnbr(12);
// 	ft_putchar('\n');
// 	ft_putnbr(123);
// 	ft_putchar('\n');
// 	ft_putnbr(1234);
// 	ft_putchar('\n');
// 	return (0);
// }