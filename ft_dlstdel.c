/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstdel.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jripoute <jripoute@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 05:18:05 by jripoute          #+#    #+#             */
/*   Updated: 2014/11/14 12:55:18 by jripoute         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dlstdel(t_dlist **alst, void (*del)(void *, size_t))
{
	t_dlist *tmp;

	if (del == NULL)
		del = NULL;
	while (*alst != NULL)
	{
		tmp = (*alst)->next;
		ft_dlstdelone(alst, del);
		*alst = tmp;
	}
}
