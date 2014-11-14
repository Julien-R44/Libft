/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/13 02:15:36 by y0ja              #+#    #+#             */
/*   Updated: 2014/11/14 01:13:07 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_H
# define TEST_H

#include "../libft.h"
#include <stdio.h>
#include <string.h>

#define RED  "\x1B[31m"
#define GREEN	"\x1B[32m"
#define NO_COL  "\x1B[0m"

typedef enum e_func
{
	ATOI,
	BZERO,
	STRREV,
	STRCLEN,
	MEMCCPY,
	STRSTR,
	IS_ALL,
	ITOA,
	D_LST,
	STRNDUP,
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
void	ft_test_strrev(void);
void	ft_test_strstr(void);
void	ft_test_is_all(void);
void	ft_test_strclen(void);
void	ft_test_memccpy(void);
void	ft_test_lstadd_end_print(void);
void	ft_test_double_list(void);
void	ft_test_strndup(void);

#endif