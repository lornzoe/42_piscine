/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyanga <lyanga@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 12:43:30 by lyanga            #+#    #+#             */
/*   Updated: 2025/02/17 14:24:52 by lyanga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	itr;

	itr = 0;
	while (itr < n && src[itr] != '\0')
	{
		dest[itr] = src[itr];
		itr++;
	}
	while (itr < n)
	{
		dest[itr] = '\0';
		itr++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char first[] = "The first line is 20"; 
// 	char second[15];
// 	second[0] = 'a';
// 	printf("%s \n %s \n", "The first line is 20", second);
// 	printf(">> %s", ft_strncpy(second, first, 8)); 
// 	// why does it fail if the dest is set to a string directly
// 	// rather than a variable declaring a string?
// }