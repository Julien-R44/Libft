/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jripoute <jripoute@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 20:34:56 by jripoute          #+#    #+#             */
/*   Updated: 2014/11/07 11:24:30 by jripoute         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while ((*s1 || *s2) && n > 0)
	{
		if (*s1 != *s2)
		{
			if (*s1 > *s2)
				return (1);
			else if (*s2 > *s1)
				return (-1);
		}
		s1++;
		s2++;
		n--;
	}
	return (0);
}
