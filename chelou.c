/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chelou.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jripoute <jripoute@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 16:50:44 by jripoute          #+#    #+#             */
/*   Updated: 2014/11/05 19:06:17 by jripoute         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

static int	skip_space(const char *s, int i, int *isNeg)
{
	while ((s[i] == ' ' || s[i] == '-' || s[i] == '+') || (s[i] >= 9 && s[i] <= 13))
	{
		if (*isNeg)
			return (0);
		if (s[i] == '-')
		{
			if (*isNeg)
				return (0);
			*isNeg = -1;
		}
		else if (s[i] == '+')
		{
			if (*isNeg)
				return (0);
			*isNeg = 1;
		}
		i++;
	}
	if (*isNeg == 0)
		*isNeg = 1;
	return (i);
}

int		ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

void	ft_putchar(char c)
{
	write(1 , &c , 1);
}

int		ft_atoi(const char *s)
{
	int i;
	int result;
	int value;
	int	isNeg;

	i = 0;
	result = 0;
	value = 0;
	isNeg = 0;
	i = skip_space(s, i, &isNeg);
	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			result = s[i] - '0';
			value = (value * 10) + result;
		}
		else
			return (value * isNeg);
		i++;
	}
	return (value * isNeg);
}

int		main(void)
{
	int ret;
	char *str;

	printf("%d\n", atoi(" - 123"));
	printf("%d\n", ft_atoi(" - 123"));
}