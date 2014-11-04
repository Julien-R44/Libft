/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jripoute <jripoute@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 01:01:28 by jripoute          #+#    #+#             */
/*   Updated: 2014/11/04 01:05:53 by jripoute         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{

}

int main(void)
{
	char str[15] = {'1', '2', '3', '4', '5', '6', '7', '8', 0};
	char str2[]="WESH";
	ft_strlcat(str, str2, 3)
	printf("%s\n", str);
}