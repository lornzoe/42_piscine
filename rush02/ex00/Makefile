# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pisoncha <pisoncha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/24 11:12:08 by pisoncha          #+#    #+#              #
#    Updated: 2025/03/02 13:38:39 by pisoncha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# general vars
NAME = rush-02
SRC_DIR = srcs
INC_DIR = includes

# compile vars
CC = cc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = -I $(INC_DIR)

# file vars
HEADER_FILES = header.h
SRC_FILES = main.c ft_print.c ft_read_file.c ft_split.c ft_strings.c ft_split_nbr.c ft_dict.c ft_free.c ft_strdup.c ft_math.c ft_strings2.c ft_nbr_connectors.c ft_nbr_reading.c ft_checking.c ft_checking2.c
HEADERS = $(HEADER_FILES:%.h=$(INC_DIR)/%.h)
SRCS = $(SRC_FILES:%.c=$(SRC_DIR)/%.c)
OBJS = $(SRCS:.c=.o)

# commands
all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

$(OBJS): %.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

# specify non file commands
.PHONY: all clean fclean re