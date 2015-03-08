#include "libft.h"

wchar_t		*ft_wcscpy(wchar_t *dst, const wchar_t *src)
{
	size_t	i;

	i = 0;
	if (!src)
		return (NULL);
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
