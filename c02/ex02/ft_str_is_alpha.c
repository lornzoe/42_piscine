/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyanga <lyanga@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 14:43:28 by lyanga            #+#    #+#             */
/*   Updated: 2025/02/18 18:14:36 by lyanga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	itr;
	int	flag;

	flag = 1;
	itr = 0;
	while (str[itr] != '\0')
	{
		if (str[itr] >= 'a' && str[itr] <= 'z')
			itr++;
		else if (str[itr] >= 'A' && str[itr] <= 'Z')
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
// 	printf("test");
// 	printf("The quick >>> %d \n", ft_str_is_alpha("The quick"));
// 	printf("Thequick >>> %d \n", ft_str_is_alpha("Thequick"));
// 	printf("AAAbbCc123 >>> %d \n", ft_str_is_alpha("AAAbbCc123"));
// 	printf("(empty string) >>> %d \n", ft_str_is_alpha(""));
// 	printf("(space char) >>> %d \n", ft_str_is_alpha(" "));
// }
