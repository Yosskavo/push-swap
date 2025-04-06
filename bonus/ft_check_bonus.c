/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <yel-mota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 01:15:32 by yel-mota          #+#    #+#             */
/*   Updated: 2025/03/26 12:19:04 by yel-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

int	ft_strcmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while ((str1[i] != '\0' || str2[i] != '\0'))
	{
		if (str1[i] != str2[i])
			return (0);
		i++;
	}
	return (1);
}

int	ft_sort_it(t_lst **a, t_lst **b, char *str)
{
	if (ft_strcmp(str, "sa\n"))
		return (ft_swap_stack_bonus(a), 1);
	if (ft_strcmp(str, "pa\n"))
		return (ft_push_1_to_2_bonus(b, a), 1);
	if (ft_strcmp(str, "sb\n"))
		return (ft_swap_stack_bonus(b), 1);
	if (ft_strcmp(str, "ss\n"))
		return (ft_swap_two_stuck_bonus(a, b), 1);
	if (ft_strcmp(str, "pb\n"))
		return (ft_push_1_to_2_bonus(a, b), 1);
	if (ft_strcmp(str, "ra\n"))
		return (ft_shift_up_bonus(a), 1);
	if (ft_strcmp(str, "rb\n"))
		return (ft_shift_up_bonus(b), 1);
	if (ft_strcmp(str, "rr\n"))
		return (ft_shift_up_both_bonus(a, b), 1);
	if (ft_strcmp(str, "rra\n"))
		return (ft_shift_down_bonus(a), 1);
	if (ft_strcmp(str, "rrb\n"))
		return (ft_shift_down_bonus(b), 1);
	if (ft_strcmp(str, "rrr\n"))
		return (ft_shift_down_both_bonus(a, b), 1);
	else
		return (-1);
}

void	ft_check_true(t_lst **a, t_lst **b)
{
	if (ft_is_sorted_bonus(*a) && *b == NULL)
		ft_true(a);
	else
		ft_false(a, b);
}

void	ft_check_sort_bonus(t_lst **a)
{
	t_lst	*b;
	char	*str;
	int		i;

	b = NULL;
	i = 0;
	str = get_next_line(0);
	while ((str))
	{
		i = ft_sort_it(a, &b, str);
		free(str);
		if (i == -1)
			ft_free_3_bonus(a, &b);
		str = get_next_line(0);
	}
	ft_check_true(a, &b);
}
