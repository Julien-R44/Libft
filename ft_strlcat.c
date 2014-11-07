/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jripoute <jripoute@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 01:01:28 by jripoute          #+#    #+#             */
/*   Updated: 2014/11/07 15:16:02 by jripoute         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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