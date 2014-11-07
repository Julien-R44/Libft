/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jripoute <jripoute@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 14:20:26 by jripoute          #+#    #+#             */
/*   Updated: 2014/11/07 11:17:53 by jripoute         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	size_t i;
	size_t end_of_dest;

	i = 0;
	end_of_dest = ft_strlen(dest);
	while (src[i])
	{
		dest[end_of_dest] = src[i];
		i++;
		end_of_dest++;
	}
	dest[end_of_dest] = '\0';
	return (dest);
}
