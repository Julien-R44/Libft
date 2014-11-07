/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jripoute <jripoute@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 14:20:26 by jripoute          #+#    #+#             */
/*   Updated: 2014/11/07 14:38:58 by jripoute         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	size_t i;
	size_t end_of_dest;

	i = 0;
	end_of_dest = ft_strlen(s1);
	while (s2[i])
	{
		s1[end_of_dest] = s2[i];
		i++;
		end_of_dest++;
	}
	s1[end_of_dest] = '\0';
	return (s1);
}
