/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallali <ahallali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:54:41 by ahallali          #+#    #+#             */
/*   Updated: 2022/10/25 04:09:46 by ahallali         ###   ########.fr       */
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




char	**ft_split(char const *s, char c)
{
	char	**ptr;;

	if (!s)
		return (NULL);
	ptr = (char **)malloc (sizeof (char *) * (wordcount ((char *)s, c) + 1));
	if (!ptr)
		return (NULL);
	int i = 0;
	while(s[i]){
		while(__skip(s[i],c))
			i++;
		

	}
	

	return (ptr);
}

int main()
{
    char t []="       chi ha ja la kh er";
    char c =' ';
    char **ptr;
    int i = 0;
    ptr = ft_split(t, c);
    while (ptr[i])
    {
        printf("%s\n", ptr[i]);
		// printf("---------------");
		// printf("%s\n", NULL);
		// printf("---------------\n");
        i++;
    }
    return (0);
}
