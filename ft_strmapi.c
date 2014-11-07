/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jripoute <jripoute@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 03:25:18 by jripoute          #+#    #+#             */
/*   Updated: 2014/11/07 11:23:54 by jripoute         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	len;
	char	*newstr;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (f == NULL)
		return (ft_strdup(s));
	len = ft_strlen(s);
	newstr = ft_strnew(len);
	while (i < len)
	{
		newstr[i] = (*f)(i, s[i]);
		i++;
	}
	return (newstr);
}
