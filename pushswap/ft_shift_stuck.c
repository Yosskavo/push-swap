/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_shift_stuck.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <yel-mota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 20:19:12 by yel-mota          #+#    #+#             */
/*   Updated: 2025/03/20 03:30:28 by yel-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_shift_up(t_lst **ls, char *str)
{
	t_lst	*tmp;

	tmp = ft_lstlast(*ls);
	tmp->next = *ls;
	tmp = (*ls)->next;
	(*ls)->next = NULL;
	*ls = tmp;
	ft_printf("%s", str);
}
