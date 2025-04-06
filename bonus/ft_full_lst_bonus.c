/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_full_lst_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <yel-mota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 20:39:52 by yel-mota          #+#    #+#             */
/*   Updated: 2025/04/02 10:09:17 by yel-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

static int	ft_check_dup_bonus(t_lst *a)
{
	t_lst	*tmp;

	while (a != NULL)
	{
		tmp = a->next;
		while (tmp != NULL)
		{
			if (a->content == tmp->content)
				return (-1);
			tmp = tmp->next;
		}
		a = a->next;
	}
	return (0);
}

int	ft_full_1_bonus(char *str, t_lst **a)
{
	t_lst	*tmp;
	long	tmpi;

	tmpi = ft_atoi_bonus(str);
	if (tmpi > INT_MAX || tmpi < INT_MIN)
		return (-1);
	tmp = ft_lstnew_bonus(tmpi);
	if (tmp == NULL)
		return (-1);
	ft_lstadd_back_bonus(a, tmp);
	return (0);
}

static t_lst	*ft_lst_put_first_bonus(char *av)
{
	long	tmp;
	char	**str;
	t_lst	*a;
	int		i;

	str = ft_split_bonus(av, ' ');
	if (!str || *str == NULL)
		ft_free_1_bonus(str, NULL);
	tmp = ft_atoi_bonus(str[0]);
	if (tmp > INT_MAX || tmp < INT_MIN)
		ft_free_1_bonus(str, NULL);
	a = ft_lstnew_bonus(tmp);
	if (!a)
		ft_free_1_bonus(str, NULL);
	i = 1;
	while (str[i] != NULL)
	{
		if (ft_full_1_bonus(str[i], &a) == -1)
			ft_free_1_bonus(str, &a);
		i++;
	}
	ft_freetable_bonus(str);
	return (a);
}

t_lst	*ft_lst_full_bonus(int ac, char **av)
{
	char **(str);
	t_lst *(a);
	int (j);
	j = 1;
	a = ft_lst_put_first_bonus(av[j++]);
	while (j < ac)
	{
		str = ft_split_bonus(av[j], ' ');
		if (!str || *str == NULL)
			ft_free_1_bonus(str, &a);
		ft_tatoarr_bonus(str, &a);
		j++;
		ft_freetable_bonus(str);
	}
	if (ft_check_dup_bonus(a) == -1)
		ft_free_2_bonus(&a);
	return (a);
}
