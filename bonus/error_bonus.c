/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <yel-mota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 20:19:43 by yel-mota          #+#    #+#             */
/*   Updated: 2025/03/23 15:25:27 by yel-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	ft_free_1_bonus(char **str, t_lst **a)
{
	write(2, "Error\n", 7);
	if (str != NULL)
		ft_freetable_bonus(str);
	if (a != NULL)
		ft_lstclear_bonus(a);
	exit(1);
}

void	ft_free_2_bonus(t_lst **a)
{
	write(2, "Error\n", 7);
	ft_lstclear_bonus(a);
	exit(1);
}

void	ft_free_3_bonus(t_lst **a, t_lst **b)
{
	write(2, "Error\n", 7);
	get_next_line(-1);
	ft_lstclear_bonus(a);
	ft_lstclear_bonus(b);
	exit(1);
}

void	ft_true(t_lst **a)
{
	write(1, "OK\n", 3);
	ft_lstclear_bonus(a);
	exit(0);
}

void	ft_false(t_lst **a, t_lst **b)
{
	write(1, "KO\n", 3);
	if ((*a) != NULL)
		ft_lstclear_bonus(a);
	if ((*b) != NULL)
		ft_lstclear_bonus(b);
	exit(0);
}
