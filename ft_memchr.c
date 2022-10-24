/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallali <ahallali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 00:28:23 by ahallali          #+#    #+#             */
/*   Updated: 2022/10/23 01:28:03 by ahallali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

// #include<stdio.h>
// #include<string.h>
// #include<stdlib.h>
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*st;
	unsigned char	t;

	t = (unsigned char)c;
	st = (unsigned char *)s;
	i = 0;
	if (n == 0)
		return (NULL);
	while (n > i)
	{
		if (st[i] == t)
			return (st + i);
		i++;
	}
	return (NULL);
}
// int main() {

//     char *str = "abcdefgh";

//     // printf("%s\n", ft_memchr(NULL, str[4], 5));
//     printf("%s\n", memchr(NULL, str[4], 5));
//     return 0;
// }