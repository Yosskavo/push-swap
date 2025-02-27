/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <yel-mota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 21:24:22 by yel-mota          #+#    #+#             */
/*   Updated: 2025/02/27 02:22:08 by yel-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int lenght_of_table(char **tbl)
{
    int i;

    i = 0;
    while (tbl[i] != NULL)
        i++;
    return (i);
}

void ft_ttoa(t_land *st_land)
{
    int i;
    unsigned long (tmp);
    st_land->arr = malloc(sizeof(int) * (lenght_of_table(st_land->str)));
    if (st_land->arr == NULL)
    {
        ft_freestruct(st_land);
        exit(1);
    }
    i = 0;
    while (st_land->str[i] != NULL)
    {
        tmp = ft_atoi(st_land->str[i]);
        if (tmp > INT_MAX || tmp < INT_MIN)
        {
            ft_freestruct(st_land);
            than_get_out(st_land);
        }
        i++;
    }
    st_land->i += i;
    ft_freetable(st_land->str);
    is_any_dup(st_land);
}

int main(int ac, char **av)
{
    int i, j;
    t_land st_land;

    if (ac == 1)
        return (0);
    st_land.str = ft_split(av[1], ' ');
    if (st_land.arr != NULL)
        return (1);
    is_any_alpha(&st_land);
    st_land.i = 0;
    ft_ttoa(&st_land);
    i = lenght_of_table(st_land.str);
    while (j < i)
    {
        ft_printf("%d\n", st_land.arr[j]);
        j++;
    }
    free(st_land.arr);
    return (0);
}

// handle intput ./push_swap "48468 545468" "48486 8646846" 546584 3431 good !
// handle intput ./push_swap  9 9 this is error
// handle intput ./push_swap  "++" ++ +- -+ -- ++ error
// handle intput ./push_swap  INT_MAX INT_MIN error
