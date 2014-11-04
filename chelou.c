/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chelou.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 16:50:44 by jripoute          #+#    #+#             */
/*   Updated: 2014/11/04 23:18:33 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t i;
	size_t end_of_dest;

	i = 0;
	end_of_dest = strlen(dest);
	while (src[i] && i < n)
	{
		dest[end_of_dest + i] = src[i];
		i++;
	}
	dest[end_of_dest + i] = '\0';
	return (dest);
}

int main(void)
{
	char str[50] = {'W', 'E', 'S', 'H'};
	char str2[]=" FDP";

	strncat(str, str2, 7);
	puts(str);


	char str3[50] = {'W', 'E', 'S', 'H'};
	char str4[]=" FDP";

	ft_strncat(str3, str4, 7);
	puts(str3);
    return 0;
}