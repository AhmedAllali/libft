/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallali <ahallali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 05:05:28 by ahallali          #+#    #+#             */
/*   Updated: 2022/11/01 05:36:18 by ahallali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list *ft_lstlast(t_list *lst)
{
    if (!lst)
        return (0);
    while (lst)
    {
        lst=lst->next;
    }
    return (lst);
}

int main()
{
    t_list *zeb;
    t_list *rass;
    int i=8;
    zeb =ft_lstnew(ft_strdup("jesus"));
    rass=zeb;
    while (i>0)
    {
        zeb=ft_lstnew(ft_strdup("zok"));
        ft_lstadd_front(&rass,zeb);
        i--;
    }
    while (rass)
    {
        printf("%s\n",(char *)rass->content);
        rass=rass->next;
    }
    return 0;
}