#include "test.h"

void	check_ret_test(int ret_real_fun, int ret_custom_fun, char *func_name)
{
	printf("%s : %d, yours : %d == ", func_name, ret_real_fun, ret_custom_fun);
	if (ret_real_fun != ret_custom_fun)
	{
		printf("\033[31mFAIL !\033[0m\n");
	}
	else
		printf("\033[33mSUCESS !\033[0m\n");
}

void	print_test(char func_name[40], int ret, int ret2, char *value)
{
	printf("%s -> ", value);
	check_ret_test(ret, ret2, func_name);
}

int		main(void)
{
	t_env env;

	env.func_name = malloc(sizeof(char) * 40);
	begin_test_atoi(&env);
	begin_test_bzero(&env);
}
