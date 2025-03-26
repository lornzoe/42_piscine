/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pisoncha <pisoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 11:01:13 by pisoncha          #+#    #+#             */
/*   Updated: 2025/03/01 17:28:34 by pisoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_put_str(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		write(1, &str[i++], 1);
}

void	ft_put_error(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		write(2, &str[i++], 1);
}

int	ft_get_last_index(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	i--;
	while (str[i] == ' ' && i >= 0)
		i--;
	return (i);
}

void	ft_put_trim_str(char *str)
{
	int	i;
	int	first_printed;
	int	last_idex;

	i = 0;
	last_idex = ft_get_last_index(str);
	first_printed = 0;
	while (str[i] != '\0' && str[i] == ' ')
		i++;
	while (str[i] != '\0' && i <= last_idex)
	{
		if (str[i] != ' ')
		{
			write(1, &str[i], 1);
			first_printed = 1;
		}
		else if (first_printed)
		{
			write(1, &str[i], 1);
			first_printed = 0;
		}
		i++;
	}
}
