/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jripoute <jripoute@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 20:04:50 by jripoute          #+#    #+#             */
/*   Updated: 2014/11/09 07:24:06 by jripoute         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	char	*s1_;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s2 || !s2[0])
		return ((char *)s1);
	s1_ = (char *)s1;
	while (s1_[i] && i < n)
	{
		while (s1_[i + j] == s2[j] && i + j < n && s2[i] != '\0'
			&& s1_[i + j] != '\0')
			j++;
		if (s2[j] == '\0')
			return (&((char*)s1)[i]);
		j = 0;
		i++;
	}
	return (NULL);
}
