/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_stuck_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <yel-mota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 21:11:20 by yel-mota          #+#    #+#             */
/*   Updated: 2025/03/21 03:30:26 by yel-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	ft_push_1_to_2_bonus(t_lst **st1, t_lst **st2)
{
	t_lst	*tmp;

	if ((*st1) == NULL)
		return ;
	tmp = *st1;
	*st1 = (*st1)->next;
	tmp->next = *st2;
	*st2 = tmp;
}
