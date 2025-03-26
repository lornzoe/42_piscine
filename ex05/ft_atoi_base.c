/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyanga <lyanga@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 20:59:07 by lyanga            #+#    #+#             */
/*   Updated: 2025/02/19 21:58:42 by lyanga           ###   ########.fr       */
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

int	index_in_base(char a, char *base)
{
	int	itr;

	itr = 0;
	while (base[itr])
	{
		if (a == base[itr])
			return (itr);
		itr++;
	}
	return (-1);
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

int	ft_strlen(char *str)
{
	int	itr;

	itr = 0;
	while (*str)
	{
		str++;
		itr++;
	}
	return (itr);
}

int	ft_atoi_base(char *str, char *base)
{
	int	full_result;
	int	minus;
	int	radix_size;

	if (!ft_validate_radix(base))
		return (0);
	full_result = 0;
	minus = 1;
	radix_size = ft_strlen(base);
	while (ft_isspace(*str))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			minus *= -1;
		str++;
	}
	while (*str)
	{
		if (index_in_base(*str, base) == -1)
			break ;
		full_result = full_result * radix_size + index_in_base(*str, base);
		str++;
	}
	return (full_result * minus);
}

// #include <stdio.h>
// int main(void)
// {
// 	int x = ft_atoi_base("    ---++-+-4f683", 
// 	"0134567f");
// 	printf("%d\n", x);
// }