/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jripoute <jripoute@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 20:34:00 by jripoute          #+#    #+#             */
/*   Updated: 2014/11/04 01:21:59 by jripoute         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		skip_space(const char *s, int i, int *isNeg)
{
	while (s[i] == ' ' || s[i] == '-' || s[i] == '\t')
	{
		if (s[i] == '-')
		{
			if (*isNeg == -1)
				return (0);
			*isNeg = -1;
		}
		i++;
	}
	return (i);
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
	isNeg = 1;
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