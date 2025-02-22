NAME = push_swap

SRC = push_swap.c ft_strlcpy.c ft_substr.c ft_split.c ft_strdup.c ft_printf/ft_countnbr.c ft_printf/ft_putnbr_base.c ft_printf/ft_strlen.c \
      ft_printf/ft_nbr.c ft_printf/ft_putadress.c ft_printf/ft_putone.c ft_printf/ft_unint.c \
      ft_printf/ft_printf.c ft_printf/ft_putchar.c ft_printf/ft_putstr.c

OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	cc -Wall -Wextra -Werror $(OBJ) -o $(NAME)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: re all clean fclean
