/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallali <ahallali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 14:07:13 by ahallali          #+#    #+#             */
/*   Updated: 2022/10/23 01:07:01 by ahallali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<string.h>
int	ft_strncmp(const char	*str1, const char	*str2, size_t lenght)
{
	size_t	i;

	i = 0;
	if (lenght == 0)
		return (0);
	while (i < lenght)
	{
		if ((unsigned char)str1[i] != (unsigned char)str2[i])
			return ((unsigned char)str1[i] - (unsigned char)str2[i]); 
		i++;
	}
	return (0);
}
