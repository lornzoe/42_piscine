/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyanga <lyanga@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 19:41:34 by lyanga            #+#    #+#             */
/*   Updated: 2025/02/18 19:01:13 by lyanga           ###   ########.fr       */
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

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	itr;

	if (size == 0)
		return (ft_strlen(src));
	itr = 0;
	while (itr < (size - 1) && src[itr] != '\0')
	{
		dest[itr] = src[itr];
		itr++;
	}
	dest[itr] = '\0';
	return (ft_strlen(src));
}

// #include <stdio.h>
// #include <bsd/string.h>
// int main(void)
// {
// 	char test[] = "hello world";
// 	char dest[100];
// 	dest[99] = '\0';
// 	printf("%s\n", dest);
// 	//printf("%ld\n", strlcpy(dest, test, 5));
// 	printf("%d\n", ft_strlcpy(dest, test, 5));
// 	printf("%s\n", dest);
// }