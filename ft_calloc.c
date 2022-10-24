/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallali <ahallali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 21:03:04 by ahallali          #+#    #+#             */
/*   Updated: 2022/10/19 02:04:06 by ahallali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

// #include<stdio.h>
// #include<stdlib.h>

void	*ft_calloc(size_t	count, size_t size)
{
	unsigned char	*ptr;
	size_t			loop;

	loop = 0;
	ptr = (unsigned char *)malloc(count * sizeof(size));
	if (!ptr)
		return (NULL);
	while (loop < count)
		ptr[loop++] = 0;
	return ((void *)ptr);
}
// int main ()
// {
// printf("%s",ft_calloc(10, sizeof(int)));
// }