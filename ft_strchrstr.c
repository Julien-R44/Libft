/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchrstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jripoute <jripoute@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/14 16:23:04 by jripoute          #+#    #+#             */
/*   Updated: 2014/11/14 17:04:11 by jripoute         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strchrstr(const char *s1, const char *s2)
{
	int		i;
	int		j;
	char	*here;

	i = 0;
	j = 0;
	here = NULL;
	while (s1[i])
	{
		while (s2[j])
		{
			if (s1[i] == s2[j])
				return (here = &((char *)s1)[i]);
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}
