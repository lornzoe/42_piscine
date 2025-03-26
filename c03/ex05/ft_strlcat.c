/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyanga <lyanga@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 23:49:10 by lyanga            #+#    #+#             */
/*   Updated: 2025/02/20 13:21:13 by lyanga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	itr1;
	unsigned int	itr2;

	itr1 = ft_strlen(dest);
	if (size <= itr1)
		return (ft_strlen(src) + size);
	itr2 = 0;
	while ((itr1 + itr2) < (size - 1) && src[itr2] != 0)
	{
		dest[itr1 + itr2] = src[itr2];
		itr2++;
	}
	if (itr1 != size)
		dest[itr1 + itr2] = '\0';
	return (itr1 + ft_strlen(src));
}

// #include <bsd/string.h> // to compile with cc (file) -lbsd
// #include <stdio.h>
// int main(void)
// {
// 	char test[] = "this is to test";
// 	char test2[] = "!!hi!!";
// 	char testb[] = "this is to test";
// 	char testb2[] = "!!hi!!";
// 	printf("%ld\n",strlcat(testb, testb2, 19));
// 	printf("%d\n",ft_strlcat(test, test2, 19));
// 	printf("%s\n", testb);
// 	printf("%s\n", test);
// }