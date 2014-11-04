/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jripoute <jripoute@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 20:38:02 by jripoute          #+#    #+#             */
/*   Updated: 2014/11/03 20:38:34 by jripoute         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char *s, const char *to_find)
{
	int i;

	i = 0;
	while(*s != '\0' && to_find[i] != '\0')
	{
		i = 0;
		while (*s == to_find[i])
		{
			s++;
			i++;
		}
		if (to_find[i] == '\0')
			return (s -= i);
		s++;
	}
	return (NULL);
}