/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_two_stuck.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <yel-mota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 20:18:47 by yel-mota          #+#    #+#             */
/*   Updated: 2025/03/21 01:28:38 by yel-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap_two_stuck(t_lst **a, t_lst **b)
{
	ft_swap_stack(a, "s");
	ft_swap_stack(b, "s\n");
}
