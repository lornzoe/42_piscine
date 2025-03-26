/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyanga <lyanga@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 03:59:45 by lyanga            #+#    #+#             */
/*   Updated: 2025/03/05 20:09:55 by lyanga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char	str[10];
	long	nbr;
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

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	while (par->str != 0)
	{
		ft_putnbr(par->size);
		ft_putchar('\n');
		ft_putstr(par->str);
		ft_putchar('\n');
		ft_putstr(par->copy);
		ft_putchar('\n');
		par++;
	}
}
