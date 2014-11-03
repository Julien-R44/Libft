/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jripoute <jripoute@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 16:50:44 by jripoute          #+#    #+#             */
/*   Updated: 2014/11/03 17:23:52 by jripoute         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		if (((char*)src)[i] == c)
			return (&((char*)src)[i]);
		((char*)dst)[i] = ((char*)src)[i]; 
		i++;
	}
	return (NULL);
}

int main(void)
{
	char str[12];
	char str2[]="Wesh le FDP";

	printf("ptr = %s\n", memccpy(str, str2, 'F', 12));
	printf("str = %s\n", str);

	char str3[12];
	char str4[]="Wesh le FDP";

	printf("\n");
	printf("ptr = %s\n", ft_memccpy(str3, str4, 'F', 12));
	printf("str = %s\n", str3);
}