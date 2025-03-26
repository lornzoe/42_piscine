/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyanga <lyanga@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 23:41:25 by lyanga            #+#    #+#             */
/*   Updated: 2025/02/14 00:37:34 by lyanga           ###   ########.fr       */
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

int	ft_partition(int *arr, int low, int high)
{
	int	pivot;
	int	itr;
	int	swapmarker;

	pivot = arr[high];
	itr = low -1;
	swapmarker = low -1;
	while (itr++ < high)
	{
		if (arr[itr] <= pivot)
		{
			swapmarker++;
			if (itr > swapmarker)
				ft_swap(&arr[itr], &arr[swapmarker]);
		}
	}
	return (swapmarker);
}

void	ft_quicksort(int *arr, int low, int high)
{
	int	pi;

	pi = -1;
	if (low < high)
	{
		pi = ft_partition(arr, low, high);
		ft_quicksort(arr, low, pi - 1);
		ft_quicksort(arr, pi + 1, high);
	}
}

void	ft_sort_int_tab(int *tab, int size)
{
	ft_quicksort(tab, 0, size - 1);
}

// int main(void)
// {
// 	int arr[10] = {3, 2, 5, 0, 1, 8, 7, 6, 9, 4};

// 	for (int i = 0; i < 10; i++) 
// 	{
//         printf("%d ", arr[i]);
//  }
// 	printf("\n");
// 	ft_sort_int_tab(arr, 10);
// 	for (int i = 0; i < 10; i++) 
// 	{
//  	printf("%d ", arr[i]);
// 	}
// }