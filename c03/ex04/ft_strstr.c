/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyanga <lyanga@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 23:00:56 by lyanga            #+#    #+#             */
/*   Updated: 2025/02/20 13:28:49 by lyanga           ###   ########.fr       */
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

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	itr;

	itr = 0;
	while (s1[itr] && s1[itr] == s2[itr] && itr < n)
		itr++;
	if (itr == n)
		return (0);
	return (s1[itr] - s2[itr]);
}

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	length;

	if (!*to_find)
		return (str);
	length = ft_strlen(to_find);
	while (*str)
	{
		if (*str == *to_find)
		{
			if (ft_strncmp(str, to_find, length) == 0)
				return (str);
		}
		str++;
	}
	return (0);
}

// #include <string.h>
// #include <stdio.h>
// int main(void)
// {
// 	char test[] = "Hello world";
// 	char test1[] = "l";
// 	if (ft_strstr(test, test1))
// 		printf("%s\n", ft_strstr(test, test1)); 
// 	else 
// 		printf("ft error\n");

// 	if (!strstr(test, test1))
// 		printf("default error");
// 	else
// 		printf("%s\n", strstr(test, test1));

// }