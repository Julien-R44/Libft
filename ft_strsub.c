/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jripoute <jripoute@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 12:55:35 by jripoute          #+#    #+#             */
/*   Updated: 2014/11/05 16:07:34 by jripoute         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t i;	
	char *str;

	i = 0;
	if (start > len)
		return (NULL);
	str = (char *)ft_memalloc(sizeof(char) * (len - start) + 1);
	while (start < len)
	{
		str[i] = s[start];
		start++;
		i++;
	}
	return (str);
}