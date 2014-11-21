/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jripoute <jripoute@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/13 02:15:36 by y0ja              #+#    #+#             */
/*   Updated: 2014/11/21 14:37:35 by jripoute         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_H
# define TEST_H

#include "../LIBFT/libft.h"
#include <stdio.h>
#include <string.h>

#define RED  	"\x1B[31m"
#define GREEN	"\x1B[32m"
#define NO_COL  "\x1B[0m"

typedef enum 	e_func
{
				LST,
				ROTN,
				ATOI,
				ITOA,
				SWAPC,
				D_LST,
				BZERO,
				LIST_I,
				STRDEL,
				STRREV,
				STRSTR,
				IS_ALL,
				STREQU,
				STRSUB,
				STRCHR,
				STRCAT,
				STRCLR,
				MEMCMP,
				STRMAP,
				STRNEW,
				STRRCHR,
				STRNDUP,
				MEMCCPY,
				STRNEQU,
				STRJOIN,
				STRCLEN,
				REALLOC,
				STRMAPI,
				STRTRIM,
				STRITER,
				STRCACMP,
				STRITERI,
				STRSPLIT,
				MEMALLOC,
				D_LIST_I,
				STRCHRSTR,
}				e_funcz;

typedef struct	s_test
{
	char		*f_name;
	int 		er;
}				t_test;

// Global t_test
t_test 			taberror;

// Tools
void			get_f_name(int f_name);
void			print_result_test(void);
void			error(void);
void			error_sys(int er);
void			free_tab(char **tab, int n);

// Tools testing
void			iter_dat(char *c);
void			iteri_dati(unsigned int i, char *c);
char 			maj_dat(char c);
char 			maj_dati(unsigned int i, char c);

// ft_test
void			ft_test_atoi(void);
void			ft_test_itoa(void);
void			ft_test_rot_n(void);
void			ft_test_bzero(void);
void			ft_test_list_i(void);
void			ft_test_strrev(void);
void			ft_test_strsub(void);
void			ft_test_strclr(void);
void			ft_test_strchr(void);
void			ft_test_strmap(void);
void			ft_test_strstr(void);
void			ft_test_is_all(void);
void			ft_test_strequ(void);
void			ft_test_strdel(void);
void			ft_test_strnew(void);
void			ft_test_strcat(void);
void			ft_test_strmapi(void);
void			ft_test_strnequ(void);
void			ft_test_strrchr(void);
void			ft_test_strtrim(void);
void			ft_test_strjoin(void);
void			ft_test_strndup(void);
void			ft_test_striter(void);
void			ft_test_strclen(void);
void			ft_test_dlist_i(void);
void			ft_test_memccpy(void);
void			ft_test_realloc(void);
void			ft_test_memalloc(void);
void			ft_test_striteri(void);
void			ft_test_strsplit(void);
void			ft_test_strchrstr(void);
void			ft_test_strcasecmp(void);
void			ft_test_double_list(void);
void			ft_test_swap_contents(void);
void			ft_test_lstadd_end_print(void);

#endif
