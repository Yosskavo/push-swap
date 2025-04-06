/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <yel-mota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 21:44:38 by yel-mota          #+#    #+#             */
/*   Updated: 2025/03/21 08:31:36 by yel-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	ft_lstadd_back_bonus(t_lst **lst, t_lst *new)
{
	t_lst *(tmp);
	if (lst == NULL)
		return ;
	if (*lst == NULL)
		return ;
	tmp = ft_lstlast_bonus(*lst);
	tmp->next = new;
}
