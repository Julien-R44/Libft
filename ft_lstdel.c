/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 05:18:05 by jripoute          #+#    #+#             */
/*   Updated: 2014/11/08 19:25:58 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *tmp;

	tmp = *alst;
	while ((*alst)->next)
	{
		(*del)(tmp->content, tmp->content_size);
		free(tmp);
		*alst = (*alst)->next;
		tmp = *alst;
	}
	*alst = NULL;
}
