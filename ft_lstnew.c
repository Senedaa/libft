/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabraham <sabraham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 16:30:25 by sabraham          #+#    #+#             */
/*   Updated: 2023/08/08 20:18:34 by sabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*head;

	head = (t_list *)malloc(sizeof(t_list));
	if (head == NULL)
		return (NULL);
	head -> content = content;
	head -> next = NULL;
	return (head);
}

// int main ()
// {
//     int *data = (int *)malloc(sizeof(int));
//     *data = 116;
//     t_list *head;
//     t_list *ptr;
//     head = ft_lstnew(data);
//     printf("%s\n", head -> content);    
//     ptr = ft_lstnew(ft_strdup("Sened"));
//     head->next = ptr;
//     printf("%s\n", ptr -> content); 
// }