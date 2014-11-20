/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyMainTest.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/13 02:19:38 by y0ja              #+#    #+#             */
/*   Updated: 2014/11/20 12:16:04 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

#define TRY_SEGFAULT_THIS_SHIT
#define TRY_OCTAL_SET
#define STATUT_NAME(enum_name, str) if (f_name == enum_name) \
							taberror.f_name = strdup(str);
// Some Segault test are sometimes a little weird. Please check, and then advise.
// ft_is_all don't work on Linux. isalnum and co. don't return the same value on mac
// Moulinette checks :		ATOI - BZERO - ISAL - MEMCCPY - MEMCHR - MEMCMP - MEMCPY - MEMMOVE - MEMSET - STRCAT - STRCHR -
//							STRCMP - STRCPY - STRDUP - STRLCAT - STRLEN - STRNCAT - STRNCMP - STRNCPY - STRNSTR -
//							STRRCHR - STRSTR - TOLOWER - TOUPPER -

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
	#define FT_TEST_STRCHR
		ft_test_strchr();
	#define FT_TEST_STRRCHR
		ft_test_strrchr();
	#define FT_TEST_STREQU
		ft_test_strequ();
	#define FT_TEST_STRCAT
		ft_test_strcat();
	#define FT_TEST_STRNEQU
		ft_test_strnequ();
	#define FT_TEST_STRJOIN
		ft_test_strjoin();
	#define FT_TEST_STRMAP
		ft_test_strmap();
	#define FT_TEST_STRMAPI
		ft_test_strmapi();
	#define FT_TEST_STRITER
		ft_test_striter();
	#define FT_TEST_STRITER
		ft_test_striteri();
	#define FT_TEST_STRSPLIT
		ft_test_strsplit();
	#define FT_TEST_STRSUB
		ft_test_strsub();
	#define FT_TEST_STRSTRIM
		ft_test_strtrim();
	#define FT_TEST_STRCLR
		ft_test_strclr();
	#define FT_TEST_STRDEL
		ft_test_strdel();
	#define FT_TEST_MEMREA
		ft_test_memalloc();
	#define FT_TEST_REALLOC
		ft_test_realloc();
	// ---- FUNC PERSO ---- //
		printf("\nMy personal functions : \n");
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
	#define FT_TEST_D_LIST_I
		ft_test_dlist_i();
	#define FT_TEST_STRCHRSTR
		ft_test_strchrstr();
	#define FT_TEST_ROT_N
		ft_test_rot_n();
	#define FT_TEST_SWAP_CONTENTS
		ft_test_swap_contents();
	#define FT_TEST_STRCASECMP
		ft_test_strcasecmp();
	ft_strdel(&taberror.f_name);
	return (0);
}

void	get_f_name(int f_name)
{
	taberror.er = 0;
	if (taberror.f_name)
		ft_strdel(&taberror.f_name);
	STATUT_NAME(ATOI, "ft_atoi")
	STATUT_NAME(BZERO, "ft_bzero")
	STATUT_NAME(IS_ALL, "ft_is all")
	STATUT_NAME(ITOA, "ft_itoa")
	STATUT_NAME(MEMCCPY, "ft_memccpy")
	STATUT_NAME(STRREV, "ft_strrev")
	STATUT_NAME(STRCLEN, "ft_strclen")
	STATUT_NAME(STRSTR, "ft_strstr")
	STATUT_NAME(STRNDUP, "ft_strndup")
	STATUT_NAME(LIST_I, "FT LIST I")
	STATUT_NAME(D_LST, "D_LIST test")
	STATUT_NAME(D_LIST_I, "FT D_LIST I")
	STATUT_NAME(STRCHRSTR, "ft_strchrstr")
	STATUT_NAME(STRCHR, "ft_strchr")
	STATUT_NAME(STRRCHR, "ft_strrchr")
	STATUT_NAME(ROTN, "ft_rotn")
	STATUT_NAME(STREQU, "ft_strequ")
	STATUT_NAME(STRNEQU, "ft_strnequ")
	STATUT_NAME(STRJOIN, "ft_strjoin")
	STATUT_NAME(STRSPLIT, "ft_strsplit")
	STATUT_NAME(STRSUB, "ft_strsub")
	STATUT_NAME(STRTRIM, "ft_strstrim")
	STATUT_NAME(STRMAP, "ft_strmap")
	STATUT_NAME(STRMAPI, "ft_strmapi")
	STATUT_NAME(STRITER, "ft_striter")
	STATUT_NAME(STRITERI, "ft_striteri")
	STATUT_NAME(STRCLR, "ft_strclr")
	STATUT_NAME(STRDEL, "ft_strdel")
	STATUT_NAME(LST, "LIST test")
	STATUT_NAME(SWAPC, "ft_test_swap_contents")
	STATUT_NAME(STRCACMP, "ft_strcasecmp")
	STATUT_NAME(MEMALLOC, "ft_memalloc")
	STATUT_NAME(REALLOC, "ft_realloc")
	STATUT_NAME(STRCAT, "ft_strcat");
}

void	print_result_test(void)
{
	if (taberror.er == 1)
		printf("%s :%s FAIL\n%s", taberror.f_name ,RED, NO_COL);
	else
		printf("%s :%s SUCESS\n%s", taberror.f_name, GREEN, NO_COL);
}

void	error_sys(int er)
{
	if (er == 1)
		printf("Malloc faild..\n");
	exit(-1);
}

void	free_tab(char **tab, int n)
{
	int i = 0;
	
	while (i < n)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

void	error(void)
{
	taberror.er = 1;
}

void	iter_dat(char *c)
{
	if (*c >= 'a' && *c <= 'z')
		*c = *c - 32;
	else if (*c >= 'A' && *c <= 'Z')
		*c += 32;
}

void	iteri_dati(unsigned int i, char *c)
{
	if (i == 3 || i == 11)
		*c = 'X';
	else if (isalpha(*c) && islower(*c))
		*c -= 32;
	else if (isalpha(*c) && isupper(*c))
		*c += 32;
}

void	ft_test_strcat(void)
{
	char *str;

	get_f_name(STRCAT);
	#ifndef TRY_SEGFAULT_THIS_SHIT
	ft_strcat(NULL, NULL);
	ft_strcat(NULL, "PD");
	#endif
	str = malloc(sizeof(char) * 10);
	ft_strcat(str, "wesh");
	ft_strcat(str, " pd");
	if (strcmp(str, "wesh pd") != 0)
		error();
	print_result_test();
}

void	ft_test_strcasecmp(void)
{
	char *str="wEsH";
	char *str2="WESH";

	get_f_name(STRCACMP);
	#ifndef TRY_SEGFAULT_THIS_SHIT
	ft_strcasecmp(NULL, NULL);
	ft_strcasecmp(NULL, str);
	#endif

	if (ft_strcasecmp(str, str2) != 0)
		error();
	if (ft_strcasecmp(str, "wESHh") == 0)
		error();
	print_result_test();
}

void	ft_test_realloc(void)
{
	char	*str;
	int		i;

	i = 4;
	get_f_name(REALLOC);
	#ifndef TRY_SEGFAULT_THIS_SHIT
	ft_realloc(NULL, 0, -1);
	ft_realloc(str, 0, 0);
	#endif

	str = malloc(sizeof(char) * 5);
	strcpy(str, "Wesh");
	str = ft_realloc(str, ft_strlen(str) + 1, sizeof(char) * 50);
	while (i < 50)
	{
		if (str[i] != 0)
			error();
		i++;
	}
	strcat(str, " PD");
	if (strcmp(str, "Wesh PD") != 0)
		error();
	print_result_test();


}

void	ft_test_memalloc(void)
{
	char	*str;
	int		*ptr;
	int		i;

	i = 0;
	get_f_name(MEMALLOC);
	#ifndef TRY_SEGFAULT_THIS_SHIT
	ft_memalloc(-1);
	ft_memalloc(sizeof(char) * 0);
	ft_memalloc(0);
	#endif

	str = (char *)ft_memalloc(sizeof(char) * 50);
	while (i < 50)
	{
		if (str[i] != 0)
			error();
		i++;
	}
	ptr = (int *)ft_memalloc(sizeof(int) * 10);
	i = 0;
	while (i++ < 10)
	{
		if (ptr[i] != 0)
			error();
		i++;
	}
	print_result_test();
}

void	ft_test_strdel(void)
{
	char *str;

	get_f_name(STRDEL);
	#ifndef TRY_SEGFAULT_THIS_SHIT
	ft_strdel(NULL);
	#endif
	str = (char *)malloc(sizeof(char) * 10);
	ft_strdel(&str);
	if (str != NULL)
		error();
	print_result_test();
}

void	ft_test_swap_contents(void)
{
	t_dlist *list;
	char *str="Bonjour";
	char *str2="Wesh";
	
	get_f_name(SWAPC);
	#ifndef TRY_SEGFAULT_THIS_SHIT
	ft_swap_contents(NULL, NULL);
	#endif

	list = ft_dlstnew(str, ft_strlen(str) + 1);
	ft_dlstadd_end(&list, ft_dlstnew(str2, ft_strlen(str2) + 1));
	if (strcmp((char*)list->next->content, "Wesh") != 0)
		error();
	if (strcmp((char*)list->content, "Bonjour") != 0)
		error();
	ft_swap_contents(&list, &list->next);
	if (strcmp((char*)list->content, "Wesh") != 0)
		error();
	if (strcmp((char*)list->next->content, "Bonjour") != 0)
		error();
	print_result_test();
}

void	ft_test_strclr(void)
{
	char *str;
	int i;

	i = 0;
	get_f_name(STRCLR);
	str = (char *)malloc(sizeof(char) * 5);
	#ifndef TRY_SEGFAULT_THIS_SHIT
	ft_strclr(NULL);
	#endif
	ft_strclr(str);
	while (i < 5)
	{
		if (str[i] != '\0')
			error();
		i++;
	}
	free(str);
	print_result_test();
}

void	ft_test_striteri(void)
{
	char *str = ft_strdup("weshmagueule");

	get_f_name(STRITERI);
	#ifndef TRY_SEGFAULT_THIS_SHIT
	ft_striteri(NULL, NULL);
	ft_striteri(NULL, &iteri_dati);
	#endif

	ft_striteri(str, &iteri_dati);
	if (strcmp(str, "WESXMAGUEULX") != 0)
		error();
	print_result_test();
}

void	ft_test_striter(void)
{
	char *str = ft_strdup("weshmagueule");
	
	get_f_name(STRITER);
	#ifndef TRY_SEGFAULT_THIS_SHIT
	printf("SISI\n");
	// ft_striter(NULL, gd&iter_dat);
	#endif

	ft_striter(str, &iter_dat);
	if (strcmp(str, "WESHMAGUEULE") != 0)
		error();
	print_result_test();
}

void	ft_test_strtrim(void)
{
	char *newstr;
	char *str=" \t \n TestVraiBail \t     \n";
	char *str2="   \t\nSisi\n\tpd\t\n";
	char *str3=" b i e n ?";
	char *str4="test";

	get_f_name(STRTRIM);
	#ifndef TRY_SEGFAULT_THIS_SHIT
	ft_strtrim(NULL);
	#endif
	newstr = ft_strtrim(str);
	if (strcmp(newstr, "TestVraiBail") != 0)
		error();
	free(newstr);
	newstr = ft_strtrim(str2);
	if (strcmp(newstr, "Sisi\n\tpd") != 0)
		error();
	free(newstr);
	newstr = ft_strtrim(str3);
	if (strcmp(newstr, "b i e n ?") != 0)
		error();
	free(newstr);
	newstr = ft_strtrim(str4);
	if (strcmp(newstr, "test") != 0)
		error();
	free(newstr);
	print_result_test();
}

void	ft_test_strsplit(void)
{
	char *str="***wesh*bien*ou*quoi?*";
	char *str2="weshxxxxbienxca?";
	char *str3="C**************Comment";
	char *str4="*******";
	char *str5="Bien?";
	char **tab;

	#ifndef TRY_SEGFAULT_THIS_SHIT
	ft_strsplit(NULL, NULL);
	ft_strsplit(NULL, '\0');
	#endif
	get_f_name(STRSPLIT);
	tab = ft_strsplit(str, '*');
	if (strcmp(tab[0], "wesh") != 0 || strcmp(tab[1], "bien") != 0 || strcmp(tab[2], "ou") != 0
		|| strcmp(tab[3], "quoi?") != 0 || tab[4] != 0)
		error();
	free_tab(tab, 5);
	tab = ft_strsplit(str2, 'x');
	if (strcmp(tab[0], "wesh") != 0 || strcmp(tab[1], "bien") != 0 || strcmp(tab[2], "ca?") != 0
		|| tab[3] != 0)
		error();
	free_tab(tab, 4);
	tab = ft_strsplit(str3, '*');
	if (strcmp(tab[0], "C") != 0 || strcmp(tab[1], "Comment") != 0 || tab[2] != 0)
		error();
	free_tab(tab, 3);
	tab = ft_strsplit(str4, '*');
	if (tab[0] != 0)
		error();
	free_tab(tab, 1);
	tab = ft_strsplit(str5, '*');
	if (strcmp(tab[0], "Bien?") != 0 || tab[1] != 0)
		error();
	free_tab(tab, 2);
	print_result_test();
}

void	ft_test_strsub(void)
{
	char *str="Wesh Bien?";
	char *newstr;

	#ifndef TRY_SEGFAULT_THIS_SHIT
	ft_strsub(NULL, 10, 10);
	ft_strsub(NULL, 10, 0);
	#endif
	get_f_name(STRSUB);
	newstr = ft_strsub(str, 5, 6);
	if (strcmp(newstr, "Bien?") != 0)
		error();
	free(newstr);
	newstr = ft_strsub(str, 0, 4);
	if (strcmp(newstr, "Wesh") != 0)
		error();
	free(newstr);
	newstr = ft_strsub(str, 5, 2);
	if (strcmp(newstr, "Bi") != 0)
		error();
	free(newstr);
	print_result_test();
}

void	ft_test_strjoin(void)
{
	char *str="Wesh";
	char *str2=" Bien?";

	get_f_name(STRJOIN);
	#ifndef TRY_SEGFAULT_THIS_SHIT
	if (ft_strjoin(NULL, NULL) != NULL)
		error();
	#endif
	if (strcmp(ft_strjoin(str, NULL), "Wesh") != 0)
		error();
	if (strcmp(ft_strjoin(NULL, str2), " Bien?") != 0)
		error();
	if (strcmp(ft_strjoin(str, str2), "Wesh Bien?") != 0)
		error();
	print_result_test();
}

void	ft_test_strequ(void)
{
	char str[]="Bien ou quoi batard?";
	char str2[]="Bien ou quoi batard?pd";

	get_f_name(STREQU);
	#ifndef TRY_SEGFAULT_THIS_SHIT
	ft_strequ(NULL, NULL);
	ft_strequ(NULL, "");
	ft_strequ("", "");
	ft_strequ("", NULL);
	ft_strequ("", "\0");
	#endif
	if (ft_strequ(str, str2) != 0)
		error();
	if (ft_strequ(str, "Bien ou quoi batard?") != 1)
		error();
	if (ft_strequ(str2, str) != 0)
		error();
	print_result_test();
}

void	ft_test_strnequ(void)
{
	char str[]="Bien ou quoi batard?";
	char str2[]="Bien ou quoi batard?pd";

	get_f_name(STRNEQU);
	#ifndef TRY_SEGFAULT_THIS_SHIT
	ft_strnequ(NULL, NULL, 5);
	ft_strnequ(NULL, NULL, 0);
	ft_strnequ(NULL, "", 5);
	ft_strnequ("", "", 5);
	ft_strnequ("", NULL, 0);
	ft_strnequ("", "\0", 4);
	#endif
	if (ft_strnequ(str2, str, 20) != 1)
		error();
	if (ft_strnequ(str, str2, 20) != 1)
		error();
	if (ft_strnequ(str, str2, 3) != 1)
		error();
	if (ft_strnequ(str, "Bien ou quoi batard?", 3) != 1)
		error();
	if (ft_strnequ(str2, "Bien", 5) != 0)
		error();
	print_result_test();
}

void	ft_test_rot_n(void)
{
	char *str="Wesh ma gueule";

	get_f_name(ROTN);
	#ifdef TRY_SEGFAULT_THIS_SHIT
	ft_rotn(NULL, 1000000);
	#endif
	if (strcmp(ft_rotn(str, 12), "Iqet ym sgqgxq") != 0)
		error();
	#ifdef TRY_OCTAL_SET
	//char *str2 = "\124\165\40\164\47\145\156\156\165\151\145\163\77";
	//if (strcmp(ft_rotn(str2, 18), "Lm l’wffmawk?") != 0)
	//	error();
	#endif
	print_result_test();
}

void	ft_test_strrchr(void)
{
	char str[]="da test bro\n\n\n";
	char str2[]="Wesh Ma Gueule";

	get_f_name(STRRCHR);
	#ifdef TRY_SEGFAULT_THIS_SHIT
	ft_strrchr(NULL, '\0');
	ft_strrchr("", '\0');
	#endif
	if (strcmp(ft_strrchr(str, '\n'), "\n") != 0)
		error();
	if (strcmp(ft_strrchr(str, 't'), "t bro\n\n\n") != 0)
		error();
	if (strcmp(ft_strrchr(str2, 'e'), "e") != 0)
		error();
	print_result_test();
}

void	ft_test_strchr(void)
{
	char str[]="da test bro\n\n\n";
	char str2[]="Wesh Ma Gueule";

	get_f_name(STRCHR);
	#ifdef TRY_SEGFAULT_THIS_SHIT
	ft_strchr(NULL, '\0');
	ft_strchr("", '\0');
	#endif
	if (strcmp(ft_strchr(str, '\n'), "\n\n\n") != 0)
		error();
	if (strcmp(ft_strchr(str, 't'), "test bro\n\n\n") != 0)
		error();
	if (strcmp(ft_strchr(str2, 'W'), "Wesh Ma Gueule") != 0)
		error();
	print_result_test();
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

char	maj_dat(char c)
{
	if (isalpha(c) && islower(c))
		return (c - 32);
	if (isalpha(c) && isupper(c))
		return (c + 32);
	return (c);
}

char	maj_dati(unsigned int i, char c)
{
	if (i == 3 || i == 11)
		return ('X');
	if (isalpha(c) && islower(c))
		return (c - 32);
	if (isalpha(c) && isupper(c))
		return (c + 32);
	return (c);
}

void	ft_test_strmapi(void)
{
	char *str="weshmagueule";
	char *newstr;

	get_f_name(STRMAPI);
	#ifndef TRY_SEGFAULT_THIS_SHIT
	ft_strmapi(NULL, NULL);
	ft_strmapi(NULL, &maj_dat);
	#endif

	newstr = ft_strmapi(str, &maj_dati);
	if (strcmp(newstr, "WESXMAGUEULX") != 0)
		error();
	free(newstr);
	print_result_test();
}

void	ft_test_strmap(void)
{
	char *str="weshmagueule";
	char *newstr;

	get_f_name(STRMAP);
	#ifndef TRY_SEGFAULT_THIS_SHIT
	ft_strmap(NULL, NULL);
	ft_strmap(NULL, &maj_dat);
	#endif

	newstr = ft_strmap(str, &maj_dat);
	if (strcmp(newstr, "WESHMAGUEULE") != 0)
		error();
	free(newstr);
	print_result_test();
}

void	ft_test_strndup(void)
{
	char str[]="u will fail;;;";
	char str2[]="blah blah blaaah";
	char *newz;
	char *real;

	real = NULL;
	newz = NULL;
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

void	ft_test_dlist_i(void)
{
	t_dlist *list;
	char str[]="Premier lien";
	char str2[]="Deuxieme lien";
	char str4[]="nouveau PREMIER lien";
	t_dlist *newsec;

	get_f_name(D_LIST_I);
	list = ft_dlstnew(str, ft_strlen(str) + 1);
	ft_dlstadd_end(&list, ft_dlstnew(str2, ft_strlen(str) + 1));
	newsec = ft_dlstnew(str4, (ft_strlen(str4) + 1));
	ft_dlstadd_i(&list, newsec, 2);
	newsec = ft_dlstnew(str, (ft_strlen(str) + 1));
	ft_dlstadd_i(&list, newsec, 4);
	newsec = ft_dlstlast(list);
	if (strcmp((char *)newsec->content, "Premier lien") != 0)
		error();
	if (strcmp((char *)newsec->before->content, "nouveau PREMIER lien") != 0)
		error();
	if (strcmp((char *)newsec->before->before->content, "Deuxieme lien") != 0)
		error();
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
	char *str3 = NULL;

	#ifdef TRY_SEGFAULT_THIS_SHIT
	ft_strstr(NULL, NULL);
	ft_strstr(str3, str);
	ft_strstr(str, NULL);
	ft_strstr(NULL, str2);
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

	get_f_name(LST);
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
	char *str;
	get_f_name(ITOA);
	#ifdef TRY_SEGFAULT_THIS_SHIT
	str = ft_itoa(+1*74487);
	free(str);
	str = ft_itoa(0);
	free(str);
	#endif
	if (strcmp(str = ft_itoa(-1),"-1") != 0)
		error();
	free(str);
	if (strcmp(str = ft_itoa(0), "0") != 0)
		error();
	free(str);
	if (strcmp(str = ft_itoa(+1248787), "1248787") != 0)
		error();
	free(str);
	if (strcmp(str = ft_itoa(+45789), "45789") != 0)
		error();
	free(str);
	if (strcmp(str = ft_itoa(-12), "-12") != 0)
		error();
	free(str);
	if (strcmp(str = ft_itoa(2147483647), "2147483647") != 0)
		error();
	free(str);
	if (strcmp(str = ft_itoa(-2147483647), "-2147483647") != 0)
	 	error();
	 free(str);
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
		if (ft_isupper(str[i]) != isupper(str[i]))
			error();
		if (ft_islower(str[i]) != islower(str[i]))
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
		if (ft_isupper(str2[i]) != isupper(str2[i]))
			error();
		if (ft_islower(str2[i]) != islower(str2[i]))
			error();
		i++;
	}
	i = 0;
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
		if (ft_isupper(str3[i]) != isupper(str3[i]))
			error();
		if (ft_islower(str3[i]) != islower(str3[i]))
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
