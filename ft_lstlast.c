/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabraham <sabraham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 18:00:03 by sabraham          #+#    #+#             */
/*   Updated: 2023/08/08 18:02:45 by sabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*ptr;

	if (lst == NULL)
		return (NULL);
	ptr = lst;
	while (ptr -> next)
	{
		ptr = ptr -> next;
	}
	return (ptr);
}

// int main()
// {
//     t_list *head = ft_lstnew("sened");
//     t_list *ptr1 = ft_lstnew("alex");
//     t_list *ptr2 = ft_lstnew("abraham");
//     head -> next = ptr1;
//     ptr1 -> next = ptr2;  
//     t_list *result;
//     result = ft_lstlast(head);
//     printf("%s", result -> content);
//     return 0;
// }