/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rank.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <yel-mota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 23:50:41 by yel-mota          #+#    #+#             */
/*   Updated: 2025/03/21 07:54:10 by yel-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rest_rank(t_lst *tmp)
{
	while (tmp != NULL)
	{
		tmp->rank = 0;
		tmp = tmp->next;
	}
}

void	ft_lst_rank(t_lst *st)
{
	t_lst *(tmp), *(tmp1);
	tmp = st;
	ft_rest_rank(st);
	while (tmp != NULL)
	{
		tmp1 = st;
		while (tmp1 != NULL)
		{
			if (tmp->content > tmp1->content)
				tmp->rank += 1;
			tmp1 = tmp1->next;
		}
		tmp = tmp->next;
	}
}
