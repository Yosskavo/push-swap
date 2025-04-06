/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <yel-mota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 07:52:51 by yel-mota          #+#    #+#             */
/*   Updated: 2025/04/02 10:16:32 by yel-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_tatoarr(char **str, t_lst **a)
{
	int	i;

	i = 0;
	while (str[i] != NULL)
	{
		if (ft_full_1(str[i], a) == -1)
			ft_free_1(str, a);
		i++;
	}
	return (i);
}

int	main(int ac, char **av)
{
	t_lst	*a;

	if (ac == 1)
		return (0);
	a = ft_lst_full(ac, av);
	ft_sort(&a, ft_lstsize(a));
	return (ft_lstclear(&a), 0);
}
