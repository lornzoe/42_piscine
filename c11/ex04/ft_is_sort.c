/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyanga <lyanga@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 15:22:55 by lyanga            #+#    #+#             */
/*   Updated: 2025/03/06 18:41:18 by lyanga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// int cmp(int a, int b)
// {
// 	if (a < b)
// 		return -1;
// 	else if (a == b)
// 		return 0;
// 	else
// 		return 1;
// }
// int cmmp2(int a, int b)
// {
// 	return (a - b);
// }

int	simplify_diff(int a)
{
	if (a == 0)
		return (0);
	if (a < 0)
		return (-1);
	else
		return (1);
}

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	sort;
	int	currsort;

	i = 0;
	if (length < 2)
		return (1);
	sort = simplify_diff(f(tab[i], tab[i + 1]));
	while (i + 1 < length)
	{
		currsort = f(tab[i], tab[i + 1]);
		if (currsort != sort)
		{
			if (sort == 0)
				sort = currsort;
			else
				return (0);
		}
		i++;
	}
	return (1);
}

// int main()
// {
// 	int tab[] = {0, 1, 2, 3, 4};
// 	int i = ft_is_sort(tab2, 5, cmmp2);
// 	return 0;
// }