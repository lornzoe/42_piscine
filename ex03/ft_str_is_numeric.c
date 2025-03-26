/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyanga <lyanga@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 15:07:10 by lyanga            #+#    #+#             */
/*   Updated: 2025/02/17 14:33:30 by lyanga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	itr;
	int	flag;

	itr = 0;
	flag = 1;
	while (str[itr] != '\0')
	{
		if (str[itr] >= '0' && str[itr] <= '9')
			itr++;
		else
		{
			flag = 0;
			break ;
		}
	}
	return (flag);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("The quick >>> %d \n", ft_str_is_numeric("The quick"));
// 	printf("Thequick >>> %d \n", ft_str_is_numeric("Thequick"));
// 	printf("AAAbbCc123() >>> %d \n", ft_str_is_numeric("AAAbbCc123()"));
// 	printf("0123456789 >>> %d \n", ft_str_is_numeric("0123456789"));
// 	printf("(empty string) >>> %d \n", ft_str_is_numeric(""));
// 	printf("(space char) >>> %d \n", ft_str_is_numeric(" "));
// }