/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jripoute <jripoute@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 22:00:07 by jripoute          #+#    #+#             */
/*   Updated: 2014/11/06 00:51:23 by jripoute         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strclen(char const *s, char c);
static int		f_how_many_tab(char const *s, char c);

char			**ft_strsplit(char const *s, char c)
{
	int			how_many_tab;
	char		**tab;
	size_t		lenght;
	size_t		i;
	size_t		j;

	if (!s || !c)
		return (NULL);
	i = 0;
	j = 0;
	lenght = 0;
	how_many_tab = f_how_many_tab(s, c);
	tab = (char **)ft_memalloc(sizeof(tab) * how_many_tab + 1);
	while (s[i])
	{
		if (s[i] == c && s[i + 1] && s[i + 1] != c)
		{
			lenght = ft_strclen(&s[i + 1], c);
			tab[j] = (char *)ft_memalloc(sizeof(char *) * lenght + 1);
			ft_strncpy(tab[j], &s[i + 1], lenght);
			j++;
		}
		i++;
	}
	return (tab);
}

static size_t	ft_strclen(char const *s, char c)
{
	size_t 		i;

	i = 0;
	while (s[i] != c)
		i++;
	return (i);
}

static int		f_how_many_tab(char const *s, char c)
{
	int 		how_many_tab;
	size_t 		i;

	how_many_tab = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			if (s[i + 1] && s[i + 1] != c)
				how_many_tab++;
		}
		i++;
	}
	return (how_many_tab);
}
