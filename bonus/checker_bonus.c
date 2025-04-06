/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <yel-mota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 12:18:54 by yel-mota          #+#    #+#             */
/*   Updated: 2025/04/02 10:15:36 by yel-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

int	ft_tatoarr_bonus(char **str, t_lst **a)
{
	int	i;

	i = 0;
	while (str[i] != NULL)
	{
		if (ft_full_1_bonus(str[i], a) == -1)
			ft_free_1_bonus(str, a);
		i++;
	}
	return (i);
}

void	ft_printf_it_bonus(t_lst *a)
{
	while (a != NULL)
	{
		ft_printf_bonus("%d ", a->content);
		a = a->next;
	}
}

int	main(int ac, char **av)
{
	t_lst	*a;

	if (ac == 1)
		return (0);
	a = ft_lst_full_bonus(ac, av);
	if (a == NULL || ft_lstsize_bonus(a) == 0)
		return (write(2, "Error\n", 7), 1);
	ft_check_sort_bonus(&a);
}
