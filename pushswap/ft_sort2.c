/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <yel-mota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 20:13:34 by yel-mota          #+#    #+#             */
/*   Updated: 2025/03/21 08:14:52 by yel-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_lst	*ft_small_one(t_lst *a)
{
	t_lst *(tmp);
	tmp = a;
	while (a != NULL)
	{
		if (tmp->content > a->content)
			tmp = a;
		a = a->next;
	}
	return (tmp);
}

int	ft_positon(t_lst *a, t_lst *one)
{
	int (i);
	i = 0;
	while (one != a)
	{
		a = a->next;
		i++;
	}
	return (i);
}

void	ft_fix_path(t_lst **a)
{
	t_lst *(tmp);
	int (ps_node);
	tmp = ft_small_one(*a);
	ps_node = ft_positon(*a, tmp);
	if ((ft_lstsize(*a) / 2) > ps_node)
	{
		while (*a != tmp)
			ft_shift_up(a, "ra\n");
	}
	else
	{
		while (*a != tmp)
			ft_shift_down(a, "rra\n");
	}
}
