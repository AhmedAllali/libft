/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallali <ahallali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 04:57:04 by ahallali          #+#    #+#             */
/*   Updated: 2022/10/23 02:13:44 by ahallali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stdio.h>
#include <stdlib.h>
#include<string.h>
char *ft_strjoin(char const *s1, char const *s2)
{
	size_t sz_s1;
	size_t sz_s2;
	char * ptr;
	if (!s1 || !s2 )
		return (NULL);
	// if (!s2)
	// 	return ((char*)s1);
	sz_s1=strlen(s1);
	sz_s2=strlen(s2);
	
	ptr=(char*)malloc((sz_s1+sz_s2+1)*sizeof(char));
	if (!ptr)
		return (NULL);
	strlcpy(ptr,s1,sz_s1+1);
	strlcat(ptr,s2,(sz_s1+sz_s2+1));
	return (ptr);
}