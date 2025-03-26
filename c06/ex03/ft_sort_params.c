/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyanga <lyanga@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 21:10:29 by lyanga            #+#    #+#             */
/*   Updated: 2025/02/24 16:16:47 by lyanga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

void	ft_swap(char **s1, char **s2)
{
	char	*temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	itr;

	itr = 0;
	while (s1[itr] && s1[itr] == s2[itr])
		itr++;
	return (s1[itr] - s2[itr]);
}

void	bubble_sort(char **argv, int size)
{
	int	i;
	int	j;
	int	swapped;

	i = 0;
	while (i < size - 1)
	{
		swapped = 0;
		j = 0;
		while (j < size - i - 1)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
			{
				ft_swap(&argv[j], &argv[j + 1]);
				swapped = 1;
			}
			j++;
		}
		i++;
		if (swapped == 0)
			break ;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc == 1)
		return (0);
	argv++;
	bubble_sort(argv, argc - 1);
	i = 0;
	while (i < argc - 1)
	{
		ft_putstr(argv[i]);
		i++;
	}
	return (0);
}
