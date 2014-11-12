/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jripoute <jripoute@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 20:38:02 by jripoute          #+#    #+#             */
/*   Updated: 2014/11/11 09:03:32 by jripoute         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	size_t			i;
	size_t			j;
	unsigned char	*s1_;
	unsigned char	*s2_;

	s1_ = (unsigned char *)s1;
	s2_ = (unsigned char *)s2;
	i = 0;
	j = 0;
	if (!s2[0] || s2 == NULL)
		return ((char *)s1);
	while (s1_[i])
	{
		while (s1_[i + j] == s2_[j])
		{
			j++;
			if (!s2_[j])
				return (&((char *)s1_)[i]);
		}
		j = 0;
		i++;
	}
	return (NULL);
}
