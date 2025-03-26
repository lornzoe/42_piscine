/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyanga <lyanga@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 19:24:38 by lyanga            #+#    #+#             */
/*   Updated: 2025/02/27 01:21:25 by lyanga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	itr;
	int	check;

	if (nb <= 0)
		return (0);
	itr = 0;
	check = 0;
	while (check < nb)
	{
		itr++;
		check = itr * itr;
	}
	if (nb % check)
		return (0);
	return (itr);
}

// #include <stdio.h>
// int main(void)
// {
// 	int x = ft_sqrt(1);
// 	printf("%d", x);
// }