/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyanga <lyanga@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 10:33:50 by lyanga            #+#    #+#             */
/*   Updated: 2025/03/05 16:21:14 by lyanga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <sys/stat.h>
# include <fcntl.h>
# define CHUNK_SIZE 1024

typedef struct s_map
{
	int		x;
	int		y;
	int		header_y;
	char	**read_map;
	char	**the_map;
	char	*first_line;
	char	empty_char;
	char	obstacle_char;
	char	full_char;
	int		is_valid;
}	t_map;

typedef struct s_coords
{
	int	x;
	int	y;
}	t_coords;

typedef struct s_square
{
	t_coords	coords;
	int			size;
}	t_square;

// ft_split.c 
char		*ft_strncpy(char *dest, char *src, unsigned int n);
char		**ft_split(char *str, char *charset);

// ft_file_reading.c
int			ft_get_file_size(char *file_path);
char		**ft_read_file(char *file_path);
int			ft_get_first_line_size(char *file_path);
char		*ft_get_first_line(char *file_path);
char		*ft_read_file_stream(char *file_path);

// ft_file_checking.c
int			ft_get_line_count(char *file_path);
int			ft_strlen(char *str);
int			ft_atoi(const char *str);
int			ft_get_int(char *first_line);
int			ft_get_rows(char **map);
int			ft_check_maprow(char **map);
int			ft_check_mapchar(char **map, char obs, char empty);
int			ft_check_first_line(t_map *map);

// ft_coords.c
void		ft_set_coords(t_coords *coords, int x, int y);

// ft_square.c
t_square	*ft_init_square(void);
t_square	*ft_set_bigger_square(t_square *square, t_coords *coords, int size);
void		ft_draw_square(t_square *square, t_map *map);

// ft_map_checking.c
t_square	*ft_solve_biggest_square(t_map *map);
int			ft_get_biggest_square(t_coords *start, t_map *map);
int			ft_square_check(t_coords *start, t_map *map, int size);
int			ft_square_check_right(t_coords *start, t_map *map, int size);
int			ft_square_check_bottom(t_coords *start, t_map *map, int size);

// ft_map_invalidating.c
void		ft_mark_invalid(t_coords *start, t_coords *obstacle, t_map *map);

// ft_realloc.c
char		*ft_strncpy_offset(char *dest, char *src, int start, int bytes);
char		*ft_realloc_buffer(char	*buffer, int bytes, int *buf_size);

// ft_map.c
void		ft_free_map(t_map *map);
void		ft_free_char_map(char **map);
int			ft_get_row_len(char **read_map);
void		ft_print_solution(t_square *square, t_map *map);
void		ft_map_solve(t_map *map);
void		ft_load_first_line_info(t_map *map, char *first_line);

// ft_strdup.c
char		*ft_strdup(char *src);
char		*ft_strndup(char *src, int bytes);

// ft_strings.c
void		ft_putchar(char c);
void		ft_putstr(char *str);
int			ft_char_is_printable(char c);
void		ft_puterror(char *str);

// ft_stdin.c
char		*ft_read_standard_input(int *size, char *stream);
t_map		*ft_create_map_from_stream(char *stream);
char		*ft_get_first_line_from_stream(char *stream);
char		**ft_get_map_from_stream(char *stream);
char		**ft_get_the_map_from_stream(char *stream, char obs);
char		*ft_handle_std_in(char *stream);

#endif