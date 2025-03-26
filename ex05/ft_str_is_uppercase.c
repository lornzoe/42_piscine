/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyanga <lyanga@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 15:20:22 by lyanga            #+#    #+#             */
/*   Updated: 2025/02/17 14:35:34 by lyanga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	itr;
	int	flag;

	itr = 0;
	flag = 1;
	while (str[itr] != '\0')
	{
		if (str[itr] >= 'A' && str[itr] <= 'Z')
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
// 	printf("The quick >>> %d \n", ft_str_is_uppercase("The quick"));
// 	printf("THE QUICK >>> %d \n", ft_str_is_uppercase("THE QUICK"));
// 	printf("AAABBBBBCCCCCC >>> %d \n", ft_str_is_uppercase("AAABBBBBCCCCCC"));
// 	printf("0123456789 >>> %d \n", ft_str_is_uppercase("0123456789"));
// 	printf("(empty string) >>> %d \n", ft_str_is_uppercase(""));
// 	printf("(space char) >>> %d \n", ft_str_is_uppercase(" "));
// }