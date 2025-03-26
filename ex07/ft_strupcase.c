/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyanga <lyanga@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 15:35:15 by lyanga            #+#    #+#             */
/*   Updated: 2025/02/17 14:38:46 by lyanga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	offset;
	int	itr;

	offset = 'a' - 'A';
	itr = 0;
	while (str[itr] != '\0')
	{
		if (str[itr] >= 'a' && str[itr] <= 'z')
			str[itr] -= offset;
		itr++;
	}
	return (str);
}

// #include <stdio.h>
// int main(void)
// {
// 	char test1[] = "testing123";
// 	char test2[] = "TESTINg";
// 	char* test = "three";
// 	printf("%s\n", test);
// 	printf("char *ft_strupcase(char *str) testing \n");
// 	printf("testing123 >>> %s\n", ft_strupcase(test1));
// 	printf("TESTINg >>> %s\n", ft_strupcase(test2));
// 	// printf("TESTINg >>> %s\n", 
//	//	ft_strupcase("TESTINg")); // this will give segmentation fault
// }