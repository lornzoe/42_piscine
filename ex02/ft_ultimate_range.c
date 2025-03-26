/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyanga <lyanga@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 16:19:38 by lyanga            #+#    #+#             */
/*   Updated: 2025/02/27 01:11:07 by lyanga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int				len;
	int				*temp;

	len = max - min;
	if (len <= 0)
	{
		range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int) * len);
	if (!range)
		return (-1);
	temp = *range;
	*temp = min;
	while (min < max - 1)
	{
		temp++;
		min++;
		*temp = min;
	}
	return (len);
}

// #include <stdio.h>
// int main(int argsc, char** argsv)
// {
// 	if (argsc == 3)
// 	{
// 		int range = atoi(argsv[2]) - atoi(argsv[1]);
// 		int *x;
// 		ft_ultimate_range(&x, atoi(argsv[1]), atoi(argsv[2]));
// 		for (int i = 0; i < range; i++)
// 		{
// 			printf("%i ", *x);
// 			x++;
// 		} 
// 	}
// }