/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jripoute <jripoute@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 01:01:28 by jripoute          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2014/11/07 17:10:36 by jripoute         ###   ########.fr       */
=======
/*   Updated: 2014/11/07 15:16:02 by jripoute         ###   ########.fr       */
>>>>>>> ae01d46dc3c61a2cf309bef4047331a5d4ac7d21
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

<<<<<<< HEAD
size_t			ft_strlcat(char *dst, const char *src, size_t size)
{
	char		*d;
	const char	*s;
	size_t		n;
	size_t		dlen;

	d = dst;
	s = src;
	n = size;
	while (n-- && *d)
		d++;
	dlen = d - dst;
	n = size - dlen;
	if (!n)
		return (dlen + ft_strlen(s));
	while (*s)
	{
		if (n != 1)
		{
			*d++ = *s;
			n--;
		}
		s++;
	}
	*d = '\0';
	return (dlen + (s - src));
}
=======
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	n;
	size_t	result;

	i = 0;
	while (i < size)
	{
		if (dst[i] == '\0')
			break ;
		i++;
	}
	result = i + ft_strlen(src);
	n = size - i - 1;
	if (i != size)
	{
		j = 0;
		while (src[j] && j < n)
			dst[i++] = src[j++];
		dst[i] = '\0';
	}
	return (result);
}
>>>>>>> ae01d46dc3c61a2cf309bef4047331a5d4ac7d21
