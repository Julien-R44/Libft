/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jripoute <jripoute@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 11:38:56 by jripoute          #+#    #+#             */
/*   Updated: 2014/11/09 08:00:26 by jripoute         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	*s1;
	char	cp;

	s1 = (char*)s;
	cp = (char)c;
	i = 0;
	while (s1[i])
	{
		if (s1[i] == cp)
			return (&s1[i]);
		i++;
	}
	if (cp == '\0')
		if (s1[i] == '\0')
			return (&s1[i]);
	return (NULL);
}
