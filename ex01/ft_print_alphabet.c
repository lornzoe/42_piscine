/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyanga <lyanga@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 17:48:53 by lyanga            #+#    #+#             */
/*   Updated: 2025/02/12 18:00:03 by lyanga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	ptr;

	ptr = 'a' - 1;
	while (++ptr <= 'z')
		write(1, &ptr, 1);
}

// int main()
// {
//     ft_print_alphabet();
//     return 0;
// }