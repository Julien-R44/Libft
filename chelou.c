/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chelou.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jripoute <jripoute@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 16:50:44 by jripoute          #+#    #+#             */
/*   Updated: 2014/11/06 02:32:40 by jripoute         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	void *ptr;

	if ((ptr = malloc(size)) != NULL)
		return (ptr);
	return (NULL);
}

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

char *ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t i;	
	char *str;

	i = 0;
	if (!s)
		return (NULL);
	str = (char *)ft_memalloc(sizeof(char) * (len) + 1);
	while (i < len)
	{
		str[i] = s[start];
		start++;
		i++;
	}
	str[i] = '\0';
	return (str);
}

static size_t	ft_strclen(char const *s, char c)
{
	size_t i;

	i = 0;
	while (s[i] != c)
		i++;
	return (i);
}

size_t	ft_strlen(const char *str)
{
	size_t i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

static int	is_blank(char c);

char		*ft_strtrim(char const *s)
{
	size_t i;
	size_t nblanks_start;
	size_t nblanks_end;
	size_t len;
	char 	*newstr;

	if (!s)
		return (NULL);
	len = ft_strlen(s) - 1; // <!>
	while (is_blank(s[i]))
		i++;
	nblanks_start = i;
	i = 0;
	while (is_blank(s[len]))
	{
		i++;
		len--;
	}
	nblanks_end = i;
	newstr = ft_strsub(s, nblanks_start, (ft_strlen((char*)s) - (nblanks_end + nblanks_start))); 
	printf("%s\n", newstr);
}

static int	is_blank(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	return (0);
}

int main(void)
{
	char str[]="\n\nwesh fdp\t\n";

	ft_strtrim(str);
}