/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_contents.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/20 00:12:52 by y0ja              #+#    #+#             */
/*   Updated: 2014/11/20 00:12:55 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_swap_contents(t_dlist **list1, t_dlist **list2)
{
	char	*tmp;
	size_t	tmp2;

	tmp = (*list1)->content;
	tmp2 = (*list1)->content_size;
	(*list1)->content = (*list2)->content;
	(*list1)->content_size = (*list2)->content_size;
	(*list2)->content = tmp;
	(*list2)->content_size = tmp2;
}