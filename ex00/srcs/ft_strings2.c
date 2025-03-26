/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strings2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyanga <lyanga@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 15:28:32 by lyanga            #+#    #+#             */
/*   Updated: 2025/03/02 12:27:05 by lyanga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

int	ft_occ_0(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == '0')
			count++;
		i++;
	}
	return (count);
}

char	*ft_create_ten_power_string(int power)
{
	char	*str;
	int		i;

	str = malloc(sizeof(char) * (power + 2));
	if (!str)
		return (NULL);
	str[power + 1] = 0;
	str[0] = '1';
	i = 1;
	while (i < (power + 1))
	{
		str[i] = '0';
		i++;
	}
	return (str);
}
