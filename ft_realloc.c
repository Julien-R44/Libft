/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/16 05:14:03 by y0ja              #+#    #+#             */
/*   Updated: 2014/11/16 05:14:10 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_realloc(void *ptr, size_t old, size_t size)
{
 	void	*danew;

	danew = ft_memalloc(size);
 	if (!danew || size == 0 || !ptr)
 	{
 		ft_memdel(ptr);
 		return (NULL);
 	}
	ft_memcpy(danew, ptr, old);
	free(ptr);
	ptr = danew;
	return (danew);
}