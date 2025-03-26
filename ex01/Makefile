CFLAGS = -Wall -Wextra -Werror

SRC = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
SRCPATH = srcs/
SRCS = $(addprefix $(SRCPATH), $(SRC))
OBJS = ${SRCS:.c=.o}

HDRPATH = includes

NAME = libft.a

all: $(NAME)

.c.o:
	cc $(CFLAGS) -I$(HDRPATH) -c $< -o $@
$(NAME): ${OBJS}
	ar rcs $(NAME) $(OBJS)
clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
