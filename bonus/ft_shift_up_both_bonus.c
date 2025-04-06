/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_shift_up_both_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <yel-mota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 20:19:03 by yel-mota          #+#    #+#             */
/*   Updated: 2025/03/21 08:32:49 by yel-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	ft_shift_up_both_bonus(t_lst **a, t_lst **b)
{
	ft_shift_up_bonus(a);
	ft_shift_up_bonus(b);
}
