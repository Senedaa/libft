/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabraham <sabraham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 18:03:55 by sabraham          #+#    #+#             */
/*   Updated: 2023/08/12 19:37:29 by sabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
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
// int main ()
// {
//     t_list *head = (t_list *)malloc(sizeof(t_list));
//     head->content = strdup("sened");
//     head->next = NULL;
//     // t_list *ptr = (t_list *)(sizeof(t_list));
//     // ptr -> content = strdup("alex");
//     // ptr -> next = NULL;
//     // head ->next = ptr;
//     t_list *ptr1 = ft_lstnew(strdup("alex"));
//     head->next = ptr1;
//     t_list *ptr2 = ft_lstnew(strdup("abraham"));
//     //head->next->next = ptr2;
//     printf("Before Addfront:\n");
//     print_list(head);
//     ft_lstadd_front(&head, ptr2);
//     //ptr2->next->next->next = NULL;
//     printf("After Addfront:\n");
//     print_list(ptr2);
// }
// int main()
// {
//     t_list *head = ft_lstnew("sened");
//     t_list *ptr1 = ft_lstnew("alex");
//     ft_lstadd_front(&head, ptr1);
//     t_list *ptr2 = ft_lstnew("abraham");
//     ft_lstadd_front(&head, ptr2);
//     print_list(head);
//     return 0;
// }