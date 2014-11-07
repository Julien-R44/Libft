/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jripoute <jripoute@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 11:38:56 by jripoute          #+#    #+#             */
/*   Updated: 2014/11/07 11:11:52 by jripoute         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t i;

	i = 0;
	if (!s)
		return (NULL);
	while (i < n)
	{
		if ((unsigned char)c == ((unsigned char*)s)[i])
			return (&((unsigned char*)s)[i]);
		i++;
	}
	return (NULL);
}
