#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t i;

	i = 0;
	while (i < len)
	{
		((char*)b)[i] = c;
		i++;
	}
	return (b);
}

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	char	*s1_;
	char	*here;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s2 || !s2[0])
		return ((char *)s1);
	s1_ = (char *)s1;
	while (s1_[i] && i < n)
	{
		while (s1_[i + j] == s2[j] && i + j < n)
		{
			printf("s1 comp = %c et s2 comp = %c \n", (char)s1_[i + j], (char)s2[j]);
			j++;
		}
		if (!s2[j])
			return ( &((char*)s1)[i] );
		j = 0;
		i++;
	}
	return (NULL);
}

void	*ft_memalloc(size_t size)
{
	void *ptr;

	printf("%d\n", (int)size);
	ptr = (void *)malloc(size);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, '\0', size);
	return (ptr);
	
}

void	ft_memdel(void **ap)
{
	if (ap)
	{
		free(*ap);
		*ap = NULL;
	}
}

int main(void)
{
	void *ptr;

	ptr = ft_memalloc(1024);
	ft_memdel(&ptr);
	return (0);
}