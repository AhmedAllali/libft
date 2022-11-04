/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallali <ahallali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 00:02:51 by ahallali          #+#    #+#             */
/*   Updated: 2022/11/04 11:22:26 by ahallali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stdio.h>
void	*ft_memset(void *ptr, int c, size_t len)
{
	size_t	i ;

	i = 0;
	while (i < len)
		((unsigned char *)ptr)[i++] = (unsigned char)c;
	return (ptr);
}
int main ()
{
	int i=0;
	int b[]={5,0,0};
	ft_memset(b,5,5);
	while (i<3)
	{
	printf("%d|",b[i]);
	i++;
	}
}