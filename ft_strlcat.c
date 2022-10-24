/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallali <ahallali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 22:02:24 by ahallali          #+#    #+#             */
/*   Updated: 2022/10/19 01:53:08 by ahallali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	sz_d;

	sz_d = ft_strlen (dst);
	if (size == 0 || sz_d > size)
		return (ft_strlen(src) + size);
	i = 0;
	while (src[i] && i + sz_d < size - 1)
	{
		dst[sz_d+i] = src[i];
		i++;
	}
	if (sz_d < size)
		dst [i + ft_strlen (dst)] = '\0';
	return (sz_d + ft_strlen (src));
}
