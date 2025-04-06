/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unint_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <yel-mota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 10:03:17 by yel-mota          #+#    #+#             */
/*   Updated: 2025/03/21 01:08:35 by yel-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

static void	ft_putunint_bonus(unsigned int n)
{
	if (n > 9)
		ft_putunint_bonus(n / 10);
	ft_putchar_bonus(n % 10 + '0');
}

int	ft_unint_bonus(unsigned int n)
{
	ft_putunint_bonus(n);
	return (ft_countnbr_bonus(n));
}
