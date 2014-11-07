/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printlist.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 01:37:34 by y0ja              #+#    #+#             */
/*   Updated: 2014/11/07 01:37:37 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_printlist(t_list *list, char sep)
{
	while (list != NULL)
	{
		ft_putstr((char *)list->content);
		ft_putchar(sep);
		list = list->next;
	}
}
