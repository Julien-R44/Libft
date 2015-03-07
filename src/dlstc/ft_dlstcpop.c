/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstcpop.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: so <so@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/07 17:45:48 by so                #+#    #+#             */
/*   Updated: 2015/03/07 17:46:26 by so               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_dlstcpop(t_dlist *node, t_dlist *new)
{
	if (node && new)
	{
		new->before = node->before;
		new->next = node;
		node->before->next = new;
		node->before = new;
	}
}