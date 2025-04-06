/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcheack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <yel-mota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 00:20:47 by yel-mota          #+#    #+#             */
/*   Updated: 2025/03/15 23:51:30 by yel-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_is_sorted(t_lst *a)
{
	t_lst	*tmp;

	tmp = a->next;
	while (tmp != NULL)
	{
		if (a->content > tmp->content)
			return (0);
		tmp = tmp->next;
		a = a->next;
	}
	return (1);
}

int	ft_lstgreat(t_lst *tmp, t_lst *tmp1)
{
	while (tmp1 != NULL)
	{
		if (tmp->content < tmp1->content)
			return (0);
		tmp1 = tmp1->next;
	}
	return (1);
}
