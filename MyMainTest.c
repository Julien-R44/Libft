#include <stdio.h>
#include <string.h>

#include "libft.h"

#define TRY_SEGFAULT_THIS_SHIT

typedef enum e_func
{
	ATOI,
	BZERO,
	STRREV,
}			e_funcz;

typedef struct	s_test
{
	char *f_name;
	int er;
}				t_test;

t_test tab;

void	ft_test_atoi(void);
void	ft_test_strrev(void);

int		main(void)
{
	#define FT_TEST_ATOI
		ft_test_atoi();
	// #define	FT_TEST_BZERO
		// ft_test_bzero();

	// ---- FUNC PERSO ---- //
	#define FT_TEST_STRREV
		ft_test_strrev();
	return (0);
}

void	get_f_name(int f_name)
{
	if (tab.f_name)
		ft_strdel(&tab.f_name);
	if (f_name == ATOI)
		tab.f_name = ft_strdup("ft_atoi");
	if (f_name == BZERO)
		tab.f_name = ft_strdup("ft_bzero");
	if (f_name == STRREV)
		tab.f_name = ft_strdup("ft_strrev");
}

void	print_result_test(void)
{
	if (tab.er == 1)
		printf("%s : FAIL\n", tab.f_name);
	else
		printf("%s : SUCESS\n", tab.f_name);
}

void	error(void)
{
	printf("Error in : %s\n", tab.f_name);
	tab.er = 1;
}

void	ft_test_strrev(void)
{
	char tab[5][]= {{"abcd"},
					{"-7fds12d"},
					{"Wesh"},
					{"\tsisisi"},
					{"BlahBlah"} }

	get_f_name(STRREV);
	if (strcmp(ft_strrev(tab[0]), "bcda") != 0)
		printf("SISI\n");
	// if (strcmp(ft_strrev("-7fds12d"), "d21sdf7-") != 0)
	// 	error();
	// if (strcmp(ft_strrev("Wesh"), "hseW") != 0)
	// 	error();
	// if (strcmp(ft_strrev("\tsisi"), "isis\t") != 0)
	// 	error();
	// if (strcmp(ft_strrev("BlahBlah"), "halBhalB") != 0)
	// 	error();

}

void	ft_test_atoi(void)
{
	get_f_name(ATOI);
	#ifdef TRY_SEGFAULT_THIS_SHIT
	ft_atoi(NULL);
	#endif
	if (atoi("-23") != ft_atoi("-23"))
		error();
	if (atoi("0") != ft_atoi("0"))
		error();
	if (atoi("+1248787") != ft_atoi("+1248787"))
		error();
	if (atoi("abcd87") != ft_atoi("abcd87"))
		error();
	if (atoi("87bcda") != ft_atoi("87bcda"))
		error();
	if (atoi("\n\t\v\r -12") != ft_atoi("\n\t\v\r -12"))
		error();
	if (atoi("2147483647") != ft_atoi("2147483647"))
		error();
	if (atoi("2147483648") != ft_atoi("2147483648"))
		error();
	if (atoi("-2147483648") != ft_atoi("-2147483648"))
		error();
	print_result_test();
}