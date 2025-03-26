/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pisoncha <pisoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 10:47:15 by pisoncha          #+#    #+#             */
/*   Updated: 2025/03/02 15:52:13 by pisoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <sys/stat.h>
# include <fcntl.h>

typedef struct s_dict
{
	int		index;
	char	*key;
	char	*value;
}	t_dict;

// ft_print.c
void	ft_put_error(char *str);
void	ft_put_trim_str(char *str);
void	ft_put_str(char *str);

// ft_split.c
char	**ft_split(char *str, char *charset);

// ft_strings.c
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strncpy_pad(char *src, int n);

// ft_strdup.c
char	*ft_strdup(char *src);
char	*ft_strdup_key(char *src);
char	*ft_strdup_value(char *src);

// ft_read_file.c
int		ft_get_file_size(char *file_path);
char	**ft_read_file(char *file_path);

// ft_split_nbr.c
int		ft_count_split_nbr(char *nbr);
char	**ft_split_nbr(char *nbr);

// ft_dict.c
t_dict	*ft_create_dict(char *file_path);
t_dict	*ft_get_value(t_dict *dict, char *key);
void	ft_trim_dict_value(t_dict *dict);

// ft_free.c
void	ft_free_char_arr(char **arr);
void	ft_free_dict(t_dict *dict);

// ft_math.c 
int		ft_iterative_power(int nb, int power);

// ft_strings2.c
void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_occ_0(char *arr);
char	*ft_create_ten_power_string(int power);

// ft_nbr_reading.c
int		ft_print_arr(char **arr, int thousands_power, t_dict *dict);
int		ft_print_first_digit(char *str, t_dict *dict);
char	*ft_build_search_key(char *str);
int		ft_print_zeros(int zeros, t_dict *dict);
int		check_for_all_zeros(char **arr);

// ft_checking.c
int		ft_check_dict(char *file_path);
int		ft_get_arr_size(char **arr);
int		ft_check_biggest_nbr(int thousands_power, t_dict *dict);
int		ft_check_nbr_all_zeros(char **arr, t_dict *dict);

// ft_nbr_connectors.c
void	ft_print_num_connectors(char *str, char **arr, int i);
void	ft_print_arr_connectors(char **arr, int thousands_power);

// ft_cheking2.c
char	*ft_clean_nbr(char *nbr);
int		ft_check_nbr(char *nbr);
int		ft_is_space(char c);

#endif