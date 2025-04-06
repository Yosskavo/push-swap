/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <yel-mota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 20:19:00 by yel-mota          #+#    #+#             */
/*   Updated: 2025/03/13 20:19:01 by yel-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap_stack(t_lst **st, char *str)
{
	t_lst	*tmp;

	tmp = (*st)->next;
	(*st)->next = tmp->next;
	tmp->next = *st;
	*st = tmp;
	ft_printf("%s", str);
}
