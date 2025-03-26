/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyanga <lyanga@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 14:08:22 by lyanga            #+#    #+#             */
/*   Updated: 2025/02/27 01:13:23 by lyanga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	itr;

	itr = 0;
	while (*str)
	{
		str++;
		itr++;
	}
	return (itr);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	char	*temp;

	dest = malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!dest)
		return (NULL);
	temp = dest;
	while (*src)
	{
		*temp = *src;
		temp++;
		src++;
	}
	*temp = *src;
	return (dest);
}

// #include <stdio.h>
// int main(int argc, char **argv)
// {
// 	if (argc != 2)
// 		return (0);
// 	printf("%s", ft_strdup(argv[1]));
// 	return (0);
// }