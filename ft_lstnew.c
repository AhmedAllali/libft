/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallali <ahallali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 01:28:35 by ahallali          #+#    #+#             */
/*   Updated: 2022/11/01 04:22:53 by ahallali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc (sizeof(t_list));

	node->content = content;
	node->next = NULL;
	return (node);
}
// int main ()
// {
//     char * content ="chi tkharbiqa";
//     t_list *node=NULL;
//     node=ft_lstnew((void*)content);
//     if (node->next == NULL)
//     printf("lalalallala");
// }