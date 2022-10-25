/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallali <ahallali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:54:41 by ahallali          #+#    #+#             */
/*   Updated: 2022/10/25 04:26:08 by ahallali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	wordcount(char *str, char sep)
{
	size_t	i;
	size_t	count ;
	int		flag;

	i = 0;
	count = 0;
	flag = 0;
	while (str[i])
	{
		if (str[i] == sep)
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			count += 1;
		}
		i++;
	}
	return (count);
}

size_t	wl(char *str, char sep)
{
	size_t	size;
	size_t	i;

	i = 0;
	size = 0;
	while (str[(i)] && str[i] != sep)
	{
		size++;
		(i)++;
	}
	return (size);
}

void ft_free(char **ptr, int size)
{
	while (--size >= 0)
	{
		free (ptr[size]);
		ptr[size] = NULL;
	}
	free(ptr);
}

char *allocate_word(char **ptr, int size, int j)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * size + 1);
	if (!str)
	{
		ft_free(ptr, j);
		return (NULL);
	}
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	size_t	j;
	size_t	i;
	size_t	a;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	ptr = (char **)malloc (sizeof (char *) * (wordcount ((char *)s, c) + 1));
	if (!ptr)
		return (NULL);
	while (s[i])
	{	
		while (s[i] == c )
			i++;
		if (s[i] == '\0')
			break;
			
			ptr[j] = allocate_word(ptr, wl((char *)s, c), j);
			if (!ptr[j])
				return (NULL);
			a = 0;
			while (s[i] && s[i] != c)
				ptr[j][a++] = s[i++];
			ptr[j++][a] = '\0';
	}
	return (ptr[j] = 0, ptr);
}


// int main()
// {
//     char t []="       chi ha ja la kh er";
//     char c =' ';
//     char **ptr;
//     int i = 0;
//     ptr = ft_split(t, c);
//     while (ptr[i])
//     {
//         printf("%s\n", ptr[i]);
// 		// printf("---------------");
// 		// printf("%s\n", NULL);
// 		// printf("---------------\n");
//         i++;
//     }
//     return (0);
// }
