/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyanga <lyanga@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 20:01:42 by lyanga            #+#    #+#             */
/*   Updated: 2025/02/20 13:22:26 by lyanga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	itr;
	unsigned int	itr2;

	itr = 0;
	itr2 = 0;
	while (dest[itr] != '\0')
	{
		itr++;
	}
	while (src[itr2] != '\0')
	{
		dest[itr] = src[itr2];
		itr++;
		itr2++;
	}
	dest[itr] = '\0';
	return (dest);
}

// #include <stdio.h>
// #include <string.h> // cc -lbsd if this cant compile on its own
// int main(void)
// {
// 	char s1[50] = "the winning string";
// 	// need to have free space in dest
// 	// or else buffer overflow error
// 	char s2[] = "the losing string";
// 	// swap with ft version and back
// 	strcat(s1, s2);
// 	printf("%s\n", s1);
// 	return (0);
// }