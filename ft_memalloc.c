/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jripoute <jripoute@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 20:55:10 by jripoute          #+#    #+#             */
/*   Updated: 2014/11/04 00:59:26 by jripoute         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memdel(void **ap)
{
	free(*ap);
	*ap = NULL;
}

void	*ft_memalloc(size_t size)
{
	void *ptr;

	if ((ptr = malloc(size)) != NULL)
		return (ptr);
	return (NULL);
}

char	*ft_strnew(size_t size)
{
	char *str;

	str = memalloc(char)
	return (str);
}


int main(void)
{
	char *str;

	str = ft_memalloc(sizeof(char) * 3);
	ft_memdel(&str);
	return (0);
}