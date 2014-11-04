#ifndef TEST_H
# define TEST_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>
#include "../libft.h"

typedef struct	s_env
{
	char	*func_name;
}				t_env;

int		begin_test_atoi(t_env *env);
void	begin_test_bzero(t_env *env);

void	check_ret_test(int ret_real_fun, int ret_custom_fun, char *func_name);
void	print_test(char func_name[40], int ret, int ret2, char *value);

#endif