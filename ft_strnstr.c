/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 20:04:50 by y0ja              #+#    #+#             */
/*   Updated: 2014/11/08 19:07:23 by y0ja             ###   ########.fr       */
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
		while (s1_[i + j] == s2[j] && i + j < n)
		{
			printf("TOUR = %d, s1 comp = %c et s2 comp = %c \n", (int)j, (char)s1_[i + j], (char)s2[j]);
			j++;
		}
		if (!s2[j])
		{
			printf("RET = '%s'\n", &((char*)s1)[i]);
			return ( &((char*)s1)[i] );
		}
		j = 0;
		i++;
	}
	return (NULL);
}