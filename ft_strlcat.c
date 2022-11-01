/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallali <ahallali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 22:02:24 by ahallali          #+#    #+#             */
/*   Updated: 2022/10/28 23:55:21 by ahallali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	sz_d;

	i = 0;
	if (size == 0)
		return (ft_strlen(src) + size);
	sz_d = ft_strlen (dst);
	if (sz_d > size)
		return (ft_strlen(src) + size);
	while (src[i] && i + sz_d < size - 1)
	{
		dst[sz_d + i] = src[i];
		i++;
	}
	dst[sz_d + i] = 0;
	return (sz_d + ft_strlen (src));
}

// int main ()
// {
// 	char dst[20]="AB";
// 	char t[20]="CDEFGHI";
// 	// printf("%zu",ft_strlcat(dst,t,15));
// 	printf("%zu",ft_strlcat(NULL,dst,5));
// }