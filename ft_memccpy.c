/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jripoute <jripoute@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 04:13:06 by jripoute          #+#    #+#             */
/*   Updated: 2014/11/07 11:11:29 by jripoute         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	carac;
	char			*s1;
	char			*s2;

	i = 0;
	carac = (unsigned char)c;
	s1 = (char *)dst;
	s2 = (char *)src;
	while (i < n)
	{
		s1[i] = s2[i];
		if (s2[i] == carac)
			return (&s1[i + 1]);
		i++;
	}
	return (NULL);
}
