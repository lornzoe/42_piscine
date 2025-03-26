/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyanga <lyanga@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 19:42:10 by lyanga            #+#    #+#             */
/*   Updated: 2025/02/19 21:57:00 by lyanga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_validate_radix(char *str)
{
	int	itr;
	int	itr2;

	itr = 0;
	while (str[itr])
	{
		if (str[itr] == '-' || str[itr] == '+')
			return (0);
		itr2 = itr + 1;
		while (str[itr2])
		{
			if (str[itr] == str[itr2])
				return (0);
			itr2++;
		}
		itr++;
	}
	if (itr <= 1)
		return (0);
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		str[32];
	int		itr;
	int		radix_size;

	if (!ft_validate_radix(base))
		return ;
	itr = 0;
	radix_size = 0;
	while (base[radix_size])
		radix_size++;
	if (nbr == 0)
		ft_putchar(base[0]);
	if (nbr < 0)
	{
		str[itr++] = ((nbr % radix_size) * -1);
		nbr /= -radix_size;
		ft_putchar('-');
	}
	while (nbr > 0)
	{
		str[itr++] = (nbr % radix_size);
		nbr /= radix_size;
	}
	while (itr > 0)
		ft_putchar(base[str[--itr]]);
}

// #include <limits.h>
// int main(void)
// {
// 	ft_putnbr_base(123456, "_coping';]");
// }