/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_shift_down.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <yel-mota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 20:19:15 by yel-mota          #+#    #+#             */
/*   Updated: 2025/03/21 08:14:13 by yel-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_lst	*ft_lstre(t_lst *ls, int i)
{
	t_lst	*tmp;
	int		j;

	j = 0;
	tmp = ls;
	while (j++ < i && tmp != NULL)
		tmp = tmp->next;
	return (tmp);
}

void	ft_shift_down(t_lst **ls, char *str)
{
	t_lst *(tmp);
	tmp = ft_lstre(*ls, ft_lstsize(*ls) - 2);
	tmp->next->next = *ls;
	*ls = tmp->next;
	tmp->next = NULL;
	ft_printf("%s", str);
}
