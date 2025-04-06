/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <yel-mota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 11:33:11 by yel-mota          #+#    #+#             */
/*   Updated: 2025/03/21 08:18:12 by yel-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_case_of_3(t_lst **a)
{
	t_lst *(tmp);
	tmp = *a;
	if (ft_is_sorted(*a))
		return ;
	if (tmp->content > tmp->next->content
		&& tmp->content > tmp->next->next->content)
	{
		ft_shift_up(a, "ra\n");
		if ((*a)->content > (*a)->next->content)
			ft_swap_stack(a, "sa\n");
		return ;
	}
	if (tmp->content > tmp->next->content)
	{
		ft_swap_stack(a, "sa\n");
		return ;
	}
	if (tmp->content < tmp->next->content
		&& tmp->content > tmp->next->next->content)
	{
		ft_shift_down(a, "rra\n");
		return ;
	}
	ft_shift_down(a, "rra\n");
	ft_case_of_3(a);
}

int	ft_some_case(t_lst **a, int sl)
{
	t_lst *(tmp);
	if (sl == 1)
		return (1);
	tmp = *a;
	if (sl == 2)
	{
		if (tmp->content > tmp->next->content)
			ft_swap_stack(a, "sa\n");
		return (1);
	}
	if (sl == 3)
	{
		ft_case_of_3(a);
		return (1);
	}
	if (ft_is_sorted(*a))
		return (1);
	return (0);
}

int	ft_sort_b(t_lst **a, t_lst **b)
{
	t_lst *(small);
	int (sizeofa), (size_of_b);
	while (*b != NULL)
	{
		size_of_b = ft_lstsize(*b);
		sizeofa = ft_lstsize(*a);
		small = ft_set_target(*a, *b);
		if (small->index <= (size_of_b / 2)
			&& small->target->index <= (sizeofa / 2))
		{
			ft_case_one(a, b, small);
		}
		else if (small->index > (size_of_b / 2)
			&& small->target->index > (sizeofa / 2))
		{
			ft_case_two(a, b, small);
		}
		else
		{
			ft_case_tree(a, b, small);
		}
	}
	return (0);
}

void	ft_try_sort(t_lst **a, t_lst **b)
{
	int (yn), (sizeofa);
	float (ps);
	yn = 1;
	if (ft_lstsize(*a) <= 100)
		ps = 0.50;
	else
		ps = 0.30;
	while (yn)
	{
		ft_lst_rank(*a);
		sizeofa = ft_lstsize(*a) * ps;
		if ((*a)->rank < sizeofa)
		{
			ft_push_1_to_2(a, b, "pb\n");
		}
		else
			ft_shift_up(a, "ra\n");
		if (ft_lstsize(*a) == 3)
		{
			ft_case_of_3(a);
			yn = ft_sort_b(a, b);
			return ;
		}
	}
}

int	ft_sort(t_lst **a, int sl)
{
	t_lst *(b);
	b = NULL;
	if (ft_some_case(a, sl))
		return (1);
	ft_try_sort(a, &b);
	ft_fix_path(a);
	return (1);
}
