/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyanga <lyanga@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 15:20:22 by lyanga            #+#    #+#             */
/*   Updated: 2025/02/17 14:38:13 by lyanga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	itr;
	int	flag;

	itr = 0;
	flag = 1;
	while (str[itr] != '\0')
	{
		if (str[itr] >= 32 && str[itr] <= 126)
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
// 	printf("The quick >>> %d \n", ft_str_is_printable("The quick"));
// 	printf("THE QUICK >>> %d \n", ft_str_is_printable("THE QUICK"));
// 	printf("AAABBBBBCCCCCC >>> %d \n", ft_str_is_printable("AAABBBBBCCCCCC"));
// 	printf("0123456789 >>> %d \n", ft_str_is_printable("0123456789"));
// 	printf("(empty string) >>> %d \n", ft_str_is_printable(""));
// 	printf("(space char) >>> %d \n", ft_str_is_printable(" "));
// 	printf("Hello World\n,hru? >>> %d \n",
//		ft_str_is_printable("Hello World\n,hru?"));
// }