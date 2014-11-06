/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jripoute <jripoute@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 20:34:00 by jripoute          #+#    #+#             */
/*   Updated: 2014/11/06 06:01:33 by jripoute         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		skip_space(const char *s, int i, int *is_neg)
{
	while ((s[i] == ' ' || s[i] == '-' || s[i] == '+') ||
	(s[i] >= 9 && s[i] <= 13))
	{
		if (*is_neg)
			return (0);
		if (s[i] == '-')
		{
			if (*is_neg)
				return (0);
			*is_neg = -1;
		}
		else if (s[i] == '+')
		{
			if (*is_neg)
				return (0);
			*is_neg = 1;
		}
		i++;
	}
	if (*is_neg == 0)
		*is_neg = 1;
	return (i);
}

int				ft_atoi(const char *s)
{
	int			i;
	int			result;
	int			value;
	int			is_neg;

	i = 0;
	result = 0;
	value = 0;
	is_neg = 0;
	i = skip_space(s, i, &is_neg);
	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			result = s[i] - '0';
			value = (value * 10) + result;
		}
		else
			return (value * is_neg);
		i++;
	}
	return (value * is_neg);
}
