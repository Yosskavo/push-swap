/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putone_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <yel-mota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 20:16:52 by yel-mota          #+#    #+#             */
/*   Updated: 2025/03/21 01:07:57 by yel-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

static int	ft_hexa_bonus(va_list one, char c)
{
	int	i;

	i = 0;
	if (c == 'x')
	{
		i = ft_putnbr_base_bonus(va_arg(one, unsigned int), "0123456789abcdef");
		return (i);
	}
	if (c == 'X')
	{
		i = ft_putnbr_base_bonus(va_arg(one, unsigned int), "0123456789ABCDEF");
		return (i);
	}
	if (c == 'p')
	{
		i = ft_putaddress_bonus(va_arg(one, void *));
		return (i);
	}
	return (i);
}

int	ft_putone_bonus(va_list one, const char str)
{
	if (str == '\0')
		return (-1);
	if (str == 's')
		return (ft_putstr_bonus(va_arg(one, char *)));
	if (str == 'c')
		return (ft_putchar_bonus(va_arg(one, int)));
	if (str == 'd' || str == 'i')
		return (ft_nbr_bonus(va_arg(one, int)));
	if (str == '%')
		return (ft_putchar_bonus('%'));
	if (str == 'x' || str == 'X' || str == 'p')
		return (ft_hexa_bonus(one, str));
	if (str == 'u')
		return (ft_unint_bonus(va_arg(one, unsigned int)));
	else
		return (ft_putchar_bonus('%') + ft_putchar_bonus(str));
}
