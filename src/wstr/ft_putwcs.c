#include "libft.h"

void	ft_putwcs(const wchar_t *str)
{
	size_t i;

	i = 0;
	while (str[i])
	{
		ft_putwchar(str[i]);
		i++;
	}
}
