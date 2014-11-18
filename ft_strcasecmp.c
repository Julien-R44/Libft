/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcasecmp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jripoute <jripoute@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/18 15:53:40 by jripoute          #+#    #+#             */
/*   Updated: 2014/11/18 15:53:49 by jripoute         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcasecmp(const char *s1, const char *s2)
{
	unsigned char s1_;
	unsigned char s2_;

	s1_ = 1;
	s2_ = 1;
	while (s1_ == s2_ && s1_ != 0)
	{
		s1_ = ft_tolower(*s1++);
		s2_ = ft_tolower(*s2++);
	}
	return (s1_ - s2_);
}