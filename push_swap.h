/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <yel-mota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 21:59:31 by yel-mota          #+#    #+#             */
/*   Updated: 2025/02/27 02:14:39 by yel-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include "ft_printf/ft_printf.h"
# include "libft/ftlibft.h"
# include <limits.h>

// the structer mother land 
typedef struct s_land 
{
    char **str;
    int *arr;
    int i;
}   t_land;

// free function
char	**ft_freetable(char **c);
void ft_freestruct(t_land *st_land);

// string monipilutor 
char	**ft_split(const char *s, char c);
char	*ft_strdup(const char *s);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
char	*ft_substr(char const *s, unsigned int start, size_t len);

//  Erorr checker
void than_get_out(t_land *st_land);
void is_any_alpha(t_land *st_land);
void is_any_dup(t_land *st_land);

#endif