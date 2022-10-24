/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallali <ahallali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 23:02:19 by ahallali          #+#    #+#             */
/*   Updated: 2022/10/23 01:10:56 by ahallali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle == 0 || !needle[0])
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		j = 0;
		while (needle[j] && i < len)
		{
			if (haystack[i] != needle[j])
			{
				i -= j;
				break ;
			}
			if (!needle[j + 1])
				return ((char *)haystack + i - j);
			j++;
			i++;
		}
		i++;
	}
	return (NULL);
}
