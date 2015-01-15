#include "libft.h"

void	ft_dlst_insert(t_dlist **list, t_dlist *to_ins)
{
	t_dlist *tmp;
	t_dlist *last;

	if (to_ins == NULL)
		return ;
	if ((*list)->next)
	{
		tmp = (*list)->next;
		last = ft_dlstlast(to_ins);
		last->next = tmp;
		(*list)->next = to_ins;
	}
	else
		ft_dlstadd_end(list, to_ins);
}