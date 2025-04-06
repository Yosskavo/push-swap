/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cost.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <yel-mota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 07:52:39 by yel-mota          #+#    #+#             */
/*   Updated: 2025/03/21 08:06:49 by yel-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_cost_one(t_lst *st)
{
	if (st->index > st->target->index)
		st->cost = st->index;
	else
		st->cost = st->target->index;
}

void	ft_cost_two(t_lst *st, int sizeofa, int sizeofb)
{
	if ((sizeofb - st->index) > (sizeofa - st->target->index))
		st->cost = sizeofb - st->index;
	else
		st->cost = sizeofa - st->target->index;
}

void	ft_cost_tree(t_lst *st, int sizeofa, int sizeofb)
{
	if ((sizeofb / 2) < st->index)
		st->cost = sizeofb - st->index + st->target->index;
	else
		st->cost = (sizeofa - st->target->index) + st->index;
}
