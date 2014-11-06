/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jripoute <jripoute@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 01:57:29 by jripoute          #+#    #+#             */
/*   Updated: 2014/11/06 03:15:49 by jripoute         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_blank(char c);

char		*ft_strtrim(char const *s)
{
	size_t i;
	size_t nblanks_start;
	size_t nblanks_end;
	size_t len;
	char 	*newstr;

	i = 0;
	if (!s)
		return (NULL);
	len = ft_strlen(s) - 1;
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
	if (ft_strlen(s) == nblanks_start)
	{
		newstr = (char *)malloc(sizeof(char));
		newstr[0] = '\0';
		return (newstr);
	}
	newstr = ft_strsub(s, nblanks_start, (ft_strlen(s) - (nblanks_end + nblanks_start)));
	return (newstr);
}

static int	is_blank(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	return (0);
}