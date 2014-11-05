/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chelou.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jripoute <jripoute@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 16:50:44 by jripoute          #+#    #+#             */
/*   Updated: 2014/11/05 15:54:12 by jripoute         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	*ft_memalloc(size_t size)
{
	void *ptr;

	if ((ptr = malloc(size)) != NULL)
		return (ptr);
	return (NULL);
}

char *ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t i;	
	char *str;
	unsigned int leng;

	leng = (unsigned int)len;
	i = 0;
	if (start >= len)
		return (NULL);
	str = (char *)ft_memalloc(sizeof(char) * (len - start) + 1);
	while (start < leng)
	{
		str[i] = s[start];
		start++;
		i++;
	}
	return (str);
}


void	ft_putnbr(int n)
{
	if (n < 0)
	{
		ft_putchar('-');
		ft_putnbr(-n);
	}
	else if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		ft_putchar('0' + n);
}


int		main(void)
{
	int ret;
	char *str;

	str = ft_strsub("123456789", 3, 6);
	printf("%s\n", str);
}