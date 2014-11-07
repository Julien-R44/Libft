/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 11:38:56 by jripoute          #+#    #+#             */
/*   Updated: 2014/11/06 22:16:23 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int				how_many_case(unsigned int n, int is_neg)
{
	int 				i;

	i = 0;
	while ((n /= 10) > 0)
		i++;
	if (is_neg)
		i++;
	return (i);
}

static unsigned int		convert_unsigned_int_and_set_sign(int n, int *is_neg)
{
	unsigned int 		da_new;

	if (n < 0)
	{
		*is_neg = 1;
		n = -n;
	}
	else
		*is_neg = 0;
	da_new = (unsigned int)n;
	return (da_new);
}

char					*ft_itoa(int n)
{
	char				*str;
	int					is_neg;
	unsigned int		nb;
	int					i;

	i = 0;
	nb = convert_unsigned_int_and_set_sign(n, &is_neg);
	str = (char *)malloc(sizeof(str) * (how_many_case(nb, is_neg) + 1));
	while (nb / 10 > 0)
	{
		str[i] = nb % 10 + '0';
		nb /= 10;
		i++;
	}
	str[i] = nb % 10 + '0';
	i += 1;
	if (is_neg)
		str[i] = '-';
	if (is_neg)
		str[i+1] = '\0';
	else
		str[i] = '\0';
	ft_strrev(str);
	return (str);
}