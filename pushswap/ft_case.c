/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_case.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <yel-mota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 00:43:41 by yel-mota          #+#    #+#             */
/*   Updated: 2025/03/21 07:40:39 by yel-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_case_one(t_lst **a, t_lst **b, t_lst *small)
{
	while (small != *b && small->target != *a)
		ft_shift_up_both(a, b);
	if (small == *b && small->target != *a)
	{
		while (small->target != *a)
			ft_shift_up(a, "ra\n");
	}
	if (small != *b && small->target == *a)
	{
		while (small != *b)
			ft_shift_up(b, "rb\n");
	}
	ft_push_1_to_2(b, a, "pa\n");
}

void	ft_case_two(t_lst **a, t_lst **b, t_lst *small)
{
	while (small != *b && small->target != *a)
		ft_shift_down_both(a, b);
	if (small == *b && small->target != *a)
	{
		while (small->target != *a)
			ft_shift_down(a, "rra\n");
	}
	if (small != *b && small->target == *a)
	{
		while (small != *b)
			ft_shift_down(b, "rrb\n");
	}
	ft_push_1_to_2(b, a, "pa\n");
}

void	ft_case_tree(t_lst **a, t_lst **b, t_lst *small)
{
	if ((ft_lstsize(*a) / 2) > small->target->index)
	{
		while (small->target != *a)
			ft_shift_up(a, "ra\n");
		while (small != *b)
			ft_shift_down(b, "rrb\n");
	}
	else
	{
		while (small->target != *a)
			ft_shift_down(a, "rra\n");
		while (small != *b)
			ft_shift_up(b, "rb\n");
	}
	ft_push_1_to_2(b, a, "pa\n");
}
