/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyanga <lyanga@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 18:12:13 by lyanga            #+#    #+#             */
/*   Updated: 2025/02/19 21:36:29 by lyanga           ###   ########.fr       */
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

// #include <stdio.h>
// #include <limits.h>
// int main(void)
// {
// 	ft_putnbr(INT_MAX);
// 	ft_putnbr(0);
// 	ft_putnbr(INT_MIN);
// 	ft_putnbr(-204);
// }