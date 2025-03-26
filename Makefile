# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lyanga <lyanga@student.42singapore.sg>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/05 15:57:57 by lyanga            #+#    #+#              #
#    Updated: 2025/03/05 18:09:22 by lyanga           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# general vars
NAME = bsq

# comp
CC = cc
CFLAGS = -Wall -Wextra -Werror

# file names
SRCS = ft_coords.c ft_file_checking.c ft_file_checking2.c ft_file_checking3.c ft_file_reading.c ft_map_checking.c ft_map_invalidating.c ft_map.c ft_map2.c ft_realloc.c ft_split.c ft_square.c ft_stdin.c ft_stdin2.c ft_strdup.c ft_strings.c main.c
OBJS = ${SRCS:.c=.o}
HEADERS = header.h

# commands
all: $(NAME)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@
$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all

# specify non file commands
.PHONY: all clean fclean re