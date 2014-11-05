/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 20:38:02 by jripoute          #+#    #+#             */
/*   Updated: 2014/11/05 01:18:52 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s, const char *to_find)
{
	size_t i;
	size_t j;

	j = 0;
	i = 0;
	if (!to_find[0] || to_find == NULL)
		return ((char *)s);
	while (s[i])
	{
		if (s[i] == to_find[j])
			j++;
		else
			j = 0;
		if (!to_find[j])
			return ((char *)s + (i - (j - 1)));
		i++;
	}
	return (NULL);
}
