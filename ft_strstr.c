/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 20:38:02 by jripoute          #+#    #+#             */
/*   Updated: 2014/11/08 18:42:45 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	size_t i;

	i = 0;
	if (!s2[0] || s2 == NULL)
		return ((char *)s1);
	while (s1[i])
	{
		if (ft_strncmp(&((char *)s1)[i], (char *)s2, ft_strlen(s2)) == 0)
			return (&((char *)s1)[i]);
		i++;
	}
	return (NULL);
}
