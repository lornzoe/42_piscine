/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyanga <lyanga@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 19:55:25 by lyanga            #+#    #+#             */
/*   Updated: 2025/02/20 13:23:05 by lyanga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

// #include <string.h>
// #include <stdio.h>
// int main(void)
// {
// 	char s1[] = "the winning string";
// 	char s2[] = "the losing string";
// 	char s3[] = "so what if s4 is a blank string?";
// 	char s4[] = "";
// 	char s5[] = "what if the cmp compares with null?";
// 	char s6[] = "what if";
// 	printf("s1 vs s2 (ft_, 3) >> %d\n", ft_strncmp(s1, s2, 100));
// 	printf("s1 vs s2 (str, 3) >> %d\n", strncmp(s1, s2, 100));
// 	printf("s2 vs s1 (ft_, 3) >> %d\n", ft_strncmp(s2, s1, 100));
// 	printf("s2 vs s1 (str, 3) >> %d\n", strncmp(s2, s1, 100));
// 	printf("s3 vs s4 (ft_, 10) >> %d\n", ft_strncmp(s3, s4, 100));
// 	printf("s3 vs s4 (str, 10) >> %d\n", strncmp(s3, s4, 100));
// 	printf("s5 vs s6 (ft_, 5) >> %d\n", ft_strncmp(s5, s6, 5));
// 	printf("s5 vs s6 (str, 5) >> %d\n", strncmp(s5, s6, 5));
// }