/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chelou.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 16:50:44 by jripoute          #+#    #+#             */
/*   Updated: 2014/11/05 03:08:59 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
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
	int nb;
	
	nb = 25;
	printf("%s\n", ft_itoa(-5));

}