/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallali <ahallali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 11:09:53 by ahallali          #+#    #+#             */
/*   Updated: 2022/10/27 02:48:04 by ahallali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stdio.h>
#include<string.h>

void	*ft_memmove(void *dst, const void *src, size_t len )
{	
	int	i;

	if (len <= 0 || src == dst)
		return (dst);
	if (dst > src)
	{
		i = len - 1;
		while (i >= 0)
		{
			*((unsigned char *)dst + i) = *((unsigned char *)src + i);
			i--;
		}
		return (dst);
	}
	return (ft_memcpy(dst, src, len));
}
