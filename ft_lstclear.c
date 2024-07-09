/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabraham <sabraham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 19:09:37 by sabraham          #+#    #+#             */
/*   Updated: 2023/08/08 22:35:07 by sabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del) (void *))
{
	t_list	*ptr;
	t_list	*current;

	if (!lst)
		return ;
	current = *lst;
	if (current == NULL)
		return ;
	while (current)
	{
		ptr = current -> next;
		ft_lstdelone(current, del);
		current = ptr;
	}
	*lst = NULL;
}

// void del(void *ptr)
// {
//     free(ptr);
// }

// int main()
// {
//     t_list *head = ft_lstnew("sened");
//     t_list *ptr1 = ft_lstnew("alex");
//     t_list *ptr2 = ft_lstnew("abraham");
//     head -> next = ptr1;
//     ptr1 -> next = ptr2;  
//     ft_lstclear(&head, del);
// }