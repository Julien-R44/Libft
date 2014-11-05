/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jripoute <jripoute@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 16:50:44 by jripoute          #+#    #+#             */
/*   Updated: 2014/11/05 19:24:21 by jripoute         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		if (((char*)src)[i] == c)
			return (&((char*)src)[i + 1]);
		((char*)dst)[i] = ((char*)src)[i]; 
		i++;
	}
	return (NULL);
}
