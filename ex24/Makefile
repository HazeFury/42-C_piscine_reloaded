CCFLAGS = cc -Wall -Wextra -Werror
SRC = srcs/ft_putchar.c \
	srcs/ft_putstr.c \
	srcs/ft_strcmp.c \
	srcs/ft_strlen.c \
	srcs/ft_swap.c

OBJ = $(SRC:.c=.o)
NAME = libft.a
HEADER = includes

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

%.o: %.c
	$(CCFLAGS) -I$(HEADER) -o $@ -c $<

all: $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all
	clean
	fclean
	re
