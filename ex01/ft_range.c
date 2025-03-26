/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyanga <lyanga@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 14:19:17 by lyanga            #+#    #+#             */
/*   Updated: 2025/02/25 16:36:04 by lyanga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	unsigned int	i;
	int				*arr;
	int				*temp;

	if (min >= max)
		return (NULL);
	i = max - min;
	arr = malloc(sizeof(int) * i);
	if (!arr)
		return (NULL);
	temp = arr;
	*temp = min;
	while (min < max - 1)
	{
		temp++;
		min++;
		*temp = min;
	}
	return (arr);
}

// #include <stdio.h>
// int main(int argsc, char** argsv)
// {
// 	if (argsc == 3)
// 	{
// 		int range = atoi(argsv[2]) - atoi(argsv[1]);
// 		int *x = ft_range(atoi(argsv[1]), atoi(argsv[2]));
// 		for (int i = 0; i < range; i++)
// 		{
// 			printf("%i ", *x);
// 			x++;
// 		} 
// 	}
// }