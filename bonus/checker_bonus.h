/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <yel-mota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 12:15:57 by yel-mota          #+#    #+#             */
/*   Updated: 2025/03/21 08:37:43 by yel-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_BONUS_H
# define CHECKER_BONUS_H

# include <limits.h>
# include <stdarg.h>
# include <stdint.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_lst
{
	int				content;
	struct s_lst	*next;
}					t_lst;

// string functions :
char				*ft_substr_bonus(char const *s, unsigned int start,
						size_t len);
size_t				ft_strlen_bonus(const char *str);
char				*ft_strdup_bonus(const char *s);
size_t				ft_strlcpy_bonus(char *dest, const char *src, size_t size);
char				**ft_split_bonus(const char *s, char c);
int					ft_lenght_of_table_bonus(char **str);

// casting function :
long				ft_atoi_bonus(char *ptr);

// fulling the list :
int					ft_full_1_bonus(char *str, t_lst **a);
t_lst				*ft_lst_full_bonus(int ac, char **av);

// linked list function :
t_lst				*ft_lstnew_bonus(int content);
void				ft_lstclear_bonus(t_lst **lst);
t_lst				*ft_lstlast_bonus(t_lst *lst);
int					ft_tatoarr_bonus(char **str, t_lst **a);
void				ft_lstadd_back_bonus(t_lst **lst, t_lst *new);
int					ft_lstsize_bonus(t_lst *lst);

// free functions
char				**ft_freetable_bonus(char **c);
void				ft_free_1_bonus(char **str, t_lst **a);
void				ft_free_2_bonus(t_lst **a);
void				ft_free_3_bonus(t_lst **a, t_lst **b);

//   printf functions :
int					ft_putnbr_base_bonus(unsigned int nbr, char *base);
int					ft_putchar_bonus(const char c);
int					ft_putstr_bonus(char *str);
int					ft_unint_bonus(unsigned int n);
int					ft_printf_bonus(const char *str, ...);
int					ft_countnbr_bonus(unsigned int n);
int					ft_putone_bonus(va_list one, const char str);
int					ft_nbr_bonus(int n);
int					ft_putaddress_bonus(void *p);
void				ft_printf_it_bonus(t_lst *a);

// rules of swaping
void				ft_swap_two_stuck_bonus(t_lst **a, t_lst **b);
void				ft_swap_stack_bonus(t_lst **st);
void				ft_shift_up_both_bonus(t_lst **a, t_lst **b);
void				ft_shift_up_bonus(t_lst **ls);
void				ft_shift_down_bonus(t_lst **st);
void				ft_shift_down_both_bonus(t_lst **a, t_lst **b);
void				ft_shift_up_both_bonus(t_lst **a, t_lst **b);
void				ft_push_1_to_2_bonus(t_lst **st1, t_lst **st2);

// checker tools
void				ft_check_sort_bonus(t_lst **a);
int					ft_is_sorted_bonus(t_lst *a);

// get next line
char				*get_next_line(int fd);
char				*ft_strrest(char *str);
char				*ft_strline(char *str);
char				*ft_strread(int fd, char *dest);
char				*ft_strdup(const char *s);
char				*ft_strjoin(char const *s1, char const *s2);
size_t				ft_whereline(const char *str);
size_t				ft_strlen(const char *str);

// true or false
void				ft_false(t_lst **a, t_lst **b);
void				ft_true(t_lst **a);

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif
#endif