/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyanga <lyanga@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 11:54:31 by lyanga            #+#    #+#             */
/*   Updated: 2025/02/18 16:51:42 by lyanga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	itr;

	itr = 0;
	while (src[itr] != '\0')
	{
		dest[itr] = src[itr];
		itr++;
	}
	dest[itr] = src[itr];
	return (dest);
}

// #include <stdio.h> 
// int	main(void)
// {
// 	char first[] = "The first line is 20"; 
// 	// char second[] = "seco line is 14"; 
// 	printf("%s \n %s \n", "The first line is 20", "seco line is 14");
// 	printf(">> %s", ft_strcpy(first, "seco line is 14")); 
// }