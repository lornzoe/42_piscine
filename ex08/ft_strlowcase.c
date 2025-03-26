/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyanga <lyanga@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 17:40:51 by lyanga            #+#    #+#             */
/*   Updated: 2025/02/17 14:39:19 by lyanga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	offset;
	int	itr;

	offset = 'a' - 'A';
	itr = 0;
	while (str[itr] != '\0')
	{
		if (str[itr] >= 'A' && str[itr] <= 'Z')
			str[itr] += offset;
		itr++;
	}
	return (str);
}

// #include <stdio.h>
// int main(void)
// {
// 	char test1[] = "HELLOW\nWORLD123";
// 	char test2[] = "TESTINg";
// 	char* test = "three";
// 	printf("%s\n", test);
// 	printf("char *ft_strlowcase(char *str) testing \n");
// 	printf("HELLOW\nWORLD123 >>> %s\n", ft_strlowcase(test1));
// 	printf("TESTing >>> %s\n", ft_strlowcase(test2));
// 	// printf("TESTINg >>> %s\n",
//	//	ft_strupcase("TESTINg")); // this will give segmentation fault
// }