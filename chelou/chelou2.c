#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "../libft.h"


void	ft_printlist(t_list *list, char sep)
{
	while (list != NULL)
	{
		ft_putstr((char *)list->content);
		ft_putchar(sep);
		list = list->next;
	}
}

int 	main(void)
{
	t_list *lst;
	char str[]="test2";
	char str2[]="test1";
	char str3[]="test3";
	int strclen;

	lst = ft_lstnew(str, ft_strlen(str)); // TEST 2
	ft_lstadd(&lst, ft_lstnew(str2, ft_strlen(str2))); // TEST 1
	ft_lstadd_end(&lst, ft_lstnew(str3, ft_strlen(str2))); // TEST 3

	strclen = ft_strclen((char *)lst->content, '1');
	printf("strlen = %d strclen du char '1' %d\n", (int)ft_strlen((char *)lst->content), strclen);
	ft_printlist(lst, '\n');
	
	return (0);
}