#include "libft.h"

static void	rev(char *str)
{
	int i;
	int j;
	char tmp;
 
 	i = 0;
 	j = ft_strlen(str) - 1; 
	while (i < j)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		i++;
		j--;
	}
}

char	*ft_itoa(int n)
{
	char *str;
	int isNeg;
	int tmp2;
	int i;

	i = 0;
	isNeg = (n < 0) ? -1 : 1;
	str = (char *)malloc(sizeof(str) * 20);
	if (isNeg == -1)
		n = -n;
	tmp2 = n;
	while ((tmp2 /= 10) > 0)
	{
		str[i] = n % 10 + '0';
		printf("%c\n", str[i]);
		tmp2 = n;
		n /= 10;
		i++;
	}
	if (i == 0)
	{
		str[i] = n % 10 + '0';
		i++;
	}
	if (isNeg == -1)
		str[i] = '-';
	str[i + 1] = '\0';
	rev(str);
	return (str);
}