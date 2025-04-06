/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_shift_down_both_bonus.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <yel-mota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 20:19:19 by yel-mota          #+#    #+#             */
/*   Updated: 2025/03/21 01:26:50 by yel-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	ft_shift_down_both_bonus(t_lst **a, t_lst **b)
{
	ft_shift_down_bonus(a);
	ft_shift_down_bonus(b);
}
