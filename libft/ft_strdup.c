/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <yel-mota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 21:26:16 by yel-mota          #+#    #+#             */
/*   Updated: 2025/02/22 23:04:46 by yel-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_strdup(const char *s)
{
	size_t		size;
	char		*dest;

	size = sizeof(char) * (ft_strlen(s) + 1);
	dest = malloc(size);
	if (dest == NULL)
		return (NULL);
	ft_strlcpy(dest, s, size);
	return (dest);
}
