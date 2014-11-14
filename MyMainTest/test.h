/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jripoute <jripoute@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/13 02:15:36 by y0ja              #+#    #+#             */
/*   Updated: 2014/11/14 16:46:22 by jripoute         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_H
# define TEST_H

#include "../Libft42/libft.h"
#include <stdio.h>
#include <string.h>

#define RED  "\x1B[31m"
#define GREEN	"\x1B[32m"
#define NO_COL  "\x1B[0m"

typedef enum e_func
{
	ATOI,
	ITOA,
	D_LST,
	BZERO,
	STRSTR,
	LIST_I,
	STRREV,
	IS_ALL,
	STRNDUP,
	MEMCCPY,
	STRCLEN,
	STRCHRSTR,
}			e_funcz;

typedef struct	s_test
{
	char	*f_name;
	int 	er;
}				t_test;

// Global t_test
t_test tab;

void	ft_test_atoi(void);
void	ft_test_itoa(void);
void	ft_test_bzero(void);
void	ft_test_list_i(void);
void	ft_test_strrev(void);
void	ft_test_strstr(void);
void	ft_test_is_all(void);
void	ft_test_strndup(void);
void	ft_test_strclen(void);
void	ft_test_memccpy(void);
void	ft_test_strchrstr(void);
void	ft_test_double_list(void);
void	ft_test_lstadd_end_print(void);

#endif