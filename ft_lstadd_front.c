/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallali <ahallali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 01:29:55 by ahallali          #+#    #+#             */
/*   Updated: 2022/10/30 01:38:36 by ahallali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!*lst)
		*lst = new;
	else
	{
		new->next = *lst;
		*lst = new;
	}
}
// int main ()
// {

// 	new = ft_lstnew((void *)"ahmed");
// 	t_list	*head = ;
// 	t_list	*new = NULL;
// 	new = ft_lstnew((void *)"ahmed");
// 	ft_lstadd_front(&head,new);
// 	printf("%s",(char *)new->next);
// }