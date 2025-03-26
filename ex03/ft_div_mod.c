/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyanga <lyanga@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 19:23:20 by lyanga            #+#    #+#             */
/*   Updated: 2025/02/13 19:34:12 by lyanga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int main(void)
// {
// 	int	div;
// 	int	mod;
// 	ft_div_mod(6, 3, &div, &mod);
// 	printf("6 and 3 gives %d and %d \n", div, mod);
// 	ft_div_mod(5, 4, &div, &mod);
// 	printf("5 and 4 gives %d and %d \n", div, mod);
// }