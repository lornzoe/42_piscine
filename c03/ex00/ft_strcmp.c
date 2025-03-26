/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyanga <lyanga@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 19:32:16 by lyanga            #+#    #+#             */
/*   Updated: 2025/02/20 13:23:00 by lyanga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	itr;

	itr = 0;
	while (s1[itr] && s1[itr] == s2[itr])
		itr++;
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
// 	printf("s1 vs s2 (ft_) >> %d\n", ft_strcmp(s1, s2));
// 	printf("s1 vs s2 (str) >> %d\n", strcmp(s1, s2));
// 	printf("s2 vs s1 (ft_) >> %d\n", ft_strcmp(s2, s1));
// 	printf("s2 vs s1 (str) >> %d\n", strcmp(s2, s1));
// 	printf("s3 vs s4 (ft_) >> %d\n", ft_strcmp(s3, s4));
// 	printf("s3 vs s4 (str) >> %d\n", strcmp(s3, s4));
// 	printf("s5 vs s6 (ft_) >> %d\n", ft_strcmp(s5, s6));
// 	printf("s5 vs s6 (str) >> %d\n", strcmp(s5, s6));
// }