/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pisoncha <pisoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 11:24:01 by pisoncha          #+#    #+#             */
/*   Updated: 2025/02/23 10:14:34 by pisoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_print_error(void)
{
	write(2, "Error\n", 6);
}

int	ft_get_size(char *str)
{
	int	size;

	size = ft_strlen(str);
	if (size == 15)
		return (2);
	else if (size == 23)
		return (3);
	else if (size == 31)
		return (4);
	else if (size == 39)
		return (5);
	else if (size == 47)
		return (6);
	else if (size == 55)
		return (7);
	else if (size == 63)
		return (8);
	else if (size == 71)
		return (9);
	else
		return (0);
}
