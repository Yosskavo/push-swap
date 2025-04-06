/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_shift_stuck_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <yel-mota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 20:19:12 by yel-mota          #+#    #+#             */
/*   Updated: 2025/03/21 01:46:22 by yel-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	ft_shift_up_bonus(t_lst **ls)
{
	t_lst	*tmp;

	if (*ls == NULL || (*ls)->next == NULL)
		return ;
	tmp = ft_lstlast_bonus(*ls);
	tmp->next = *ls;
	tmp = (*ls)->next;
	(*ls)->next = NULL;
	*ls = tmp;
}
