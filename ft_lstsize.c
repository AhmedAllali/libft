/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallali <ahallali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 01:32:33 by ahallali          #+#    #+#             */
/*   Updated: 2022/11/01 05:04:10 by ahallali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_lstsize(t_list *lst)
{
	int size;
	size = 0;
	while (lst)
	{
		lst= lst->next;
		size ++;
	}
	return (size);
}
// int main () 
// {
// 	t_list *lst;
// 	t_list *ptr;
// 	lst=ft_lstnew("ahmed");
// 	ptr=ft_lstnew("aaaaaa");
// 	lst->next = ptr;
	
	
// 	printf("%d",ft_lstsize(lst));
// }