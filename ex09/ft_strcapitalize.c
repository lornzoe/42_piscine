/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyanga <lyanga@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 17:45:30 by lyanga            #+#    #+#             */
/*   Updated: 2025/02/17 14:40:52 by lyanga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	offset;
	int	itr;

	offset = 'a' - 'A';
	itr = 0;
	while (str[itr] != '\0')
	{
		if (str[itr] >= 'a' && str[itr] <= 'z')
			str[itr] -= offset;
		itr++;
	}
	return (str);
}

int	ft_str_is_alpha(char *str)
{
	int	itr;
	int	flag;

	itr = 0;
	flag = 1;
	while (str[itr] != '\0')
	{
		if (str[itr] >= 'a' && str[itr] <= 'z')
			itr++;
		else if (str[itr] >= 'A' && str[itr] <= 'Z')
			itr++;
		else
		{
			flag = 0;
			break ;
		}
	}
	return (flag);
}

int	ft_str_is_numeric(char *str)
{
	int	itr;
	int	flag;

	itr = 0;
	flag = 1;
	while (str[itr] != '\0')
	{
		if (str[itr] >= '0' && str[itr] <= '9')
			itr++;
		else
		{
			flag = 0;
			break ;
		}
	}
	return (flag);
}

char	*ft_strlowcase(char *str)
{
	int	offset;
	int	itr;

	offset = 'a' - 'A';
	itr = 0;
	while (str[itr] != '\0')
	{
		if (str[itr] >= 'A' && str[itr] <= 'Z')
			str[itr] += offset;
		itr++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		cap_next;
	int		itr;
	char	current_char[2];

	cap_next = 1;
	itr = 0;
	current_char[0] = ' ';
	current_char[1] = '\0';
	ft_strlowcase(str);
	while (str[itr] != '\0')
	{
		current_char[0] = str[itr];
		if (cap_next == 1 && ft_str_is_alpha(current_char))
		{
			str[itr] = *ft_strupcase(current_char);
			cap_next = 0;
		}
		if (!ft_str_is_alpha(current_char) && !ft_str_is_numeric(current_char))
			cap_next = 1;
		else
			cap_next = 0;
		itr++;
	}
	return (str);
}

// #include <stdio.h>
// int main(void)
// {
// 	char test1[] = "this is a tEsting-sTrInG!!1lol-pleAse\n";
// 	char test2[] = "comment tu vas ? 42mots quarante-deux; cinquante+et+un\n";
// // cant fit "salut, " at the start bc of normie reject
// 	printf("%d \n", ft_str_is_alpha("t"));
// 	printf("%s", ft_strcapitalize(test1));
// 	printf("%s", ft_strcapitalize(test2));
// 	return 0;
// }