/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <yel-mota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:43:25 by yel-mota          #+#    #+#             */
/*   Updated: 2025/03/21 01:07:38 by yel-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

int	ft_printf_bonus(const char *str, ...)
{
	int	i;
	int	cont;
	int	j;

	if (str == NULL)
		return (-1);
	va_list(one);
	va_start(one, str);
	i = 0;
	cont = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			j = ft_putone_bonus(one, str[++i]);
			if (j == -1)
				return (-1);
			cont += j;
		}
		else
			cont += ft_putchar_bonus(str[i]);
		i++;
	}
	va_end(one);
	return (cont);
}
