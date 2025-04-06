/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <yel-mota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 18:28:42 by yel-mota          #+#    #+#             */
/*   Updated: 2025/03/21 01:08:00 by yel-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

int	ft_putstr_bonus(char *s)
{
	int	i;

	if (s == NULL)
		return (ft_putstr_bonus("(null)"));
	i = 0;
	while (s[i] != '\0')
		ft_putchar_bonus(s[i++]);
	return (i);
}
