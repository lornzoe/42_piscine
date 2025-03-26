/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyanga <lyanga@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 14:37:54 by lyanga            #+#    #+#             */
/*   Updated: 2025/03/06 19:19:10 by lyanga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*arr;
	int	i;

	i = 0;
	arr = malloc(sizeof(int) * length);
	if (!arr)
		return (0);
	while (i < length)
	{
		arr[i] = f(tab[i]);
		i++;
	}
	return (arr);
}

// int test(int a)
// {
// 	return (a + 1);
// }
// #include <stdio.h>
// int main()
// {
// 	int tab[] = {0, 1, 2, 3, 4};
// 	int *i;
// 	i = ft_map(tab, 5, test);
// 	for (int j = 0; j <5; j++)
// 	{
// 		printf("%i",i[j]);
// 	}
// 	return 0;
// }