/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pisoncha <pisoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 11:20:46 by pisoncha          #+#    #+#             */
/*   Updated: 2025/02/23 16:02:47 by pisoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <stdlib.h>
# include <unistd.h>

char	**ft_create_table(int rows, int cols);
void	ft_print_table(char **table, int rows, int cols);
void	ft_free_table(char **table, int rows);
void	ft_print_solution(char **table, int size);

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
void	ft_print_error(void);
int		ft_get_size(char *str);

char	**ft_convert_input(char *str, int size);
int		ft_check_input(char *str, int size);
void	ft_set_clues(char **board, char **clues, int size);

int		ft_is_in_row(char **board, int row, int col, int num);
int		ft_is_in_col(char **board, int row, int col, int num);

int		ft_is_correct_left_view(char **board, int row, int size);
int		ft_is_correct_right_view(char **board, int row, int size);
int		ft_is_correct_top_view(char **board, int col, int size);
int		ft_is_correct_bottom_view(char **board, int col, int size);

int		ft_check_all_views(char **board, int size);
void	ft_solve_recursive(char **board, int row, int col, int size);
void	ft_solve(char **board, int size);
void	ft_generate_table_pattern(char **table, int size, int start, int p);

#endif
