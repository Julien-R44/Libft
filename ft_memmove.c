/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jripoute <jripoute@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 23:39:33 by jripoute          #+#    #+#             */
/*   Updated: 2014/11/09 03:33:34 by jripoute         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dest, const void *src, size_t len)
{
	char *tmp;

	tmp = (char *)ft_memalloc(sizeof(char) * len);
	tmp = ft_strncpy(tmp, src, len);
	dest = ft_strncpy(dest, tmp, len);
	free(tmp);
	return (dest);
}
