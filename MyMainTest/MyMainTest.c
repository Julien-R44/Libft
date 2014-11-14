/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyMainTest.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jripoute <jripoute@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/13 02:19:38 by y0ja              #+#    #+#             */
/*   Updated: 2014/11/14 16:56:23 by jripoute         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

//#define TRY_SEGFAULT_THIS_SHIT
#define TRY_OCTAL_SET

int		main(void)
{
	#define FT_TEST_ATOI
		ft_test_atoi();
	#define	FT_TEST_BZERO
		ft_test_bzero();
	#define FT_TEST_IS_ALL
		ft_test_is_all();
	#define FT_TEST_ITOA
		ft_test_itoa();
	#define FT_TEST_MEMCCPY
		ft_test_memccpy();
	#define FT_TEST_STRSTR
		ft_test_strstr();

	// ---- FUNC PERSO ---- //
	#define FT_TEST_STRREV
		ft_test_strrev();
	#define FT_TEST_STRCLEN
		ft_test_strclen();
	#define FT_TEST_STRNDUP
		ft_test_strndup();
	#define FT_LSTADD_END_PRINT
		ft_test_lstadd_end_print();
	#define FT_TEST_DOUBLE_LIST
		ft_test_double_list();
	#define FT_TEST_LIST_I
		ft_test_list_i();
	#define FT_TEST_STRCHRSTR
		ft_test_strchrstr();
	return (0);
}

void	get_f_name(int f_name)
{
	tab.er = 0;
	if (tab.f_name)
		ft_strdel(&tab.f_name);
	if (f_name == ATOI)
		tab.f_name = strdup("ft_atoi");
	else if (f_name == BZERO)
		tab.f_name = strdup("ft_bzero");
	else if (f_name == IS_ALL)
		tab.f_name = strdup("ft_is all");
	else if (f_name == ITOA)
		tab.f_name = strdup("ft_itoa");
	else if (f_name == MEMCCPY)
		tab.f_name = strdup("ft_memccpy");
	else if (f_name == STRREV)
		tab.f_name = strdup("ft_strrev");
	else if (f_name == STRCLEN)
		tab.f_name = strdup("ft_strclen");
	else if (f_name == STRSTR)
		tab.f_name = strdup("ft_strstr");
	else if (f_name == D_LST)
		tab.f_name = strdup("D_LIST test");
	else if (f_name == STRNDUP)
		tab.f_name = strdup("ft_strndup");
	else if (f_name == LIST_I)
		tab.f_name = strdup("FT LIST I");
	else if (f_name == STRCHRSTR)
		tab.f_name = strdup("ft_strchrstr");
}

void	print_result_test(void)
{
	if (tab.er == 1)
		printf("%s :%s FAIL\n%s", tab.f_name ,RED, NO_COL);
	//printf("Test didn't passd in : %s\n", tab.f_name);
	else
		printf("%s :%s SUCESS\n%s", tab.f_name, GREEN, NO_COL);
}

void	error_sys(int er)
{
	if (er == 1)
		printf("Malloc faild..\n");
	exit(-1);
}

void	error(void)
{
	tab.er = 1;
}

void	ft_test_strchrstr(void)
{
	char str[]="wesh -v bien -f";
	char str2[]="xvf";
	char *here;

	get_f_name(STRCHRSTR);
	#ifdef TRY_SEGFAULT_THIS_SHIT
	ft_strchrstr(NULL, NULL);
	ft_strchrstr(NULL, "");
	ft_strchrstr("", NULL);
	ft_strchrstr("", "");
	#endif

	here = ft_strchrstr(str, str2);
	if (strcmp(here, "v bien -f") != 0)
		error();
	here = ft_strchrstr(&here[1], str2);
	if (strcmp(here, "f") != 0)
		error();
	print_result_test();
}

void	ft_test_strndup(void)
{
	char str[]="u will fail;;;";
	char str2[]="blah blah blaaah";
	char *newz;
	char *real;

	get_f_name(STRNDUP);
	#ifdef TRY_SEGFAULT_THIS_SHIT
	ft_strndup(NULL, -1);
	ft_strndup(real, 400);
	#endif
	newz = ft_strndup(str, 4);
	real = strndup(str, 4);
	if (strcmp(newz, real) != 0)
		error();
	newz = ft_strndup(str2, 50);
	real = strndup(str2, 50);
	if (strcmp(newz, real) != 0)
		error();
	free(newz);
	free(real);
	print_result_test();
}

void	ft_test_list_i(void)
{
	char str[]="first link";
	char str2[]="second link";
	char str3[]="end link";
	char str4[]="new second link";
	t_list *list;
	t_list *here;
	t_list *newsec;

	get_f_name(LIST_I);
	#ifdef TRY_SEGFAULT_THIS_SHIT
	#endif

	list = ft_lstnew(str, (ft_strlen(str) + 1));
	ft_lstadd_end(&list, ft_lstnew(str2, (ft_strlen(str2) + 1)));
	ft_lstadd_end(&list , ft_lstnew(str3, (ft_strlen(str3) + 1)));

	here = ft_lstati(list, 2);
	if (strcmp((char *)here->content, "second link") != 0)
		error();
	here = ft_lstati(list, 1);
	if (strcmp((char *)here->content, "first link") != 0)
		error();
	here = ft_lstlast(list);
	if (strcmp((char *)here->content, "end link") != 0)
		error();
	newsec = ft_lstnew(str4, (ft_strlen(str4) + 1));
	ft_lstadd_i(&list, newsec, 2);
	if (strcmp((char *)list->next->content, "new second link") != 0)
		error();
	print_result_test();
}

void	ft_test_double_list(void)
{
	char str[]="second link";
	char str2[]="first link";
	char str3[]="end link";
	t_dlist *d_lst;

	#ifdef TRY_SEGFAULT_THIS_SHIT
	#endif
	get_f_name(D_LST);
	d_lst = ft_dlstnew(str, (ft_strlen(str) + 1));
	ft_dlstadd(&d_lst, ft_dlstnew(str2, (ft_strlen(str2) + 1)));
	ft_dlstadd_end(&d_lst, ft_dlstnew(str3 , (ft_strlen(str3) + 1)));
	ft_dlstdelone(&d_lst->next, NULL);
	if (strcmp((char *)d_lst->content, "first link") != 0)
		error();
	if (strcmp((char *)d_lst->next->content, "end link") != 0)
		error();
	//ft_printdlist(d_lst, '-');
	if (ft_dlstlen(d_lst) != 2)
		error();
	ft_dlstdel(&d_lst, NULL);
	print_result_test();
}

void	ft_test_strstr(void)
{
	char str[]="TestVraiBail";
	char str2[]="Ca maaarche ton truc?";

	#ifdef TRY_SEGFAULT_THIS_SHIT
	ft_strstr(NULL, NULL);
	ft_strstr(NULL, str);
	ft_strstr(str, NULL);
	#endif

	get_f_name(STRSTR);
	if (ft_strstr(str, "Vrai") != strstr(str, "Vrai"))
		error();
	if (ft_strstr(str, "ail\0") != strstr(str, "ail\0"))
		error();
	if (ft_strstr(str2, "aarch") != strstr(str2, "aarch"))
		error();
	if (ft_strstr(str2, "\0") != strstr(str2, "\0"))
		error();
	print_result_test();
}

void	ft_test_lstadd_end_print(void)
{
	t_list *list;
	t_list *list2;
	t_list *list3;

	get_f_name(IS_ALL);
	#ifdef TRY_SEGFAULT_THIS_SHIT
	ft_lstadd_end(&list, NULL);
	ft_lstadd_end(NULL, NULL);
	ft_printlist(NULL, '\0');
	#endif
	list = (t_list *)ft_memalloc(sizeof(t_list));
	if (!list)
		error_sys(1);
	list->content = ft_strdup(" first link added ");
	list->content_size = (sizeof(char) * ft_strlen(list->content) + 1);
	list->next = NULL;
	list2 = (t_list *)ft_memalloc(sizeof(t_list));
	if (!list)
		error_sys(1);
	list2->content = ft_strdup(" second link add before ");
	list2->content_size = (sizeof(char) * ft_strlen(list2->content) + 1);
	list2->next = NULL;
	ft_lstadd(&list, list2);
	list3 = (t_list *)ft_memalloc(sizeof(t_list));
	if (!list)
		error_sys(1);
	list3->content = ft_strdup(" last link add end ");
	list3->content_size = (sizeof(char) * ft_strlen(list3->content) + 1);
	list3->next = NULL;
	ft_lstadd_end(&list, list3);
	//printf("\n");
	//ft_printlist(list, '-');
	//printf("\n");
	if (strcmp(list->content, " second link add before ") != 0)
		error();
	if (strcmp(list->next->content, " first link added ") != 0)
		error();
	if (strcmp(list->next->next->content, " last link add end ") != 0)
		error();
	if (ft_lstlen(list) != 3)
		error();
	print_result_test();
}

void	ft_test_itoa(void)
{
	get_f_name(ITOA);
	#ifdef TRY_SEGFAULT_THIS_SHIT
	ft_itoa(+1*74487);
	ft_itoa(0);
	#endif
	if (strcmp(ft_itoa(-1),"-1") != 0)
		error();
	if (strcmp(ft_itoa(0), "0") != 0)
		error();
	if (strcmp(ft_itoa(+1248787), "1248787") != 0)
		error();
	if (strcmp(ft_itoa(+45789), "45789") != 0)
		error();
	if (strcmp(ft_itoa(-12), "-12") != 0)
		error();
	if (strcmp(ft_itoa(2147483647), "2147483647") != 0)
		error();
	if (strcmp(ft_itoa(-2147483647), "-2147483647") != 0)
	 	error();
	print_result_test();
}

void	ft_test_memccpy(void)
{
	get_f_name(MEMCCPY);
	#ifdef TRY_SEGFAULT_THIS_SHIT

	#endif
	print_result_test();
}

void	ft_test_is_all(void)
{
	char str[]="\t \v\fsdfe65098876Wesh bien?";
	char str2[]="123__4blahewr7987=";
	int i;

	i = 0;
	get_f_name(IS_ALL);
	#ifdef TRY_SEGFAULT_THIS_SHIT
	ft_isalnum(-1);
	ft_isalpha(100000);
	ft_isascii(-99999);
	ft_isdigit(00);
	ft_isprint(-99999);
	#endif
	while (str[i])
	{
		if (ft_isspace(str[i]) != isspace(str[i]))
			error();
		if (ft_isalnum(str[i]) != isalnum(str[i]))
			error();
		if (ft_isascii(str[i]) != isascii(str[i]))
			error();
		if (ft_isdigit(str[i]) != isdigit(str[i]))
			error();
		if (ft_isprint(str[i]) != isprint(str[i]))
			error();
		if (ft_isalpha(str[i]) != isalpha(str[i]))
			error();
		i++;
	}
	i = 0;
	while (str2[i])
	{
		if (ft_isspace(str2[i]) != isspace(str2[i]))
			error();
		if (ft_isalnum(str2[i]) != isalnum(str2[i]))
			error();
		if (ft_isascii(str2[i]) != isascii(str2[i]))
			error();
		if (ft_isdigit(str2[i]) != isdigit(str2[i]))
			error();
		if (ft_isprint(str2[i]) != isprint(str2[i]))
			error();
		if (ft_isalpha(str2[i]) != isalpha(str2[i]))
			error();
		i++;
	}
	#ifdef TRY_OCTAL_SET
	char str3[]="\127\145\163\150\120\104\40";
	while (str3[i])
	{
		if (ft_isspace(str3[i]) != isspace(str3[i]))
			error();
		if (ft_isalnum(str3[i]) != isalnum(str3[i]))
			error();
		if (ft_isascii(str3[i]) != isascii(str3[i]))
			error();
		if (ft_isdigit(str3[i]) != isdigit(str3[i]))
			error();
		if (ft_isprint(str3[i]) != isprint(str3[i]))
			error();
		if (ft_isalpha(str3[i]) != isalpha(str3[i]))
			error();
		i++;
	}
	#endif
	print_result_test();
}

void	ft_test_bzero(void)
{
	int tab[15];
	char tab2[15];
	unsigned int tab3[15];
	int i = -1;

	get_f_name(BZERO);
	#ifdef TRY_SEGFAULT_THIS_SHIT
	ft_bzero(NULL, sizeof(char));
	ft_bzero(tab, 0);
	#endif
	ft_bzero(tab, sizeof(int) * 15);
	ft_bzero(tab2, sizeof(char) * 15);
	ft_bzero(tab3, sizeof(unsigned int) * 15);
	ft_bzero(tab3, sizeof(float) * 15);
	while (++i < 15)
		if (tab[i] != 0 || tab2[i] != 0 || tab3[i] != 0)
			error();
	print_result_test();
}

void	ft_test_strclen(void)
{
	char str[]="HereMothacka";
	char str2[]="\t\tBienMonGars?";

	get_f_name(STRCLEN);
	#ifdef TRY_SEGFAULT_THIS_SHIT
	ft_strclen(NULL, '\0');
	ft_strclen("\0", '\0');
	#endif
	if (ft_strclen(str, 'M') != (int) 4)
		error();
	if (ft_strclen(str2, 'G') != (int) 9)
		error();
	if (ft_strclen(str2, '\0') != (int) 14)
		error();
	#ifdef TRY_OCTAL_SET
	char str3[]="\070\071\102\123";
	if (ft_strclen(str3, '\102') != (int) 2)
		error();
	if (ft_strclen(str3, 'S') != (int) 3)
		error();
	#endif
	print_result_test();
}

void	ft_test_strrev(void)
{
	char str[]="abcd1234";
	char str2[]="WeshFDP";
	char str3[]="\tsisisi";
	char str4[]="   blahblah";

	get_f_name(STRREV);
	#ifdef TRY_SEGFAULT_THIS_SHIT
	ft_strrev(NULL);
	ft_strrev("");
	#endif
	if (strcmp(ft_strrev(str), "4321dcba") != 0)
		error();
	if (strcmp(ft_strrev(str2), "PDFhseW") != 0)
		error();
	if (strcmp(ft_strrev(str3), "isisis\t") != 0)
		error();
	if (strcmp(ft_strrev(str4), "halbhalb   ") != 0)
		error();
	#ifdef TRY_OCTAL_SET
	char str5[]="\103\40\103\110\117\t";
	if (strcmp(ft_strrev(str5), "\tOHC C") != 0)
		error();
	#endif
	print_result_test();
}

void	ft_test_atoi(void)
{
	get_f_name(ATOI);
	#ifdef TRY_SEGFAULT_THIS_SHIT
	ft_atoi(NULL);
	ft_atoi("");
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
	#ifdef TRY_OCTAL_SET
	if (atoi("\55\64\62") != ft_atoi("\55\64\62"))
		error();
	#endif
	print_result_test();
}
