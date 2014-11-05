#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *str;

	str = ft_memalloc(size);
	ft_memset(str, '\0', size);
	return (str);
}