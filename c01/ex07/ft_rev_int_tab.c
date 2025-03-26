/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyanga <lyanga@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 22:28:58 by lyanga            #+#    #+#             */
/*   Updated: 2025/02/13 23:21:23 by lyanga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	itr;
	int	itr2;

	itr = 0;
	itr2 = size -1;
	while (itr < size / 2)
	{
		ft_swap(&tab[itr], &tab[itr2]);
		itr++;
		itr2--;
	}
}

// int main(void)
// {
// 	int test[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
// 	int test2[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

// 	for (int i = 0; i < 10; i++)
// 	{
// 		printf("%d, ", test[i]);
// 	}
// 	printf("\n");
// 	for (int j = 0; j < 9; j++)
// 	{
// 		printf("%d, ", test2[j]);
// 	}
// 	printf("\n");
// 	ft_rev_int_tab(test, 10);
// 	ft_rev_int_tab(test2, 9);
// 	for (int i = 0; i < 10; i++)
// 	{
// 		printf("%d, ", test[i]);
// 	}
// 	printf("\n");
// 	for (int j = 0; j < 9; j++)
// 	{
// 		printf("%d, ", test2[j]);
// 	}
// }