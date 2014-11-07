/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 14:12:04 by jripoute          #+#    #+#             */
/*   Updated: 2014/11/07 01:57:04 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char *str;

	str = (char *)malloc(sizeof(str) * (ft_strlen(s1) + 1));
	if (str == NULL)
		return (str);
	ft_strcpy(str, s1);
	return (str);
}