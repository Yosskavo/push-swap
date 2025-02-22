/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <yel-mota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 21:24:22 by yel-mota          #+#    #+#             */
/*   Updated: 2025/02/22 23:07:01 by yel-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
    int i;
    char **str;

    if (ac == 1)
        return (0);
    str = ft_split(av[1], ' ');
    while (*str != NULL)
    {
        ft_printf("%s\n", *str);
        str++;
    }
    ft_freetable(str);
}