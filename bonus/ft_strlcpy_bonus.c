/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <yel-mota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 21:35:57 by yel-mota          #+#    #+#             */
/*   Updated: 2025/03/21 01:08:20 by yel-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

size_t	ft_strlcpy_bonus(char *dest, const char *src, size_t size)
{
	size_t	m;
	size_t	i;

	i = ft_strlen_bonus(src);
	m = 0;
	if (size != 0)
	{
		while (src[m] != '\0' && m < size - 1)
		{
			dest[m] = src[m];
			m++;
		}
		dest[m] = '\0';
	}
	return (i);
}
