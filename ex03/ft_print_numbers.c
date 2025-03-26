/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyanga <lyanga@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 18:07:57 by lyanga            #+#    #+#             */
/*   Updated: 2025/02/12 18:12:26 by lyanga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	ptr;

	ptr = '0' - 1;
	while (++ptr <= '9')
		write(1, &ptr, 1);
}

// int	main(void)
// {
// 	ft_print_numbers();
// 	return (0);
// }
