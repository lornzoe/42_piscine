/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyanga <lyanga@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 17:15:33 by lyanga            #+#    #+#             */
/*   Updated: 2025/02/19 21:43:10 by lyanga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(int c)
{
	if (c == ' ')
		return (1);
	if (c == '\t')
		return (1);
	if (c == '\r')
		return (1);
	if (c == '\n')
		return (1);
	if (c == '\v')
		return (1);
	if (c == '\f')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	full_result;
	int	minus;

	full_result = 0;
	minus = 0;
	while (ft_isspace(*str))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			minus++;
		str++;
	}
	while (*str)
	{
		if (*str < '0' || *str > '9')
			break ;
		full_result *= 10;
		full_result += (*str - '0');
		str++;
	}
	if (minus % 2)
		return (full_result *= -1);
	else
		return (full_result);
}

// #include <stdio.h>
// int main(void)
// {
// 	char str[] = "   182594492098a  ";
// 	printf("%d", ft_atoi(str));
// }