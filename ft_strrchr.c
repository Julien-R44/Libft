/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jripoute <jripoute@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 11:38:56 by jripoute          #+#    #+#             */
/*   Updated: 2014/11/05 11:42:33 by jripoute         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t i;
	char *s1;
	char *occu;

	occu = NULL;
	s1 = (char*)s;
	i = 0;
	while (s1[i])
	{
		if (s1[i] == (char)c)
			occu = &s1[i];
		i++;
	}
	if (c == '\0')
		if (s1[i] == '\0')
			return (&s1[i]);
	if (occu)
		return (occu);
	return (NULL);
}