/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_full_lst.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <yel-mota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 20:39:52 by yel-mota          #+#    #+#             */
/*   Updated: 2025/04/02 10:10:51 by yel-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_check_dup(t_lst *a)
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

int	ft_full_1(char *str, t_lst **a)
{
	t_lst	*tmp;
	long	tmpi;

	tmpi = ft_atoi(str);
	if (tmpi > INT_MAX || tmpi < INT_MIN)
		return (-1);
	tmp = ft_lstnew(tmpi);
	if (tmp == NULL)
		return (-1);
	ft_lstadd_back(a, tmp);
	return (0);
}

static t_lst	*ft_lst_put_first(char *av)
{
	long	tmp;
	char	**str;
	t_lst	*a;
	int		i;

	str = ft_split(av, ' ');
	if (str == NULL || *str == NULL)
		ft_free_1(str, NULL);
	tmp = ft_atoi(str[0]);
	if (tmp > INT_MAX || tmp < INT_MIN)
		ft_free_1(str, NULL);
	a = ft_lstnew(tmp);
	if (a == NULL)
		ft_free_1(str, NULL);
	i = 1;
	while (str[i] != NULL)
	{
		if (ft_full_1(str[i], &a) == -1)
			ft_free_1(str, &a);
		i++;
	}
	ft_freetable(str);
	return (a);
}

t_lst	*ft_lst_full(int ac, char **av)
{
	char **(str);
	t_lst *(a);
	int (j);
	j = 1;
	a = ft_lst_put_first(av[j++]);
	while (j < ac)
	{
		str = ft_split(av[j], ' ');
		if (str == NULL || *str == NULL)
			ft_free_1(str, &a);
		ft_tatoarr(str, &a);
		j++;
		ft_freetable(str);
	}
	if (ft_check_dup(a) == -1)
		ft_free_2(&a);
	return (a);
}
