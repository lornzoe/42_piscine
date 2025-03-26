/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyanga <lyanga@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 18:16:35 by lyanga            #+#    #+#             */
/*   Updated: 2025/02/12 18:31:12 by lyanga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	int	zero;

	zero = 0;
	if (n < zero)
		write(1, "N", 1);
	if (n >= zero)
		write(1, "P", 1);
}

// int main()
// {
// 	ft_is_negative(0);
// }
