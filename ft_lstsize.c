/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabraham <sabraham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 17:55:37 by sabraham          #+#    #+#             */
/*   Updated: 2023/08/08 17:59:38 by sabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*ptr;

	i = 0;
	if (lst == NULL)
		return (0);
	ptr = lst;
	while (ptr)
	{
		i++;
		ptr = ptr -> next;
	}
	return (i);
}

// int main()
// {
//     t_list *head = ft_lstnew("sened");
//     t_list *ptr1 = ft_lstnew("alex");
//     t_list *ptr2 = ft_lstnew("abraham");
//     head -> next = ptr1;
//     ptr1 -> next = ptr2;  
//     printf("%d\n",ft_lstsize(head));
//     return 0;
// }