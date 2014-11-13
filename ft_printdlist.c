/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printdlist.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/14 00:33:15 by y0ja              #+#    #+#             */
/*   Updated: 2014/11/14 00:36:47 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_printdlist(t_dlist *list, char sep)
{
	t_dlist *tmp;

	tmp = list;
	while (tmp)
	{
		ft_putstr((char *)tmp->content);
		ft_putchar(sep);
		tmp = tmp->next;
	}
}
