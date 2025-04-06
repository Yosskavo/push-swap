/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <yel-mota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 12:14:18 by yel-mota          #+#    #+#             */
/*   Updated: 2025/03/08 20:37:18 by yel-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static size_t	ft_contword(const char *str, char c)
{
	size_t	i;
	size_t	cont;

	i = 0;
	cont = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			i++;
		else
		{
			cont++;
			while (str[i] != c && str[i] != '\0')
				i++;
		}
	}
	return (cont);
}

static size_t	ft_lenstr(char const *str, char c)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (i);
}

char	**ft_freetable(char **c)
{
	int	i;

	i = 0;
	while (c[i] != NULL)
		free(c[i++]);
	free(c);
	return (NULL);
}

char	**ft_split(const char *s, char c)
{
	size_t	i;
	size_t	j;
	char	**table;

	i = 0;
	j = 0;
	if (s == NULL)
		return (NULL);
	table = malloc(sizeof(char *) * (ft_contword(s, c) + 1));
	if (table == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		table[j] = ft_substr(s, i, ft_lenstr(s + i, c));
		if (table[j++] == NULL)
			return (ft_freetable(table));
		i += ft_lenstr(s + i, c);
	}
	table[j] = NULL;
	return (table);
}
