/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jripoute <jripoute@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 11:38:56 by jripoute          #+#    #+#             */
/*   Updated: 2014/11/05 11:40:11 by jripoute         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	rev(char *str)
{
	int i;
	int j;
	char tmp;
 
 	i = 0;
 	j = ft_strlen(str) - 1; 
	while (i < j)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		i++;
		j--;
	}
}

char	*ft_itoa(int n)
{
	char *str;
	int isNeg;
	int tmp2;
	int i;

	i = 0;
	isNeg = (n < 0) ? -1 : 1;
	str = (char *)malloc(sizeof(str) * 20);
	if (isNeg == -1)
		n = -n;
	tmp2 = n;
	while ((tmp2 /= 10) > 0)
	{
		str[i] = n % 10 + '0';
		printf("%c\n", str[i]);
		tmp2 = n;
		n /= 10;
		i++;
	}
	if (i == 0)
	{
		str[i] = n % 10 + '0';
		i++;
	}
	if (isNeg == -1)
		str[i] = '-';
	str[i + 1] = '\0';
	rev(str);
	return (str);
}