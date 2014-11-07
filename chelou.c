/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chelou.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jripoute <jripoute@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 16:50:44 by jripoute          #+#    #+#             */
/*   Updated: 2014/11/07 12:10:56 by jripoute         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t i;
	size_t j;

	j = 0;
	i = 0;
	if (!s2 || !s2[0])
	{
		return ((char *)s1);
	}
	while (s1[i] && i < n)
	{
		if (s1[i] == s2[j])
			j++;
		else
			j = 0;
		if (!s2[j])
			return ((char *)s1 + (i - (j - 1)));
		i++;
	}
	return (NULL);
}

int main(void)
{
	char str[]="Wesh FDP";

	printf("%s\n", ft_strnstr(str, "", 3));
	return (0);
}