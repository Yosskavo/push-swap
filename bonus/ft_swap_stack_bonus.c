/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_stack_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <yel-mota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 20:19:00 by yel-mota          #+#    #+#             */
/*   Updated: 2025/03/21 01:43:04 by yel-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	ft_swap_stack_bonus(t_lst **st)
{
	t_lst	*tmp;

	if (*st == NULL || (*st)->next == NULL)
		return ;
	tmp = (*st)->next;
	(*st)->next = tmp->next;
	tmp->next = *st;
	*st = tmp;
}
