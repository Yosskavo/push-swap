/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <yel-mota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 21:24:22 by yel-mota          #+#    #+#             */
/*   Updated: 2025/02/24 16:00:35 by yel-mota         ###   ########.fr       */
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

void is_any_alpha(char **str)
{
    int i, j;

    i = 0;
    j = 0;
    while(str[i] != NULL)
    {
        while (str[i][j] != '\0')
        {
            if (ft_isalpha(str[i][j]))
            {
                ft_freetable(str);
                exit(1);
            }
            j++;
        }
        i++;
    }
}

int main(int ac, char **av)
{
    int i, j;
    char **str;
    char *arr;

    if (ac == 1)
        return (0);
    str = ft_split(av[1], ' ');
    if (str != NULL)
        return (1);
    is_any_alpha(str);
    i = lenght_of_table(str);
    arr = malloc(sizeof(int) * (i));
    if (arr == NULL)
        return (ft_freetable(str), 1);
    i = 0;
    while (str[i] != NULL)
    {
        arr[i] = ft_atoi(str[i]);
        i++;
    }
    ft_freetable(str);
    j = 0;
    while (j < i)
    {
        ft_printf("%d\n", arr[j]);
        j++;
    }
    free(arr);
    return (1);
}

// handle intput ./push_swap "48468 545468" "48486 8646846" 546584 3431 good !
// handle intput ./push_swap  9 9 this is error
// handle intput ./push_swap  "++" ++ +- -+ -- ++ error
// handle intput ./push_swap  INT_MAX INT_MIN error
