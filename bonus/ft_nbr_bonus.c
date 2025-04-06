/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <yel-mota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 10:06:58 by yel-mota          #+#    #+#             */
/*   Updated: 2025/03/21 01:07:34 by yel-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

int	ft_nbr_bonus(int n)
{
	if (n == -2147483648)
		return (ft_putstr_bonus("-2147483648"));
	if (n < 0)
	{
		ft_putchar_bonus('-');
		n = n * -1;
		return (ft_putnbr_base_bonus(n, "0123456789") + 1);
	}
	return (ft_putnbr_base_bonus(n, "0123456789"));
}
