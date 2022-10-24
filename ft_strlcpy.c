/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallali <ahallali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 00:46:19 by ahallali          #+#    #+#             */
/*   Updated: 2022/10/19 00:24:07 by ahallali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

// #include<stdio.h>
// #include<string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	sz_src;
	size_t	i;

	sz_src = ft_strlen(src);
	i = 0;
	if (size == 0)
		return (sz_src);
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (sz_src);
}
