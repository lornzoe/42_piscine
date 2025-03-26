/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyanga <lyanga@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 17:09:19 by lyanga            #+#    #+#             */
/*   Updated: 2025/02/19 21:32:00 by lyanga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	itr;

	itr = 0;
	while (*str)
	{
		str++;
		itr++;
	}
	return (itr);
}

// #include <stdio.h>
// int main(void)
// {
// 	printf("%d\n", ft_strlen("123456789"));
// 	printf("%d\n", ft_strlen(""));
// }