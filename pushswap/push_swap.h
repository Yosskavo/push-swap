/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <yel-mota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 21:45:06 by yel-mota          #+#    #+#             */
/*   Updated: 2025/03/21 08:09:24 by yel-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_lst
{
	int				content;
	int				index;
	int				rank;
	int				cost;
	struct s_lst	*target;
	struct s_lst	*next;
}					t_lst;

// string functions :
char				*ft_substr(char const *s, unsigned int start, size_t len);
size_t				ft_strlen(const char *str);
char				*ft_strdup(const char *s);
size_t				ft_strlcpy(char *dest, const char *src, size_t size);
char				**ft_split(const char *s, char c);
int					ft_lenght_of_table(char **str);

// casting function :
long				ft_atoi(char *ptr);

// fulling the list :
int					ft_full_1(char *str, t_lst **a);
t_lst				*ft_lst_full(int ac, char **av);

// linked list function :
t_lst				*ft_lstnew(int content);
void				ft_lstclear(t_lst **lst);
t_lst				*ft_lstlast(t_lst *lst);
int					ft_tatoarr(char **str, t_lst **a);
void				ft_lstadd_back(t_lst **lst, t_lst *new);
int					ft_lstsize(t_lst *lst);

// free functions
char				**ft_freetable(char **c);
void				ft_free_1(char **str, t_lst **a);
void				ft_free_2(t_lst **a);

//   printf functions :
int					ft_putnbr_base(unsigned int nbr, char *base);
int					ft_putchar(const char c);
int					ft_putstr(char *str);
int					ft_unint(unsigned int n);
int					ft_printf(const char *str, ...);
int					ft_countnbr(unsigned int n);
int					ft_putone(va_list one, const char str);
int					ft_nbr(int n);
int					ft_putaddress(void *p);

// rules of swaping
void				ft_swap_two_stuck(t_lst **a, t_lst **b);
void				ft_swap_stack(t_lst **st, char *str);
void				ft_shift_up_both(t_lst **a, t_lst **b);
void				ft_shift_up(t_lst **ls, char *str);
void				ft_shift_down(t_lst **st, char *str);
void				ft_shift_down_both(t_lst **a, t_lst **b);
void				ft_shift_up_both(t_lst **a, t_lst **b);
void				ft_push_1_to_2(t_lst **st1, t_lst **st2, char *str);

// checker of sort
int					ft_lstgreat(t_lst *tmp, t_lst *tmp1);
int					ft_is_sorted(t_lst *a);

// sort the stuck
int					ft_sort(t_lst **a, int sl);

// seting target for each node in stuck b
t_lst				*ft_set_target(t_lst *a, t_lst *b);

void				ft_case_one(t_lst **a, t_lst **b, t_lst *small);
void				ft_case_two(t_lst **a, t_lst **b, t_lst *small);
void				ft_case_tree(t_lst **a, t_lst **b, t_lst *small);
void				ft_fix_path(t_lst **a);

// tools for ranking and helping in sort
void				ft_rest_rank(t_lst *tmp);
void				ft_lst_rank(t_lst *st);

// cost of every node
void				ft_cost_two(t_lst *st, int sizeofa, int sizeofb);
void				ft_cost_one(t_lst *st);
void				ft_cost_tree(t_lst *st, int sizeofa, int sizeofb);

#endif