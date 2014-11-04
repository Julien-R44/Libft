#include "test.h"

void	unit_test_atoi(t_env *env, int *ret, int *ret2, char *value)
{
	*ret = atoi(value);
	*ret2 = ft_atoi(value);
	print_test(env->func_name, *ret, *ret2, value);
}

int		begin_test_atoi(t_env *env)
{
	int ret;
	int ret2;

	env->func_name = strcpy(env->func_name, "Atoi");
	printf("Start tests of %s..\n", env->func_name);
	unit_test_atoi(env, &ret, &ret2, "+42");
	unit_test_atoi(env, &ret, &ret2, "-78154872");
	unit_test_atoi(env, &ret, &ret2, "++++7899007");
	unit_test_atoi(env, &ret, &ret2, "125\t1234");
	unit_test_atoi(env, &ret, &ret2, "*-9875");
	unit_test_atoi(env, &ret, &ret2, "1234abcd");
	unit_test_atoi(env, &ret, &ret2, "sisi");
	unit_test_atoi(env, &ret, &ret2, "");
}