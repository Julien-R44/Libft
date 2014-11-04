#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t i;
	size_t end_of_dest;

	i = 0;
	end_of_dest = ft_strlen(dest);
	while (src[i] && i < n)
	{
		dest[end_of_dest + i] = src[i];
		i++;
	}
	dest[end_of_dest + i] = '\0';
	return (dest);
}