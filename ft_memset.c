/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallali <ahallali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 00:02:51 by ahallali          #+#    #+#             */
/*   Updated: 2022/10/31 01:42:39 by ahallali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memset(void *ptr, int c, size_t len)
{
	size_t	i ;

	i = 0;
	while (i < len)
		((char *)ptr)[i++] = (unsigned char)c;
	return (ptr);
}
