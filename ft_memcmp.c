/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jripoute <jripoute@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 11:38:56 by jripoute          #+#    #+#             */
/*   Updated: 2014/11/05 14:12:14 by jripoute         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;
	unsigned char *s1c;
	unsigned char *s2c;
	int integr;

	i = 0;
	s1c = (unsigned char *)s1;
	s2c = (unsigned char *)s2;
	integr = 0;
	while (i < n)
	{
		integr += (s1c[i] - s2c[i]);
		if (s1c[i] != s2c[i])
			return ((int)(s1c[i] - s2c[i]));
		i++;
	}
	return (0);
}