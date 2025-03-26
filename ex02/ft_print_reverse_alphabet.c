/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyanga <lyanga@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 18:02:31 by lyanga            #+#    #+#             */
/*   Updated: 2025/02/12 18:17:25 by lyanga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	ptr;

	ptr = 'z' + 1;
	while (--ptr >= 'a')
		write(1, &ptr, 1);
}

// int main()
// {
// 	ft_print_reverse_alphabet();
// 	return 0;
// }