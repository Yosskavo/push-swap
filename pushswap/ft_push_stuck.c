/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_stuck.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassuto <yassuto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 21:11:20 by yel-mota          #+#    #+#             */
/*   Updated: 2025/03/12 01:03:36 by yassuto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_1_to_2(t_lst **st1, t_lst **st2, char *str)
{
	t_lst	*tmp;

	tmp = *st1;
	*st1 = (*st1)->next;
	tmp->next = *st2;
	*st2 = tmp;
	ft_printf("%s", str);
}
