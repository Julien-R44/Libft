/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jripoute <jripoute@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/14 01:05:56 by jripoute          #+#    #+#             */
/*   Updated: 2014/11/14 13:04:06 by jripoute         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s, size_t n)
{
	char	*str;
	size_t	len;

	len = ft_strlen(s);
	if (n > len)
		n = len;
	if (n == 0)
		return (NULL);
	str = (char *)ft_memalloc(sizeof(char) * len + 1);
	ft_strncpy(str, s, n);
	return (str);
}
