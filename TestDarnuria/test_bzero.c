/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 07:50:36 by amerle            #+#    #+#             */
/*   Updated: 2014/11/04 22:55:52 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static int ft_nearzero(int n)
{
if (n < 0)
return (-1);
else if (n > 0)
return (1);
else
return (0);
}
static int	ft_tmemcmp2(const void *mem1, const void *mem2, size_t n)
{
int	res;
int	res2;
int	res3;
res = 0;
res2 = ft_nearzero(ft_memcmp(mem1, mem2, n));
res3 = ft_nearzero(memcmp(mem1, mem2, n));
if (res2 != res3)
++res;
printf("Test : { %d - %d }", res2, res3);
ft_print_status(res);
return (res);
}
int	ft_test_memcmp(void)
{
int	res;
t_struct1 t1;
t_struct1 t2;
char	buf[] = "test";
t1.m_str = t2.m_str = buf;
t1.m_char = t2.m_char = 't';
t1.m_int = t2.m_int = 8997;
t1.m_pointer = (void *)879;
t2.m_pointer = 0;
res = 0;
ft_print_begin("ft_memcmp");
res += ft_tmemcmp2((const void *)&t1, (const void *)&t2, sizeof(t_struct1));
t2.m_pointer = (void *)879;
res += ft_tmemcmp2((const void *)&t1, (const void *)&t2, sizeof(t_struct1));
return (ft_print_end(res));
}

int		ft_test_memccpy(void)
{
	int	res;
	t_memtest t1;
	t_memtest t2;

	t1.c = 'Y';
	t1.c3 = '{';
	t1.c2 = ',';
	t1.num2 = 5446;
	res = 0;
	bzero((void *)&t2, sizeof(t_memtest));

	ft_memccpy((void *)&t2, (const void *)&t1, '{', sizeof(t_memtest));
	if (!(t2.c == t1.c && t2.c3 == t1.c3 &&
		 t2.c2 != t1.c2 && t2.num2 != t1.num2))
		++res;
	ft_memccpy((void *)&t2, (const void *)&t1, ',', sizeof(t_memtest));
	if (!(t2.c == t1.c && t2.c3 == t1.c3 &&
		 t2.c2 == t1.c2 && t2.num2 != t1.num2))
		++res;
	printf("Test");
	ft_print_status(res);
	return (ft_print_end(res));
}

static int	ft_test_memchr2(const void *src, int c, size_t len)
{
	int		res;
	void	*pres;
	void	*pres2;

	res = 0;
	pres = ft_memchr(src, c, len);
	pres2 = memchr(src, c, len);
	if (pres != pres2)
		++res;
	printf("Test");
	ft_print_status(res);
	return (res);
}

int		ft_test_memchr(void)
{
	int		res;
	char	str[] = "Ceci est une chaine inutile";

	res = 0;
	ft_print_begin("ft_memchr");
	res += ft_test_memchr2(str, 'u', strlen(str));
	res += ft_test_memchr2(str, 'z', strlen(str));
	return (ft_print_end(res));
}

