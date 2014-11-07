/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jripoute <jripoute@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 11:38:56 by jripoute          #+#    #+#             */
/*   Updated: 2014/11/07 11:24:11 by jripoute         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	end_of_dest;

	i = 0;
	end_of_dest = ft_strlen(dest);
	while (src[i] && i < n)
	{
		dest[end_of_dest + i] = src[i];
		i++;
	}
	dest[end_of_dest + i] = '\0';
	return (dest);
}
