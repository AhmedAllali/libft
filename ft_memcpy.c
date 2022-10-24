/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallali <ahallali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 16:56:56 by ahallali          #+#    #+#             */
/*   Updated: 2022/10/17 04:23:38 by ahallali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memcpy(void	*dest, const	void	*src, size_t	size)
{
	size_t	i;
	char	*c_dest;
	char	*c_src;

	i = 0;
	c_dest = (char *) dest;
	c_src = (char *) src;
	if (!c_dest && !c_src)
		return (NULL);
	while (i < size)
	{
			c_dest[i] = c_src[i];
			i++;
	}
	return ((void *) c_dest);
}
