/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <yel-mota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 21:44:38 by yel-mota          #+#    #+#             */
/*   Updated: 2025/03/21 08:13:13 by yel-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstadd_back(t_lst **lst, t_lst *new)
{
	t_lst *(tmp);
	if (lst == NULL)
		return ;
	if (*lst == NULL)
		return ;
	tmp = ft_lstlast(*lst);
	tmp->next = new;
}
