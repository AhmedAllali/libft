/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallali <ahallali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 18:15:11 by ahallali          #+#    #+#             */
/*   Updated: 2022/10/24 03:29:55 by ahallali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char * checkstart (char * s1 ,char  *set)
{
    size_t i,j;
    char *start = s1;
    
    i=0;
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
            return start;
        j++;
       }
    i++;
    }
    return start;
}

char * checkend (char* s1 ,char *set)
{
    int i,j;
    char * end = NULL ;
    i=strlen (s1) - 1 ;
    while (i>0)
    {
         j = 0;
       while (set[j])
       {
         if (set[j] == s1[i])
         {
           end = (s1 + i - 1);
           break ;
         }
         else if (s1[i] != set[j] && !set[j + 1])
         {
            if(end!=NULL)
                *(end + 1) = '\0';
            return end;
         }
        j++;
       }
    i--;
    }
    return end;
}

char *ft_strtrim(char const *s1, char const *set)
{
    char * start;
    char *ptr;
    char *result;
    char * end;
    
    if (!s1 || !set)
      return (NULL);
    result=NULL;
    ptr= ft_strdup((char *)s1);
    start=checkstart(ptr,(char *)set);
    end =checkend(ptr,(char *) set);
    result=ft_strdup(start);
    free(ptr);
    return result;
}
