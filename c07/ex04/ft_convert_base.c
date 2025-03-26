/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyanga <lyanga@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 19:38:07 by lyanga            #+#    #+#             */
/*   Updated: 2025/02/28 01:48:20 by lyanga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <limits.h>

long	ft_atol_base(char *str, char *base);
int		ft_strlen(char *str);
int		ft_validate_radix(char *str);

int	split_nbr_base(long nbr, char *base, int **nbrs, int *neg)
{
	int		*str;
	int		itr;

	itr = 0;
	str = malloc(sizeof(int) * 32);
	if (!str)
		return (0);
	if (nbr < 0)
	{
		nbr *= -1;
		*neg = 1;
	}
	if (nbr == 0)
		str[itr++] = 0;
	while (nbr > 0)
	{
		str[itr++] = ((int)nbr % ft_strlen(base));
		nbr /= ft_strlen(base);
	}
	*nbrs = str;
	return (itr);
}

char	*build_string(int *nbrs, int len, int neg, char *base_to)
{
	char	*result;
	int		i;

	i = 0;
	result = malloc(sizeof(char) * len + 1 + neg);
	if (!result)
		return (NULL);
	result[len + neg] = 0;
	if (neg)
	{
		result[0] = '-';
		result++;
	}
	while (len--)
		result[i++] = base_to[(nbrs[len])];
	if (neg)
		result--;
	return (result);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long	nbr_l;
	int		*nbrs;
	char	*result;
	int		neg;
	int		len;

	if (!ft_validate_radix(base_from) || !ft_validate_radix(base_to))
		return (NULL);
	nbr_l = ft_atol_base(nbr, base_from);
	if (nbr_l < INT_MIN || nbr_l > INT_MAX)
		return (NULL);
	neg = 0;
	len = 0;
	nbrs = 0;
	result = 0;
	len = split_nbr_base(nbr_l, base_to, &nbrs, &neg);
	if (!len)
		return (NULL);
	result = build_string(nbrs, len, neg, base_to);
	if (!result)
		return (NULL);
	return (result);
}

// #include <stdio.h>
// int main(void)
// {
// 	char *test;
// 	test = ft_convert_base(" \n\t-+++++-1235", "01234567", "0123456789abcdef");
// 	printf("%s", test);
// }