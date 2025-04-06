/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <yel-mota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 14:37:01 by yel-mota          #+#    #+#             */
/*   Updated: 2025/03/21 01:07:53 by yel-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

int	ft_putnbr_base_bonus(unsigned int nbr, char *base)
{
	int				i;
	unsigned int	basel;

	i = 0;
	basel = ft_strlen_bonus(base);
	if (nbr < basel)
	{
		i += ft_putchar_bonus(base[nbr]);
	}
	else
	{
		i += ft_putnbr_base_bonus(nbr / basel, base);
		i += ft_putnbr_base_bonus(nbr % basel, base);
	}
	return (i);
}
