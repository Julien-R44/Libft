/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jripoute <jripoute@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 20:36:43 by jripoute          #+#    #+#             */
/*   Updated: 2014/11/09 10:18:19 by jripoute         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	unsigned char *s1_;
	unsigned char *s2_;
	size_t i;

	i = 0;
	if (s1 && s2)
	{
		s1_ = (unsigned char*)s1;
		s2_ = (unsigned char*)s2;
		while (s1_[i] || s2_[i])
		{
			if (s1_[i] != s2_[i])
			{
				if (s1_[i] > s2_[i])
					return (1);
				else if (s1_[i] < s2_[i])
					return (-1);
			}
			i++;
		}
	}
	return (0);
}
