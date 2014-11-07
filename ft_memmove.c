/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jripoute <jripoute@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 23:39:33 by jripoute          #+#    #+#             */
/*   Updated: 2014/11/07 11:13:29 by jripoute         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dest, const void *src, size_t n)
{
	char *tmp;

	tmp = (char *)ft_memalloc(sizeof(char) * n);
	tmp = ft_strncpy(tmp, src, n);
	dest = ft_strncpy(dest, tmp, n);
	free(tmp);
	return (dest);
}
