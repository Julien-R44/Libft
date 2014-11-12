/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jripoute <jripoute@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 20:34:00 by jripoute          #+#    #+#             */
/*   Updated: 2014/11/12 18:30:40 by jripoute         ###   ########.fr       */
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

int				ft_atoi(const char *str)
{
	int			i;
	int			result;
	int			value;
	int			is_neg;

	if (str == NULL)
		return (0);
	i = 0;
	result = 0;
	value = 0;
	is_neg = 0;
	i = skip_space(str, i, &is_neg);
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			result = str[i] - '0';
			value = (value * 10) + result;
		}
		else
			return (value * is_neg);
		i++;
	}
	return (value * is_neg);
}
