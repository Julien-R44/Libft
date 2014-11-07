/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 00:34:15 by y0ja              #+#    #+#             */
/*   Updated: 2014/11/07 01:49:03 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*newlst;
	t_list	*ptr_start_list;
	int i;

	i = 0;
	while (lst)
	{
		if (i == 0)
		{
			ptr_start_list = ft_lstnew("", 0);
			ptr_start_list = (*f)(lst);
			newlst = ptr_start_list;
		}
		else
		{
			ft_lstadd(&ptr_start_list, ft_lstnew("", 0));
			newlst->next = (*f)(lst);
			newlst = newlst->next;
		}
		lst = lst->next;
		i++;
	}
	return (ptr_start_list);
}	