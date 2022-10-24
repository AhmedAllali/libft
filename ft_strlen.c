/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallali <ahallali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 01:07:06 by ahallali          #+#    #+#             */
/*   Updated: 2022/10/17 02:25:06 by ahallali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

// #include<stdio.h>
// #include <string.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
// int main()
// {
//  printf("ft_strlen[%d]\nstrlen[%lu]\n", (int)ft_strlen(NULL),strlen("sad"));
// }
// // if (src < dest)
// // =>
// // while (src && dest) {
// //     src[i] = dest[j]
// //     j--
// //     i--;
// // }