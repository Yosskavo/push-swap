NAME_1 = push_swap

NAME_2 = checker

SRC = error.c              ft_lstlenght.c  ft_putnbr_base.c  ft_strdup.c         ft_atoi.c      ft_lstnew.c      ft_putone.c           ft_strlcpy.c \
      ft_countnbr.c        ft_lstsize.c    ft_putstr.c       ft_strlen.c         ft_full_lst.c  ft_nbr.c         ft_shift_down_both.c  ft_substr.c   \
      ft_lstadd_back.c     ft_printf.c     ft_shift_down.c   ft_swap_stack.c     ft_lstclear.c  ft_push_stuck.c  ft_shift_stuck.c      push_swap.c    \
      ft_swap_two_stuck.c  ft_lstdelone.c  ft_putadress.c    ft_shift_up_both.c  ft_unint.c     ft_lstlast.c     ft_putchar.c          ft_split.c      \
      ft_sort.c            ft_lstcheack.c  ft_rank.c         ft_cost.c          ft_target.c    ft_case.c        ft_sort2.c

SRCB = checker_bonus.c         ft_lstnew_bonus.c       ft_shift_down_both_bonus.c\
       get_next_line_bonus.c     ft_lstsize_bonus.c      ft_shift_stuck_bonus.c\
       error_bonus.c           ft_nbr_bonus.c          ft_shift_up_both_bonus.c\
       ft_atoi_bonus.c         ft_printf_bonus.c       ft_split_bonus.c\
       ft_countnbr_bonus.c     ft_push_stuck_bonus.c   ft_strdup_bonus.c\
       ft_full_lst_bonus.c     ft_putadress_bonus.c    ft_strlcpy_bonus.c\
       ft_lstadd_back_bonus.c  ft_putchar_bonus.c      ft_strlen_bonus.c\
       ft_lstcheack_bonus.c    ft_putnbr_base_bonus.c  ft_substr_bonus.c\
       ft_lstclear_bonus.c     ft_putone_bonus.c       ft_swap_stack_bonus.c\
       ft_lstlast_bonus.c      ft_putstr_bonus.c       ft_swap_two_stuck_bonus.c\
       ft_lstlenght_bonus.c    ft_shift_down_bonus.c   ft_unint_bonus.c\
       get_next_line_utils_bonus.c ft_check_bonus.c

OBJB = $(SRCB:.c=.o)

OBJ = $(SRC:.c=.o)

CC = cc

CFLAGS = -Wall -Wextra -Werror 

all: $(NAME_1)

bonus: $(NAME_2)

$(NAME_2) : $(OBJB)
	$(CC) $(CFLAGS) $(OBJB) -o $(NAME_2)

$(NAME_1): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME_1)

%.o: pushswap/%.c
	$(CC) -I pushswap $(CFLAGS) -c $< -o $@

%.o: bonus/%.c
	$(CC) -I bonus $(CFLAGS) -c $< -o $@

clean:
	@rm -fv $(OBJ) $(OBJB)

fclean: clean
	@rm -fv $(NAME_1) $(NAME_2)

re: fclean all

.PHONY: clean fclean all  bonus
