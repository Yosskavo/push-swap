/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <yel-mota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 23:49:48 by yel-mota          #+#    #+#             */
/*   Updated: 2025/04/02 10:20:03 by yel-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_isdigitsin(int c)
{
	if (!(('0' <= c && '9' >= c) || ('+' == c || '-' == c)))
		return (1);
	return (0);
}

static int	ft_check_zero(char *str)
{
	int	i;

	i = 0;
	while (str[i] == '0' && str[i] != '\0')
		i++;
	if (str[i] == '-' || str[i] == '+')
		return (-1);
	if (ft_strlen(str + i) > 10)
		return (-1);
	return (1);
}

static int	ft_check_any_sins(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '+' || str[i] == '-')
			return (1);
		i++;
	}
	return (0);
}

static long	ft_check_err(char *str)
{
	int	i;
	int	sins;

	i = 0;
	sins = 1;
	while (str[i] != '\0')
	{
		if (ft_isdigitsin(str[i]) == 1)
			return (0);
		i++;
	}
	i = 0;
	if (str[i] == '+' || str[i] == '-')
		if (str[i] == '-')
			sins = -1;
	i++;
	if (ft_check_any_sins(str + i) == 1)
		return (0);
	return (sins);
}

long	ft_atoi(char *ptr)
{
	long (sins), (res);
	if (!ptr)
		return (0);
	sins = ft_check_err(ptr);
	if (sins == 0)
		return (11111111111);
	res = 0;
	if (*ptr == '+' || *ptr == '-')
		ptr++;
	if (ft_check_zero(ptr) == -1 || *ptr == '\0')
		return (11111111111);
	while (('0' <= *ptr && *ptr <= '9') && *ptr != '\0')
	{
		res = res * 10 + *ptr - '0';
		ptr++;
	}
	return (res = res * sins);
}
