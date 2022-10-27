/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallali <ahallali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 18:15:11 by ahallali          #+#    #+#             */
/*   Updated: 2022/10/27 03:19:40 by ahallali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static char	*ft_checkstart(char *s1, char *set)
{
	size_t	i;
	size_t	j;
	char	*start;

	start = s1;
	i = 0;
	while (s1[i])
	{
		j = 0;
		while (set[j])
		{
			if (set[j] == s1[i])
			{
				start = (s1 + i + 1);
				break ;
			}
			else if (s1[i] != set[j] && !set[j + 1])
				return (start);
			j++;
		}
		i++;
	}
	return (start);
}

static int	ft_checker(char c, char b, char **end, char *s)
{
	if (b == c)
	{
		*end = s;
		return (1);
	}
	return (0);
}

static char	*ft_checkend(char *s1, char *set)
{
	int		i;
	int		j;
	char	*end;

	end = NULL;
	i = ft_strlen(s1) - 1;
	while (i > 0)
	{
		j = 0;
		while (set[j])
		{
			if (ft_checker(set[j], s1[i], &end, s1 + i - 1))
				break ;
			else if (s1[i] != set[j] && !set[j + 1])
			{
				if (end != NULL)
					*(end + 1) = '\0';
				return (end);
			}
			j++;
		}
		i--;
	}
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*start;
	char	*ptr;
	char	*result;
	char	*end;

	if (!s1 || !set)
		return (NULL);
	result = NULL;
	ptr = ft_strdup((char *)s1);
	start = ft_checkstart(ptr, (char *)set);
	end = ft_checkend(ptr, (char *) set);
	result = ft_strdup(start);
	free(ptr);
	return (result);
}
