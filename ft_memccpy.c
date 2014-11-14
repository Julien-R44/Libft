/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jripoute <jripoute@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 04:13:06 by jripoute          #+#    #+#             */
/*   Updated: 2014/11/13 12:59:23 by jripoute         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	char			*s1_;
	const char		*s2_;

	s2_ = s2;
	s1_ = s1;
	while (n--)
	{
		if (*s2_ == c)
		{
			*s1_++ = *s2_++;
			return (s1_);
		}
		*s1_++ = *s2_++;
	}
	return (NULL);
}
