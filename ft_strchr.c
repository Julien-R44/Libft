#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t i;
	char *s1;

	s1 = (char*)s;
	i = 0;
	while (s1[i])
	{
		if (s1[i] == c)
			return (&s1[i]);
		i++;
	}
	if (c == '\0')
		if (s1[i] == '\0')
			return (&s1[i]);
	return (NULL);
}