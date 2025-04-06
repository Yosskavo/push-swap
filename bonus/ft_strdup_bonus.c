/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <yel-mota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 21:26:16 by yel-mota          #+#    #+#             */
/*   Updated: 2025/03/21 01:08:17 by yel-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

char	*ft_strdup_bonus(const char *s)
{
	size_t	size;
	char	*dest;

	size = sizeof(char) * (ft_strlen_bonus(s) + 1);
	dest = malloc(size);
	if (dest == NULL)
		return (NULL);
	ft_strlcpy_bonus(dest, s, size);
	return (dest);
}
