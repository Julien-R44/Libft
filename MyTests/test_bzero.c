#include "test.h"

void	begin_test_bzero(t_env *env)
{
	char str[]="123456789";
	size_t len;
	int fail;

	env->func_name = strcpy(env->func_name, "Bzero");
	printf("\nStart test of %s..\n", env->func_name);
	fail = 0;
	len = strlen(str);
	ft_bzero(str, len);
	while (len)
	{
		if (str[len])
			fail++;
		len--;
	}
	if (str[0])
		fail++;
	if (fail)
		printf("Bzero : \033[31mFAIL !\033[0m\n");
	else
		printf("Bzero : \033[33mSUCESS !\033[0m\n");
}