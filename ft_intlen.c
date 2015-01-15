#include "libft.h"

int		ft_intlen(int nb)
{
	int i;

	i = 0;
	if (nb < 0)
	{
		nb = ABS(nb);
		i++;
	}
	while (nb / 10 > 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i + 1);
}