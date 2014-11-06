#include <string.h>
#include <stdio.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	carac;
	char			*s1;
	char			*s2;

	i = 0;
	carac = (unsigned char)c;
	s1 = (char *)dst;
	s2 = (char *)src;
	while (i < n)
	{
		s1[i] = s2[i];
		if (s2[i] == carac)
			return (&s1[i + 1]);
		i++;
	}
}

int main(void)
{
	char src[]="Wesh.la famille";
	char *dst[50];
	char *ptr;

	ptr = ft_memccpy(dst, src, 'h', 5);
	printf("%s\n", ptr - 1);
	
	return (0);
}