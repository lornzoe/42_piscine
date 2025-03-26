/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyanga <lyanga@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 11:29:17 by lyanga            #+#    #+#             */
/*   Updated: 2025/02/18 19:01:12 by lyanga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*ft_ascii_to_hexadecimal(unsigned char a, char *hex)
{
	char	*hexaset;

	hexaset = "0123456789abcdef";
	hex[0] = hexaset[a / 16];
	hex[1] = hexaset[a % 16];
	hex[2] = 0;
	return (hex);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	hex[3];

	hex[0] = 0;
	hex[1] = 0;
	hex[2] = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
			ft_putchar(str[i]);
		else
		{
			ft_putchar('\\');
			ft_putstr(ft_ascii_to_hexadecimal(str[i], hex));
		}
		i++;
	}
}

// #include <stdio.h>
// int main(void)
// {
// 	char test[] = "hey what's up\nmy name is james\377";
// 	char test1[] = "Coucou\ntu vas bien ?";
// 	printf("%s\n", test);
// 	printf("%s\n", test1);
// 	ft_putstr_non_printable(test);
// 	printf("\n");
// 	ft_putstr_non_printable(test1);
// 	printf("\n");

// 	return 0;
// }