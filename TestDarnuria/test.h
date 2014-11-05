#ifndef TEST_H
# define TEST_H

# include "../libft.h"
# include "string_bsd.h"
# include <stdlib.h>
# include <string.h>
# include <stdio.h>
# include <ctype.h>
# include <signal.h>
# include <fcntl.h>
# include <unistd.h>

struct	s_struct1
{
	char	*m_str;
	char	m_char;
	int		m_int;
	void	*m_pointer;
};

struct	s_memtest
{
	char	c;
	char	c3;
	char	c2;
	int		num2;
};

typedef struct s_struct1	t_struct1;
typedef struct s_memtest	t_memtest;

void	ft_segfault(int);
void	ft_buserror(int);

void	ft_print_status(int res);
void	ft_print_begin(const char *name);
int		ft_print_end(int res);
static int	ft_test_memset2(char *str, char *str2, int n);
int	ft_test_memset(void);

int	g_tests_ok;
int g_tests;

#endif
