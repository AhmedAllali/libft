/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallali <ahallali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 21:03:04 by ahallali          #+#    #+#             */
/*   Updated: 2022/10/27 02:22:09 by ahallali         ###   ########.fr       */
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
	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}
// int main ()
// {
// printf("%s",ft_calloc(10, sizeof(int)));
// }