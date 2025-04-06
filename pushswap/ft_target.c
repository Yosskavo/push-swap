/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_target.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <yel-mota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 11:32:55 by yel-mota          #+#    #+#             */
/*   Updated: 2025/03/21 08:20:01 by yel-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_lst	*ft_small_cost(t_lst *b)
{
	t_lst	*small;

	small = b;
	while (b != NULL)
	{
		if (small->cost > b->cost)
			small = b;
		b = b->next;
	}
	return (small);
}

void	ft_index(t_lst *st)
{
	int (i);
	i = 0;
	while (st != NULL)
	{
		st->index = i;
		i++;
		st = st->next;
	}
}

void	ft_set_cost(t_lst *a, t_lst *b)
{
	int (sizeofa), (sizeofb);
	sizeofa = ft_lstsize(a);
	sizeofb = ft_lstsize(b);
	while (b != NULL)
	{
		if ((sizeofb / 2) >= b->index && (sizeofa / 2) >= b->target->index)
			ft_cost_one(b);
		else if ((sizeofb / 2) < b->index && (sizeofa / 2) < b->target->index)
			ft_cost_two(b, sizeofa, sizeofb);
		else
			ft_cost_tree(b, sizeofa, sizeofb);
		b = b->next;
	}
}

t_lst	*ft_big_target(t_lst *a)
{
	t_lst	*tmp;

	tmp = a;
	while (a != NULL)
	{
		if (a->content > tmp->content)
			tmp = a;
		a = a->next;
	}
	return (tmp);
}

t_lst	*ft_set_target(t_lst *a, t_lst *b)
{
	t_lst *(tmp), *(tmp1);
	tmp1 = b;
	ft_index(a);
	ft_index(b);
	while (b != NULL)
	{
		b->target = ft_big_target(a);
		tmp = a;
		while (tmp != NULL)
		{
			if ((b->content < tmp->content)
				&& (tmp->content < b->target->content))
				b->target = tmp;
			tmp = tmp->next;
		}
		b = b->next;
	}
	ft_set_cost(a, tmp1);
	return (ft_small_cost(tmp1));
}
