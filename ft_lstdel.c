/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jripoute <jripoute@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 05:18:05 by jripoute          #+#    #+#             */
/*   Updated: 2014/11/06 05:37:11 by jripoute         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *tmp;

	tmp = *alst;
	while ((*alst)->next)
	{
		*alst = (*alst)->next;
		(*del)(tmp->content, tmp->content_size);
		free(tmp);
		tmp = *alst;
	}
	*alst = NULL;
}