/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <yel-mota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 20:19:43 by yel-mota          #+#    #+#             */
/*   Updated: 2025/03/23 13:02:27 by yel-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free_1(char **str, t_lst **a)
{
	write(2, "Error\n", 7);
	if (str != NULL)
		ft_freetable(str);
	if (a != NULL)
		ft_lstclear(a);
	exit(1);
}

void	ft_free_2(t_lst **a)
{
	write(2, "Error\n", 7);
	ft_lstclear(a);
	exit(1);
}
