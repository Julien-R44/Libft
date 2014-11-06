/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chelou.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jripoute <jripoute@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 16:50:44 by jripoute          #+#    #+#             */
/*   Updated: 2014/11/06 01:09:26 by jripoute         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dst[i] = src[i];
		i++;
	}
	while (n > i)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}

static size_t	ft_strclen(char const *s, char c)
{
	size_t i;

	i = 0;
	while (s[i] != c)
		i++;
	return (i);
}

size_t	ft_strlen(char *str)
{
	size_t i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	*ft_memalloc(size_t size)
{
	void *ptr;

	if ((ptr = malloc(size)) != NULL)
		return (ptr);
	return (NULL);
}

static void	rev(char *str)
{
	size_t i;
	size_t j;
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

int main(void)
{
	char str[]="*esh**les***salopes***";
	char *ret;

	printf("%d\n", strcmp(ret = ft_itoa(123), "123"));
	printf("%s\n", ret);

}