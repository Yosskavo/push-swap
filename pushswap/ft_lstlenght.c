/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlenght.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <yel-mota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 20:37:22 by yel-mota          #+#    #+#             */
/*   Updated: 2025/03/21 08:13:36 by yel-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_lenght_of_table(char **str)
{
	int (i);
	i = 0;
	while (str[i] != NULL)
		i++;
	return (i);
}
