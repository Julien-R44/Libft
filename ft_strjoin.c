/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jripoute <jripoute@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 13:06:17 by jripoute          #+#    #+#             */
/*   Updated: 2014/11/05 14:24:37 by jripoute         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char *str;
	size_t newsize;

	newsize = (ft_strlen(s1) + ft_strlen(s2));
	str = (char *)ft_memalloc(sizeof(char) * newsize + 1);
	ft_strcpy(str, s1);
	ft_strcat(str, s2);
	return (str);
}