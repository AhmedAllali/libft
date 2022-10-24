/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallali <ahallali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 23:41:18 by ahallali          #+#    #+#             */
/*   Updated: 2022/10/22 04:20:56 by ahallali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"libft.h"
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t i;
	size_t len_s;
	char *ptr;
	if (!s)
		return (NULL);
	len_s = ft_strlen(s);
	i=0;
	if (start >= len_s)
		len=0;
	else if (len > len_s)
		len = len_s - start;
	ptr = (char *) malloc ( len + 1 * sizeof(char));
	if (!ptr)
		return (NULL);
	while ( i < len)
	{
		ptr[i] = s[start+i];
			i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
