/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyanga <lyanga@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 15:16:20 by lyanga            #+#    #+#             */
/*   Updated: 2025/02/17 14:33:49 by lyanga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	itr;
	int	flag;

	itr = 0;
	flag = 1;
	while (str[itr] != '\0')
	{
		if (str[itr] >= 'a' && str[itr] <= 'z')
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
// 	printf("The quick>>> %d \n", ft_str_is_lowercase("The quick"));
// 	printf("thequick >>> %d \n", ft_str_is_lowercase("thequick"));
// 	printf("AAAbbCc123() >>> %d \n", ft_str_is_lowercase("AAAbbCc123()"));
// 	printf("0123456789 >>> %d \n", ft_str_is_lowercase("0123456789"));
// 	printf("(empty string) >>> %d \n", ft_str_is_lowercase(""));
// 	printf("(space char) >>> %d \n", ft_str_is_lowercase(" "));
// }