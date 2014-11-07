/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chelou.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jripoute <jripoute@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 16:50:44 by jripoute          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2014/11/07 18:20:24 by jripoute         ###   ########.fr       */
=======
/*   Updated: 2014/11/07 15:00:45 by jripoute         ###   ########.fr       */
>>>>>>> ae01d46dc3c61a2cf309bef4047331a5d4ac7d21
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

<<<<<<< HEAD
char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dst[i] = src[i];
		i++;
	}
	while (n > i)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}


void	*ft_memalloc(size_t size)
{
	void *ptr;

	if ((ptr = malloc(size)) != NULL)
		return (ptr);
	return (NULL);
}
=======
>>>>>>> ae01d46dc3c61a2cf309bef4047331a5d4ac7d21


size_t			ft_strclen(char const *s, char c)
{
	size_t		i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (i);
		else
			i++;
	}
	if (c == '\0' && !s[i])
		return (i);
	return (-1);
}


static int		f_how_many_tab(char const *s, char c)
{
<<<<<<< HEAD
	int			how_many_tab;
	size_t		i;

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

char			**ft_strsplit(char const *s, char c)
{
	int			how_many_tab;
	char		**tab;
	size_t		lenght;
	size_t		i;
	size_t		j;

	if (!s[0] || !c)
	{
		tab = (char **)malloc(sizeof(char *));
		tab[0] = (char *)malloc(sizeof(char));
		tab[0][0] = '\0';
		return (tab);
	}
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
			if (lenght == -1)
				lenght = ft_strclen(&s[i + 1], '\0');
			tab[j] = (char *)ft_memalloc(sizeof(char *) * lenght + 1);
			ft_strncpy(tab[j], &s[i + 1], lenght);
			i += lenght;
			j++;
		}
		i++;
	}
	return (tab);
}

int main(void)
{
	char str[]="**wesh*******les********fdp!";
	char **tab;
	
=======
	char str[50];
	int ret;

	ret = strlcat(str, "Hello ", 4);
	printf("%c\n", str[2]);
>>>>>>> ae01d46dc3c61a2cf309bef4047331a5d4ac7d21
	return (0);
}