/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstadd_end.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/13 23:20:52 by jripoute          #+#    #+#             */
/*   Updated: 2014/11/17 02:57:06 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dlstadd_end(t_dlist **alst, t_dlist *new)
{
	t_dlist *nav;

	if (new && *alst)
	{
		nav = *alst;
		while (nav->next != NULL)
			nav = nav->next;
		nav->next = new;
		new->before = nav;
	}
	else
		*alst = new;
}
