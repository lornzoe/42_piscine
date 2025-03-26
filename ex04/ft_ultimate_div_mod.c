/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyanga <lyanga@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 19:35:51 by lyanga            #+#    #+#             */
/*   Updated: 2025/02/13 19:40:37 by lyanga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

// int main(void)
// {
// 	int	div;
// 	int	mod;

// 	div = 6;
// 	mod = 3;
// 	ft_ultimate_div_mod(&div, &mod);
// 	printf("6 and 3 gives %d and %d \n", div, mod);
// 	div = 5;
// 	mod = 2;
// 	ft_ultimate_div_mod(&div, &mod);
// 	printf("5 and 2 gives %d and %d \n", div, mod);
// }