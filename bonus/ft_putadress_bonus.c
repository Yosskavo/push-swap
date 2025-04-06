/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadress_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <yel-mota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 21:38:18 by yel-mota          #+#    #+#             */
/*   Updated: 2025/03/21 01:07:46 by yel-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

static int	ft_adress_bonus(unsigned long nbr)
{
	int				i;
	char			*base;
	unsigned int	basel;

	i = 0;
	base = "0123456789abcdef";
	basel = 16;
	if (nbr < basel)
	{
		i += ft_putchar_bonus(base[nbr]);
	}
	else
	{
		i += ft_adress_bonus(nbr / basel);
		i += ft_adress_bonus(nbr % basel);
	}
	return (i);
}

int	ft_putaddress_bonus(void *p)
{
	int	i;

	if (p == 0)
		return (ft_putstr_bonus("(nil)"));
	i = 0;
	i += ft_putstr_bonus("0x");
	i += ft_adress_bonus((unsigned long)p);
	return (i);
}
