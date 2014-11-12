/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jripoute <jripoute@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 11:38:56 by jripoute          #+#    #+#             */
/*   Updated: 2014/11/11 09:16:57 by jripoute         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	size_t	len;
	char	*newstr;

	i = 0;
	if ((*f) == NULL || s == NULL)
		return (NULL);
	len = ft_strlen(s);
	newstr = ft_strnew(len);
	while (i < len)
	{
		newstr[i] = (*f)(s[i]);
		i++;
	}
	return (newstr);
}
