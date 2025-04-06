/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_shift_down_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <yel-mota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 20:19:15 by yel-mota          #+#    #+#             */
/*   Updated: 2025/03/21 01:47:32 by yel-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

static t_lst	*ft_lstre_bonus(t_lst *ls, int i)
{
	t_lst	*tmp;
	int		j;

	j = 0;
	tmp = ls;
	while (j++ < i && tmp != NULL)
		tmp = tmp->next;
	return (tmp);
}

void	ft_shift_down_bonus(t_lst **ls)
{
	t_lst	*tmp;

	if (*ls == NULL || (*ls)->next == NULL)
		return ;
	tmp = ft_lstre_bonus(*ls, ft_lstsize_bonus(*ls) - 2);
	tmp->next->next = *ls;
	*ls = tmp->next;
	tmp->next = NULL;
}
