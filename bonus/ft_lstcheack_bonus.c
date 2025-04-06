/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcheack_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <yel-mota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 00:20:47 by yel-mota          #+#    #+#             */
/*   Updated: 2025/03/21 03:32:06 by yel-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

int	ft_is_sorted_bonus(t_lst *a)
{
	t_lst	*tmp;

	if (a == NULL)
		return (0);
	tmp = a->next;
	while (tmp != NULL)
	{
		if (a->content > tmp->content)
			return (0);
		tmp = tmp->next;
		a = a->next;
	}
	return (1);
}
