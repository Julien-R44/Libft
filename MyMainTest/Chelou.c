#include <stdio.h>
#include <string.h>


char	*ft_strrev(char *str)
{
	size_t	i;
	size_t	j;
	char	tmp;

	i = 0;
	j = strlen(str) - 1;
	while (i < j)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		i++;
		j--;
	}
	return (str);
}

int main(void)
{
	char str[]="Wesh ma gueule";

	//str[4] = 'V';
	ft_strrev(str);
	printf("%s\n", str);
}