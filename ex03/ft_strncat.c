/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyanga <lyanga@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 21:33:20 by lyanga            #+#    #+#             */
/*   Updated: 2025/02/20 13:22:13 by lyanga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	itr;
	unsigned int	itr2;

	itr = 0;
	itr2 = 0;
	while (dest[itr] != '\0')
	{
		itr++;
	}
	while (src[itr2] != '\0' && itr2 < nb)
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
// 	printf("%s\n", ft_strncat(s1, s2, 6));
// 	return (0);
// }