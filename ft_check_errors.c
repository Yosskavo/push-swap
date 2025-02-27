/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_errors.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <yel-mota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 17:40:31 by yel-mota          #+#    #+#             */
/*   Updated: 2025/02/25 17:54:24 by yel-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_freestruct(t_land *st_land)
{
    ft_freetable(st_land->str);
    free(st_land->arr);
    free(st_land);
}

void than_get_out(t_land *st_land)
{
    ft_printf("Error\n");
    ft_freetable(st_land->str);
    free(st_land->arr);
    exit(1);
}

void is_any_alpha(t_land *st_land)
{
    int i, j;

    i = 0;
    j = 0;
    while(st_land->str[i] != NULL)
    {
        while (st_land->str[i][j] != '\0')
        {
            if (!ft_isdigit(st_land->str[i][j]))
            {
                ft_freetable(st_land->str);
                than_get_out(st_land);
            }
            j++;
        }
        i++;
    }
}

void is_any_dup(t_land *st_land)
{
    int (j), (m);
    j = 0;
    while (j < st_land->i)
    {
        m = 1;
        while (j + m < st_land->i)
        {
            if (st_land->arr[j] == st_land->arr[m + j])
                than_get_out(st_land);
            m++;
        }
        j++;
    }
}

