/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabraham <sabraham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 18:04:40 by sabraham          #+#    #+#             */
/*   Updated: 2023/08/08 18:07:48 by sabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ptr;

	if (lst && new)
	{
		ptr = *lst;
		if (ptr == NULL)
		{
			*lst = new;
			return ;
		}
		while (ptr -> next)
		{
			ptr = ptr -> next;
		}
		ptr -> next = new;
	}
}

// void print_list(t_list *head)
// {
//     t_list *ptr;

//     ptr = head;
//     while (ptr != NULL)
//     {
//         printf("%s\n", ptr->content);
//         ptr = ptr->next;
//     }
// }

// int main()
// {
//     t_list *head = ft_lstnew("sened");

//     t_list *ptr1 = ft_lstnew("alex");
//     ft_lstadd_back(&head, ptr1);

//     //t_list *ptr2 = ft_lstnew("abraham");
//     //ft_lstadd_back(&head, ptr2);

//     print_list(head);

//     return 0;
// }