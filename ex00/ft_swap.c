/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyanga <lyanga@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 18:35:03 by lyanga            #+#    #+#             */
/*   Updated: 2025/02/13 19:42:03 by lyanga           ###   ########.fr       */
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

// int	main(void)
// {
// 	int a = 1;
// 	int b = 2;

// 	printf("%p \n", &a);
// 	printf("%p \n", &b);

// 	printf("%d \n", a);
// 	printf("%d \n", b);

// 	ft_swap(&a,&b);

// 	printf("%p \n", &a);
// 	printf("%p \n", &b);

// 	printf("%d \n", a);
// 	printf("%d \n", b);

// 	return 0;
// }